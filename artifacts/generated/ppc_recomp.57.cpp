#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822619E0"))) PPC_WEAK_FUNC(sub_822619E0);
PPC_FUNC_IMPL(__imp__sub_822619E0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82261a68
	if (ctx.cr0.eq) goto loc_82261A68;
	// cmplwi cr6,r10,40
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 40, ctx.xer);
	// bgt cr6,0x82261a68
	if (ctx.cr6.gt) goto loc_82261A68;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,46
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 46, ctx.xer);
	// bne cr6,0x82261a24
	if (!ctx.cr6.eq) goto loc_82261A24;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82261a68
	if (ctx.cr6.eq) goto loc_82261A68;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82261a24
	if (!ctx.cr6.eq) goto loc_82261A24;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x82261a68
	if (ctx.cr6.eq) goto loc_82261A68;
loc_82261A24:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82261a60
	if (!ctx.cr6.lt) goto loc_82261A60;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r10,r10,10624
	ctx.r10.s64 = ctx.r10.s64 + 10624;
loc_82261A34:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r8,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r6,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// and. r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82261a68
	if (!ctx.cr0.eq) goto loc_82261A68;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82261a34
	if (ctx.cr6.lt) goto loc_82261A34;
loc_82261A60:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82261A68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82261A70"))) PPC_WEAK_FUNC(sub_82261A70);
PPC_FUNC_IMPL(__imp__sub_82261A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r9,r3,11,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xF;
	// rlwinm r8,r3,16,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0x1F;
	// rlwinm r11,r3,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0x7F;
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// sth r8,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r8.u16);
	// rlwinm r10,r3,1,26,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3E;
	// rlwinm r7,r3,21,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 21) & 0x1F;
	// rlwinm r9,r3,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x3F;
	// sth r10,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r10.u16);
	// addi r11,r11,1980
	ctx.r11.s64 = ctx.r11.s64 + 1980;
	// sth r7,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r7.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r9,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241e5ec
	ctx.lr = 0x82261AC4;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82261AE8"))) PPC_WEAK_FUNC(sub_82261AE8);
PPC_FUNC_IMPL(__imp__sub_82261AE8) {
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
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8241e3cc
	ctx.lr = 0x82261B0C;
	__imp__RtlTimeToTimeFields(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lha r9,82(r1)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 82));
	// lhz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lhz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rlwimi r7,r9,5,23,26
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1E0) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFE1F);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// rlwinm r8,r8,0,26,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3E;
	// addi r10,r10,-1980
	ctx.r10.s64 = ctx.r10.s64 + -1980;
	// clrlwi r7,r7,23
	ctx.r7.u64 = ctx.r7.u32 & 0x1FF;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// rlwinm r10,r10,25,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xFE000000;
	// rlwimi r6,r7,5,0,26
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 5) & 0xFFFFFFE0) | (ctx.r6.u64 & 0xFFFFFFFF0000001F);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// rlwimi r9,r6,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,16,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFE00FFFF;
	// cmpwi cr6,r11,1980
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1980, ctx.xer);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// blt cr6,0x82261b7c
	if (ctx.cr6.lt) goto loc_82261B7C;
	// cmpwi cr6,r11,2107
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2107, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x82261b80
	if (!ctx.cr6.gt) goto loc_82261B80;
loc_82261B7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82261B80:
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

__attribute__((alias("__imp__sub_82261B94"))) PPC_WEAK_FUNC(sub_82261B94);
PPC_FUNC_IMPL(__imp__sub_82261B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82261B98"))) PPC_WEAK_FUNC(sub_82261B98);
PPC_FUNC_IMPL(__imp__sub_82261B98) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,206(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 206);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82261bd0
	if (!ctx.cr6.eq) goto loc_82261BD0;
	// li r10,170
	ctx.r10.s64 = 170;
	// divwu. r10,r4,r10
	ctx.r10.u32 = ctx.r4.u32 / ctx.r10.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r10,28900
	ctx.r10.s64 = 28900;
	// divwu. r10,r4,r10
	ctx.r10.u32 = ctx.r4.u32 / ctx.r10.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// slw r10,r9,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// beqlr 
	if (ctx.cr0.eq) return;
	// b 0x82261bfc
	goto loc_82261BFC;
loc_82261BD0:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x82261c0c
	if (!ctx.cr6.eq) goto loc_82261C0C;
	// li r10,28900
	ctx.r10.s64 = 28900;
	// lis r9,74
	ctx.r9.s64 = 4849664;
	// divwu r10,r4,r10
	ctx.r10.u32 = ctx.r4.u32 / ctx.r10.u32;
	// ori r9,r9,63336
	ctx.r9.u64 = ctx.r9.u64 | 63336;
	// mulli r10,r10,171
	ctx.r10.s64 = ctx.r10.s64 * 171;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// slw r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82261BFC:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_82261C0C:
	// li r10,170
	ctx.r10.s64 = 170;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82261C24"))) PPC_WEAK_FUNC(sub_82261C24);
PPC_FUNC_IMPL(__imp__sub_82261C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82261C28"))) PPC_WEAK_FUNC(sub_82261C28);
PPC_FUNC_IMPL(__imp__sub_82261C28) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r5,4096
	ctx.r11.s64 = ctx.r5.s64 + 4096;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82261ca8
	if (!ctx.cr6.lt) goto loc_82261CA8;
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r5,41
	ctx.r11.s64 = ctx.r5.s64 + 41;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82261C4C:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82261ca0
	if (!ctx.cr0.eq) goto loc_82261CA0;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r10,11(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82261ca0
	if (!ctx.cr6.gt) goto loc_82261CA0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r10,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
loc_82261CA0:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x82261c4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82261C4C;
loc_82261CA8:
	// rlwinm r7,r4,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r8,r3,128
	ctx.r8.s64 = ctx.r3.s64 + 128;
	// addi r6,r7,64
	ctx.r6.s64 = ctx.r7.s64 + 64;
	// b 0x82261d00
	goto loc_82261D00;
loc_82261CBC:
	// lwz r11,-72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -72);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,53(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82261d00
	if (!ctx.cr0.eq) goto loc_82261D00;
	// lhz r9,54(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 54);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82261d00
	if (ctx.cr6.lt) goto loc_82261D00;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82261d00
	if (!ctx.cr6.lt) goto loc_82261D00;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r9,r9,4095
	ctx.r9.s64 = ctx.r9.s64 + 4095;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82261d00
	if (!ctx.cr6.gt) goto loc_82261D00;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
loc_82261D00:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82261cbc
	if (!ctx.cr6.eq) goto loc_82261CBC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82261D0C"))) PPC_WEAK_FUNC(sub_82261D0C);
PPC_FUNC_IMPL(__imp__sub_82261D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82261D10"))) PPC_WEAK_FUNC(sub_82261D10);
PPC_FUNC_IMPL(__imp__sub_82261D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82261D18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,170
	ctx.r11.s64 = 170;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// divwu r11,r4,r11
	ctx.r11.u32 = ctx.r4.u32 / ctx.r11.u32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mulli r11,r11,170
	ctx.r11.s64 = ctx.r11.s64 * 170;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// li r10,20
	ctx.r10.s64 = 20;
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
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241e47c
	ctx.lr = 0x82261D60;
	__imp__XeCryptSha(ctx, base);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// srawi r10,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82261DB8"))) PPC_WEAK_FUNC(sub_82261DB8);
PPC_FUNC_IMPL(__imp__sub_82261DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82261DC0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r25,r10,20,12,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// rlwinm r28,r11,20,12,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82261e1c
	if (!ctx.cr6.eq) goto loc_82261E1C;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82261e34
	if (ctx.cr6.eq) goto loc_82261E34;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82261e38
	if (!ctx.cr6.eq) goto loc_82261E38;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82261e2c
	goto loc_82261E2C;
loc_82261E1C:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bne cr6,0x82261e38
	if (!ctx.cr6.eq) goto loc_82261E38;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
loc_82261E2C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82261e38
	if (!ctx.cr6.eq) goto loc_82261E38;
loc_82261E34:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82261E38:
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x82261E48;
	sub_82248A40(ctx, base);
	// lbz r10,53(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r27,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// rlwimi r11,r9,6,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// beq cr6,0x82261e84
	if (ctx.cr6.eq) goto loc_82261E84;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82261e84
	if (ctx.cr0.eq) goto loc_82261E84;
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// b 0x82261e90
	goto loc_82261E90;
loc_82261E84:
	// lbz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// rlwimi r10,r11,0,24,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xC0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF3F);
	// stb r10,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r10.u8);
loc_82261E90:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r8,r25,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 24) & 0xFF;
	// rlwinm r6,r25,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFF;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r7,64(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm r3,r28,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF;
	// lwz r5,68(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// rlwinm r10,r28,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFF;
	// stb r8,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r8.u8);
	// rlwinm r8,r29,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// lhz r11,54(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 54);
	// stb r6,43(r31)
	PPC_STORE_U8(ctx.r31.u32 + 43, ctx.r6.u8);
	// rlwinm r6,r29,16,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFF;
	// stb r25,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r25.u8);
	// stb r28,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r28.u8);
	// stb r3,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r3.u8);
	// stb r10,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r10.u8);
	// stb r29,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r29.u8);
	// stb r8,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r8.u8);
	// stb r6,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r6.u8);
	// sth r11,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r11.u16);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82261EF8"))) PPC_WEAK_FUNC(sub_82261EF8);
PPC_FUNC_IMPL(__imp__sub_82261EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82261F00;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,80(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82261F14;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82261f28
	if (ctx.cr6.eq) goto loc_82261F28;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82262054
	goto loc_82262054;
loc_82261F28:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82248f70
	ctx.lr = 0x82261F38;
	sub_82248F70(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// beq cr6,0x8226204c
	if (ctx.cr6.eq) goto loc_8226204C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82261fd4
	if (ctx.cr6.eq) goto loc_82261FD4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82261fb8
	if (ctx.cr6.eq) goto loc_82261FB8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82261f70
	if (ctx.cr6.eq) goto loc_82261F70;
	// lis r28,-16384
	ctx.r28.s64 = -1073741824;
	// ori r28,r28,13
	ctx.r28.u64 = ctx.r28.u64 | 13;
	// b 0x82262050
	goto loc_82262050;
loc_82261F70:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r9,40
	ctx.r9.s64 = 40;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x82261fa4
	if (!ctx.cr6.lt) goto loc_82261FA4;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r28,r28,5
	ctx.r28.u64 = ctx.r28.u64 | 5;
	// b 0x82262050
	goto loc_82262050;
loc_82261FA4:
	// lis r9,21332
	ctx.r9.s64 = 1398013952;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r9,17987
	ctx.r9.u64 = ctx.r9.u64 | 17987;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// b 0x82262050
	goto loc_82262050;
loc_82261FB8:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r9,61
	ctx.r9.s64 = 61;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lbz r9,207(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 207);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82262050
	goto loc_82262050;
loc_82261FD4:
	// lbz r10,205(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 205);
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82262014
	if (ctx.cr0.eq) goto loc_82262014;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82262014
	if (ctx.cr6.lt) goto loc_82262014;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8226201c
	goto loc_8226201C;
loc_82262014:
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
loc_8226201C:
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8226202c
	if (ctx.cr6.lt) goto loc_8226202C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8226202C:
	// li r10,8
	ctx.r10.s64 = 8;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r8,512
	ctx.r8.s64 = 512;
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r8,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// b 0x82262050
	goto loc_82262050;
loc_8226204C:
	// li r10,17
	ctx.r10.s64 = 17;
loc_82262050:
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
loc_82262054:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8226205C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241e5fc
	ctx.lr = 0x8226206C;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82262074"))) PPC_WEAK_FUNC(sub_82262074);
PPC_FUNC_IMPL(__imp__sub_82262074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82262078"))) PPC_WEAK_FUNC(sub_82262078);
PPC_FUNC_IMPL(__imp__sub_82262078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82262080;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r29,r11,7296
	ctx.r29.s64 = ctx.r11.s64 + 7296;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x8241df9c
	ctx.lr = 0x822620C8;
	__imp__NtReadFile(ctx, base);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x822620e8
	if (!ctx.cr6.eq) goto loc_822620E8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dfbc
	ctx.lr = 0x822620E4;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822620E8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82262104
	if (ctx.cr6.lt) goto loc_82262104;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82262104
	if (ctx.cr6.eq) goto loc_82262104;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,389
	ctx.r3.u64 = ctx.r3.u64 | 389;
loc_82262104:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8226210C"))) PPC_WEAK_FUNC(sub_8226210C);
PPC_FUNC_IMPL(__imp__sub_8226210C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82262110"))) PPC_WEAK_FUNC(sub_82262110);
PPC_FUNC_IMPL(__imp__sub_82262110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82262118;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r29,r11,7296
	ctx.r29.s64 = ctx.r11.s64 + 7296;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x8241df0c
	ctx.lr = 0x82262160;
	__imp__NtWriteFile(ctx, base);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x82262180
	if (!ctx.cr6.eq) goto loc_82262180;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dfbc
	ctx.lr = 0x8226217C;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82262180:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226219c
	if (ctx.cr6.lt) goto loc_8226219C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8226219c
	if (ctx.cr6.eq) goto loc_8226219C;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,389
	ctx.r3.u64 = ctx.r3.u64 | 389;
loc_8226219C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822621A4"))) PPC_WEAK_FUNC(sub_822621A4);
PPC_FUNC_IMPL(__imp__sub_822621A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822621A8"))) PPC_WEAK_FUNC(sub_822621A8);
PPC_FUNC_IMPL(__imp__sub_822621A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822621B0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r29,r11,7296
	ctx.r29.s64 = ctx.r11.s64 + 7296;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x8241e60c
	ctx.lr = 0x822621F8;
	__imp__NtWriteFileGather(ctx, base);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x82262218
	if (!ctx.cr6.eq) goto loc_82262218;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dfbc
	ctx.lr = 0x82262214;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82262218:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82262234
	if (ctx.cr6.lt) goto loc_82262234;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82262234
	if (ctx.cr6.eq) goto loc_82262234;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,389
	ctx.r3.u64 = ctx.r3.u64 | 389;
loc_82262234:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8226223C"))) PPC_WEAK_FUNC(sub_8226223C);
PPC_FUNC_IMPL(__imp__sub_8226223C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82262240"))) PPC_WEAK_FUNC(sub_82262240);
PPC_FUNC_IMPL(__imp__sub_82262240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82262248;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822622fc
	if (!ctx.cr6.eq) goto loc_822622FC;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r25,r3,16
	ctx.r25.s64 = ctx.r3.s64 + 16;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// addi r27,r11,18112
	ctx.r27.s64 = ctx.r11.s64 + 18112;
loc_82262274:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8241e50c
	ctx.lr = 0x8226228C;
	__imp__KeWaitForSingleObject(ctx, base);
	// b 0x822622c0
	goto loc_822622C0;
loc_82262290:
	// lwz r11,7296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7296);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7296(r28)
	PPC_STORE_U32(ctx.r28.u32 + 7296, ctx.r11.u32);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822622C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822622C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e62c
	ctx.lr = 0x822622C8;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8241e61c
	ctx.lr = 0x822622E8;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82262290
	if (!ctx.cr6.eq) goto loc_82262290;
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82262274
	if (ctx.cr6.eq) goto loc_82262274;
loc_822622FC:
	// addi r30,r26,4
	ctx.r30.s64 = ctx.r26.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e62c
	ctx.lr = 0x82262308;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r29,r26,8
	ctx.r29.s64 = ctx.r26.s64 + 8;
	// b 0x82262338
	goto loc_82262338;
loc_82262314:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// ori r11,r11,622
	ctx.r11.u64 = ctx.r11.u64 | 622;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r11.u32);
	// bl 0x8241e5fc
	ctx.lr = 0x8226232C;
	__imp__IoCompleteRequest(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e62c
	ctx.lr = 0x82262334;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82262338:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8241e61c
	ctx.lr = 0x82262354;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82262314
	if (!ctx.cr6.eq) goto loc_82262314;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82262364"))) PPC_WEAK_FUNC(sub_82262364);
PPC_FUNC_IMPL(__imp__sub_82262364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82262368"))) PPC_WEAK_FUNC(sub_82262368);
PPC_FUNC_IMPL(__imp__sub_82262368) {
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
	// lwz r10,256(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,7260
	ctx.r31.s64 = ctx.r11.s64 + 7260;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822623a4
	if (ctx.cr6.eq) goto loc_822623A4;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,622
	ctx.r3.u64 = ctx.r3.u64 | 622;
	// b 0x82262430
	goto loc_82262430;
loc_822623A4:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822623ec
	if (!ctx.cr6.eq) goto loc_822623EC;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r10,18112
	ctx.r10.s64 = ctx.r10.s64 + 18112;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822623E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8226242c
	goto loc_8226242C;
loc_822623EC:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8241e62c
	ctx.lr = 0x822623F4;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r9,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8241e61c
	ctx.lr = 0x8226241C;
	__imp__KfReleaseSpinLock(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8241e51c
	ctx.lr = 0x8226242C;
	__imp__KeSetEvent(ctx, base);
loc_8226242C:
	// li r3,259
	ctx.r3.s64 = 259;
loc_82262430:
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

__attribute__((alias("__imp__sub_82262448"))) PPC_WEAK_FUNC(sub_82262448);
PPC_FUNC_IMPL(__imp__sub_82262448) {
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
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r9,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r9.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lis r9,1024
	ctx.r9.s64 = 67108864;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// beq cr6,0x822624a0
	if (ctx.cr6.eq) goto loc_822624A0;
	// ori r9,r9,1706
	ctx.r9.u64 = ctx.r9.u64 | 1706;
	// b 0x822624a4
	goto loc_822624A4;
loc_822624A0:
	// ori r9,r9,1738
	ctx.r9.u64 = ctx.r9.u64 | 1738;
loc_822624A4:
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r11,8768
	ctx.r7.s64 = ctx.r11.s64 + 8768;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dfcc
	ctx.lr = 0x822624CC;
	__imp__ExCreateThread(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822624e0
	if (ctx.cr0.lt) goto loc_822624E0;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8241de6c
	ctx.lr = 0x822624E0;
	__imp__KeSetBasePriorityThread(ctx, base);
loc_822624E0:
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

__attribute__((alias("__imp__sub_822624FC"))) PPC_WEAK_FUNC(sub_822624FC);
PPC_FUNC_IMPL(__imp__sub_822624FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82262500"))) PPC_WEAK_FUNC(sub_82262500);
PPC_FUNC_IMPL(__imp__sub_82262500) {
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
	// stw r4,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82262540
	if (!ctx.cr6.lt) goto loc_82262540;
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82262540
	if (ctx.cr6.eq) goto loc_82262540;
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82262538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
loc_82262540:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82262554"))) PPC_WEAK_FUNC(sub_82262554);
PPC_FUNC_IMPL(__imp__sub_82262554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82262558"))) PPC_WEAK_FUNC(sub_82262558);
PPC_FUNC_IMPL(__imp__sub_82262558) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// lhz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,92
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 92, ctx.xer);
	// bne cr6,0x82262598
	if (!ctx.cr6.eq) goto loc_82262598;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82262598:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x822625b0
	goto loc_822625B0;
loc_822625A0:
	// lbzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,92
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 92, ctx.xer);
	// beq cr6,0x822625b8
	if (ctx.cr6.eq) goto loc_822625B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822625B0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822625a0
	if (ctx.cr6.lt) goto loc_822625A0;
loc_822625B8:
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
	// sth r10,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82262600"))) PPC_WEAK_FUNC(sub_82262600);
PPC_FUNC_IMPL(__imp__sub_82262600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82262608;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r26,4(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82262714
	if (!ctx.cr6.lt) goto loc_82262714;
	// subf r30,r31,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_82262638:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822626d8
	if (ctx.cr6.eq) goto loc_822626D8;
	// cmplwi cr6,r3,128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 128, ctx.xer);
	// blt cr6,0x822626d8
	if (ctx.cr6.lt) goto loc_822626D8;
	// cmplwi cr6,r3,192
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 192, ctx.xer);
	// blt cr6,0x82262728
	if (ctx.cr6.lt) goto loc_82262728;
	// cmplwi cr6,r3,224
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 224, ctx.xer);
	// bge cr6,0x82262690
	if (!ctx.cr6.lt) goto loc_82262690;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// blt cr6,0x82262728
	if (ctx.cr6.lt) goto loc_82262728;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bgt cr6,0x82262728
	if (ctx.cr6.gt) goto loc_82262728;
	// rlwimi r11,r3,6,21,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 6) & 0x7C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF83F);
	// clrlwi r3,r11,21
	ctx.r3.u64 = ctx.r11.u32 & 0x7FF;
	// b 0x822626d8
	goto loc_822626D8;
loc_82262690:
	// cmplwi cr6,r3,240
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 240, ctx.xer);
	// bge cr6,0x82262728
	if (!ctx.cr6.lt) goto loc_82262728;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82262728
	if (ctx.cr6.lt) goto loc_82262728;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bgt cr6,0x82262728
	if (ctx.cr6.gt) goto loc_82262728;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// bgt cr6,0x82262728
	if (ctx.cr6.gt) goto loc_82262728;
	// rlwimi r11,r3,6,22,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 6) & 0x3C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC3F);
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// rlwimi r10,r11,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_822626D8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822626ec
	if (ctx.cr6.eq) goto loc_822626EC;
	// cmplwi cr6,r3,46
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 46, ctx.xer);
	// bne cr6,0x82262728
	if (!ctx.cr6.eq) goto loc_82262728;
	// li r25,0
	ctx.r25.s64 = 0;
loc_822626EC:
	// cmplwi cr6,r3,42
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 42, ctx.xer);
	// bne cr6,0x822626fc
	if (!ctx.cr6.eq) goto loc_822626FC;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82262700
	goto loc_82262700;
loc_822626FC:
	// bl 0x8241e63c
	ctx.lr = 0x82262700;
	__imp__RtlUpcaseUnicodeChar(ctx, base);
loc_82262700:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// blt cr6,0x82262638
	if (ctx.cr6.lt) goto loc_82262638;
loc_82262714:
	// subf r11,r26,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r26.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
loc_82262720:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82262728:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82262720
	goto loc_82262720;
}

__attribute__((alias("__imp__sub_82262730"))) PPC_WEAK_FUNC(sub_82262730);
PPC_FUNC_IMPL(__imp__sub_82262730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82262738;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82262780
	if (ctx.cr6.eq) goto loc_82262780;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82262780
	if (ctx.cr0.eq) goto loc_82262780;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82262778
	if (!ctx.cr6.eq) goto loc_82262778;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,42
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 42, ctx.xer);
	// beq cr6,0x82262780
	if (ctx.cr6.eq) goto loc_82262780;
loc_82262778:
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82262784
	goto loc_82262784;
loc_82262780:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82262784:
	// bl 0x8241e64c
	ctx.lr = 0x82262788;
	__imp__ObIsTitleObject(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lis r4,25924
	ctx.r4.s64 = 1698955264;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r4,r4,28489
	ctx.r4.u64 = ctx.r4.u64 | 28489;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8241e5dc
	ctx.lr = 0x822627A4;
	__imp__ExAllocatePoolTypeWithTag(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822627b8
	if (!ctx.cr0.eq) goto loc_822627B8;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,154
	ctx.r3.u64 = ctx.r3.u64 | 154;
	// b 0x8226280c
	goto loc_8226280C;
loc_822627B8:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// beq cr6,0x82262804
	if (ctx.cr6.eq) goto loc_82262804;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82262600
	ctx.lr = 0x822627E8;
	sub_82262600(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82262804
	if (!ctx.cr0.eq) goto loc_82262804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241df2c
	ctx.lr = 0x822627F8;
	__imp__ExFreePool(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// b 0x8226280c
	goto loc_8226280C;
loc_82262804:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226280C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82262814"))) PPC_WEAK_FUNC(sub_82262814);
PPC_FUNC_IMPL(__imp__sub_82262814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82262818"))) PPC_WEAK_FUNC(sub_82262818);
PPC_FUNC_IMPL(__imp__sub_82262818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82262820;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82262838
	if (!ctx.cr6.eq) goto loc_82262838;
loc_82262830:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82262900
	goto loc_82262900;
loc_82262838:
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// add r27,r4,r5
	ctx.r27.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x822628ec
	goto loc_822628EC;
loc_82262850:
	// lhz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplwi cr6,r29,42
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 42, ctx.xer);
	// bne cr6,0x822628ac
	if (!ctx.cr6.eq) goto loc_822628AC;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82262908
	if (ctx.cr6.eq) goto loc_82262908;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82262890
	if (ctx.cr6.eq) goto loc_82262890;
loc_82262874:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x822628ec
	if (ctx.cr6.eq) goto loc_822628EC;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x82262874
	if (!ctx.cr6.eq) goto loc_82262874;
	// b 0x822628ec
	goto loc_822628EC;
loc_82262890:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x822628ec
	if (ctx.cr6.eq) goto loc_822628EC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x82262890
	if (!ctx.cr6.eq) goto loc_82262890;
	// b 0x822628ec
	goto loc_822628EC;
loc_822628AC:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82262830
	if (ctx.cr6.eq) goto loc_82262830;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822628c8
	if (ctx.cr6.eq) goto loc_822628C8;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x822628d0
	goto loc_822628D0;
loc_822628C8:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_822628D0:
	// cmplwi cr6,r29,63
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 63, ctx.xer);
	// beq cr6,0x822628ec
	if (ctx.cr6.eq) goto loc_822628EC;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822628ec
	if (ctx.cr6.eq) goto loc_822628EC;
	// bl 0x8241e63c
	ctx.lr = 0x822628E4;
	__imp__RtlUpcaseUnicodeChar(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82262830
	if (!ctx.cr6.eq) goto loc_82262830;
loc_822628EC:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82262850
	if (ctx.cr6.lt) goto loc_82262850;
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82262900:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82262908:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82262900
	goto loc_82262900;
}

__attribute__((alias("__imp__sub_82262910"))) PPC_WEAK_FUNC(sub_82262910);
PPC_FUNC_IMPL(__imp__sub_82262910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82262918;
	sub_82248774(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r11,r4,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// lbz r9,7(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r25,0(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r30,r9,30
	ctx.r30.u64 = ctx.r9.u32 & 0x3;
	// bl 0x82260b18
	ctx.lr = 0x82262944;
	sub_82260B18(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822629e8
	if (!ctx.cr6.eq) goto loc_822629E8;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r30,1
	ctx.r30.s64 = 1;
	// lbz r29,6(r27)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + 6);
	// lbz r10,201(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// add r24,r11,r25
	ctx.r24.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r23,48(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82262a00
	if (ctx.cr6.eq) goto loc_82262A00;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
loc_82262970:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r23
	ctx.r28.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822629d4
	if (!ctx.cr0.eq) goto loc_822629D4;
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822629d4
	if (ctx.cr0.eq) goto loc_822629D4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r9,r30,r25
	ctx.r9.u64 = ctx.r30.u64 + ctx.r25.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822629d4
	if (!ctx.cr6.eq) goto loc_822629D4;
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822629d4
	if (!ctx.cr0.eq) goto loc_822629D4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82260b18
	ctx.lr = 0x822629B8;
	sub_82260B18(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r11,r29,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0xFFFFF000;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// stwu r11,4(r26)
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r26.u32 = ea;
	// beq cr6,0x82262a00
	if (ctx.cr6.eq) goto loc_82262A00;
loc_822629D4:
	// lbz r29,6(r28)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
	// lbz r11,201(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82262970
	if (!ctx.cr6.eq) goto loc_82262970;
	// b 0x82262a00
	goto loc_82262A00;
loc_822629E8:
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82261b98
	ctx.lr = 0x822629F8;
	sub_82261B98(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82262A00:
	// lbz r11,7(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rldicl r11,r11,12,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0xFFFFFFFFFFF;
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x82262a38
	if (!ctx.cr6.eq) goto loc_82262A38;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82262110
	ctx.lr = 0x82262A34;
	sub_82262110(ctx, base);
	// b 0x82262a44
	goto loc_82262A44;
loc_82262A38:
	// rlwinm r5,r30,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFFFF000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822621a8
	ctx.lr = 0x82262A44;
	sub_822621A8(ctx, base);
loc_82262A44:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82262a5c
	if (!ctx.cr6.lt) goto loc_82262A5C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82262500
	ctx.lr = 0x82262A5C;
	sub_82262500(ctx, base);
loc_82262A5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82262A68"))) PPC_WEAK_FUNC(sub_82262A68);
PPC_FUNC_IMPL(__imp__sub_82262A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82262A70;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,201(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 201);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r4,6(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
loc_82262A8C:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82262ac8
	if (!ctx.cr0.eq) goto loc_82262AC8;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82262ac8
	if (ctx.cr0.eq) goto loc_82262AC8;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82262ac8
	if (ctx.cr0.eq) goto loc_82262AC8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82262910
	ctx.lr = 0x82262AC0;
	sub_82262910(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82262adc
	if (ctx.cr0.lt) goto loc_82262ADC;
loc_82262AC8:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82262ad8
	if (ctx.cr6.eq) goto loc_82262AD8;
	// lbz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// b 0x82262a8c
	goto loc_82262A8C;
loc_82262AD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82262ADC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82262AE4"))) PPC_WEAK_FUNC(sub_82262AE4);
PPC_FUNC_IMPL(__imp__sub_82262AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82262AE8"))) PPC_WEAK_FUNC(sub_82262AE8);
PPC_FUNC_IMPL(__imp__sub_82262AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82262AF0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,201(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 201);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r30,6(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// b 0x82262b24
	goto loc_82262B24;
loc_82262B18:
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82262b94
	if (ctx.cr6.eq) goto loc_82262B94;
	// lbz r30,6(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
loc_82262B24:
	// rotlwi r10,r30,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82262b18
	if (!ctx.cr0.eq) goto loc_82262B18;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82262b6c
	if (ctx.cr0.eq) goto loc_82262B6C;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne 0x82262b60
	if (!ctx.cr0.eq) goto loc_82262B60;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82262910
	ctx.lr = 0x82262B5C;
	sub_82262910(ctx, base);
	// b 0x82262b64
	goto loc_82262B64;
loc_82262B60:
	// bl 0x82262a68
	ctx.lr = 0x82262B64;
	sub_82262A68(ctx, base);
loc_82262B64:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82262bac
	if (ctx.cr6.lt) goto loc_82262BAC;
loc_82262B6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822609d0
	ctx.lr = 0x82262B84;
	sub_822609D0(ctx, base);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82262bac
	goto loc_82262BAC;
loc_82262B94:
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,229
	ctx.r4.u64 = ctx.r4.u64 | 229;
	// bl 0x82262500
	ctx.lr = 0x82262BA4;
	sub_82262500(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,229
	ctx.r3.u64 = ctx.r3.u64 | 229;
loc_82262BAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82262BB4"))) PPC_WEAK_FUNC(sub_82262BB4);
PPC_FUNC_IMPL(__imp__sub_82262BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82262BB8"))) PPC_WEAK_FUNC(sub_82262BB8);
PPC_FUNC_IMPL(__imp__sub_82262BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82262BC0;
	sub_82248770(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// bl 0x82262ae8
	ctx.lr = 0x82262BE8;
	sub_82262AE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82262d74
	if (ctx.cr0.lt) goto loc_82262D74;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// blt cr6,0x82262c34
	if (ctx.cr6.lt) goto loc_82262C34;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// bgt cr6,0x82262c34
	if (ctx.cr6.gt) goto loc_82262C34;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,20(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,10612
	ctx.r10.s64 = ctx.r10.s64 + 10612;
	// rlwinm r26,r9,2,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// divwu r10,r28,r11
	ctx.r10.u32 = ctx.r28.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// subf r28,r11,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r11.s64;
	// b 0x82262c38
	goto loc_82262C38;
loc_82262C34:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82262C38:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82262c4c
	if (!ctx.cr6.eq) goto loc_82262C4C;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x82262c5c
	goto loc_82262C5C;
loc_82262C4C:
	// addi r5,r24,-1
	ctx.r5.s64 = ctx.r24.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82261b98
	ctx.lr = 0x82262C5C;
	sub_82261B98(ctx, base);
loc_82262C5C:
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r3,r26
	ctx.r11.u64 = ctx.r3.u64 + ctx.r26.u64;
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// rlwinm r9,r27,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 12) & 0xFFFFF000;
	// ld r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// rldicl r11,r11,12,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0xFFFFFFFFFFF;
	// add r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82262078
	ctx.lr = 0x82262C90;
	sub_82262078(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82262cac
	if (!ctx.cr0.lt) goto loc_82262CAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82262500
	ctx.lr = 0x82262CA4;
	sub_82262500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82262d74
	goto loc_82262D74;
loc_82262CAC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82262d28
	if (ctx.cr6.eq) goto loc_82262D28;
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
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241e47c
	ctx.lr = 0x82262CD8;
	__imp__XeCryptSha(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r8,r25,20
	ctx.r8.s64 = ctx.r25.s64 + 20;
loc_82262CE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82262d04
	if (!ctx.cr0.eq) goto loc_82262D04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82262ce4
	if (!ctx.cr6.eq) goto loc_82262CE4;
loc_82262D04:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82262d28
	if (ctx.cr0.eq) goto loc_82262D28;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// bl 0x82262500
	ctx.lr = 0x82262D1C;
	sub_82262500(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
	// b 0x82262d74
	goto loc_82262D74;
loc_82262D28:
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// bl 0x822609d0
	ctx.lr = 0x82262D44;
	sub_822609D0(ctx, base);
	// li r11,8064
	ctx.r11.s64 = 8064;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// clrlwi r10,r24,30
	ctx.r10.u64 = ctx.r24.u32 & 0x3;
	// lbz r8,7(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rlwimi r11,r26,5,26,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 5) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// andi. r8,r8,220
	ctx.r8.u64 = ctx.r8.u64 & 220;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
loc_82262D74:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82262D7C"))) PPC_WEAK_FUNC(sub_82262D7C);
PPC_FUNC_IMPL(__imp__sub_82262D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82262D80"))) PPC_WEAK_FUNC(sub_82262D80);
PPC_FUNC_IMPL(__imp__sub_82262D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82262D88;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82260a70
	ctx.lr = 0x82262DAC;
	sub_82260A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82262dcc
	if (!ctx.cr0.eq) goto loc_82262DCC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82262ae8
	ctx.lr = 0x82262DC4;
	sub_82262AE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82262e68
	if (ctx.cr0.lt) goto loc_82262E68;
loc_82262DCC:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x82262e04
	if (ctx.cr6.lt) goto loc_82262E04;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// bgt cr6,0x82262e04
	if (ctx.cr6.gt) goto loc_82262E04;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,10612
	ctx.r10.s64 = ctx.r10.s64 + 10612;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// divwu r10,r29,r11
	ctx.r10.u32 = ctx.r29.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_82262E04:
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r26,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 12) & 0xFFFFF000;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248f70
	ctx.lr = 0x82262E24;
	sub_82248F70(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// bl 0x822609d0
	ctx.lr = 0x82262E40;
	sub_822609D0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r10,r27,0,30,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0x3) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r10,r11,6,0,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_82262E68:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82262E70"))) PPC_WEAK_FUNC(sub_82262E70);
PPC_FUNC_IMPL(__imp__sub_82262E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82262E78;
	sub_82248774(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lbz r26,202(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 202);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r31,r11,7296
	ctx.r31.s64 = ctx.r11.s64 + 7296;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82260ce8
	ctx.lr = 0x82262EBC;
	sub_82260CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82262f04
	if (!ctx.cr0.eq) goto loc_82262F04;
loc_82262EC4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// addi r24,r11,10612
	ctx.r24.s64 = ctx.r11.s64 + 10612;
	// beq cr6,0x82262f1c
	if (ctx.cr6.eq) goto loc_82262F1C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82260ce8
	ctx.lr = 0x82262EF4;
	sub_82260CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82262ec4
	if (ctx.cr0.eq) goto loc_82262EC4;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82262f88
	if (!ctx.cr6.eq) goto loc_82262F88;
loc_82262F04:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// b 0x82262f7c
	goto loc_82262F7C;
loc_82262F1C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r28,r30,176
	ctx.r28.s64 = ctx.r30.s64 + 176;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82262F2C:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82262bb8
	ctx.lr = 0x82262F48;
	sub_82262BB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82262f80
	if (ctx.cr0.lt) goto loc_82262F80;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82262f6c
	if (ctx.cr0.eq) goto loc_82262F6C;
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,7(r28)
	PPC_STORE_U8(ctx.r28.u32 + 7, ctx.r11.u8);
loc_82262F6C:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82262f8c
	if (!ctx.cr6.eq) goto loc_82262F8C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82262F7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82262F80:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82262F88:
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82262F8C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,170
	ctx.r10.s64 = 170;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// twllei r11,0
	// divwu r11,r27,r11
	ctx.r11.u32 = ctx.r27.u32 / ctx.r11.u32;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,170
	ctx.r10.s64 = ctx.r10.s64 * 170;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x82262FC8;
	sub_82248A40(ctx, base);
	// lbz r11,7(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 7);
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82262fe4
	if (!ctx.cr0.eq) goto loc_82262FE4;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82262FE4:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
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
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x82262f2c
	goto loc_82262F2C;
}

__attribute__((alias("__imp__sub_82263018"))) PPC_WEAK_FUNC(sub_82263018);
PPC_FUNC_IMPL(__imp__sub_82263018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82263020;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r28,202(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 202);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r11,10612
	ctx.r25.s64 = ctx.r11.s64 + 10612;
loc_8226304C:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82263090
	if (!ctx.cr6.eq) goto loc_82263090;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82263090
	if (ctx.cr6.eq) goto loc_82263090;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82262d80
	ctx.lr = 0x82263074;
	sub_82262D80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82263268
	if (ctx.cr0.lt) goto loc_82263268;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,31,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x822630d8
	goto loc_822630D8;
loc_82263090:
	// addi r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82260ce8
	ctx.lr = 0x822630AC;
	sub_82260CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822630d8
	if (!ctx.cr0.eq) goto loc_822630D8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82262bb8
	ctx.lr = 0x822630D0;
	sub_82262BB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82263268
	if (ctx.cr0.lt) goto loc_82263268;
loc_822630D8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82263194
	if (!ctx.cr0.eq) goto loc_82263194;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lbz r10,7(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwimi r10,r11,5,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// rlwimi r9,r11,30,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stb r10,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r10.u8);
	// li r10,170
	ctx.r10.s64 = 170;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8226316c
	if (!ctx.cr6.eq) goto loc_8226316C;
	// addi r11,r7,20
	ctx.r11.s64 = ctx.r7.s64 + 20;
loc_8226312C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82263154
	if (ctx.cr6.eq) goto loc_82263154;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82263160
	if (!ctx.cr6.eq) goto loc_82263160;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// b 0x8226315c
	goto loc_8226315C;
loc_82263154:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
loc_8226315C:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82263160:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bdnz 0x8226312c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226312C;
	// b 0x82263194
	goto loc_82263194;
loc_8226316C:
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
loc_82263170:
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// clrlwi r10,r6,1
	ctx.r10.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// rlwinm r9,r6,17,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0xFFFF;
	// rlwinm r6,r6,0,1,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40000000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stwu r10,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82263170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82263170;
loc_82263194:
	// lbz r11,7(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// ori r11,r11,68
	ctx.r11.u64 = ctx.r11.u64 | 68;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r11,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r11.u8);
	// lbz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// rlwimi r10,r11,3,28,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r11.u8);
	// bne 0x822631f8
	if (!ctx.cr0.eq) goto loc_822631F8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r11.u8);
	// beq cr6,0x82263228
	if (ctx.cr6.eq) goto loc_82263228;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// srawi r10,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_822631F8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82263228
	if (ctx.cr6.eq) goto loc_82263228;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// srawi r10,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82263228:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8226329c
	if (ctx.cr6.eq) goto loc_8226329C;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,170
	ctx.r10.s64 = 170;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// twllei r11,0
	// divwu r11,r26,r11
	ctx.r11.u32 = ctx.r26.u32 / ctx.r11.u32;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,170
	ctx.r10.s64 = ctx.r10.s64 * 170;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r30,r11,r7
	ctx.r30.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x8226304c
	goto loc_8226304C;
loc_82263268:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822632a4
	if (ctx.cr6.eq) goto loc_822632A4;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
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
	// b 0x822632a4
	goto loc_822632A4;
loc_8226329C:
	// stw r7,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822632A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_822632AC"))) PPC_WEAK_FUNC(sub_822632AC);
PPC_FUNC_IMPL(__imp__sub_822632AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822632B0"))) PPC_WEAK_FUNC(sub_822632B0);
PPC_FUNC_IMPL(__imp__sub_822632B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822632B8;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82260ce8
	ctx.lr = 0x822632DC;
	sub_82260CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822633a4
	if (!ctx.cr0.eq) goto loc_822633A4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82262e70
	ctx.lr = 0x822632F8;
	sub_82262E70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822633a8
	if (ctx.cr0.lt) goto loc_822633A8;
	// li r11,170
	ctx.r11.s64 = 170;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// divwu r11,r30,r11
	ctx.r11.u32 = ctx.r30.u32 / ctx.r11.u32;
	// li r5,24
	ctx.r5.s64 = 24;
	// mulli r11,r11,170
	ctx.r11.s64 = ctx.r11.s64 * 170;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x82263328;
	sub_82248A40(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
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
	// rlwinm r11,r9,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82263384
	if (ctx.cr6.eq) goto loc_82263384;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82263384
	if (ctx.cr6.eq) goto loc_82263384;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// bl 0x82262500
	ctx.lr = 0x82263378;
	sub_82262500(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
	// b 0x822633a8
	goto loc_822633A8;
loc_82263384:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82262bb8
	ctx.lr = 0x822633A0;
	sub_82262BB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_822633A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822633A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822633B0"))) PPC_WEAK_FUNC(sub_822633B0);
PPC_FUNC_IMPL(__imp__sub_822633B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822633B8;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82260ce8
	ctx.lr = 0x822633DC;
	sub_82260CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82263408
	if (!ctx.cr0.eq) goto loc_82263408;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82262bb8
	ctx.lr = 0x82263400;
	sub_82262BB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82263418
	if (ctx.cr0.lt) goto loc_82263418;
loc_82263408:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
loc_82263418:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82263424"))) PPC_WEAK_FUNC(sub_82263424);
PPC_FUNC_IMPL(__imp__sub_82263424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82263428"))) PPC_WEAK_FUNC(sub_82263428);
PPC_FUNC_IMPL(__imp__sub_82263428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82263430;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82260c40
	ctx.lr = 0x82263450;
	sub_82260C40(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82260ce8
	ctx.lr = 0x8226346C;
	sub_82260CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82263498
	if (!ctx.cr0.eq) goto loc_82263498;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82262bb8
	ctx.lr = 0x82263490;
	sub_82262BB8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x822634ac
	if (ctx.cr0.lt) goto loc_822634AC;
loc_82263498:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
loc_822634AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822634B8"))) PPC_WEAK_FUNC(sub_822634B8);
PPC_FUNC_IMPL(__imp__sub_822634B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x822634C0;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,201(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 201);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bne cr6,0x822634f4
	if (!ctx.cr6.eq) goto loc_822634F4;
	// lbz r11,202(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 202);
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// b 0x822634f8
	goto loc_822634F8;
loc_822634F4:
	// li r25,0
	ctx.r25.s64 = 0;
loc_822634F8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_822634FC:
	// lbz r4,6(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 6);
loc_82263500:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82263548
	if (!ctx.cr6.eq) goto loc_82263548;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82263548
	if (ctx.cr0.eq) goto loc_82263548;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82263548
	if (ctx.cr6.lt) goto loc_82263548;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82263548
	if (ctx.cr6.gt) goto loc_82263548;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82262910
	ctx.lr = 0x82263540;
	sub_82262910(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82263568
	if (ctx.cr0.lt) goto loc_82263568;
loc_82263548:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82263558
	if (ctx.cr6.eq) goto loc_82263558;
	// lbz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// b 0x82263500
	goto loc_82263500;
loc_82263558:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x822634fc
	if (!ctx.cr6.gt) goto loc_822634FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82263568:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82263570"))) PPC_WEAK_FUNC(sub_82263570);
PPC_FUNC_IMPL(__imp__sub_82263570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82263578;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226359c
	if (ctx.cr6.eq) goto loc_8226359C;
	// bl 0x8241df2c
	ctx.lr = 0x8226359C;
	__imp__ExFreePool(ctx, base);
loc_8226359C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x822635A4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822635b4
	if (ctx.cr6.eq) goto loc_822635B4;
	// bl 0x822616b0
	ctx.lr = 0x822635B4;
	sub_822616B0(ctx, base);
loc_822635B4:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x822635CC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e5fc
	ctx.lr = 0x822635E0;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822635E8"))) PPC_WEAK_FUNC(sub_822635E8);
PPC_FUNC_IMPL(__imp__sub_822635E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822635F0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,206(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 206);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r11,14(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// lwz r31,24(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bne 0x8226362c
	if (!ctx.cr0.eq) goto loc_8226362C;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,34
	ctx.r3.u64 = ctx.r3.u64 | 34;
	// b 0x82263698
	goto loc_82263698;
loc_8226362C:
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// addi r6,r29,56
	ctx.r6.s64 = ctx.r29.s64 + 56;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x8226364c
	if (!ctx.cr0.eq) goto loc_8226364C;
	// bl 0x8241e66c
	ctx.lr = 0x82263648;
	__imp__IoSetShareAccess(ctx, base);
	// b 0x8226365c
	goto loc_8226365C;
loc_8226364C:
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x8241e65c
	ctx.lr = 0x82263654;
	__imp__IoCheckShareAccess(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82263698
	if (ctx.cr0.lt) goto loc_82263698;
loc_8226365C:
	// lbz r11,53(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 53);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82261728
	ctx.lr = 0x8226366C;
	sub_82261728(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r30,128
	ctx.r10.s64 = ctx.r30.s64 + 128;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// lwz r9,128(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
loc_82263698:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822636A0"))) PPC_WEAK_FUNC(sub_822636A0);
PPC_FUNC_IMPL(__imp__sub_822636A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,7260
	ctx.r3.s64 = ctx.r11.s64 + 7260;
	// b 0x82262448
	sub_82262448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822636B0"))) PPC_WEAK_FUNC(sub_822636B0);
PPC_FUNC_IMPL(__imp__sub_822636B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r8,r11,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
loc_822636C4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822636e0
	goto loc_822636E0;
loc_822636CC:
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// lhz r7,54(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 54);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82263718
	if (ctx.cr6.eq) goto loc_82263718;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_822636E0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822636cc
	if (!ctx.cr6.eq) goto loc_822636CC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82263704
	if (ctx.cr0.eq) goto loc_82263704;
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// b 0x82263710
	goto loc_82263710;
loc_82263704:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82263710:
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x822636c4
	goto loc_822636C4;
loc_82263718:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82261db8
	sub_82261DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82263724"))) PPC_WEAK_FUNC(sub_82263724);
PPC_FUNC_IMPL(__imp__sub_82263724) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82263728"))) PPC_WEAK_FUNC(sub_82263728);
PPC_FUNC_IMPL(__imp__sub_82263728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82263730;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82263758
	if (ctx.cr0.eq) goto loc_82263758;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r29,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r29.u64);
	// b 0x8226376c
	goto loc_8226376C;
loc_82263758:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82261a70
	ctx.lr = 0x82263760;
	sub_82261A70(ctx, base);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x82261a70
	ctx.lr = 0x8226376C;
	sub_82261A70(ctx, base);
loc_8226376C:
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
	// std r3,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r3.u64);
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82263798
	if (ctx.cr0.eq) goto loc_82263798;
	// li r11,16
	ctx.r11.s64 = 16;
	// std r29,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r29.u64);
	// std r29,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r29.u64);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x822637b0
	goto loc_822637B0;
loc_82263798:
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
loc_822637B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822637B8"))) PPC_WEAK_FUNC(sub_822637B8);
PPC_FUNC_IMPL(__imp__sub_822637B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x822637C0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,80(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8241dd2c
	ctx.lr = 0x822637DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,136(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822637f0
	if (ctx.cr6.eq) goto loc_822637F0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x82263880
	goto loc_82263880;
loc_822637F0:
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82263808
	if (ctx.cr0.eq) goto loc_82263808;
	// lis r26,-16384
	ctx.r26.s64 = -1073741824;
	// ori r26,r26,296
	ctx.r26.u64 = ctx.r26.u64 | 296;
	// b 0x82263880
	goto loc_82263880;
loc_82263808:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82248f70
	ctx.lr = 0x82263818;
	sub_82248F70(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8226386c
	if (ctx.cr6.eq) goto loc_8226386C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x8226385c
	if (ctx.cr6.eq) goto loc_8226385C;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x82263848
	if (ctx.cr6.eq) goto loc_82263848;
	// lis r26,-16384
	ctx.r26.s64 = -1073741824;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r26,r26,13
	ctx.r26.u64 = ctx.r26.u64 | 13;
	// b 0x8226387c
	goto loc_8226387C;
loc_82263848:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82263728
	ctx.lr = 0x82263854;
	sub_82263728(ctx, base);
	// li r11,56
	ctx.r11.s64 = 56;
	// b 0x8226387c
	goto loc_8226387C;
loc_8226385C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ld r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 20);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// b 0x82263878
	goto loc_82263878;
loc_8226386C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
loc_82263878:
	// li r11,8
	ctx.r11.s64 = 8;
loc_8226387C:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82263880:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82263888;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241e5fc
	ctx.lr = 0x82263898;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822638A0"))) PPC_WEAK_FUNC(sub_822638A0);
PPC_FUNC_IMPL(__imp__sub_822638A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822638A8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x822638B8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822638cc
	if (ctx.cr6.eq) goto loc_822638CC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x822638e0
	goto loc_822638E0;
loc_822638CC:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822634b8
	ctx.lr = 0x822638DC;
	sub_822634B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822638E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x822638E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241e5fc
	ctx.lr = 0x822638F8;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82263900"))) PPC_WEAK_FUNC(sub_82263900);
PPC_FUNC_IMPL(__imp__sub_82263900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248758
	ctx.lr = 0x82263908;
	sub_82248758(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r23,r5,0,0,19
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFF000;
	// addi r22,r11,7296
	ctx.r22.s64 = ctx.r11.s64 + 7296;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// clrlwi r17,r5,20
	ctx.r17.u64 = ctx.r5.u32 & 0xFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// stw r11,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r11.u32);
	// blt cr6,0x82263954
	if (ctx.cr6.lt) goto loc_82263954;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,17
	ctx.r3.u64 = ctx.r3.u64 | 17;
	// b 0x82263bfc
	goto loc_82263BFC;
loc_82263954:
	// li r16,0
	ctx.r16.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82263964
	if (ctx.cr6.eq) goto loc_82263964;
	// stw r16,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r16.u32);
loc_82263964:
	// lwz r26,40(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r24,48(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r23,r26
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x822639c8
	if (ctx.cr6.lt) goto loc_822639C8;
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822639c8
	if (!ctx.cr6.lt) goto loc_822639C8;
	// subf r10,r26,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r26.s64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// rlwinm r11,r10,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// subf r10,r10,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r10.s64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// subf r10,r17,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r17.s64;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// stw r10,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r10.u32);
	// beq cr6,0x822639c0
	if (ctx.cr6.eq) goto loc_822639C0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x82261900
	ctx.lr = 0x822639B4;
	sub_82261900(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_822639C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82263bfc
	goto loc_82263BFC;
loc_822639C8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x822639e8
	if (!ctx.cr6.eq) goto loc_822639E8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_822639D4:
	// subfic r10,r17,4096
	ctx.xer.ca = ctx.r17.u32 <= 4096;
	ctx.r10.s64 = 4096 - ctx.r17.s64;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r10.u32);
	// b 0x82263bfc
	goto loc_82263BFC;
loc_822639E8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r23,4096
	ctx.r10.s64 = ctx.r23.s64 + 4096;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82263a04
	if (!ctx.cr6.eq) goto loc_82263A04;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822639d4
	if (!ctx.cr6.eq) goto loc_822639D4;
loc_82263A04:
	// cmplw cr6,r23,r26
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82263a24
	if (!ctx.cr6.gt) goto loc_82263A24;
	// rlwinm r10,r29,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0xFFFFF;
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r28,r11,-4096
	ctx.r28.s64 = ctx.r11.s64 + -4096;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// b 0x82263a38
	goto loc_82263A38;
loc_82263A24:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// li r29,4096
	ctx.r29.s64 = 4096;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
loc_82263A38:
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_82263A44:
	// li r8,170
	ctx.r8.s64 = 170;
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// divwu r8,r30,r8
	ctx.r8.u32 = ctx.r30.u32 / ctx.r8.u32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r8,r8,170
	ctx.r8.s64 = ctx.r8.s64 * 170;
	// stw r11,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r11.u32);
	// subf r27,r8,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r8.s64;
	// subf r25,r27,r30
	ctx.r25.s64 = ctx.r30.s64 - ctx.r27.s64;
	// beq cr6,0x82263a9c
	if (ctx.cr6.eq) goto loc_82263A9C;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82263afc
	if (ctx.cr6.eq) goto loc_82263AFC;
	// lwz r11,52(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r10,48(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
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
loc_82263A9C:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82260ce8
	ctx.lr = 0x82263AB4;
	sub_82260CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne 0x82263aec
	if (!ctx.cr0.eq) goto loc_82263AEC;
	// beq cr6,0x82263acc
	if (ctx.cr6.eq) goto loc_82263ACC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_82263ACC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82262e70
	ctx.lr = 0x82263AE0;
	sub_82262E70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82263bfc
	if (ctx.cr0.lt) goto loc_82263BFC;
	// b 0x82263af4
	goto loc_82263AF4;
loc_82263AEC:
	// beq cr6,0x82263af4
	if (ctx.cr6.eq) goto loc_82263AF4;
	// stw r16,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r16.u32);
loc_82263AF4:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82263AFC:
	// mulli r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 * 24;
	// lwz r8,156(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 156);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82263b54
	if (!ctx.cr6.lt) goto loc_82263B54;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4096
	ctx.r28.s64 = ctx.r28.s64 + 4096;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82263b30
	if (!ctx.cr6.eq) goto loc_82263B30;
	// addi r29,r29,4096
	ctx.r29.s64 = ctx.r29.s64 + 4096;
	// b 0x82263b3c
	goto loc_82263B3C;
loc_82263B30:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// li r29,4096
	ctx.r29.s64 = 4096;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82263B3C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82263a44
	if (!ctx.cr6.eq) goto loc_82263A44;
	// addi r10,r28,4096
	ctx.r10.s64 = ctx.r28.s64 + 4096;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// b 0x82263ba0
	goto loc_82263BA0;
loc_82263B54:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
	// b 0x82263bcc
	goto loc_82263BCC;
loc_82263B60:
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cmplwi cr6,r11,169
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 169, ctx.xer);
	// bge cr6,0x82263bb0
	if (!ctx.cr6.lt) goto loc_82263BB0;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r8,156(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 156);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82263bb0
	if (!ctx.cr6.lt) goto loc_82263BB0;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82263bb0
	if (!ctx.cr6.eq) goto loc_82263BB0;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// addi r29,r29,4096
	ctx.r29.s64 = ctx.r29.s64 + 4096;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82263BA0:
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82263b60
	if (!ctx.cr6.eq) goto loc_82263B60;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82263BB0:
	// subf r11,r17,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r17.s64;
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// stw r24,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r24.u32);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_82263BCC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82263bfc
	if (ctx.cr6.eq) goto loc_82263BFC;
	// lwz r11,52(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 52);
	// lwz r10,48(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
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
loc_82263BFC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487a8
	// ERROR 822487A8
	return;
}

__attribute__((alias("__imp__sub_82263C04"))) PPC_WEAK_FUNC(sub_82263C04);
PPC_FUNC_IMPL(__imp__sub_82263C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82263C08"))) PPC_WEAK_FUNC(sub_82263C08);
PPC_FUNC_IMPL(__imp__sub_82263C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82263C10;
	sub_8224876C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhz r21,54(r4)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r4.u32 + 54);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82263c4c
	if (ctx.cr0.eq) goto loc_82263C4C;
	// lhz r11,26(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// lhz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r29,r10,6
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// rlwinm r25,r11,6,0,25
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x82263c54
	goto loc_82263C54;
loc_82263C4C:
	// lwz r25,84(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82263C54:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82263c6c
	if (ctx.cr6.eq) goto loc_82263C6C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82263c6c
	if (!ctx.cr6.lt) goto loc_82263C6C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82263C6C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r24,-1
	ctx.r24.s64 = -1;
loc_82263C80:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82263d14
	if (!ctx.cr6.eq) goto loc_82263D14;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82263cc0
	if (ctx.cr6.eq) goto loc_82263CC0;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// li r30,0
	ctx.r30.s64 = 0;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
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
loc_82263CC0:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82263de8
	if (!ctx.cr6.lt) goto loc_82263DE8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r28,56
	ctx.r4.s64 = ctx.r28.s64 + 56;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82263900
	ctx.lr = 0x82263CE4;
	sub_82263900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82263d80
	if (ctx.cr0.lt) goto loc_82263D80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822632b0
	ctx.lr = 0x82263CFC;
	sub_822632B0(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82263d80
	if (ctx.cr0.lt) goto loc_82263D80;
	// clrlwi r11,r29,20
	ctx.r11.u64 = ctx.r29.u32 & 0xFFF;
	// addi r27,r30,4096
	ctx.r27.s64 = ctx.r30.s64 + 4096;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82263D14:
	// lbz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// clrlwi. r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82263d30
	if (!ctx.cr0.eq) goto loc_82263D30;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x82263ddc
	if (!ctx.cr6.eq) goto loc_82263DDC;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// b 0x82263ddc
	goto loc_82263DDC;
loc_82263D30:
	// lhz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82263ddc
	if (!ctx.cr6.eq) goto loc_82263DDC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82263dbc
	if (ctx.cr6.eq) goto loc_82263DBC;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82263d68
	if (ctx.cr6.eq) goto loc_82263D68;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x82262818
	ctx.lr = 0x82263D60;
	sub_82262818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82263ddc
	if (ctx.cr0.eq) goto loc_82263DDC;
loc_82263D68:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82248a40
	ctx.lr = 0x82263D78;
	sub_82248A40(ctx, base);
	// stw r29,64(r22)
	PPC_STORE_U32(ctx.r22.u32 + 64, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82263D80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82263db0
	if (ctx.cr6.eq) goto loc_82263DB0;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
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
loc_82263DB0:
	// stw r24,68(r22)
	PPC_STORE_U32(ctx.r22.u32 + 68, ctx.r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_82263DBC:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lhz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8241e40c
	ctx.lr = 0x82263DD4;
	__imp__RtlCompareStringN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82263d68
	if (ctx.cr0.eq) goto loc_82263D68;
loc_82263DDC:
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// b 0x82263c80
	goto loc_82263C80;
loc_82263DE8:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,52
	ctx.r3.u64 = ctx.r3.u64 | 52;
	// b 0x82263d80
	goto loc_82263D80;
}

__attribute__((alias("__imp__sub_82263DF4"))) PPC_WEAK_FUNC(sub_82263DF4);
PPC_FUNC_IMPL(__imp__sub_82263DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82263DF8"))) PPC_WEAK_FUNC(sub_82263DF8);
PPC_FUNC_IMPL(__imp__sub_82263DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82263E00;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82260ce8
	ctx.lr = 0x82263E24;
	sub_82260CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82263e58
	if (!ctx.cr0.eq) goto loc_82263E58;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82263e3c
	if (!ctx.cr6.eq) goto loc_82263E3C;
loc_82263E34:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82263ee8
	goto loc_82263EE8;
loc_82263E3C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82262e70
	ctx.lr = 0x82263E50;
	sub_82262E70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82263e34
	if (ctx.cr0.lt) goto loc_82263E34;
loc_82263E58:
	// li r10,170
	ctx.r10.s64 = 170;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// divwu r8,r31,r10
	ctx.r8.u32 = ctx.r31.u32 / ctx.r10.u32;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mulli r8,r8,170
	ctx.r8.s64 = ctx.r8.s64 * 170;
	// subf r8,r8,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r8.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// divwu r6,r31,r10
	ctx.r6.u32 = ctx.r31.u32 / ctx.r10.u32;
	// b 0x82263e9c
	goto loc_82263E9C;
loc_82263E80:
	// divwu r8,r3,r10
	ctx.r8.u32 = ctx.r3.u32 / ctx.r10.u32;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82263eb4
	if (!ctx.cr6.eq) goto loc_82263EB4;
	// divwu r8,r3,r10
	ctx.r8.u32 = ctx.r3.u32 / ctx.r10.u32;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mulli r8,r8,170
	ctx.r8.s64 = ctx.r8.s64 * 170;
	// subf r8,r8,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r8.s64;
loc_82263E9C:
	// mulli r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 * 24;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,20(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// clrlwi r3,r8,8
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFFFF;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82263e80
	if (!ctx.cr6.eq) goto loc_82263E80;
loc_82263EB4:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
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
	// beq cr6,0x82263ee8
	if (ctx.cr6.eq) goto loc_82263EE8;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
loc_82263EE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82263EF0"))) PPC_WEAK_FUNC(sub_82263EF0);
PPC_FUNC_IMPL(__imp__sub_82263EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82263EF8;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r26,156(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// add r27,r26,r4
	ctx.r27.u64 = ctx.r26.u64 + ctx.r4.u64;
	// bgt cr6,0x822640fc
	if (ctx.cr6.gt) goto loc_822640FC;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822640fc
	if (ctx.cr6.gt) goto loc_822640FC;
	// li r10,170
	ctx.r10.s64 = 170;
	// addi r11,r27,169
	ctx.r11.s64 = ctx.r27.s64 + 169;
	// li r28,0
	ctx.r28.s64 = 0;
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82263f48
	if (!ctx.cr6.gt) goto loc_82263F48;
	// addi r11,r9,169
	ctx.r11.s64 = ctx.r9.s64 + 169;
	// li r28,1
	ctx.r28.s64 = 1;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// b 0x82263f4c
	goto loc_82263F4C;
loc_82263F48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82263F4C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82263f64
	if (!ctx.cr6.gt) goto loc_82263F64;
	// addi r8,r11,169
	ctx.r8.s64 = ctx.r11.s64 + 169;
	// li r28,2
	ctx.r28.s64 = 2;
	// divwu r10,r8,r10
	ctx.r10.u32 = ctx.r8.u32 / ctx.r10.u32;
	// b 0x82263f68
	goto loc_82263F68;
loc_82263F64:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82263F68:
	// lbz r8,205(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 205);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x82263fb8
	if (!ctx.cr0.eq) goto loc_82263FB8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// li r7,20
	ctx.r7.s64 = 20;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rldicl r11,r11,12,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0xFFFFFFFFFFF;
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x8241ddec
	ctx.lr = 0x82263FB0;
	__imp__NtSetInformationFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82264104
	if (ctx.cr0.lt) goto loc_82264104;
loc_82263FB8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822640e0
	if (ctx.cr6.eq) goto loc_822640E0;
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x822640e0
	if (!ctx.cr6.lt) goto loc_822640E0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822634b8
	ctx.lr = 0x82263FDC;
	sub_822634B8(ctx, base);
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x822640e0
	if (ctx.cr6.gt) goto loc_822640E0;
loc_82263FEC:
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82262d80
	ctx.lr = 0x82264008;
	sub_82262D80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82264104
	if (ctx.cr0.lt) goto loc_82264104;
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,176
	ctx.r9.s64 = ctx.r31.s64 + 176;
	// addi r8,r30,-4
	ctx.r8.s64 = ctx.r30.s64 + -4;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82264028:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82264028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82264028;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwimi r11,r7,0,0,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFF8000) | (ctx.r11.u64 & 0xFFFFFFFF00007FFF);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwimi r4,r11,15,2,16
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0x3FFF8000) | (ctx.r4.u64 & 0xFFFFFFFFC0007FFF);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r24,196(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwimi r24,r11,0,1,31
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r24.u64 & 0xFFFFFFFF80000000);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// lwz r24,196(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwimi r11,r24,0,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 0) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r26,4080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4080, ctx.r26.u32);
	// bl 0x8241e47c
	ctx.lr = 0x82264098;
	__imp__XeCryptSha(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwimi r11,r8,31,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 31) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// ble cr6,0x82263fec
	if (!ctx.cr6.gt) goto loc_82263FEC;
loc_822640E0:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stb r28,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r28.u8);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// b 0x82264104
	goto loc_82264104;
loc_822640FC:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,127
	ctx.r3.u64 = ctx.r3.u64 | 127;
loc_82264104:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8226410C"))) PPC_WEAK_FUNC(sub_8226410C);
PPC_FUNC_IMPL(__imp__sub_8226410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82264110"))) PPC_WEAK_FUNC(sub_82264110);
PPC_FUNC_IMPL(__imp__sub_82264110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82264118;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82263018
	ctx.lr = 0x82264138;
	sub_82263018(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82264244
	if (ctx.cr0.lt) goto loc_82264244;
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplwi cr6,r10,170
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 170, ctx.xer);
	// ble cr6,0x82264154
	if (!ctx.cr6.gt) goto loc_82264154;
	// li r10,170
	ctx.r10.s64 = 170;
loc_82264154:
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r6,160(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// bge cr6,0x8226421c
	if (!ctx.cr6.lt) goto loc_8226421C;
	// addi r7,r28,20
	ctx.r7.s64 = ctx.r28.s64 + 20;
loc_82264180:
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r3,r3,0,0,1
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226420c
	if (!ctx.cr0.eq) goto loc_8226420C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822641e0
	if (ctx.cr6.eq) goto loc_822641E0;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwimi r3,r11,0,0,7
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFF000000) | (ctx.r3.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r3,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// beq cr6,0x822641e0
	if (ctx.cr6.eq) goto loc_822641E0;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// li r9,0
	ctx.r9.s64 = 0;
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
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_822641E0:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// oris r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 3221225472;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ble cr6,0x822641f8
	if (!ctx.cr6.gt) goto loc_822641F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_822641F8:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r7,-20
	ctx.r10.s64 = ctx.r7.s64 + -20;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// beq 0x8226421c
	if (ctx.cr0.eq) goto loc_8226421C;
loc_8226420C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82264180
	if (ctx.cr6.lt) goto loc_82264180;
loc_8226421C:
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r6,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r6.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82264234
	if (!ctx.cr6.gt) goto loc_82264234;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
loc_82264234:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_82264244:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8226424C"))) PPC_WEAK_FUNC(sub_8226424C);
PPC_FUNC_IMPL(__imp__sub_8226424C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82264250"))) PPC_WEAK_FUNC(sub_82264250);
PPC_FUNC_IMPL(__imp__sub_82264250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82264258;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,10612
	ctx.r11.s64 = ctx.r11.s64 + 10612;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r25,-4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x82263018
	ctx.lr = 0x8226428C;
	sub_82263018(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82264424
	if (ctx.cr0.lt) goto loc_82264424;
	// lwz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r7,r30,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// lwz r11,4080(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4080);
	// ble cr6,0x822642b0
	if (!ctx.cr6.gt) goto loc_822642B0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_822642B0:
	// subf. r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82264350
	if (ctx.cr0.eq) goto loc_82264350;
	// divwu r9,r11,r25
	ctx.r9.u32 = ctx.r11.u32 / ctx.r25.u32;
	// li r8,170
	ctx.r8.s64 = 170;
	// divwu r6,r11,r25
	ctx.r6.u32 = ctx.r11.u32 / ctx.r25.u32;
	// divwu r8,r9,r8
	ctx.r8.u32 = ctx.r9.u32 / ctx.r8.u32;
	// mullw r6,r6,r25
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r25.s32);
	// mulli r8,r8,170
	ctx.r8.s64 = ctx.r8.s64 * 170;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// twllei r25,0
	// mulli r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 * 24;
	// twllei r25,0
	// subf. r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 + ctx.r22.u64;
	// beq 0x82264318
	if (ctx.cr0.eq) goto loc_82264318;
	// subf. r11,r11,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82264318
	if (ctx.cr0.eq) goto loc_82264318;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82264300
	if (!ctx.cr6.gt) goto loc_82264300;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82264300:
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwimi r11,r8,0,0,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFF8000) | (ctx.r11.u64 & 0xFFFFFFFF00007FFF);
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
loc_82264318:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82264348
	if (ctx.cr6.eq) goto loc_82264348;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_82264324:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82264334
	if (!ctx.cr6.gt) goto loc_82264334;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82264334:
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r8,r11,0,17,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF8000);
	// stwu r8,24(r9)
	ea = 24 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bne 0x82264324
	if (!ctx.cr0.eq) goto loc_82264324;
loc_82264348:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,4080(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4080, ctx.r7.u32);
loc_82264350:
	// add r26,r11,r30
	ctx.r26.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x822643f8
	if (!ctx.cr6.lt) goto loc_822643F8;
	// addi r28,r22,20
	ctx.r28.s64 = ctx.r22.s64 + 20;
loc_82264364:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi. r29,r11,17
	ctx.r29.u64 = ctx.r11.u32 & 0x7FFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x822643e8
	if (ctx.cr0.eq) goto loc_822643E8;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82264388
	if (ctx.cr6.eq) goto loc_82264388;
	// subf r11,r30,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r30.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8226438c
	if (!ctx.cr6.eq) goto loc_8226438C;
loc_82264388:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8226438C:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x822643a8
	if (!ctx.cr6.eq) goto loc_822643A8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// bl 0x82264110
	ctx.lr = 0x822643A4;
	sub_82264110(ctx, base);
	// b 0x822643b8
	goto loc_822643B8;
loc_822643A8:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r5,r23,-1
	ctx.r5.s64 = ctx.r23.s64 + -1;
	// bl 0x82264250
	ctx.lr = 0x822643B8;
	sub_82264250(ctx, base);
loc_822643B8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822643f8
	if (ctx.cr6.lt) goto loc_822643F8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x822643d0
	if (!ctx.cr6.gt) goto loc_822643D0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822643D0:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf. r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwimi r11,r10,0,0,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFF8000) | (ctx.r11.u64 & 0xFFFFFFFF00007FFF);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// beq 0x822643f8
	if (ctx.cr0.eq) goto loc_822643F8;
loc_822643E8:
	// add r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 + ctx.r30.u64;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82264364
	if (ctx.cr6.lt) goto loc_82264364;
loc_822643F8:
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r10,52(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// subf r10,r10,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r10.s64;
	// srawi r10,r10,12
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 12;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_82264424:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8226442C"))) PPC_WEAK_FUNC(sub_8226442C);
PPC_FUNC_IMPL(__imp__sub_8226442C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82264430"))) PPC_WEAK_FUNC(sub_82264430);
PPC_FUNC_IMPL(__imp__sub_82264430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82264438;
	sub_8224877C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x82264468
	if (!ctx.cr6.eq) goto loc_82264468;
	// lis r28,255
	ctx.r28.s64 = 16711680;
	// ori r28,r28,65535
	ctx.r28.u64 = ctx.r28.u64 | 65535;
loc_82264468:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x8226449c
	if (ctx.cr6.lt) goto loc_8226449C;
	// beq cr6,0x8226448c
	if (ctx.cr6.eq) goto loc_8226448C;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bge cr6,0x8226449c
	if (!ctx.cr6.lt) goto loc_8226449C;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x822644a4
	goto loc_822644A4;
loc_8226448C:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x822644a4
	goto loc_822644A4;
loc_8226449C:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_822644A4:
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822644c4
	if (!ctx.cr6.lt) goto loc_822644C4;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82263ef0
	ctx.lr = 0x822644BC;
	sub_82263EF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82264644
	if (ctx.cr0.lt) goto loc_82264644;
loc_822644C4:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x822644d4
	if (!ctx.cr6.eq) goto loc_822644D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82264644
	goto loc_82264644;
loc_822644D4:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// li r7,1
	ctx.r7.s64 = 1;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r7,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r7.u8);
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r29.u64);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// std r29,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r29.u64);
	// stw r29,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r29.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82264530
	if (!ctx.cr0.eq) goto loc_82264530;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// bl 0x82264110
	ctx.lr = 0x8226452C;
	sub_82264110(ctx, base);
	// b 0x82264540
	goto loc_82264540;
loc_82264530:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82264250
	ctx.lr = 0x82264540;
	sub_82264250(ctx, base);
loc_82264540:
	// lbz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r29,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r29.u8);
	// beq 0x8226456c
	if (ctx.cr0.eq) goto loc_8226456C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8226455C:
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8226455c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226455C;
loc_8226456C:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822645b0
	if (ctx.cr6.eq) goto loc_822645B0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r28,r10,0,0,7
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFF000000) | (ctx.r28.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
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
loc_822645B0:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x8226462c
	if (ctx.cr6.eq) goto loc_8226462C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82263018
	ctx.lr = 0x822645D0;
	sub_82263018(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82264644
	if (ctx.cr0.lt) goto loc_82264644;
	// li r11,170
	ctx.r11.s64 = 170;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// divwu r11,r27,r11
	ctx.r11.u32 = ctx.r27.u32 / ctx.r11.u32;
	// mulli r11,r11,170
	ctx.r11.s64 = ctx.r11.s64 * 170;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r8,r9,0,8,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFF000000);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
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
loc_8226462C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82264644
	if (ctx.cr6.eq) goto loc_82264644;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82264644:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8226464C"))) PPC_WEAK_FUNC(sub_8226464C);
PPC_FUNC_IMPL(__imp__sub_8226464C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82264650"))) PPC_WEAK_FUNC(sub_82264650);
PPC_FUNC_IMPL(__imp__sub_82264650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82264658;
	sub_82248764(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82264694
	if (ctx.cr6.lt) goto loc_82264694;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r23,r11,50
	ctx.r23.u64 = ctx.r11.u64 | 50;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82262500
	ctx.lr = 0x82264690;
	sub_82262500(ctx, base);
	// b 0x8226475c
	goto loc_8226475C;
loc_82264694:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82263018
	ctx.lr = 0x822646A8;
	sub_82263018(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt 0x8226475c
	if (ctx.cr0.lt) goto loc_8226475C;
	// li r27,170
	ctx.r27.s64 = 170;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// li r24,0
	ctx.r24.s64 = 0;
	// divwu r22,r31,r27
	ctx.r22.u32 = ctx.r31.u32 / ctx.r27.u32;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
loc_822646CC:
	// divwu r11,r31,r27
	ctx.r11.u32 = ctx.r31.u32 / ctx.r27.u32;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r11,170
	ctx.r11.s64 = ctx.r11.s64 * 170;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi r31,r11,8
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFFFF;
	// beq cr6,0x82264768
	if (ctx.cr6.eq) goto loc_82264768;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82264798
	if (ctx.cr6.eq) goto loc_82264798;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82264798
	if (ctx.cr6.eq) goto loc_82264798;
loc_82264714:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r23,r11,50
	ctx.r23.u64 = ctx.r11.u64 | 50;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82262500
	ctx.lr = 0x82264728;
	sub_82262500(ctx, base);
loc_82264728:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf r11,r11,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r11.s64;
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
	// stw r24,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r24.u32);
	// stw r25,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r25.u32);
	// stw r31,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r31.u32);
loc_8226475C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b4
	// ERROR 822487B4
	return;
loc_82264768:
	// rlwinm r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82264784
	if (!ctx.cr6.eq) goto loc_82264784;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// rlwimi r11,r10,30,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x82264794
	goto loc_82264794;
loc_82264784:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82264714
	if (!ctx.cr6.eq) goto loc_82264714;
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82264794:
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
loc_82264798:
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822647bc
	if (ctx.cr6.eq) goto loc_822647BC;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82248a40
	ctx.lr = 0x822647B8;
	sub_82248A40(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_822647BC:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82264728
	if (ctx.cr6.eq) goto loc_82264728;
	// divwu r11,r31,r27
	ctx.r11.u32 = ctx.r31.u32 / ctx.r27.u32;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x822646cc
	if (ctx.cr6.eq) goto loc_822646CC;
	// b 0x82264728
	goto loc_82264728;
}

__attribute__((alias("__imp__sub_822647D4"))) PPC_WEAK_FUNC(sub_822647D4);
PPC_FUNC_IMPL(__imp__sub_822647D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822647D8"))) PPC_WEAK_FUNC(sub_822647D8);
PPC_FUNC_IMPL(__imp__sub_822647D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x822647E0;
	sub_8224875C(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,10612
	ctx.r11.s64 = ctx.r11.s64 + 10612;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// lwz r9,156(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lwz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lwz r28,-4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8226483c
	if (ctx.cr6.lt) goto loc_8226483C;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// bl 0x82262500
	ctx.lr = 0x82264830;
	sub_82262500(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
	// b 0x822649c8
	goto loc_822649C8;
loc_8226483C:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82263018
	ctx.lr = 0x82264850;
	sub_82263018(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822649c8
	if (ctx.cr0.lt) goto loc_822649C8;
	// lwz r23,92(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// divwu r17,r31,r21
	ctx.r17.u32 = ctx.r31.u32 / ctx.r21.u32;
	// twllei r21,0
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
loc_8226486C:
	// divwu r11,r31,r28
	ctx.r11.u32 = ctx.r31.u32 / ctx.r28.u32;
	// li r10,170
	ctx.r10.s64 = 170;
	// twllei r28,0
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// mulli r10,r10,170
	ctx.r10.s64 = ctx.r10.s64 * 170;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x822648b4
	if (!ctx.cr6.eq) goto loc_822648B4;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82264650
	ctx.lr = 0x822648B0;
	sub_82264650(ctx, base);
	// b 0x822648cc
	goto loc_822648CC;
loc_822648B4:
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r27,-1
	ctx.r5.s64 = ctx.r27.s64 + -1;
	// bl 0x822647d8
	ctx.lr = 0x822648CC;
	sub_822647D8(ctx, base);
loc_822648CC:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226498c
	if (ctx.cr6.lt) goto loc_8226498C;
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// divwu r8,r31,r28
	ctx.r8.u32 = ctx.r31.u32 / ctx.r28.u32;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// twllei r28,0
	// rlwinm r11,r9,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r10,r10,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// mullw r8,r8,r28
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r8,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r8.s64;
	// rlwimi r11,r9,0,17,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFC0007FFF) | (ctx.r11.u64 & 0x3FFF8000);
	// subf r4,r10,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r10.s64;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r10,r11,0,0,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFF8000) | (ctx.r10.u64 & 0xFFFFFFFF00007FFF);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x8226492c
	if (!ctx.cr6.gt) goto loc_8226492C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8226492C:
	// rlwinm r9,r10,17,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x7FFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82264940
	if (!ctx.cr6.eq) goto loc_82264940;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8226494c
	if (ctx.cr6.eq) goto loc_8226494C;
loc_82264940:
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82264958
	if (!ctx.cr6.eq) goto loc_82264958;
loc_8226494C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82260c40
	ctx.lr = 0x82264958;
	sub_82260C40(ctx, base);
loc_82264958:
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// add r25,r10,r25
	ctx.r25.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8226498c
	if (ctx.cr6.eq) goto loc_8226498C;
	// divwu r11,r31,r21
	ctx.r11.u32 = ctx.r31.u32 / ctx.r21.u32;
	// twllei r21,0
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x8226486c
	if (ctx.cr6.eq) goto loc_8226486C;
loc_8226498C:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf r11,r11,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r11.s64;
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
	// stw r25,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r25.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r24,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r24.u32);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
loc_822649C8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_822649D0"))) PPC_WEAK_FUNC(sub_822649D0);
PPC_FUNC_IMPL(__imp__sub_822649D0) {
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
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lbz r11,202(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 202);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r9,204(r3)
	PPC_STORE_U8(ctx.r3.u32 + 204, ctx.r9.u8);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// bne 0x82264a28
	if (!ctx.cr0.eq) goto loc_82264A28;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82264650
	ctx.lr = 0x82264A24;
	sub_82264650(ctx, base);
	// b 0x82264a40
	goto loc_82264A40;
loc_82264A28:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x822647d8
	ctx.lr = 0x82264A40;
	sub_822647D8(ctx, base);
loc_82264A40:
	// lbz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stb r30,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r30.u8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82264a6c
	if (ctx.cr0.eq) goto loc_82264A6C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82264A5C:
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82264a5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82264A5C;
loc_82264A6C:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82264AA4"))) PPC_WEAK_FUNC(sub_82264AA4);
PPC_FUNC_IMPL(__imp__sub_82264AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82264AA8"))) PPC_WEAK_FUNC(sub_82264AA8);
PPC_FUNC_IMPL(__imp__sub_82264AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82264AB0;
	sub_82248778(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,80(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r31,24(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8241dd2c
	ctx.lr = 0x82264ACC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,53(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82264ae4
	if (!ctx.cr0.eq) goto loc_82264AE4;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,13
	ctx.r30.u64 = ctx.r30.u64 | 13;
	// b 0x82264c6c
	goto loc_82264C6C;
loc_82264AE4:
	// lwz r30,136(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 136);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82264c6c
	if (!ctx.cr6.eq) goto loc_82264C6C;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82264b08
	if (ctx.cr0.eq) goto loc_82264B08;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,296
	ctx.r30.u64 = ctx.r30.u64 | 296;
	// b 0x82264c6c
	goto loc_82264C6C;
loc_82264B08:
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bne cr6,0x82264b48
	if (!ctx.cr6.eq) goto loc_82264B48;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82262730
	ctx.lr = 0x82264B30;
	sub_82262730(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82264c6c
	if (ctx.cr0.lt) goto loc_82264C6C;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82264b4c
	goto loc_82264B4C;
loc_82264B48:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82264B4C:
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82264b5c
	if (ctx.cr0.eq) goto loc_82264B5C;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
loc_82264B5C:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82263c08
	ctx.lr = 0x82264B74;
	sub_82263C08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82264bac
	if (!ctx.cr0.lt) goto loc_82264BAC;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82264c6c
	if (!ctx.cr6.eq) goto loc_82264C6C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82264ba0
	if (ctx.cr6.eq) goto loc_82264BA0;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,15
	ctx.r30.u64 = ctx.r30.u64 | 15;
	// b 0x82264c6c
	goto loc_82264C6C;
loc_82264BA0:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,6
	ctx.r30.u64 = ctx.r30.u64 | 6;
	// b 0x82264c6c
	goto loc_82264C6C;
loc_82264BAC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822636b0
	ctx.lr = 0x82264BB8;
	sub_822636B0(ctx, base);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r31,28(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// bl 0x82261a70
	ctx.lr = 0x82264BC4;
	sub_82261A70(ctx, base);
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82261a70
	ctx.lr = 0x82264BD0;
	sub_82261A70(ctx, base);
	// lbz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// std r3,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r3.u64);
	// rlwinm. r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r3,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r3.u64);
	// beq 0x82264c00
	if (ctx.cr0.eq) goto loc_82264C00;
	// li r11,16
	ctx.r11.s64 = 16;
	// std r25,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r25.u64);
	// std r25,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r25.u64);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x82264c14
	goto loc_82264C14;
loc_82264C00:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
loc_82264C14:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r28,r10,26
	ctx.r28.u64 = ctx.r10.u32 & 0x3F;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82264c40
	if (!ctx.cr6.gt) goto loc_82264C40;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// ori r30,r30,5
	ctx.r30.u64 = ctx.r30.u64 | 5;
	// b 0x82264c44
	goto loc_82264C44;
loc_82264C40:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82264C44:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82248a40
	ctx.lr = 0x82264C54;
	sub_82248A40(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r10,r29,64
	ctx.r10.s64 = ctx.r29.s64 + 64;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r10,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r10.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82264C6C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82264C74;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241e5fc
	ctx.lr = 0x82264C84;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82264C8C"))) PPC_WEAK_FUNC(sub_82264C8C);
PPC_FUNC_IMPL(__imp__sub_82264C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82264C90"))) PPC_WEAK_FUNC(sub_82264C90);
PPC_FUNC_IMPL(__imp__sub_82264C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82264C98;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82264ce8
	if (ctx.cr6.eq) goto loc_82264CE8;
loc_82264CB0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82263df8
	ctx.lr = 0x82264CC0;
	sub_82263DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82264ce8
	if (ctx.cr6.eq) goto loc_82264CE8;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82264ce8
	if (ctx.cr6.eq) goto loc_82264CE8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82264cb0
	if (ctx.cr6.lt) goto loc_82264CB0;
loc_82264CE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82264CF0"))) PPC_WEAK_FUNC(sub_82264CF0);
PPC_FUNC_IMPL(__imp__sub_82264CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82264CF8;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
loc_82264D10:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82263900
	ctx.lr = 0x82264D2C;
	sub_82263900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82264ed8
	if (ctx.cr0.lt) goto loc_82264ED8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82264d58
	if (!ctx.cr6.eq) goto loc_82264D58;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82261900
	ctx.lr = 0x82264D50;
	sub_82261900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82264d68
	if (!ctx.cr0.eq) goto loc_82264D68;
loc_82264D58:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82264c90
	ctx.lr = 0x82264D68;
	sub_82264C90(ctx, base);
loc_82264D68:
	// li r11,170
	ctx.r11.s64 = 170;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divwu r11,r29,r11
	ctx.r11.u32 = ctx.r29.u32 / ctx.r11.u32;
	// mulli r11,r11,170
	ctx.r11.s64 = ctx.r11.s64 * 170;
	// subf r28,r11,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r11.s64;
	// subfic r11,r28,170
	ctx.xer.ca = ctx.r28.u32 <= 170;
	ctx.r11.s64 = 170 - ctx.r28.s64;
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82264d90
	if (!ctx.cr6.gt) goto loc_82264D90;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82264D90:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82264d9c
	if (!ctx.cr6.gt) goto loc_82264D9C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82264D9C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82264dac
	if (!ctx.cr6.gt) goto loc_82264DAC;
	// lis r30,1
	ctx.r30.s64 = 65536;
loc_82264DAC:
	// lbz r11,206(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 206);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82264dd8
	if (ctx.cr0.eq) goto loc_82264DD8;
	// rlwinm r11,r30,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0xFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x822634b8
	ctx.lr = 0x82264DD0;
	sub_822634B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82264ed8
	if (ctx.cr0.lt) goto loc_82264ED8;
loc_82264DD8:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82262e70
	ctx.lr = 0x82264DEC;
	sub_82262E70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82264ed8
	if (ctx.cr0.lt) goto loc_82264ED8;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,12,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0xFFFFFFFFFFF;
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82262078
	ctx.lr = 0x82264E1C;
	sub_82262078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82264ee0
	if (ctx.cr0.lt) goto loc_82264EE0;
	// mulli r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 * 24;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	// add r25,r30,r25
	ctx.r25.u64 = ctx.r30.u64 + ctx.r25.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82264E38:
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
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241e47c
	ctx.lr = 0x82264E5C;
	__imp__XeCryptSha(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r8,r29,20
	ctx.r8.s64 = ctx.r29.s64 + 20;
loc_82264E68:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82264e88
	if (!ctx.cr0.eq) goto loc_82264E88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82264e68
	if (!ctx.cr6.eq) goto loc_82264E68;
loc_82264E88:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82264f10
	if (!ctx.cr0.eq) goto loc_82264F10;
	// addic. r30,r30,-4096
	ctx.xer.ca = ctx.r30.u32 > 4095;
	ctx.r30.s64 = ctx.r30.s64 + -4096;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r26,r26,4096
	ctx.r26.s64 = ctx.r26.s64 + 4096;
	// bne 0x82264e38
	if (!ctx.cr0.eq) goto loc_82264E38;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
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
	// bne cr6,0x82264d10
	if (!ctx.cr6.eq) goto loc_82264D10;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82264ED8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82264EE0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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
	// b 0x82264ed8
	goto loc_82264ED8;
loc_82264F10:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
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
	// bl 0x82262500
	ctx.lr = 0x82264F48;
	sub_82262500(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
	// b 0x82264ed8
	goto loc_82264ED8;
}

__attribute__((alias("__imp__sub_82264F54"))) PPC_WEAK_FUNC(sub_82264F54);
PPC_FUNC_IMPL(__imp__sub_82264F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82264F58"))) PPC_WEAK_FUNC(sub_82264F58);
PPC_FUNC_IMPL(__imp__sub_82264F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82264F60;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
loc_82264F78:
	// clrlwi r26,r27,20
	ctx.r26.u64 = ctx.r27.u32 & 0xFFF;
	// subfic r31,r26,4096
	ctx.xer.ca = ctx.r26.u32 <= 4096;
	ctx.r31.s64 = 4096 - ctx.r26.s64;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82264f8c
	if (!ctx.cr6.gt) goto loc_82264F8C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82264F8C:
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82265014
	if (!ctx.cr6.lt) goto loc_82265014;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82263900
	ctx.lr = 0x82264FB4;
	sub_82263900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265038
	if (ctx.cr0.lt) goto loc_82265038;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822632b0
	ctx.lr = 0x82264FCC;
	sub_822632B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265038
	if (ctx.cr0.lt) goto loc_82265038;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r30,r26
	ctx.r4.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bl 0x82248a40
	ctx.lr = 0x82264FE8;
	sub_82248A40(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
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
	// b 0x82265024
	goto loc_82265024;
loc_82265014:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82248f70
	ctx.lr = 0x82265024;
	sub_82248F70(ctx, base);
loc_82265024:
	// subf. r25,r31,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x82264f78
	if (!ctx.cr0.eq) goto loc_82264F78;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82265038:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82265040"))) PPC_WEAK_FUNC(sub_82265040);
PPC_FUNC_IMPL(__imp__sub_82265040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82265048;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// clrlwi. r11,r7,20
	ctx.r11.u64 = ctx.r7.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82265088
	if (ctx.cr0.eq) goto loc_82265088;
	// subfic r27,r11,4096
	ctx.xer.ca = ctx.r11.u32 <= 4096;
	ctx.r27.s64 = 4096 - ctx.r11.s64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82264f58
	ctx.lr = 0x82265074;
	sub_82264F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265184
	if (ctx.cr0.lt) goto loc_82265184;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
loc_82265088:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82263900
	ctx.lr = 0x822650A4;
	sub_82263900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265184
	if (ctx.cr0.lt) goto loc_82265184;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82260ce8
	ctx.lr = 0x822650C4;
	sub_82260CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82265120
	if (ctx.cr0.eq) goto loc_82265120;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82248a40
	ctx.lr = 0x822650E0;
	sub_82248A40(ctx, base);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r29,r29,-4096
	ctx.r29.s64 = ctx.r29.s64 + -4096;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r30,r30,4096
	ctx.r30.s64 = ctx.r30.s64 + 4096;
	// srawi r11,r11,12
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 12;
	// addi r31,r31,4096
	ctx.r31.s64 = ctx.r31.s64 + 4096;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmplwi cr6,r29,4096
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4096, ctx.xer);
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
	// bge cr6,0x82265088
	if (!ctx.cr6.lt) goto loc_82265088;
	// b 0x82265158
	goto loc_82265158;
loc_82265120:
	// cmplwi cr6,r29,4096
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4096, ctx.xer);
	// blt cr6,0x82265158
	if (ctx.cr6.lt) goto loc_82265158;
	// rlwinm r27,r29,0,0,19
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFF000;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82264cf0
	ctx.lr = 0x82265144;
	sub_82264CF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265184
	if (ctx.cr0.lt) goto loc_82265184;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// add r31,r27,r31
	ctx.r31.u64 = ctx.r27.u64 + ctx.r31.u64;
loc_82265158:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82265180
	if (ctx.cr6.eq) goto loc_82265180;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82264f58
	ctx.lr = 0x82265178;
	sub_82264F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265184
	if (ctx.cr0.lt) goto loc_82265184;
loc_82265180:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82265184:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8226518C"))) PPC_WEAK_FUNC(sub_8226518C);
PPC_FUNC_IMPL(__imp__sub_8226518C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265190"))) PPC_WEAK_FUNC(sub_82265190);
PPC_FUNC_IMPL(__imp__sub_82265190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82265198;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r28,80(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r10,r11,7296
	ctx.r10.s64 = ctx.r11.s64 + 7296;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r24,24(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r27,8(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x8241dd2c
	ctx.lr = 0x822651CC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822651e0
	if (ctx.cr6.eq) goto loc_822651E0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x822652f8
	goto loc_822652F8;
loc_822651E0:
	// lbz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 2);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822651f8
	if (ctx.cr0.eq) goto loc_822651F8;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,296
	ctx.r30.u64 = ctx.r30.u64 | 296;
	// b 0x822652f8
	goto loc_822652F8;
loc_822651F8:
	// lbz r11,53(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82265210
	if (ctx.cr0.eq) goto loc_82265210;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,16
	ctx.r30.u64 = ctx.r30.u64 | 16;
	// b 0x822652f8
	goto loc_822652F8;
loc_82265210:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82265224
	if (!ctx.cr6.eq) goto loc_82265224;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// b 0x822652f8
	goto loc_822652F8;
loc_82265224:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r30,16(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822652f0
	if (!ctx.cr6.eq) goto loc_822652F0;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822652f0
	if (!ctx.cr6.lt) goto loc_822652F0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82265250
	if (ctx.cr6.lt) goto loc_82265250;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82265250:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// add r25,r30,r31
	ctx.r25.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82265298
	if (ctx.cr6.gt) goto loc_82265298;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82261978
	ctx.lr = 0x82265274;
	sub_82261978(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82265298
	if (!ctx.cr0.eq) goto loc_82265298;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82265040
	ctx.lr = 0x82265294;
	sub_82265040(ctx, base);
	// b 0x822652b0
	goto loc_822652B0;
loc_82265298:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82264f58
	ctx.lr = 0x822652B0;
	sub_82264F58(ctx, base);
loc_822652B0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822652dc
	if (ctx.cr6.lt) goto loc_822652DC;
	// lbz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 2);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822652d4
	if (ctx.cr0.eq) goto loc_822652D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r25,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r25.u32);
	// stw r11,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
loc_822652D4:
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// b 0x822652f8
	goto loc_822652F8;
loc_822652DC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248f70
	ctx.lr = 0x822652EC;
	sub_82248F70(ctx, base);
	// b 0x822652f8
	goto loc_822652F8;
loc_822652F0:
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,17
	ctx.r30.u64 = ctx.r30.u64 | 17;
loc_822652F8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82265300;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241e5fc
	ctx.lr = 0x82265310;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82265318"))) PPC_WEAK_FUNC(sub_82265318);
PPC_FUNC_IMPL(__imp__sub_82265318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82265320;
	sub_8224876C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r28,r10,0,0,19
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// li r21,0
	ctx.r21.s64 = 0;
	// rlwinm r29,r6,0,0,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFF000;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82265358
	if (!ctx.cr6.gt) goto loc_82265358;
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// rlwinm r21,r10,20,12,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
loc_82265358:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82265368
	if (!ctx.cr6.gt) goto loc_82265368;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82265368:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82265374
	if (!ctx.cr6.gt) goto loc_82265374;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82265374:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82265388
	if (!ctx.cr6.eq) goto loc_82265388;
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// beq cr6,0x822654f8
	if (ctx.cr6.eq) goto loc_822654F8;
loc_82265388:
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lwz r9,160(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822654f8
	if (!ctx.cr6.gt) goto loc_822654F8;
	// lwz r25,40(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// lwz r24,44(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r23,48(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x822654a8
	goto loc_822654A8;
loc_822653BC:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82263900
	ctx.lr = 0x822653D8;
	sub_82263900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822654fc
	if (ctx.cr0.lt) goto loc_822654FC;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82262e70
	ctx.lr = 0x822653F8;
	sub_82262E70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822654fc
	if (ctx.cr0.lt) goto loc_822654FC;
	// li r11,170
	ctx.r11.s64 = 170;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// divwu r11,r26,r11
	ctx.r11.u32 = ctx.r26.u32 / ctx.r11.u32;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf r9,r9,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r9.s64;
	// mulli r11,r11,170
	ctx.r11.s64 = ctx.r11.s64 * 170;
	// subf r11,r11,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r11.s64;
	// srawi r9,r9,12
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 12;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82265458
	if (!ctx.cr0.eq) goto loc_82265458;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82265458
	if (!ctx.cr6.eq) goto loc_82265458;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82265458:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82265478
	if (!ctx.cr6.eq) goto loc_82265478;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82265494
	if (!ctx.cr6.eq) goto loc_82265494;
	// cmplw cr6,r22,r25
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82265494
	if (!ctx.cr6.lt) goto loc_82265494;
	// b 0x82265488
	goto loc_82265488;
loc_82265478:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82265504
	if (!ctx.cr6.eq) goto loc_82265504;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82265494
	if (!ctx.cr6.eq) goto loc_82265494;
loc_82265488:
	// lwz r23,48(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r24,44(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r25,40(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
loc_82265494:
	// lbz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// addi r29,r29,4096
	ctx.r29.s64 = ctx.r29.s64 + 4096;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
loc_822654A8:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822653bc
	if (ctx.cr6.lt) goto loc_822653BC;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822654c8
	if (ctx.cr6.eq) goto loc_822654C8;
	// stw r25,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// stw r24,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r24.u32);
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
loc_822654C8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822654f8
	if (ctx.cr6.eq) goto loc_822654F8;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// add r10,r21,r10
	ctx.r10.u64 = ctx.r21.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822654f8
	if (!ctx.cr6.lt) goto loc_822654F8;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82263ef0
	ctx.lr = 0x822654F0;
	sub_82263EF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822654fc
	if (ctx.cr0.lt) goto loc_822654FC;
loc_822654F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822654FC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_82265504:
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// bl 0x82262500
	ctx.lr = 0x82265514;
	sub_82262500(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
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
	// b 0x822654fc
	goto loc_822654FC;
}

__attribute__((alias("__imp__sub_82265548"))) PPC_WEAK_FUNC(sub_82265548);
PPC_FUNC_IMPL(__imp__sub_82265548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82265550;
	sub_82248764(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r25,r5,0,0,19
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFF000;
	// lwz r26,40(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lwz r24,44(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lwz r23,48(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// bl 0x82263900
	ctx.lr = 0x82265590;
	sub_82263900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822658e4
	if (ctx.cr0.lt) goto loc_822658E4;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82263018
	ctx.lr = 0x822655B4;
	sub_82263018(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822658e4
	if (ctx.cr0.lt) goto loc_822658E4;
	// li r11,170
	ctx.r11.s64 = 170;
	// lwz r29,0(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// divwu r11,r27,r11
	ctx.r11.u32 = ctx.r27.u32 / ctx.r11.u32;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// mulli r11,r11,170
	ctx.r11.s64 = ctx.r11.s64 * 170;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// bne cr6,0x82265678
	if (!ctx.cr6.eq) goto loc_82265678;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82265640
	if (ctx.cr6.eq) goto loc_82265640;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82265640
	if (ctx.cr6.eq) goto loc_82265640;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// bl 0x82262500
	ctx.lr = 0x8226560C;
	sub_82262500(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
loc_82265614:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
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
	// b 0x822658e4
	goto loc_822658E4;
loc_82265640:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82262d80
	ctx.lr = 0x82265658;
	sub_82262D80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265614
	if (ctx.cr0.lt) goto loc_82265614;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// oris r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 3221225472;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// stw r27,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r27.u32);
	// b 0x822658e4
	goto loc_822658E4;
loc_82265678:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x822656c0
	if (!ctx.cr6.eq) goto loc_822656C0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x822656a4
	if (ctx.cr6.eq) goto loc_822656A4;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82262d80
	ctx.lr = 0x822656A0;
	sub_82262D80(ctx, base);
	// b 0x822656ac
	goto loc_822656AC;
loc_822656A4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822633b0
	ctx.lr = 0x822656AC;
	sub_822633B0(ctx, base);
loc_822656AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82265614
	if (ctx.cr6.lt) goto loc_82265614;
	// stw r27,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822658e4
	goto loc_822658E4;
loc_822656C0:
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// clrlwi r28,r11,8
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r9,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r9.s64;
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
	// beq cr6,0x82265710
	if (ctx.cr6.eq) goto loc_82265710;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,50
	ctx.r4.u64 = ctx.r4.u64 | 50;
	// bl 0x82262500
	ctx.lr = 0x82265704;
	sub_82262500(ctx, base);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,50
	ctx.r3.u64 = ctx.r3.u64 | 50;
	// b 0x822658e4
	goto loc_822658E4;
loc_82265710:
	// li r6,-1
	ctx.r6.s64 = -1;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x8226576c
	if (ctx.cr6.eq) goto loc_8226576C;
	// addi r5,r25,-4096
	ctx.r5.s64 = ctx.r25.s64 + -4096;
	// cmplw cr6,r5,r26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82265748
	if (ctx.cr6.lt) goto loc_82265748;
	// add r11,r24,r26
	ctx.r11.u64 = ctx.r24.u64 + ctx.r26.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82265748
	if (!ctx.cr6.lt) goto loc_82265748;
	// subf r11,r26,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r26.s64;
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// add r6,r11,r23
	ctx.r6.u64 = ctx.r11.u64 + ctx.r23.u64;
	// b 0x8226576c
	goto loc_8226576C;
loc_82265748:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82263900
	ctx.lr = 0x82265760;
	sub_82263900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822658e4
	if (ctx.cr0.lt) goto loc_822658E4;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8226576C:
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,31,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x2;
	// bl 0x82264430
	ctx.lr = 0x8226578C;
	sub_82264430(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822658e4
	if (ctx.cr0.lt) goto loc_822658E4;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x822657a8
	if (!ctx.cr6.eq) goto loc_822657A8;
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
loc_822657A8:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x822657b8
	if (!ctx.cr6.eq) goto loc_822657B8;
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
loc_822657B8:
	// add r11,r24,r26
	ctx.r11.u64 = ctx.r24.u64 + ctx.r26.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x822657e4
	if (!ctx.cr6.eq) goto loc_822657E4;
	// rlwinm r11,r24,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 20) & 0xFFFFF;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x822657e4
	if (!ctx.cr6.eq) goto loc_822657E4;
	// addi r11,r24,4096
	ctx.r11.s64 = ctx.r24.s64 + 4096;
	// stw r26,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r26.u32);
	// stw r23,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r23.u32);
	// b 0x822657f0
	goto loc_822657F0;
loc_822657E4:
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r25,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r25.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r29.u32);
loc_822657F0:
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82265810
	if (ctx.cr0.eq) goto loc_82265810;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// b 0x82265818
	goto loc_82265818;
loc_82265810:
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,53(r30)
	PPC_STORE_U8(ctx.r30.u32 + 53, ctx.r11.u8);
loc_82265818:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822649d0
	ctx.lr = 0x8226582C;
	sub_822649D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822658e4
	if (ctx.cr0.lt) goto loc_822658E4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82265858
	if (ctx.cr6.eq) goto loc_82265858;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82262d80
	ctx.lr = 0x82265854;
	sub_82262D80(ctx, base);
	// b 0x82265868
	goto loc_82265868;
loc_82265858:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82263428
	ctx.lr = 0x82265868;
	sub_82263428(ctx, base);
loc_82265868:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822658e0
	if (ctx.cr6.lt) goto loc_822658E0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82265894
	if (!ctx.cr6.eq) goto loc_82265894;
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82265894
	if (ctx.cr0.eq) goto loc_82265894;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82261c28
	ctx.lr = 0x82265894;
	sub_82261C28(ctx, base);
loc_82265894:
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82263018
	ctx.lr = 0x822658AC;
	sub_82263018(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822658e0
	if (!ctx.cr0.lt) goto loc_822658E0;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
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
loc_822658E0:
	// stw r29,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r29.u32);
loc_822658E4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_822658EC"))) PPC_WEAK_FUNC(sub_822658EC);
PPC_FUNC_IMPL(__imp__sub_822658EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822658F0"))) PPC_WEAK_FUNC(sub_822658F0);
PPC_FUNC_IMPL(__imp__sub_822658F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822658F8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82265548
	ctx.lr = 0x82265928;
	sub_82265548(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265954
	if (ctx.cr0.lt) goto loc_82265954;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r30,20
	ctx.r10.u64 = ctx.r30.u32 & 0xFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82265954
	if (!ctx.cr6.eq) goto loc_82265954;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82265954:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8226595C"))) PPC_WEAK_FUNC(sub_8226595C);
PPC_FUNC_IMPL(__imp__sub_8226595C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265960"))) PPC_WEAK_FUNC(sub_82265960);
PPC_FUNC_IMPL(__imp__sub_82265960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82265968;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,54(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 54);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// rotlwi r4,r11,6
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822658f0
	ctx.lr = 0x82265994;
	sub_822658F0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x822659d0
	if (ctx.cr0.lt) goto loc_822659D0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82261db8
	ctx.lr = 0x822659AC;
	sub_82261DB8(ctx, base);
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// andi. r11,r11,207
	ctx.r11.u64 = ctx.r11.u64 & 207;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// bl 0x82261d10
	ctx.lr = 0x822659D0;
	sub_82261D10(ctx, base);
loc_822659D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822659DC"))) PPC_WEAK_FUNC(sub_822659DC);
PPC_FUNC_IMPL(__imp__sub_822659DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822659E0"))) PPC_WEAK_FUNC(sub_822659E0);
PPC_FUNC_IMPL(__imp__sub_822659E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822659E8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,53(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 53);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82265a08
	if (ctx.cr0.eq) goto loc_82265A08;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82265a54
	goto loc_82265A54;
loc_82265A08:
	// lhz r11,54(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 54);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rotlwi r4,r11,6
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822658f0
	ctx.lr = 0x82265A28;
	sub_822658F0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82265a50
	if (ctx.cr0.lt) goto loc_82265A50;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// bl 0x82261d10
	ctx.lr = 0x82265A50;
	sub_82261D10(ctx, base);
loc_82265A50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82265A54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82265A5C"))) PPC_WEAK_FUNC(sub_82265A5C);
PPC_FUNC_IMPL(__imp__sub_82265A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265A60"))) PPC_WEAK_FUNC(sub_82265A60);
PPC_FUNC_IMPL(__imp__sub_82265A60) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,32(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// bl 0x822649d0
	ctx.lr = 0x82265A84;
	sub_822649D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265abc
	if (ctx.cr0.lt) goto loc_82265ABC;
	// lbz r9,53(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stb r9,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r9.u8);
loc_82265ABC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82265AD0"))) PPC_WEAK_FUNC(sub_82265AD0);
PPC_FUNC_IMPL(__imp__sub_82265AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82265AD8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82263900
	ctx.lr = 0x82265AFC;
	sub_82263900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265b64
	if (ctx.cr0.lt) goto loc_82265B64;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822649d0
	ctx.lr = 0x82265B1C;
	sub_822649D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265b64
	if (ctx.cr0.lt) goto loc_82265B64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// ble cr6,0x82265b44
	if (!ctx.cr6.gt) goto loc_82265B44;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_82265B44:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82265b54
	if (!ctx.cr6.gt) goto loc_82265B54;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82265B54:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
loc_82265B64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82265B6C"))) PPC_WEAK_FUNC(sub_82265B6C);
PPC_FUNC_IMPL(__imp__sub_82265B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265B70"))) PPC_WEAK_FUNC(sub_82265B70);
PPC_FUNC_IMPL(__imp__sub_82265B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82265B78;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,36(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r30,20(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x82265bc8
	if (ctx.cr6.eq) goto loc_82265BC8;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82265bc8
	if (!ctx.cr6.eq) goto loc_82265BC8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// bl 0x82263900
	ctx.lr = 0x82265BB8;
	sub_82263900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265c5c
	if (ctx.cr0.lt) goto loc_82265C5C;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
loc_82265BC8:
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// lbz r10,53(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r29,r11,20,12,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwinm r5,r10,30,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82264430
	ctx.lr = 0x82265BF0;
	sub_82264430(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265c5c
	if (ctx.cr0.lt) goto loc_82265C5C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bne cr6,0x82265c34
	if (!ctx.cr6.eq) goto loc_82265C34;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82265c34
	if (!ctx.cr6.eq) goto loc_82265C34;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_82265C34:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82265c50
	if (ctx.cr0.eq) goto loc_82265C50;
	// lwz r11,168(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,168(r27)
	PPC_STORE_U32(ctx.r27.u32 + 168, ctx.r11.u32);
	// b 0x82265c58
	goto loc_82265C58;
loc_82265C50:
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
loc_82265C58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82265C5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82265C64"))) PPC_WEAK_FUNC(sub_82265C64);
PPC_FUNC_IMPL(__imp__sub_82265C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265C68"))) PPC_WEAK_FUNC(sub_82265C68);
PPC_FUNC_IMPL(__imp__sub_82265C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82265C70;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-4096
	ctx.r11.s64 = -4096;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82265c98
	if (!ctx.cr6.gt) goto loc_82265C98;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,127
	ctx.r3.u64 = ctx.r3.u64 | 127;
	// b 0x82265d38
	goto loc_82265D38;
loc_82265C98:
	// addi r11,r5,4095
	ctx.r11.s64 = ctx.r5.s64 + 4095;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82265d38
	if (ctx.cr6.eq) goto loc_82265D38;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82265cd8
	if (!ctx.cr0.eq) goto loc_82265CD8;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82265cd8
	if (!ctx.cr0.eq) goto loc_82265CD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822659e0
	ctx.lr = 0x82265CD0;
	sub_822659E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265d38
	if (ctx.cr0.lt) goto loc_82265D38;
loc_82265CD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82265cf0
	if (!ctx.cr6.eq) goto loc_82265CF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82265a60
	ctx.lr = 0x82265CEC;
	sub_82265A60(ctx, base);
	// b 0x82265d38
	goto loc_82265D38;
loc_82265CF0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82265d10
	if (!ctx.cr6.lt) goto loc_82265D10;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82265b70
	ctx.lr = 0x82265D0C;
	sub_82265B70(ctx, base);
	// b 0x82265d38
	goto loc_82265D38;
loc_82265D10:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82265d34
	if (!ctx.cr6.eq) goto loc_82265D34;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82265d34
	if (!ctx.cr6.gt) goto loc_82265D34;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82265ad0
	ctx.lr = 0x82265D30;
	sub_82265AD0(ctx, base);
	// b 0x82265d38
	goto loc_82265D38;
loc_82265D34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82265D38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82265D40"))) PPC_WEAK_FUNC(sub_82265D40);
PPC_FUNC_IMPL(__imp__sub_82265D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x82265D48;
	sub_82248760(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,80(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r20,24(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r21,4(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,8(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// bl 0x8241dd2c
	ctx.lr = 0x82265D68;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r29,136(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 136);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82265fc4
	if (!ctx.cr6.eq) goto loc_82265FC4;
	// lbz r11,2(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 2);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82265d8c
	if (ctx.cr0.eq) goto loc_82265D8C;
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// ori r29,r29,296
	ctx.r29.u64 = ctx.r29.u64 | 296;
	// b 0x82265fc4
	goto loc_82265FC4;
loc_82265D8C:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82265da4
	if (ctx.cr0.eq) goto loc_82265DA4;
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// ori r29,r29,16
	ctx.r29.u64 = ctx.r29.u64 | 16;
	// b 0x82265fc4
	goto loc_82265FC4;
loc_82265DA4:
	// lbz r11,206(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 206);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82265dbc
	if (!ctx.cr0.eq) goto loc_82265DBC;
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// ori r29,r29,34
	ctx.r29.u64 = ctx.r29.u64 | 34;
	// b 0x82265fc4
	goto loc_82265FC4;
loc_82265DBC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82265dd4
	if (!ctx.cr6.eq) goto loc_82265DD4;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// stw r18,20(r19)
	PPC_STORE_U32(ctx.r19.u32 + 20, ctx.r18.u32);
	// b 0x82265fc4
	goto loc_82265FC4;
loc_82265DD4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822659e0
	ctx.lr = 0x82265DE0;
	sub_822659E0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82265fc4
	if (ctx.cr0.lt) goto loc_82265FC4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82265e10
	if (!ctx.cr6.eq) goto loc_82265E10;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82265e10
	if (!ctx.cr6.eq) goto loc_82265E10;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r18,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r18.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_82265E10:
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r22,r28,r21
	ctx.r22.u64 = ctx.r28.u64 + ctx.r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r22,4095
	ctx.r11.s64 = ctx.r22.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// bne cr6,0x82265fbc
	if (!ctx.cr6.eq) goto loc_82265FBC;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x82265fbc
	if (!ctx.cr6.gt) goto loc_82265FBC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82265318
	ctx.lr = 0x82265E48;
	sub_82265318(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82265fc4
	if (ctx.cr0.lt) goto loc_82265FC4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82265e78
	if (!ctx.cr6.gt) goto loc_82265E78;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82265c68
	ctx.lr = 0x82265E70;
	sub_82265C68(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82265fc4
	if (ctx.cr0.lt) goto loc_82265FC4;
loc_82265E78:
	// rlwinm r30,r28,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFF000;
	// b 0x82265ec8
	goto loc_82265EC8;
loc_82265E80:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82265548
	ctx.lr = 0x82265EA0;
	sub_82265548(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82265fc4
	if (ctx.cr0.lt) goto loc_82265FC4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82261d10
	ctx.lr = 0x82265EBC;
	sub_82261D10(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82265EC8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82265e80
	if (ctx.cr6.lt) goto loc_82265E80;
	// lwz r24,28(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
loc_82265EDC:
	// clrlwi r26,r28,20
	ctx.r26.u64 = ctx.r28.u32 & 0xFFF;
	// subfic r30,r26,4096
	ctx.xer.ca = ctx.r26.u32 <= 4096;
	ctx.r30.s64 = 4096 - ctx.r26.s64;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82265ef0
	if (!ctx.cr6.gt) goto loc_82265EF0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82265EF0:
	// addi r11,r30,-4096
	ctx.r11.s64 = ctx.r30.s64 + -4096;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82265548
	ctx.lr = 0x82265F18;
	sub_82265548(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82265fc4
	if (ctx.cr0.lt) goto loc_82265FC4;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r3,r26,r27
	ctx.r3.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bl 0x82248a40
	ctx.lr = 0x82265F34;
	sub_82248A40(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82261d10
	ctx.lr = 0x82265F48;
	sub_82261D10(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r28,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFF000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82265f60
	if (!ctx.cr6.eq) goto loc_82265F60;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82265F60:
	// subf. r25,r30,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r24,r30,r24
	ctx.r24.u64 = ctx.r30.u64 + ctx.r24.u64;
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bne 0x82265edc
	if (!ctx.cr0.eq) goto loc_82265EDC;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82265f80
	if (!ctx.cr6.lt) goto loc_82265F80;
	// stw r22,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r22.u32);
loc_82265F80:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241e3dc
	ctx.lr = 0x82265F88;
	__imp__KeQuerySystemTime(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82261ae8
	ctx.lr = 0x82265F94;
	sub_82261AE8(ctx, base);
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// lbz r11,2(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 2);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82265fb4
	if (ctx.cr0.eq) goto loc_82265FB4;
	// stw r22,24(r20)
	PPC_STORE_U32(ctx.r20.u32 + 24, ctx.r22.u32);
	// stw r18,20(r20)
	PPC_STORE_U32(ctx.r20.u32 + 20, ctx.r18.u32);
loc_82265FB4:
	// stw r21,20(r19)
	PPC_STORE_U32(ctx.r19.u32 + 20, ctx.r21.u32);
	// b 0x82265fc4
	goto loc_82265FC4;
loc_82265FBC:
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// ori r29,r29,127
	ctx.r29.u64 = ctx.r29.u64 | 127;
loc_82265FC4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82265FCC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,16(r19)
	PPC_STORE_U32(ctx.r19.u32 + 16, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8241e5fc
	ctx.lr = 0x82265FDC;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_82265FE4"))) PPC_WEAK_FUNC(sub_82265FE4);
PPC_FUNC_IMPL(__imp__sub_82265FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82265FE8"))) PPC_WEAK_FUNC(sub_82265FE8);
PPC_FUNC_IMPL(__imp__sub_82265FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82265FF0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8241dd2c
	ctx.lr = 0x8226600C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241e67c
	ctx.lr = 0x82266018;
	__imp__IoRemoveShareAccess(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822660bc
	if (!ctx.cr6.eq) goto loc_822660BC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822660bc
	if (!ctx.cr6.eq) goto loc_822660BC;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822660a4
	if (ctx.cr0.eq) goto loc_822660A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265960
	ctx.lr = 0x82266050;
	sub_82265960(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822660bc
	if (ctx.cr0.lt) goto loc_822660BC;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82266084
	if (!ctx.cr0.eq) goto loc_82266084;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82266084
	if (ctx.cr6.eq) goto loc_82266084;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822649d0
	ctx.lr = 0x82266084;
	sub_822649D0(ctx, base);
loc_82266084:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822616b0
	ctx.lr = 0x8226609C;
	sub_822616B0(ctx, base);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// b 0x822660bc
	goto loc_822660BC;
loc_822660A4:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822660bc
	if (ctx.cr0.eq) goto loc_822660BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265960
	ctx.lr = 0x822660BC;
	sub_82265960(ctx, base);
loc_822660BC:
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r11.u8);
	// bl 0x8241dd3c
	ctx.lr = 0x822660D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r27,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241e5fc
	ctx.lr = 0x822660E0;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822660E8"))) PPC_WEAK_FUNC(sub_822660E8);
PPC_FUNC_IMPL(__imp__sub_822660E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x822660F0;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,206(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 206);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8226612c
	if (!ctx.cr0.eq) goto loc_8226612C;
loc_82266120:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,746
	ctx.r3.u64 = ctx.r3.u64 | 746;
	// b 0x82266250
	goto loc_82266250;
loc_8226612C:
	// lwz r28,68(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x8226615c
	if (!ctx.cr6.eq) goto loc_8226615C;
	// lwz r28,84(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// addi r5,r28,4096
	ctx.r5.s64 = ctx.r28.s64 + 4096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265c68
	ctx.lr = 0x82266150;
	sub_82265C68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8226616c
	if (!ctx.cr0.lt) goto loc_8226616C;
	// b 0x82266250
	goto loc_82266250;
loc_8226615C:
	// lis r11,63
	ctx.r11.s64 = 4128768;
	// ori r11,r11,65408
	ctx.r11.u64 = ctx.r11.u64 | 65408;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82266120
	if (ctx.cr6.gt) goto loc_82266120;
loc_8226616C:
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248f70
	ctx.lr = 0x82266180;
	sub_82248F70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82248a40
	ctx.lr = 0x82266190;
	sub_82248A40(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lbz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// rlwimi r11,r10,0,25,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFBF);
	// rlwimi r11,r26,7,0,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 7) & 0xFFFFFF80) | (ctx.r11.u64 & 0xFFFFFFFF0000007F);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// bl 0x8241e3dc
	ctx.lr = 0x822661AC;
	__imp__KeQuerySystemTime(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82261ae8
	ctx.lr = 0x822661B8;
	sub_82261AE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x82261480
	ctx.lr = 0x822661D8;
	sub_82261480(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822661ec
	if (!ctx.cr0.eq) goto loc_822661EC;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,154
	ctx.r3.u64 = ctx.r3.u64 | 154;
	// b 0x82266250
	goto loc_82266250;
loc_822661EC:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82266214
	if (!ctx.cr0.eq) goto loc_82266214;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265c68
	ctx.lr = 0x8226620C;
	sub_82265C68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82266218
	goto loc_82266218;
loc_82266214:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82266218:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82266244
	if (ctx.cr6.lt) goto loc_82266244;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265960
	ctx.lr = 0x82266230;
	sub_82265960(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82266244
	if (ctx.cr0.lt) goto loc_82266244;
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8226624c
	goto loc_8226624C;
loc_82266244:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822616b0
	ctx.lr = 0x8226624C;
	sub_822616B0(ctx, base);
loc_8226624C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82266250:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82266258"))) PPC_WEAK_FUNC(sub_82266258);
PPC_FUNC_IMPL(__imp__sub_82266258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82266260;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8241e3dc
	ctx.lr = 0x82266284;
	__imp__KeQuerySystemTime(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82261ae8
	ctx.lr = 0x82266290;
	sub_82261AE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x82265c68
	ctx.lr = 0x822662B0;
	sub_82265C68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822662c8
	if (ctx.cr0.lt) goto loc_822662C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265960
	ctx.lr = 0x822662C8;
	sub_82265960(ctx, base);
loc_822662C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822662D0"))) PPC_WEAK_FUNC(sub_822662D0);
PPC_FUNC_IMPL(__imp__sub_822662D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x822662D8;
	sub_82248760(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,80(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lwz r26,24(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r19,8(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r21,4(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lhz r20,14(r29)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// rlwinm r22,r19,8,24,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 8) & 0xFF;
	// bl 0x8241e64c
	ctx.lr = 0x82266304;
	__imp__ObIsTitleObject(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r30,28(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x8241dd2c
	ctx.lr = 0x82266320;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r31,136(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 136);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x822664fc
	if (!ctx.cr6.eq) goto loc_822664FC;
	// lbz r11,206(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 206);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82266364
	if (!ctx.cr0.eq) goto loc_82266364;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// beq cr6,0x82266358
	if (ctx.cr6.eq) goto loc_82266358;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82266358
	if (ctx.cr6.eq) goto loc_82266358;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// beq cr6,0x82266358
	if (ctx.cr6.eq) goto loc_82266358;
	// cmplwi cr6,r22,5
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 5, ctx.xer);
	// bne cr6,0x82266364
	if (!ctx.cr6.eq) goto loc_82266364;
loc_82266358:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,34
	ctx.r31.u64 = ctx.r31.u64 | 34;
	// b 0x822664fc
	goto loc_822664FC;
loc_82266364:
	// lwz r11,40(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226637c
	if (ctx.cr6.eq) goto loc_8226637C;
loc_82266370:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x822664fc
	goto loc_822664FC;
loc_8226637C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822663fc
	if (ctx.cr6.eq) goto loc_822663FC;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r11,53(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82266370
	if (ctx.cr0.eq) goto loc_82266370;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82261728
	ctx.lr = 0x8226639C;
	sub_82261728(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822663b0
	if (!ctx.cr0.eq) goto loc_822663B0;
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,154
	ctx.r31.u64 = ctx.r31.u64 | 154;
	// b 0x822664fc
	goto loc_822664FC;
loc_822663B0:
	// lhz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x822663e0
	if (!ctx.cr0.eq) goto loc_822663E0;
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822663d8
	if (ctx.cr0.eq) goto loc_822663D8;
loc_822663CC:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,34
	ctx.r31.u64 = ctx.r31.u64 | 34;
	// b 0x822664ec
	goto loc_822664EC;
loc_822663D8:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82266738
	goto loc_82266738;
loc_822663E0:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// bne cr6,0x82266448
	if (!ctx.cr6.eq) goto loc_82266448;
loc_822663F0:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,51
	ctx.r31.u64 = ctx.r31.u64 | 51;
	// b 0x822664ec
	goto loc_822664EC;
loc_822663FC:
	// lhz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82266358
	if (ctx.cr0.eq) goto loc_82266358;
	// addi r25,r23,56
	ctx.r25.s64 = ctx.r23.s64 + 56;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82261728
	ctx.lr = 0x82266418;
	sub_82261728(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// bne cr6,0x822663f0
	if (!ctx.cr6.eq) goto loc_822663F0;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x82266448
	if (!ctx.cr6.eq) goto loc_82266448;
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822663d8
	if (ctx.cr0.eq) goto loc_822663D8;
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x822664ec
	goto loc_822664EC;
loc_82266448:
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x8226646c
	if (!ctx.cr6.eq) goto loc_8226646C;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// b 0x82266470
	goto loc_82266470;
loc_8226646C:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82266470:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82262558
	ctx.lr = 0x82266480;
	sub_82262558(ctx, base);
	// lhz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x8226649c
	if (ctx.cr0.eq) goto loc_8226649C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x822663f0
	if (ctx.cr6.eq) goto loc_822663F0;
loc_8226649C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82261868
	ctx.lr = 0x822664A8;
	sub_82261868(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822665b0
	if (ctx.cr0.eq) goto loc_822665B0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82261728
	ctx.lr = 0x822664BC;
	sub_82261728(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82266694
	if (ctx.cr0.eq) goto loc_82266694;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822616b0
	ctx.lr = 0x822664CC;
	sub_822616B0(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822666a0
	if (ctx.cr6.eq) goto loc_822666A0;
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82266470
	if (!ctx.cr0.eq) goto loc_82266470;
loc_822664E4:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,58
	ctx.r31.u64 = ctx.r31.u64 | 58;
loc_822664EC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822664fc
	if (ctx.cr6.eq) goto loc_822664FC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822616b0
	ctx.lr = 0x822664FC;
	sub_822616B0(ctx, base);
loc_822664FC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82266504;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r31,16(r18)
	PPC_STORE_U32(ctx.r18.u32 + 16, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8241e5fc
	ctx.lr = 0x82266514;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_8226651C:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82263c08
	ctx.lr = 0x82266534;
	sub_82263C08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822665c4
	if (ctx.cr0.lt) goto loc_822665C4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82266550
	if (ctx.cr6.eq) goto loc_82266550;
	// lbz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822664e4
	if (ctx.cr0.eq) goto loc_822664E4;
loc_82266550:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82261480
	ctx.lr = 0x82266564;
	sub_82261480(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq 0x82266694
	if (ctx.cr0.eq) goto loc_82266694;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822616b0
	ctx.lr = 0x82266578;
	sub_822616B0(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82266684
	if (ctx.cr6.eq) goto loc_82266684;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82262558
	ctx.lr = 0x82266594;
	sub_82262558(ctx, base);
	// lhz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x822665b0
	if (ctx.cr0.eq) goto loc_822665B0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x822663f0
	if (ctx.cr6.eq) goto loc_822663F0;
loc_822665B0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822619e0
	ctx.lr = 0x822665B8;
	sub_822619E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8226651c
	if (!ctx.cr0.eq) goto loc_8226651C;
	// b 0x822663f0
	goto loc_822663F0;
loc_822665C4:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822664ec
	if (!ctx.cr6.eq) goto loc_822664EC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822664e4
	if (!ctx.cr6.eq) goto loc_822664E4;
	// lbz r11,53(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 53);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226671c
	if (!ctx.cr0.eq) goto loc_8226671C;
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82266600
	if (ctx.cr0.eq) goto loc_82266600;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x82266708
	goto loc_82266708;
loc_82266600:
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// beq cr6,0x822664ec
	if (ctx.cr6.eq) goto loc_822664EC;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// beq cr6,0x822664ec
	if (ctx.cr6.eq) goto loc_822664EC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82266620
	if (ctx.cr6.eq) goto loc_82266620;
	// rlwinm. r11,r19,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822663f0
	if (!ctx.cr0.eq) goto loc_822663F0;
loc_82266620:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r7,44(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822660e8
	ctx.lr = 0x82266644;
	sub_822660E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822664ec
	if (ctx.cr0.lt) goto loc_822664EC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822616b0
	ctx.lr = 0x82266654;
	sub_822616B0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// clrlwi r4,r20,16
	ctx.r4.u64 = ctx.r20.u32 & 0xFFFF;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8241e66c
	ctx.lr = 0x8226666C;
	__imp__IoSetShareAccess(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r31.u32);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// stw r10,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r10.u32);
	// b 0x82266858
	goto loc_82266858;
loc_82266684:
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226672c
	if (ctx.cr0.eq) goto loc_8226672C;
	// b 0x82266700
	goto loc_82266700;
loc_82266694:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,154
	ctx.r31.u64 = ctx.r31.u64 | 154;
	// b 0x822664ec
	goto loc_822664EC;
loc_822666A0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822666f4
	if (ctx.cr6.eq) goto loc_822666F4;
	// rlwinm. r10,r19,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8226671c
	if (!ctx.cr0.eq) goto loc_8226671C;
	// lbz r10,53(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8226671c
	if (!ctx.cr0.eq) goto loc_8226671C;
	// lbz r10,53(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822666f4
	if (!ctx.cr0.eq) goto loc_822666F4;
	// lis r12,1
	ctx.r12.s64 = 65536;
	// ori r12,r12,262
	ctx.r12.u64 = ctx.r12.u64 | 262;
	// and. r10,r21,r12
	ctx.r10.u64 = ctx.r21.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822663cc
	if (!ctx.cr0.eq) goto loc_822663CC;
	// lbz r10,58(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822663cc
	if (!ctx.cr0.eq) goto loc_822663CC;
	// lbz r11,59(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 59);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822663cc
	if (!ctx.cr0.eq) goto loc_822663CC;
loc_822666F4:
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82266728
	if (ctx.cr0.eq) goto loc_82266728;
loc_82266700:
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r6,4
	ctx.r6.s64 = 4;
loc_82266708:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822635e8
	ctx.lr = 0x82266714;
	sub_822635E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822664ec
	goto loc_822664EC;
loc_8226671C:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,86
	ctx.r31.u64 = ctx.r31.u64 | 86;
	// b 0x822664ec
	goto loc_822664EC;
loc_82266728:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8226672C:
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82266768
	if (ctx.cr0.eq) goto loc_82266768;
loc_82266738:
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// beq cr6,0x82266754
	if (ctx.cr6.eq) goto loc_82266754;
	// cmplwi cr6,r22,3
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 3, ctx.xer);
	// beq cr6,0x82266754
	if (ctx.cr6.eq) goto loc_82266754;
loc_82266748:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,53
	ctx.r31.u64 = ctx.r31.u64 | 53;
	// b 0x822664ec
	goto loc_822664EC;
loc_82266754:
	// rlwinm. r11,r19,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82266788
	if (ctx.cr0.eq) goto loc_82266788;
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,186
	ctx.r31.u64 = ctx.r31.u64 | 186;
	// b 0x82266788
	goto loc_82266788;
loc_82266768:
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// beq cr6,0x82266748
	if (ctx.cr6.eq) goto loc_82266748;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82266780
	if (!ctx.cr6.eq) goto loc_82266780;
	// clrlwi. r11,r19,31
	ctx.r11.u64 = ctx.r19.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82266788
	if (ctx.cr0.eq) goto loc_82266788;
loc_82266780:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,259
	ctx.r31.u64 = ctx.r31.u64 | 259;
loc_82266788:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822664ec
	if (ctx.cr6.lt) goto loc_822664EC;
	// lbz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 56);
	// addi r30,r25,56
	ctx.r30.s64 = ctx.r25.s64 + 56;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// clrlwi r4,r20,16
	ctx.r4.u64 = ctx.r20.u32 & 0xFFFF;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bne 0x822667b8
	if (!ctx.cr0.eq) goto loc_822667B8;
	// bl 0x8241e66c
	ctx.lr = 0x822667B4;
	__imp__IoSetShareAccess(ctx, base);
	// b 0x822667c4
	goto loc_822667C4;
loc_822667B8:
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x8241e65c
	ctx.lr = 0x822667C0;
	__imp__IoCheckShareAccess(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822667C4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822664ec
	if (ctx.cr6.lt) goto loc_822664EC;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822667ec
	if (ctx.cr6.eq) goto loc_822667EC;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// beq cr6,0x822667ec
	if (ctx.cr6.eq) goto loc_822667EC;
	// cmplwi cr6,r22,5
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 5, ctx.xer);
	// beq cr6,0x822667ec
	if (ctx.cr6.eq) goto loc_822667EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82266808
	goto loc_82266808;
loc_822667EC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,44(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82266258
	ctx.lr = 0x822667FC;
	sub_82266258(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82266810
	if (ctx.cr0.lt) goto loc_82266810;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82266808:
	// stw r11,20(r18)
	PPC_STORE_U32(ctx.r18.u32 + 20, ctx.r11.u32);
	// b 0x8226681c
	goto loc_8226681C;
loc_82266810:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241e67c
	ctx.lr = 0x8226681C;
	__imp__IoRemoveShareAccess(ctx, base);
loc_8226681C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822664ec
	if (ctx.cr6.lt) goto loc_822664EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r25,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r25.u32);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// lbz r11,206(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 206);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82266858
	if (ctx.cr0.eq) goto loc_82266858;
	// rlwinm. r11,r19,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82266858
	if (ctx.cr0.eq) goto loc_82266858;
	// lbz r11,53(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 53);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82266858
	if (!ctx.cr0.eq) goto loc_82266858;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,53(r25)
	PPC_STORE_U8(ctx.r25.u32 + 53, ctx.r11.u8);
loc_82266858:
	// lwz r9,128(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 128);
	// addi r10,r23,128
	ctx.r10.s64 = ctx.r23.s64 + 128;
	// addi r11,r26,80
	ctx.r11.s64 = ctx.r26.s64 + 80;
	// stw r10,84(r26)
	PPC_STORE_U32(ctx.r26.u32 + 84, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,80(r26)
	PPC_STORE_U32(ctx.r26.u32 + 80, ctx.r9.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,128(r23)
	PPC_STORE_U32(ctx.r23.u32 + 128, ctx.r11.u32);
	// b 0x822664fc
	goto loc_822664FC;
}

__attribute__((alias("__imp__sub_8226687C"))) PPC_WEAK_FUNC(sub_8226687C);
PPC_FUNC_IMPL(__imp__sub_8226687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82266880"))) PPC_WEAK_FUNC(sub_82266880);
PPC_FUNC_IMPL(__imp__sub_82266880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82266888;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,128(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// b 0x822668c4
	goto loc_822668C4;
loc_8226689C:
	// lwz r4,-72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,53(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 53);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822668c4
	if (ctx.cr0.eq) goto loc_822668C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82265960
	ctx.lr = 0x822668BC;
	sub_82265960(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822668d0
	if (ctx.cr0.lt) goto loc_822668D0;
loc_822668C4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8226689c
	if (!ctx.cr6.eq) goto loc_8226689C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822668D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822668D8"))) PPC_WEAK_FUNC(sub_822668D8);
PPC_FUNC_IMPL(__imp__sub_822668D8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82266914
	if (ctx.cr6.eq) goto loc_82266914;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82266914
	if (ctx.cr6.eq) goto loc_82266914;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82266a84
	if (!ctx.cr6.eq) goto loc_82266A84;
loc_82266914:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82266a78
	if (ctx.cr6.gt) goto loc_82266A78;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82266954
	// bdzf 4*cr6+eq,0x82266960
	// bdzf 4*cr6+eq,0x82266994
	// bdzf 4*cr6+eq,0x822669a4
	// bdzf 4*cr6+eq,0x82266a4c
	// bdzf 4*cr6+eq,0x82266a58
	// bdzf 4*cr6+eq,0x82266a34
	// bne cr6,0x82266a64
	if (!ctx.cr6.eq) goto loc_82266A64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82266950;
	__imp__RtlEnterCriticalSection(ctx, base);
	// b 0x82266a80
	goto loc_82266A80;
loc_82266954:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8226695C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82266a80
	goto loc_82266A80;
loc_82266960:
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82266a80
	if (!ctx.cr6.eq) goto loc_82266A80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266880
	ctx.lr = 0x82266974;
	sub_82266880(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82266a80
	if (ctx.cr0.lt) goto loc_82266A80;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822634b8
	ctx.lr = 0x8226698C;
	sub_822634B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82266a80
	goto loc_82266A80;
loc_82266994:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82260dd8
	ctx.lr = 0x822669A0;
	sub_82260DD8(ctx, base);
	// b 0x82266a80
	goto loc_82266A80;
loc_822669A4:
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82266a80
	if (!ctx.cr6.eq) goto loc_82266A80;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r7,r7,1
	ctx.r7.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r6,r6,20,12,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xFFFFF;
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// stw r8,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// b 0x82266a00
	goto loc_82266A00;
loc_822669EC:
	// lwz r9,-72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,53(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 53);
	// andi. r8,r8,223
	ctx.r8.u64 = ctx.r8.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r8,53(r9)
	PPC_STORE_U8(ctx.r9.u32 + 53, ctx.r8.u8);
loc_82266A00:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822669ec
	if (!ctx.cr6.eq) goto loc_822669EC;
	// lbz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82266a80
	if (ctx.cr0.eq) goto loc_82266A80;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82266A20:
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// andi. r11,r11,251
	ctx.r11.u64 = ctx.r11.u64 & 251;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stbu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82266a20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82266A20;
	// b 0x82266a80
	goto loc_82266A80;
loc_82266A34:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,7296
	ctx.r4.s64 = ctx.r11.s64 + 7296;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x82248a40
	ctx.lr = 0x82266A48;
	sub_82248A40(ctx, base);
	// b 0x82266a80
	goto loc_82266A80;
loc_82266A4C:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82266a80
	goto loc_82266A80;
loc_82266A58:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// b 0x82266a80
	goto loc_82266A80;
loc_82266A64:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x82266a80
	goto loc_82266A80;
loc_82266A78:
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,16
	ctx.r30.u64 = ctx.r30.u64 | 16;
loc_82266A80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82266A84:
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

__attribute__((alias("__imp__sub_82266A9C"))) PPC_WEAK_FUNC(sub_82266A9C);
PPC_FUNC_IMPL(__imp__sub_82266A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82266AA0"))) PPC_WEAK_FUNC(sub_82266AA0);
PPC_FUNC_IMPL(__imp__sub_82266AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82266AA8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x82266b08
	if (ctx.cr6.eq) goto loc_82266B08;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x82266b08
	if (ctx.cr6.eq) goto loc_82266B08;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82261ae8
	ctx.lr = 0x82266ADC;
	sub_82261AE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82266af0
	if (!ctx.cr0.eq) goto loc_82266AF0;
loc_82266AE4:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// b 0x82266bb4
	goto loc_82266BB4;
loc_82266AF0:
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82266b0c
	if (ctx.cr6.eq) goto loc_82266B0C;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82266b0c
	goto loc_82266B0C;
loc_82266B08:
	// lwz r27,64(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
loc_82266B0C:
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// beq cr6,0x82266b4c
	if (ctx.cr6.eq) goto loc_82266B4C;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x82266b4c
	if (ctx.cr6.eq) goto loc_82266B4C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82261ae8
	ctx.lr = 0x82266B2C;
	sub_82261AE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82266ae4
	if (ctx.cr0.eq) goto loc_82266AE4;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82266b50
	if (ctx.cr6.eq) goto loc_82266B50;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82266b50
	goto loc_82266B50;
loc_82266B4C:
	// lwz r29,68(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_82266B50:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82266b80
	if (ctx.cr6.eq) goto loc_82266B80;
	// lbz r10,53(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82266b78
	if (ctx.cr0.eq) goto loc_82266B78;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82266b80
	if (!ctx.cr0.eq) goto loc_82266B80;
	// b 0x82266ae4
	goto loc_82266AE4;
loc_82266B78:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82266ae4
	if (!ctx.cr0.eq) goto loc_82266AE4;
loc_82266B80:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82266bb0
	if (ctx.cr6.eq) goto loc_82266BB0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822659e0
	ctx.lr = 0x82266B94;
	sub_822659E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82266bb4
	if (ctx.cr0.lt) goto loc_82266BB4;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
loc_82266BB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82266BB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82266BBC"))) PPC_WEAK_FUNC(sub_82266BBC);
PPC_FUNC_IMPL(__imp__sub_82266BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82266BC0"))) PPC_WEAK_FUNC(sub_82266BC0);
PPC_FUNC_IMPL(__imp__sub_82266BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82266BC8;
	sub_82248780(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82266bf4
	if (!ctx.cr0.eq) goto loc_82266BF4;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// b 0x82266e48
	goto loc_82266E48;
loc_82266BF4:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r8,92
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 92, ctx.xer);
	// bne cr6,0x82266c10
	if (!ctx.cr6.eq) goto loc_82266C10;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82266C10:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82266c3c
	if (!ctx.cr6.gt) goto loc_82266C3C;
loc_82266C1C:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,92
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 92, ctx.xer);
	// beq cr6,0x82266c38
	if (ctx.cr6.eq) goto loc_82266C38;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82266c1c
	if (ctx.cr6.gt) goto loc_82266C1C;
	// b 0x82266c3c
	goto loc_82266C3C;
loc_82266C38:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82266C3C:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r27,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r27.u16);
	// sth r27,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r27.u16);
	// bl 0x822619e0
	ctx.lr = 0x82266C58;
	sub_822619E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82266c6c
	if (!ctx.cr0.eq) goto loc_82266C6C;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,51
	ctx.r3.u64 = ctx.r3.u64 | 51;
	// b 0x82266e48
	goto loc_82266E48;
loc_82266C6C:
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82266ca4
	if (ctx.cr6.eq) goto loc_82266CA4;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82266ca8
	if (!ctx.cr0.eq) goto loc_82266CA8;
	// lbz r10,53(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 53);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82266ca8
	if (ctx.cr0.eq) goto loc_82266CA8;
loc_82266C98:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,34
	ctx.r3.u64 = ctx.r3.u64 | 34;
	// b 0x82266e48
	goto loc_82266E48;
loc_82266CA4:
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_82266CA8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82266c98
	if (!ctx.cr6.eq) goto loc_82266C98;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82263c08
	ctx.lr = 0x82266CCC;
	sub_82263C08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82266da4
	if (ctx.cr0.lt) goto loc_82266DA4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82266d98
	if (ctx.cr0.eq) goto loc_82266D98;
	// lbz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82266d98
	if (!ctx.cr0.eq) goto loc_82266D98;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82261868
	ctx.lr = 0x82266CF8;
	sub_82261868(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82266c98
	if (!ctx.cr0.eq) goto loc_82266C98;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822658f0
	ctx.lr = 0x82266D1C;
	sub_822658F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82266e48
	if (ctx.cr0.lt) goto loc_82266E48;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm r10,r10,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// bl 0x82261d10
	ctx.lr = 0x82266D48;
	sub_82261D10(ctx, base);
	// lbz r11,158(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 158);
	// lbz r9,157(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 157);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82266db4
	if (ctx.cr0.eq) goto loc_82266DB4;
	// lbz r11,161(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 161);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,159(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x822649d0
	ctx.lr = 0x82266D94;
	sub_822649D0(ctx, base);
	// b 0x82266db4
	goto loc_82266DB4;
loc_82266D98:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,53
	ctx.r3.u64 = ctx.r3.u64 | 53;
	// b 0x82266e48
	goto loc_82266E48;
loc_82266DA4:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82266e48
	if (!ctx.cr6.eq) goto loc_82266E48;
loc_82266DB4:
	// clrlwi r5,r27,16
	ctx.r5.u64 = ctx.r27.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,80
	ctx.r3.s64 = ctx.r29.s64 + 80;
	// bl 0x82248a40
	ctx.lr = 0x82266DC4;
	sub_82248A40(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stb r27,52(r29)
	PPC_STORE_U8(ctx.r29.u32 + 52, ctx.r27.u8);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82266e38
	if (ctx.cr6.eq) goto loc_82266E38;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r31,r29,72
	ctx.r31.s64 = ctx.r29.s64 + 72;
	// lwz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x822616b0
	ctx.lr = 0x82266DF0;
	sub_822616B0(ctx, base);
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// clrlwi r28,r11,31
	ctx.r28.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82261728
	ctx.lr = 0x82266E08;
	sub_82261728(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82266e20
	if (!ctx.cr6.eq) goto loc_82266E20;
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,120
	ctx.r11.s64 = ctx.r26.s64 + 120;
	// bne 0x82266e24
	if (!ctx.cr0.eq) goto loc_82266E24;
loc_82266E20:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82266E24:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82266E38:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82265960
	ctx.lr = 0x82266E48;
	sub_82265960(ctx, base);
loc_82266E48:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82266E50"))) PPC_WEAK_FUNC(sub_82266E50);
PPC_FUNC_IMPL(__imp__sub_82266E50) {
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
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r11,53(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 53);
	// bne 0x82266e84
	if (!ctx.cr0.eq) goto loc_82266E84;
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82266ef4
	goto loc_82266EF4;
loc_82266E84:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82266ed8
	if (ctx.cr0.eq) goto loc_82266ED8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82263c08
	ctx.lr = 0x82266EB4;
	sub_82263C08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82266ec8
	if (ctx.cr0.lt) goto loc_82266EC8;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,257
	ctx.r3.u64 = ctx.r3.u64 | 257;
	// b 0x82266efc
	goto loc_82266EFC;
loc_82266EC8:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82266efc
	if (!ctx.cr6.eq) goto loc_82266EFC;
loc_82266ED8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822659e0
	ctx.lr = 0x82266EE4;
	sub_822659E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82266efc
	if (ctx.cr0.lt) goto loc_82266EFC;
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_82266EF4:
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82266EFC:
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

__attribute__((alias("__imp__sub_82266F14"))) PPC_WEAK_FUNC(sub_82266F14);
PPC_FUNC_IMPL(__imp__sub_82266F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82266F18"))) PPC_WEAK_FUNC(sub_82266F18);
PPC_FUNC_IMPL(__imp__sub_82266F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82266F20;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82266f44
	if (ctx.cr6.eq) goto loc_82266F44;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,127
	ctx.r3.u64 = ctx.r3.u64 | 127;
	// b 0x82266fa0
	goto loc_82266FA0;
loc_82266F44:
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82266f9c
	if (ctx.cr6.eq) goto loc_82266F9C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822659e0
	ctx.lr = 0x82266F60;
	sub_822659E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82266fa0
	if (ctx.cr0.lt) goto loc_82266FA0;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82266f8c
	if (!ctx.cr6.gt) goto loc_82266F8C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82265c68
	ctx.lr = 0x82266F84;
	sub_82265C68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82266fa0
	if (ctx.cr0.lt) goto loc_82266FA0;
loc_82266F8C:
	// lbz r11,53(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 53);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r11.u8);
loc_82266F9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82266FA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82266FA8"))) PPC_WEAK_FUNC(sub_82266FA8);
PPC_FUNC_IMPL(__imp__sub_82266FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82266FB0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,80(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r28,24(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x8241dd2c
	ctx.lr = 0x82266FCC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r31,136(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82267168
	if (!ctx.cr6.eq) goto loc_82267168;
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82266ff0
	if (ctx.cr0.eq) goto loc_82266FF0;
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,296
	ctx.r31.u64 = ctx.r31.u64 | 296;
	// b 0x82267168
	goto loc_82267168;
loc_82266FF0:
	// lbz r11,206(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 206);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82267014
	if (!ctx.cr0.eq) goto loc_82267014;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82267014
	if (ctx.cr6.eq) goto loc_82267014;
loc_82267008:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,34
	ctx.r31.u64 = ctx.r31.u64 | 34;
	// b 0x82267168
	goto loc_82267168;
loc_82267014:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82267130
	if (ctx.cr6.eq) goto loc_82267130;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82267100
	if (ctx.cr6.eq) goto loc_82267100;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x822670d4
	if (ctx.cr6.eq) goto loc_822670D4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x822670c4
	if (ctx.cr6.eq) goto loc_822670C4;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82267078
	if (ctx.cr6.eq) goto loc_82267078;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x8226713c
	if (!ctx.cr6.eq) goto loc_8226713C;
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226713c
	if (!ctx.cr0.eq) goto loc_8226713C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82267008
	if (!ctx.cr6.eq) goto loc_82267008;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,28(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82266f18
	ctx.lr = 0x82267074;
	sub_82266F18(ctx, base);
	// b 0x82267164
	goto loc_82267164;
loc_82267078:
	// lbz r10,53(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8226713c
	if (!ctx.cr0.eq) goto loc_8226713C;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82267008
	if (!ctx.cr6.eq) goto loc_82267008;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822670ac
	if (ctx.cr6.eq) goto loc_822670AC;
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,127
	ctx.r31.u64 = ctx.r31.u64 | 127;
	// b 0x82267168
	goto loc_82267168;
loc_822670AC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82265c68
	ctx.lr = 0x822670C0;
	sub_82265C68(ctx, base);
	// b 0x82267164
	goto loc_82267164;
loc_822670C4:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,20(r28)
	PPC_STORE_U64(ctx.r28.u32 + 20, ctx.r11.u64);
	// b 0x82267168
	goto loc_82267168;
loc_822670D4:
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226713c
	if (!ctx.cr0.eq) goto loc_8226713C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82267008
	if (!ctx.cr6.eq) goto loc_82267008;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,28(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82266e50
	ctx.lr = 0x822670FC;
	sub_82266E50(ctx, base);
	// b 0x82267164
	goto loc_82267164;
loc_82267100:
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226713c
	if (!ctx.cr0.eq) goto loc_8226713C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82267008
	if (!ctx.cr6.eq) goto loc_82267008;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,28(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82266bc0
	ctx.lr = 0x8226712C;
	sub_82266BC0(ctx, base);
	// b 0x82267164
	goto loc_82267164;
loc_82267130:
	// lbz r11,53(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82267148
	if (ctx.cr0.eq) goto loc_82267148;
loc_8226713C:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x82267168
	goto loc_82267168;
loc_82267148:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82267008
	if (!ctx.cr6.eq) goto loc_82267008;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,28(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82266aa0
	ctx.lr = 0x82267164;
	sub_82266AA0(ctx, base);
loc_82267164:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82267168:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82267170;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241e5fc
	ctx.lr = 0x82267180;
	__imp__IoCompleteRequest(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82267188"))) PPC_WEAK_FUNC(sub_82267188);
PPC_FUNC_IMPL(__imp__sub_82267188) {
	PPC_FUNC_PROLOGUE();
	// b 0x8241e3dc
	__imp__KeQuerySystemTime(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226718C"))) PPC_WEAK_FUNC(sub_8226718C);
PPC_FUNC_IMPL(__imp__sub_8226718C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82267190"))) PPC_WEAK_FUNC(sub_82267190);
PPC_FUNC_IMPL(__imp__sub_82267190) {
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
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r11,7340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822672d8
	if (!ctx.cr6.eq) goto loc_822672D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1884);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822672d0
	if (ctx.cr6.eq) goto loc_822672D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,1740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822672d0
	if (ctx.cr0.eq) goto loc_822672D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,10656
	ctx.r3.s64 = ctx.r11.s64 + 10656;
	// bl 0x8241e68c
	ctx.lr = 0x822671F0;
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822672d0
	if (ctx.cr0.lt) goto loc_822672D0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822672d0
	if (ctx.cr6.eq) goto loc_822672D0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,155
	ctx.r4.s64 = 155;
	// bl 0x8241e57c
	ctx.lr = 0x82267210;
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822672d0
	if (ctx.cr0.lt) goto loc_822672D0;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,156
	ctx.r4.s64 = 156;
	// bl 0x8241e57c
	ctx.lr = 0x82267228;
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822672d0
	if (ctx.cr0.lt) goto loc_822672D0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,157
	ctx.r4.s64 = 157;
	// bl 0x8241e57c
	ctx.lr = 0x82267240;
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822672d0
	if (ctx.cr0.lt) goto loc_822672D0;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,158
	ctx.r4.s64 = 158;
	// bl 0x8241e57c
	ctx.lr = 0x82267258;
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822672d0
	if (ctx.cr0.lt) goto loc_822672D0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,159
	ctx.r4.s64 = 159;
	// bl 0x8241e57c
	ctx.lr = 0x82267270;
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822672d0
	if (ctx.cr0.lt) goto loc_822672D0;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,160
	ctx.r4.s64 = 160;
	// bl 0x8241e57c
	ctx.lr = 0x82267288;
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822672d0
	if (ctx.cr0.lt) goto loc_822672D0;
	// lis r8,-32177
	ctx.r8.s64 = -2108751872;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r7,r8,25216
	ctx.r7.s64 = ctx.r8.s64 + 25216;
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// stw r9,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r9.u32);
	// lwsync 
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,25216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25216, ctx.r11.u32);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// stw r9,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r9.u32);
	// lwsync 
loc_822672D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7340, ctx.r11.u32);
loc_822672D8:
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

__attribute__((alias("__imp__sub_822672EC"))) PPC_WEAK_FUNC(sub_822672EC);
PPC_FUNC_IMPL(__imp__sub_822672EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822672F0"))) PPC_WEAK_FUNC(sub_822672F0);
PPC_FUNC_IMPL(__imp__sub_822672F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,328
	ctx.r5.s64 = 328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8208a2b8
	ctx.lr = 0x82267310;
	sub_8208A2B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82267324
	if (!ctx.cr0.lt) goto loc_82267324;
	// bl 0x82089fa8
	ctx.lr = 0x8226731C;
	sub_82089FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82267334
	goto loc_82267334;
loc_82267324:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82267d80
	ctx.lr = 0x82267330;
	sub_82267D80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82267334:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82267348"))) PPC_WEAK_FUNC(sub_82267348);
PPC_FUNC_IMPL(__imp__sub_82267348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241de0c
	ctx.lr = 0x82267370;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,328
	ctx.r5.s64 = 328;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8208a130
	ctx.lr = 0x8226739C;
	sub_8208A130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822673b0
	if (!ctx.cr0.lt) goto loc_822673B0;
	// bl 0x82089fa8
	ctx.lr = 0x822673A8;
	sub_82089FA8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822673c0
	goto loc_822673C0;
loc_822673B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82267d80
	ctx.lr = 0x822673BC;
	sub_82267D80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822673C0:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822673D4"))) PPC_WEAK_FUNC(sub_822673D4);
PPC_FUNC_IMPL(__imp__sub_822673D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822673D8"))) PPC_WEAK_FUNC(sub_822673D8);
PPC_FUNC_IMPL(__imp__sub_822673D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8241de0c
	ctx.lr = 0x822673F8;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226742C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8226746c
	if (ctx.cr0.lt) goto loc_8226746C;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// std r10,4(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4, ctx.r10.u64);
	// std r9,12(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12, ctx.r9.u64);
	// std r8,20(r31)
	PPC_STORE_U64(ctx.r31.u32 + 20, ctx.r8.u64);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// b 0x82267474
	goto loc_82267474;
loc_8226746C:
	// bl 0x82089fa8
	ctx.lr = 0x82267470;
	sub_82089FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82267474:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82267488"))) PPC_WEAK_FUNC(sub_82267488);
PPC_FUNC_IMPL(__imp__sub_82267488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82267490;
	sub_82248770(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241ddfc
	ctx.lr = 0x822674CC;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82267500
	if (ctx.cr0.lt) goto loc_82267500;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8241df6c
	ctx.lr = 0x822674EC;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge 0x82267508
	if (!ctx.cr0.lt) goto loc_82267508;
loc_822674F8:
	// bl 0x8241dddc
	ctx.lr = 0x822674FC;
	__imp__NtClose(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82267500:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_82267508:
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241e41c
	ctx.lr = 0x82267538;
	__imp__NtDeviceIoControlFile(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82267548
	if (!ctx.cr0.lt) goto loc_82267548;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x822674f8
	goto loc_822674F8;
loc_82267548:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82267560
	if (ctx.cr6.eq) goto loc_82267560;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// b 0x82267564
	goto loc_82267564;
loc_82267560:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82267564:
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,16388
	ctx.r8.u64 = ctx.r8.u64 | 16388;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi r22,r11,24
	ctx.r22.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8241e41c
	ctx.lr = 0x822675A0;
	__imp__NtDeviceIoControlFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822675c4
	if (ctx.cr0.lt) goto loc_822675C4;
	// ld r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bne cr6,0x822675bc
	if (!ctx.cr6.eq) goto loc_822675BC;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,52
	ctx.r3.u64 = ctx.r3.u64 | 52;
loc_822675BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822675d8
	if (!ctx.cr6.lt) goto loc_822675D8;
loc_822675C4:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_822675C8:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8241dddc
	ctx.lr = 0x822675D0;
	__imp__NtClose(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82267500
	goto loc_82267500;
loc_822675D8:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// cmplw cr6,r24,r30
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x822675f0
	if (!ctx.cr6.lt) goto loc_822675F0;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
loc_822675F0:
	// li r29,4096
	ctx.r29.s64 = 4096;
	// cmplwi cr6,r30,4096
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4096, ctx.xer);
	// ble cr6,0x82267600
	if (!ctx.cr6.gt) goto loc_82267600;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82267600:
	// clrldi r25,r29,32
	ctx.r25.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// cmpld cr6,r25,r10
	ctx.cr6.compare<uint64_t>(ctx.r25.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82267618
	if (ctx.cr6.lt) goto loc_82267618;
loc_8226760C:
	// lis r28,-16384
	ctx.r28.s64 = -1073741824;
	// ori r28,r28,127
	ctx.r28.u64 = ctx.r28.u64 | 127;
	// b 0x822675c8
	goto loc_822675C8;
loc_82267618:
	// clrldi r9,r24,32
	ctx.r9.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// rotldi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 1);
	// divd r8,r10,r9
	ctx.r8.s64 = ctx.r10.s64 / ctx.r9.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// andc r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// tdllei r9,0
	// tdlgei r8,-1
	// cmplwi cr6,r11,65520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65520, ctx.xer);
	// bge cr6,0x8226765c
	if (!ctx.cr6.lt) goto loc_8226765C;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,70
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 70, ctx.xer);
	// beq cr6,0x8226765c
	if (ctx.cr6.eq) goto loc_8226765C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82267664
	goto loc_82267664;
loc_8226765C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82267664:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r30,-1
	ctx.r8.s64 = ctx.r30.s64 + -1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subf r11,r25,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r25.s64;
	// andc r27,r7,r8
	ctx.r27.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x8226760c
	if (ctx.cr6.gt) goto loc_8226760C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x8226760c
	if (ctx.cr6.gt) goto loc_8226760C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82089e08
	ctx.lr = 0x8226769C;
	sub_82089E08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822676b0
	if (!ctx.cr0.eq) goto loc_822676B0;
	// lis r28,-16384
	ctx.r28.s64 = -1073741824;
	// ori r28,r28,154
	ctx.r28.u64 = ctx.r28.u64 | 154;
	// b 0x822675c8
	goto loc_822675C8;
loc_822676B0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248f70
	ctx.lr = 0x822676C0;
	sub_82248F70(ctx, base);
	// std r23,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r23.u64);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241df0c
	ctx.lr = 0x822676E8;
	__imp__NtWriteFile(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x82267874
	if (ctx.cr0.lt) goto loc_82267874;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248f70
	ctx.lr = 0x82267700;
	sub_82248F70(ctx, base);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r25,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r25.u64);
	// beq 0x82267720
	if (ctx.cr0.eq) goto loc_82267720;
	// li r11,-8
	ctx.r11.s64 = -8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// b 0x82267730
	goto loc_82267730;
loc_82267720:
	// li r11,-8
	ctx.r11.s64 = -8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82267730:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241df0c
	ctx.lr = 0x82267754;
	__imp__NtWriteFile(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x82267874
	if (ctx.cr0.lt) goto loc_82267874;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248f70
	ctx.lr = 0x8226776C;
	sub_82248F70(ctx, base);
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// clrldi r26,r30,32
	ctx.r26.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bne 0x82267730
	if (!ctx.cr0.eq) goto loc_82267730;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248f70
	ctx.lr = 0x82267794;
	sub_82248F70(ctx, base);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82267798:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241df0c
	ctx.lr = 0x822677BC;
	__imp__NtWriteFile(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82267870
	if (ctx.cr0.lt) goto loc_82267870;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// subf. r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bne 0x82267798
	if (!ctx.cr0.eq) goto loc_82267798;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248f70
	ctx.lr = 0x822677E8;
	sub_82248F70(ctx, base);
	// srw r11,r24,r22
	ctx.r11.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r24.u32 >> (ctx.r22.u8 & 0x3F));
	// lis r10,22612
	ctx.r10.s64 = 1481900032;
	// sth r23,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r23.u16);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r10,r10,16710
	ctx.r10.u64 = ctx.r10.u64 | 16710;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x8241e3dc
	ctx.lr = 0x82267814;
	__imp__KeQuerySystemTime(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// std r23,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r23.u64);
loc_82267820:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241df0c
	ctx.lr = 0x82267844;
	__imp__NtWriteFile(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x82267874
	if (ctx.cr0.lt) goto loc_82267874;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248f70
	ctx.lr = 0x8226785C;
	sub_82248F70(ctx, base);
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// subf. r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bne 0x82267820
	if (!ctx.cr0.eq) goto loc_82267820;
loc_82267870:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82267874:
	// bl 0x82089e50
	ctx.lr = 0x82267878;
	sub_82089E50(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8241e69c
	ctx.lr = 0x82267880;
	__imp__IoDismountVolumeByFileHandle(ctx, base);
	// b 0x822675c8
	goto loc_822675C8;
}

__attribute__((alias("__imp__sub_82267884"))) PPC_WEAK_FUNC(sub_82267884);
PPC_FUNC_IMPL(__imp__sub_82267884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82267888"))) PPC_WEAK_FUNC(sub_82267888);
PPC_FUNC_IMPL(__imp__sub_82267888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82267890;
	sub_82248768(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82267ec0
	ctx.lr = 0x822678B0;
	sub_82267EC0(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822678e8
	if (ctx.cr0.eq) goto loc_822678E8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82267e20
	ctx.lr = 0x822678C8;
	sub_82267E20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82267ad0
	if (ctx.cr0.eq) goto loc_82267AD0;
	// ld r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 0);
	// ld r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x82267ad0
	if (ctx.cr6.lt) goto loc_82267AD0;
loc_822678E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82267ad4
	goto loc_82267AD4;
loc_822678E8:
	// lha r22,6(r29)
	ctx.r22.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + 6));
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 5, ctx.xer);
	// bgt cr6,0x82267ad0
	if (ctx.cr6.gt) goto loc_82267AD0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82267ad0
	if (ctx.cr6.eq) goto loc_82267AD0;
	// li r23,0
	ctx.r23.s64 = 0;
	// lhz r25,2(r29)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// bne 0x82267948
	if (!ctx.cr0.eq) goto loc_82267948;
	// lhz r11,114(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// extsh r10,r25
	ctx.r10.s64 = ctx.r25.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82267938
	if (!ctx.cr6.lt) goto loc_82267938;
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// b 0x8226794c
	goto loc_8226794C;
loc_82267938:
	// lhz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// bgt cr6,0x8226794c
	if (ctx.cr6.gt) goto loc_8226794C;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// b 0x8226794c
	goto loc_8226794C;
loc_82267948:
	// lhz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
loc_8226794C:
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r10,10(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// lhz r8,14(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r28.u16);
	// sth r25,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r25.u16);
	// sth r24,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r24.u16);
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// sth r23,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r23.u16);
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// bl 0x8241e5ec
	ctx.lr = 0x82267988;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82267ad0
	if (ctx.cr0.eq) goto loc_82267AD0;
	// extsh r27,r31
	ctx.r27.s64 = ctx.r31.s16;
loc_82267994:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e3cc
	ctx.lr = 0x822679A0;
	__imp__RtlTimeToTimeFields(ctx, base);
	// lha r11,142(r1)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 142));
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x822679c4
	if (!ctx.cr6.gt) goto loc_822679C4;
	// lha r10,100(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 100));
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
loc_822679BC:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x822679dc
	goto loc_822679DC;
loc_822679C4:
	// bge cr6,0x822679d8
	if (!ctx.cr6.lt) goto loc_822679D8;
	// lhz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822679bc
	goto loc_822679BC;
loc_822679D8:
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
loc_822679DC:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// ble cr6,0x82267a38
	if (!ctx.cr6.gt) goto loc_82267A38;
	// b 0x822679f4
	goto loc_822679F4;
loc_822679F0:
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
loc_822679F4:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r11.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241e5ec
	ctx.lr = 0x82267A08;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82267a38
	if (ctx.cr0.eq) goto loc_82267A38;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e3cc
	ctx.lr = 0x82267A1C;
	__imp__RtlTimeToTimeFields(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, ctx.xer);
	// lhz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// blt cr6,0x822679f0
	if (ctx.cr6.lt) goto loc_822679F0;
loc_82267A38:
	// sth r30,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241e5ec
	ctx.lr = 0x82267A48;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82267ad0
	if (ctx.cr0.eq) goto loc_82267AD0;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82267adc
	if (ctx.cr0.eq) goto loc_82267ADC;
	// lhz r11,118(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// lha r10,100(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 100));
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82267a7c
	if (ctx.cr6.lt) goto loc_82267A7C;
	// bne cr6,0x82267adc
	if (!ctx.cr6.eq) goto loc_82267ADC;
	// ld r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x82267adc
	if (!ctx.cr6.lt) goto loc_82267ADC;
loc_82267A7C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lhz r10,10(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// lhz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r8,14(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// sth r25,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r25.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r28.u16);
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// sth r24,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r24.u16);
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// sth r23,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r23.u16);
	// bl 0x8241e5ec
	ctx.lr = 0x82267AC8;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82267994
	if (!ctx.cr0.eq) goto loc_82267994;
loc_82267AD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82267AD4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_82267ADC:
	// std r9,0(r20)
	PPC_STORE_U64(ctx.r20.u32 + 0, ctx.r9.u64);
	// b 0x822678e0
	goto loc_822678E0;
}

__attribute__((alias("__imp__sub_82267AE4"))) PPC_WEAK_FUNC(sub_82267AE4);
PPC_FUNC_IMPL(__imp__sub_82267AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82267AE8"))) PPC_WEAK_FUNC(sub_82267AE8);
PPC_FUNC_IMPL(__imp__sub_82267AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82267AF0;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8241decc
	ctx.lr = 0x82267B2C;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82267b3c
	if (!ctx.cr0.lt) goto loc_82267B3C;
loc_82267B34:
	// bl 0x8241df3c
	ctx.lr = 0x82267B38;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82267d00
	goto loc_82267D00;
loc_82267B3C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8241decc
	ctx.lr = 0x82267B5C;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82267b34
	if (ctx.cr0.lt) goto loc_82267B34;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r1,107
	ctx.r9.s64 = ctx.r1.s64 + 107;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82267B78:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// sthu r11,2(r8)
	// bdnz 0x82267b78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82267B78;
	// sth r30,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r30.u16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8241decc
	ctx.lr = 0x82267BA0;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82267b34
	if (ctx.cr0.lt) goto loc_82267B34;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
	// addi r9,r1,111
	ctx.r9.s64 = ctx.r1.s64 + 111;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82267BBC:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// sthu r11,2(r8)
	// bdnz 0x82267bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82267BBC;
	// sth r30,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r30.u16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8241decc
	ctx.lr = 0x82267BE4;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82267b34
	if (ctx.cr0.lt) goto loc_82267B34;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248f70
	ctx.lr = 0x82267BFC;
	sub_82248F70(ctx, base);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// li r6,4
	ctx.r6.s64 = 4;
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,5
	ctx.r4.s64 = 5;
	// sth r11,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r11.u16);
	// li r3,3
	ctx.r3.s64 = 3;
	// sth r8,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r8.u16);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// sth r10,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r10.u16);
	// sth r9,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r9.u16);
	// bl 0x8241decc
	ctx.lr = 0x82267C38;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82267b34
	if (ctx.cr0.lt) goto loc_82267B34;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248f70
	ctx.lr = 0x82267C50;
	sub_82248F70(ctx, base);
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r8,91(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// li r6,4
	ctx.r6.s64 = 4;
	// lbz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,6
	ctx.r4.s64 = 6;
	// sth r11,154(r31)
	PPC_STORE_U16(ctx.r31.u32 + 154, ctx.r11.u16);
	// li r3,3
	ctx.r3.s64 = 3;
	// sth r8,160(r31)
	PPC_STORE_U16(ctx.r31.u32 + 160, ctx.r8.u16);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// sth r10,158(r31)
	PPC_STORE_U16(ctx.r31.u32 + 158, ctx.r10.u16);
	// sth r9,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r9.u16);
	// bl 0x8241decc
	ctx.lr = 0x82267C8C;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82267b34
	if (ctx.cr0.lt) goto loc_82267B34;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x8241decc
	ctx.lr = 0x82267CB4;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82267b34
	if (ctx.cr0.lt) goto loc_82267B34;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// beq cr6,0x82267cfc
	if (ctx.cr6.eq) goto loc_82267CFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8241decc
	ctx.lr = 0x82267CE4;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82267b34
	if (ctx.cr0.lt) goto loc_82267B34;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82267CFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82267D00:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82267D08"))) PPC_WEAK_FUNC(sub_82267D08);
PPC_FUNC_IMPL(__imp__sub_82267D08) {
	PPC_FUNC_PROLOGUE();
	// lhz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82267f50
	sub_82267F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82267D14"))) PPC_WEAK_FUNC(sub_82267D14);
PPC_FUNC_IMPL(__imp__sub_82267D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82267D18"))) PPC_WEAK_FUNC(sub_82267D18);
PPC_FUNC_IMPL(__imp__sub_82267D18) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82267d54
	if (!ctx.cr6.eq) goto loc_82267D54;
	// bl 0x8241df3c
	ctx.lr = 0x82267D4C;
	__imp__RtlNtStatusToDosError(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82267d5c
	goto loc_82267D5C;
loc_82267D54:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82267D5C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82267D68;
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

__attribute__((alias("__imp__sub_82267D80"))) PPC_WEAK_FUNC(sub_82267D80);
PPC_FUNC_IMPL(__imp__sub_82267D80) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82248a40
	ctx.lr = 0x82267DF4;
	sub_82248A40(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// stb r10,304(r30)
	PPC_STORE_U8(ctx.r30.u32 + 304, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82267E20"))) PPC_WEAK_FUNC(sub_82267E20);
PPC_FUNC_IMPL(__imp__sub_82267E20) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// sth r8,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r8.u16);
	// sth r7,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r7.u16);
	// sth r6,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r6.u16);
	// sth r5,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r5.u16);
	// sth r11,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r11.u16);
	// bl 0x8241e5ec
	ctx.lr = 0x82267E7C;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82267e98
	if (!ctx.cr0.eq) goto loc_82267E98;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x82089fa8
	ctx.lr = 0x82267E90;
	sub_82089FA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82267eac
	goto loc_82267EAC;
loc_82267E98:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82267EAC:
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

__attribute__((alias("__imp__sub_82267EC0"))) PPC_WEAK_FUNC(sub_82267EC0);
PPC_FUNC_IMPL(__imp__sub_82267EC0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8241e3cc
	ctx.lr = 0x82267EF0;
	__imp__RtlTimeToTimeFields(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r8,110(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
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
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
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

__attribute__((alias("__imp__sub_82267F48"))) PPC_WEAK_FUNC(sub_82267F48);
PPC_FUNC_IMPL(__imp__sub_82267F48) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82267F4C"))) PPC_WEAK_FUNC(sub_82267F4C);
PPC_FUNC_IMPL(__imp__sub_82267F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82267F50"))) PPC_WEAK_FUNC(sub_82267F50);
PPC_FUNC_IMPL(__imp__sub_82267F50) {
	PPC_FUNC_PROLOGUE();
	// twi 31,r0,20
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82267F58"))) PPC_WEAK_FUNC(sub_82267F58);
PPC_FUNC_IMPL(__imp__sub_82267F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82267fb4
	if (!ctx.cr6.eq) goto loc_82267FB4;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r10,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82267f80
	if (!ctx.cr6.eq) goto loc_82267F80;
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x82267fdc
	goto loc_82267FDC;
loc_82267F80:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82267f90
	if (!ctx.cr6.eq) goto loc_82267F90;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x82267fdc
	goto loc_82267FDC;
loc_82267F90:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82267fa0
	if (!ctx.cr6.eq) goto loc_82267FA0;
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x82267fdc
	goto loc_82267FDC;
loc_82267FA0:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82267fdc
	if (ctx.cr0.eq) goto loc_82267FDC;
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x82267fdc
	goto loc_82267FDC;
loc_82267FB4:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82267fdc
	if (!ctx.cr6.eq) goto loc_82267FDC;
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82267fdc
	if (ctx.cr0.eq) goto loc_82267FDC;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// bne cr6,0x82267fdc
	if (!ctx.cr6.eq) goto loc_82267FDC;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82267FDC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82267FE4"))) PPC_WEAK_FUNC(sub_82267FE4);
PPC_FUNC_IMPL(__imp__sub_82267FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82267FE8"))) PPC_WEAK_FUNC(sub_82267FE8);
PPC_FUNC_IMPL(__imp__sub_82267FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82267FF0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r11,r7,0,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82268108
	if (!ctx.cr6.eq) goto loc_82268108;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r29,-1
	ctx.r29.s64 = -65536;
	// lis r28,16384
	ctx.r28.s64 = 1073741824;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82268088
	if (ctx.cr6.eq) goto loc_82268088;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm. r9,r11,16,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r8,r10,4,13,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
	// bne 0x82268038
	if (!ctx.cr0.eq) goto loc_82268038;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82268038:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,13,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7FFF0;
	// bne 0x82268048
	if (!ctx.cr0.eq) goto loc_82268048;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82268048:
	// rlwinm. r11,r7,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// bne 0x8226806c
	if (!ctx.cr0.eq) goto loc_8226806C;
	// rlwinm r11,r4,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r4,3
	ctx.r10.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r28,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r28.s64;
loc_8226806C:
	// rlwinm r11,r4,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82278e20
	ctx.lr = 0x82268088;
	sub_82278E20(ctx, base);
loc_82268088:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82268108
	if (ctx.cr6.eq) goto loc_82268108;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82268108
	if (ctx.cr6.eq) goto loc_82268108;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm. r9,r11,16,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r8,r10,4,13,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
	// bne 0x822680b4
	if (!ctx.cr0.eq) goto loc_822680B4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_822680B4:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,13,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7FFF0;
	// bne 0x822680c4
	if (!ctx.cr0.eq) goto loc_822680C4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_822680C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822680ec
	if (!ctx.cr0.eq) goto loc_822680EC;
	// rlwinm r11,r31,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r31,3
	ctx.r10.u64 = ctx.r31.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r31,r28,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r28.s64;
loc_822680EC:
	// rlwinm r11,r31,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82278e20
	ctx.lr = 0x82268108;
	sub_82278E20(ctx, base);
loc_82268108:
	// sync 
	// li r11,-256
	ctx.r11.s64 = -256;
loc_82268110:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82268110
	if (!ctx.cr0.eq) goto loc_82268110;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82268134"))) PPC_WEAK_FUNC(sub_82268134);
PPC_FUNC_IMPL(__imp__sub_82268134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82268138"))) PPC_WEAK_FUNC(sub_82268138);
PPC_FUNC_IMPL(__imp__sub_82268138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82268154
	if (!ctx.cr6.eq) goto loc_82268154;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x82268178
	goto loc_82268178;
loc_82268154:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82268174
	if (!ctx.cr6.eq) goto loc_82268174;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm. r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82268178
	if (!ctx.cr0.eq) goto loc_82268178;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x82268178
	goto loc_82268178;
loc_82268174:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_82268178:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82268190"))) PPC_WEAK_FUNC(sub_82268190);
PPC_FUNC_IMPL(__imp__sub_82268190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82268198;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822681c0
	if (!ctx.cr6.gt) goto loc_822681C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x822681C0;
	sub_82277C20(ctx, base);
loc_822681C0:
	// li r10,2609
	ctx.r10.s64 = 2609;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r30,3
	ctx.r11.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r9,r8,2607
	ctx.r9.u64 = ctx.r8.u64 | 2607;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r8,-16380
	ctx.r8.s64 = -1073479680;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// ori r9,r8,15360
	ctx.r9.u64 = ctx.r8.u64 | 15360;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r8,3
	ctx.r8.s64 = 3;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r7,2609
	ctx.r7.s64 = 2609;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r5,8
	ctx.r5.s64 = 8;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82268250"))) PPC_WEAK_FUNC(sub_82268250);
PPC_FUNC_IMPL(__imp__sub_82268250) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82268264:
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
	// bne 0x82268264
	if (!ctx.cr0.eq) goto loc_82268264;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x822682ac
	if (!ctx.cr6.eq) goto loc_822682AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x822682ac
	if (!ctx.cr6.eq) goto loc_822682AC;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822682ac
	if (ctx.cr0.eq) goto loc_822682AC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82268250
	ctx.lr = 0x822682AC;
	sub_82268250(ctx, base);
loc_822682AC:
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

__attribute__((alias("__imp__sub_822682C4"))) PPC_WEAK_FUNC(sub_822682C4);
PPC_FUNC_IMPL(__imp__sub_822682C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822682C8"))) PPC_WEAK_FUNC(sub_822682C8);
PPC_FUNC_IMPL(__imp__sub_822682C8) {
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
	// bl 0x8241e04c
	ctx.lr = 0x822682E4;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822682f8
	if (!ctx.cr6.eq) goto loc_822682F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// b 0x82268300
	goto loc_82268300;
loc_822682F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
loc_82268300:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82268314
	if (ctx.cr6.eq) goto loc_82268314;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d9d8
	ctx.lr = 0x82268314;
	sub_8226D9D8(ctx, base);
loc_82268314:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82268330"))) PPC_WEAK_FUNC(sub_82268330);
PPC_FUNC_IMPL(__imp__sub_82268330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82268338;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82086c98
	ctx.lr = 0x82268350;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82268360
	if (!ctx.cr0.eq) goto loc_82268360;
loc_82268358:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822683f0
	goto loc_822683F0;
loc_82268360:
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// rlwinm. r10,r29,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// beq 0x82268380
	if (ctx.cr0.eq) goto loc_82268380;
	// lis r30,48
	ctx.r30.s64 = 3145728;
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
loc_82268380:
	// rlwinm. r10,r29,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8226838c
	if (ctx.cr0.eq) goto loc_8226838C;
	// oris r30,r30,64
	ctx.r30.u64 = ctx.r30.u64 | 4194304;
loc_8226838C:
	// lis r4,-32128
	ctx.r4.s64 = -2105540608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x82086c98
	ctx.lr = 0x8226839C;
	sub_82086C98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822683b4
	if (!ctx.cr0.eq) goto loc_822683B4;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82086968
	ctx.lr = 0x822683B0;
	sub_82086968(ctx, base);
	// b 0x82268358
	goto loc_82268358;
loc_822683B4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r10,r28,0,6,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x3FFFFFC;
	// ori r9,r3,3
	ctx.r9.u64 = ctx.r3.u64 | 3;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_822683F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822683F8"))) PPC_WEAK_FUNC(sub_822683F8);
PPC_FUNC_IMPL(__imp__sub_822683F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x82267fe8
	sub_82267FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82268408"))) PPC_WEAK_FUNC(sub_82268408);
PPC_FUNC_IMPL(__imp__sub_82268408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82268410;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82086c98
	ctx.lr = 0x8226842C;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8226843c
	if (!ctx.cr0.eq) goto loc_8226843C;
loc_82268434:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822684ac
	goto loc_822684AC;
loc_8226843C:
	// rlwinm r10,r30,29,0,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0xE0000000;
	// rlwinm. r9,r29,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// oris r30,r10,16
	ctx.r30.u64 = ctx.r10.u64 | 1048576;
	// li r11,3
	ctx.r11.s64 = 3;
	// ori r30,r30,2
	ctx.r30.u64 = ctx.r30.u64 | 2;
	// beq 0x8226845c
	if (ctx.cr0.eq) goto loc_8226845C;
	// li r11,2
	ctx.r11.s64 = 2;
	// oris r30,r30,32
	ctx.r30.u64 = ctx.r30.u64 | 2097152;
loc_8226845C:
	// rlwinm. r10,r29,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82268468
	if (ctx.cr0.eq) goto loc_82268468;
	// oris r30,r30,64
	ctx.r30.u64 = ctx.r30.u64 | 4194304;
loc_82268468:
	// lis r4,-32128
	ctx.r4.s64 = -2105540608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x82086c98
	ctx.lr = 0x82268478;
	sub_82086C98(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82268490
	if (!ctx.cr0.eq) goto loc_82268490;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x82086968
	ctx.lr = 0x8226848C;
	sub_82086968(ctx, base);
	// b 0x82268434
	goto loc_82268434;
loc_82268490:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_822684AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822684B4"))) PPC_WEAK_FUNC(sub_822684B4);
PPC_FUNC_IMPL(__imp__sub_822684B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822684B8"))) PPC_WEAK_FUNC(sub_822684B8);
PPC_FUNC_IMPL(__imp__sub_822684B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82267fe8
	sub_82267FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822684C4"))) PPC_WEAK_FUNC(sub_822684C4);
PPC_FUNC_IMPL(__imp__sub_822684C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822684C8"))) PPC_WEAK_FUNC(sub_822684C8);
PPC_FUNC_IMPL(__imp__sub_822684C8) {
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
	// lwz r11,7356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82268604
	if (!ctx.cr6.eq) goto loc_82268604;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82268508
	if (!ctx.cr6.gt) goto loc_82268508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82268508;
	sub_82277C20(ctx, base);
loc_82268508:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// li r9,14
	ctx.r9.s64 = 14;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// li r7,256
	ctx.r7.s64 = 256;
	// ori r8,r8,15104
	ctx.r8.u64 = ctx.r8.u64 | 15104;
	// lis r6,-16368
	ctx.r6.s64 = -1072693248;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r6,11008
	ctx.r10.u64 = ctx.r6.u64 | 11008;
	// li r6,15
	ctx.r6.s64 = 15;
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// li r5,60
	ctx.r5.s64 = 60;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r4,r4,10804
	ctx.r4.s64 = ctx.r4.s64 + 10804;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82248a40
	ctx.lr = 0x82268574;
	sub_82248A40(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1792
	ctx.r9.s64 = 117440512;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,8712
	ctx.r10.s64 = 8712;
	// li r7,4
	ctx.r7.s64 = 4;
	// lis r6,-16384
	ctx.r6.s64 = -1073741824;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r6,r6,13824
	ctx.r6.u64 = ctx.r6.u64 | 13824;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// ori r5,r5,129
	ctx.r5.u64 = ctx.r5.u64 | 129;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,40,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82268604:
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

__attribute__((alias("__imp__sub_8226861C"))) PPC_WEAK_FUNC(sub_8226861C);
PPC_FUNC_IMPL(__imp__sub_8226861C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82268620"))) PPC_WEAK_FUNC(sub_82268620);
PPC_FUNC_IMPL(__imp__sub_82268620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82268628;
	sub_82248750(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,7360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822689a0
	if (!ctx.cr6.eq) goto loc_822689A0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226865c
	if (!ctx.cr6.gt) goto loc_8226865C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x8226865C;
	sub_82277C20(ctx, base);
loc_8226865C:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,768
	ctx.r10.s64 = 768;
	// ori r11,r11,15104
	ctx.r11.u64 = ctx.r11.u64 | 15104;
	// lis r9,-16359
	ctx.r9.s64 = -1072103424;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// li r7,24
	ctx.r7.s64 = 24;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,96
	ctx.r5.s64 = 96;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// addi r29,r11,10672
	ctx.r29.s64 = ctx.r11.s64 + 10672;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82248a40
	ctx.lr = 0x822686A8;
	sub_82248A40(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822686c8
	if (!ctx.cr6.gt) goto loc_822686C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x822686C8;
	sub_82277C20(ctx, base);
loc_822686C8:
	// lis r11,-16374
	ctx.r11.s64 = -1073086464;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// li r9,9
	ctx.r9.s64 = 9;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82248a40
	ctx.lr = 0x822686F8;
	sub_82248A40(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82268714
	if (!ctx.cr6.gt) goto loc_82268714;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82268714;
	sub_82277C20(ctx, base);
loc_82268714:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// ori r11,r11,8576
	ctx.r11.u64 = ctx.r11.u64 | 8576;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r8,8851
	ctx.r8.s64 = 8851;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r9,r9,8448
	ctx.r9.u64 = ctx.r9.u64 | 8448;
	// ori r10,r7,65535
	ctx.r10.u64 = ctx.r7.u64 | 65535;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r6,r6,8708
	ctx.r6.u64 = ctx.r6.u64 | 8708;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// li r31,8978
	ctx.r31.s64 = 8978;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r30,0
	ctx.r30.s64 = 0;
	// li r29,8205
	ctx.r29.s64 = 8205;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r28,8704
	ctx.r28.s64 = 8704;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r10,8707
	ctx.r10.s64 = 8707;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r21,0
	ctx.r21.s64 = 0;
	// li r20,8712
	ctx.r20.s64 = 8712;
	// lwz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r19,4
	ctx.r19.s64 = 4;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r18,8452
	ctx.r18.s64 = 8452;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r8,8832
	ctx.r8.s64 = 8832;
	// lis r27,8
	ctx.r27.s64 = 524288;
	// li r16,8962
	ctx.r16.s64 = 8962;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r3.u32 = ea;
	// ori r27,r27,8
	ctx.r27.u64 = ctx.r27.u64 | 8;
	// li r15,4
	ctx.r15.s64 = 4;
	// lis r26,2
	ctx.r26.s64 = 131072;
	// li r14,0
	ctx.r14.s64 = 0;
	// ori r26,r26,8320
	ctx.r26.u64 = ctx.r26.u64 | 8320;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r24,16
	ctx.r24.s64 = 1048576;
	// ori r24,r24,16
	ctx.r24.u64 = ctx.r24.u64 | 16;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r31,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r3.u32 = ea;
	// lwz r31,260(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r21,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r21.u32);
	ctx.r3.u32 = ea;
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r3.u32 = ea;
	// stwu r18,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r18.u32);
	ctx.r3.u32 = ea;
	// stwu r17,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r17.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r3.u32 = ea;
	// stwu r16,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r16.u32);
	ctx.r3.u32 = ea;
	// stwu r15,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r15.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r3.u32 = ea;
	// stwu r14,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r14.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82268874
	if (!ctx.cr6.gt) goto loc_82268874;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82268874;
	sub_82277C20(ctx, base);
loc_82268874:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// ori r11,r11,13824
	ctx.r11.u64 = ctx.r11.u64 | 13824;
	// ori r10,r10,129
	ctx.r10.u64 = ctx.r10.u64 | 129;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r12,1
	ctx.r12.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r11,r11,35,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,40,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r10,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r10.u64);
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// oris r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 1048576;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r10.u64);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// lwz r11,10436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10436);
	// lwz r10,10440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10440);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 17;
	// srawi r5,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 17;
	// bl 0x8226f758
	ctx.lr = 0x822689A0;
	sub_8226F758(ctx, base);
loc_822689A0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822689A8"))) PPC_WEAK_FUNC(sub_822689A8);
PPC_FUNC_IMPL(__imp__sub_822689A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822689B0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// clrlwi r27,r6,30
	ctx.r27.u64 = ctx.r6.u32 & 0x3;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822689e0
	if (!ctx.cr6.gt) goto loc_822689E0;
	// bl 0x82277c20
	ctx.lr = 0x822689DC;
	sub_82277C20(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_822689E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82268138
	ctx.lr = 0x822689E8;
	sub_82268138(ctx, base);
	// addi r11,r30,2598
	ctx.r11.s64 = ctx.r30.s64 + 2598;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r7,1480
	ctx.r7.s64 = 1480;
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// srd r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// lwz r11,13888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13888);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne cr6,0x82268a78
	if (!ctx.cr6.eq) goto loc_82268A78;
	// cmplwi cr6,r28,10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 10, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82268a54
	if (!ctx.cr6.eq) goto loc_82268A54;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,15
	ctx.r9.s64 = 15;
	// ori r10,r10,17920
	ctx.r10.u64 = ctx.r10.u64 | 17920;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_82268A54:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x822684c8
	ctx.lr = 0x82268A5C;
	sub_822684C8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82268a78
	if (!ctx.cr6.gt) goto loc_82268A78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82268A74;
	sub_82277C20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82268A78:
	// lwz r10,13888(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13888);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r27,13896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13896, ctx.r27.u32);
	// stw r9,13892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13892, ctx.r9.u32);
	// stw r11,13888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13888, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82268A9C"))) PPC_WEAK_FUNC(sub_82268A9C);
PPC_FUNC_IMPL(__imp__sub_82268A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82268AA0"))) PPC_WEAK_FUNC(sub_82268AA0);
PPC_FUNC_IMPL(__imp__sub_82268AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82268AA8;
	sub_82248784(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,2598
	ctx.r11.s64 = ctx.r4.s64 + 2598;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82268ae4
	if (!ctx.cr6.gt) goto loc_82268AE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82268AE4;
	sub_82277C20(ctx, base);
loc_82268AE4:
	// addi r11,r29,8198
	ctx.r11.s64 = ctx.r29.s64 + 8198;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,11036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x82268b10
	if (ctx.cr6.eq) goto loc_82268B10;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x82268b60
	goto loc_82268B60;
loc_82268B10:
	// lwz r11,11040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11040);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82268b60
	if (ctx.cr0.eq) goto loc_82268B60;
	// lwz r11,13916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13916);
	// lwz r3,13912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13912);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82268b38
	if (ctx.cr6.lt) goto loc_82268B38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82279040
	ctx.lr = 0x82268B38;
	sub_82279040(ctx, base);
loc_82268B38:
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// rlwimi r11,r30,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,13912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13912, ctx.r9.u32);
loc_82268B60:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82268b8c
	if (!ctx.cr6.eq) goto loc_82268B8C;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r5,r10,0,6,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFFFC;
	// rlwinm r11,r9,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// b 0x82268c14
	goto loc_82268C14;
loc_82268B8C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82268c28
	if (!ctx.cr6.eq) goto loc_82268C28;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// lwz r29,48(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r27,r11,0,0,19
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r30,r29,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x8226a3f8
	ctx.lr = 0x82268BE0;
	sub_8226A3F8(ctx, base);
	// rlwinm r11,r27,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 12) & 0xFFF;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r10,r27,3
	ctx.r10.u64 = ctx.r27.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82268190
	ctx.lr = 0x82268C00;
	sub_82268190(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82268c28
	if (ctx.cr6.eq) goto loc_82268C28;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
loc_82268C14:
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82268190
	ctx.lr = 0x82268C28;
	sub_82268190(ctx, base);
loc_82268C28:
	// lwz r11,13888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13888);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// stw r11,13888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13888, ctx.r11.u32);
	// ble cr6,0x82268c4c
	if (!ctx.cr6.gt) goto loc_82268C4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82268C4C;
	sub_82277C20(ctx, base);
loc_82268C4C:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,6
	ctx.r10.s64 = 6;
	// ori r11,r11,17920
	ctx.r11.u64 = ctx.r11.u64 | 17920;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,13888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13888);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// bne cr6,0x82268cbc
	if (!ctx.cr6.eq) goto loc_82268CBC;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// beq cr6,0x82268cb4
	if (ctx.cr6.eq) goto loc_82268CB4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82268c8c
	if (!ctx.cr6.gt) goto loc_82268C8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82268C8C;
	sub_82277C20(ctx, base);
loc_82268C8C:
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x82268cc4
	if (ctx.cr6.eq) goto loc_82268CC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82268620
	ctx.lr = 0x82268CB0;
	sub_82268620(ctx, base);
	// b 0x82268cc4
	goto loc_82268CC4;
loc_82268CB4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82268cc4
	if (ctx.cr6.eq) goto loc_82268CC4;
loc_82268CBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822684c8
	ctx.lr = 0x82268CC4;
	sub_822684C8(ctx, base);
loc_82268CC4:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82268cdc
	if (!ctx.cr6.gt) goto loc_82268CDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82268CDC;
	sub_82277C20(ctx, base);
loc_82268CDC:
	// lwz r11,13888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13888);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82268cf8
	if (!ctx.cr6.eq) goto loc_82268CF8;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82268cfc
	if (ctx.cr6.eq) goto loc_82268CFC;
loc_82268CF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82268CFC:
	// stw r11,13892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13892, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82268D08"))) PPC_WEAK_FUNC(sub_82268D08);
PPC_FUNC_IMPL(__imp__sub_82268D08) {
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
	// bl 0x8241e04c
	ctx.lr = 0x82268D24;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82268d38
	if (!ctx.cr6.eq) goto loc_82268D38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// b 0x82268d40
	goto loc_82268D40;
loc_82268D38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
loc_82268D40:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x82268f8c
	if (ctx.cr6.gt) goto loc_82268F8C;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,10864
	ctx.r12.s64 = ctx.r12.s64 + 10864;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// nop 
	// addi r12,r12,-29312
	ctx.r12.s64 = ctx.r12.s64 + -29312;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82268f8c
	if (!ctx.cr0.eq) goto loc_82268F8C;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82268da8
	if (ctx.cr0.eq) goto loc_82268DA8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,5120
	ctx.r10.s64 = 5120;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// divwu r4,r11,r10
	ctx.r4.u32 = ctx.r11.u32 / ctx.r10.u32;
	// clrlwi r3,r9,20
	ctx.r3.u64 = ctx.r9.u32 & 0xFFF;
	// bl 0x8227b3c8
	ctx.lr = 0x82268DA8;
	sub_8227B3C8(ctx, base);
loc_82268DA8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82268f8c
	if (ctx.cr0.eq) goto loc_82268F8C;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7368, ctx.r11.u32);
	// b 0x82268f8c
	goto loc_82268F8C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82268de8
	if (ctx.cr6.eq) goto loc_82268DE8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268de8
	if (ctx.cr6.eq) goto loc_82268DE8;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x822767e0
	ctx.lr = 0x82268DE8;
	sub_822767E0(ctx, base);
loc_82268DE8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r30,r10,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x82086968
	ctx.lr = 0x82268E00;
	sub_82086968(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82268E04:
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x82086968
	ctx.lr = 0x82268E0C;
	sub_82086968(ctx, base);
	// b 0x82268f8c
	goto loc_82268F8C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82268e34
	if (ctx.cr6.eq) goto loc_82268E34;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268e34
	if (ctx.cr6.eq) goto loc_82268E34;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x822767e0
	ctx.lr = 0x82268E34;
	sub_822767E0(ctx, base);
loc_82268E34:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x82268e04
	goto loc_82268E04;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82268e64
	if (ctx.cr6.eq) goto loc_82268E64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268e64
	if (ctx.cr6.eq) goto loc_82268E64;
	// li r5,11
	ctx.r5.s64 = 11;
loc_82268E58:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x822767e0
	ctx.lr = 0x82268E64;
	sub_822767E0(ctx, base);
loc_82268E64:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x82268e04
	goto loc_82268E04;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82268e90
	if (ctx.cr6.eq) goto loc_82268E90;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268e90
	if (ctx.cr6.eq) goto loc_82268E90;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x822767e0
	ctx.lr = 0x82268E90;
	sub_822767E0(ctx, base);
loc_82268E90:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// b 0x82268e04
	goto loc_82268E04;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82268e64
	if (ctx.cr6.eq) goto loc_82268E64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268e64
	if (ctx.cr6.eq) goto loc_82268E64;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x82268e58
	goto loc_82268E58;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82268e64
	if (ctx.cr6.eq) goto loc_82268E64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268e64
	if (ctx.cr6.eq) goto loc_82268E64;
	// li r5,17
	ctx.r5.s64 = 17;
	// b 0x82268e58
	goto loc_82268E58;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82268ef4
	if (ctx.cr6.eq) goto loc_82268EF4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268ef4
	if (ctx.cr6.eq) goto loc_82268EF4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x822767e0
	ctx.lr = 0x82268EF4;
	sub_822767E0(ctx, base);
loc_82268EF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82279298
	ctx.lr = 0x82268EFC;
	sub_82279298(ctx, base);
	// b 0x82268f8c
	goto loc_82268F8C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82268f24
	if (ctx.cr6.eq) goto loc_82268F24;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268f24
	if (ctx.cr6.eq) goto loc_82268F24;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x822767e0
	ctx.lr = 0x82268F24;
	sub_822767E0(ctx, base);
loc_82268F24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82278ec8
	ctx.lr = 0x82268F2C;
	sub_82278EC8(ctx, base);
	// b 0x82268f8c
	goto loc_82268F8C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82268f54
	if (ctx.cr6.eq) goto loc_82268F54;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268f54
	if (ctx.cr6.eq) goto loc_82268F54;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x822767e0
	ctx.lr = 0x82268F54;
	sub_822767E0(ctx, base);
loc_82268F54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82279b68
	ctx.lr = 0x82268F5C;
	sub_82279B68(ctx, base);
	// b 0x82268f8c
	goto loc_82268F8C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82268f84
	if (ctx.cr6.eq) goto loc_82268F84;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268f84
	if (ctx.cr6.eq) goto loc_82268F84;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// bl 0x822767e0
	ctx.lr = 0x82268F84;
	sub_822767E0(ctx, base);
loc_82268F84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82279bb0
	ctx.lr = 0x82268F8C;
	sub_82279BB0(ctx, base);
loc_82268F8C:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82086968
	ctx.lr = 0x82268F98;
	sub_82086968(ctx, base);
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

__attribute__((alias("__imp__sub_82268FB0"))) PPC_WEAK_FUNC(sub_82268FB0);
PPC_FUNC_IMPL(__imp__sub_82268FB0) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82268FC8:
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
	// bne 0x82268fc8
	if (!ctx.cr0.eq) goto loc_82268FC8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8226901c
	if (!ctx.cr6.eq) goto loc_8226901C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82269010
	if (!ctx.cr6.eq) goto loc_82269010;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82269010
	if (ctx.cr0.eq) goto loc_82269010;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82268fb0
	ctx.lr = 0x82269010;
	sub_82268FB0(ctx, base);
loc_82269010:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82268d08
	ctx.lr = 0x82269018;
	sub_82268D08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226901C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82269030"))) PPC_WEAK_FUNC(sub_82269030);
PPC_FUNC_IMPL(__imp__sub_82269030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82269038;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,7364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822690b0
	if (!ctx.cr6.eq) goto loc_822690B0;
	// clrlwi. r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82269080
	if (ctx.cr0.eq) goto loc_82269080;
	// lbz r11,11072(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11072);
	// li r12,3
	ctx.r12.s64 = 3;
	// ori r11,r11,192
	ctx.r11.u64 = ctx.r11.u64 | 192;
	// rldicr r12,r12,62,1
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 62) & 0xC000000000000000;
	// stb r11,11072(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11072, ctx.r11.u8);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// b 0x82269194
	goto loc_82269194;
loc_82269080:
	// bl 0x8241e04c
	ctx.lr = 0x82269084;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82269098
	if (!ctx.cr6.eq) goto loc_82269098;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// b 0x822690a0
	goto loc_822690A0;
loc_82269098:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
loc_822690A0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,12232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12232, ctx.r10.u32);
	// b 0x82269194
	goto loc_82269194;
loc_822690B0:
	// bl 0x8241e04c
	ctx.lr = 0x822690B4;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822690c8
	if (!ctx.cr6.eq) goto loc_822690C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// b 0x822690d0
	goto loc_822690D0;
loc_822690C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
loc_822690D0:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x82088650
	ctx.lr = 0x822690F0;
	sub_82088650(ctx, base);
	// lwz r11,11016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11016);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82269110
	if (ctx.cr6.eq) goto loc_82269110;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,12224
	ctx.r3.s64 = ctx.r31.s64 + 12224;
	// bl 0x82276458
	ctx.lr = 0x8226910C;
	sub_82276458(ctx, base);
	// b 0x82269194
	goto loc_82269194;
loc_82269110:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82269128
	if (!ctx.cr6.gt) goto loc_82269128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82269128;
	sub_82277C20(ctx, base);
loc_82269128:
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r9,r29,4095
	ctx.r9.s64 = ctx.r29.s64 + 4095;
	// ori r11,r11,2607
	ctx.r11.u64 = ctx.r11.u64 | 2607;
	// rlwinm r8,r30,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// ori r9,r7,15360
	ctx.r9.u64 = ctx.r7.u64 | 15360;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,2609
	ctx.r6.s64 = 2609;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// li r11,8
	ctx.r11.s64 = 8;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_82269194:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8226919C"))) PPC_WEAK_FUNC(sub_8226919C);
PPC_FUNC_IMPL(__imp__sub_8226919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822691A0"))) PPC_WEAK_FUNC(sub_822691A0);
PPC_FUNC_IMPL(__imp__sub_822691A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x822691A8;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rldicl r11,r4,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// clrlwi r31,r11,27
	ctx.r31.u64 = ctx.r11.u32 & 0x1F;
	// beq cr6,0x822691e8
	if (ctx.cr6.eq) goto loc_822691E8;
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// ori r25,r11,2
	ctx.r25.u64 = ctx.r11.u64 | 2;
	// b 0x822691ec
	goto loc_822691EC;
loc_822691E8:
	// lwz r25,276(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
loc_822691EC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x82269218
	if (!ctx.cr6.eq) goto loc_82269218;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82269218
	if (ctx.cr0.eq) goto loc_82269218;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82269218
	if (ctx.cr6.eq) goto loc_82269218;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82269218:
	// andi. r11,r25,4112
	ctx.r11.u64 = ctx.r25.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq 0x8226926c
	if (ctx.cr0.eq) goto loc_8226926C;
	// beq cr6,0x82269264
	if (ctx.cr6.eq) goto loc_82269264;
	// bl 0x8241e04c
	ctx.lr = 0x82269238;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82269248
	if (!ctx.cr6.eq) goto loc_82269248;
	// lwz r11,1464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1464);
	// b 0x8226924c
	goto loc_8226924C;
loc_82269248:
	// lwz r11,1460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1460);
loc_8226924C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,24392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24392);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822692a0
	goto loc_822692A0;
loc_82269264:
	// lwz r31,12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x822692a0
	goto loc_822692A0;
loc_8226926C:
	// beq cr6,0x8226929c
	if (ctx.cr6.eq) goto loc_8226929C;
	// bl 0x8241e04c
	ctx.lr = 0x82269274;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82269284
	if (!ctx.cr6.eq) goto loc_82269284;
	// lwz r11,1464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1464);
	// b 0x82269288
	goto loc_82269288;
loc_82269284:
	// lwz r11,1460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1460);
loc_82269288:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,24392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24392);
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822692a0
	goto loc_822692A0;
loc_8226929C:
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_822692A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822692f0
	if (ctx.cr6.eq) goto loc_822692F0;
	// bl 0x8241e04c
	ctx.lr = 0x822692AC;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822692bc
	if (!ctx.cr6.eq) goto loc_822692BC;
	// lwz r11,1464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1464);
	// b 0x822692c0
	goto loc_822692C0;
loc_822692BC:
	// lwz r11,1460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1460);
loc_822692C0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bne cr6,0x822692d8
	if (!ctx.cr6.eq) goto loc_822692D8;
	// li r7,0
	ctx.r7.s64 = 0;
	// beq cr6,0x822692e0
	if (ctx.cr6.eq) goto loc_822692E0;
loc_822692D8:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x822692e4
	goto loc_822692E4;
loc_822692E0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_822692E4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822767e0
	ctx.lr = 0x822692F0;
	sub_822767E0(ctx, base);
loc_822692F0:
	// li r11,256
	ctx.r11.s64 = 256;
loc_822692F4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r26
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r26.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r26
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r26.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822692f4
	if (!ctx.cr0.eq) goto loc_822692F4;
	// lwsync 
	// andi. r11,r25,18
	ctx.r11.u64 = ctx.r25.u64 & 18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82269424
	if (!ctx.cr0.eq) goto loc_82269424;
	// bl 0x8241e04c
	ctx.lr = 0x82269324;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82269334
	if (!ctx.cr6.eq) goto loc_82269334;
	// lwz r11,1464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1464);
	// b 0x82269338
	goto loc_82269338;
loc_82269334:
	// lwz r11,1460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1460);
loc_82269338:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,7364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82269364
	if (!ctx.cr6.eq) goto loc_82269364;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82269030
	ctx.lr = 0x82269360;
	sub_82269030(ctx, base);
	// b 0x82269424
	goto loc_82269424;
loc_82269364:
	// rlwinm r11,r23,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r23,3
	ctx.r10.u64 = ctx.r23.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r29,r30,r24
	ctx.r29.u64 = ctx.r30.u64 + ctx.r24.u64;
	// bl 0x82088650
	ctx.lr = 0x82269380;
	sub_82088650(ctx, base);
	// lwz r11,11016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11016);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822693a0
	if (ctx.cr6.eq) goto loc_822693A0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,12224
	ctx.r3.s64 = ctx.r31.s64 + 12224;
	// bl 0x82276458
	ctx.lr = 0x8226939C;
	sub_82276458(ctx, base);
	// b 0x82269424
	goto loc_82269424;
loc_822693A0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822693b8
	if (!ctx.cr6.gt) goto loc_822693B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x822693B8;
	sub_82277C20(ctx, base);
loc_822693B8:
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r11,r29,4095
	ctx.r11.s64 = ctx.r29.s64 + 4095;
	// ori r9,r9,2607
	ctx.r9.u64 = ctx.r9.u64 | 2607;
	// rlwinm r8,r30,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// ori r10,r7,15360
	ctx.r10.u64 = ctx.r7.u64 | 15360;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,2609
	ctx.r6.s64 = 2609;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// li r30,8
	ctx.r30.s64 = 8;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_82269424:
	// rlwinm. r6,r25,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82269438
	if (!ctx.cr0.eq) goto loc_82269438;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82269504
	if (ctx.cr0.eq) goto loc_82269504;
loc_82269438:
	// clrlwi. r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822694e4
	if (!ctx.cr0.eq) goto loc_822694E4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8226945c
	if (ctx.cr6.eq) goto loc_8226945C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8226945c
	if (ctx.cr6.eq) goto loc_8226945C;
	// rlwinm r11,r22,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFF80;
	// addi r7,r26,24
	ctx.r7.s64 = ctx.r26.s64 + 24;
	// b 0x82269464
	goto loc_82269464;
loc_8226945C:
	// rlwinm r11,r21,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFF80;
	// addi r7,r26,20
	ctx.r7.s64 = ctx.r26.s64 + 20;
loc_82269464:
	// subf r11,r11,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r11.s64;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r8,r11,25,7,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r10,127
	ctx.r11.s64 = ctx.r10.s64 + 127;
	// rlwinm. r4,r5,16,16,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwinm r9,r11,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r11,r5,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// beq 0x82269490
	if (ctx.cr0.eq) goto loc_82269490;
	// rlwinm r11,r11,4,13,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x7FFF0;
loc_82269490:
	// rlwinm. r5,r10,0,16,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8226949c
	if (ctx.cr0.eq) goto loc_8226949C;
	// rlwinm r10,r10,4,13,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
loc_8226949C:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822694a8
	if (!ctx.cr6.gt) goto loc_822694A8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_822694A8:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822694b4
	if (!ctx.cr6.lt) goto loc_822694B4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822694B4:
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// blt cr6,0x822694c4
	if (ctx.cr6.lt) goto loc_822694C4;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
loc_822694C4:
	// cmplwi cr6,r10,32767
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32767, ctx.xer);
	// blt cr6,0x822694d8
	if (ctx.cr6.lt) goto loc_822694D8;
	// addis r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 524288;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
loc_822694D8:
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_822694E4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82269504
	if (ctx.cr6.eq) goto loc_82269504;
	// rlwinm r11,r23,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r23,3
	ctx.r10.u64 = ctx.r23.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r23,r11,-16384
	ctx.r23.s64 = ctx.r11.s64 + -1073741824;
loc_82269504:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_82269510"))) PPC_WEAK_FUNC(sub_82269510);
PPC_FUNC_IMPL(__imp__sub_82269510) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r9,768
	ctx.r9.s64 = 50331648;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r7,r11,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// rlwinm r10,r10,0,6,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFFFC;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822691a0
	ctx.lr = 0x82269550;
	sub_822691A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269560"))) PPC_WEAK_FUNC(sub_82269560);
PPC_FUNC_IMPL(__imp__sub_82269560) {
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
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// ori r11,r6,2
	ctx.r11.u64 = ctx.r6.u64 | 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822691a0
	ctx.lr = 0x82269598;
	sub_822691A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822695A8"))) PPC_WEAK_FUNC(sub_822695A8);
PPC_FUNC_IMPL(__imp__sub_822695A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r11,r11,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x2;
	// rlwinm. r10,r10,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x822695dc
	if (!ctx.cr0.eq) goto loc_822695DC;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// b 0x82269638
	goto loc_82269638;
loc_822695DC:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bne cr6,0x82269618
	if (!ctx.cr6.eq) goto loc_82269618;
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r10,21,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r10,10,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82269618:
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r10,19,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82269638:
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82269640"))) PPC_WEAK_FUNC(sub_82269640);
PPC_FUNC_IMPL(__imp__sub_82269640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x2;
	// rlwinm. r10,r10,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82269678
	if (!ctx.cr0.eq) goto loc_82269678;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_82269678:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bne cr6,0x822696b0
	if (!ctx.cr6.eq) goto loc_822696B0;
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,21,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,10,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822696d8
	goto loc_822696D8;
loc_822696B0:
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,19,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822696D8:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822696E0"))) PPC_WEAK_FUNC(sub_822696E0);
PPC_FUNC_IMPL(__imp__sub_822696E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// b 0x82267fe8
	sub_82267FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822696F4"))) PPC_WEAK_FUNC(sub_822696F4);
PPC_FUNC_IMPL(__imp__sub_822696F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822696F8"))) PPC_WEAK_FUNC(sub_822696F8);
PPC_FUNC_IMPL(__imp__sub_822696F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// b 0x82267fe8
	sub_82267FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82269710"))) PPC_WEAK_FUNC(sub_82269710);
PPC_FUNC_IMPL(__imp__sub_82269710) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,44
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 44, ctx.xer);
	// bgt cr6,0x82269768
	if (ctx.cr6.gt) goto loc_82269768;
	// beq cr6,0x82269760
	if (ctx.cr6.eq) goto loc_82269760;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// blt cr6,0x82269790
	if (ctx.cr6.lt) goto loc_82269790;
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// ble cr6,0x8226974c
	if (!ctx.cr6.gt) goto loc_8226974C;
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// ble cr6,0x82269790
	if (!ctx.cr6.gt) goto loc_82269790;
	// cmplwi cr6,r3,20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 20, ctx.xer);
	// ble cr6,0x82269798
	if (!ctx.cr6.gt) goto loc_82269798;
	// cmplwi cr6,r3,39
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 39, ctx.xer);
	// beq cr6,0x82269760
	if (ctx.cr6.eq) goto loc_82269760;
	// cmplwi cr6,r3,40
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 40, ctx.xer);
	// bne cr6,0x82269790
	if (!ctx.cr6.eq) goto loc_82269790;
loc_8226974C:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82269750:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82269760:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82269750
	goto loc_82269750;
loc_82269768:
	// cmplwi cr6,r3,49
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 49, ctx.xer);
	// beq cr6,0x82269798
	if (ctx.cr6.eq) goto loc_82269798;
	// cmplwi cr6,r3,50
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 50, ctx.xer);
	// ble cr6,0x82269790
	if (!ctx.cr6.gt) goto loc_82269790;
	// cmplwi cr6,r3,53
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 53, ctx.xer);
	// ble cr6,0x82269798
	if (!ctx.cr6.gt) goto loc_82269798;
	// cmplwi cr6,r3,57
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 57, ctx.xer);
	// ble cr6,0x82269790
	if (!ctx.cr6.gt) goto loc_82269790;
	// cmplwi cr6,r3,61
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 61, ctx.xer);
	// ble cr6,0x82269798
	if (!ctx.cr6.gt) goto loc_82269798;
loc_82269790:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8226979c
	goto loc_8226979C;
loc_82269798:
	// li r11,4
	ctx.r11.s64 = 4;
loc_8226979C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822697A8"))) PPC_WEAK_FUNC(sub_822697A8);
PPC_FUNC_IMPL(__imp__sub_822697A8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r9,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r9.s64;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bgt cr6,0x822697c0
	if (ctx.cr6.gt) goto loc_822697C0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822697C0:
	// subf r7,r9,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822697d4
	if (!ctx.cr6.gt) goto loc_822697D4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x822697e4
	goto loc_822697E4;
loc_822697D4:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bgt cr6,0x822697e4
	if (ctx.cr6.gt) goto loc_822697E4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_822697E4:
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82269820
	if (ctx.cr6.gt) goto loc_82269820;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bgt cr6,0x82269800
	if (ctx.cr6.gt) goto loc_82269800;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82269800:
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82269810
	if (!ctx.cr6.gt) goto loc_82269810;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82269820
	goto loc_82269820;
loc_82269810:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bgt cr6,0x82269820
	if (ctx.cr6.gt) goto loc_82269820;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82269820:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r3,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r3.s64 = 32 - ctx.r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226982C"))) PPC_WEAK_FUNC(sub_8226982C);
PPC_FUNC_IMPL(__imp__sub_8226982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82269830"))) PPC_WEAK_FUNC(sub_82269830);
PPC_FUNC_IMPL(__imp__sub_82269830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82269838;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r8.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// li r25,32
	ctx.r25.s64 = 32;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// li r27,4
	ctx.r27.s64 = 4;
	// beq cr6,0x82269878
	if (ctx.cr6.eq) goto loc_82269878;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82269878:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82269710
	ctx.lr = 0x82269888;
	sub_82269710(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x822698c0
	if (!ctx.cr6.eq) goto loc_822698C0;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// rlwinm. r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822698c0
	if (ctx.cr0.eq) goto loc_822698C0;
	// li r8,256
	ctx.r8.s64 = 256;
	// twllei r10,0
	// divwu r10,r8,r10
	ctx.r10.u32 = ctx.r8.u32 / ctx.r10.u32;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x822698c0
	if (ctx.cr6.lt) goto loc_822698C0;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_822698C0:
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r11,r9,r24
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32);
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r8,r27,-1
	ctx.r8.s64 = ctx.r27.s64 + -1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r9,r9,r26
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r26.s32);
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x8226993c
	if (ctx.cr6.eq) goto loc_8226993C;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x82269948
	goto loc_82269948;
loc_8226993C:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_82269948:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82269950"))) PPC_WEAK_FUNC(sub_82269950);
PPC_FUNC_IMPL(__imp__sub_82269950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82269958;
	sub_82248750(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r10,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// li r17,0
	ctx.r17.s64 = 0;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// bne cr6,0x8226999c
	if (!ctx.cr6.eq) goto loc_8226999C;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x8226999c
	if (!ctx.cr6.gt) goto loc_8226999C;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// b 0x822699ac
	goto loc_822699AC;
loc_8226999C:
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r17.u32);
	// cmplwi cr6,r22,3
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 3, ctx.xer);
	// mr r14,r17
	ctx.r14.u64 = ctx.r17.u64;
	// bne cr6,0x822699b0
	if (!ctx.cr6.eq) goto loc_822699B0;
loc_822699AC:
	// mr r14,r19
	ctx.r14.u64 = ctx.r19.u64;
loc_822699B0:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// bne cr6,0x822699c0
	if (!ctx.cr6.eq) goto loc_822699C0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
loc_822699C0:
	// lwz r31,340(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r7,r20,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,10880
	ctx.r10.s64 = ctx.r10.s64 + 10880;
	// subf r23,r11,r3
	ctx.r23.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r25,r11,r24
	ctx.r25.s64 = ctx.r24.s64 - ctx.r11.s64;
	// addi r9,r23,-1
	ctx.r9.s64 = ctx.r23.s64 + -1;
	// addi r6,r25,-1
	ctx.r6.s64 = ctx.r25.s64 + -1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r9,r6
	ctx.r9.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// subf r9,r9,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r9.s64;
	// lbzx r21,r7,r5
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// addi r29,r10,32
	ctx.r29.s64 = ctx.r10.s64 + 32;
	// addi r30,r9,32
	ctx.r30.s64 = ctx.r9.s64 + 32;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// bne cr6,0x82269a28
	if (!ctx.cr6.eq) goto loc_82269A28;
	// subf r26,r11,r28
	ctx.r26.s64 = ctx.r28.s64 - ctx.r11.s64;
	// lwz r27,356(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// b 0x82269a40
	goto loc_82269A40;
loc_82269A28:
	// subfic r11,r22,0
	ctx.xer.ca = ctx.r22.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r22.s64;
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// and r27,r9,r10
	ctx.r27.u64 = ctx.r9.u64 & ctx.r10.u64;
loc_82269A40:
	// slw r11,r19,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// slw r10,r19,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r29.u8 & 0x3F));
	// slw r11,r19,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r30.u8 & 0x3F));
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// ble cr6,0x82269a68
	if (!ctx.cr6.gt) goto loc_82269A68;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x82269a70
	if (ctx.cr6.gt) goto loc_82269A70;
loc_82269A68:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82269a98
	if (!ctx.cr6.eq) goto loc_82269A98;
loc_82269A70:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82269a80
	if (!ctx.cr6.eq) goto loc_82269A80;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// b 0x82269a90
	goto loc_82269A90;
loc_82269A80:
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// twllei r21,0
	// divwu r11,r11,r21
	ctx.r11.u32 = ctx.r11.u32 / ctx.r21.u32;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82269A90:
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_82269A98:
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82269830
	ctx.lr = 0x82269AB8;
	sub_82269830(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r18,88(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bne cr6,0x82269acc
	if (!ctx.cr6.eq) goto loc_82269ACC;
	// mullw r11,r18,r21
	ctx.r11.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r21.s32);
	// rlwinm r27,r11,29,3,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_82269ACC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x82269b48
	if (!ctx.cr6.eq) goto loc_82269B48;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82269b48
	if (!ctx.cr6.eq) goto loc_82269B48;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// beq cr6,0x82269b6c
	if (ctx.cr6.eq) goto loc_82269B6C;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// bne cr6,0x82269b34
	if (!ctx.cr6.eq) goto loc_82269B34;
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 1, ctx.xer);
	// bne cr6,0x82269b34
	if (!ctx.cr6.eq) goto loc_82269B34;
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82269b34
	if (!ctx.cr6.eq) goto loc_82269B34;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82269b34
	if (!ctx.cr6.eq) goto loc_82269B34;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82269710
	ctx.lr = 0x82269B18;
	sub_82269710(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// mullw r24,r11,r27
	ctx.r24.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// b 0x82269cac
	goto loc_82269CAC;
loc_82269B34:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r27,r11
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r11.s32);
	// mullw r24,r11,r10
	ctx.r24.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// b 0x82269b94
	goto loc_82269B94;
loc_82269B48:
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// beq cr6,0x82269b6c
	if (ctx.cr6.eq) goto loc_82269B6C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r11,r27,r11
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mullw r24,r11,r10
	ctx.r24.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// b 0x82269b84
	goto loc_82269B84;
loc_82269B6C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r27,r11
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r24,r11,0,0,19
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_82269B84:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82269b94
	if (ctx.cr6.eq) goto loc_82269B94;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mullw r24,r24,r11
	ctx.r24.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r11.s32);
loc_82269B94:
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 1, ctx.xer);
	// bgt cr6,0x82269ba4
	if (ctx.cr6.gt) goto loc_82269BA4;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x82269cac
	if (!ctx.cr6.eq) goto loc_82269CAC;
loc_82269BA4:
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bgt cr6,0x82269bb4
	if (ctx.cr6.gt) goto loc_82269BB4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82269BB4:
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82269bc4
	if (!ctx.cr6.gt) goto loc_82269BC4;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82269bd4
	goto loc_82269BD4;
loc_82269BC4:
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bgt cr6,0x82269bd4
	if (ctx.cr6.gt) goto loc_82269BD4;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82269BD4:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x82269be4
	if (!ctx.cr6.eq) goto loc_82269BE4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r15,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r15.s64 = 32 - ctx.r11.s64;
loc_82269BE4:
	// li r11,15
	ctx.r11.s64 = 15;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r27,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r27.s64 = 32 - ctx.r11.s64;
	// addic. r31,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r31.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82269c78
	if (ctx.cr0.eq) goto loc_82269C78;
loc_82269BF8:
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82269c14
	if (ctx.cr6.eq) goto loc_82269C14;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82269c78
	if (!ctx.cr6.gt) goto loc_82269C78;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82269c78
	if (!ctx.cr6.gt) goto loc_82269C78;
loc_82269C14:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82269c20
	if (ctx.cr6.eq) goto loc_82269C20;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_82269C20:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82269c2c
	if (ctx.cr6.eq) goto loc_82269C2C;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82269C2C:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x82269c38
	if (!ctx.cr6.gt) goto loc_82269C38;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
loc_82269C38:
	// slw r11,r19,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r29.u8 & 0x3F));
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// slw r10,r19,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r30.u8 & 0x3F));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82269830
	ctx.lr = 0x82269C6C;
	sub_82269830(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r17,r3,r17
	ctx.r17.u64 = ctx.r3.u64 + ctx.r17.u64;
	// bne 0x82269bf8
	if (!ctx.cr0.eq) goto loc_82269BF8;
loc_82269C78:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82269cac
	if (ctx.cr6.eq) goto loc_82269CAC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// mullw r17,r11,r17
	ctx.r17.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r17.s32);
loc_82269CAC:
	// lwz r11,364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r9,380(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// stw r17,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r17.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82269CD0"))) PPC_WEAK_FUNC(sub_82269CD0);
PPC_FUNC_IMPL(__imp__sub_82269CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82269CD8;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// addi r10,r11,10880
	ctx.r10.s64 = ctx.r11.s64 + 10880;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbzx r24,r7,r10
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82269710
	ctx.lr = 0x82269D30;
	sub_82269710(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subfic r10,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r10.s64;
	// subfic r8,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r9.s64;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r9,1
	ctx.r9.s64 = 1;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bge cr6,0x82269dec
	if (!ctx.cr6.lt) goto loc_82269DEC;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// sraw r10,r10,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82269D90:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82269D94:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mullw r7,r10,r24
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r3,284(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// twllei r10,0
	// divwu r10,r9,r10
	ctx.r10.u32 = ctx.r9.u32 / ctx.r10.u32;
	// rlwinm r6,r7,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r7,r8,r27
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// divwu r8,r8,r5
	ctx.r8.u32 = ctx.r8.u32 / ctx.r5.u32;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// twllei r5,0
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82269DEC:
	// xori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 ^ 4;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r7,r31,-2
	ctx.r7.s64 = ctx.r31.s64 + -2;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x82269d90
	if (!ctx.cr6.lt) goto loc_82269D90;
	// subf r11,r31,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r31.s64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82269e20
	if (ctx.cr6.gt) goto loc_82269E20;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82269E20:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82269d94
	goto loc_82269D94;
}

__attribute__((alias("__imp__sub_82269E28"))) PPC_WEAK_FUNC(sub_82269E28);
PPC_FUNC_IMPL(__imp__sub_82269E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248754
	ctx.lr = 0x82269E30;
	sub_82248754(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,10880
	ctx.r11.s64 = ctx.r11.s64 + 10880;
	// clrlwi r22,r10,26
	ctx.r22.u64 = ctx.r10.u32 & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r22,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// lbzx r21,r10,r11
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// bl 0x82267f58
	ctx.lr = 0x82269E70;
	sub_82267F58(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82269ee0
	if (!ctx.cr6.eq) goto loc_82269EE0;
	// bl 0x822695a8
	ctx.lr = 0x82269E90;
	sub_822695A8(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// rlwinm r9,r11,10,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1FF;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mullw r31,r9,r21
	ctx.r31.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r21.s32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r8,r10,23,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// rlwinm r31,r31,2,3,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x1FFFFFFC;
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r24,100(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x82269830
	ctx.lr = 0x82269EDC;
	sub_82269830(ctx, base);
	// b 0x8226a194
	goto loc_8226A194;
loc_82269EE0:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm r31,r11,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r8,r31,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822695a8
	ctx.lr = 0x82269EF0;
	sub_822695A8(ctx, base);
	// lwz r28,48(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r26,r28,23,30,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 23) & 0x3;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r8,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r8.s64;
	// lwz r24,100(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r7,r8,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r8.s64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// slw r4,r5,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// slw r3,r5,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bne cr6,0x82269f64
	if (!ctx.cr6.eq) goto loc_82269F64;
	// subf r11,r8,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r8.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// slw r29,r5,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82269f68
	goto loc_82269F68;
loc_82269F64:
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_82269F68:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8226a030
	if (!ctx.cr6.eq) goto loc_8226A030;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// ble cr6,0x82269f84
	if (!ctx.cr6.gt) goto loc_82269F84;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// bgt cr6,0x82269f8c
	if (ctx.cr6.gt) goto loc_82269F8C;
loc_82269F84:
	// rlwinm. r11,r28,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82269f98
	if (!ctx.cr0.eq) goto loc_82269F98;
loc_82269F8C:
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
loc_82269F98:
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// rlwinm r22,r29,1,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// bl 0x82269830
	ctx.lr = 0x82269FC0;
	sub_82269830(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x8226a020
	if (!ctx.cr6.eq) goto loc_8226A020;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8226a020
	if (!ctx.cr0.eq) goto loc_8226A020;
	// rlwinm. r10,r28,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8226a020
	if (!ctx.cr0.eq) goto loc_8226A020;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// bne cr6,0x8226a020
	if (!ctx.cr6.eq) goto loc_8226A020;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm. r10,r10,0,22,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3C0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8226a020
	if (!ctx.cr0.eq) goto loc_8226A020;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8226a020
	if (!ctx.cr6.eq) goto loc_8226A020;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82269710
	ctx.lr = 0x8226A008;
	sub_82269710(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8226A020:
	// rlwinm r11,r29,10,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 10) & 0x1FF;
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// rlwinm r31,r11,2,3,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFFFFFC;
	// b 0x8226a194
	goto loc_8226A194;
loc_8226A030:
	// srw r11,r9,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r23.u8 & 0x3F));
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8226a048
	if (ctx.cr6.gt) goto loc_8226A048;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8226A048:
	// srw r10,r7,r23
	ctx.r10.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r23.u8 & 0x3F));
	// add r25,r11,r8
	ctx.r25.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8226a05c
	if (ctx.cr6.gt) goto loc_8226A05C;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8226A05C:
	// add r27,r10,r8
	ctx.r27.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// bne cr6,0x8226a084
	if (!ctx.cr6.eq) goto loc_8226A084;
	// subf r11,r8,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r8.s64;
	// srw r11,r11,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8226a07c
	if (ctx.cr6.gt) goto loc_8226A07C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8226A07C:
	// add r24,r11,r8
	ctx.r24.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x8226a088
	goto loc_8226A088;
loc_8226A084:
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
loc_8226A088:
	// rlwinm. r11,r28,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226a128
	if (ctx.cr0.eq) goto loc_8226A128;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r11,r8,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r8.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// subf r10,r7,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r7.s64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8226a0c4
	if (ctx.cr6.lt) goto loc_8226A0C4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8226A0C4:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8226a128
	if (ctx.cr6.lt) goto loc_8226A128;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r11,r8,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r8.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// subf r10,r9,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8226a114
	if (ctx.cr6.lt) goto loc_8226A114;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8226A114:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	// and r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8226A128:
	// srw r11,r4,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bgt cr6,0x8226a13c
	if (ctx.cr6.gt) goto loc_8226A13C;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
loc_8226A13C:
	// srw r11,r3,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x8226a150
	if (ctx.cr6.gt) goto loc_8226A150;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
loc_8226A150:
	// srw r11,r29,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bgt cr6,0x8226a164
	if (ctx.cr6.gt) goto loc_8226A164;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
loc_8226A164:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// bl 0x82269830
	ctx.lr = 0x8226A188;
	sub_82269830(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// rlwinm r31,r11,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_8226A194:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r25.u32);
	// stw r27,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r27.u32);
	// mullw r11,r31,r11
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// stw r24,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r24.u32);
	// stw r31,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r31.u32);
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8226a1d4
	if (!ctx.cr0.eq) goto loc_8226A1D4;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// bgt cr6,0x8226a1d4
	if (ctx.cr6.gt) goto loc_8226A1D4;
	// cmpwi cr6,r15,3
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 3, ctx.xer);
	// beq cr6,0x8226a1f0
	if (ctx.cr6.eq) goto loc_8226A1F0;
	// cmpwi cr6,r15,20
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 20, ctx.xer);
	// beq cr6,0x8226a1f0
	if (ctx.cr6.eq) goto loc_8226A1F0;
loc_8226A1D4:
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// beq cr6,0x8226a1f0
	if (ctx.cr6.eq) goto loc_8226A1F0;
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
loc_8226A1F0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487a4
	// ERROR 822487A4
	return;
}

__attribute__((alias("__imp__sub_8226A1F8"))) PPC_WEAK_FUNC(sub_8226A1F8);
PPC_FUNC_IMPL(__imp__sub_8226A1F8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82269e28
	ctx.lr = 0x8226A22C;
	sub_82269E28(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r11,25,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,25,26,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x38;
	// rlwinm r6,r11,28,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r11,31,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r10,26,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r6,r10,24,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r10,28,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// rlwimi r11,r9,1,0,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm r9,r10,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r6,r8,26,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwimi r8,r11,6,0,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// bl 0x82267f58
	ctx.lr = 0x8226A2B8;
	sub_82267F58(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8226A2F8"))) PPC_WEAK_FUNC(sub_8226A2F8);
PPC_FUNC_IMPL(__imp__sub_8226A2F8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82269e28
	ctx.lr = 0x8226A32C;
	sub_82269E28(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r11,25,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,25,26,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x38;
	// rlwinm r6,r11,28,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r11,31,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r10,26,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r6,r10,24,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r10,28,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// rlwimi r11,r9,1,0,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm r9,r10,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r6,r8,26,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwimi r8,r11,6,0,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// bl 0x82267f58
	ctx.lr = 0x8226A3B8;
	sub_82267F58(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// stw r8,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8226A3F8"))) PPC_WEAK_FUNC(sub_8226A3F8);
PPC_FUNC_IMPL(__imp__sub_8226A3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8226A400;
	sub_82248750(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r10,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// addi r11,r11,10880
	ctx.r11.s64 = ctx.r11.s64 + 10880;
	// stw r9,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r10,1,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x7E;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// stw r7,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// stw r8,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r30,r9,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r14,r10,r11
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// rlwinm r28,r7,1,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// rlwinm r24,r6,23,30,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x3;
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82267f58
	ctx.lr = 0x8226A46C;
	sub_82267F58(ctx, base);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822695a8
	ctx.lr = 0x8226A480;
	sub_822695A8(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 2, ctx.xer);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r23,120(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// subf r9,r29,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r29.s64;
	// subf r8,r29,r23
	ctx.r8.s64 = ctx.r23.s64 - ctx.r29.s64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r6,r10
	ctx.r6.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subf r11,r6,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r6.s64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// slw r26,r25,r10
	ctx.r26.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r10.u8 & 0x3F));
	// slw r17,r25,r11
	ctx.r17.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// bne cr6,0x8226a4e4
	if (!ctx.cr6.eq) goto loc_8226A4E4;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// slw r15,r25,r11
	ctx.r15.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x8226a4e8
	goto loc_8226A4E8;
loc_8226A4E4:
	// mr r15,r25
	ctx.r15.u64 = ctx.r25.u64;
loc_8226A4E8:
	// cmplwi cr6,r26,16
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 16, ctx.xer);
	// ble cr6,0x8226a4f8
	if (!ctx.cr6.gt) goto loc_8226A4F8;
	// cmplwi cr6,r17,16
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 16, ctx.xer);
	// bgt cr6,0x8226a508
	if (ctx.cr6.gt) goto loc_8226A508;
loc_8226A4F8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226a50c
	if (!ctx.cr0.eq) goto loc_8226A50C;
loc_8226A508:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8226A50C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8226a524
	if (ctx.cr6.eq) goto loc_8226A524;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8226a524
	if (!ctx.cr6.eq) goto loc_8226A524;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x8226a528
	goto loc_8226A528;
loc_8226A524:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_8226A528:
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x8226a614
	if (!ctx.cr6.eq) goto loc_8226A614;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8226a614
	if (!ctx.cr6.eq) goto loc_8226A614;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rlwinm r27,r29,23,30,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 23) & 0x3;
	// clrlwi r28,r30,26
	ctx.r28.u64 = ctx.r30.u32 & 0x3F;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x82269830
	ctx.lr = 0x8226A580;
	sub_82269830(ctx, base);
	// lwz r26,28(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm. r11,r26,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226a5e4
	if (!ctx.cr0.eq) goto loc_8226A5E4;
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226a5e4
	if (!ctx.cr0.eq) goto loc_8226A5E4;
	// rlwinm. r11,r29,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226a5e4
	if (!ctx.cr0.eq) goto loc_8226A5E4;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x8226a5e4
	if (!ctx.cr6.eq) goto loc_8226A5E4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,22,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226a5e4
	if (!ctx.cr0.eq) goto loc_8226A5E4;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226a5e4
	if (!ctx.cr0.eq) goto loc_8226A5E4;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82269710
	ctx.lr = 0x8226A5CC;
	sub_82269710(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r17,r10,r11
	ctx.r17.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// b 0x8226a5e8
	goto loc_8226A5E8;
loc_8226A5E4:
	// lwz r17,100(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8226A5E8:
	// lwz r15,96(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8226a604
	if (!ctx.cr6.eq) goto loc_8226A604;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mullw r11,r11,r14
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r14.s32);
	// rlwinm r30,r11,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x8226a848
	goto loc_8226A848;
loc_8226A604:
	// rlwinm r11,r26,10,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 10) & 0x1FF;
	// mullw r11,r11,r14
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r14.s32);
	// rlwinm r30,r11,2,3,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFFFFFC;
	// b 0x8226a848
	goto loc_8226A848;
loc_8226A614:
	// srw r10,r9,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r27.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8226a624
	if (ctx.cr6.gt) goto loc_8226A624;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8226A624:
	// srw r11,r8,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r27.u8 & 0x3F));
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bgt cr6,0x8226a63c
	if (ctx.cr6.gt) goto loc_8226A63C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8226A63C:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 2, ctx.xer);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bne cr6,0x8226a670
	if (!ctx.cr6.eq) goto loc_8226A670;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// srw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r27.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8226a664
	if (ctx.cr6.gt) goto loc_8226A664;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8226A664:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// b 0x8226a674
	goto loc_8226A674;
loc_8226A670:
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
loc_8226A674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82267f58
	ctx.lr = 0x8226A67C;
	sub_82267F58(ctx, base);
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x8226a694
	if (ctx.cr6.eq) goto loc_8226A694;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// beq cr6,0x8226a694
	if (ctx.cr6.eq) goto loc_8226A694;
	// mr r16,r25
	ctx.r16.u64 = ctx.r25.u64;
	// b 0x8226a6b4
	goto loc_8226A6B4;
loc_8226A694:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,23,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x2;
	// rlwinm r10,r10,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// slw r11,r25,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r16,r10,r11
	ctx.r16.u64 = ctx.r10.u64 & ~ctx.r11.u64;
loc_8226A6B4:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// cntlzw r10,r17
	ctx.r10.u64 = ctx.r17.u32 == 0 ? 32 : __builtin_clz(ctx.r17.u32);
	// cntlzw r9,r15
	ctx.r9.u64 = ctx.r15.u32 == 0 ? 32 : __builtin_clz(ctx.r15.u32);
	// subfic r22,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r22.s64 = 31 - ctx.r11.s64;
	// subfic r23,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r23.s64 = 31 - ctx.r10.s64;
	// subfic r24,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r24.s64 = 31 - ctx.r9.s64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8226a6e8
	if (ctx.cr6.eq) goto loc_8226A6E8;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x8226a6ec
	goto loc_8226A6EC;
loc_8226A6E8:
	// addi r18,r27,-1
	ctx.r18.s64 = ctx.r27.s64 + -1;
loc_8226A6EC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x8226a844
	if (ctx.cr6.lt) goto loc_8226A844;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r20,48(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r19,r11,1,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r21,r10,26
	ctx.r21.u64 = ctx.r10.u32 & 0x3F;
loc_8226A708:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8226a714
	if (ctx.cr6.eq) goto loc_8226A714;
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
loc_8226A714:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8226a720
	if (ctx.cr6.eq) goto loc_8226A720;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
loc_8226A720:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8226a72c
	if (ctx.cr6.eq) goto loc_8226A72C;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
loc_8226A72C:
	// slw r29,r25,r22
	ctx.r29.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r22.u8 & 0x3F));
	// slw r28,r25,r23
	ctx.r28.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r23.u8 & 0x3F));
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// slw r27,r25,r24
	ctx.r27.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r24.u8 & 0x3F));
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// rlwinm r26,r20,23,30,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 23) & 0x3;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82269830
	ctx.lr = 0x8226A768;
	sub_82269830(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// mullw r11,r11,r14
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r14.s32);
	// rlwinm r30,r11,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// ble cr6,0x8226a784
	if (!ctx.cr6.gt) goto loc_8226A784;
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// bgt cr6,0x8226a78c
	if (ctx.cr6.gt) goto loc_8226A78C;
loc_8226A784:
	// rlwinm. r11,r20,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226a7ec
	if (!ctx.cr0.eq) goto loc_8226A7EC;
loc_8226A78C:
	// lwz r17,100(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lwz r15,96(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ble cr6,0x8226a7d8
	if (!ctx.cr6.gt) goto loc_8226A7D8;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// beq cr6,0x8226a7b8
	if (ctx.cr6.eq) goto loc_8226A7B8;
	// mullw r11,r30,r17
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r17.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// b 0x8226a7c8
	goto loc_8226A7C8;
loc_8226A7B8:
	// mullw r11,r30,r15
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r15.s32);
	// mullw r11,r11,r17
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r17.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_8226A7C8:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_8226A7D8:
	// addic. r18,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bge 0x8226a708
	if (!ctx.cr0.lt) goto loc_8226A708;
	// lwz r21,340(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r20,348(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// b 0x8226a848
	goto loc_8226A848;
loc_8226A7EC:
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// lwz r17,100(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mullw r8,r30,r17
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r17.s32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82269cd0
	ctx.lr = 0x8226A824;
	sub_82269CD0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r15,96(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r21,340(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r20,348(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x8226a848
	goto loc_8226A848;
loc_8226A844:
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8226A848:
	// mullw r11,r30,r17
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r17.s32);
	// lwz r9,316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,332(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addi r10,r11,4095
	ctx.r10.s64 = ctx.r11.s64 + 4095;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r9,r9,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r9,1024
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1024, ctx.xer);
	// beq cr6,0x8226a890
	if (ctx.cr6.eq) goto loc_8226A890;
	// mullw r11,r10,r15
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r15.s32);
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// b 0x8226a8a0
	goto loc_8226A8A0;
loc_8226A890:
	// mullw r10,r11,r15
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4095
	ctx.r11.s64 = ctx.r10.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_8226A8A0:
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,364(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226A8DC"))) PPC_WEAK_FUNC(sub_8226A8DC);
PPC_FUNC_IMPL(__imp__sub_8226A8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226A8E0"))) PPC_WEAK_FUNC(sub_8226A8E0);
PPC_FUNC_IMPL(__imp__sub_8226A8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8226A8E8;
	sub_8224877C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r31,276(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8226a3f8
	ctx.lr = 0x8226A93C;
	sub_8226A3F8(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82269710
	ctx.lr = 0x8226A950;
	sub_82269710(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r8,r8,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r7,r11,0,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822691a0
	ctx.lr = 0x8226A9A0;
	sub_822691A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8226A9B4"))) PPC_WEAK_FUNC(sub_8226A9B4);
PPC_FUNC_IMPL(__imp__sub_8226A9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226A9B8"))) PPC_WEAK_FUNC(sub_8226A9B8);
PPC_FUNC_IMPL(__imp__sub_8226A9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8226A9C0;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8226a8e0
	ctx.lr = 0x8226A9EC;
	sub_8226A8E0(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8226aa34
	if (ctx.cr6.eq) goto loc_8226AA34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,10880
	ctx.r11.s64 = ctx.r11.s64 + 10880;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,1,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x7E;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lbzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x8226aa38
	goto loc_8226AA38;
loc_8226AA34:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8226AA38:
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8226AA48"))) PPC_WEAK_FUNC(sub_8226AA48);
PPC_FUNC_IMPL(__imp__sub_8226AA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8226AA50;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8226a8e0
	ctx.lr = 0x8226AA84;
	sub_8226A8E0(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8226aadc
	if (ctx.cr6.eq) goto loc_8226AADC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,10880
	ctx.r11.s64 = ctx.r11.s64 + 10880;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,1,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x7E;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lbzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r5,r8
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8226aae0
	goto loc_8226AAE0;
loc_8226AADC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8226AAE0:
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8226AAF4"))) PPC_WEAK_FUNC(sub_8226AAF4);
PPC_FUNC_IMPL(__imp__sub_8226AAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226AAF8"))) PPC_WEAK_FUNC(sub_8226AAF8);
PPC_FUNC_IMPL(__imp__sub_8226AAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x8226AB00;
	sub_82248764(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,340(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r11,r20,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x8226aba8
	if (ctx.cr6.eq) goto loc_8226ABA8;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// beq cr6,0x8226ab6c
	if (ctx.cr6.eq) goto loc_8226AB6C;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x8226ab64
	if (ctx.cr6.eq) goto loc_8226AB64;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// beq cr6,0x8226aba8
	if (ctx.cr6.eq) goto loc_8226ABA8;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bne cr6,0x8226abb0
	if (!ctx.cr6.eq) goto loc_8226ABB0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x8226abbc
	goto loc_8226ABBC;
loc_8226AB64:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x8226abbc
	goto loc_8226ABBC;
loc_8226AB6C:
	// li r30,2
	ctx.r30.s64 = 2;
loc_8226AB70:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_8226AB74:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x8226ab90
	if (!ctx.cr6.eq) goto loc_8226AB90;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822697a8
	ctx.lr = 0x8226AB8C;
	sub_822697A8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8226AB90:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x8226abc4
	if (!ctx.cr6.eq) goto loc_8226ABC4;
	// subfic r11,r22,1
	ctx.xer.ca = ctx.r22.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r22.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r23,r11,31
	ctx.r23.u64 = ctx.r11.u32 & 0x1;
	// b 0x8226abc8
	goto loc_8226ABC8;
loc_8226ABA8:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x8226abb4
	goto loc_8226ABB4;
loc_8226ABB0:
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_8226ABB4:
	// cmpwi cr6,r19,17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 17, ctx.xer);
	// beq cr6,0x8226ab70
	if (ctx.cr6.eq) goto loc_8226AB70;
loc_8226ABBC:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8226ab74
	goto loc_8226AB74;
loc_8226ABC4:
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
loc_8226ABC8:
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// lwz r21,348(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// clrlwi r26,r31,26
	ctx.r26.u64 = ctx.r31.u32 & 0x3F;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// rlwinm r9,r31,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0x1;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82269950
	ctx.lr = 0x8226AC1C;
	sub_82269950(ctx, base);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// beq 0x8226ac34
	if (ctx.cr0.eq) goto loc_8226AC34;
	// lis r10,48
	ctx.r10.s64 = 3145728;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
loc_8226AC34:
	// rlwinm. r11,r24,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226ac40
	if (ctx.cr0.eq) goto loc_8226AC40;
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
loc_8226AC40:
	// lwz r11,364(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// rlwimi r10,r30,9,21,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 9) & 0x600) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF9FF);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// blt cr6,0x8226ad08
	if (ctx.cr6.lt) goto loc_8226AD08;
	// beq cr6,0x8226acd0
	if (ctx.cr6.eq) goto loc_8226ACD0;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x8226aca0
	if (ctx.cr6.lt) goto loc_8226ACA0;
	// bne cr6,0x8226ad18
	if (!ctx.cr6.eq) goto loc_8226AD18;
	// subf r9,r25,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r25.s64;
	// subf r8,r25,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r25.s64;
	// addi r7,r27,-1
	ctx.r7.s64 = ctx.r27.s64 + -1;
	// rlwimi r8,r9,13,6,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 13) & 0x3FFE000) | (ctx.r8.u64 & 0xFFFFFFFFFC001FFF);
	// rlwimi r8,r7,26,0,5
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 26) & 0xFC000000) | (ctx.r8.u64 & 0xFFFFFFFF03FFFFFF);
	// b 0x8226ad14
	goto loc_8226AD14;
loc_8226ACA0:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r8,r25,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r25.s64;
	// subf r7,r25,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r25.s64;
	// rlwimi r8,r9,0,0,20
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFF800) | (ctx.r8.u64 & 0xFFFFFFFF000007FF);
	// subf r6,r25,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r25.s64;
	// rlwinm r9,r7,11,10,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0x3FF800;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// rlwinm r7,r6,22,0,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0xFFC00000;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// clrlwi r8,r8,21
	ctx.r8.u64 = ctx.r8.u32 & 0x7FF;
	// b 0x8226acfc
	goto loc_8226ACFC;
loc_8226ACD0:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r8,r25,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r25.s64;
	// subf r7,r25,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r25.s64;
	// rlwimi r8,r9,0,0,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFE000) | (ctx.r8.u64 & 0xFFFFFFFF00001FFF);
	// addi r9,r27,-1
	ctx.r9.s64 = ctx.r27.s64 + -1;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// rlwinm r8,r7,13,6,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0x3FFE000;
	// rlwinm r9,r9,26,0,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xFC000000;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r8,r8,19
	ctx.r8.u64 = ctx.r8.u32 & 0x1FFF;
loc_8226ACFC:
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// b 0x8226ad18
	goto loc_8226AD18;
loc_8226AD08:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r8,r25,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r25.s64;
	// rlwimi r8,r9,0,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
loc_8226AD14:
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
loc_8226AD18:
	// srawi r9,r31,15
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 15;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// srawi r7,r31,13
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1FFF) != 0);
	ctx.r7.s64 = ctx.r31.s32 >> 13;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// srawi r5,r31,11
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 11;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// srawi r3,r31,9
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1FF) != 0);
	ctx.r3.s64 = ctx.r31.s32 >> 9;
	// lwz r30,40(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// lwz r28,44(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// srawi r29,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r31.s32 >> 8;
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r27,r19,-19
	ctx.r27.s64 = ctx.r19.s64 + -19;
	// lwz r25,132(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwimi r8,r29,14,0,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r29.u32, 14) & 0xFFFFC000) | (ctx.r8.u64 & 0xFFFFFFFF00003FFF);
	// lwz r24,380(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// lwz r29,136(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cntlzw r27,r27
	ctx.r27.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwimi r5,r7,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi r6,r8,17,0,9
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 17) & 0xFFC00000) | (ctx.r6.u64 & 0xFFFFFFFF003FFFFF);
	// srawi r19,r31,6
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3F) != 0);
	ctx.r19.s64 = ctx.r31.s32 >> 6;
	// rlwinm r8,r27,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 27) & 0x1;
	// rlwimi r3,r5,2,0,29
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0xFFFFFFFC) | (ctx.r3.u64 & 0xFFFFFFFF00000003);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwimi r19,r8,4,27,27
	ctx.r19.u64 = (__builtin_rotateleft32(ctx.r8.u32, 4) & 0x10) | (ctx.r19.u64 & 0xFFFFFFFFFFFFFFEF);
	// rlwinm r8,r4,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r5,r20,18,0,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 18) & 0xFFFC0000;
	// clrlwi r6,r21,26
	ctx.r6.u64 = ctx.r21.u32 & 0x3F;
	// rlwinm r7,r7,0,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFC00;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 | ctx.r7.u64;
	// srawi r5,r31,17
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 17;
	// or r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 | ctx.r26.u64;
	// rlwimi r5,r6,13,0,18
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 13) & 0xFFFFE000) | (ctx.r5.u64 & 0xFFFFFFFF00001FFF);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// addi r4,r22,-1
	ctx.r4.s64 = ctx.r22.s64 + -1;
	// rlwimi r8,r19,6,24,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r19.u32, 6) & 0xC0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF3F);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// rlwinm r6,r30,0,1,12
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x7FF80000;
	// rlwimi r28,r4,6,22,25
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r4.u32, 6) & 0x3C0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r8,r19,6,21,21
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r19.u32, 6) & 0x400) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFBFF);
	// rlwimi r10,r23,11,20,20
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r23.u32, 11) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r28,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r28.u32);
	// or r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_8226ADEC"))) PPC_WEAK_FUNC(sub_8226ADEC);
PPC_FUNC_IMPL(__imp__sub_8226ADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226ADF0"))) PPC_WEAK_FUNC(sub_8226ADF0);
PPC_FUNC_IMPL(__imp__sub_8226ADF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8226ADF8;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r25,r5,26
	ctx.r25.u64 = ctx.r5.u32 & 0x3F;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r25,22
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 22, ctx.xer);
	// beq cr6,0x8226ae38
	if (ctx.cr6.eq) goto loc_8226AE38;
	// cmplwi cr6,r25,23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 23, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// bne cr6,0x8226ae3c
	if (!ctx.cr6.eq) goto loc_8226AE3C;
loc_8226AE38:
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_8226AE3C:
	// cmplwi cr6,r25,54
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 54, ctx.xer);
	// bne cr6,0x8226ae48
	if (!ctx.cr6.eq) goto loc_8226AE48;
	// li r25,7
	ctx.r25.s64 = 7;
loc_8226AE48:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// bl 0x821605c8
	ctx.lr = 0x8226AE74;
	sub_821605C8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8226aeb8
	if (ctx.cr6.eq) goto loc_8226AEB8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// blt cr6,0x8226ae90
	if (ctx.cr6.lt) goto loc_8226AE90;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_8226AE90:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x8226ae9c
	if (!ctx.cr6.eq) goto loc_8226AE9C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_8226AE9C:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// clrlwi r7,r11,9
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFFF;
	// b 0x8226aebc
	goto loc_8226AEBC;
loc_8226AEB8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8226AEBC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8226aed4
	if (ctx.cr6.eq) goto loc_8226AED4;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r24,4(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r8,8(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// b 0x8226aef8
	goto loc_8226AEF8;
loc_8226AED4:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8226aef8
	if (ctx.cr6.eq) goto loc_8226AEF8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,7368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7368);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 & ctx.r24.u64;
loc_8226AEF8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8226af08
	if (ctx.cr6.eq) goto loc_8226AF08;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x8226af24
	if (!ctx.cr6.eq) goto loc_8226AF24;
loc_8226AF08:
	// li r10,80
	ctx.r10.s64 = 80;
	// addi r11,r30,79
	ctx.r11.s64 = ctx.r30.s64 + 79;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 * 80;
	// addi r11,r30,31
	ctx.r11.s64 = ctx.r30.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// b 0x8226af3c
	goto loc_8226AF3C;
loc_8226AF24:
	// li r10,40
	ctx.r10.s64 = 40;
	// addi r11,r30,39
	ctx.r11.s64 = ctx.r30.s64 + 39;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 * 40;
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
loc_8226AF3C:
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// rlwimi r29,r11,2,0,29
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xFFFFFFFC) | (ctx.r29.u64 & 0xFFFFFFFF00000003);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// rlwinm r11,r5,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0xFFFC0000;
	// clrlwi r6,r6,29
	ctx.r6.u64 = ctx.r6.u32 & 0x7;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// addi r6,r27,-1
	ctx.r6.s64 = ctx.r27.s64 + -1;
	// rlwinm r4,r29,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r10,r10,18
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFF;
	// addi r5,r5,10880
	ctx.r5.s64 = ctx.r5.s64 + 10880;
	// rlwinm r30,r25,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwimi r11,r6,3,14,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 3) & 0x3FFF8) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0007);
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lhzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r5.u32);
	// rlwinm r11,r11,24,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// beq cr6,0x8226aff4
	if (ctx.cr6.eq) goto loc_8226AFF4;
	// rlwinm r11,r11,16,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x10000;
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x8226afe8
	if (ctx.cr6.eq) goto loc_8226AFE8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8226afc4
	if (ctx.cr6.eq) goto loc_8226AFC4;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226afc4
	if (ctx.cr6.eq) goto loc_8226AFC4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8226afd0
	goto loc_8226AFD0;
loc_8226AFC4:
	// addi r11,r25,-22
	ctx.r11.s64 = ctx.r25.s64 + -22;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8226AFD0:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r10,r24,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 13) & 0xFFFFE000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r22,r11,4,0,27
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xFFFFFFF0) | (ctx.r22.u64 & 0xFFFFFFFF0000000F);
	// stw r22,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r22.u32);
	// b 0x8226b048
	goto loc_8226B048;
loc_8226AFE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x8226b048
	goto loc_8226B048;
loc_8226AFF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226b034
	if (!ctx.cr6.eq) goto loc_8226B034;
	// rlwinm. r10,r28,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8226b034
	if (!ctx.cr0.eq) goto loc_8226B034;
	// rlwinm r10,r28,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x600;
	// cmpwi cr6,r10,1536
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1536, ctx.xer);
	// bne cr6,0x8226b034
	if (!ctx.cr6.eq) goto loc_8226B034;
	// rlwinm r10,r28,0,19,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x1800;
	// cmpwi cr6,r10,6144
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6144, ctx.xer);
	// bne cr6,0x8226b034
	if (!ctx.cr6.eq) goto loc_8226B034;
	// rlwinm r10,r28,0,17,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x6000;
	// cmpwi cr6,r10,24576
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24576, ctx.xer);
	// bne cr6,0x8226b034
	if (!ctx.cr6.eq) goto loc_8226B034;
	// rlwinm. r10,r28,0,15,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x18000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8226b034
	if (!ctx.cr0.eq) goto loc_8226B034;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8226B034:
	// rlwimi r11,r8,4,22,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 4) & 0x3F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC0F);
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm r11,r11,16,6,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3FF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8226B048:
	// mulli r11,r3,5120
	ctx.r11.s64 = ctx.r3.s64 * 5120;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r3,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
	// stw r7,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8226B060"))) PPC_WEAK_FUNC(sub_8226B060);
PPC_FUNC_IMPL(__imp__sub_8226B060) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r11,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226B070"))) PPC_WEAK_FUNC(sub_8226B070);
PPC_FUNC_IMPL(__imp__sub_8226B070) {
	PPC_FUNC_PROLOGUE();
	// b 0x8226a1f8
	sub_8226A1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226B074"))) PPC_WEAK_FUNC(sub_8226B074);
PPC_FUNC_IMPL(__imp__sub_8226B074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226B078"))) PPC_WEAK_FUNC(sub_8226B078);
PPC_FUNC_IMPL(__imp__sub_8226B078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8226B080;
	sub_8224878C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8226a3f8
	ctx.lr = 0x8226B0C4;
	sub_8226A3F8(ctx, base);
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82086c98
	ctx.lr = 0x8226B0D0;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8226b0e0
	if (!ctx.cr0.eq) goto loc_8226B0E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226b128
	goto loc_8226B128;
loc_8226B0E0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,17409
	ctx.r8.s64 = 17409;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r29,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xF0000000;
	// clrlwi r11,r11,10
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFF;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// rlwimi r9,r8,20,11,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 20) & 0xFFFFFFFFFFDFFFFF) | (ctx.r9.u64 & 0x200000);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// rlwinm r11,r11,0,10,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF03FFFFF;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82268250
	ctx.lr = 0x8226B124;
	sub_82268250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226B128:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8226B130"))) PPC_WEAK_FUNC(sub_8226B130);
PPC_FUNC_IMPL(__imp__sub_8226B130) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8226a9b8
	sub_8226A9B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226B14C"))) PPC_WEAK_FUNC(sub_8226B14C);
PPC_FUNC_IMPL(__imp__sub_8226B14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226B150"))) PPC_WEAK_FUNC(sub_8226B150);
PPC_FUNC_IMPL(__imp__sub_8226B150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8226B158;
	sub_82248788(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8226a3f8
	ctx.lr = 0x8226B198;
	sub_8226A3F8(ctx, base);
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82086c98
	ctx.lr = 0x8226B1A4;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8226b1b4
	if (!ctx.cr0.eq) goto loc_8226B1B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226b1fc
	goto loc_8226B1FC;
loc_8226B1B4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,17409
	ctx.r8.s64 = 17409;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r28,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xF0000000;
	// clrlwi r11,r11,10
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFF;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// rlwimi r9,r8,20,11,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 20) & 0xFFFFFFFFFFDFFFFF) | (ctx.r9.u64 & 0x200000);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// rlwimi r11,r29,22,4,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 22) & 0xFC00000) | (ctx.r11.u64 & 0xFFFFFFFFF03FFFFF);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82268250
	ctx.lr = 0x8226B1F8;
	sub_82268250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226B1FC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8226B204"))) PPC_WEAK_FUNC(sub_8226B204);
PPC_FUNC_IMPL(__imp__sub_8226B204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226B208"))) PPC_WEAK_FUNC(sub_8226B208);
PPC_FUNC_IMPL(__imp__sub_8226B208) {
	PPC_FUNC_PROLOGUE();
	// b 0x8226a2f8
	sub_8226A2F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226B20C"))) PPC_WEAK_FUNC(sub_8226B20C);
PPC_FUNC_IMPL(__imp__sub_8226B20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226B210"))) PPC_WEAK_FUNC(sub_8226B210);
PPC_FUNC_IMPL(__imp__sub_8226B210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8226B218;
	sub_8224878C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8226a3f8
	ctx.lr = 0x8226B25C;
	sub_8226A3F8(ctx, base);
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82086c98
	ctx.lr = 0x8226B268;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8226b278
	if (!ctx.cr0.eq) goto loc_8226B278;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226b2b4
	goto loc_8226B2B4;
loc_8226B278:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,17409
	ctx.r10.s64 = 17409;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwimi r11,r10,20,11,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xFFFFFFFFFFDFFFFF) | (ctx.r11.u64 & 0x200000);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// rlwimi r9,r29,28,0,3
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r29.u32, 28) & 0xF0000000) | (ctx.r9.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// bl 0x82268250
	ctx.lr = 0x8226B2B0;
	sub_82268250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226B2B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8226B2BC"))) PPC_WEAK_FUNC(sub_8226B2BC);
PPC_FUNC_IMPL(__imp__sub_8226B2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226B2C0"))) PPC_WEAK_FUNC(sub_8226B2C0);
PPC_FUNC_IMPL(__imp__sub_8226B2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8226B2C8;
	sub_82248770(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// bl 0x82086c98
	ctx.lr = 0x8226B2FC;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8226b30c
	if (!ctx.cr0.eq) goto loc_8226B30C;
loc_8226B304:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226b3d8
	goto loc_8226B3D8;
loc_8226B30C:
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8226aaf8
	ctx.lr = 0x8226B350;
	sub_8226AAF8(ctx, base);
	// not r11,r29
	ctx.r11.u64 = ~ctx.r29.u64;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// rlwinm r11,r11,28,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF0000000;
	// oris r30,r11,35968
	ctx.r30.u64 = ctx.r11.u64 | 2357198848;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82086c98
	ctx.lr = 0x8226B370;
	sub_82086C98(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8226b388
	if (!ctx.cr0.eq) goto loc_8226B388;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226B380:
	// bl 0x82086968
	ctx.lr = 0x8226B384;
	sub_82086968(ctx, base);
	// b 0x8226b304
	goto loc_8226B304;
loc_8226B388:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b3bc
	if (ctx.cr6.eq) goto loc_8226B3BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82086c98
	ctx.lr = 0x8226B39C;
	sub_82086C98(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne 0x8226b3bc
	if (!ctx.cr0.eq) goto loc_8226B3BC;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82086968
	ctx.lr = 0x8226B3B0;
	sub_82086968(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8226b380
	goto loc_8226B380;
loc_8226B3BC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwimi r11,r29,0,0,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFFF000) | (ctx.r11.u64 & 0xFFFFFFFF00000FFF);
	// rlwimi r22,r10,0,20,31
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r22,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r22.u32);
loc_8226B3D8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8226B3E0"))) PPC_WEAK_FUNC(sub_8226B3E0);
PPC_FUNC_IMPL(__imp__sub_8226B3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8226B3E8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82086c98
	ctx.lr = 0x8226B40C;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8226b41c
	if (!ctx.cr0.eq) goto loc_8226B41C;
loc_8226B414:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226b510
	goto loc_8226B510;
loc_8226B41C:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226adf0
	ctx.lr = 0x8226B440;
	sub_8226ADF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8226b50c
	if (!ctx.cr6.eq) goto loc_8226B50C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x8226b470
	if (ctx.cr6.eq) goto loc_8226B470;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne cr6,0x8226b474
	if (!ctx.cr6.eq) goto loc_8226B474;
loc_8226B470:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8226B474:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227b418
	ctx.lr = 0x8226B484;
	sub_8227B418(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226b49c
	if (!ctx.cr0.eq) goto loc_8226B49C;
loc_8226B48C:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82086968
	ctx.lr = 0x8226B498;
	sub_82086968(ctx, base);
	// b 0x8226b414
	goto loc_8226B414;
loc_8226B49C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// ble cr6,0x8226b4b8
	if (!ctx.cr6.gt) goto loc_8226B4B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8227b3c8
	ctx.lr = 0x8226B4B4;
	sub_8227B3C8(ctx, base);
	// b 0x8226b48c
	goto loc_8226B48C;
loc_8226B4B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8226b500
	if (ctx.cr6.eq) goto loc_8226B500;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwimi r3,r10,0,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r10,7368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7368);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8226b50c
	if (!ctx.cr6.eq) goto loc_8226B50C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,7368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7368, ctx.r10.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r11,r11,15
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFF;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x8226b50c
	goto loc_8226B50C;
loc_8226B500:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r3,r11,0,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_8226B50C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8226B510:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8226B518"))) PPC_WEAK_FUNC(sub_8226B518);
PPC_FUNC_IMPL(__imp__sub_8226B518) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226b550
	if (ctx.cr0.eq) goto loc_8226B550;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// bl 0x8226a1f8
	ctx.lr = 0x8226B54C;
	sub_8226A1F8(ctx, base);
	// b 0x8226b594
	goto loc_8226B594;
loc_8226B550:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,29,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8226B594:
	// li r11,4
	ctx.r11.s64 = 4;
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

__attribute__((alias("__imp__sub_8226B5B0"))) PPC_WEAK_FUNC(sub_8226B5B0);
PPC_FUNC_IMPL(__imp__sub_8226B5B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// rlwinm r6,r11,4,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// rlwinm r5,r11,10,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3F;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8226a9b8
	sub_8226A9B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226B5D4"))) PPC_WEAK_FUNC(sub_8226B5D4);
PPC_FUNC_IMPL(__imp__sub_8226B5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226B5D8"))) PPC_WEAK_FUNC(sub_8226B5D8);
PPC_FUNC_IMPL(__imp__sub_8226B5D8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// bl 0x8226a2f8
	ctx.lr = 0x8226B600;
	sub_8226A2F8(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
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

__attribute__((alias("__imp__sub_8226B61C"))) PPC_WEAK_FUNC(sub_8226B61C);
PPC_FUNC_IMPL(__imp__sub_8226B61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226B620"))) PPC_WEAK_FUNC(sub_8226B620);
PPC_FUNC_IMPL(__imp__sub_8226B620) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// b 0x8226aa48
	sub_8226AA48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226B63C"))) PPC_WEAK_FUNC(sub_8226B63C);
PPC_FUNC_IMPL(__imp__sub_8226B63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226B640"))) PPC_WEAK_FUNC(sub_8226B640);
PPC_FUNC_IMPL(__imp__sub_8226B640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8226B648;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3224
	ctx.r11.s64 = ctx.r4.s64 + 3224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r28,r29,r3
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// beq cr6,0x8226b748
	if (ctx.cr6.eq) goto loc_8226B748;
	// lwz r27,48(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r7,32(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r9,r27,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 12) & 0xFFF;
	// lwz r26,44(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// rlwinm r10,r7,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFF;
	// lwz r25,28(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// lwz r24,36(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lwz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r30,r7,3
	ctx.r30.u64 = ctx.r7.u32 & 0x1FFFFFFF;
	// lwz r21,12(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r9,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// lwz r20,20(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r3,r10,0,19,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lwz r23,40(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// add r9,r31,r4
	ctx.r9.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r27,0,3,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1FFFFE00;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwimi r10,r4,0,30,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFFFFFFFC03) | (ctx.r10.u64 & 0x3FC);
	// lbz r8,12332(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12332);
	// rlwimi r25,r22,0,10,21
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r22.u32, 0) & 0x3FFC00) | (ctx.r25.u64 & 0xFFFFFFFFFFC003FF);
	// rlwimi r3,r27,0,20,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0x800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// rlwimi r23,r21,0,1,12
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r21.u32, 0) & 0x7FF80000) | (ctx.r23.u64 & 0xFFFFFFFF8007FFFF);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// rlwimi r7,r20,0,23,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r20.u32, 0) & 0x1FF) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFE00);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// rlwinm r4,r26,30,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0xF;
	// stw r23,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r23.u32);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8226b710
	if (!ctx.cr6.gt) goto loc_8226B710;
	// rotlwi r8,r26,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// rlwinm r8,r8,30,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xF;
loc_8226B710:
	// lwz r7,44(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// rlwimi r10,r8,2,26,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0x3C) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC3);
	// lbz r9,12358(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12358);
	// rlwinm r8,r7,26,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xF;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8226b730
	if (!ctx.cr6.lt) goto loc_8226B730;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8226B730:
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rlwimi r10,r9,6,22,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0x3C0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC3F);
	// or r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// b 0x8226b754
	goto loc_8226B754;
loc_8226B748:
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8226B754:
	// stwx r5,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r5.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8226b7c4
	if (ctx.cr6.eq) goto loc_8226B7C4;
	// lwz r11,11036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226b774
	if (ctx.cr6.eq) goto loc_8226B774;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// b 0x8226b7c4
	goto loc_8226B7C4;
loc_8226B774:
	// lwz r11,11040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11040);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226b7c4
	if (ctx.cr0.eq) goto loc_8226B7C4;
	// lwz r11,13916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13916);
	// lwz r3,13912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13912);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8226b79c
	if (ctx.cr6.lt) goto loc_8226B79C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82279040
	ctx.lr = 0x8226B79C;
	sub_82279040(ctx, base);
loc_8226B79C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r28,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,13912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13912, ctx.r9.u32);
loc_8226B7C4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8226B7CC"))) PPC_WEAK_FUNC(sub_8226B7CC);
PPC_FUNC_IMPL(__imp__sub_8226B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226B7D0"))) PPC_WEAK_FUNC(sub_8226B7D0);
PPC_FUNC_IMPL(__imp__sub_8226B7D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 30, ctx.xer);
	// beq cr6,0x8226b814
	if (ctx.cr6.eq) goto loc_8226B814;
	// cmplwi cr6,r3,31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 31, ctx.xer);
	// beq cr6,0x8226b814
	if (ctx.cr6.eq) goto loc_8226B814;
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// beq cr6,0x8226b814
	if (ctx.cr6.eq) goto loc_8226B814;
	// cmplwi cr6,r3,36
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 36, ctx.xer);
	// beq cr6,0x8226b814
	if (ctx.cr6.eq) goto loc_8226B814;
	// cmplwi cr6,r3,37
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 37, ctx.xer);
	// beq cr6,0x8226b814
	if (ctx.cr6.eq) goto loc_8226B814;
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x8226b814
	if (ctx.cr6.eq) goto loc_8226B814;
	// cmplwi cr6,r3,57
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 57, ctx.xer);
	// beq cr6,0x8226b814
	if (ctx.cr6.eq) goto loc_8226B814;
	// cmplwi cr6,r3,63
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 63, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8226B814:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226B81C"))) PPC_WEAK_FUNC(sub_8226B81C);
PPC_FUNC_IMPL(__imp__sub_8226B81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226B820"))) PPC_WEAK_FUNC(sub_8226B820);
PPC_FUNC_IMPL(__imp__sub_8226B820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vor128 v60,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,11136
	ctx.r11.s64 = ctx.r11.s64 + 11136;
	// addi r10,r10,11120
	ctx.r10.s64 = ctx.r10.s64 + 11120;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,11104
	ctx.r9.s64 = ctx.r9.s64 + 11104;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v59,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v0,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// vspltw128 v56,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v55,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vmulfp128 v59,v60,v59
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v58,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v57,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vcmpgtfp128 v12,v56,v60
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vspltw128 v9,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// vcmpgtfp128 v7,v55,v60
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vcmpgtfp128 v8,v62,v60
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vspltw128 v4,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v11,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vrfin128 v62,v59
	simde_mm_store_ps(ctx.v62.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v59.f32), SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC));
	// vmulfp128 v61,v62,v58
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vmulfp128 v59,v62,v57
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v13,v62,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrfiz128 v10,v61
	simde_mm_store_ps(ctx.v10.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v61.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vrfiz128 v5,v59
	simde_mm_store_ps(ctx.v5.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v59.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vrfiz128 v6,v63
	simde_mm_store_ps(ctx.v6.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v63.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vmaddfp v9,v10,v0,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v10,v5,v0,v4
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v11,v6,v0,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vsel v12,v10,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v0,v12,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vsel v1,v0,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vrlimi128 v1,v60,1,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 1));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226B8C4"))) PPC_WEAK_FUNC(sub_8226B8C4);
PPC_FUNC_IMPL(__imp__sub_8226B8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226B8C8"))) PPC_WEAK_FUNC(sub_8226B8C8);
PPC_FUNC_IMPL(__imp__sub_8226B8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226b8e0
	if (ctx.cr0.eq) goto loc_8226B8E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8226b924
	goto loc_8226B924;
loc_8226B8E0:
	// rlwinm r11,r10,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r11,113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 113, ctx.xer);
	// blt cr6,0x8226b900
	if (ctx.cr6.lt) goto loc_8226B900;
	// rlwinm r11,r10,0,5,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7800000;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x8226b924
	goto loc_8226B924;
loc_8226B900:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,9
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFF;
	// subfic r11,r11,113
	ctx.xer.ca = ctx.r11.u32 <= 113;
	ctx.r11.s64 = 113 - ctx.r11.s64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
loc_8226B924:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226B930"))) PPC_WEAK_FUNC(sub_8226B930);
PPC_FUNC_IMPL(__imp__sub_8226B930) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8226b998
	if (!ctx.cr6.eq) goto loc_8226B998;
	// lhz r11,10376(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10376);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226b9f0
	if (!ctx.cr0.eq) goto loc_8226B9F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,21040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21040);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,11152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8226b9e8
	goto loc_8226B9E8;
loc_8226B998:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r11,r11,1,25,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x7E;
	// addi r10,r10,10880
	ctx.r10.s64 = ctx.r10.s64 + 10880;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226b9f0
	if (!ctx.cr0.eq) goto loc_8226B9F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,21040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21040);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8226B9E8:
	// or r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 | ctx.r31.u64;
	// b 0x8226b9fc
	goto loc_8226B9FC;
loc_8226B9F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8226b8c8
	ctx.lr = 0x8226B9F8;
	sub_8226B8C8(ctx, base);
	// rlwinm r11,r3,11,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0x7FF;
loc_8226B9FC:
	// lbz r10,10562(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10562);
	// lwz r9,10560(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10560);
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// stw r3,10796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10796, ctx.r3.u32);
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r9,6,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x800;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10792, ctx.r11.u32);
	// ld r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// std r11,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_8226BA50"))) PPC_WEAK_FUNC(sub_8226BA50);
PPC_FUNC_IMPL(__imp__sub_8226BA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8226BA58;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,32
	ctx.r29.s64 = 32;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8226bb40
	if (ctx.cr6.eq) goto loc_8226BB40;
	// rlwinm r9,r4,29,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r6,-64
	ctx.r6.s64 = -64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// or r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 | ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8226BABC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm. r11,r7,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8226bb30
	if (!ctx.cr0.gt) goto loc_8226BB30;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bge cr6,0x8226bb30
	if (!ctx.cr6.lt) goto loc_8226BB30;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bgt cr6,0x8226baf0
	if (ctx.cr6.gt) goto loc_8226BAF0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8226BAF0:
	// cmpwi cr6,r9,254
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 254, ctx.xer);
	// bge cr6,0x8226bb08
	if (!ctx.cr6.lt) goto loc_8226BB08;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8226bb0c
	if (ctx.cr6.gt) goto loc_8226BB0C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x8226bb0c
	goto loc_8226BB0C;
loc_8226BB08:
	// li r11,254
	ctx.r11.s64 = 254;
loc_8226BB0C:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// rlwinm r7,r7,0,9,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF807FFFFF;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stvx128 v127,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwx r11,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u32);
	// lvx128 v127,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8226BB30:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8226babc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226BABC;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8226BB40:
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// bgt cr6,0x8226bea0
	if (ctx.cr6.gt) goto loc_8226BEA0;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,11072
	ctx.r12.s64 = ctx.r12.s64 + 11072;
	// lbzx r0,r12,r31
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r31.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// nop 
	// addi r12,r12,-17552
	ctx.r12.s64 = ctx.r12.s64 + -17552;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// vor128 v1,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// bl 0x8226b820
	ctx.lr = 0x8226BB78;
	sub_8226B820(ctx, base);
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// cmplwi cr6,r31,10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x8226bb8c
	if (ctx.cr6.eq) goto loc_8226BB8C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8226BB8C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,11204
	ctx.r10.s64 = ctx.r10.s64 + 11204;
	// addi r9,r9,11200
	ctx.r9.s64 = ctx.r9.s64 + 11200;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// slw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r10.u8 & 0x3F));
	// lfs f0,2144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mulli r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 * 3;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v127,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaxfp128 v62,v62,v61
	simde_mm_store_ps(ctx.v62.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vminfp128 v63,v63,v62
	simde_mm_store_ps(ctx.v63.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vrfin128 v63,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v63.f32), SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC));
	// vcfpsxws128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r5,r9
	ea = ctx.r5.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_8226BC58:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8226bea4
	goto loc_8226BEA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,27092
	ctx.r11.s64 = ctx.r11.s64 + 27092;
	// addi r10,r10,7948
	ctx.r10.s64 = ctx.r10.s64 + 7948;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r9,r9,2144
	ctx.r9.s64 = ctx.r9.s64 + 2144;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r8,11184
	ctx.r10.s64 = ctx.r8.s64 + 11184;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r11,r11,8960
	ctx.r11.s64 = ctx.r11.s64 + 8960;
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r8,11168
	ctx.r8.s64 = ctx.r8.s64 + 11168;
	// vmulfp128 v60,v127,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp128 v62,v62,v60
	simde_mm_store_ps(ctx.v62.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vminfp128 v12,v61,v62
	simde_mm_store_ps(ctx.v12.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmaddfp v0,v12,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vrfin128 v62,v0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v0.f32), SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC));
	// vcfpsxws128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// vxor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// bne cr6,0x8226bd14
	if (!ctx.cr6.eq) goto loc_8226BD14;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r29,64
	ctx.r29.s64 = 64;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// b 0x8226bea4
	goto loc_8226BEA4;
loc_8226BD14:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x8226bc58
	goto loc_8226BC58;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_8226BD34:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r4,-124
	ctx.r4.s64 = -124;
	// lfsx f1,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822520c0
	ctx.lr = 0x8226BD44;
	sub_822520C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// rlwinm. r10,r11,0,1,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x8226bd7c
	if (ctx.cr0.eq) goto loc_8226BD7C;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1023
	ctx.r11.s64 = 1023;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8226bd80
	if (ctx.cr6.lt) goto loc_8226BD80;
	// li r11,511
	ctx.r11.s64 = 511;
	// b 0x8226bd80
	goto loc_8226BD80;
loc_8226BD7C:
	// rlwinm r11,r11,16,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3FF;
loc_8226BD80:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,12
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 12, ctx.xer);
	// blt cr6,0x8226bd34
	if (ctx.cr6.lt) goto loc_8226BD34;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,8332(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8226bdbc
	if (!ctx.cr6.gt) goto loc_8226BDBC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8226bdc0
	goto loc_8226BDC0;
loc_8226BDBC:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_8226BDC0:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8226bdd8
	if (!ctx.cr6.lt) goto loc_8226BDD8;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8226bddc
	if (ctx.cr6.gt) goto loc_8226BDDC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8226bddc
	goto loc_8226BDDC;
loc_8226BDD8:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_8226BDDC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f13,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// b 0x8226bc58
	goto loc_8226BC58;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vpkd3d128 v63,v127,3,1,3
	ctx.fpscr.enableFlushModeUnconditional();
	__builtin_debugtrap();
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x8226bc58
	goto loc_8226BC58;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r29,64
	ctx.r29.s64 = 64;
	// vpkd3d128 v63,v127,5,2,2
	temp.u32 = (ctx.v127.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v127.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v127.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[4] |= ((ctx.v127.u32[0]&0x80000000)>>16);
	temp.u32 = (ctx.v127.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v127.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v127.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[5] |= ((ctx.v127.u32[1]&0x80000000)>>16);
	temp.u32 = (ctx.v127.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v127.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v127.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[6] |= ((ctx.v127.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v127.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v127.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v127.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[7] |= ((ctx.v127.u32[3]&0x80000000)>>16);
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x8226bea4
	goto loc_8226BEA4;
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x8226bea4
	goto loc_8226BEA4;
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r29,64
	ctx.r29.s64 = 64;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// b 0x8226bea4
	goto loc_8226BEA4;
loc_8226BEA0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8226BEA4:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8226BEC4"))) PPC_WEAK_FUNC(sub_8226BEC4);
PPC_FUNC_IMPL(__imp__sub_8226BEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226BEC8"))) PPC_WEAK_FUNC(sub_8226BEC8);
PPC_FUNC_IMPL(__imp__sub_8226BEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8226BED0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8226bee8
	if (!ctx.cr6.eq) goto loc_8226BEE8;
	// addi r11,r3,10372
	ctx.r11.s64 = ctx.r3.s64 + 10372;
	// b 0x8226bef4
	goto loc_8226BEF4;
loc_8226BEE8:
	// addi r11,r5,2594
	ctx.r11.s64 = ctx.r5.s64 + 2594;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8226BEF4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rlwinm r3,r11,16,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// bne cr6,0x8226bf18
	if (!ctx.cr6.eq) goto loc_8226BF18;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// bl 0x8226ba50
	ctx.lr = 0x8226BF14;
	sub_8226BA50(ctx, base);
	// b 0x8226bf7c
	goto loc_8226BF7C;
loc_8226BF18:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r10,11088
	ctx.r8.s64 = ctx.r10.s64 + 11088;
	// addi r10,r11,10880
	ctx.r10.s64 = ctx.r11.s64 + 10880;
	// clrlwi r11,r9,26
	ctx.r11.u64 = ctx.r9.u32 & 0x3F;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// lbzx r8,r3,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// bne cr6,0x8226bf4c
	if (!ctx.cr6.eq) goto loc_8226BF4C;
	// li r11,7
	ctx.r11.s64 = 7;
loc_8226BF4C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8226ba50
	ctx.lr = 0x8226BF6C;
	sub_8226BA50(ctx, base);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x8226bf7c
	if (!ctx.cr6.gt) goto loc_8226BF7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8226BF7C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,10800(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10800, ctx.r11.u32);
	// stw r10,10804(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10804, ctx.r10.u32);
	// ld r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// ori r11,r11,192
	ctx.r11.u64 = ctx.r11.u64 | 192;
	// std r11,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8226BFA0"))) PPC_WEAK_FUNC(sub_8226BFA0);
PPC_FUNC_IMPL(__imp__sub_8226BFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8226BFA8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r27,32(r3)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// li r26,0
	ctx.r26.s64 = 0;
	// ld r28,24(r3)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// ld r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ld r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// beq cr6,0x8226bfe0
	if (ctx.cr6.eq) goto loc_8226BFE0;
	// addi r6,r3,1920
	ctx.r6.s64 = ctx.r3.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x8227bf60
	ctx.lr = 0x8226BFDC;
	sub_8227BF60(ctx, base);
	// std r26,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r26.u64);
loc_8226BFE0:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// beq cr6,0x8226c000
	if (ctx.cr6.eq) goto loc_8226C000;
	// addi r6,r31,6016
	ctx.r6.s64 = ctx.r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bf60
	ctx.lr = 0x8226BFFC;
	sub_8227BF60(ctx, base);
	// std r26,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r26.u64);
loc_8226C000:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x8226c0e0
	if (ctx.cr6.eq) goto loc_8226C0E0;
	// rlwinm r11,r30,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c024
	if (ctx.cr6.eq) goto loc_8226C024;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ccf8
	ctx.lr = 0x8226C020;
	sub_8227CCF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8226C024:
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c048
	if (ctx.cr6.eq) goto loc_8226C048;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b838
	ctx.lr = 0x8226C044;
	sub_8227B838(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8226C048:
	// clrldi r11,r30,52
	ctx.r11.u64 = ctx.r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c068
	if (ctx.cr6.eq) goto loc_8226C068;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8226C068;
	sub_8227BBC8(ctx, base);
loc_8226C068:
	// rlwinm r11,r30,0,15,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c088
	if (ctx.cr6.eq) goto loc_8226C088;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8226C088;
	sub_8227BBC8(ctx, base);
loc_8226C088:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c0b4
	if (ctx.cr6.eq) goto loc_8226C0B4;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8226C0B4;
	sub_8227BBC8(ctx, base);
loc_8226C0B4:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c0dc
	if (ctx.cr6.eq) goto loc_8226C0DC;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8226C0DC;
	sub_8227BBC8(ctx, base);
loc_8226C0DC:
	// std r26,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r26.u64);
loc_8226C0E0:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, 0, ctx.xer);
	// beq cr6,0x8226c130
	if (ctx.cr6.eq) goto loc_8226C130;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c100
	if (ctx.cr6.eq) goto loc_8226C100;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227be08
	ctx.lr = 0x8226C100;
	sub_8227BE08(ctx, base);
loc_8226C100:
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	ctx.r11.u64 = ctx.r28.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c12c
	if (ctx.cr6.eq) goto loc_8226C12C;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8226C12C;
	sub_8227BBC8(ctx, base);
loc_8226C12C:
	// std r26,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r26.u64);
loc_8226C130:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, 0, ctx.xer);
	// beq cr6,0x8226c1f4
	if (ctx.cr6.eq) goto loc_8226C1F4;
	// li r12,255
	ctx.r12.s64 = 255;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c160
	if (ctx.cr6.eq) goto loc_8226C160;
	// addi r6,r31,10832
	ctx.r6.s64 = ctx.r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8226C160;
	sub_8227BBC8(ctx, base);
loc_8226C160:
	// li r12,63
	ctx.r12.s64 = 63;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c180
	if (ctx.cr6.eq) goto loc_8226C180;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bc88
	ctx.lr = 0x8226C180;
	sub_8227BC88(ctx, base);
loc_8226C180:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c1a8
	if (ctx.cr6.eq) goto loc_8226C1A8;
	// addi r6,r31,10112
	ctx.r6.s64 = ctx.r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8226C1A8;
	sub_8227BBC8(ctx, base);
loc_8226C1A8:
	// clrldi r11,r27,26
	ctx.r11.u64 = ctx.r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c1c8
	if (ctx.cr6.eq) goto loc_8226C1C8;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8226C1C8;
	sub_8227BBC8(ctx, base);
loc_8226C1C8:
	// rldicr r11,r27,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c1f0
	if (ctx.cr6.eq) goto loc_8226C1F0;
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8226c1e8
	if (!ctx.cr0.eq) goto loc_8226C1E8;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226c1f0
	if (ctx.cr0.eq) goto loc_8226C1F0;
loc_8226C1E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d928
	ctx.lr = 0x8226C1F0;
	sub_8226D928(ctx, base);
loc_8226C1F0:
	// std r26,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r26.u64);
loc_8226C1F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8226C1FC"))) PPC_WEAK_FUNC(sub_8226C1FC);
PPC_FUNC_IMPL(__imp__sub_8226C1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226C200"))) PPC_WEAK_FUNC(sub_8226C200);
PPC_FUNC_IMPL(__imp__sub_8226C200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x8226C208;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r7.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// stw r10,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r10.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// rlwinm. r11,r4,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// beq 0x8226c25c
	if (ctx.cr0.eq) goto loc_8226C25C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// lwz r11,7376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226c260
	if (ctx.cr6.eq) goto loc_8226C260;
loc_8226C25C:
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
loc_8226C260:
	// rlwinm. r11,r21,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226c27c
	if (ctx.cr0.eq) goto loc_8226C27C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// lwz r11,7380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226c280
	if (ctx.cr6.eq) goto loc_8226C280;
loc_8226C27C:
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
loc_8226C280:
	// clrlwi r11,r21,29
	ctx.r11.u64 = ctx.r21.u32 & 0x7;
	// rlwinm. r10,r21,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x70;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bne 0x8226c2d8
	if (!ctx.cr0.eq) goto loc_8226C2D8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8226c2a0
	if (!ctx.cr6.eq) goto loc_8226C2A0;
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// b 0x8226c2ac
	goto loc_8226C2AC;
loc_8226C2A0:
	// addi r11,r11,3198
	ctx.r11.s64 = ctx.r11.s64 + 3198;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_8226C2AC:
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226c2c4
	if (!ctx.cr6.eq) goto loc_8226C2C4;
	// ori r21,r21,16
	ctx.r21.u64 = ctx.r21.u64 | 16;
	// b 0x8226c2d8
	goto loc_8226C2D8;
loc_8226C2C4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8226c2d4
	if (!ctx.cr6.eq) goto loc_8226C2D4;
	// ori r21,r21,80
	ctx.r21.u64 = ctx.r21.u64 | 80;
	// b 0x8226c2d8
	goto loc_8226C2D8;
loc_8226C2D4:
	// ori r21,r21,112
	ctx.r21.u64 = ctx.r21.u64 | 112;
loc_8226C2D8:
	// lwz r17,476(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x8226c2fc
	if (!ctx.cr6.eq) goto loc_8226C2FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-11248
	ctx.r11.s64 = ctx.r11.s64 + -11248;
	// addi r17,r1,208
	ctx.r17.s64 = ctx.r1.s64 + 208;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8226C2FC:
	// lwz r11,40(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 40);
	// lwz r10,48(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 48);
	// rlwinm r11,r11,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x2;
	// lwz r9,36(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 36);
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// beq cr6,0x8226c328
	if (ctx.cr6.eq) goto loc_8226C328;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
	// rlwinm r9,r9,19,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FFF;
	// b 0x8226c334
	goto loc_8226C334;
loc_8226C328:
	// clrlwi r10,r9,21
	ctx.r10.u64 = ctx.r9.u32 & 0x7FF;
	// li r22,8
	ctx.r22.s64 = 8;
	// rlwinm r9,r9,21,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x7FF;
loc_8226C334:
	// lwz r30,32(r15)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r15.u32 + 32);
	// add r24,r9,r11
	ctx.r24.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// clrlwi r3,r30,26
	ctx.r3.u64 = ctx.r30.u32 & 0x3F;
	// bl 0x82269710
	ctx.lr = 0x8226C358;
	sub_82269710(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r9,r30,1,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x7E;
	// lwz r8,28(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28);
	// addi r11,r11,10880
	ctx.r11.s64 = ctx.r11.s64 + 10880;
	// lwz r20,468(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// rlwinm r10,r30,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,15,18,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x3FE0;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// addi r27,r15,28
	ctx.r27.s64 = ctx.r15.s64 + 28;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lbzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r30,156(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// rlwinm r28,r9,29,3,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// divwu r19,r8,r11
	ctx.r19.u32 = ctx.r8.u32 / ctx.r11.u32;
	// twllei r11,0
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// bne cr6,0x8226c3b4
	if (!ctx.cr6.eq) goto loc_8226C3B4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8226c408
	if (ctx.cr6.eq) goto loc_8226C408;
loc_8226C3B4:
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// andc r4,r20,r11
	ctx.r4.u64 = ctx.r20.u64 & ~ctx.r11.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8226a3f8
	ctx.lr = 0x8226C3F4;
	sub_8226A3F8(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// twllei r28,0
	// divwu r19,r11,r28
	ctx.r19.u32 = ctx.r11.u32 / ctx.r28.u32;
	// lwz r24,128(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8226C408:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8226c428
	if (!ctx.cr6.eq) goto loc_8226C428;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r23,r1,192
	ctx.r23.s64 = ctx.r1.s64 + 192;
	// stw r24,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r24.u32);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// stw r25,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r25.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
loc_8226C428:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8226c438
	if (!ctx.cr6.eq) goto loc_8226C438;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,11208
	ctx.r29.s64 = ctx.r11.s64 + 11208;
loc_8226C438:
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// twllei r30,0
	// addi r7,r11,512
	ctx.r7.s64 = ctx.r11.s64 + 512;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r5,r9,r24
	ctx.r5.s64 = ctx.r24.s64 - ctx.r9.s64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r4,40(r15)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r15.u32 + 40);
	// subf r6,r6,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r6.s64;
	// lwz r29,32(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 32);
	// mullw r8,r9,r19
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r19.s32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r9,r6,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// mullw r10,r8,r28
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// rlwinm r6,r4,0,28,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xE;
	// divwu r8,r5,r30
	ctx.r8.u32 = ctx.r5.u32 / ctx.r30.u32;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrlwi r30,r29,26
	ctx.r30.u64 = ctx.r29.u32 & 0x3F;
	// addic r7,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// add r26,r8,r11
	ctx.r26.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r18,r10,r9
	ctx.r18.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r27,r21,6,26,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 6) & 0x3F;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r14,r3,30,30,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3;
	// subfe r25,r7,r6
	temp.u8 = (~ctx.r7.u32 + ctx.r6.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r25.u64 = ~ctx.r7.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r30,54
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 54, ctx.xer);
	// bne cr6,0x8226c4c0
	if (!ctx.cr6.eq) goto loc_8226C4C0;
	// li r30,7
	ctx.r30.s64 = 7;
	// b 0x8226c52c
	goto loc_8226C52C;
loc_8226C4C0:
	// cmplwi cr6,r30,55
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 55, ctx.xer);
	// bne cr6,0x8226c4d0
	if (!ctx.cr6.eq) goto loc_8226C4D0;
	// li r30,16
	ctx.r30.s64 = 16;
	// b 0x8226c52c
	goto loc_8226C52C;
loc_8226C4D0:
	// cmplwi cr6,r30,56
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 56, ctx.xer);
	// bne cr6,0x8226c4e0
	if (!ctx.cr6.eq) goto loc_8226C4E0;
	// li r30,17
	ctx.r30.s64 = 17;
	// b 0x8226c52c
	goto loc_8226C52C;
loc_8226C4E0:
	// cmplwi cr6,r30,27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 27, ctx.xer);
	// bne cr6,0x8226c4f0
	if (!ctx.cr6.eq) goto loc_8226C4F0;
	// li r30,30
	ctx.r30.s64 = 30;
	// b 0x8226c52c
	goto loc_8226C52C;
loc_8226C4F0:
	// cmplwi cr6,r30,28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 28, ctx.xer);
	// bne cr6,0x8226c500
	if (!ctx.cr6.eq) goto loc_8226C500;
	// li r30,31
	ctx.r30.s64 = 31;
	// b 0x8226c52c
	goto loc_8226C52C;
loc_8226C500:
	// cmplwi cr6,r30,29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 29, ctx.xer);
	// bne cr6,0x8226c510
	if (!ctx.cr6.eq) goto loc_8226C510;
	// li r30,32
	ctx.r30.s64 = 32;
	// b 0x8226c52c
	goto loc_8226C52C;
loc_8226C510:
	// cmplwi cr6,r30,22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 22, ctx.xer);
	// beq cr6,0x8226c528
	if (ctx.cr6.eq) goto loc_8226C528;
	// cmplwi cr6,r30,23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 23, ctx.xer);
	// beq cr6,0x8226c528
	if (ctx.cr6.eq) goto loc_8226C528;
	// cmplwi cr6,r30,50
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 50, ctx.xer);
	// bne cr6,0x8226c52c
	if (!ctx.cr6.eq) goto loc_8226C52C;
loc_8226C528:
	// li r30,6
	ctx.r30.s64 = 6;
loc_8226C52C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// addi r11,r14,-1
	ctx.r11.s64 = ctx.r14.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// bne cr6,0x8226c548
	if (!ctx.cr6.eq) goto loc_8226C548;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// b 0x8226c54c
	goto loc_8226C54C;
loc_8226C548:
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8226C54C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226b7d0
	ctx.lr = 0x8226C554;
	sub_8226B7D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8226c560
	if (ctx.cr0.eq) goto loc_8226C560;
	// li r28,7
	ctx.r28.s64 = 7;
loc_8226C560:
	// rlwimi r27,r25,8,23,23
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r25.u32, 8) & 0x100) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFEFF);
	// lwz r11,48(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 48);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// andi. r9,r27,319
	ctx.r9.u64 = ctx.r27.u64 & 319;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwimi r28,r9,3,0,28
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r9.u32, 3) & 0xFFFFFFF8) | (ctx.r28.u64 & 0xFFFFFFFF00000007);
	// rlwinm r6,r11,0,21,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// rlwimi r10,r28,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r28.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// rlwinm r8,r26,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0x3FFF0000;
	// clrlwi r9,r19,18
	ctx.r9.u64 = ctx.r19.u32 & 0x3FFF;
	// rlwinm r7,r29,26,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 26) & 0x3;
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 | ctx.r7.u64;
	// cmplwi cr6,r6,1024
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1024, ctx.xer);
	// bne cr6,0x8226c5c4
	if (!ctx.cr6.eq) goto loc_8226C5C4;
	// addi r10,r22,-1
	ctx.r10.s64 = ctx.r22.s64 + -1;
	// mullw r9,r19,r24
	ctx.r9.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r24.s32);
	// stw r9,10820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10820, ctx.r9.u32);
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// and r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 & ctx.r20.u64;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// rlwinm r10,r10,4,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x70;
	// std r9,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r9.u64);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_8226C5C4:
	// rlwinm. r10,r21,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq 0x8226c5d8
	if (ctx.cr0.eq) goto loc_8226C5D8;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x8226c5f8
	goto loc_8226C5F8;
loc_8226C5D8:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8226c5ec
	if (!ctx.cr6.eq) goto loc_8226C5EC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8226c5f8
	goto loc_8226C5F8;
loc_8226C5EC:
	// cmplwi cr6,r30,61
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 61, ctx.xer);
	// bne cr6,0x8226c5f8
	if (!ctx.cr6.eq) goto loc_8226C5F8;
	// li r9,2
	ctx.r9.s64 = 2;
loc_8226C5F8:
	// stw r11,10788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10788, ctx.r11.u32);
	// andi. r10,r21,887
	ctx.r10.u64 = ctx.r21.u64 & 887;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r9,20,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x300000;
	// stw r18,10780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10780, ctx.r18.u32);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r8,10784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10784, ctx.r8.u32);
	// lwz r29,500(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// li r20,-1
	ctx.r20.s64 = -1;
	// or r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r30,61
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 61, ctx.xer);
	// stw r28,10776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10776, ctx.r28.u32);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// bne cr6,0x8226c6f8
	if (!ctx.cr6.eq) goto loc_8226C6F8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8226c6c0
	if (ctx.cr6.eq) goto loc_8226C6C0;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lbz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 28);
	// lbz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 32);
	// rlwimi r8,r9,4,25,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0x70) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF8F);
	// lbz r7,31(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 31);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r6,35(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 35);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r8,r8,4,21,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x7F0;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// lbz r7,30(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 30);
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// lbz r6,34(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 34);
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// lbz r4,29(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 29);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r3,33(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 33);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r8,r5,29
	ctx.r8.u64 = ctx.r5.u32 & 0x7;
	// rlwinm r7,r11,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r10,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 | ctx.r4.u64;
	// or r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 | ctx.r3.u64;
	// b 0x8226c6d0
	goto loc_8226C6D0;
loc_8226C6C0:
	// lis r10,-32640
	ctx.r10.s64 = -2139095040;
	// li r11,4369
	ctx.r11.s64 = 4369;
	// ori r10,r10,32896
	ctx.r10.u64 = ctx.r10.u64 | 32896;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
loc_8226C6D0:
	// stw r11,10808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10808, ctx.r11.u32);
	// stw r10,10812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10812, ctx.r10.u32);
	// stw r9,10816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10816, ctx.r9.u32);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ori r11,r11,60
	ctx.r11.u64 = ctx.r11.u64 | 60;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ori r11,r11,30
	ctx.r11.u64 = ctx.r11.u64 | 30;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ori r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 15;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_8226C6F8:
	// rlwinm. r26,r21,0,22,22
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8226c714
	if (ctx.cr0.eq) goto loc_8226C714;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,492(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8226b930
	ctx.lr = 0x8226C714;
	sub_8226B930(ctx, base);
loc_8226C714:
	// rlwinm. r11,r21,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226c730
	if (ctx.cr0.eq) goto loc_8226C730;
	// clrlwi r5,r28,29
	ctx.r5.u64 = ctx.r28.u32 & 0x7;
	// lvx128 v1,r0,r17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r17.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226bec8
	ctx.lr = 0x8226C730;
	sub_8226BEC8(ctx, base);
loc_8226C730:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r11,10436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10436);
	// lwz r27,0(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r8,r11,17,0,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// lwz r25,4(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r24,r9,0,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// srawi r9,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 17;
	// rlwinm r23,r10,0,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8226c79c
	if (ctx.cr6.lt) goto loc_8226C79C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 17;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226c79c
	if (ctx.cr6.lt) goto loc_8226C79C;
	// lwz r11,10440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10440);
	// rlwinm r10,r11,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// srawi r10,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 17;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8226c79c
	if (ctx.cr6.gt) goto loc_8226C79C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 17;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8226c7b8
	if (!ctx.cr6.gt) goto loc_8226C7B8;
loc_8226C79C:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226f758
	ctx.lr = 0x8226C7B4;
	sub_8226F758(ctx, base);
	// li r22,1
	ctx.r22.s64 = 1;
loc_8226C7B8:
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226c970
	if (!ctx.cr6.eq) goto loc_8226C970;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x8226c8e4
	if (ctx.cr6.eq) goto loc_8226C8E4;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c7f0
	if (ctx.cr6.eq) goto loc_8226C7F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// bl 0x8227b838
	ctx.lr = 0x8226C7EC;
	sub_8227B838(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
loc_8226C7F0:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8226c820
	if (ctx.cr6.eq) goto loc_8226C820;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8226C814;
	sub_8227BBC8(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8226C820:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8226c858
	if (ctx.cr6.eq) goto loc_8226C858;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8226C844;
	sub_8227BBC8(ctx, base);
	// lis r12,-2
	ctx.r12.s64 = -131072;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,4095
	ctx.r12.u64 = ctx.r12.u64 | 4095;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8226C858:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8226c8a0
	if (ctx.cr6.eq) goto loc_8226C8A0;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8226C888;
	sub_8227BBC8(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8226C8A0:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8226c8e4
	if (ctx.cr6.eq) goto loc_8226C8E4;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8226C8CC;
	sub_8227BBC8(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,21,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8226C8E4:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c934
	if (ctx.cr6.eq) goto loc_8226C934;
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8226c934
	if (ctx.cr6.eq) goto loc_8226C934;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8226C91C;
	sub_8227BBC8(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_8226C934:
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8226c9ac
	if (ctx.cr6.eq) goto loc_8226C9AC;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8226c9ac
	if (ctx.cr6.eq) goto loc_8226C9AC;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8226C960;
	sub_8227BBC8(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// b 0x8226c9ac
	goto loc_8226C9AC;
loc_8226C970:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226bfa0
	ctx.lr = 0x8226C97C;
	sub_8226BFA0(ctx, base);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8226c9ac
	if (ctx.cr6.eq) goto loc_8226C9AC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226c99c
	if (!ctx.cr6.gt) goto loc_8226C99C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x8226C99C;
	sub_82277C20(ctx, base);
loc_8226C99C:
	// li r11,8450
	ctx.r11.s64 = 8450;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r16,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r16.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_8226C9AC:
	// lbz r11,11068(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8226c9c0
	if (ctx.cr0.eq) goto loc_8226C9C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8226ca50
	goto loc_8226CA50;
loc_8226C9C0:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226ca48
	if (ctx.cr0.eq) goto loc_8226CA48;
	// lwz r11,12792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12792);
	// lwz r10,13080(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13080);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8226c9e0
	if (ctx.cr6.eq) goto loc_8226C9E0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226ca48
	if (!ctx.cr6.eq) goto loc_8226CA48;
loc_8226C9E0:
	// lwz r11,12796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12796);
	// lwz r10,13084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13084);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8226c9f8
	if (ctx.cr6.eq) goto loc_8226C9F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226ca48
	if (!ctx.cr6.eq) goto loc_8226CA48;
loc_8226C9F8:
	// lwz r11,12800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12800);
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13088);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8226ca10
	if (ctx.cr6.eq) goto loc_8226CA10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226ca48
	if (!ctx.cr6.eq) goto loc_8226CA48;
loc_8226CA10:
	// lwz r11,12804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12804);
	// lwz r10,13092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13092);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8226ca28
	if (ctx.cr6.eq) goto loc_8226CA28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226ca48
	if (!ctx.cr6.eq) goto loc_8226CA48;
loc_8226CA28:
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// lwz r10,13096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13096);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8226ca40
	if (ctx.cr6.eq) goto loc_8226CA40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226ca48
	if (!ctx.cr6.eq) goto loc_8226CA48;
loc_8226CA40:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8226ca4c
	goto loc_8226CA4C;
loc_8226CA48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226CA4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8226CA50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226cb5c
	if (ctx.cr0.eq) goto loc_8226CB5C;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226ca70
	if (!ctx.cr6.gt) goto loc_8226CA70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x8226CA70;
	sub_82277C20(ctx, base);
loc_8226CA70:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,24832
	ctx.r11.u64 = ctx.r11.u64 | 24832;
	// li r28,0
	ctx.r28.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,13100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13100);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8226cb30
	if (!ctx.cr6.gt) goto loc_8226CB30;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,13344
	ctx.r30.s64 = ctx.r31.s64 + 13344;
loc_8226CAA0:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,3
	ctx.r7.s64 = 3;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// slw r7,r7,r29
	ctx.r7.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r29.u8 & 0x3F));
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// li r5,8985
	ctx.r5.s64 = 8985;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// ori r3,r10,21761
	ctx.r3.u64 = ctx.r10.u64 | 21761;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// mullw r10,r8,r19
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r19.s32);
	// stwu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r4.u32 = ea;
	// stwu r3,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r4.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r5,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r4.u32 = ea;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// ble cr6,0x8226cb18
	if (!ctx.cr6.gt) goto loc_8226CB18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x8226CB14;
	sub_82277C20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8226CB18:
	// lwz r10,13100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13100);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8226caa0
	if (ctx.cr6.lt) goto loc_8226CAA0;
loc_8226CB30:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// ori r9,r9,24832
	ctx.r9.u64 = ctx.r9.u64 | 24832;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13060);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13064(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13064);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_8226CB5C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8226cb78
	if (!ctx.cr6.gt) goto loc_8226CB78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x8226CB74;
	sub_82277C20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8226CB78:
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r28,r9,17920
	ctx.r28.u64 = ctx.r9.u64 | 17920;
	// beq 0x8226cbc4
	if (ctx.cr0.eq) goto loc_8226CBC4;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// andi. r10,r10,247
	ctx.r10.u64 = ctx.r10.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,11070(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11070, ctx.r10.u8);
loc_8226CBC4:
	// lwz r21,436(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r29,136(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x8226cc48
	if (!ctx.cr6.eq) goto loc_8226CC48;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8226cc48
	if (!ctx.cr6.eq) goto loc_8226CC48;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,256
	ctx.r9.s64 = 256;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16368
	ctx.r8.s64 = -1072693248;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r7,15
	ctx.r7.s64 = 15;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// li r5,60
	ctx.r5.s64 = 60;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r4,r6,11008
	ctx.r4.s64 = ctx.r6.s64 + 11008;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82248a40
	ctx.lr = 0x8226CC24;
	sub_82248A40(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_8226CC48:
	// li r10,8712
	ctx.r10.s64 = 8712;
	// li r9,6
	ctx.r9.s64 = 6;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,8704
	ctx.r10.s64 = 8704;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r19,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x8226ccb0
	if (ctx.cr6.eq) goto loc_8226CCB0;
	// lbz r9,11069(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11069);
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// lwz r7,10560(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r9,11069(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11069, ctx.r9.u8);
	// rlwimi r8,r10,30,28,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// rlwinm r10,r7,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r8,r8,29,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x7;
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// or r30,r8,r10
	ctx.r30.u64 = ctx.r8.u64 | ctx.r10.u64;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 131072;
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
loc_8226CCB0:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8226ccc8
	if (ctx.cr6.eq) goto loc_8226CCC8;
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226ccd0
	if (ctx.cr0.eq) goto loc_8226CCD0;
loc_8226CCC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d928
	ctx.lr = 0x8226CCD0;
	sub_8226D928(ctx, base);
loc_8226CCD0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b838
	ctx.lr = 0x8226CCE0;
	sub_8227B838(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8226cd84
	if (!ctx.cr6.eq) goto loc_8226CD84;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226cd00
	if (!ctx.cr6.gt) goto loc_8226CD00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x8226CD00;
	sub_82277C20(ctx, base);
loc_8226CD00:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,8851
	ctx.r8.s64 = 8851;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// li r30,8978
	ctx.r30.s64 = 8978;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r10,r6,8708
	ctx.r10.u64 = ctx.r6.u64 | 8708;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r29,0
	ctx.r29.s64 = 0;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// ori r11,r29,65535
	ctx.r11.u64 = ctx.r29.u64 | 65535;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r3.u32 = ea;
	// li r26,8205
	ctx.r26.s64 = 8205;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_8226CD84:
	// lwz r26,144(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8226ce14
	if (!ctx.cr6.eq) goto loc_8226CE14;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,40,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8226CE14:
	// cmplwi cr6,r14,3
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 3, ctx.xer);
	// bne cr6,0x8226ceb0
	if (!ctx.cr6.eq) goto loc_8226CEB0;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8226ceb0
	if (ctx.cr6.eq) goto loc_8226CEB0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// beq cr6,0x8226ce38
	if (ctx.cr6.eq) goto loc_8226CE38;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_8226CE38:
	// addi r11,r30,2593
	ctx.r11.s64 = ctx.r30.s64 + 2593;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r11,r29,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8226ceb0
	if (!ctx.cr6.eq) goto loc_8226CEB0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226ce6c
	if (!ctx.cr6.gt) goto loc_8226CE6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x8226CE6C;
	sub_82277C20(ctx, base);
loc_8226CE6C:
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// addi r11,r30,8193
	ctx.r11.s64 = ctx.r30.s64 + 8193;
	// addi r10,r10,263
	ctx.r10.s64 = ctx.r10.s64 + 263;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r8,r29,6
	ctx.r8.u64 = ctx.r29.u32 & 0x3FFFFFF;
	// srawi r11,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,0,20,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// clrldi r10,r10,56
	ctx.r10.u64 = ctx.r10.u64 & 0xFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ldx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stdx r10,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u64);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_8226CEB0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x8226d018
	if (!ctx.cr6.eq) goto loc_8226D018;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226ced4
	if (!ctx.cr6.gt) goto loc_8226CED4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x8226CED0;
	sub_82277C20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8226CED4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276a58
	ctx.lr = 0x8226CEE4;
	sub_82276A58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8226cef4
	if (!ctx.cr0.eq) goto loc_8226CEF4;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// b 0x8226d348
	goto loc_8226D348;
loc_8226CEF4:
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// lwz r9,10688(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10688);
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x8226cf20
	if (!ctx.cr0.eq) goto loc_8226CF20;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8060(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8226cf28
	goto loc_8226CF28;
loc_8226CF20:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
loc_8226CF28:
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// extsw r10,r25
	ctx.r10.s64 = ctx.r25.s32;
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// subf r10,r25,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r25.s64;
	// subf r9,r27,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r27.s64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f10,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// lfd f11,168(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// lfd f13,192(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,176(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// ori r10,r9,18432
	ctx.r10.u64 = ctx.r9.u64 | 18432;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r9,r9,26
	ctx.r9.u64 = ctx.r9.u64 | 26;
	// ori r4,r4,20480
	ctx.r4.u64 = ctx.r4.u64 | 20480;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// li r29,3
	ctx.r29.s64 = 3;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r30.u32 = ea;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// b 0x8226d01c
	goto loc_8226D01C;
loc_8226D018:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_8226D01C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226d034
	if (!ctx.cr6.gt) goto loc_8226D034;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x8226D034;
	sub_82277C20(ctx, base);
loc_8226D034:
	// lwz r11,13068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13068);
	// li r10,136
	ctx.r10.s64 = 136;
	// li r9,8199
	ctx.r9.s64 = 8199;
	// oris r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 3221225472;
	// rlwimi r10,r29,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// ori r11,r11,13824
	ctx.r11.u64 = ctx.r11.u64 | 13824;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10396);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x8226d0a8
	if (ctx.cr6.eq) goto loc_8226D0A8;
	// lwz r11,10440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,10436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10436);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 17;
	// srawi r5,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x8226f758
	ctx.lr = 0x8226D0A8;
	sub_8226F758(ctx, base);
loc_8226D0A8:
	// lwz r11,11036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r11,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8226d0e0
	if (!ctx.cr6.eq) goto loc_8226D0E0;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8226D0E0:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r3,r15,28
	ctx.r3.s64 = ctx.r15.s64 + 28;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x82269640
	ctx.lr = 0x8226D110;
	sub_82269640(ctx, base);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lwz r7,44(r15)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r15.u32 + 44);
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,28(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 28);
	// lwz r10,40(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 40);
	// rlwinm r11,r8,10,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x1FF;
	// lwz r30,48(r15)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r15.u32 + 48);
	// rlwinm r6,r10,13,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// lwz r29,32(r15)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r15.u32 + 32);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r7,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xF;
	// srawi r7,r6,26
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 26;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// rlwinm r9,r8,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// rlwinm r10,r30,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 21) & 0x1;
	// rlwinm r8,r30,23,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 23) & 0x3;
	// clrlwi r7,r29,26
	ctx.r7.u64 = ctx.r29.u32 & 0x3F;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x82269950
	ctx.lr = 0x8226D18C;
	sub_82269950(ctx, base);
	// lwz r11,460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226d1c0
	if (ctx.cr6.eq) goto loc_8226D1C0;
	// lwz r11,48(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 48);
	// rlwinm. r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8226d1c0
	if (ctx.cr0.eq) goto loc_8226D1C0;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r11,r11,0,3,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFF000;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8226d1e0
	goto loc_8226D1E0;
loc_8226D1C0:
	// lwz r11,32(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 32);
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8226D1E0:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226d1f8
	if (!ctx.cr6.gt) goto loc_8226D1F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x8226D1F8;
	sub_82277C20(ctx, base);
loc_8226D1F8:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,7372(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7372);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8226d290
	if (ctx.cr6.eq) goto loc_8226D290;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8226d2b8
	if (!ctx.cr6.eq) goto loc_8226D2B8;
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r9,r30,8191
	ctx.r9.s64 = ctx.r30.s64 + 8191;
	// ori r11,r11,2607
	ctx.r11.u64 = ctx.r11.u64 | 2607;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r8,r29,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFF000;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r7,r7,15360
	ctx.r7.u64 = ctx.r7.u64 | 15360;
	// li r6,2609
	ctx.r6.s64 = 2609;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r30,8
	ctx.r30.s64 = 8;
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// b 0x8226d2b8
	goto loc_8226D2B8;
loc_8226D290:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8226d2b8
	if (!ctx.cr6.eq) goto loc_8226D2B8;
	// lbz r10,11072(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// li r12,3
	ctx.r12.s64 = 3;
	// ori r10,r10,192
	ctx.r10.u64 = ctx.r10.u64 | 192;
	// rldicr r12,r12,62,1
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 62) & 0xC000000000000000;
	// stb r10,11072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11072, ctx.r10.u8);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
loc_8226D2B8:
	// li r10,8984
	ctx.r10.s64 = 8984;
	// stw r19,10776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10776, ctx.r19.u32);
	// stw r19,10788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10788, ctx.r19.u32);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,8987
	ctx.r10.s64 = 8987;
	// stwu r19,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stwu r19,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r10.u32 = ea;
	// lwz r11,11036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// beq cr6,0x8226d2fc
	if (ctx.cr6.eq) goto loc_8226D2FC;
	// stw r11,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r11.u32);
	// stw r11,12(r15)
	PPC_STORE_U32(ctx.r15.u32 + 12, ctx.r11.u32);
	// b 0x8226d348
	goto loc_8226D348;
loc_8226D2FC:
	// lwz r11,11040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11040);
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226d348
	if (ctx.cr0.eq) goto loc_8226D348;
	// lwz r11,13916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13916);
	// lwz r3,13912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13912);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8226d324
	if (ctx.cr6.lt) goto loc_8226D324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82279040
	ctx.lr = 0x8226D324;
	sub_82279040(ctx, base);
loc_8226D324:
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rlwimi r10,r15,30,2,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r15.u32, 30) & 0x3FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFC0000000);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// ld r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// stw r11,13912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13912, ctx.r11.u32);
loc_8226D348:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226D354"))) PPC_WEAK_FUNC(sub_8226D354);
PPC_FUNC_IMPL(__imp__sub_8226D354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226D358"))) PPC_WEAK_FUNC(sub_8226D358);
PPC_FUNC_IMPL(__imp__sub_8226D358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8226D360;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,260(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lwz r29,252(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bl 0x8226c200
	ctx.lr = 0x8226D39C;
	sub_8226C200(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8226D3A4"))) PPC_WEAK_FUNC(sub_8226D3A4);
PPC_FUNC_IMPL(__imp__sub_8226D3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226D3A8"))) PPC_WEAK_FUNC(sub_8226D3A8);
PPC_FUNC_IMPL(__imp__sub_8226D3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8226D3B0;
	sub_82248780(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8227d730
	ctx.lr = 0x8226D3D4;
	sub_8227D730(ctx, base);
	// lis r11,57
	ctx.r11.s64 = 3735552;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r4,r11,32768
	ctx.r4.u64 = ctx.r11.u64 | 32768;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
	// rlwinm r9,r9,19,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FFF;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r11,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r26,r9,r11
	ctx.r26.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ble cr6,0x8226d414
	if (!ctx.cr6.gt) goto loc_8226D414;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8226d57c
	goto loc_8226D57C;
loc_8226D414:
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8241ddac
	ctx.lr = 0x8226D430;
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8226d444
	if (!ctx.cr0.eq) goto loc_8226D444;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8226d57c
	goto loc_8226D57C;
loc_8226D444:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82277ed0
	ctx.lr = 0x8226D44C;
	sub_82277ED0(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226b130
	ctx.lr = 0x8226D464;
	sub_8226B130(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82248a40
	ctx.lr = 0x8226D474;
	sub_82248A40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822696e0
	ctx.lr = 0x8226D480;
	sub_822696E0(ctx, base);
	// sync 
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8226d4a8
	if (ctx.cr6.eq) goto loc_8226D4A8;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x8226d4a8
	if (ctx.cr6.eq) goto loc_8226D4A8;
	// lis r31,10280
	ctx.r31.s64 = 673710080;
	// ori r31,r31,310
	ctx.r31.u64 = ctx.r31.u64 | 310;
	// b 0x8226d4b0
	goto loc_8226D4B0;
loc_8226D4A8:
	// lis r31,10280
	ctx.r31.s64 = 673710080;
	// ori r31,r31,262
	ctx.r31.u64 = ctx.r31.u64 | 262;
loc_8226D4B0:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8226D4C0:
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8226d4c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226D4C0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8226aaf8
	ctx.lr = 0x8226D514;
	sub_8226AAF8(ctx, base);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// rlwimi r11,r10,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// bne cr6,0x8226d530
	if (!ctx.cr6.eq) goto loc_8226D530;
	// addi r29,r30,14028
	ctx.r29.s64 = ctx.r30.s64 + 14028;
loc_8226D530:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226eed0
	ctx.lr = 0x8226D538;
	sub_8226EED0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226eed8
	ctx.lr = 0x8226D548;
	sub_8226EED8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82277ed0
	ctx.lr = 0x8226D550;
	sub_82277ED0(ctx, base);
	// lbz r11,11069(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11069);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// sth r27,156(r1)
	PPC_STORE_U16(ctx.r1.u32 + 156, ctx.r27.u16);
	// sth r26,158(r1)
	PPC_STORE_U16(ctx.r1.u32 + 158, ctx.r26.u16);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r11,11069(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11069, ctx.r11.u8);
	// bl 0x8241e6ac
	ctx.lr = 0x8226D578;
	__imp__VdPersistDisplay(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226D57C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8226D584"))) PPC_WEAK_FUNC(sub_8226D584);
PPC_FUNC_IMPL(__imp__sub_8226D584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226D588"))) PPC_WEAK_FUNC(sub_8226D588);
PPC_FUNC_IMPL(__imp__sub_8226D588) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r10,11024(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 11024);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226D5B8"))) PPC_WEAK_FUNC(sub_8226D5B8);
PPC_FUNC_IMPL(__imp__sub_8226D5B8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226d66c
	if (ctx.cr6.eq) goto loc_8226D66C;
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// lwz r10,256(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x8226d614
	if (!ctx.cr6.eq) goto loc_8226D614;
	// ld r9,22000(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22000);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// std r9,22000(r10)
	PPC_STORE_U64(ctx.r10.u32 + 22000, ctx.r9.u64);
	// b 0x8226d624
	goto loc_8226D624;
loc_8226D614:
	// ld r8,21992(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 21992);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r9,21992(r10)
	PPC_STORE_U64(ctx.r10.u32 + 21992, ctx.r9.u64);
loc_8226D624:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,13820(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13820);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8226d66c
	if (ctx.cr6.eq) goto loc_8226D66C;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,21984(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21984);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r3,0
	ctx.r3.s64 = 0;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,10412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x8226D66C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226D66C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226D67C"))) PPC_WEAK_FUNC(sub_8226D67C);
PPC_FUNC_IMPL(__imp__sub_8226D67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226D680"))) PPC_WEAK_FUNC(sub_8226D680);
PPC_FUNC_IMPL(__imp__sub_8226D680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8226D688;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cctpl 
	// li r11,4
	ctx.r11.s64 = 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8226D6A0:
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// bdnz 0x8226d6a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226D6A0;
	// cctpm 
	// lbz r11,11069(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 11069);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226d754
	if (!ctx.cr0.eq) goto loc_8226D754;
	// lwz r11,11024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11024);
	// lwz r10,256(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,88(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8226d6fc
	if (ctx.cr6.eq) goto loc_8226D6FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8226D6FC:
	// bl 0x82088650
	ctx.lr = 0x8226D700;
	sub_82088650(ctx, base);
	// lwz r11,11016(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11016);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8226d71c
	if (!ctx.cr6.eq) goto loc_8226D71C;
	// lwz r11,11148(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8226d71c
	if (ctx.cr6.eq) goto loc_8226D71C;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8226D71C:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// lwz r11,19552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19552);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8226d73c
	if (!ctx.cr6.lt) goto loc_8226D73C;
loc_8226D734:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8226d758
	goto loc_8226D758;
loc_8226D73C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8227e670
	ctx.lr = 0x8226D744;
	sub_8227E670(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226d754
	if (!ctx.cr0.eq) goto loc_8226D754;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x8226d734
	goto loc_8226D734;
loc_8226D754:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226D758:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8226D760"))) PPC_WEAK_FUNC(sub_8226D760);
PPC_FUNC_IMPL(__imp__sub_8226D760) {
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
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24384(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24384);
	// bl 0x82086968
	ctx.lr = 0x8226D780;
	sub_82086968(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,24392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24392);
	// bl 0x82086968
	ctx.lr = 0x8226D78C;
	sub_82086968(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24384, ctx.r11.u32);
	// stw r11,24392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24392, ctx.r11.u32);
	// std r11,24400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24400, ctx.r11.u64);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8226D7B0"))) PPC_WEAK_FUNC(sub_8226D7B0);
PPC_FUNC_IMPL(__imp__sub_8226D7B0) {
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
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x82086c98
	ctx.lr = 0x8226D7D0;
	sub_82086C98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24408, ctx.r3.u32);
	// bne 0x8226d7e4
	if (!ctx.cr0.eq) goto loc_8226D7E4;
loc_8226D7DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226d89c
	goto loc_8226D89C;
loc_8226D7E4:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,1260
	ctx.r3.s64 = 1260;
	// bl 0x82086c98
	ctx.lr = 0x8226D7F0;
	sub_82086C98(ctx, base);
	// stw r3,24416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24416, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8226d818
	if (!ctx.cr0.eq) goto loc_8226D818;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,24408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24408);
	// bl 0x82086968
	ctx.lr = 0x8226D808;
	sub_82086968(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24408, ctx.r11.u32);
	// b 0x8226d89c
	goto loc_8226D89C;
loc_8226D818:
	// li r10,63
	ctx.r10.s64 = 63;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8226D824:
	// lwz r10,24408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24408);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lis r8,2989
	ctx.r8.s64 = 195887104;
	// ori r8,r8,53261
	ctx.r8.u64 = ctx.r8.u64 | 53261;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r10,24408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24408);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// bdnz 0x8226d824
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226D824;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82086c98
	ctx.lr = 0x8226D858;
	sub_82086C98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24432, ctx.r3.u32);
	// beq 0x8226d7dc
	if (ctx.cr0.eq) goto loc_8226D7DC;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82086c98
	ctx.lr = 0x8226D870;
	sub_82086C98(ctx, base);
	// stw r3,24436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24436, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8226d898
	if (!ctx.cr0.eq) goto loc_8226D898;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,24432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24432);
	// bl 0x82086968
	ctx.lr = 0x8226D888;
	sub_82086968(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24432, ctx.r11.u32);
	// b 0x8226d89c
	goto loc_8226D89C;
loc_8226D898:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8226D89C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8226D8B0"))) PPC_WEAK_FUNC(sub_8226D8B0);
PPC_FUNC_IMPL(__imp__sub_8226D8B0) {
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
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24408);
	// bl 0x82086968
	ctx.lr = 0x8226D8D4;
	sub_82086968(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,24416(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24416);
	// stw r31,24408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24408, ctx.r31.u32);
	// bl 0x82086968
	ctx.lr = 0x8226D8E8;
	sub_82086968(ctx, base);
	// stw r31,24416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24416, ctx.r31.u32);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,24432(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24432);
	// bl 0x82086968
	ctx.lr = 0x8226D8F8;
	sub_82086968(ctx, base);
	// stw r31,24432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24432, ctx.r31.u32);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,24436(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24436);
	// bl 0x82086968
	ctx.lr = 0x8226D908;
	sub_82086968(ctx, base);
	// stw r31,24436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24436, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8226D924"))) PPC_WEAK_FUNC(sub_8226D924);
PPC_FUNC_IMPL(__imp__sub_8226D924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226D928"))) PPC_WEAK_FUNC(sub_8226D928);
PPC_FUNC_IMPL(__imp__sub_8226D928) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226d954
	if (!ctx.cr6.gt) goto loc_8226D954;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x8226D954;
	sub_82277C20(ctx, base);
loc_8226D954:
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1480
	ctx.r11.s64 = 1480;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// beq 0x8226d998
	if (ctx.cr0.eq) goto loc_8226D998;
	// li r11,3584
	ctx.r11.s64 = 3584;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,3648
	ctx.r8.s64 = 3648;
	// li r7,1
	ctx.r7.s64 = 1;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// b 0x8226d99c
	goto loc_8226D99C;
loc_8226D998:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8226D99C:
	// lbz r10,11072(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// lbz r9,11071(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11071);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r10,11072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11072, ctx.r10.u8);
	// stb r11,11071(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11071, ctx.r11.u8);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// clrldi r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 & 0x3FFFFFFFFFFFFFFF;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8226D9D8"))) PPC_WEAK_FUNC(sub_8226D9D8);
PPC_FUNC_IMPL(__imp__sub_8226D9D8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
loc_8226D9DC:
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
	// bne 0x8226d9dc
	if (!ctx.cr0.eq) goto loc_8226D9DC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226DA00"))) PPC_WEAK_FUNC(sub_8226DA00);
PPC_FUNC_IMPL(__imp__sub_8226DA00) {
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
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
loc_8226DA1C:
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
	// bne 0x8226da1c
	if (!ctx.cr0.eq) goto loc_8226DA1C;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8226da68
	if (!ctx.cr6.eq) goto loc_8226DA68;
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,11072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11072, ctx.r11.u8);
	// bl 0x82088650
	ctx.lr = 0x8226DA54;
	sub_82088650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227f0e8
	ctx.lr = 0x8226DA5C;
	sub_8227F0E8(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x82086968
	ctx.lr = 0x8226DA68;
	sub_82086968(ctx, base);
loc_8226DA68:
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

__attribute__((alias("__imp__sub_8226DA84"))) PPC_WEAK_FUNC(sub_8226DA84);
PPC_FUNC_IMPL(__imp__sub_8226DA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226DA88"))) PPC_WEAK_FUNC(sub_8226DA88);
PPC_FUNC_IMPL(__imp__sub_8226DA88) {
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
	// addi r4,r4,72
	ctx.r4.s64 = ctx.r4.s64 + 72;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82277fa0
	ctx.lr = 0x8226DAAC;
	sub_82277FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226daf0
	if (!ctx.cr0.eq) goto loc_8226DAF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277ed0
	ctx.lr = 0x8226DABC;
	sub_82277ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227eb58
	ctx.lr = 0x8226DAC4;
	sub_8227EB58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227f2b0
	ctx.lr = 0x8226DAD0;
	sub_8227F2B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226daec
	if (!ctx.cr0.eq) goto loc_8226DAEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227eb58
	ctx.lr = 0x8226DAE0;
	sub_8227EB58(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8226daf0
	goto loc_8226DAF0;
loc_8226DAEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226DAF0:
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

__attribute__((alias("__imp__sub_8226DB08"))) PPC_WEAK_FUNC(sub_8226DB08);
PPC_FUNC_IMPL(__imp__sub_8226DB08) {
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
	// lwz r11,11016(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11016);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226db2c
	if (ctx.cr6.eq) goto loc_8226DB2C;
	// bl 0x82088650
	ctx.lr = 0x8226DB2C;
	sub_82088650(ctx, base);
loc_8226DB2C:
	// bl 0x82088650
	ctx.lr = 0x8226DB30;
	sub_82088650(ctx, base);
	// stw r3,11016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11016, ctx.r3.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8226DB48"))) PPC_WEAK_FUNC(sub_8226DB48);
PPC_FUNC_IMPL(__imp__sub_8226DB48) {
	PPC_FUNC_PROLOGUE();
	// eieio 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11016(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11016, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226DB58"))) PPC_WEAK_FUNC(sub_8226DB58);
PPC_FUNC_IMPL(__imp__sub_8226DB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8226DB60;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,12792
	ctx.r29.s64 = ctx.r3.s64 + 12792;
loc_8226DB70:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,15220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15220);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8226db90
	if (ctx.cr6.eq) goto loc_8226DB90;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822726f8
	ctx.lr = 0x8226DB90;
	sub_822726F8(ctx, base);
loc_8226DB90:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8226db70
	if (ctx.cr6.lt) goto loc_8226DB70;
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// lwz r10,15212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15212);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8226dbbc
	if (ctx.cr6.eq) goto loc_8226DBBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272a88
	ctx.lr = 0x8226DBBC;
	sub_82272A88(ctx, base);
loc_8226DBBC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82274e98
	ctx.lr = 0x8226DBC8;
	sub_82274E98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82274c90
	ctx.lr = 0x8226DBD4;
	sub_82274C90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822750b0
	ctx.lr = 0x8226DBE0;
	sub_822750B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82271f70
	ctx.lr = 0x8226DBEC;
	sub_82271F70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// rldicr r29,r11,63,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_8226DBF8:
	// subfic r11,r30,95
	ctx.xer.ca = ctx.r30.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r30.s64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mulli r11,r11,21846
	ctx.r11.s64 = ctx.r11.s64 * 21846;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r8,r29,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r29.u64 >> (ctx.r11.u8 & 0x7F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82271e50
	ctx.lr = 0x8226DC28;
	sub_82271E50(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x8226dbf8
	if (ctx.cr6.lt) goto loc_8226DBF8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8226DC38:
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r6,r29,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r29.u64 >> (ctx.r11.u8 & 0x7F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226b640
	ctx.lr = 0x8226DC54;
	sub_8226B640(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 26, ctx.xer);
	// blt cr6,0x8226dc38
	if (ctx.cr6.lt) goto loc_8226DC38;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8226DC68"))) PPC_WEAK_FUNC(sub_8226DC68);
PPC_FUNC_IMPL(__imp__sub_8226DC68) {
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
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bl 0x82086c98
	ctx.lr = 0x8226DC88;
	sub_82086C98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8226dca8
	if (ctx.cr0.eq) goto loc_8226DCA8;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// stw r3,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8226DCA8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8226DCBC"))) PPC_WEAK_FUNC(sub_8226DCBC);
PPC_FUNC_IMPL(__imp__sub_8226DCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226DCC0"))) PPC_WEAK_FUNC(sub_8226DCC0);
PPC_FUNC_IMPL(__imp__sub_8226DCC0) {
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
	// bl 0x8226dc68
	ctx.lr = 0x8226DCDC;
	sub_8226DC68(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8226dcf4
	if (ctx.cr0.eq) goto loc_8226DCF4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248f70
	ctx.lr = 0x8226DCF4;
	sub_82248F70(ctx, base);
loc_8226DCF4:
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

__attribute__((alias("__imp__sub_8226DD10"))) PPC_WEAK_FUNC(sub_8226DD10);
PPC_FUNC_IMPL(__imp__sub_8226DD10) {
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
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82086c98
	ctx.lr = 0x8226DD34;
	sub_82086C98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24384, ctx.r3.u32);
	// bne 0x8226dd48
	if (!ctx.cr0.eq) goto loc_8226DD48;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226de70
	goto loc_8226DE70;
loc_8226DD48:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82086c98
	ctx.lr = 0x8226DD54;
	sub_82086C98(ctx, base);
	// stw r3,24392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24392, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8226dd7c
	if (!ctx.cr0.eq) goto loc_8226DD7C;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,24384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24384);
	// bl 0x82086968
	ctx.lr = 0x8226DD6C;
	sub_82086968(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24384, ctx.r11.u32);
	// b 0x8226de70
	goto loc_8226DE70;
loc_8226DD7C:
	// lwz r11,24384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24384);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16359
	ctx.r8.s64 = -1072103424;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r6,11216
	ctx.r4.s64 = ctx.r6.s64 + 11216;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82248a40
	ctx.lr = 0x8226DDCC;
	sub_82248A40(ctx, base);
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// li r10,8709
	ctx.r10.s64 = 8709;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r9,r9,8576
	ctx.r9.u64 = ctx.r9.u64 | 8576;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,10568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10568);
	// rlwinm r10,r10,0,29,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF807;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// lwz r10,24384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24384);
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8226DE24:
	// lis r10,-16381
	ctx.r10.s64 = -1073545216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,8705
	ctx.r10.u64 = ctx.r10.u64 | 8705;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// ori r7,r7,4
	ctx.r7.u64 = ctx.r7.u64 | 4;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8226de24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226DE24;
	// lwz r11,24384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24384);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,24388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24388, ctx.r11.u32);
loc_8226DE70:
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

__attribute__((alias("__imp__sub_8226DE88"))) PPC_WEAK_FUNC(sub_8226DE88);
PPC_FUNC_IMPL(__imp__sub_8226DE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8226DE90;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,24704
	ctx.r3.s64 = 24704;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x8226dcc0
	ctx.lr = 0x8226DEB8;
	sub_8226DCC0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8226decc
	if (!ctx.cr0.eq) goto loc_8226DECC;
loc_8226DEC0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8226df54
	goto loc_8226DF54;
loc_8226DECC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227efa8
	ctx.lr = 0x8226DED4;
	sub_8227EFA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226deec
	if (!ctx.cr0.eq) goto loc_8226DEEC;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x82086968
	ctx.lr = 0x8226DEE8;
	sub_82086968(ctx, base);
	// b 0x8226dec0
	goto loc_8226DEC0;
loc_8226DEEC:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x8226df24
	if (!ctx.cr6.eq) goto loc_8226DF24;
	// lbz r11,11068(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,11068(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11068, ctx.r11.u8);
	// bl 0x82276138
	ctx.lr = 0x8226DF08;
	sub_82276138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227f018
	ctx.lr = 0x8226DF10;
	sub_8227F018(ctx, base);
loc_8226DF10:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226df4c
	if (!ctx.cr0.eq) goto loc_8226DF4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226da00
	ctx.lr = 0x8226DF20;
	sub_8226DA00(ctx, base);
	// b 0x8226dec0
	goto loc_8226DEC0;
loc_8226DF24:
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226df38
	if (!ctx.cr0.eq) goto loc_8226DF38;
	// rlwinm. r11,r30,0,2,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x3F000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226df38
	if (!ctx.cr0.eq) goto loc_8226DF38;
	// oris r30,r30,3072
	ctx.r30.u64 = ctx.r30.u64 | 201326592;
loc_8226DF38:
	// stw r30,24376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24376, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227f530
	ctx.lr = 0x8226DF48;
	sub_8227F530(ctx, base);
	// b 0x8226df10
	goto loc_8226DF10;
loc_8226DF4C:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226DF54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8226DF5C"))) PPC_WEAK_FUNC(sub_8226DF5C);
PPC_FUNC_IMPL(__imp__sub_8226DF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226DF60"))) PPC_WEAK_FUNC(sub_8226DF60);
PPC_FUNC_IMPL(__imp__sub_8226DF60) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r10,10
	ctx.r10.s64 = 10;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226DF78"))) PPC_WEAK_FUNC(sub_8226DF78);
PPC_FUNC_IMPL(__imp__sub_8226DF78) {
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
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r3,7388(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 7388);
	// bl 0x8226df60
	ctx.lr = 0x8226DF90;
	sub_8226DF60(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,7388(r9)
	PPC_STORE_U32(ctx.r9.u32 + 7388, ctx.r3.u32);
	// lwz r3,7392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7392);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226DFAC"))) PPC_WEAK_FUNC(sub_8226DFAC);
PPC_FUNC_IMPL(__imp__sub_8226DFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226DFB0"))) PPC_WEAK_FUNC(sub_8226DFB0);
PPC_FUNC_IMPL(__imp__sub_8226DFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8226DFB8;
	sub_8224878C(ctx, base);
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r30,r11,310
	ctx.r30.u64 = ctx.r11.u64 | 310;
	// bne cr6,0x8226e004
	if (!ctx.cr6.eq) goto loc_8226E004;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8226e004
	if (ctx.cr6.eq) goto loc_8226E004;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x8226dffc
	if (!ctx.cr6.eq) goto loc_8226DFFC;
	// bl 0x8227fe70
	ctx.lr = 0x8226DFF4;
	sub_8227FE70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x8226e00c
	goto loc_8226E00C;
loc_8226DFFC:
	// bl 0x8227fe28
	ctx.lr = 0x8226E000;
	sub_8227FE28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8226E004:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8226e018
	if (!ctx.cr6.eq) goto loc_8226E018;
loc_8226E00C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8227fcf8
	ctx.lr = 0x8226E014;
	sub_8227FCF8(ctx, base);
	// b 0x8226e020
	goto loc_8226E020;
loc_8226E018:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8227fc08
	ctx.lr = 0x8226E020;
	sub_8227FC08(ctx, base);
loc_8226E020:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8226E028"))) PPC_WEAK_FUNC(sub_8226E028);
PPC_FUNC_IMPL(__imp__sub_8226E028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8226E030;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,17104
	ctx.r30.s64 = ctx.r3.s64 + 17104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e62c
	ctx.lr = 0x8226E044;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,16936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16936);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16936, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// lwz r10,17096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17096);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,17092(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17092);
	// stw r11,16940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16940, ctx.r11.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8226e0f0
	if (ctx.cr6.eq) goto loc_8226E0F0;
loc_8226E070:
	// lwz r11,17092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17092);
	// lwz r8,16936(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16936);
	// rlwinm r11,r11,3,25,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x78;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,16964
	ctx.r10.s64 = ctx.r11.s64 + 16964;
	// lwz r10,16968(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16968);
	// lwz r11,16964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16964);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8226e0f0
	if (ctx.cr6.gt) goto loc_8226E0F0;
	// lwz r10,16960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,16940(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16940);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16960, ctx.r10.u32);
	// stw r8,16948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16948, ctx.r8.u32);
	// bne cr6,0x8226e0bc
	if (!ctx.cr6.eq) goto loc_8226E0BC;
	// lwz r11,11028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11028);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x8226e0cc
	goto loc_8226E0CC;
loc_8226E0BC:
	// lis r10,32712
	ctx.r10.s64 = 2143813632;
	// stw r11,24848(r10)
	PPC_MM_STORE_U32(ctx.r10.u32 + 24848, ctx.r11.u32);
	// eieio 
	// sync 
loc_8226E0CC:
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lwz r11,17092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17092);
	// stw r10,23772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23772, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,17092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17092, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,17096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17096);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8226e070
	if (!ctx.cr6.eq) goto loc_8226E070;
loc_8226E0F0:
	// lwz r11,16932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226e11c
	if (ctx.cr6.eq) goto loc_8226E11C;
	// lwz r10,16960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16960);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,16936(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16936);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x8226E11C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226E11C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24444
	ctx.r3.s64 = ctx.r31.s64 + 24444;
	// bl 0x8241e51c
	ctx.lr = 0x8226E12C;
	__imp__KeSetEvent(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82088248
	ctx.lr = 0x8226E134;
	sub_82088248(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sradi r11,r11,10
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,22068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22068, ctx.r11.u32);
	// bl 0x8241e61c
	ctx.lr = 0x8226E14C;
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8226E154"))) PPC_WEAK_FUNC(sub_8226E154);
PPC_FUNC_IMPL(__imp__sub_8226E154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8226E158"))) PPC_WEAK_FUNC(sub_8226E158);
PPC_FUNC_IMPL(__imp__sub_8226E158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8226E160;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8241e04c
	ctx.lr = 0x8226E16C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8226e180
	if (!ctx.cr6.eq) goto loc_8226E180;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// b 0x8226e188
	goto loc_8226E188;
loc_8226E180:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
loc_8226E188:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r26,r31,17104
	ctx.r26.s64 = ctx.r31.s64 + 17104;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241e62c
	ctx.lr = 0x8226E198;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r10,16956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16956);
	// lwz r11,21948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21948);
	// rlwinm r29,r30,24,28,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r27,r30,24
	ctx.r27.u64 = ctx.r30.u32 & 0xFF;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r10,16956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16956, ctx.r10.u32);
	// rlwinm r30,r30,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x8226e1c8
	if (!ctx.cr6.eq) goto loc_8226E1C8;
	// li r28,60
	ctx.r28.s64 = 60;
loc_8226E1C8:
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// lwz r10,16940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16940);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r24,r10,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x8241de2c
	ctx.lr = 0x8226E1DC;
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mulli r10,r24,100
	ctx.r10.s64 = ctx.r24.s64 * 100;
	// divwu r11,r11,r28
	ctx.r11.u32 = ctx.r11.u32 / ctx.r28.u32;
	// twllei r28,0
	// twllei r11,0
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,100
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 100, ctx.xer);
	// ble cr6,0x8226e204
	if (!ctx.cr6.gt) goto loc_8226E204;
	// li r7,100
	ctx.r7.s64 = 100;
loc_8226E204:
	// lwz r8,16944(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16944);
	// lwz r10,16936(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16936);
	// add r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8226e230
	if (ctx.cr6.gt) goto loc_8226E230;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8226e230
	if (ctx.cr6.eq) goto loc_8226E230;
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8226e230
	if (!ctx.cr6.gt) goto loc_8226E230;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8226E230:
	// lwz r9,16928(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16928);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8226e270
	if (ctx.cr6.eq) goto loc_8226E270;
	// lwz r6,16956(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16956);
	// addic r5,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfe r11,r5,r30
	temp.u8 = (~ctx.r5.u32 + ctx.r30.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8226E26C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8226E270:
	// lwz r10,16936(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16936);
	// stw r11,16944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16944, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8226e2b4
	if (ctx.cr6.eq) goto loc_8226E2B4;
	// lwz r10,16956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16956);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8226e2b4
	if (ctx.cr6.eq) goto loc_8226E2B4;
	// lwz r10,17096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17096);
	// rlwinm r10,r10,3,25,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x78;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r10,16964
	ctx.r9.s64 = ctx.r10.s64 + 16964;
	// stw r11,16968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16968, ctx.r11.u32);
	// stw r30,16964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16964, ctx.r30.u32);
	// lwz r11,17096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17096);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,17096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17096, ctx.r11.u32);
	// b 0x8226e2f0
	goto loc_8226E2F0;
loc_8226E2B4:
	// lwz r11,16960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16960);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16960, ctx.r11.u32);
	// beq cr6,0x8226e2dc
	if (ctx.cr6.eq) goto loc_8226E2DC;
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// stw r30,24848(r11)
	PPC_MM_STORE_U32(ctx.r11.u32 + 24848, ctx.r30.u32);
	// eieio 
	// sync 
	// b 0x8226e2e8
	goto loc_8226E2E8;
loc_8226E2DC:
	// lwz r11,11028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11028);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8226E2E8:
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// stw r11,23772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23772, ctx.r11.u32);
loc_8226E2F0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241e61c
	ctx.lr = 0x8226E2FC;
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

