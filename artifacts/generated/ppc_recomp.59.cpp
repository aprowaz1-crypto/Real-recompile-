#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82270FB8"))) PPC_WEAK_FUNC(sub_82270FB8);
PPC_FUNC_IMPL(__imp__sub_82270FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10616(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10616);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82270FC4"))) PPC_WEAK_FUNC(sub_82270FC4);
PPC_FUNC_IMPL(__imp__sub_82270FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82270FC8"))) PPC_WEAK_FUNC(sub_82270FC8);
PPC_FUNC_IMPL(__imp__sub_82270FC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10688(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10688);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10688, ctx.r4.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82270FEC"))) PPC_WEAK_FUNC(sub_82270FEC);
PPC_FUNC_IMPL(__imp__sub_82270FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82270FF0"))) PPC_WEAK_FUNC(sub_82270FF0);
PPC_FUNC_IMPL(__imp__sub_82270FF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10688(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10688);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82270FFC"))) PPC_WEAK_FUNC(sub_82270FFC);
PPC_FUNC_IMPL(__imp__sub_82270FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271000"))) PPC_WEAK_FUNC(sub_82271000);
PPC_FUNC_IMPL(__imp__sub_82271000) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,21,10,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0x200000) | (ctx.r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227101C"))) PPC_WEAK_FUNC(sub_8227101C);
PPC_FUNC_IMPL(__imp__sub_8227101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271020"))) PPC_WEAK_FUNC(sub_82271020);
PPC_FUNC_IMPL(__imp__sub_82271020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227102C"))) PPC_WEAK_FUNC(sub_8227102C);
PPC_FUNC_IMPL(__imp__sub_8227102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271030"))) PPC_WEAK_FUNC(sub_82271030);
PPC_FUNC_IMPL(__imp__sub_82271030) {
	PPC_FUNC_PROLOGUE();
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r4,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r4.u32);
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// rldicr r12,r12,38,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227104C"))) PPC_WEAK_FUNC(sub_8227104C);
PPC_FUNC_IMPL(__imp__sub_8227104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271050"))) PPC_WEAK_FUNC(sub_82271050);
PPC_FUNC_IMPL(__imp__sub_82271050) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10456(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271058"))) PPC_WEAK_FUNC(sub_82271058);
PPC_FUNC_IMPL(__imp__sub_82271058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,4,27,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x10) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271074"))) PPC_WEAK_FUNC(sub_82271074);
PPC_FUNC_IMPL(__imp__sub_82271074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271078"))) PPC_WEAK_FUNC(sub_82271078);
PPC_FUNC_IMPL(__imp__sub_82271078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271084"))) PPC_WEAK_FUNC(sub_82271084);
PPC_FUNC_IMPL(__imp__sub_82271084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271088"))) PPC_WEAK_FUNC(sub_82271088);
PPC_FUNC_IMPL(__imp__sub_82271088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822710A4"))) PPC_WEAK_FUNC(sub_822710A4);
PPC_FUNC_IMPL(__imp__sub_822710A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822710A8"))) PPC_WEAK_FUNC(sub_822710A8);
PPC_FUNC_IMPL(__imp__sub_822710A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10556(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10556);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822710B0"))) PPC_WEAK_FUNC(sub_822710B0);
PPC_FUNC_IMPL(__imp__sub_822710B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10700(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10700, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822710D4"))) PPC_WEAK_FUNC(sub_822710D4);
PPC_FUNC_IMPL(__imp__sub_822710D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822710D8"))) PPC_WEAK_FUNC(sub_822710D8);
PPC_FUNC_IMPL(__imp__sub_822710D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10700(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10700);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822710E0"))) PPC_WEAK_FUNC(sub_822710E0);
PPC_FUNC_IMPL(__imp__sub_822710E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10692(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10692, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271104"))) PPC_WEAK_FUNC(sub_82271104);
PPC_FUNC_IMPL(__imp__sub_82271104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271108"))) PPC_WEAK_FUNC(sub_82271108);
PPC_FUNC_IMPL(__imp__sub_82271108) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10692(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10692);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271110"))) PPC_WEAK_FUNC(sub_82271110);
PPC_FUNC_IMPL(__imp__sub_82271110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10704(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10704, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227112C"))) PPC_WEAK_FUNC(sub_8227112C);
PPC_FUNC_IMPL(__imp__sub_8227112C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271130"))) PPC_WEAK_FUNC(sub_82271130);
PPC_FUNC_IMPL(__imp__sub_82271130) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10704(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10704);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271138"))) PPC_WEAK_FUNC(sub_82271138);
PPC_FUNC_IMPL(__imp__sub_82271138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10696(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10696, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227115C"))) PPC_WEAK_FUNC(sub_8227115C);
PPC_FUNC_IMPL(__imp__sub_8227115C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271160"))) PPC_WEAK_FUNC(sub_82271160);
PPC_FUNC_IMPL(__imp__sub_82271160) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10696(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10696);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271168"))) PPC_WEAK_FUNC(sub_82271168);
PPC_FUNC_IMPL(__imp__sub_82271168) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,12260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12260, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271184"))) PPC_WEAK_FUNC(sub_82271184);
PPC_FUNC_IMPL(__imp__sub_82271184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271188"))) PPC_WEAK_FUNC(sub_82271188);
PPC_FUNC_IMPL(__imp__sub_82271188) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271194"))) PPC_WEAK_FUNC(sub_82271194);
PPC_FUNC_IMPL(__imp__sub_82271194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271198"))) PPC_WEAK_FUNC(sub_82271198);
PPC_FUNC_IMPL(__imp__sub_82271198) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// lbz r10,11071(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11071);
	// rlwimi r11,r4,17,12,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0xE0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12260, ctx.r11.u32);
	// bne 0x822711d0
	if (!ctx.cr0.eq) goto loc_822711D0;
	// rlwinm r11,r11,0,12,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0000;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822711d0
	if (!ctx.cr6.eq) goto loc_822711D0;
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// li r12,-257
	ctx.r12.s64 = -257;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// b 0x822711d8
	goto loc_822711D8;
loc_822711D0:
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_822711D8:
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822711EC"))) PPC_WEAK_FUNC(sub_822711EC);
PPC_FUNC_IMPL(__imp__sub_822711EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822711F0"))) PPC_WEAK_FUNC(sub_822711F0);
PPC_FUNC_IMPL(__imp__sub_822711F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822711FC"))) PPC_WEAK_FUNC(sub_822711FC);
PPC_FUNC_IMPL(__imp__sub_822711FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271200"))) PPC_WEAK_FUNC(sub_82271200);
PPC_FUNC_IMPL(__imp__sub_82271200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227121C"))) PPC_WEAK_FUNC(sub_8227121C);
PPC_FUNC_IMPL(__imp__sub_8227121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271220"))) PPC_WEAK_FUNC(sub_82271220);
PPC_FUNC_IMPL(__imp__sub_82271220) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227122C"))) PPC_WEAK_FUNC(sub_8227122C);
PPC_FUNC_IMPL(__imp__sub_8227122C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271230"))) PPC_WEAK_FUNC(sub_82271230);
PPC_FUNC_IMPL(__imp__sub_82271230) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227124C"))) PPC_WEAK_FUNC(sub_8227124C);
PPC_FUNC_IMPL(__imp__sub_8227124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271250"))) PPC_WEAK_FUNC(sub_82271250);
PPC_FUNC_IMPL(__imp__sub_82271250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227125C"))) PPC_WEAK_FUNC(sub_8227125C);
PPC_FUNC_IMPL(__imp__sub_8227125C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271260"))) PPC_WEAK_FUNC(sub_82271260);
PPC_FUNC_IMPL(__imp__sub_82271260) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,5,26,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r11,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227127C"))) PPC_WEAK_FUNC(sub_8227127C);
PPC_FUNC_IMPL(__imp__sub_8227127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271280"))) PPC_WEAK_FUNC(sub_82271280);
PPC_FUNC_IMPL(__imp__sub_82271280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227128C"))) PPC_WEAK_FUNC(sub_8227128C);
PPC_FUNC_IMPL(__imp__sub_8227128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271290"))) PPC_WEAK_FUNC(sub_82271290);
PPC_FUNC_IMPL(__imp__sub_82271290) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10562(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10562, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822712A4"))) PPC_WEAK_FUNC(sub_822712A4);
PPC_FUNC_IMPL(__imp__sub_822712A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822712A8"))) PPC_WEAK_FUNC(sub_822712A8);
PPC_FUNC_IMPL(__imp__sub_822712A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10562(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10562);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822712B0"))) PPC_WEAK_FUNC(sub_822712B0);
PPC_FUNC_IMPL(__imp__sub_822712B0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,13984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13984, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822712B8"))) PPC_WEAK_FUNC(sub_822712B8);
PPC_FUNC_IMPL(__imp__sub_822712B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,13984(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13984);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822712C0"))) PPC_WEAK_FUNC(sub_822712C0);
PPC_FUNC_IMPL(__imp__sub_822712C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// rlwimi r11,r4,23,2,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3F800000) | (ctx.r11.u64 & 0xFFFFFFFFC07FFFFF);
	// stw r11,12260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12260, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822712D0"))) PPC_WEAK_FUNC(sub_822712D0);
PPC_FUNC_IMPL(__imp__sub_822712D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// rlwinm r3,r11,9,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822712DC"))) PPC_WEAK_FUNC(sub_822712DC);
PPC_FUNC_IMPL(__imp__sub_822712DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822712E0"))) PPC_WEAK_FUNC(sub_822712E0);
PPC_FUNC_IMPL(__imp__sub_822712E0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822712E8;
	sub_8224878C(ctx, base);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lbz r9,10864(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10864);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r8,11784
	ctx.r8.s64 = ctx.r8.s64 + 11784;
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r6,r6,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0x1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r29,r7,11,20,20
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r7.u32, 11) & 0x800) | (ctx.r29.u64 & 0xFFFFFFFFFFFFF7FF);
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// rldicr r6,r30,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// srd r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r8.u8 & 0x7F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwimi r31,r9,21,9,10
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 21) & 0x600000) | (ctx.r31.u64 & 0xFFFFFFFFFF9FFFFF);
	// rlwimi r31,r9,21,4,6
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 21) & 0xE000000) | (ctx.r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lbz r9,10890(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10890);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r6,r7,31,13,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFF80000);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r6,r7,31,1,11
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r6.u64 & 0xFFFFFFFF800FFFFF);
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r7,r6,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFF;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r10,r29,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822713A8"))) PPC_WEAK_FUNC(sub_822713A8);
PPC_FUNC_IMPL(__imp__sub_822713A8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// rlwinm r10,r9,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822713DC"))) PPC_WEAK_FUNC(sub_822713DC);
PPC_FUNC_IMPL(__imp__sub_822713DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822713E0"))) PPC_WEAK_FUNC(sub_822713E0);
PPC_FUNC_IMPL(__imp__sub_822713E0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,10890(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10890);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r5,r5,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r30,r31,31,13,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x7FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r30,r31,31,1,11
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x7FF00000) | (ctx.r30.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r31,r30,13,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0xFFF;
	// srd r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// and r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 & ctx.r9.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,10890
	ctx.r9.s64 = ctx.r11.s64 + 10890;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,10890(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10890, ctx.r6.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271474"))) PPC_WEAK_FUNC(sub_82271474);
PPC_FUNC_IMPL(__imp__sub_82271474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271478"))) PPC_WEAK_FUNC(sub_82271478);
PPC_FUNC_IMPL(__imp__sub_82271478) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,10890(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10890);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271488"))) PPC_WEAK_FUNC(sub_82271488);
PPC_FUNC_IMPL(__imp__sub_82271488) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82271490;
	sub_8224878C(ctx, base);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lbz r9,10864(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10864);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r8,11784
	ctx.r8.s64 = ctx.r8.s64 + 11784;
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r6,r6,21,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 21) & 0x1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r29,r7,10,21,21
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r7.u32, 10) & 0x400) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFBFF);
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// rldicr r6,r30,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// srd r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r8.u8 & 0x7F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwimi r31,r9,19,11,12
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 19) & 0x180000) | (ctx.r31.u64 & 0xFFFFFFFFFFE7FFFF);
	// rlwimi r31,r9,19,4,6
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 19) & 0xE000000) | (ctx.r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lbz r9,10890(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10890);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r6,r7,31,13,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFF80000);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r6,r7,31,1,11
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r6.u64 & 0xFFFFFFFF800FFFFF);
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r7,r6,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFF;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r10,r29,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82271550"))) PPC_WEAK_FUNC(sub_82271550);
PPC_FUNC_IMPL(__imp__sub_82271550) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// rlwinm r10,r9,13,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271584"))) PPC_WEAK_FUNC(sub_82271584);
PPC_FUNC_IMPL(__imp__sub_82271584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271588"))) PPC_WEAK_FUNC(sub_82271588);
PPC_FUNC_IMPL(__imp__sub_82271588) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,10890(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10890);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rldicr r31,r8,63,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r5,r30,31,13,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r30.u32, 31) & 0x7FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r5,r30,31,1,11
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r30.u32, 31) & 0x7FF00000) | (ctx.r5.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r30,r7,32
	ctx.r30.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r7,r5,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xFFF;
	// srd r5,r31,r30
	ctx.r5.u64 = ctx.r30.u8 & 0x40 ? 0 : (ctx.r31.u64 >> (ctx.r30.u8 & 0x7F));
	// and r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addi r9,r11,10890
	ctx.r9.s64 = ctx.r11.s64 + 10890;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,10890(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10890, ctx.r6.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271614"))) PPC_WEAK_FUNC(sub_82271614);
PPC_FUNC_IMPL(__imp__sub_82271614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271618"))) PPC_WEAK_FUNC(sub_82271618);
PPC_FUNC_IMPL(__imp__sub_82271618) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,10890(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10890);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271628"))) PPC_WEAK_FUNC(sub_82271628);
PPC_FUNC_IMPL(__imp__sub_82271628) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,23,7,8
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0x1800000) | (ctx.r8.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271664"))) PPC_WEAK_FUNC(sub_82271664);
PPC_FUNC_IMPL(__imp__sub_82271664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271668"))) PPC_WEAK_FUNC(sub_82271668);
PPC_FUNC_IMPL(__imp__sub_82271668) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// rlwinm r3,r11,9,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227167C"))) PPC_WEAK_FUNC(sub_8227167C);
PPC_FUNC_IMPL(__imp__sub_8227167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271680"))) PPC_WEAK_FUNC(sub_82271680);
PPC_FUNC_IMPL(__imp__sub_82271680) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,10890(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10890);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r5,r5,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r30,r31,31,13,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x7FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r30,r31,31,1,11
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x7FF00000) | (ctx.r30.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r31,r30,13,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0xFFF;
	// srd r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// and r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 & ctx.r9.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,10890
	ctx.r9.s64 = ctx.r11.s64 + 10890;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,10890(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10890, ctx.r6.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271714"))) PPC_WEAK_FUNC(sub_82271714);
PPC_FUNC_IMPL(__imp__sub_82271714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271718"))) PPC_WEAK_FUNC(sub_82271718);
PPC_FUNC_IMPL(__imp__sub_82271718) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,10890(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10890);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271728"))) PPC_WEAK_FUNC(sub_82271728);
PPC_FUNC_IMPL(__imp__sub_82271728) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82271748
	if (!ctx.cr0.eq) goto loc_82271748;
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82271784
	if (ctx.cr0.eq) goto loc_82271784;
loc_82271748:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,11784
	ctx.r10.s64 = ctx.r10.s64 + 11784;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srd r8,r6,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// rlwimi r9,r10,25,4,6
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0xE000000) | (ctx.r9.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_82271784:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,10864(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10864, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271790"))) PPC_WEAK_FUNC(sub_82271790);
PPC_FUNC_IMPL(__imp__sub_82271790) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,10864(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10864);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227179C"))) PPC_WEAK_FUNC(sub_8227179C);
PPC_FUNC_IMPL(__imp__sub_8227179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822717A0"))) PPC_WEAK_FUNC(sub_822717A0);
PPC_FUNC_IMPL(__imp__sub_822717A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lfs f0,11856(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11856);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r8,r9,5,23,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1E0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFE1F);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822717FC"))) PPC_WEAK_FUNC(sub_822717FC);
PPC_FUNC_IMPL(__imp__sub_822717FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271800"))) PPC_WEAK_FUNC(sub_82271800);
PPC_FUNC_IMPL(__imp__sub_82271800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,1172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// lfs f0,11852(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11852);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271844"))) PPC_WEAK_FUNC(sub_82271844);
PPC_FUNC_IMPL(__imp__sub_82271844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271848"))) PPC_WEAK_FUNC(sub_82271848);
PPC_FUNC_IMPL(__imp__sub_82271848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lfs f0,27096(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27096);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r8,r9,12,10,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0x3FF000) | (ctx.r8.u64 & 0xFFFFFFFFFFC00FFF);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822718A4"))) PPC_WEAK_FUNC(sub_822718A4);
PPC_FUNC_IMPL(__imp__sub_822718A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822718A8"))) PPC_WEAK_FUNC(sub_822718A8);
PPC_FUNC_IMPL(__imp__sub_822718A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,1168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1168);
	// lfs f0,27092(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27092);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// srawi r11,r11,22
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 22;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822718E8"))) PPC_WEAK_FUNC(sub_822718E8);
PPC_FUNC_IMPL(__imp__sub_822718E8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3224
	ctx.r11.s64 = ctx.r4.s64 + 3224;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271948
	if (ctx.cr6.eq) goto loc_82271948;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r11,r11,30,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x8227191c
	if (ctx.cr6.gt) goto loc_8227191C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8227191C:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r9,r11,2,26,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x3C) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFC3);
	// rldicr r11,r7,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_82271948:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,12332(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12332, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271954"))) PPC_WEAK_FUNC(sub_82271954);
PPC_FUNC_IMPL(__imp__sub_82271954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271958"))) PPC_WEAK_FUNC(sub_82271958);
PPC_FUNC_IMPL(__imp__sub_82271958) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,12332(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12332);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271964"))) PPC_WEAK_FUNC(sub_82271964);
PPC_FUNC_IMPL(__imp__sub_82271964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271968"))) PPC_WEAK_FUNC(sub_82271968);
PPC_FUNC_IMPL(__imp__sub_82271968) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3224
	ctx.r11.s64 = ctx.r4.s64 + 3224;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822719c8
	if (ctx.cr6.eq) goto loc_822719C8;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r11,r11,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8227199c
	if (ctx.cr6.lt) goto loc_8227199C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8227199C:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r9,r11,6,22,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x3C0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC3F);
	// rldicr r11,r7,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_822719C8:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,12358(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12358, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822719D4"))) PPC_WEAK_FUNC(sub_822719D4);
PPC_FUNC_IMPL(__imp__sub_822719D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822719D8"))) PPC_WEAK_FUNC(sub_822719D8);
PPC_FUNC_IMPL(__imp__sub_822719D8) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,12358(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12358);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822719E4"))) PPC_WEAK_FUNC(sub_822719E4);
PPC_FUNC_IMPL(__imp__sub_822719E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822719E8"))) PPC_WEAK_FUNC(sub_822719E8);
PPC_FUNC_IMPL(__imp__sub_822719E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addic r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfe r10,r10,r5
	temp.u8 = (~ctx.r10.u32 + ctx.r5.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r10,r7,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// srd r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271A2C"))) PPC_WEAK_FUNC(sub_82271A2C);
PPC_FUNC_IMPL(__imp__sub_82271A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271A30"))) PPC_WEAK_FUNC(sub_82271A30);
PPC_FUNC_IMPL(__imp__sub_82271A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,1172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271A54"))) PPC_WEAK_FUNC(sub_82271A54);
PPC_FUNC_IMPL(__imp__sub_82271A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271A58"))) PPC_WEAK_FUNC(sub_82271A58);
PPC_FUNC_IMPL(__imp__sub_82271A58) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271A90"))) PPC_WEAK_FUNC(sub_82271A90);
PPC_FUNC_IMPL(__imp__sub_82271A90) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r3,r11,22,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271AA4"))) PPC_WEAK_FUNC(sub_82271AA4);
PPC_FUNC_IMPL(__imp__sub_82271AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271AA8"))) PPC_WEAK_FUNC(sub_82271AA8);
PPC_FUNC_IMPL(__imp__sub_82271AA8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271AE0"))) PPC_WEAK_FUNC(sub_82271AE0);
PPC_FUNC_IMPL(__imp__sub_82271AE0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r3,r11,19,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271AF4"))) PPC_WEAK_FUNC(sub_82271AF4);
PPC_FUNC_IMPL(__imp__sub_82271AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271AF8"))) PPC_WEAK_FUNC(sub_82271AF8);
PPC_FUNC_IMPL(__imp__sub_82271AF8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271B30"))) PPC_WEAK_FUNC(sub_82271B30);
PPC_FUNC_IMPL(__imp__sub_82271B30) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lhzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271B44"))) PPC_WEAK_FUNC(sub_82271B44);
PPC_FUNC_IMPL(__imp__sub_82271B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271B48"))) PPC_WEAK_FUNC(sub_82271B48);
PPC_FUNC_IMPL(__imp__sub_82271B48) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,3,27,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x18) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271B84"))) PPC_WEAK_FUNC(sub_82271B84);
PPC_FUNC_IMPL(__imp__sub_82271B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271B88"))) PPC_WEAK_FUNC(sub_82271B88);
PPC_FUNC_IMPL(__imp__sub_82271B88) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// rlwinm r3,r11,29,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271B9C"))) PPC_WEAK_FUNC(sub_82271B9C);
PPC_FUNC_IMPL(__imp__sub_82271B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271BA0"))) PPC_WEAK_FUNC(sub_82271BA0);
PPC_FUNC_IMPL(__imp__sub_82271BA0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,22,5,9
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x7C00000) | (ctx.r8.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271BDC"))) PPC_WEAK_FUNC(sub_82271BDC);
PPC_FUNC_IMPL(__imp__sub_82271BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271BE0"))) PPC_WEAK_FUNC(sub_82271BE0);
PPC_FUNC_IMPL(__imp__sub_82271BE0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1168);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r3,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271BF8"))) PPC_WEAK_FUNC(sub_82271BF8);
PPC_FUNC_IMPL(__imp__sub_82271BF8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,27,0,4
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 27) & 0xF8000000) | (ctx.r8.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271C34"))) PPC_WEAK_FUNC(sub_82271C34);
PPC_FUNC_IMPL(__imp__sub_82271C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271C38"))) PPC_WEAK_FUNC(sub_82271C38);
PPC_FUNC_IMPL(__imp__sub_82271C38) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1168);
	// srawi r3,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271C4C"))) PPC_WEAK_FUNC(sub_82271C4C);
PPC_FUNC_IMPL(__imp__sub_82271C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271C50"))) PPC_WEAK_FUNC(sub_82271C50);
PPC_FUNC_IMPL(__imp__sub_82271C50) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,2,29,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0x4) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271C8C"))) PPC_WEAK_FUNC(sub_82271C8C);
PPC_FUNC_IMPL(__imp__sub_82271C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271C90"))) PPC_WEAK_FUNC(sub_82271C90);
PPC_FUNC_IMPL(__imp__sub_82271C90) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271CA4"))) PPC_WEAK_FUNC(sub_82271CA4);
PPC_FUNC_IMPL(__imp__sub_82271CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271CA8"))) PPC_WEAK_FUNC(sub_82271CA8);
PPC_FUNC_IMPL(__imp__sub_82271CA8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r7,r10,11,20,20
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// srd r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271CEC"))) PPC_WEAK_FUNC(sub_82271CEC);
PPC_FUNC_IMPL(__imp__sub_82271CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82271CF0"))) PPC_WEAK_FUNC(sub_82271CF0);
PPC_FUNC_IMPL(__imp__sub_82271CF0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271D08"))) PPC_WEAK_FUNC(sub_82271D08);
PPC_FUNC_IMPL(__imp__sub_82271D08) {
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
	// lfs f0,13000(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13000);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lfs f13,13008(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13008);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f0,13012(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13012);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,13004(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13004);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lwz r31,8(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r30,12(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,12264(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12264);
	// stw r11,13028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13028, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r10,13032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13032, ctx.r10.u32);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r31,13036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13036, ctx.r31.u32);
	// stw r30,13040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13040, ctx.r30.u32);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// beq cr6,0x82271dc4
	if (ctx.cr6.eq) goto loc_82271DC4;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82271da0
	if (ctx.cr6.gt) goto loc_82271DA0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82271DA0:
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82271dac
	if (ctx.cr6.gt) goto loc_82271DAC;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82271DAC:
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82271db8
	if (ctx.cr6.lt) goto loc_82271DB8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82271DB8:
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82271dc4
	if (ctx.cr6.lt) goto loc_82271DC4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_82271DC4:
	// lwz r11,10436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// lwz r10,10440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r5,16,1,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x7FFF0000) | (ctx.r11.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r10,r7,16,1,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x7FFF0000) | (ctx.r10.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r11,r4,0,17,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x7FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF8000);
	// rlwimi r10,r6,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw r11,10436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10436, ctx.r11.u32);
	// stw r10,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r10.u32);
	// bl 0x8226f758
	ctx.lr = 0x82271DE8;
	sub_8226F758(ctx, base);
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

__attribute__((alias("__imp__sub_82271E00"))) PPC_WEAK_FUNC(sub_82271E00);
PPC_FUNC_IMPL(__imp__sub_82271E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,13000(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13000);
	ctx.f0.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f0.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// lfs f0,13004(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13004);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// li r9,12
	ctx.r9.s64 = 12;
	// stfiwx f0,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.f0.u32);
	// lfs f0,13008(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13008);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.f0.u32);
	// lfs f0,13012(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13012);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.f0.u32);
	// lfs f0,13016(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13016);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,13020(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13020);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82271E50"))) PPC_WEAK_FUNC(sub_82271E50);
PPC_FUNC_IMPL(__imp__sub_82271E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82271E58;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82271ec0
	if (ctx.cr6.eq) goto loc_82271EC0;
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// subfic r11,r4,17
	ctx.xer.ca = ctx.r4.u32 <= 17;
	ctx.r11.s64 = 17 - ctx.r4.s64;
	// lwz r5,28(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r4,r11,222
	ctx.r4.s64 = ctx.r11.s64 + 222;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r7,512
	ctx.r11.s64 = ctx.r7.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r6,r6,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r6.s64;
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// stw r6,1780(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1780, ctx.r6.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_82271EC0:
	// addi r11,r29,3203
	ctx.r11.s64 = ctx.r29.s64 + 3203;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r27,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82271f38
	if (ctx.cr6.eq) goto loc_82271F38;
	// lwz r11,11036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271ee8
	if (ctx.cr6.eq) goto loc_82271EE8;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// b 0x82271f38
	goto loc_82271F38;
loc_82271EE8:
	// lwz r11,11040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11040);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82271f38
	if (ctx.cr0.eq) goto loc_82271F38;
	// lwz r11,13916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13916);
	// lwz r3,13912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13912);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82271f10
	if (ctx.cr6.lt) goto loc_82271F10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82279040
	ctx.lr = 0x82271F10;
	sub_82279040(ctx, base);
loc_82271F10:
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
loc_82271F38:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stwx r30,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r30.u32);
	// rlwinm r9,r26,30,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0xFF;
	// rlwinm. r10,r26,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,12880(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12880, ctx.r9.u8);
	// beq 0x82271f68
	if (ctx.cr0.eq) goto loc_82271F68;
	// lbz r11,12240(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12240);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82271f68
	if (ctx.cr6.eq) goto loc_82271F68;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82271F68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82271F70"))) PPC_WEAK_FUNC(sub_82271F70);
PPC_FUNC_IMPL(__imp__sub_82271F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82271F78;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12788(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12788);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82271ff4
	if (ctx.cr6.eq) goto loc_82271FF4;
	// lwz r11,11036(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82271fa4
	if (ctx.cr6.eq) goto loc_82271FA4;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x82271ff4
	goto loc_82271FF4;
loc_82271FA4:
	// lwz r11,11040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11040);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82271ff4
	if (ctx.cr0.eq) goto loc_82271FF4;
	// lwz r11,13916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13916);
	// lwz r3,13912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13912);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82271fcc
	if (ctx.cr6.lt) goto loc_82271FCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82279040
	ctx.lr = 0x82271FCC;
	sub_82279040(ctx, base);
loc_82271FCC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r30,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
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
loc_82271FF4:
	// stw r29,12788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12788, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82272000"))) PPC_WEAK_FUNC(sub_82272000);
PPC_FUNC_IMPL(__imp__sub_82272000) {
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
	// addi r11,r4,3198
	ctx.r11.s64 = ctx.r4.s64 + 3198;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227202c
	if (ctx.cr6.eq) goto loc_8227202C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82268250
	ctx.lr = 0x8227202C;
	sub_82268250(ctx, base);
loc_8227202C:
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

__attribute__((alias("__imp__sub_82272044"))) PPC_WEAK_FUNC(sub_82272044);
PPC_FUNC_IMPL(__imp__sub_82272044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272048"))) PPC_WEAK_FUNC(sub_82272048);
PPC_FUNC_IMPL(__imp__sub_82272048) {
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
	// lwz r31,12808(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12808);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227206c
	if (ctx.cr6.eq) goto loc_8227206C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82268250
	ctx.lr = 0x8227206C;
	sub_82268250(ctx, base);
loc_8227206C:
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

__attribute__((alias("__imp__sub_82272084"))) PPC_WEAK_FUNC(sub_82272084);
PPC_FUNC_IMPL(__imp__sub_82272084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272088"))) PPC_WEAK_FUNC(sub_82272088);
PPC_FUNC_IMPL(__imp__sub_82272088) {
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
	// lwz r31,15220(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15220);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822720ac
	if (ctx.cr6.eq) goto loc_822720AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82268250
	ctx.lr = 0x822720AC;
	sub_82268250(ctx, base);
loc_822720AC:
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

__attribute__((alias("__imp__sub_822720C4"))) PPC_WEAK_FUNC(sub_822720C4);
PPC_FUNC_IMPL(__imp__sub_822720C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822720C8"))) PPC_WEAK_FUNC(sub_822720C8);
PPC_FUNC_IMPL(__imp__sub_822720C8) {
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
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227fae8
	ctx.lr = 0x822720F0;
	sub_8227FAE8(ctx, base);
	// addi r30,r31,15392
	ctx.r30.s64 = ctx.r31.s64 + 15392;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r8,r11,1536
	ctx.r8.s64 = ctx.r11.s64 + 1536;
loc_82272100:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82272120
	if (!ctx.cr0.eq) goto loc_82272120;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82272100
	if (!ctx.cr6.eq) goto loc_82272100;
loc_82272120:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82272180
	if (ctx.cr0.eq) goto loc_82272180;
	// bl 0x8241e04c
	ctx.lr = 0x8227212C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82272164
	if (ctx.cr6.eq) goto loc_82272164;
	// lwz r3,24348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272158
	if (ctx.cr6.eq) goto loc_82272158;
	// lwz r11,24352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24352);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82272158
	if (!ctx.cr0.eq) goto loc_82272158;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82087ab0
	ctx.lr = 0x82272158;
	sub_82087AB0(ctx, base);
loc_82272158:
	// lwz r11,24352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24352);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,24352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24352, ctx.r11.u32);
loc_82272164:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x82272174;
	sub_82248A40(ctx, base);
	// lwz r11,17100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17100);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,17100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17100, ctx.r11.u32);
loc_82272180:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
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

__attribute__((alias("__imp__sub_82272198"))) PPC_WEAK_FUNC(sub_82272198);
PPC_FUNC_IMPL(__imp__sub_82272198) {
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
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227fb80
	ctx.lr = 0x822721C0;
	sub_8227FB80(ctx, base);
	// addi r30,r31,15392
	ctx.r30.s64 = ctx.r31.s64 + 15392;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r8,r11,1536
	ctx.r8.s64 = ctx.r11.s64 + 1536;
loc_822721D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822721f0
	if (!ctx.cr0.eq) goto loc_822721F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822721d0
	if (!ctx.cr6.eq) goto loc_822721D0;
loc_822721F0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82272250
	if (ctx.cr0.eq) goto loc_82272250;
	// bl 0x8241e04c
	ctx.lr = 0x822721FC;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82272234
	if (ctx.cr6.eq) goto loc_82272234;
	// lwz r3,24348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82272228
	if (ctx.cr6.eq) goto loc_82272228;
	// lwz r11,24352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24352);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82272228
	if (!ctx.cr0.eq) goto loc_82272228;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82087ab0
	ctx.lr = 0x82272228;
	sub_82087AB0(ctx, base);
loc_82272228:
	// lwz r11,24352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24352);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,24352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24352, ctx.r11.u32);
loc_82272234:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x82272244;
	sub_82248A40(ctx, base);
	// lwz r11,17100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17100);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,17100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17100, ctx.r11.u32);
loc_82272250:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
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

__attribute__((alias("__imp__sub_82272268"))) PPC_WEAK_FUNC(sub_82272268);
PPC_FUNC_IMPL(__imp__sub_82272268) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x822722f0
	if (!ctx.cr6.eq) goto loc_822722F0;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8227229c
	if (!ctx.cr6.gt) goto loc_8227229C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x8227229C;
	sub_82277C20(ctx, base);
loc_8227229C:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 24576;
	// ori r10,r10,25088
	ctx.r10.u64 = ctx.r10.u64 | 25088;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,13060(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13060);
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r8,r8,24832
	ctx.r8.u64 = ctx.r8.u64 | 24832;
	// ori r7,r7,25344
	ctx.r7.u64 = ctx.r7.u64 | 25344;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lwz r11,13064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13064);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_822722F0:
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
	ctx.lr = 0x82272320;
	sub_8226F758(ctx, base);
	// lwz r11,11044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11044);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,20,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3;
	// bl 0x82279350
	ctx.lr = 0x82272330;
	sub_82279350(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_8227235C"))) PPC_WEAK_FUNC(sub_8227235C);
PPC_FUNC_IMPL(__imp__sub_8227235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272360"))) PPC_WEAK_FUNC(sub_82272360);
PPC_FUNC_IMPL(__imp__sub_82272360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82249920
	ctx.lr = 0x82272374;
	sub_82249920(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12792(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12792);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// fmr f29,f5
	ctx.f29.f64 = ctx.f5.f64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmr f28,f6
	ctx.f28.f64 = ctx.f6.f64;
	// bne 0x822723a8
	if (!ctx.cr0.eq) goto loc_822723A8;
	// lwz r9,12808(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12808);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8227259c
	if (ctx.cr6.eq) goto loc_8227259C;
loc_822723A8:
	// lbz r11,11068(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822723bc
	if (ctx.cr0.eq) goto loc_822723BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82272448
	goto loc_82272448;
loc_822723BC:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272440
	if (ctx.cr0.eq) goto loc_82272440;
	// lwz r11,13080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13080);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822723d8
	if (ctx.cr6.eq) goto loc_822723D8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82272440
	if (!ctx.cr6.eq) goto loc_82272440;
loc_822723D8:
	// lwz r11,12796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12796);
	// lwz r10,13084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13084);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822723f0
	if (ctx.cr6.eq) goto loc_822723F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272440
	if (!ctx.cr6.eq) goto loc_82272440;
loc_822723F0:
	// lwz r11,12800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12800);
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13088);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272408
	if (ctx.cr6.eq) goto loc_82272408;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272440
	if (!ctx.cr6.eq) goto loc_82272440;
loc_82272408:
	// lwz r11,12804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12804);
	// lwz r10,13092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13092);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272420
	if (ctx.cr6.eq) goto loc_82272420;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272440
	if (!ctx.cr6.eq) goto loc_82272440;
loc_82272420:
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// lwz r10,13096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13096);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272438
	if (ctx.cr6.eq) goto loc_82272438;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272440
	if (!ctx.cr6.eq) goto loc_82272440;
loc_82272438:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82272444
	goto loc_82272444;
loc_82272440:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82272444:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82272448:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227245c
	if (ctx.cr0.eq) goto loc_8227245C;
	// lwz r11,13532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13532);
	// lwz r7,13536(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13536);
	// b 0x82272470
	goto loc_82272470;
loc_8227245C:
	// lwz r10,36(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r11,r10,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r10,29,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
loc_82272470:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctiwz f0,f3
	ctx.f0.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f30
	ctx.f0.s64 = (ctx.f30.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822724a4
	if (!ctx.cr6.lt) goto loc_822724A4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822724A4:
	// fctiwz f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822724c0
	if (ctx.cr6.lt) goto loc_822724C0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_822724C0:
	// subf. r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// blt 0x822724d4
	if (ctx.cr0.lt) goto loc_822724D4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822724dc
	if (!ctx.cr6.lt) goto loc_822724DC;
loc_822724D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822724DC:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f31,13000(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 13000, temp.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stfs f30,13004(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 13004, temp.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// frsp f27,f0
	ctx.f27.f64 = double(float(ctx.f0.f64));
	// stfs f29,13016(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 13016, temp.u32);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// stfs f28,13020(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 13020, temp.u32);
	// stfs f27,13012(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 13012, temp.u32);
	// stw r11,13024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13024, ctx.r11.u32);
	// addi r4,r31,13028
	ctx.r4.s64 = ctx.r31.s64 + 13028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f26,f0
	ctx.f26.f64 = double(float(ctx.f0.f64));
	// stfs f26,13008(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 13008, temp.u32);
	// bl 0x82271d08
	ctx.lr = 0x82272530;
	sub_82271D08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// stfs f0,10520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10520, temp.u32);
	// stfs f29,10524(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10524, temp.u32);
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// stfs f13,10504(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10504, temp.u32);
	// fmuls f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f13,10508(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10508, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,10512(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10512, temp.u32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,10516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10516, temp.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8227259C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8224996c
	ctx.lr = 0x822725A8;
	sub_8224996C(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822725B8"))) PPC_WEAK_FUNC(sub_822725B8);
PPC_FUNC_IMPL(__imp__sub_822725B8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12264, ctx.r4.u32);
	// addi r4,r3,13028
	ctx.r4.s64 = ctx.r3.s64 + 13028;
	// b 0x82271d08
	sub_82271D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822725C4"))) PPC_WEAK_FUNC(sub_822725C4);
PPC_FUNC_IMPL(__imp__sub_822725C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822725C8"))) PPC_WEAK_FUNC(sub_822725C8);
PPC_FUNC_IMPL(__imp__sub_822725C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f3,f12
	ctx.f3.f64 = double(float(ctx.f12.f64));
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82272360
	ctx.lr = 0x82272638;
	sub_82272360(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82272648"))) PPC_WEAK_FUNC(sub_82272648);
PPC_FUNC_IMPL(__imp__sub_82272648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82272360
	sub_82272360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82272668"))) PPC_WEAK_FUNC(sub_82272668);
PPC_FUNC_IMPL(__imp__sub_82272668) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm. r11,r10,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227267c
	if (!ctx.cr0.eq) goto loc_8227267C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82272694
	goto loc_82272694;
loc_8227267C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lis r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82272690
	if (!ctx.cr6.eq) goto loc_82272690;
	// ori r11,r11,32769
	ctx.r11.u64 = ctx.r11.u64 | 32769;
	// b 0x82272694
	goto loc_82272694;
loc_82272690:
	// ori r11,r11,49155
	ctx.r11.u64 = ctx.r11.u64 | 49155;
loc_82272694:
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r11,10684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10684, ctx.r11.u32);
	// stw r10,10368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10368, ctx.r10.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | ctx.r12.u64;
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// addi r9,r11,11768
	ctx.r9.s64 = ctx.r11.s64 + 11768;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// addi r4,r10,11744
	ctx.r4.s64 = ctx.r10.s64 + 11744;
	// or r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 | ctx.r12.u64;
	// std r8,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// lwz r11,11768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11768);
	// stw r11,13028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13028, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,13032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13032, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,13036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13036, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,13040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13040, ctx.r11.u32);
	// b 0x822725c8
	sub_822725C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822726F8"))) PPC_WEAK_FUNC(sub_822726F8);
PPC_FUNC_IMPL(__imp__sub_822726F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82272700;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3198
	ctx.r11.s64 = ctx.r4.s64 + 3198;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stwx r5,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r5.u32);
	// beq cr6,0x82272828
	if (ctx.cr6.eq) goto loc_82272828;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8227272c
	if (ctx.cr6.eq) goto loc_8227272C;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
loc_8227272C:
	// addi r10,r11,2593
	ctx.r10.s64 = ctx.r11.s64 + 2593;
	// lwz r7,28(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r8,r9,263
	ctx.r8.u64 = ctx.r9.u64 | 263;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stwx r7,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u32);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrldi r10,r3,56
	ctx.r10.u64 = ctx.r3.u64 & 0xFF;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srd r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// addi r10,r4,3096
	ctx.r10.s64 = ctx.r4.s64 + 3096;
	// ldx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stdx r7,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u64);
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r7,r10,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stwx r7,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u32);
	// beq cr6,0x82272828
	if (ctx.cr6.eq) goto loc_82272828;
	// subfic r11,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r4.s64;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r11,r3,2593
	ctx.r11.s64 = ctx.r3.s64 + 2593;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r30,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwinm r11,r6,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822727c8
	if (ctx.cr6.eq) goto loc_822727C8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822727c8
	if (ctx.cr6.eq) goto loc_822727C8;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x822727c8
	if (ctx.cr6.eq) goto loc_822727C8;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82272828
	if (!ctx.cr6.eq) goto loc_82272828;
loc_822727C8:
	// rlwinm r10,r6,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82272828
	if (ctx.cr0.eq) goto loc_82272828;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// not r29,r10
	ctx.r29.u64 = ~ctx.r10.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r7,r7,-3
	ctx.r7.s64 = ctx.r7.s64 + -3;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r29,r29,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// and r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ctx.r11.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// srawi r11,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 16;
	// rlwimi r10,r6,0,16,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r10.u64 & 0xF0000);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// clrldi r10,r8,56
	ctx.r10.u64 = ctx.r8.u64 & 0xFF;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u64);
loc_82272828:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822729e8
	if (!ctx.cr6.eq) goto loc_822729E8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82272874
	if (!ctx.cr6.eq) goto loc_82272874;
	// lwz r10,10372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10372);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82272858
	if (ctx.cr6.eq) goto loc_82272858;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82272858
	if (ctx.cr6.eq) goto loc_82272858;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x82272874
	if (!ctx.cr6.eq) goto loc_82272874;
loc_82272858:
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r11,r10,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10372, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82272874:
	// lbz r11,11071(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11071);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// andi. r10,r11,247
	ctx.r10.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,11071(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11071, ctx.r10.u8);
	// beq cr6,0x822728c4
	if (ctx.cr6.eq) goto loc_822728C4;
	// lhz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 28);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x822728a8
	if (ctx.cr6.eq) goto loc_822728A8;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x822728a8
	if (ctx.cr6.eq) goto loc_822728A8;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x822728bc
	if (!ctx.cr6.eq) goto loc_822728BC;
loc_822728A8:
	// ori r11,r10,8
	ctx.r11.u64 = ctx.r10.u64 | 8;
	// stb r11,11071(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11071, ctx.r11.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_822728BC:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x822728d0
	goto loc_822728D0;
loc_822728C4:
	// lwz r4,12808(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822728d8
	if (ctx.cr6.eq) goto loc_822728D8;
loc_822728D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272668
	ctx.lr = 0x822728D8;
	sub_82272668(ctx, base);
loc_822728D8:
	// lwz r11,13068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822729b0
	if (!ctx.cr6.eq) goto loc_822729B0;
	// lbz r11,11068(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822729b0
	if (!ctx.cr0.eq) goto loc_822729B0;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822729b0
	if (!ctx.cr0.eq) goto loc_822729B0;
	// lbz r10,12539(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12539);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822729b0
	if (!ctx.cr0.eq) goto loc_822729B0;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82272914
	if (ctx.cr0.eq) goto loc_82272914;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822729a4
	goto loc_822729A4;
loc_82272914:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227299c
	if (ctx.cr0.eq) goto loc_8227299C;
	// lwz r11,12792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12792);
	// lwz r10,13080(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13080);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272934
	if (ctx.cr6.eq) goto loc_82272934;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227299c
	if (!ctx.cr6.eq) goto loc_8227299C;
loc_82272934:
	// lwz r11,12796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12796);
	// lwz r10,13084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13084);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8227294c
	if (ctx.cr6.eq) goto loc_8227294C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227299c
	if (!ctx.cr6.eq) goto loc_8227299C;
loc_8227294C:
	// lwz r11,12800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12800);
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13088);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272964
	if (ctx.cr6.eq) goto loc_82272964;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227299c
	if (!ctx.cr6.eq) goto loc_8227299C;
loc_82272964:
	// lwz r11,12804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12804);
	// lwz r10,13092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13092);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8227297c
	if (ctx.cr6.eq) goto loc_8227297C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227299c
	if (!ctx.cr6.eq) goto loc_8227299C;
loc_8227297C:
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// lwz r10,13096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13096);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272994
	if (ctx.cr6.eq) goto loc_82272994;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227299c
	if (!ctx.cr6.eq) goto loc_8227299C;
loc_82272994:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822729a0
	goto loc_822729A0;
loc_8227299C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822729A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822729A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x822729b4
	if (!ctx.cr0.eq) goto loc_822729B4;
loc_822729B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822729B4:
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// lwz r9,12268(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12268);
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r10,11068(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11068, ctx.r10.u8);
	// lwz r10,12792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12792);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,10460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// stw r9,12268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12268, ctx.r9.u32);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwimi r11,r10,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,10460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10460, ctx.r11.u32);
	// b 0x82272a6c
	goto loc_82272A6C;
loc_822729E8:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82272a14
	if (!ctx.cr6.eq) goto loc_82272A14;
	// lwz r11,12796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12796);
	// lwz r10,12272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12272);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,12272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12272, ctx.r10.u32);
	// rlwimi r9,r11,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// b 0x82272a68
	goto loc_82272A68;
loc_82272A14:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x82272a40
	if (!ctx.cr6.eq) goto loc_82272A40;
	// lwz r11,12800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12800);
	// lwz r10,12276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12276);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,12276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12276, ctx.r10.u32);
	// rlwimi r9,r11,8,20,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF0FF);
	// b 0x82272a68
	goto loc_82272A68;
loc_82272A40:
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x82272a80
	if (!ctx.cr6.eq) goto loc_82272A80;
	// lwz r11,12804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12804);
	// lwz r10,12280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12280);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,12280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12280, ctx.r10.u32);
	// rlwimi r9,r11,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
loc_82272A68:
	// stw r9,10460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10460, ctx.r9.u32);
loc_82272A6C:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82272A80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82272A88"))) PPC_WEAK_FUNC(sub_82272A88);
PPC_FUNC_IMPL(__imp__sub_82272A88) {
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
	// stw r4,12808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12808, ctx.r4.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82272bcc
	if (ctx.cr6.eq) goto loc_82272BCC;
	// lwz r11,12792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272ac0
	if (!ctx.cr6.eq) goto loc_82272AC0;
	// bl 0x82272668
	ctx.lr = 0x82272AC0;
	sub_82272668(ctx, base);
loc_82272AC0:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,10376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10376, ctx.r11.u32);
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// lbz r9,11071(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11071);
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,10560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10560, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwimi r10,r11,5,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r10,11070(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11070, ctx.r10.u8);
	// beq 0x82272ba8
	if (ctx.cr0.eq) goto loc_82272BA8;
	// lbz r11,11068(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82272b00
	if (ctx.cr0.eq) goto loc_82272B00;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82272b90
	goto loc_82272B90;
loc_82272B00:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272b88
	if (ctx.cr0.eq) goto loc_82272B88;
	// lwz r11,12792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12792);
	// lwz r10,13080(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13080);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272b20
	if (ctx.cr6.eq) goto loc_82272B20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272b88
	if (!ctx.cr6.eq) goto loc_82272B88;
loc_82272B20:
	// lwz r11,12796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12796);
	// lwz r10,13084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13084);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272b38
	if (ctx.cr6.eq) goto loc_82272B38;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272b88
	if (!ctx.cr6.eq) goto loc_82272B88;
loc_82272B38:
	// lwz r11,12800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12800);
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13088);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272b50
	if (ctx.cr6.eq) goto loc_82272B50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272b88
	if (!ctx.cr6.eq) goto loc_82272B88;
loc_82272B50:
	// lwz r11,12804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12804);
	// lwz r10,13092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13092);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272b68
	if (ctx.cr6.eq) goto loc_82272B68;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272b88
	if (!ctx.cr6.eq) goto loc_82272B88;
loc_82272B68:
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// lwz r10,13096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13096);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272b80
	if (ctx.cr6.eq) goto loc_82272B80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272b88
	if (!ctx.cr6.eq) goto loc_82272B88;
loc_82272B80:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82272b8c
	goto loc_82272B8C;
loc_82272B88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82272B8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82272B90:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272ba8
	if (ctx.cr0.eq) goto loc_82272BA8;
	// lwz r11,10368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10368);
	// lwz r10,13524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// rlwimi r11,r10,18,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,10368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10368, ctx.r11.u32);
loc_82272BA8:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r12,r12,55,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// b 0x82272bec
	goto loc_82272BEC;
loc_82272BCC:
	// lwz r11,10560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// lbz r10,11070(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,10560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10560, ctx.r11.u32);
	// stb r10,11070(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11070, ctx.r10.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_82272BEC:
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r11,13068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272cc8
	if (!ctx.cr6.eq) goto loc_82272CC8;
	// lbz r11,11068(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82272cc8
	if (!ctx.cr0.eq) goto loc_82272CC8;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82272cc8
	if (!ctx.cr0.eq) goto loc_82272CC8;
	// lbz r10,12539(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12539);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82272cc8
	if (!ctx.cr0.eq) goto loc_82272CC8;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82272c2c
	if (ctx.cr0.eq) goto loc_82272C2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82272cbc
	goto loc_82272CBC;
loc_82272C2C:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272cb4
	if (ctx.cr0.eq) goto loc_82272CB4;
	// lwz r11,12792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12792);
	// lwz r10,13080(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13080);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272c4c
	if (ctx.cr6.eq) goto loc_82272C4C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272cb4
	if (!ctx.cr6.eq) goto loc_82272CB4;
loc_82272C4C:
	// lwz r11,12796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12796);
	// lwz r10,13084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13084);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272c64
	if (ctx.cr6.eq) goto loc_82272C64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272cb4
	if (!ctx.cr6.eq) goto loc_82272CB4;
loc_82272C64:
	// lwz r11,12800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12800);
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13088);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272c7c
	if (ctx.cr6.eq) goto loc_82272C7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272cb4
	if (!ctx.cr6.eq) goto loc_82272CB4;
loc_82272C7C:
	// lwz r11,12804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12804);
	// lwz r10,13092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13092);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272c94
	if (ctx.cr6.eq) goto loc_82272C94;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272cb4
	if (!ctx.cr6.eq) goto loc_82272CB4;
loc_82272C94:
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// lwz r10,13096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13096);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82272cac
	if (ctx.cr6.eq) goto loc_82272CAC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272cb4
	if (!ctx.cr6.eq) goto loc_82272CB4;
loc_82272CAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82272cb8
	goto loc_82272CB8;
loc_82272CB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82272CB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82272CBC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82272ccc
	if (!ctx.cr0.eq) goto loc_82272CCC;
loc_82272CC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82272CCC:
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// lwz r9,12284(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12284);
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r10,11068(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11068, ctx.r10.u8);
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// lwz r10,12808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,12284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12284, ctx.r9.u32);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r11,12288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12288);
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// lwz r9,12808(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,12288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12288, ctx.r11.u32);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// rlwimi r11,r10,0,0,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// stw r11,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_82272D60"))) PPC_WEAK_FUNC(sub_82272D60);
PPC_FUNC_IMPL(__imp__sub_82272D60) {
	PPC_FUNC_PROLOGUE();
	// b 0x822726f8
	sub_822726F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82272D64"))) PPC_WEAK_FUNC(sub_82272D64);
PPC_FUNC_IMPL(__imp__sub_82272D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82272D68"))) PPC_WEAK_FUNC(sub_82272D68);
PPC_FUNC_IMPL(__imp__sub_82272D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82272D70;
	sub_82248770(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// addi r23,r3,48
	ctx.r23.s64 = ctx.r3.s64 + 48;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82272db4
	if (!ctx.cr6.gt) goto loc_82272DB4;
	// bl 0x82277c20
	ctx.lr = 0x82272DB0;
	sub_82277C20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82272DB4:
	// mulli r26,r27,21
	ctx.r26.s64 = ctx.r27.s64 * 21;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276a58
	ctx.lr = 0x82272DC8;
	sub_82276A58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82272dd8
	if (!ctx.cr0.eq) goto loc_82272DD8;
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// b 0x82273014
	goto loc_82273014;
loc_82272DD8:
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
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x82272e04
	if (!ctx.cr0.eq) goto loc_82272E04;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// vcsxwfp128 v63,v63,1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// b 0x82272e08
	goto loc_82272E08;
loc_82272E04:
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
loc_82272E08:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x82272ecc
	if (ctx.cr6.eq) goto loc_82272ECC;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_82272E2C:
	// li r7,16
	ctx.r7.s64 = 16;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,32
	ctx.r4.s64 = 32;
	// lvrx128 v61,r7,r9
	temp.u32 = ctx.r7.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r7,56
	ctx.r7.s64 = 56;
	// vor128 v62,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vcsxwfp128 v62,v62,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vsubfp128 v62,v62,v63
	simde_mm_store_ps(ctx.v62.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v60,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v59,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v62,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// stvewx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,-4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stvewx128 v59,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,24(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stvewx128 v59,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f11,68(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// bdnz 0x82272e2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82272E2C;
loc_82272ECC:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r8,3
	ctx.r10.u64 = ctx.r8.u64 | 3;
	// ori r11,r11,18432
	ctx.r11.u64 = ctx.r11.u64 | 18432;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r9,r26,2,6,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r26.u32, 2) & 0x3FFFFFC) | (ctx.r9.u64 & 0xFFFFFFFFFC000003);
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r10,20480
	ctx.r4.u64 = ctx.r10.u64 | 20480;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,8961
	ctx.r9.s64 = 8961;
	// ori r26,r10,8192
	ctx.r26.u64 = ctx.r10.u64 | 8192;
	// rlwinm. r10,r28,16,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// stwu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r30.u32 = ea;
	// stwu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r30.u32 = ea;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// stwu r29,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// stwu r24,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r30.u32 = ea;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bne 0x82272f64
	if (!ctx.cr0.eq) goto loc_82272F64;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82272f7c
	goto loc_82272F7C;
loc_82272F64:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lis r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82272f78
	if (!ctx.cr6.eq) goto loc_82272F78;
	// ori r10,r10,32769
	ctx.r10.u64 = ctx.r10.u64 | 32769;
	// b 0x82272f7c
	goto loc_82272F7C;
loc_82272F78:
	// ori r10,r10,49155
	ctx.r10.u64 = ctx.r10.u64 | 49155;
loc_82272F7C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,8704
	ctx.r10.s64 = 8704;
	// li r9,8712
	ctx.r9.s64 = 8712;
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r7,r7,13825
	ctx.r7.u64 = ctx.r7.u64 | 13825;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r5,17
	ctx.r5.s64 = 17;
	// mullw r10,r27,r6
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r6.s32);
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// rlwimi r10,r5,3,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_82273014:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82273020"))) PPC_WEAK_FUNC(sub_82273020);
PPC_FUNC_IMPL(__imp__sub_82273020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82273028;
	sub_8224876C(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// rlwinm. r11,r10,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,1
	ctx.r27.s64 = 1;
	// bne 0x82273060
	if (!ctx.cr0.eq) goto loc_82273060;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82273070
	goto loc_82273070;
loc_82273060:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// beq cr6,0x82273070
	if (ctx.cr6.eq) goto loc_82273070;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82273070:
	// li r11,40
	ctx.r11.s64 = 40;
	// li r10,8
	ctx.r10.s64 = 8;
	// slw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// slw r10,r10,r26
	ctx.r10.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r26.u8 & 0x3F));
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// addi r30,r8,-1
	ctx.r30.s64 = ctx.r8.s64 + -1;
	// rotlwi r6,r4,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// rotlwi r8,r29,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// divw r4,r4,r11
	ctx.r4.s32 = ctx.r4.s32 / ctx.r11.s32;
	// rotlwi r5,r30,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r25,r29,r11
	ctx.r25.s32 = ctx.r29.s32 / ctx.r11.s32;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// mullw r31,r4,r11
	ctx.r31.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// divw r4,r30,r10
	ctx.r4.s32 = ctx.r30.s32 / ctx.r10.s32;
	// mullw r30,r25,r11
	ctx.r30.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r11.s32);
	// andc r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twllei r11,0
	// twllei r11,0
	// andc r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// divw r11,r7,r10
	ctx.r11.s32 = ctx.r7.s32 / ctx.r10.s32;
	// andc r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twllei r10,0
	// twllei r10,0
	// twlgei r6,-1
	// twlgei r5,-1
	// mullw r25,r4,r10
	ctx.r25.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// twlgei r8,-1
	// twlgei r9,-1
	// mullw r24,r11,r10
	ctx.r24.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82273240
	if (!ctx.cr6.lt) goto loc_82273240;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x82273240
	if (!ctx.cr6.lt) goto loc_82273240;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,21016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82273240
	if (ctx.cr6.eq) goto loc_82273240;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82273140
	if (!ctx.cr6.gt) goto loc_82273140;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
loc_82273140:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8227315c
	if (!ctx.cr6.lt) goto loc_8227315C;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8227315C:
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82273178
	if (!ctx.cr6.gt) goto loc_82273178;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82273178:
	// cmpw cr6,r24,r7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82273194
	if (!ctx.cr6.lt) goto loc_82273194;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82273194:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r29,372(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r4,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822731d0
	if (ctx.cr0.eq) goto loc_822731D0;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82272d68
	ctx.lr = 0x822731D0;
	sub_82272D68(ctx, base);
loc_822731D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// sraw r8,r31,r27
	temp.u32 = ctx.r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r31.s32 < 0) & (((ctx.r31.s32 >> temp.u32) << temp.u32) != ctx.r31.s32);
	ctx.r8.s64 = ctx.r31.s32 >> temp.u32;
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// rlwimi r23,r11,17,14,15
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x30000) | (ctx.r23.u64 & 0xFFFFFFFFFFFCFFFF);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// sraw r11,r25,r26
	temp.u32 = ctx.r26.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r25.s32 < 0) & (((ctx.r25.s32 >> temp.u32) << temp.u32) != ctx.r25.s32);
	ctx.r11.s64 = ctx.r25.s32 >> temp.u32;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sraw r11,r30,r27
	temp.u32 = ctx.r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r30.s32 < 0) & (((ctx.r30.s32 >> temp.u32) << temp.u32) != ctx.r30.s32);
	ctx.r11.s64 = ctx.r30.s32 >> temp.u32;
	// sraw r9,r24,r26
	temp.u32 = ctx.r26.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r24.s32 < 0) & (((ctx.r24.s32 >> temp.u32) << temp.u32) != ctx.r24.s32);
	ctx.r9.s64 = ctx.r24.s32 >> temp.u32;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// clrlwi r11,r23,18
	ctx.r11.u64 = ctx.r23.u32 & 0x3FFF;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// srw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r27.u8 & 0x3F));
	// rlwimi r11,r23,0,0,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r23.u32, 0) & 0xFFFFC000) | (ctx.r11.u64 & 0xFFFFFFFF00003FFF);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r11,r11,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// srw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r27.u8 & 0x3F));
	// rlwimi r8,r11,18,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 18) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82272d68
	ctx.lr = 0x8227323C;
	sub_82272D68(ctx, base);
	// b 0x8227327c
	goto loc_8227327C;
loc_82273240:
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x82272d68
	ctx.lr = 0x8227327C;
	sub_82272D68(ctx, base);
loc_8227327C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_82273288"))) PPC_WEAK_FUNC(sub_82273288);
PPC_FUNC_IMPL(__imp__sub_82273288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82273290;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,5
	ctx.r27.s64 = 5;
	// lwz r15,10368(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10368);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r7,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r7.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r8,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r9,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r14,r27
	ctx.r14.u64 = ctx.r27.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82273324
	if (ctx.cr6.eq) goto loc_82273324;
	// addi r11,r5,3198
	ctx.r11.s64 = ctx.r5.s64 + 3198;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r14,4
	ctx.r14.s64 = 4;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r21,28(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r11,r21,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8227330c
	if (!ctx.cr6.eq) goto loc_8227330C;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r21,r11,17,12,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0xF0000) | (ctx.r21.u64 & 0xFFFFFFFFFFF0FFFF);
loc_8227330C:
	// rlwinm r11,r21,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xF0000;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82273324
	if (!ctx.cr6.eq) goto loc_82273324;
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r21,r11,16,12,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xF0000) | (ctx.r21.u64 & 0xFFFFFFFFFFF0FFFF);
loc_82273324:
	// lwz r11,10560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r19,0
	ctx.r19.s64 = 0;
	// rlwinm r30,r11,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// beq 0x82273340
	if (ctx.cr0.eq) goto loc_82273340;
	// li r19,118
	ctx.r19.s64 = 118;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
loc_82273340:
	// rlwinm. r11,r28,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822733b4
	if (ctx.cr0.eq) goto loc_822733B4;
	// lwz r29,396(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r19,r19,34561
	ctx.r19.u64 = ctx.r19.u64 | 34561;
	// ori r30,r30,4
	ctx.r30.u64 = ctx.r30.u64 | 4;
	// beq 0x82273368
	if (ctx.cr0.eq) goto loc_82273368;
	// rlwimi r30,r29,8,16,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFF00) | (ctx.r30.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r30,r30,0,27,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// b 0x82273378
	goto loc_82273378;
loc_82273368:
	// rlwinm. r11,r28,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82273378
	if (ctx.cr0.eq) goto loc_82273378;
	// rlwimi r30,r29,8,16,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFF00) | (ctx.r30.u64 & 0xFFFFFFFFFFFF00FF);
	// ori r30,r30,32
	ctx.r30.u64 = ctx.r30.u64 | 32;
loc_82273378:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82273390
	if (!ctx.cr6.gt) goto loc_82273390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82273390;
	sub_82277C20(ctx, base);
loc_82273390:
	// li r11,8461
	ctx.r11.s64 = 8461;
	// li r10,255
	ctx.r10.s64 = 255;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwimi r29,r10,16,0,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFFFF00) | (ctx.r29.u64 & 0xFFFFFFFF000000FF);
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_822733B4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b838
	ctx.lr = 0x822733C4;
	sub_8227B838(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822733dc
	if (!ctx.cr6.gt) goto loc_822733DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x822733DC;
	sub_82277C20(ctx, base);
loc_822733DC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8320
	ctx.r11.u64 = ctx.r11.u64 | 8320;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// rlwinm. r29,r28,0,26,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x30;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// mr r18,r14
	ctx.r18.u64 = ctx.r14.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// bne 0x82273528
	if (!ctx.cr0.eq) goto loc_82273528;
	// rlwinm r3,r21,16,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x82273528
	if (ctx.cr6.eq) goto loc_82273528;
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// beq cr6,0x82273528
	if (ctx.cr6.eq) goto loc_82273528;
	// cmplwi cr6,r3,15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 15, ctx.xer);
	// beq cr6,0x82273528
	if (ctx.cr6.eq) goto loc_82273528;
	// rlwinm. r11,r15,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,16
	ctx.r9.s64 = 16;
	// bne 0x8227344c
	if (!ctx.cr0.eq) goto loc_8227344C;
	// li r11,80
	ctx.r11.s64 = 80;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82273460
	goto loc_82273460;
loc_8227344C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,80
	ctx.r11.s64 = 80;
	// beq cr6,0x82273460
	if (ctx.cr6.eq) goto loc_82273460;
	// li r11,40
	ctx.r11.s64 = 40;
loc_82273460:
	// subf r8,r25,r24
	ctx.r8.s64 = ctx.r24.s64 - ctx.r25.s64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82273528
	if (ctx.cr6.lt) goto loc_82273528;
	// subf r11,r26,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r26.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82273528
	if (ctx.cr6.lt) goto loc_82273528;
	// lvlx128 v63,r0,r16
	temp.u32 = ctx.r16.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// lvrx128 v62,r9,r16
	temp.u32 = ctx.r9.u32 + ctx.r16.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// vor128 v1,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// rlwinm r4,r21,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 12) & 0x3F;
	// bl 0x8226ba50
	ctx.lr = 0x82273494;
	sub_8226BA50(ctx, base);
	// li r10,8707
	ctx.r10.s64 = 8707;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// rlwinm r5,r11,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// li r7,8194
	ctx.r7.s64 = 8194;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// lfd f0,3808(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3808);
	// clrlwi r6,r21,20
	ctx.r6.u64 = ctx.r21.u32 & 0xFFF;
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// lfd f13,30776(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 30776);
	// li r4,8461
	ctx.r4.s64 = 8461;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stwu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r30.u32 = ea;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r12,1
	ctx.r12.s64 = 1;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// oris r11,r11,255
	ctx.r11.u64 = ctx.r11.u64 | 16711680;
	// rldicr r12,r12,55,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// lis r17,0
	ctx.r17.s64 = 0;
	// stwu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r30.u32 = ea;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// ori r17,r17,34679
	ctx.r17.u64 = ctx.r17.u64 | 34679;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82273528:
	// lbz r11,11071(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11071);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227354c
	if (!ctx.cr0.eq) goto loc_8227354C;
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8227354c
	if (!ctx.cr0.eq) goto loc_8227354C;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82273554
	if (ctx.cr0.eq) goto loc_82273554;
loc_8227354C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d928
	ctx.lr = 0x82273554;
	sub_8226D928(ctx, base);
loc_82273554:
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82273568
	if (ctx.cr0.eq) goto loc_82273568;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822735f8
	goto loc_822735F8;
loc_82273568:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822735f0
	if (ctx.cr0.eq) goto loc_822735F0;
	// lwz r11,12792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12792);
	// lwz r9,13080(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13080);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82273588
	if (ctx.cr6.eq) goto loc_82273588;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822735f0
	if (!ctx.cr6.eq) goto loc_822735F0;
loc_82273588:
	// lwz r11,12796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12796);
	// lwz r9,13084(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13084);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822735a0
	if (ctx.cr6.eq) goto loc_822735A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822735f0
	if (!ctx.cr6.eq) goto loc_822735F0;
loc_822735A0:
	// lwz r11,12800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12800);
	// lwz r9,13088(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13088);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822735b8
	if (ctx.cr6.eq) goto loc_822735B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822735f0
	if (!ctx.cr6.eq) goto loc_822735F0;
loc_822735B8:
	// lwz r11,12804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12804);
	// lwz r9,13092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13092);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822735d0
	if (ctx.cr6.eq) goto loc_822735D0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822735f0
	if (!ctx.cr6.eq) goto loc_822735F0;
loc_822735D0:
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// lwz r9,13096(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13096);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822735e8
	if (ctx.cr6.eq) goto loc_822735E8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822735f0
	if (!ctx.cr6.eq) goto loc_822735F0;
loc_822735E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822735f4
	goto loc_822735F4;
loc_822735F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822735F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822735F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227363c
	if (!ctx.cr0.eq) goto loc_8227363C;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82273020
	ctx.lr = 0x82273638;
	sub_82273020(ctx, base);
	// b 0x82273818
	goto loc_82273818;
loc_8227363C:
	// lbz r11,11071(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11071);
	// lwz r20,13060(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13060);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822736fc
	if (ctx.cr0.eq) goto loc_822736FC;
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822736fc
	if (ctx.cr0.eq) goto loc_822736FC;
	// lis r12,5461
	ctx.r12.s64 = 357892096;
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// and. r30,r20,r12
	ctx.r30.u64 = ctx.r20.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822736fc
	if (ctx.cr0.eq) goto loc_822736FC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822736f0
	if (ctx.cr6.eq) goto loc_822736F0;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82273688
	if (!ctx.cr6.gt) goto loc_82273688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82273684;
	sub_82277C20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82273688:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// lwz r10,13524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// lwz r6,13528(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// rlwimi r9,r10,18,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// lwz r4,13344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13344);
	// lwz r5,13348(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13348);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// rlwinm r10,r9,0,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFC000;
	// subf r7,r5,r23
	ctx.r7.s64 = ctx.r23.s64 - ctx.r5.s64;
	// rlwimi r10,r6,0,18,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC000);
	// subf r6,r4,r24
	ctx.r6.s64 = ctx.r24.s64 - ctx.r4.s64;
	// subf r5,r5,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r5.s64;
	// subf r4,r4,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r4.s64;
	// bl 0x82273020
	ctx.lr = 0x822736F0;
	sub_82273020(ctx, base);
loc_822736F0:
	// lis r12,-5462
	ctx.r12.s64 = -357957632;
	// ori r12,r12,43690
	ctx.r12.u64 = ctx.r12.u64 | 43690;
	// and r20,r20,r12
	ctx.r20.u64 = ctx.r20.u64 & ctx.r12.u64;
loc_822736FC:
	// lwz r11,13100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13100);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82273818
	if (!ctx.cr6.gt) goto loc_82273818;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r28,r31,13348
	ctx.r28.s64 = ctx.r31.s64 + 13348;
	// addi r24,r31,13108
	ctx.r24.s64 = ctx.r31.s64 + 13108;
	// b 0x82273724
	goto loc_82273724;
loc_8227371C:
	// lwz r25,348(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r26,356(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
loc_82273724:
	// lwz r11,-4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82273734
	if (ctx.cr6.gt) goto loc_82273734;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82273734:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82273744
	if (ctx.cr6.gt) goto loc_82273744;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82273744:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r27,364(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82273758
	if (ctx.cr6.lt) goto loc_82273758;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82273758:
	// lwz r29,8(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8227376c
	if (!ctx.cr6.lt) goto loc_8227376C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8227376C:
	// cmpw cr6,r25,r27
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x822737fc
	if (!ctx.cr6.lt) goto loc_822737FC;
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x822737fc
	if (!ctx.cr6.lt) goto loc_822737FC;
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r11,r11,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r23.u8 & 0x3F));
	// and. r30,r11,r20
	ctx.r30.u64 = ctx.r11.u64 & ctx.r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822737fc
	if (ctx.cr0.eq) goto loc_822737FC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822737a8
	if (!ctx.cr6.gt) goto loc_822737A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x822737A4;
	sub_82277C20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822737A8:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r7,r9,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r9.s64;
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// subf r5,r9,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r9.s64;
	// subf r6,r11,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r11.s64;
	// subf r4,r11,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r11.s64;
	// bl 0x82273020
	ctx.lr = 0x822737FC;
	sub_82273020(ctx, base);
loc_822737FC:
	// lwz r11,13100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13100);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8227371c
	if (ctx.cr6.lt) goto loc_8227371C;
loc_82273818:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82273824"))) PPC_WEAK_FUNC(sub_82273824);
PPC_FUNC_IMPL(__imp__sub_82273824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82273828"))) PPC_WEAK_FUNC(sub_82273828);
PPC_FUNC_IMPL(__imp__sub_82273828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82273830;
	sub_82248764(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8227386c
	if (!ctx.cr6.eq) goto loc_8227386C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-11248
	ctx.r11.s64 = ctx.r11.s64 + -11248;
	// addi r23,r1,112
	ctx.r23.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8227386C:
	// lwz r11,12808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82273880
	if (!ctx.cr6.eq) goto loc_82273880;
	// rlwinm. r27,r27,0,28,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82273e9c
	if (ctx.cr0.eq) goto loc_82273E9C;
loc_82273880:
	// lfs f0,13000(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13000);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f13,13004(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13004);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f12,13008(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13008);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f11,13012(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13012);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fctiwz f0,f11
	ctx.f0.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f12,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// bgt cr6,0x822738d4
	if (ctx.cr6.gt) goto loc_822738D4;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_822738D4:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// bgt cr6,0x822738e8
	if (ctx.cr6.gt) goto loc_822738E8;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
loc_822738E8:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// blt cr6,0x82273900
	if (ctx.cr6.lt) goto loc_82273900;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82273900:
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// blt cr6,0x82273918
	if (ctx.cr6.lt) goto loc_82273918;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_82273918:
	// lwz r11,12264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82273964
	if (ctx.cr6.eq) goto loc_82273964;
	// lwz r11,13028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13028);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82273934
	if (ctx.cr6.gt) goto loc_82273934;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82273934:
	// lwz r11,13032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13032);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82273944
	if (ctx.cr6.gt) goto loc_82273944;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82273944:
	// lwz r11,13036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13036);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82273954
	if (ctx.cr6.lt) goto loc_82273954;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82273954:
	// lwz r11,13040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13040);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82273964
	if (ctx.cr6.lt) goto loc_82273964;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82273964:
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x82273e9c
	if (!ctx.cr6.gt) goto loc_82273E9C;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x82273e9c
	if (!ctx.cr6.gt) goto loc_82273E9C;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x82273a94
	if (ctx.cr6.eq) goto loc_82273A94;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822739a0
	if (ctx.cr6.eq) goto loc_822739A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// bl 0x8227b838
	ctx.lr = 0x8227399C;
	sub_8227B838(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
loc_822739A0:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822739d0
	if (ctx.cr6.eq) goto loc_822739D0;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x822739C4;
	sub_8227BBC8(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_822739D0:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82273a08
	if (ctx.cr6.eq) goto loc_82273A08;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x822739F4;
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
loc_82273A08:
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
	// beq cr6,0x82273a50
	if (ctx.cr6.eq) goto loc_82273A50;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82273A38;
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
loc_82273A50:
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
	// beq cr6,0x82273a94
	if (ctx.cr6.eq) goto loc_82273A94;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82273A7C;
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
loc_82273A94:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82273ae4
	if (ctx.cr6.eq) goto loc_82273AE4;
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
	// beq cr6,0x82273ae4
	if (ctx.cr6.eq) goto loc_82273AE4;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82273ACC;
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
loc_82273AE4:
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82273b1c
	if (ctx.cr6.eq) goto loc_82273B1C;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82273b1c
	if (ctx.cr6.eq) goto loc_82273B1C;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82273B10;
	sub_8227BBC8(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_82273B1C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82273b38
	if (!ctx.cr6.gt) goto loc_82273B38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82273B34;
	sub_82277C20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82273B38:
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82273b58
	if (ctx.cr0.eq) goto loc_82273B58;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
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
loc_82273B58:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16356
	ctx.r8.s64 = -1071906816;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r6,27
	ctx.r6.s64 = 27;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,108
	ctx.r5.s64 = 108;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r29,r10,11864
	ctx.r29.s64 = ctx.r10.s64 + 11864;
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
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
	// stwu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82248a40
	ctx.lr = 0x82273BA4;
	sub_82248A40(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82273bc0
	if (!ctx.cr6.gt) goto loc_82273BC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82273BC0;
	sub_82277C20(ctx, base);
loc_82273BC0:
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
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
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
	ctx.lr = 0x82273BF0;
	sub_82248A40(ctx, base);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4097
	ctx.r9.s64 = 268500992;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
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
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82273c30
	if (!ctx.cr6.gt) goto loc_82273C30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82273C30;
	sub_82277C20(ctx, base);
loc_82273C30:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,8851
	ctx.r8.s64 = 8851;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// ori r6,r6,8708
	ctx.r6.u64 = ctx.r6.u64 | 8708;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r29,8978
	ctx.r29.s64 = 8978;
	// li r11,8205
	ctx.r11.s64 = 8205;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r12,1
	ctx.r12.s64 = 1;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// clrlwi. r19,r27,28
	ctx.r19.u64 = ctx.r27.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
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
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r3.u32 = ea;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
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
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// bne 0x82273d80
	if (!ctx.cr0.eq) goto loc_82273D80;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82273288
	ctx.lr = 0x82273D7C;
	sub_82273288(ctx, base);
	// b 0x82273e54
	goto loc_82273E54;
loc_82273D80:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82273d94
	if (!ctx.cr6.gt) goto loc_82273D94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82273D94;
	sub_82277C20(ctx, base);
loc_82273D94:
	// li r11,8452
	ctx.r11.s64 = 8452;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,8706
	ctx.r11.s64 = 8706;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,8705
	ctx.r8.s64 = 8705;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r12,1
	ctx.r12.s64 = 1;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,12792
	ctx.r29.s64 = ctx.r31.s64 + 12792;
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
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82273DF8:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82273e44
	if (ctx.cr0.eq) goto loc_82273E44;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82273e44
	if (ctx.cr6.eq) goto loc_82273E44;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82273288
	ctx.lr = 0x82273E40;
	sub_82273288(ctx, base);
	// rlwinm r27,r27,0,28,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
loc_82273E44:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82273df8
	if (ctx.cr6.lt) goto loc_82273DF8;
loc_82273E54:
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
	ctx.lr = 0x82273E84;
	sub_8226F758(ctx, base);
	// lbz r11,11069(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11069);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,11069(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11069, ctx.r11.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82273E9C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_82273EA8"))) PPC_WEAK_FUNC(sub_82273EA8);
PPC_FUNC_IMPL(__imp__sub_82273EA8) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82273fb8
	if (!ctx.cr6.eq) goto loc_82273FB8;
	// lwz r7,12792(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12792);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne 0x82273ed4
	if (!ctx.cr0.eq) goto loc_82273ED4;
	// lwz r11,12808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12808);
loc_82273ED4:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r11,11068(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11068);
	// rlwinm r10,r9,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// rlwinm r9,r9,29,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7FFF;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm. r31,r11,0,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq 0x82273f10
	if (ctx.cr0.eq) goto loc_82273F10;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82273f9c
	goto loc_82273F9C;
loc_82273F10:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82273f94
	if (ctx.cr0.eq) goto loc_82273F94;
	// lwz r11,13080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13080);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82273f2c
	if (ctx.cr6.eq) goto loc_82273F2C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82273f94
	if (!ctx.cr6.eq) goto loc_82273F94;
loc_82273F2C:
	// lwz r11,12796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12796);
	// lwz r10,13084(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13084);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82273f44
	if (ctx.cr6.eq) goto loc_82273F44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82273f94
	if (!ctx.cr6.eq) goto loc_82273F94;
loc_82273F44:
	// lwz r11,12800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12800);
	// lwz r10,13088(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13088);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82273f5c
	if (ctx.cr6.eq) goto loc_82273F5C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82273f94
	if (!ctx.cr6.eq) goto loc_82273F94;
loc_82273F5C:
	// lwz r11,12804(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12804);
	// lwz r10,13092(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13092);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82273f74
	if (ctx.cr6.eq) goto loc_82273F74;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82273f94
	if (!ctx.cr6.eq) goto loc_82273F94;
loc_82273F74:
	// lwz r11,12808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12808);
	// lwz r10,13096(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13096);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82273f8c
	if (ctx.cr6.eq) goto loc_82273F8C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82273f94
	if (!ctx.cr6.eq) goto loc_82273F94;
loc_82273F8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82273f98
	goto loc_82273F98;
loc_82273F94:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82273F98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82273F9C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82273fb4
	if (ctx.cr0.eq) goto loc_82273FB4;
	// lwz r11,13532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13532);
	// lwz r10,13536(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13536);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82273FB4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82273FB8:
	// rlwinm. r11,r4,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82273fc8
	if (!ctx.cr0.eq) goto loc_82273FC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
loc_82273FC8:
	// bl 0x82273828
	ctx.lr = 0x82273FCC;
	sub_82273828(ctx, base);
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

__attribute__((alias("__imp__sub_82273FE0"))) PPC_WEAK_FUNC(sub_82273FE0);
PPC_FUNC_IMPL(__imp__sub_82273FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82273FE8;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r10,r10,12032
	ctx.r10.s64 = ctx.r10.s64 + 12032;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v63,v63,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// addi r9,r9,12016
	ctx.r9.s64 = ctx.r9.s64 + 12016;
	// vupkd3d128 v12,v63,0
	vTemp.u32[0] = ctx.v63.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v63.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v63.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v63.u8[2] | 0x3F800000;
	ctx.v12 = vTemp;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x82274058
	if (!ctx.cr6.eq) goto loc_82274058;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82273ea8
	ctx.lr = 0x82274054;
	sub_82273EA8(ctx, base);
	// b 0x82274090
	goto loc_82274090;
loc_82274058:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82274090
	if (ctx.cr6.eq) goto loc_82274090;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82274068:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82273ea8
	ctx.lr = 0x82274084;
	sub_82273EA8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82274068
	if (!ctx.cr0.eq) goto loc_82274068;
loc_82274090:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8227409C"))) PPC_WEAK_FUNC(sub_8227409C);
PPC_FUNC_IMPL(__imp__sub_8227409C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822740A0"))) PPC_WEAK_FUNC(sub_822740A0);
PPC_FUNC_IMPL(__imp__sub_822740A0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822740A8;
	sub_82248788(ctx, base);
	// lis r10,42
	ctx.r10.s64 = 2752512;
	// lis r9,24
	ctx.r9.s64 = 1572864;
	// lis r5,44
	ctx.r5.s64 = 2883584;
	// li r11,0
	ctx.r11.s64 = 0;
	// andi. r7,r3,16398
	ctx.r7.u64 = ctx.r3.u64 & 16398;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ori r6,r10,9145
	ctx.r6.u64 = ctx.r10.u64 | 9145;
	// ori r31,r9,10374
	ctx.r31.u64 = ctx.r9.u64 | 10374;
	// ori r30,r5,33700
	ctx.r30.u64 = ctx.r5.u64 | 33700;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 + 52;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// beq cr6,0x82274424
	if (ctx.cr6.eq) goto loc_82274424;
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// beq cr6,0x8227439c
	if (ctx.cr6.eq) goto loc_8227439C;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// beq cr6,0x82274320
	if (ctx.cr6.eq) goto loc_82274320;
	// cmplwi cr6,r7,10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 10, ctx.xer);
	// beq cr6,0x8227428c
	if (ctx.cr6.eq) goto loc_8227428C;
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// beq cr6,0x822741c8
	if (ctx.cr6.eq) goto loc_822741C8;
	// cmplwi cr6,r7,14
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 14, ctx.xer);
	// beq cr6,0x82274124
	if (ctx.cr6.eq) goto loc_82274124;
	// cmplwi cr6,r7,16386
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16386, ctx.xer);
	// bne cr6,0x82274448
	if (!ctx.cr6.eq) goto loc_82274448;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// ori r7,r9,9126
	ctx.r7.u64 = ctx.r9.u64 | 9126;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// b 0x8227442c
	goto loc_8227442C;
loc_82274124:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// ori r9,r9,9126
	ctx.r9.u64 = ctx.r9.u64 | 9126;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// rlwinm. r7,r3,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// sthu r11,12(r10)
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stb r7,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r7.u8);
	// beq 0x82274194
	if (ctx.cr0.eq) goto loc_82274194;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// li r8,28
	ctx.r8.s64 = 28;
	// ori r9,r9,8838
	ctx.r9.u64 = ctx.r9.u64 | 8838;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x82274438
	goto loc_82274438;
loc_82274194:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// li r9,28
	ctx.r9.s64 = 28;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,32
	ctx.r9.s64 = 32;
	// beq 0x822741c0
	if (ctx.cr0.eq) goto loc_822741C0;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x82274444
	goto loc_82274444;
loc_822741C0:
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// b 0x82274444
	goto loc_82274444;
loc_822741C8:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// beq 0x82274234
	if (ctx.cr0.eq) goto loc_82274234;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,28
	ctx.r9.s64 = 28;
loc_82274210:
	// sthu r11,12(r10)
	// lis r8,26
	ctx.r8.s64 = 1703936;
	// li r28,2
	ctx.r28.s64 = 2;
	// ori r29,r8,8838
	ctx.r29.u64 = ctx.r8.u64 | 8838;
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stb r28,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r28.u8);
	// b 0x8227443c
	goto loc_8227443C;
loc_82274234:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8227426c
	if (ctx.cr0.eq) goto loc_8227426C;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,28
	ctx.r9.s64 = 28;
loc_82274250:
	// sthu r11,12(r10)
	// li r29,2
	ctx.r29.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stb r29,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r29.u8);
	// b 0x8227443c
	goto loc_8227443C;
loc_8227426C:
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9126
	ctx.r9.u64 = ctx.r9.u64 | 9126;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// b 0x82274444
	goto loc_82274444;
loc_8227428C:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// beq 0x822742e0
	if (ctx.cr0.eq) goto loc_822742E0;
	// lis r9,44
	ctx.r9.s64 = 2883584;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9125
	ctx.r9.u64 = ctx.r9.u64 | 9125;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x82274210
	goto loc_82274210;
loc_822742E0:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82274308
	if (ctx.cr0.eq) goto loc_82274308;
	// lis r9,44
	ctx.r9.s64 = 2883584;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9125
	ctx.r9.u64 = ctx.r9.u64 | 9125;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x82274250
	goto loc_82274250;
loc_82274308:
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x82274444
	goto loc_82274444;
loc_82274320:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// beq 0x8227436c
	if (ctx.cr0.eq) goto loc_8227436C;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
loc_82274358:
	// li r9,12
	ctx.r9.s64 = 12;
	// li r7,16
	ctx.r7.s64 = 16;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,20
	ctx.r9.s64 = 20;
	// b 0x82274210
	goto loc_82274210;
loc_8227436C:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8227437c
	if (ctx.cr0.eq) goto loc_8227437C;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x82274358
	goto loc_82274358;
loc_8227437C:
	// lis r9,44
	ctx.r9.s64 = 2883584;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9125
	ctx.r9.u64 = ctx.r9.u64 | 9125;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// b 0x82274444
	goto loc_82274444;
loc_8227439C:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// beq 0x822743e4
	if (ctx.cr0.eq) goto loc_822743E4;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// li r8,2
	ctx.r8.s64 = 2;
	// ori r9,r9,8838
	ctx.r9.u64 = ctx.r9.u64 | 8838;
	// li r7,12
	ctx.r7.s64 = 12;
	// stb r8,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r8.u8);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// b 0x82274438
	goto loc_82274438;
loc_822743E4:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,16
	ctx.r9.s64 = 16;
	// beq 0x82274414
	if (ctx.cr0.eq) goto loc_82274414;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stb r8,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r8.u8);
	// b 0x82274444
	goto loc_82274444;
loc_82274414:
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// b 0x82274444
	goto loc_82274444;
loc_82274424:
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
loc_8227442C:
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r11.u8);
loc_82274438:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
loc_8227443C:
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
loc_82274444:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82274448:
	// rlwinm. r7,r3,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82274480
	if (ctx.cr0.eq) goto loc_82274480;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r9,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82274480:
	// rlwinm. r7,r3,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x822744b8
	if (ctx.cr0.eq) goto loc_822744B8;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,4
	ctx.r9.s64 = 4;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stb r9,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_822744B8:
	// rlwinm. r7,r3,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r6,10
	ctx.r6.s64 = 10;
	// beq 0x822744f0
	if (ctx.cr0.eq) goto loc_822744F0;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r6,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r6.u8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_822744F0:
	// rlwinm. r7,r3,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82274524
	if (ctx.cr0.eq) goto loc_82274524;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r6,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r6.u8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r5,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r5.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82274524:
	// rlwinm. r5,r3,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r7,r3,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// beq 0x82274598
	if (ctx.cr0.eq) goto loc_82274598;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r5,r5,12184
	ctx.r5.s64 = ctx.r5.s64 + 12184;
loc_82274544:
	// clrlwi r31,r7,30
	ctx.r31.u64 = ctx.r7.u32 & 0x3;
	// addi r30,r5,-4
	ctx.r30.s64 = ctx.r5.s64 + -4;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r29,r6,24
	ctx.r29.u64 = ctx.r6.u32 & 0xFF;
	// li r28,5
	ctx.r28.s64 = 5;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// lbzx r31,r31,r30
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// rlwinm r9,r31,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// add r31,r9,r5
	ctx.r31.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r11.u8);
	// stb r28,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r28.u8);
	// stb r29,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r29.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bdnz 0x82274544
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82274544;
loc_82274598:
	// li r7,255
	ctx.r7.s64 = 255;
	// sth r11,-62(r1)
	PPC_STORE_U16(ctx.r1.u32 + -62, ctx.r11.u16);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r11,-56(r1)
	PPC_STORE_U8(ctx.r1.u32 + -56, ctx.r11.u8);
	// sth r7,-64(r1)
	PPC_STORE_U16(ctx.r1.u32 + -64, ctx.r7.u16);
	// lwz r7,-64(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// stb r11,-55(r1)
	PPC_STORE_U8(ctx.r1.u32 + -55, ctx.r11.u8);
	// stb r11,-54(r1)
	PPC_STORE_U8(ctx.r1.u32 + -54, ctx.r11.u8);
	// lwz r6,-56(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r8,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822745D8"))) PPC_WEAK_FUNC(sub_822745D8);
PPC_FUNC_IMPL(__imp__sub_822745D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x822745E0;
	sub_8224875C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16359
	ctx.r8.s64 = -1072103424;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r7,24
	ctx.r7.s64 = 24;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r29,r6,12048
	ctx.r29.s64 = ctx.r6.s64 + 12048;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
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
	ctx.lr = 0x82274638;
	sub_82248A40(ctx, base);
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// lis r10,-16374
	ctx.r10.s64 = -1073086464;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,11008
	ctx.r10.u64 = ctx.r10.u64 | 11008;
	// li r8,9
	ctx.r8.s64 = 9;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82248a40
	ctx.lr = 0x8227466C;
	sub_82248A40(ctx, base);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,8448
	ctx.r8.u64 = ctx.r8.u64 | 8448;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,8851
	ctx.r5.s64 = 8851;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r30,0
	ctx.r30.s64 = 0;
	// ori r3,r3,8708
	ctx.r3.u64 = ctx.r3.u64 | 8708;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r22,8
	ctx.r22.s64 = 524288;
	// lis r29,1
	ctx.r29.s64 = 65536;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// li r28,768
	ctx.r28.s64 = 768;
	// li r27,8978
	ctx.r27.s64 = 8978;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// li r26,8205
	ctx.r26.s64 = 8205;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// li r25,8704
	ctx.r25.s64 = 8704;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r23,8832
	ctx.r23.s64 = 8832;
	// li r21,8962
	ctx.r21.s64 = 8962;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// li r6,8712
	ctx.r6.s64 = 8712;
	// ori r22,r22,8
	ctx.r22.u64 = ctx.r22.u64 | 8;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r9,8707
	ctx.r9.s64 = 8707;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// li r5,4
	ctx.r5.s64 = 4;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// li r4,8452
	ctx.r4.s64 = 8452;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r20,2
	ctx.r20.s64 = 131072;
	// li r19,0
	ctx.r19.s64 = 0;
	// ori r20,r20,8320
	ctx.r20.u64 = ctx.r20.u64 | 8320;
	// li r18,0
	ctx.r18.s64 = 0;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// lis r17,16
	ctx.r17.s64 = 1048576;
	// ori r29,r17,16
	ctx.r29.u64 = ctx.r17.u64 | 16;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
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
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r21.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r20,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r11.u32 = ea;
	// stwu r19,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r11.u32 = ea;
	// stwu r18,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r18.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_822747B0"))) PPC_WEAK_FUNC(sub_822747B0);
PPC_FUNC_IMPL(__imp__sub_822747B0) {
	PPC_FUNC_PROLOGUE();
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r11,r10,35,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// rldicr r12,r12,40,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// std r10,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r10.u64);
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// oris r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 1048576;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// lwz r11,10436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// lwz r10,10440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
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
	// b 0x8226f758
	sub_8226F758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822748C8"))) PPC_WEAK_FUNC(sub_822748C8);
PPC_FUNC_IMPL(__imp__sub_822748C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r9,36096
	ctx.r7.u64 = ctx.r9.u64 | 36096;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// neg r10,r4
	ctx.r10.s64 = -ctx.r4.s64;
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwimi r10,r4,8,17,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x7F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF80FF);
	// rlwinm r10,r10,4,13,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
loc_82274904:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82274904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82274904;
	// li r9,3328
	ctx.r9.s64 = 3328;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274928"))) PPC_WEAK_FUNC(sub_82274928);
PPC_FUNC_IMPL(__imp__sub_82274928) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,14168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14168);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// b 0x82086968
	sub_82086968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82274934"))) PPC_WEAK_FUNC(sub_82274934);
PPC_FUNC_IMPL(__imp__sub_82274934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82274938"))) PPC_WEAK_FUNC(sub_82274938);
PPC_FUNC_IMPL(__imp__sub_82274938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r10,r4,120
	ctx.r10.s64 = ctx.r4.s64 + 120;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// dcbt r0,r5
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r5
	// li r5,16
	ctx.r5.s64 = 16;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// ble cr6,0x822749d8
	if (!ctx.cr6.gt) goto loc_822749D8;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,48
	ctx.r8.s64 = 48;
loc_8227497C:
	// li r4,256
	ctx.r4.s64 = 256;
	// dcbt r4,r11
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r4,64
	ctx.r4.s64 = 64;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v61,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v62,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v60,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v61,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v59,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// vor128 v60,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x8227497c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227497C;
loc_822749D8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82274a00
	if (ctx.cr6.eq) goto loc_82274A00;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822749E4:
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x822749e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822749E4;
loc_82274A00:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274A10"))) PPC_WEAK_FUNC(sub_82274A10);
PPC_FUNC_IMPL(__imp__sub_82274A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r10,r4,376
	ctx.r10.s64 = ctx.r4.s64 + 376;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// dcbt r0,r5
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r5
	// li r5,16
	ctx.r5.s64 = 16;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// ble cr6,0x82274ab0
	if (!ctx.cr6.gt) goto loc_82274AB0;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,48
	ctx.r8.s64 = 48;
loc_82274A54:
	// li r4,256
	ctx.r4.s64 = 256;
	// dcbt r4,r11
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r4,64
	ctx.r4.s64 = 64;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v61,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v62,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v60,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v61,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v59,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// vor128 v60,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x82274a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82274A54;
loc_82274AB0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82274ad8
	if (ctx.cr6.eq) goto loc_82274AD8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82274ABC:
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82274abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82274ABC;
loc_82274AD8:
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274AE8"))) PPC_WEAK_FUNC(sub_82274AE8);
PPC_FUNC_IMPL(__imp__sub_82274AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
loc_82274AEC:
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// addi r11,r11,2528
	ctx.r11.s64 = ctx.r11.s64 + 2528;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// slw r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// andc r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// bne 0x82274aec
	if (!ctx.cr0.eq) goto loc_82274AEC;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274B44"))) PPC_WEAK_FUNC(sub_82274B44);
PPC_FUNC_IMPL(__imp__sub_82274B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82274B48"))) PPC_WEAK_FUNC(sub_82274B48);
PPC_FUNC_IMPL(__imp__sub_82274B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
loc_82274B4C:
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// addi r11,r11,2532
	ctx.r11.s64 = ctx.r11.s64 + 2532;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// slw r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// andc r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// bne 0x82274b4c
	if (!ctx.cr0.eq) goto loc_82274B4C;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274BA4"))) PPC_WEAK_FUNC(sub_82274BA4);
PPC_FUNC_IMPL(__imp__sub_82274BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82274BA8"))) PPC_WEAK_FUNC(sub_82274BA8);
PPC_FUNC_IMPL(__imp__sub_82274BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r10,r4,2535
	ctx.r10.s64 = ctx.r4.s64 + 2535;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82274BB8:
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bne 0x82274bb8
	if (!ctx.cr0.eq) goto loc_82274BB8;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274BFC"))) PPC_WEAK_FUNC(sub_82274BFC);
PPC_FUNC_IMPL(__imp__sub_82274BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82274C00"))) PPC_WEAK_FUNC(sub_82274C00);
PPC_FUNC_IMPL(__imp__sub_82274C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r10,r4,2551
	ctx.r10.s64 = ctx.r4.s64 + 2551;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82274C10:
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bne 0x82274c10
	if (!ctx.cr0.eq) goto loc_82274C10;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274C54"))) PPC_WEAK_FUNC(sub_82274C54);
PPC_FUNC_IMPL(__imp__sub_82274C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82274C58"))) PPC_WEAK_FUNC(sub_82274C58);
PPC_FUNC_IMPL(__imp__sub_82274C58) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// li r9,1
	ctx.r9.s64 = 1;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// lis r8,-1
	ctx.r8.s64 = -65536;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82274C90"))) PPC_WEAK_FUNC(sub_82274C90);
PPC_FUNC_IMPL(__imp__sub_82274C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82274C98;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,13044(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13044);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82274d14
	if (ctx.cr6.eq) goto loc_82274D14;
	// lwz r11,11036(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274cc4
	if (ctx.cr6.eq) goto loc_82274CC4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82274d14
	goto loc_82274D14;
loc_82274CC4:
	// lwz r11,11040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11040);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82274d14
	if (ctx.cr0.eq) goto loc_82274D14;
	// lwz r11,13916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13916);
	// lwz r3,13912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13912);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82274cec
	if (ctx.cr6.lt) goto loc_82274CEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82279040
	ctx.lr = 0x82274CEC;
	sub_82279040(ctx, base);
loc_82274CEC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r31,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
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
	// stw r9,13912(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13912, ctx.r9.u32);
loc_82274D14:
	// stw r29,13044(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13044, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// beq cr6,0x82274e44
	if (ctx.cr6.eq) goto loc_82274E44;
	// lwz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r11,r29,40
	ctx.r11.s64 = ctx.r29.s64 + 40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82274e44
	if (ctx.cr6.eq) goto loc_82274E44;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82274d78
	if (ctx.cr6.eq) goto loc_82274D78;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r10.u64);
loc_82274D78:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// addi r28,r30,1152
	ctx.r28.s64 = ctx.r30.s64 + 1152;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82274e44
	if (!ctx.cr6.lt) goto loc_82274E44;
loc_82274D90:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82274dac
	if (ctx.cr0.eq) goto loc_82274DAC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82274d90
	if (ctx.cr6.lt) goto loc_82274D90;
loc_82274DAC:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82274e44
	if (!ctx.cr6.lt) goto loc_82274E44;
loc_82274DB4:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82274e3c
	if (ctx.cr0.eq) goto loc_82274E3C;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82248a40
	ctx.lr = 0x82274DE0;
	sub_82248A40(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82274db4
	if (ctx.cr6.lt) goto loc_82274DB4;
	// b 0x82274e3c
	goto loc_82274E3C;
loc_82274DF0:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82274e44
	if (ctx.cr0.eq) goto loc_82274E44;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82274E10:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bne 0x82274e10
	if (!ctx.cr0.eq) goto loc_82274E10;
loc_82274E3C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82274df0
	if (ctx.cr6.lt) goto loc_82274DF0;
loc_82274E44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82274E4C"))) PPC_WEAK_FUNC(sub_82274E4C);
PPC_FUNC_IMPL(__imp__sub_82274E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82274E50"))) PPC_WEAK_FUNC(sub_82274E50);
PPC_FUNC_IMPL(__imp__sub_82274E50) {
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
	// lwz r31,13044(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13044);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82274e7c
	if (ctx.cr6.eq) goto loc_82274E7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82268250
	ctx.lr = 0x82274E7C;
	sub_82268250(ctx, base);
loc_82274E7C:
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

__attribute__((alias("__imp__sub_82274E98"))) PPC_WEAK_FUNC(sub_82274E98);
PPC_FUNC_IMPL(__imp__sub_82274E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82274EA0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82274ec0
	if (ctx.cr6.eq) goto loc_82274EC0;
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
loc_82274EC0:
	// lwz r31,13048(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13048);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82274f30
	if (ctx.cr6.eq) goto loc_82274F30;
	// lwz r11,11036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82274ee0
	if (ctx.cr6.eq) goto loc_82274EE0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82274f30
	goto loc_82274F30;
loc_82274EE0:
	// lwz r11,11040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11040);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82274f30
	if (ctx.cr0.eq) goto loc_82274F30;
	// lwz r11,13916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13916);
	// lwz r3,13912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13912);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82274f08
	if (ctx.cr6.lt) goto loc_82274F08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82279040
	ctx.lr = 0x82274F08;
	sub_82279040(ctx, base);
loc_82274F08:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r31,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
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
	// stw r9,13912(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13912, ctx.r9.u32);
loc_82274F30:
	// lbz r11,11070(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11070);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,13048(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13048, ctx.r29.u32);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,11070(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11070, ctx.r11.u8);
	// beq cr6,0x8227505c
	if (ctx.cr6.eq) goto loc_8227505C;
	// addic. r11,r29,872
	ctx.xer.ca = ctx.r29.u32 > 4294966423;
	ctx.r11.s64 = ctx.r29.s64 + 872;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227505c
	if (ctx.cr0.eq) goto loc_8227505C;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227505c
	if (ctx.cr6.eq) goto loc_8227505C;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82274f90
	if (ctx.cr6.eq) goto loc_82274F90;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r10.u64);
loc_82274F90:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// addi r28,r30,1152
	ctx.r28.s64 = ctx.r30.s64 + 1152;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8227505c
	if (!ctx.cr6.lt) goto loc_8227505C;
loc_82274FA8:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82274fc4
	if (ctx.cr0.eq) goto loc_82274FC4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82274fa8
	if (ctx.cr6.lt) goto loc_82274FA8;
loc_82274FC4:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8227505c
	if (!ctx.cr6.lt) goto loc_8227505C;
loc_82274FCC:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82275054
	if (ctx.cr0.eq) goto loc_82275054;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82248a40
	ctx.lr = 0x82274FF8;
	sub_82248A40(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82274fcc
	if (ctx.cr6.lt) goto loc_82274FCC;
	// b 0x82275054
	goto loc_82275054;
loc_82275008:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8227505c
	if (ctx.cr0.eq) goto loc_8227505C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82275028:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bne 0x82275028
	if (!ctx.cr0.eq) goto loc_82275028;
loc_82275054:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82275008
	if (ctx.cr6.lt) goto loc_82275008;
loc_8227505C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82275064"))) PPC_WEAK_FUNC(sub_82275064);
PPC_FUNC_IMPL(__imp__sub_82275064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82275068"))) PPC_WEAK_FUNC(sub_82275068);
PPC_FUNC_IMPL(__imp__sub_82275068) {
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
	// lwz r31,13048(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13048);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82275094
	if (ctx.cr6.eq) goto loc_82275094;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82268250
	ctx.lr = 0x82275094;
	sub_82268250(ctx, base);
loc_82275094:
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

__attribute__((alias("__imp__sub_822750B0"))) PPC_WEAK_FUNC(sub_822750B0);
PPC_FUNC_IMPL(__imp__sub_822750B0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12216, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822750C4"))) PPC_WEAK_FUNC(sub_822750C4);
PPC_FUNC_IMPL(__imp__sub_822750C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822750C8"))) PPC_WEAK_FUNC(sub_822750C8);
PPC_FUNC_IMPL(__imp__sub_822750C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822750D0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// std r27,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r27.u64);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x82275120
	goto loc_82275120;
loc_822750FC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82275108
	if (ctx.cr6.gt) goto loc_82275108;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82275108:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhzu r9,12(r10)
	// li r7,255
	ctx.r7.s64 = 255;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stbx r7,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82275120:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x822750fc
	if (!ctx.cr6.eq) goto loc_822750FC;
	// mulli r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 * 12;
	// addi r5,r11,56
	ctx.r5.s64 = ctx.r11.s64 + 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248f70
	ctx.lr = 0x8227513C;
	sub_82248F70(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// ori r9,r9,5
	ctx.r9.u64 = ctx.r9.u64 | 5;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lis r7,-1
	ctx.r7.s64 = -65536;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// std r10,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r10.u64);
	// beq cr6,0x822751ac
	if (ctx.cr6.eq) goto loc_822751AC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
loc_82275184:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82275184
	if (!ctx.cr0.eq) goto loc_82275184;
loc_822751AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822751B4"))) PPC_WEAK_FUNC(sub_822751B4);
PPC_FUNC_IMPL(__imp__sub_822751B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822751B8"))) PPC_WEAK_FUNC(sub_822751B8);
PPC_FUNC_IMPL(__imp__sub_822751B8) {
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
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822751e8
	goto loc_822751E8;
loc_822751E0:
	// lhzu r9,12(r10)
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822751E8:
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x822751e0
	if (!ctx.cr6.eq) goto loc_822751E0;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x82086c98
	ctx.lr = 0x82275200;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82275210
	if (!ctx.cr0.eq) goto loc_82275210;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82275220
	goto loc_82275220;
loc_82275210:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822750c8
	ctx.lr = 0x8227521C;
	sub_822750C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82275220:
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

__attribute__((alias("__imp__sub_82275238"))) PPC_WEAK_FUNC(sub_82275238);
PPC_FUNC_IMPL(__imp__sub_82275238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82275240;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82275264
	if (!ctx.cr6.eq) goto loc_82275264;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82275264
	if (!ctx.cr6.eq) goto loc_82275264;
	// li r30,64
	ctx.r30.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
loc_82275264:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275274
	if (ctx.cr0.eq) goto loc_82275274;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82275284
	goto loc_82275284;
loc_82275274:
	// lwz r11,11048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11048);
	// rlwimi r6,r30,8,17,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0x7F00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF80FF);
	// rlwimi r11,r6,4,21,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x7F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF80F);
	// rlwimi r11,r6,4,13,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x7F000) | (ctx.r11.u64 & 0xFFFFFFFFFFF80FFF);
loc_82275284:
	// stw r11,11048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11048, ctx.r11.u32);
	// lwz r10,13068(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13068);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// and r29,r10,r4
	ctx.r29.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822752ac
	if (!ctx.cr6.gt) goto loc_822752AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x822752A8;
	sub_82277C20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822752AC:
	// oris r9,r29,49153
	ctx.r9.u64 = ctx.r29.u64 | 3221291008;
	// addi r8,r30,1773
	ctx.r8.s64 = ctx.r30.s64 + 1773;
	// ori r9,r9,16128
	ctx.r9.u64 = ctx.r9.u64 | 16128;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,14176(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14176);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// lwz r7,14172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14172);
	// clrlwi r7,r7,8
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFFF;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r10,14180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14180);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r10,15208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15208);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,15204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15204);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x822747b0
	ctx.lr = 0x82275318;
	sub_822747B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82275320"))) PPC_WEAK_FUNC(sub_82275320);
PPC_FUNC_IMPL(__imp__sub_82275320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11048(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11048);
	// rlwinm r11,r11,0,13,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F000;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,11048(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11048);
	// rlwinm r11,r11,20,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7F;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,11048(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11048);
	// rlwinm r11,r11,28,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82275350"))) PPC_WEAK_FUNC(sub_82275350);
PPC_FUNC_IMPL(__imp__sub_82275350) {
	PPC_FUNC_PROLOGUE();
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r3,20
	ctx.r7.s64 = ctx.r3.s64 + 20;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82275364:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82275384
	if (ctx.cr6.eq) goto loc_82275384;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// ldx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r3.u32);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82275384:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bdnz 0x82275364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82275364;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// std r10,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82275398"))) PPC_WEAK_FUNC(sub_82275398);
PPC_FUNC_IMPL(__imp__sub_82275398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822753A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x82086c98
	ctx.lr = 0x822753B4;
	sub_82086C98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r30,8192
	ctx.r29.s64 = ctx.r30.s64 + 8192;
	// bne 0x822753c8
	if (!ctx.cr0.eq) goto loc_822753C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822754bc
	goto loc_822754BC;
loc_822753C8:
	// stw r30,14168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14168, ctx.r30.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822745d8
	ctx.lr = 0x822753DC;
	sub_822745D8(ctx, base);
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// addi r8,r3,7
	ctx.r8.s64 = ctx.r3.s64 + 7;
	// lwz r9,14172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14172);
	// addi r10,r11,512
	ctx.r10.s64 = ctx.r11.s64 + 512;
	// clrlwi r11,r30,3
	ctx.r11.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// rlwimi r3,r9,0,0,7
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF000000) | (ctx.r3.u64 & 0xFFFFFFFF00FFFFFF);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFE0;
	// stw r3,14172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14172, ctx.r3.u32);
	// stw r10,14176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14176, ctx.r10.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r31,14300
	ctx.r30.s64 = ctx.r31.s64 + 14300;
loc_82275414:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822748c8
	ctx.lr = 0x82275420;
	sub_822748C8(ctx, base);
	// rlwinm r11,r5,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r10,r5,3
	ctx.r10.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// rlwimi r8,r9,0,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// addi r9,r3,7
	ctx.r9.s64 = ctx.r3.s64 + 7;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,2,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFE0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stwu r8,8(r30)
	ea = 8 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplwi cr6,r4,112
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 112, ctx.xer);
	// ble cr6,0x82275414
	if (!ctx.cr6.gt) goto loc_82275414;
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8227546C:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r10,13824
	ctx.r10.u64 = ctx.r10.u64 | 13824;
	// ori r9,r9,129
	ctx.r9.u64 = ctx.r9.u64 | 129;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8227546c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227546C;
	// rlwinm r10,r5,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// lwz r9,15204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15204);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r10,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r5,3
	ctx.r10.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r8,r9,0,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,15208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15208, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,15204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15204, ctx.r8.u32);
loc_822754BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822754C4"))) PPC_WEAK_FUNC(sub_822754C4);
PPC_FUNC_IMPL(__imp__sub_822754C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822754C8"))) PPC_WEAK_FUNC(sub_822754C8);
PPC_FUNC_IMPL(__imp__sub_822754C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822754D0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,7396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7396);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82275504
	if (ctx.cr6.eq) goto loc_82275504;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822754F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82275504
	if (!ctx.cr0.eq) goto loc_82275504;
loc_822754FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822755b0
	goto loc_822755B0;
loc_82275504:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r10,r10,832
	ctx.r10.u64 = ctx.r10.u64 & 832;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82086c98
	ctx.lr = 0x82275534;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822754fc
	if (ctx.cr0.eq) goto loc_822754FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// bl 0x82087ab0
	ctx.lr = 0x82275564;
	sub_82087AB0(ctx, base);
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82086c98
	ctx.lr = 0x82275570;
	sub_82086C98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82275588
	if (!ctx.cr0.eq) goto loc_82275588;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82086968
	ctx.lr = 0x82275584;
	sub_82086968(ctx, base);
	// b 0x822754fc
	goto loc_822754FC;
loc_82275588:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x82275598;
	sub_82248A40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82274c58
	ctx.lr = 0x822755A4;
	sub_82274C58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822755B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822755B8"))) PPC_WEAK_FUNC(sub_822755B8);
PPC_FUNC_IMPL(__imp__sub_822755B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x822755C0;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,872
	ctx.r5.s64 = 872;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82248f70
	ctx.lr = 0x822755D8;
	sub_82248F70(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r11,872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822756a8
	if (ctx.cr0.eq) goto loc_822756A8;
	// addi r25,r31,40
	ctx.r25.s64 = ctx.r31.s64 + 40;
	// addi r27,r31,896
	ctx.r27.s64 = ctx.r31.s64 + 896;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_8227561C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,872
	ctx.r10.s64 = ctx.r11.s64 + 872;
	// lwz r8,896(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 896);
	// lwz r7,872(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 872);
	// addi r8,r8,9
	ctx.r8.s64 = ctx.r8.s64 + 9;
	// lwz r11,900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	// add r26,r9,r7
	ctx.r26.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x82275690
	if (ctx.cr6.eq) goto loc_82275690;
	// addi r30,r25,28
	ctx.r30.s64 = ctx.r25.s64 + 28;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8227565C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82275680
	if (ctx.cr6.eq) goto loc_82275680;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x82275680;
	sub_82248A40(ctx, base);
loc_82275680:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8227565c
	if (!ctx.cr0.eq) goto loc_8227565C;
loc_82275690:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r25,r25,416
	ctx.r25.s64 = ctx.r25.s64 + 416;
	// bne 0x8227561c
	if (!ctx.cr0.eq) goto loc_8227561C;
loc_822756A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_822756B0"))) PPC_WEAK_FUNC(sub_822756B0);
PPC_FUNC_IMPL(__imp__sub_822756B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822756B8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,7400(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7400);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822756ec
	if (ctx.cr6.eq) goto loc_822756EC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822756DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822756ec
	if (!ctx.cr0.eq) goto loc_822756EC;
loc_822756E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82275798
	goto loc_82275798;
loc_822756EC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r10,r10,832
	ctx.r10.u64 = ctx.r10.u64 & 832;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82086c98
	ctx.lr = 0x8227571C;
	sub_82086C98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822756e4
	if (ctx.cr0.eq) goto loc_822756E4;
	// li r5,872
	ctx.r5.s64 = 872;
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248f70
	ctx.lr = 0x82275738;
	sub_82248F70(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,872
	ctx.r3.s64 = ctx.r30.s64 + 872;
	// bl 0x82087ab0
	ctx.lr = 0x82275748;
	sub_82087AB0(ctx, base);
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82086c98
	ctx.lr = 0x82275754;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8227576c
	if (!ctx.cr0.eq) goto loc_8227576C;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82086968
	ctx.lr = 0x82275768;
	sub_82086968(ctx, base);
	// b 0x822756e4
	goto loc_822756E4;
loc_8227576C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x8227577C;
	sub_82248A40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822755b8
	ctx.lr = 0x82275788;
	sub_822755B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82275798:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822757A0"))) PPC_WEAK_FUNC(sub_822757A0);
PPC_FUNC_IMPL(__imp__sub_822757A0) {
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
	// stw r4,12784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12784, ctx.r4.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,12544
	ctx.r4.s64 = ctx.r3.s64 + 12544;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822740a0
	ctx.lr = 0x822757C8;
	sub_822740A0(ctx, base);
	// stw r4,12216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12216, ctx.r4.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_822757EC"))) PPC_WEAK_FUNC(sub_822757EC);
PPC_FUNC_IMPL(__imp__sub_822757EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822757F0"))) PPC_WEAK_FUNC(sub_822757F0);
PPC_FUNC_IMPL(__imp__sub_822757F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,13828(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13828);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822757FC"))) PPC_WEAK_FUNC(sub_822757FC);
PPC_FUNC_IMPL(__imp__sub_822757FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82275800"))) PPC_WEAK_FUNC(sub_82275800);
PPC_FUNC_IMPL(__imp__sub_82275800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82275808;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,12240(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12240);
	// rlwinm r10,r6,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFF;
	// mullw r9,r5,r6
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lbz r25,12880(r3)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12880);
	// stb r10,12880(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12880, ctx.r10.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// rlwinm r22,r9,30,2,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82275850
	if (ctx.cr6.eq) goto loc_82275850;
	// lwz r11,13048(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13048);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275850
	if (ctx.cr6.eq) goto loc_82275850;
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
loc_82275850:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// li r26,0
	ctx.r26.s64 = 0;
	// rldicr r11,r11,0,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFFFFE;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// ld r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// beq cr6,0x82275890
	if (ctx.cr6.eq) goto loc_82275890;
	// addi r6,r31,1920
	ctx.r6.s64 = ctx.r31.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bf60
	ctx.lr = 0x8227588C;
	sub_8227BF60(ctx, base);
	// std r26,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r26.u64);
loc_82275890:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// beq cr6,0x822758b0
	if (ctx.cr6.eq) goto loc_822758B0;
	// addi r6,r31,6016
	ctx.r6.s64 = ctx.r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bf60
	ctx.lr = 0x822758AC;
	sub_8227BF60(ctx, base);
	// std r26,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r26.u64);
loc_822758B0:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x82275990
	if (ctx.cr6.eq) goto loc_82275990;
	// rlwinm r11,r30,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822758d4
	if (ctx.cr6.eq) goto loc_822758D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ccf8
	ctx.lr = 0x822758D0;
	sub_8227CCF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822758D4:
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822758f8
	if (ctx.cr6.eq) goto loc_822758F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b838
	ctx.lr = 0x822758F4;
	sub_8227B838(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822758F8:
	// clrldi r11,r30,52
	ctx.r11.u64 = ctx.r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275918
	if (ctx.cr6.eq) goto loc_82275918;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82275918;
	sub_8227BBC8(ctx, base);
loc_82275918:
	// rlwinm r11,r30,0,15,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275938
	if (ctx.cr6.eq) goto loc_82275938;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82275938;
	sub_8227BBC8(ctx, base);
loc_82275938:
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
	// beq cr6,0x82275964
	if (ctx.cr6.eq) goto loc_82275964;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82275964;
	sub_8227BBC8(ctx, base);
loc_82275964:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8227598c
	if (ctx.cr6.eq) goto loc_8227598C;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x8227598C;
	sub_8227BBC8(ctx, base);
loc_8227598C:
	// std r26,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r26.u64);
loc_82275990:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, 0, ctx.xer);
	// beq cr6,0x822759e0
	if (ctx.cr6.eq) goto loc_822759E0;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822759b0
	if (ctx.cr6.eq) goto loc_822759B0;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227be08
	ctx.lr = 0x822759B0;
	sub_8227BE08(ctx, base);
loc_822759B0:
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
	// beq cr6,0x822759dc
	if (ctx.cr6.eq) goto loc_822759DC;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x822759DC;
	sub_8227BBC8(ctx, base);
loc_822759DC:
	// std r26,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r26.u64);
loc_822759E0:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, 0, ctx.xer);
	// beq cr6,0x82275aa4
	if (ctx.cr6.eq) goto loc_82275AA4;
	// li r12,255
	ctx.r12.s64 = 255;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275a10
	if (ctx.cr6.eq) goto loc_82275A10;
	// addi r6,r31,10832
	ctx.r6.s64 = ctx.r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82275A10;
	sub_8227BBC8(ctx, base);
loc_82275A10:
	// li r12,63
	ctx.r12.s64 = 63;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275a30
	if (ctx.cr6.eq) goto loc_82275A30;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bc88
	ctx.lr = 0x82275A30;
	sub_8227BC88(ctx, base);
loc_82275A30:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275a58
	if (ctx.cr6.eq) goto loc_82275A58;
	// addi r6,r31,10112
	ctx.r6.s64 = ctx.r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82275A58;
	sub_8227BBC8(ctx, base);
loc_82275A58:
	// clrldi r11,r27,26
	ctx.r11.u64 = ctx.r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275a78
	if (ctx.cr6.eq) goto loc_82275A78;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82275A78;
	sub_8227BBC8(ctx, base);
loc_82275A78:
	// rldicr r11,r27,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275aa0
	if (ctx.cr6.eq) goto loc_82275AA0;
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82275a98
	if (!ctx.cr0.eq) goto loc_82275A98;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275aa0
	if (ctx.cr0.eq) goto loc_82275AA0;
loc_82275A98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d928
	ctx.lr = 0x82275AA0;
	sub_8226D928(ctx, base);
loc_82275AA0:
	// std r26,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r26.u64);
loc_82275AA4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stb r25,12880(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12880, ctx.r25.u8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82275ac4
	if (!ctx.cr6.gt) goto loc_82275AC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82275AC0;
	sub_82277C20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82275AC4:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276a58
	ctx.lr = 0x82275AD4;
	sub_82276A58(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82275ae8
	if (!ctx.cr0.eq) goto loc_82275AE8;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82275cb4
	goto loc_82275CB4;
loc_82275AE8:
	// li r11,8450
	ctx.r11.s64 = 8450;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// rlwinm r11,r28,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0xFFF;
	// ori r8,r10,18618
	ctx.r8.u64 = ctx.r10.u64 | 18618;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r10,r28,3
	ctx.r10.u64 = ctx.r28.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// stwu r26,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// ori r10,r9,2
	ctx.r10.u64 = ctx.r9.u64 | 2;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,1896(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1896);
	// rlwimi r10,r22,2,6,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r22.u32, 2) & 0x3FFFFFC) | (ctx.r10.u64 & 0xFFFFFFFFFC000003);
	// ori r9,r9,20480
	ctx.r9.u64 = ctx.r9.u64 | 20480;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// lwz r8,1900(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// lwz r8,1904(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// lwz r8,1908(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1908);
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// lbz r11,12539(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12539);
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r10,12474(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12474);
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r10,r11,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// clrlwi r29,r10,23
	ctx.r29.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r29,r29,0,26,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// bne 0x82275bcc
	if (!ctx.cr0.eq) goto loc_82275BCC;
	// lis r11,-16383
	ctx.r11.s64 = -1073676288;
	// clrlwi r10,r23,26
	ctx.r10.u64 = ctx.r23.u32 & 0x3F;
	// ori r11,r11,8705
	ctx.r11.u64 = ctx.r11.u64 | 8705;
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stwu r29,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82275c98
	goto loc_82275C98;
loc_82275BCC:
	// lwz r11,13612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13612);
	// addi r3,r31,13600
	ctx.r3.s64 = ctx.r31.s64 + 13600;
	// lwz r10,13616(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13616);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82275bec
	if (!ctx.cr6.gt) goto loc_82275BEC;
	// bl 0x82277550
	ctx.lr = 0x82275BE8;
	sub_82277550(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82275BEC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13612, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// rlwinm r6,r24,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r7,r23,26
	ctx.r7.u64 = ctx.r23.u32 & 0x3F;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r7,r7,128
	ctx.r7.u64 = ctx.r7.u64 | 128;
	// lis r5,-16384
	ctx.r5.s64 = -1073741824;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// ori r8,r5,24576
	ctx.r8.u64 = ctx.r5.u64 | 24576;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// ori r4,r10,23041
	ctx.r4.u64 = ctx.r10.u64 | 23041;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r9,26
	ctx.r9.s64 = 26;
	// stwu r29,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r6.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r10,r3,17921
	ctx.r10.u64 = ctx.r3.u64 | 17921;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stwu r7,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r6.u32 = ea;
	// li r3,25
	ctx.r3.s64 = 25;
	// stwu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// stwu r5,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r6.u32 = ea;
	// stwu r4,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r6.u32 = ea;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
	// stwu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
loc_82275C98:
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// std r10,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r10.u64);
	// stw r11,13828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13828, ctx.r11.u32);
	// stw r28,13832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13832, ctx.r28.u32);
	// stw r22,13840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13840, ctx.r22.u32);
loc_82275CB4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82275CBC"))) PPC_WEAK_FUNC(sub_82275CBC);
PPC_FUNC_IMPL(__imp__sub_82275CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82275CC0"))) PPC_WEAK_FUNC(sub_82275CC0);
PPC_FUNC_IMPL(__imp__sub_82275CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x82275CC8;
	sub_8224875C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r27,32(r3)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r28,24(r3)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// ld r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// ld r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x82275d10
	if (ctx.cr6.eq) goto loc_82275D10;
	// addi r6,r3,1920
	ctx.r6.s64 = ctx.r3.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x8227bf60
	ctx.lr = 0x82275D0C;
	sub_8227BF60(ctx, base);
	// std r26,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r26.u64);
loc_82275D10:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// beq cr6,0x82275d30
	if (ctx.cr6.eq) goto loc_82275D30;
	// addi r6,r31,6016
	ctx.r6.s64 = ctx.r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bf60
	ctx.lr = 0x82275D2C;
	sub_8227BF60(ctx, base);
	// std r26,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r26.u64);
loc_82275D30:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x82275e10
	if (ctx.cr6.eq) goto loc_82275E10;
	// rlwinm r11,r30,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275d54
	if (ctx.cr6.eq) goto loc_82275D54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ccf8
	ctx.lr = 0x82275D50;
	sub_8227CCF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82275D54:
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275d78
	if (ctx.cr6.eq) goto loc_82275D78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b838
	ctx.lr = 0x82275D74;
	sub_8227B838(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82275D78:
	// clrldi r11,r30,52
	ctx.r11.u64 = ctx.r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275d98
	if (ctx.cr6.eq) goto loc_82275D98;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82275D98;
	sub_8227BBC8(ctx, base);
loc_82275D98:
	// rlwinm r11,r30,0,15,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275db8
	if (ctx.cr6.eq) goto loc_82275DB8;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82275DB8;
	sub_8227BBC8(ctx, base);
loc_82275DB8:
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
	// beq cr6,0x82275de4
	if (ctx.cr6.eq) goto loc_82275DE4;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82275DE4;
	sub_8227BBC8(ctx, base);
loc_82275DE4:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275e0c
	if (ctx.cr6.eq) goto loc_82275E0C;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82275E0C;
	sub_8227BBC8(ctx, base);
loc_82275E0C:
	// std r26,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r26.u64);
loc_82275E10:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, 0, ctx.xer);
	// beq cr6,0x82275e60
	if (ctx.cr6.eq) goto loc_82275E60;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275e30
	if (ctx.cr6.eq) goto loc_82275E30;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227be08
	ctx.lr = 0x82275E30;
	sub_8227BE08(ctx, base);
loc_82275E30:
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
	// beq cr6,0x82275e5c
	if (ctx.cr6.eq) goto loc_82275E5C;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82275E5C;
	sub_8227BBC8(ctx, base);
loc_82275E5C:
	// std r26,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r26.u64);
loc_82275E60:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, 0, ctx.xer);
	// beq cr6,0x82275f24
	if (ctx.cr6.eq) goto loc_82275F24;
	// li r12,255
	ctx.r12.s64 = 255;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275e90
	if (ctx.cr6.eq) goto loc_82275E90;
	// addi r6,r31,10832
	ctx.r6.s64 = ctx.r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82275E90;
	sub_8227BBC8(ctx, base);
loc_82275E90:
	// li r12,63
	ctx.r12.s64 = 63;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275eb0
	if (ctx.cr6.eq) goto loc_82275EB0;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bc88
	ctx.lr = 0x82275EB0;
	sub_8227BC88(ctx, base);
loc_82275EB0:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275ed8
	if (ctx.cr6.eq) goto loc_82275ED8;
	// addi r6,r31,10112
	ctx.r6.s64 = ctx.r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82275ED8;
	sub_8227BBC8(ctx, base);
loc_82275ED8:
	// clrldi r11,r27,26
	ctx.r11.u64 = ctx.r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275ef8
	if (ctx.cr6.eq) goto loc_82275EF8;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227bbc8
	ctx.lr = 0x82275EF8;
	sub_8227BBC8(ctx, base);
loc_82275EF8:
	// rldicr r11,r27,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82275f20
	if (ctx.cr6.eq) goto loc_82275F20;
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82275f18
	if (!ctx.cr0.eq) goto loc_82275F18;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275f20
	if (ctx.cr0.eq) goto loc_82275F20;
loc_82275F18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d928
	ctx.lr = 0x82275F20;
	sub_8226D928(ctx, base);
loc_82275F20:
	// std r26,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r26.u64);
loc_82275F24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r24,12788(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12788);
	// addi r23,r31,12474
	ctx.r23.s64 = ctx.r31.s64 + 12474;
	// clrlwi r22,r18,26
	ctx.r22.u64 = ctx.r18.u32 & 0x3F;
	// addi r20,r11,4432
	ctx.r20.s64 = ctx.r11.s64 + 4432;
loc_82275F38:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82275f50
	if (!ctx.cr6.gt) goto loc_82275F50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82275F50;
	sub_82277C20(ctx, base);
loc_82275F50:
	// li r11,8450
	ctx.r11.s64 = 8450;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r19,65535
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 65535, ctx.xer);
	// stwu r17,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r17.u32);
	ctx.r3.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ble cr6,0x82275f8c
	if (!ctx.cr6.gt) goto loc_82275F8C;
	// rlwinm r11,r18,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / ctx.r11.u32;
	// twllei r11,0
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r27,r10,r11
	ctx.r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_82275F8C:
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,12539(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12539);
	// rlwinm r7,r27,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addic r5,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// subfe r5,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbzx r4,r23,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r8.u32);
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwimi r4,r5,8,23,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0x100) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwinm r11,r6,1,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xC0000000;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// clrlwi r5,r27,8
	ctx.r5.u64 = ctx.r27.u32 & 0xFFFFFF;
	// rlwinm r6,r6,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	// andi. r26,r4,319
	ctx.r26.u64 = ctx.r4.u64 & 319;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// or r30,r7,r22
	ctx.r30.u64 = ctx.r7.u64 | ctx.r22.u64;
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// or r29,r5,r11
	ctx.r29.u64 = ctx.r5.u64 | ctx.r11.u64;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82276010
	if (ctx.cr0.eq) goto loc_82276010;
	// rlwinm r9,r21,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r27,1,8,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// ori r30,r30,2048
	ctx.r30.u64 = ctx.r30.u64 | 2048;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82276010:
	// lbz r11,11068(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82276040
	if (!ctx.cr0.eq) goto loc_82276040;
	// lis r11,-16381
	ctx.r11.s64 = -1073545216;
	// ori r11,r11,8705
	ctx.r11.u64 = ctx.r11.u64 | 8705;
	// stwu r11,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r25.u32 = ea;
	// stwu r26,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r25.u32 = ea;
	// stwu r30,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r25.u32 = ea;
	// stwu r28,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r25.u32 = ea;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// b 0x82276104
	goto loc_82276104;
loc_82276040:
	// lwz r11,13612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13612);
	// addi r3,r31,13600
	ctx.r3.s64 = ctx.r31.s64 + 13600;
	// lwz r10,13616(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13616);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82276060
	if (!ctx.cr6.gt) goto loc_82276060;
	// bl 0x82277550
	ctx.lr = 0x8227605C;
	sub_82277550(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82276060:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13612, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lis r5,-16383
	ctx.r5.s64 = -1073676288;
	// lis r9,-16381
	ctx.r9.s64 = -1073545216;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// ori r7,r7,24576
	ctx.r7.u64 = ctx.r7.u64 | 24576;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r8,r5,23041
	ctx.r8.u64 = ctx.r5.u64 | 23041;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r4,26
	ctx.r4.s64 = 26;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFE;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r26,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r5.u32 = ea;
	// ori r10,r9,17921
	ctx.r10.u64 = ctx.r9.u64 | 17921;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,25
	ctx.r9.s64 = 25;
	// stwu r30,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r5.u32 = ea;
	// stwu r28,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r5.u32 = ea;
	// stwu r29,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_82276104:
	// subf. r10,r27,r19
	ctx.r10.s64 = ctx.r19.s64 - ctx.r27.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq 0x8227612c
	if (ctx.cr0.eq) goto loc_8227612C;
	// addi r9,r20,4
	ctx.r9.s64 = ctx.r20.s64 + 4;
	// rlwinm r11,r18,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subf r9,r11,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r11.s64;
	// add r19,r11,r10
	ctx.r19.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r21,r9,r21
	ctx.r21.u64 = ctx.r9.u64 + ctx.r21.u64;
	// b 0x82275f38
	goto loc_82275F38;
loc_8227612C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_82276134"))) PPC_WEAK_FUNC(sub_82276134);
PPC_FUNC_IMPL(__imp__sub_82276134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82276138"))) PPC_WEAK_FUNC(sub_82276138);
PPC_FUNC_IMPL(__imp__sub_82276138) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,17120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17120);
	// lbz r9,11069(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11069);
	// addi r11,r10,4800
	ctx.r11.s64 = ctx.r10.s64 + 4800;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// addi r8,r11,-160
	ctx.r8.s64 = ctx.r11.s64 + -160;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stb r9,11069(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11069, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82276160"))) PPC_WEAK_FUNC(sub_82276160);
PPC_FUNC_IMPL(__imp__sub_82276160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r9,15316(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15316);
	// lwz r8,15312(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15312);
	// lwz r7,15304(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15304);
	// lwz r6,15308(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15308);
	// stw r11,13792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13792, ctx.r11.u32);
	// stw r10,13796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13796, ctx.r10.u32);
	// stw r9,13800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13800, ctx.r9.u32);
	// stw r8,13804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13804, ctx.r8.u32);
	// stw r7,13808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13808, ctx.r7.u32);
	// stw r6,13812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13812, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82276194"))) PPC_WEAK_FUNC(sub_82276194);
PPC_FUNC_IMPL(__imp__sub_82276194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82276198"))) PPC_WEAK_FUNC(sub_82276198);
PPC_FUNC_IMPL(__imp__sub_82276198) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,13796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13796);
	// lwz r10,13792(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13792);
	// lwz r9,13800(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13800);
	// addi r8,r11,-160
	ctx.r8.s64 = ctx.r11.s64 + -160;
	// lwz r7,13804(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13804);
	// lwz r6,13808(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13808);
	// lwz r5,13812(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13812);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r9,15316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15316, ctx.r9.u32);
	// stw r7,15312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15312, ctx.r7.u32);
	// stw r6,15304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15304, ctx.r6.u32);
	// stw r5,15308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15308, ctx.r5.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822761D4"))) PPC_WEAK_FUNC(sub_822761D4);
PPC_FUNC_IMPL(__imp__sub_822761D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822761D8"))) PPC_WEAK_FUNC(sub_822761D8);
PPC_FUNC_IMPL(__imp__sub_822761D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822761E0;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,11024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82276268
	if (ctx.cr0.eq) goto loc_82276268;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82276218
	if (!ctx.cr6.eq) goto loc_82276218;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82276268
	if (!ctx.cr6.gt) goto loc_82276268;
loc_82276218:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8226d588
	ctx.lr = 0x82276228;
	sub_8226D588(ctx, base);
loc_82276228:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8226d680
	ctx.lr = 0x82276230;
	sub_8226D680(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82276260
	if (ctx.cr0.eq) goto loc_82276260;
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82276260
	if (ctx.cr0.eq) goto loc_82276260;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82276228
	if (!ctx.cr6.eq) goto loc_82276228;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82276228
	if (ctx.cr6.gt) goto loc_82276228;
loc_82276260:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8226d5b8
	ctx.lr = 0x82276268;
	sub_8226D5B8(ctx, base);
loc_82276268:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82276270"))) PPC_WEAK_FUNC(sub_82276270);
PPC_FUNC_IMPL(__imp__sub_82276270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82276278;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,15288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15288);
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r9,11024(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// and r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// lwz r11,60(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// bge cr6,0x822762b4
	if (!ctx.cr6.lt) goto loc_822762B4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82276310
	if (!ctx.cr6.lt) goto loc_82276310;
loc_822762A8:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x822762bc
	if (!ctx.cr6.gt) goto loc_822762BC;
	// b 0x82276310
	goto loc_82276310;
loc_822762B4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822762a8
	if (!ctx.cr6.lt) goto loc_822762A8;
loc_822762BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8226d588
	ctx.lr = 0x822762CC;
	sub_8226D588(ctx, base);
loc_822762CC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8226d680
	ctx.lr = 0x822762D4;
	sub_8226D680(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82276308
	if (ctx.cr0.eq) goto loc_82276308;
	// lwz r11,11024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11024);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bge cr6,0x822762f8
	if (!ctx.cr6.lt) goto loc_822762F8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82276308
	if (!ctx.cr6.lt) goto loc_82276308;
	// b 0x82276300
	goto loc_82276300;
loc_822762F8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822762cc
	if (ctx.cr6.lt) goto loc_822762CC;
loc_82276300:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x822762cc
	if (!ctx.cr6.gt) goto loc_822762CC;
loc_82276308:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8226d5b8
	ctx.lr = 0x82276310;
	sub_8226D5B8(ctx, base);
loc_82276310:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8227631C"))) PPC_WEAK_FUNC(sub_8227631C);
PPC_FUNC_IMPL(__imp__sub_8227631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82276320"))) PPC_WEAK_FUNC(sub_82276320);
PPC_FUNC_IMPL(__imp__sub_82276320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82276328;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,21924(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21924);
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227636c
	if (ctx.cr6.eq) goto loc_8227636C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,7412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227636c
	if (!ctx.cr6.eq) goto loc_8227636C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227636C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227636C:
	// lwz r11,23752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276390
	if (ctx.cr6.eq) goto loc_82276390;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// li r3,1
	ctx.r3.s64 = 1;
	// bctrl 
	ctx.lr = 0x82276390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82276390:
	// lwz r30,11088(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11088);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,15288(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15288);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r28,15284(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15284);
	// bl 0x82276270
	ctx.lr = 0x822763AC;
	sub_82276270(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822763ec
	if (ctx.cr6.eq) goto loc_822763EC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822763C0:
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r30,r7,r29
	ctx.r30.u64 = ctx.r7.u64 & ctx.r29.u64;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwx r9,r8,r28
	PPC_STORE_U32(ctx.r8.u32 + ctx.r28.u32, ctx.r9.u32);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822763c0
	if (ctx.cr6.lt) goto loc_822763C0;
loc_822763EC:
	// lwz r3,21924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21924);
	// stw r30,11088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11088, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227640c
	if (ctx.cr6.eq) goto loc_8227640C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227640C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227640C:
	// lwz r11,23752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276430
	if (ctx.cr6.eq) goto loc_82276430;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bctrl 
	ctx.lr = 0x82276430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82276430:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82276438"))) PPC_WEAK_FUNC(sub_82276438);
PPC_FUNC_IMPL(__imp__sub_82276438) {
	PPC_FUNC_PROLOGUE();
	// stw r4,11088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11088, ctx.r4.u32);
	// sync 
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// stw r4,1812(r11)
	PPC_MM_STORE_U32(ctx.r11.u32 + 1812, ctx.r4.u32);
	// eieio 
	// sync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82276454"))) PPC_WEAK_FUNC(sub_82276454);
PPC_FUNC_IMPL(__imp__sub_82276454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82276458"))) PPC_WEAK_FUNC(sub_82276458);
PPC_FUNC_IMPL(__imp__sub_82276458) {
	PPC_FUNC_PROLOGUE();
loc_82276458:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8227646c
	if (!ctx.cr6.lt) goto loc_8227646C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_8227646C:
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8227647c
	if (!ctx.cr6.gt) goto loc_8227647C;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_8227647C:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
loc_82276484:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r3
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r3.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822764a8
	if (!ctx.cr6.eq) goto loc_822764A8;
	// stdcx. r10,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82276484
	if (!ctx.cr0.eq) goto loc_82276484;
	// b 0x822764b0
	goto loc_822764B0;
loc_822764A8:
	// stdcx. r8,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822764B0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpld cr6,r8,r11
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82276458
	if (!ctx.cr6.eq) goto loc_82276458;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822764C0"))) PPC_WEAK_FUNC(sub_822764C0);
PPC_FUNC_IMPL(__imp__sub_822764C0) {
	PPC_FUNC_PROLOGUE();
loc_822764C0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
loc_822764CC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r9,0,r3
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r3.u32);
	ctx.r9.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822764f0
	if (!ctx.cr6.eq) goto loc_822764F0;
	// stdcx. r10,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822764cc
	if (!ctx.cr0.eq) goto loc_822764CC;
	// b 0x822764f8
	goto loc_822764F8;
loc_822764F0:
	// stdcx. r9,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r9.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822764F8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x822764c0
	if (!ctx.cr6.eq) goto loc_822764C0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rldicl r11,r11,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82276518"))) PPC_WEAK_FUNC(sub_82276518);
PPC_FUNC_IMPL(__imp__sub_82276518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82276520;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82276584
	if (!ctx.cr6.eq) goto loc_82276584;
	// lwz r11,11028(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 11028);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227654c
	if (ctx.cr6.eq) goto loc_8227654C;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8227654C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227654C:
	// addi r30,r31,11032
	ctx.r30.s64 = ctx.r31.s64 + 11032;
	// lbz r11,268(r13)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r31,11028(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11028);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// slw r29,r10,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// bl 0x8241e6ec
	ctx.lr = 0x82276568;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// andc r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8241e6dc
	ctx.lr = 0x82276580;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// b 0x822765a4
	goto loc_822765A4;
loc_82276584:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822765a4
	if (!ctx.cr6.eq) goto loc_822765A4;
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// lwz r11,25924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25924);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822765a4
	if (ctx.cr0.eq) goto loc_822765A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226e028
	ctx.lr = 0x822765A4;
	sub_8226E028(ctx, base);
loc_822765A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822765AC"))) PPC_WEAK_FUNC(sub_822765AC);
PPC_FUNC_IMPL(__imp__sub_822765AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822765B0"))) PPC_WEAK_FUNC(sub_822765B0);
PPC_FUNC_IMPL(__imp__sub_822765B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822765B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,15304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822766b0
	if (ctx.cr0.eq) goto loc_822766B0;
	// bne cr6,0x822765e4
	if (!ctx.cr6.eq) goto loc_822765E4;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
loc_822765E4:
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r9,15296(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15296);
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lwz r5,15308(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15308);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// and r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8227664c
	if (ctx.cr6.gt) goto loc_8227664C;
	// lwz r10,13584(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13584);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82276644
	if (ctx.cr6.eq) goto loc_82276644;
	// lwz r11,13588(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13588);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8227663c
	if (ctx.cr6.eq) goto loc_8227663C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82276644
	if (!ctx.cr6.eq) goto loc_82276644;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82276644
	if (!ctx.cr6.lt) goto loc_82276644;
loc_8227663C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822767d8
	goto loc_822767D8;
loc_82276644:
	// stw r4,15304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15304, ctx.r4.u32);
	// b 0x822766a4
	goto loc_822766A4;
loc_8227664C:
	// lwz r9,15312(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15312);
	// lwz r8,13584(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13584);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// beq cr6,0x82276690
	if (ctx.cr6.eq) goto loc_82276690;
	// lwz r11,13588(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13588);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8227663c
	if (ctx.cr6.eq) goto loc_8227663C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82276690
	if (!ctx.cr6.eq) goto loc_82276690;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8227663c
	if (ctx.cr6.lt) goto loc_8227663C;
loc_82276690:
	// lwz r11,15316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15316);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8227663c
	if (ctx.cr6.gt) goto loc_8227663C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r4,15312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15312, ctx.r4.u32);
loc_822766A4:
	// bl 0x822761d8
	ctx.lr = 0x822766A8;
	sub_822761D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822767d8
	goto loc_822767D8;
loc_822766B0:
	// bne cr6,0x822766bc
	if (!ctx.cr6.eq) goto loc_822766BC;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_822766BC:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x822766d0
	if (!ctx.cr6.eq) goto loc_822766D0;
	// li r7,56
	ctx.r7.s64 = 56;
loc_822766D0:
	// lwz r11,15300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15300);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822766e4
	if (!ctx.cr6.gt) goto loc_822766E4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_822766E4:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,15296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15296);
	// add r31,r8,r30
	ctx.r31.u64 = ctx.r8.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822766fc
	if (!ctx.cr6.gt) goto loc_822766FC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_822766FC:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// lwz r10,15292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15292);
	// lwz r6,15324(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15324);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subfc r9,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r7.s64;
	// eqv r5,r7,r11
	// lwz r11,15312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15312);
	// rlwinm r9,r5,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8227673c
	if (!ctx.cr6.gt) goto loc_8227673C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8227673C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8227676c
	if (ctx.cr6.eq) goto loc_8227676C;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r9,15308(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15308);
	// lbz r6,11070(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11070);
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,15312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15312, ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ori r11,r6,4
	ctx.r11.u64 = ctx.r6.u64 | 4;
	// stw r9,15308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15308, ctx.r9.u32);
	// add r31,r8,r30
	ctx.r31.u64 = ctx.r8.u64 + ctx.r30.u64;
	// stb r11,11070(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11070, ctx.r11.u8);
loc_8227676C:
	// lwz r8,13584(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13584);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822767b8
	if (ctx.cr6.eq) goto loc_822767B8;
	// lwz r11,13588(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13588);
	// lwz r10,15308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15308);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8227679c
	if (ctx.cr6.eq) goto loc_8227679C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822767b8
	if (!ctx.cr6.eq) goto loc_822767B8;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x822767b8
	if (!ctx.cr6.lt) goto loc_822767B8;
loc_8227679C:
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8227663c
	if (!ctx.cr6.eq) goto loc_8227663C;
	// subf r11,r30,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8227663c
	if (ctx.cr6.lt) goto loc_8227663C;
loc_822767B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,15308(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15308);
	// bl 0x822761d8
	ctx.lr = 0x822767C4;
	sub_822761D8(ctx, base);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_822767D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822767E0"))) PPC_WEAK_FUNC(sub_822767E0);
PPC_FUNC_IMPL(__imp__sub_822767E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822767E8;
	sub_8224878C(ctx, base);
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822768a4
	if (ctx.cr6.eq) goto loc_822768A4;
	// lwz r11,11024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r10,11036(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822768a4
	if (!ctx.cr6.lt) goto loc_822768A4;
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82276840
	if (!ctx.cr0.eq) goto loc_82276840;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82276840
	if (!ctx.cr6.eq) goto loc_82276840;
	// lwz r11,13584(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822768a4
	if (!ctx.cr6.eq) goto loc_822768A4;
	// bl 0x82277c20
	ctx.lr = 0x82276840;
	sub_82277C20(ctx, base);
loc_82276840:
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// lwz r10,11036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822768a4
	if (!ctx.cr6.lt) goto loc_822768A4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8226d588
	ctx.lr = 0x8227686C;
	sub_8226D588(ctx, base);
	// b 0x82276880
	goto loc_82276880;
loc_82276870:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8226d680
	ctx.lr = 0x82276878;
	sub_8226D680(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8227689c
	if (ctx.cr0.eq) goto loc_8227689C;
loc_82276880:
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// lwz r10,11036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82276870
	if (ctx.cr6.lt) goto loc_82276870;
loc_8227689C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8226d5b8
	ctx.lr = 0x822768A4;
	sub_8226D5B8(ctx, base);
loc_822768A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822768AC"))) PPC_WEAK_FUNC(sub_822768AC);
PPC_FUNC_IMPL(__imp__sub_822768AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822768B0"))) PPC_WEAK_FUNC(sub_822768B0);
PPC_FUNC_IMPL(__imp__sub_822768B0) {
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
	// bl 0x8241e04c
	ctx.lr = 0x822768C8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822768dc
	if (!ctx.cr6.eq) goto loc_822768DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// b 0x822768e4
	goto loc_822768E4;
loc_822768DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
loc_822768E4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822767e0
	ctx.lr = 0x822768FC;
	sub_822767E0(ctx, base);
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

__attribute__((alias("__imp__sub_82276910"))) PPC_WEAK_FUNC(sub_82276910);
PPC_FUNC_IMPL(__imp__sub_82276910) {
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
	// bl 0x8241e04c
	ctx.lr = 0x82276928;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8227693c
	if (!ctx.cr6.eq) goto loc_8227693C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// b 0x82276944
	goto loc_82276944;
loc_8227693C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
loc_82276944:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x822767e0
	ctx.lr = 0x8227695C;
	sub_822767E0(ctx, base);
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

__attribute__((alias("__imp__sub_82276970"))) PPC_WEAK_FUNC(sub_82276970);
PPC_FUNC_IMPL(__imp__sub_82276970) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822769a8
	if (ctx.cr6.eq) goto loc_822769A8;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
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
	// addis r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -1073741824;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_822769A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822769B4"))) PPC_WEAK_FUNC(sub_822769B4);
PPC_FUNC_IMPL(__imp__sub_822769B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822769B8"))) PPC_WEAK_FUNC(sub_822769B8);
PPC_FUNC_IMPL(__imp__sub_822769B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822769C0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r5,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r4,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// addi r11,r10,512
	ctx.r11.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r30,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// rlwinm r7,r11,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// clrlwi r8,r5,3
	ctx.r8.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r9,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// clrlwi r9,r30,3
	ctx.r9.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// clrlwi r8,r4,3
	ctx.r8.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// subf r29,r11,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eieio 
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82278e20
	ctx.lr = 0x82276A38;
	sub_82278E20(ctx, base);
	// stw r29,0(r30)
	PPC_MM_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// eieio 
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82278e20
	ctx.lr = 0x82276A50;
	sub_82278E20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82276A58"))) PPC_WEAK_FUNC(sub_82276A58);
PPC_FUNC_IMPL(__imp__sub_82276A58) {
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
	// lbz r11,11069(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11069);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82276a84
	if (ctx.cr0.eq) goto loc_82276A84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82276b2c
	goto loc_82276B2C;
loc_82276A84:
	// lwz r3,13904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13904);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82276aac
	if (!ctx.cr6.eq) goto loc_82276AAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822765b0
	ctx.lr = 0x82276AA8;
	sub_822765B0(ctx, base);
	// b 0x82276ac8
	goto loc_82276AC8;
loc_82276AAC:
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276ac4
	if (ctx.cr6.eq) goto loc_82276AC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82278f30
	ctx.lr = 0x82276AC0;
	sub_82278F30(ctx, base);
	// b 0x82276ac8
	goto loc_82276AC8;
loc_82276AC4:
	// bl 0x822791a0
	ctx.lr = 0x82276AC8;
	sub_822791A0(ctx, base);
loc_82276AC8:
	// lwz r11,15320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15320);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,15324(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15324);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,15320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15320, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82276b18
	if (!ctx.cr6.gt) goto loc_82276B18;
	// lwz r11,13584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82276b18
	if (!ctx.cr6.eq) goto loc_82276B18;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,15312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15312);
	// lwz r9,15292(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15292);
	// addi r8,r11,160
	ctx.r8.s64 = ctx.r11.s64 + 160;
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// beq cr6,0x82276b18
	if (ctx.cr6.eq) goto loc_82276B18;
	// lwz r11,15296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15296);
	// stw r11,15304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15304, ctx.r11.u32);
loc_82276B18:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82276b2c
	if (!ctx.cr6.eq) goto loc_82276B2C;
	// lbz r11,11069(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11069);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stb r11,11069(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11069, ctx.r11.u8);
loc_82276B2C:
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

__attribute__((alias("__imp__sub_82276B40"))) PPC_WEAK_FUNC(sub_82276B40);
PPC_FUNC_IMPL(__imp__sub_82276B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82276B48;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11069(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11069);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82276b88
	if (ctx.cr0.eq) goto loc_82276B88;
	// lwz r10,17120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17120);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r10,4800
	ctx.r11.s64 = ctx.r10.s64 + 4800;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// addi r8,r11,-160
	ctx.r8.s64 = ctx.r11.s64 + -160;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stb r9,11069(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11069, ctx.r9.u8);
	// b 0x82276ca4
	goto loc_82276CA4;
loc_82276B88:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82276b9c
	if (!ctx.cr6.eq) goto loc_82276B9C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82276ba4
	goto loc_82276BA4;
loc_82276B9C:
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82276BA4:
	// lwz r3,13904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82276bcc
	if (ctx.cr6.eq) goto loc_82276BCC;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82276bcc
	if (ctx.cr6.eq) goto loc_82276BCC;
	// lwz r10,15300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15300);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82276bcc
	if (ctx.cr6.gt) goto loc_82276BCC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82276BCC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bne 0x82276bf0
	if (!ctx.cr0.eq) goto loc_82276BF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822765b0
	ctx.lr = 0x82276BEC;
	sub_822765B0(ctx, base);
	// b 0x82276c0c
	goto loc_82276C0C;
loc_82276BF0:
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276c08
	if (ctx.cr6.eq) goto loc_82276C08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82278f30
	ctx.lr = 0x82276C04;
	sub_82278F30(ctx, base);
	// b 0x82276c0c
	goto loc_82276C0C;
loc_82276C08:
	// bl 0x822791a0
	ctx.lr = 0x82276C0C;
	sub_822791A0(ctx, base);
loc_82276C0C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82276c3c
	if (!ctx.cr6.eq) goto loc_82276C3C;
	// lwz r10,17120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17120);
	// lbz r9,11069(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11069);
	// addi r11,r10,4800
	ctx.r11.s64 = ctx.r10.s64 + 4800;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// addi r8,r11,-160
	ctx.r8.s64 = ctx.r11.s64 + -160;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stb r9,11069(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11069, ctx.r9.u8);
	// b 0x82276c6c
	goto loc_82276C6C;
loc_82276C3C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// stw r30,15316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15316, ctx.r30.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r29,15304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15304, ctx.r29.u32);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r29,15320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15320, ctx.r29.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-160
	ctx.r10.s64 = ctx.r11.s64 + -160;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
loc_82276C6C:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,24376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24376);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82276ca0
	if (!ctx.cr0.eq) goto loc_82276CA0;
	// lwz r4,15328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15328);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82276ca0
	if (ctx.cr6.eq) goto loc_82276CA0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822767e0
	ctx.lr = 0x82276C9C;
	sub_822767E0(ctx, base);
	// stw r29,15328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15328, ctx.r29.u32);
loc_82276CA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82276CA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82276CAC"))) PPC_WEAK_FUNC(sub_82276CAC);
PPC_FUNC_IMPL(__imp__sub_82276CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82276CB0"))) PPC_WEAK_FUNC(sub_82276CB0);
PPC_FUNC_IMPL(__imp__sub_82276CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82276CB8;
	sub_82248764(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r10,11069(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11069);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r11,r11,-143
	ctx.r11.s64 = ctx.r11.s64 + -143;
	// lwz r29,15288(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15288);
	// lwz r28,15284(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15284);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r21,r11,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq 0x82276d70
	if (ctx.cr0.eq) goto loc_82276D70;
	// lwz r11,21924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276f78
	if (ctx.cr6.eq) goto loc_82276F78;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82276f78
	if (ctx.cr6.eq) goto loc_82276F78;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r19,8192
	ctx.r19.s64 = 536870912;
	// lis r23,16384
	ctx.r23.s64 = 1073741824;
	// lis r20,16640
	ctx.r20.s64 = 1090519040;
loc_82276D14:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// clrlwi r5,r10,8
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFFFF;
	// subf r4,r23,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r23.s64;
	// blt cr6,0x82276d30
	if (ctx.cr6.lt) goto loc_82276D30;
	// subf r4,r20,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r20.s64;
loc_82276D30:
	// lwz r3,21924(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21924);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,21924(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21924);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82276d14
	if (!ctx.cr0.eq) goto loc_82276D14;
	// b 0x82276f78
	goto loc_82276F78;
loc_82276D70:
	// lwz r4,11088(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11088);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// beq cr6,0x82276d8c
	if (ctx.cr6.eq) goto loc_82276D8C;
	// mulli r11,r25,3
	ctx.r11.s64 = ctx.r25.s64 * 3;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// b 0x82276d90
	goto loc_82276D90;
loc_82276D8C:
	// mulli r5,r25,3
	ctx.r5.s64 = ctx.r25.s64 * 3;
loc_82276D90:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82276270
	ctx.lr = 0x82276D98;
	sub_82276270(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82276f20
	if (ctx.cr6.eq) goto loc_82276F20;
	// lis r19,8192
	ctx.r19.s64 = 536870912;
	// lis r22,-32178
	ctx.r22.s64 = -2108817408;
	// lis r23,16384
	ctx.r23.s64 = 1073741824;
	// lis r20,16640
	ctx.r20.s64 = 1090519040;
loc_82276DB8:
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,21924(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21924);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r5,r9,8
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFFFF;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// beq cr6,0x82276e14
	if (ctx.cr6.eq) goto loc_82276E14;
	// lwz r10,7412(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 7412);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82276e14
	if (!ctx.cr6.eq) goto loc_82276E14;
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, ctx.xer);
	// subf r4,r23,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r23.s64;
	// blt cr6,0x82276df8
	if (ctx.cr6.lt) goto loc_82276DF8;
	// subf r4,r20,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r20.s64;
loc_82276DF8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82276E14:
	// lwz r10,23752(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23752);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82276e7c
	if (ctx.cr6.eq) goto loc_82276E7C;
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, ctx.xer);
	// subf r30,r23,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r23.s64;
	// blt cr6,0x82276e30
	if (ctx.cr6.lt) goto loc_82276E30;
	// subf r30,r20,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r20.s64;
loc_82276E30:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// subfic r11,r21,0
	ctx.xer.ca = ctx.r21.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r21.s64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// and r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 | 1;
	// bctrl 
	ctx.lr = 0x82276E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82276e7c
	if (ctx.cr6.eq) goto loc_82276E7C;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82276E7C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82276f14
	if (ctx.cr6.eq) goto loc_82276F14;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82276ec0
	if (ctx.cr6.eq) goto loc_82276EC0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82276eb4
	if (!ctx.cr6.eq) goto loc_82276EB4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82276EB4:
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// ori r10,r10,14080
	ctx.r10.u64 = ctx.r10.u64 | 14080;
	// b 0x82276ec8
	goto loc_82276EC8;
loc_82276EC0:
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// ori r10,r10,16128
	ctx.r10.u64 = ctx.r10.u64 | 16128;
loc_82276EC8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stwx r31,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r31.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stwx r10,r9,r28
	PPC_STORE_U32(ctx.r9.u32 + ctx.r28.u32, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82276F14:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82276db8
	if (ctx.cr6.lt) goto loc_82276DB8;
loc_82276F20:
	// stw r11,11088(r27)
	PPC_STORE_U32(ctx.r27.u32 + 11088, ctx.r11.u32);
	// sync 
	// lis r10,32712
	ctx.r10.s64 = 2143813632;
	// stw r11,1812(r10)
	PPC_MM_STORE_U32(ctx.r10.u32 + 1812, ctx.r11.u32);
	// eieio 
	// sync 
	// lwz r3,21924(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 21924);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82276f54
	if (ctx.cr6.eq) goto loc_82276F54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82276F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82276F54:
	// lwz r11,23752(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82276f78
	if (ctx.cr6.eq) goto loc_82276F78;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bctrl 
	ctx.lr = 0x82276F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82276F78:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_82276F80"))) PPC_WEAK_FUNC(sub_82276F80);
PPC_FUNC_IMPL(__imp__sub_82276F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82276F88;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ld r10,12224(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 12224);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r28,r3,12224
	ctx.r28.s64 = ctx.r3.s64 + 12224;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// bne cr6,0x82276fbc
	if (!ctx.cr6.eq) goto loc_82276FBC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82276FBC:
	// lbz r11,11070(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11070);
	// lwz r29,12232(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12232);
	// rlwinm r26,r11,30,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82277030
	if (ctx.cr6.eq) goto loc_82277030;
	// li r25,6
	ctx.r25.s64 = 6;
loc_82276FD4:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276a58
	ctx.lr = 0x82276FE4;
	sub_82276A58(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82277040
	if (ctx.cr0.eq) goto loc_82277040;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82277048
	if (ctx.cr6.eq) goto loc_82277048;
	// li r11,1480
	ctx.r11.s64 = 1480;
	// stw r27,12232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12232, ctx.r27.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// li r11,3584
	ctx.r11.s64 = 3584;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,3648
	ctx.r8.s64 = 3648;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// b 0x8227716c
	goto loc_8227716C;
loc_82277030:
	// add r11,r26,r30
	ctx.r11.u64 = ctx.r26.u64 + ctx.r30.u64;
	// mulli r25,r11,11
	ctx.r25.s64 = ctx.r11.s64 * 11;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82276fd4
	if (!ctx.cr6.eq) goto loc_82276FD4;
loc_82277040:
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
	// b 0x82277188
	goto loc_82277188;
loc_82277048:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822770d0
	if (ctx.cr6.eq) goto loc_822770D0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822764c0
	ctx.lr = 0x82277060;
	sub_822764C0(ctx, base);
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,-16380
	ctx.r8.s64 = -1073479680;
	// ori r11,r9,2607
	ctx.r11.u64 = ctx.r9.u64 | 2607;
	// ori r9,r8,15360
	ctx.r9.u64 = ctx.r8.u64 | 15360;
	// li r8,3
	ctx.r8.s64 = 3;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// li r5,2609
	ctx.r5.s64 = 2609;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r30,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// stwu r30,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// stwu r27,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r7.u32 = ea;
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
loc_822770D0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8227716c
	if (ctx.cr6.eq) goto loc_8227716C;
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lwz r9,15296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15296);
	// lwz r5,15292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15292);
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// rlwinm r11,r9,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r5,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// addi r4,r10,512
	ctx.r4.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r9,3
	ctx.r11.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// clrlwi r9,r5,3
	ctx.r9.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r4,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// ori r5,r3,2607
	ctx.r5.u64 = ctx.r3.u64 | 2607;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// lis r9,-16380
	ctx.r9.s64 = -1073479680;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r9,r9,15360
	ctx.r9.u64 = ctx.r9.u64 | 15360;
	// li r8,2609
	ctx.r8.s64 = 2609;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,8
	ctx.r4.s64 = 8;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// stwu r27,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r7.u32 = ea;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// stwu r4,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r7.u32 = ea;
loc_8227716C:
	// rlwinm r11,r6,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r6,3
	ctx.r10.u64 = ctx.r6.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
loc_82277188:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82277190"))) PPC_WEAK_FUNC(sub_82277190);
PPC_FUNC_IMPL(__imp__sub_82277190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,15308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15308);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// lwz r6,11036(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// clrlwi r5,r10,30
	ctx.r5.u64 = ctx.r10.u32 & 0x3;
	// ori r3,r8,15104
	ctx.r3.u64 = ctx.r8.u64 | 15104;
	// li r7,32767
	ctx.r7.s64 = 32767;
	// lwz r8,11024(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11024);
	// or r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stw r9,13592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13592, ctx.r9.u32);
	// stw r10,13596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13596, ctx.r10.u32);
	// stwu r3,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r4.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// lbz r9,11072(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11072);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82277214
	if (ctx.cr0.eq) goto loc_82277214;
	// li r9,1480
	ctx.r9.s64 = 1480;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// ld r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// clrldi r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFFFFFFFFFF;
	// std r9,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// lbz r7,11072(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11072);
	// lbz r9,11071(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11071);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r7,r7,25
	ctx.r7.u64 = ctx.r7.u32 & 0x7F;
	// stb r9,11071(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11071, ctx.r9.u8);
	// stb r7,11072(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11072, ctx.r7.u8);
	// b 0x8227722c
	goto loc_8227722C;
loc_82277214:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// lis r7,30583
	ctx.r7.s64 = 2004287488;
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
	// ori r7,r7,30583
	ctx.r7.u64 = ctx.r7.u64 | 30583;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
loc_8227722C:
	// lis r7,-16382
	ctx.r7.s64 = -1073610752;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// ori r4,r7,22528
	ctx.r4.u64 = ctx.r7.u64 | 22528;
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwinm r10,r7,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// li r4,3
	ctx.r4.s64 = 3;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r7,-16382
	ctx.r7.s64 = -1073610752;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// rlwinm r10,r8,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// ori r7,r7,22528
	ctx.r7.u64 = ctx.r7.u64 | 22528;
	// addi r31,r10,512
	ctx.r31.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r8,3
	ctx.r10.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r31,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x1000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// lwz r10,21924(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21924);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822772c0
	if (!ctx.cr6.eq) goto loc_822772C0;
	// lbz r10,11069(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11069);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822772c0
	if (ctx.cr0.eq) goto loc_822772C0;
	// lwz r10,11024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11024);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r10,11024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11024);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_822772C0:
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// stw r10,11036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11036, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822772D0"))) PPC_WEAK_FUNC(sub_822772D0);
PPC_FUNC_IMPL(__imp__sub_822772D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x822772D8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// rlwinm r29,r5,8,26,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0x3F;
	// bl 0x8241e04c
	ctx.lr = 0x822772F8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8227730c
	if (!ctx.cr6.eq) goto loc_8227730C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// b 0x82277314
	goto loc_82277314;
loc_8227730C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
loc_82277314:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r26,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,11028(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11028);
	// bne 0x82277328
	if (!ctx.cr0.eq) goto loc_82277328;
	// ori r26,r26,6
	ctx.r26.u64 = ctx.r26.u64 | 6;
loc_82277328:
	// lis r11,-16380
	ctx.r11.s64 = -1073479680;
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r7,-1
	ctx.r7.s64 = -1;
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// beq 0x822774e4
	if (ctx.cr0.eq) goto loc_822774E4;
	// clrlwi. r10,r26,31
	ctx.r10.u64 = ctx.r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82277350
	if (ctx.cr0.eq) goto loc_82277350;
	// lbz r10,11072(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82277384
	if (ctx.cr0.eq) goto loc_82277384;
loc_82277350:
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// clrldi r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
	// lbz r8,11072(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// lbz r10,11071(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11071);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r8,r8,25
	ctx.r8.u64 = ctx.r8.u32 & 0x7F;
	// stb r10,11071(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11071, ctx.r10.u8);
	// stb r8,11072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11072, ctx.r8.u8);
loc_82277384:
	// rlwinm. r6,r26,0,24,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x822773a0
	if (ctx.cr0.eq) goto loc_822773A0;
	// li r10,1404
	ctx.r10.s64 = 1404;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// stwu r27,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r30.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x822773b8
	goto loc_822773B8;
loc_822773A0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,1404
	ctx.r10.u64 = ctx.r10.u64 | 1404;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// stwu r27,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r30.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stwu r28,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r10.u32 = ea;
loc_822773B8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822773c4
	if (!ctx.cr6.eq) goto loc_822773C4;
	// li r29,4
	ctx.r29.s64 = 4;
loc_822773C4:
	// li r5,1400
	ctx.r5.s64 = 1400;
	// rlwinm r8,r9,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwu r29,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r4.u32 = ea;
	// li r8,256
	ctx.r8.s64 = 256;
	// lwz r30,13068(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13068);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// or r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 | ctx.r11.u64;
	// stwu r30,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r4.u32 = ea;
	// stwu r5,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r4.u32 = ea;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// stwu r29,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r4.u32 = ea;
	// stwu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r4.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// beq cr6,0x82277474
	if (ctx.cr6.eq) goto loc_82277474;
	// lwz r8,13068(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13068);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r10,r9,20
	ctx.r10.s64 = ctx.r9.s64 + 20;
	// or r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// stwu r5,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r6.u32 = ea;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// li r4,19
	ctx.r4.s64 = 19;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwu r4,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r6.u32 = ea;
	// li r8,256
	ctx.r8.s64 = 256;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// stwu r28,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r6.u32 = ea;
	// stwu r7,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r6.u32 = ea;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
loc_82277474:
	// lwz r6,13068(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13068);
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// li r5,19
	ctx.r5.s64 = 19;
	// or r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 | ctx.r11.u64;
	// rlwinm r6,r8,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// clrlwi r10,r8,3
	ctx.r10.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r8,r6,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// li r6,256
	ctx.r6.s64 = 256;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// li r8,1118
	ctx.r8.s64 = 1118;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// lwz r10,13068(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13068);
	// oris r10,r10,49152
	ctx.r10.u64 = ctx.r10.u64 | 3221225472;
	// ori r10,r10,21504
	ctx.r10.u64 = ctx.r10.u64 | 21504;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwu r29,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
loc_822774E4:
	// rlwinm. r10,r26,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82277544
	if (ctx.cr0.eq) goto loc_82277544;
	// lwz r10,13068(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13068);
	// li r8,19
	ctx.r8.s64 = 19;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r9,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// addi r6,r11,512
	ctx.r6.s64 = ctx.r11.s64 + 512;
	// clrlwi r11,r9,3
	ctx.r11.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// rlwinm r10,r6,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// li r9,256
	ctx.r9.s64 = 256;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// li r8,1404
	ctx.r8.s64 = 1404;
	// lis r6,2989
	ctx.r6.s64 = 195887104;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// ori r6,r6,61453
	ctx.r6.u64 = ctx.r6.u64 | 61453;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// stwu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r30.u32 = ea;
loc_82277544:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82277550"))) PPC_WEAK_FUNC(sub_82277550);
PPC_FUNC_IMPL(__imp__sub_82277550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82277558;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r29,16384
	ctx.r29.s64 = 1073741824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82277590
	if (ctx.cr6.eq) goto loc_82277590;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r9,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82277590:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r4,r11,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x82276a58
	ctx.lr = 0x822775A4;
	sub_82276A58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822775c0
	if (!ctx.cr0.eq) goto loc_822775C0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,17120(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17120);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82277638
	goto loc_82277638;
loc_822775C0:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227760c
	if (ctx.cr6.eq) goto loc_8227760C;
	// rlwinm r10,r31,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r31,3
	ctx.r9.u64 = ctx.r31.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82277610
	goto loc_82277610;
loc_8227760C:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82277610:
	// rlwinm r10,r31,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0xFFF;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r9,r31,3
	ctx.r9.u64 = ctx.r31.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r3,r29,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r29.s64;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82278e20
	ctx.lr = 0x82277638;
	sub_82278E20(ctx, base);
loc_82277638:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82277660"))) PPC_WEAK_FUNC(sub_82277660);
PPC_FUNC_IMPL(__imp__sub_82277660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82277668;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mullw r31,r5,r6
	ctx.r31.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// not r26,r11
	ctx.r26.u64 = ~ctx.r11.u64;
loc_82277680:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// and r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 & ctx.r26.u64;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x822776a0
	if (!ctx.cr6.gt) goto loc_822776A0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_822776A0:
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x822776B0;
	sub_82248A40(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf. r31,r28,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r27,r29,r27
	ctx.r27.u64 = ctx.r29.u64 + ctx.r27.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// beq 0x822776d4
	if (ctx.cr0.eq) goto loc_822776D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82277550
	ctx.lr = 0x822776D0;
	sub_82277550(ctx, base);
	// b 0x82277680
	goto loc_82277680;
loc_822776D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822776DC"))) PPC_WEAK_FUNC(sub_822776DC);
PPC_FUNC_IMPL(__imp__sub_822776DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822776E0"))) PPC_WEAK_FUNC(sub_822776E0);
PPC_FUNC_IMPL(__imp__sub_822776E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x822776E8;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,13584(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13584);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227774c
	if (ctx.cr6.eq) goto loc_8227774C;
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-127
	ctx.r11.s64 = ctx.r11.s64 + -127;
	// addi r3,r3,13744
	ctx.r3.s64 = ctx.r3.s64 + 13744;
	// rlwimi r30,r11,24,0,7
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r30.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82277660
	ctx.lr = 0x82277748;
	sub_82277660(ctx, base);
	// b 0x822778b0
	goto loc_822778B0;
loc_8227774C:
	// lwz r11,11152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82277800
	if (ctx.cr6.eq) goto loc_82277800;
	// addi r24,r31,11156
	ctx.r24.s64 = ctx.r31.s64 + 11156;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241e62c
	ctx.lr = 0x82277764;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,11152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11152);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822777c0
	if (ctx.cr6.eq) goto loc_822777C0;
	// lwz r11,11152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11152);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lis r11,-28928
	ctx.r11.s64 = -1895825408;
	// bne cr6,0x82277788
	if (!ctx.cr6.eq) goto loc_82277788;
	// lis r11,-32512
	ctx.r11.s64 = -2130706432;
loc_82277788:
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822769b8
	ctx.lr = 0x822777B0;
	sub_822769B8(ctx, base);
	// lwz r11,11152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11152);
	// li r28,1
	ctx.r28.s64 = 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,11152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11152, ctx.r11.u32);
loc_822777C0:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8241e61c
	ctx.lr = 0x822777CC;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82277800
	if (ctx.cr6.eq) goto loc_82277800;
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822778b0
	if (ctx.cr0.eq) goto loc_822778B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24444
	ctx.r3.s64 = ctx.r31.s64 + 24444;
	// bl 0x8241e51c
	ctx.lr = 0x822777F0;
	__imp__KeSetEvent(ctx, base);
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,11072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11072, ctx.r11.u8);
	// b 0x822778b0
	goto loc_822778B0;
loc_82277800:
	// lwz r11,24376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24376);
	// lwz r10,21924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21924);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// bne cr6,0x82277828
	if (!ctx.cr6.eq) goto loc_82277828;
	// lwz r11,23752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23752);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8227782c
	if (ctx.cr6.eq) goto loc_8227782C;
loc_82277828:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8227782C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82277874
	if (ctx.cr6.eq) goto loc_82277874;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82277874
	if (ctx.cr6.eq) goto loc_82277874;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82277874
	if (ctx.cr6.eq) goto loc_82277874;
	// lwz r11,11152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11152);
	// lis r7,-28928
	ctx.r7.s64 = -1895825408;
	// lwz r11,11152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11152);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,11152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11152, ctx.r11.u32);
	// bl 0x82289648
	ctx.lr = 0x82277870;
	sub_82289648(ctx, base);
	// b 0x822778b0
	goto loc_822778B0;
loc_82277874:
	// subfic r10,r23,0
	ctx.xer.ca = ctx.r23.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r23.s64;
	// lwz r11,11152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11152);
	// lwz r11,11152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11152);
	// li r5,1
	ctx.r5.s64 = 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r11,r10,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE;
	// stw r9,11152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11152, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-127
	ctx.r11.s64 = ctx.r11.s64 + -127;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r30,r11,24,0,7
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r30.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82276cb0
	ctx.lr = 0x822778B0;
	sub_82276CB0(ctx, base);
loc_822778B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_822778BC"))) PPC_WEAK_FUNC(sub_822778BC);
PPC_FUNC_IMPL(__imp__sub_822778BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822778C0"))) PPC_WEAK_FUNC(sub_822778C0);
PPC_FUNC_IMPL(__imp__sub_822778C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82277550
	sub_82277550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822778E0"))) PPC_WEAK_FUNC(sub_822778E0);
PPC_FUNC_IMPL(__imp__sub_822778E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822778E8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,11069(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11069);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r30,15316(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15316);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// bne 0x82277a24
	if (!ctx.cr0.eq) goto loc_82277A24;
	// lbz r11,11068(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11068);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227797c
	if (ctx.cr0.eq) goto loc_8227797C;
	// lwz r11,13904(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82277a24
	if (ctx.cr6.eq) goto loc_82277A24;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82277a24
	if (!ctx.cr6.eq) goto loc_82277A24;
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// srawi. r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82277a24
	if (ctx.cr0.eq) goto loc_82277A24;
	// lwz r11,13928(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13928);
	// lwz r3,13924(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13924);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82277950
	if (ctx.cr6.lt) goto loc_82277950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822790f0
	ctx.lr = 0x82277950;
	sub_822790F0(ctx, base);
loc_82277950:
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// oris r9,r29,33024
	ctx.r9.u64 = ctx.r29.u64 | 2164260864;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r8,13924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13924, ctx.r8.u32);
	// b 0x82277a24
	goto loc_82277A24;
loc_8227797C:
	// lwz r11,13584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822779e0
	if (ctx.cr6.eq) goto loc_822779E0;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r9,r30,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r30.s64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// srawi. r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq 0x82277a24
	if (ctx.cr0.eq) goto loc_82277A24;
	// lwz r11,13756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13756);
	// addi r3,r31,13744
	ctx.r3.s64 = ctx.r31.s64 + 13744;
	// lwz r10,13760(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13760);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822779c8
	if (!ctx.cr6.gt) goto loc_822779C8;
	// bl 0x82277550
	ctx.lr = 0x822779C4;
	sub_82277550(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822779C8:
	// oris r10,r30,33024
	ctx.r10.u64 = ctx.r30.u64 | 2164260864;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,13756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13756, ctx.r9.u32);
	// b 0x82277a24
	goto loc_82277A24;
loc_822779E0:
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277190
	ctx.lr = 0x822779EC;
	sub_82277190(ctx, base);
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r6,r30,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r30.s64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// addi r8,r31,13744
	ctx.r8.s64 = ctx.r31.s64 + 13744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822776e0
	ctx.lr = 0x82277A20;
	sub_822776E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82277A24:
	// addi r11,r28,31
	ctx.r11.s64 = ctx.r28.s64 + 31;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r9,r11,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82277a50
	if (!ctx.cr6.gt) goto loc_82277A50;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276b40
	ctx.lr = 0x82277A4C;
	sub_82276B40(ctx, base);
	// b 0x82277a60
	goto loc_82277A60;
loc_82277A50:
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r11,15316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15316, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_82277A60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82277A68"))) PPC_WEAK_FUNC(sub_82277A68);
PPC_FUNC_IMPL(__imp__sub_82277A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82277A70;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,13584(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13584);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82277aac
	if (ctx.cr6.eq) goto loc_82277AAC;
	// addi r3,r3,13744
	ctx.r3.s64 = ctx.r3.s64 + 13744;
	// bl 0x82277660
	ctx.lr = 0x82277AA0;
	sub_82277660(ctx, base);
loc_82277AA0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82277AA4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_82277AAC:
	// lwz r11,11152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11152);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82277b74
	if (ctx.cr6.eq) goto loc_82277B74;
	// mullw r29,r26,r25
	ctx.r29.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r25.s32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276a58
	ctx.lr = 0x82277AD4;
	sub_82276A58(ctx, base);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82248a40
	ctx.lr = 0x82277AEC;
	sub_82248A40(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// addi r28,r31,11156
	ctx.r28.s64 = ctx.r31.s64 + 11156;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8241e62c
	ctx.lr = 0x82277B08;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,11152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11152);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82277b2c
	if (ctx.cr6.eq) goto loc_82277B2C;
	// addi r3,r31,13744
	ctx.r3.s64 = ctx.r31.s64 + 13744;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822769b8
	ctx.lr = 0x82277B28;
	sub_822769B8(ctx, base);
	// li r22,1
	ctx.r22.s64 = 1;
loc_82277B2C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241e61c
	ctx.lr = 0x82277B38;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82277b74
	if (ctx.cr6.eq) goto loc_82277B74;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82277aa0
	if (ctx.cr6.eq) goto loc_82277AA0;
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82277aa0
	if (ctx.cr0.eq) goto loc_82277AA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24444
	ctx.r3.s64 = ctx.r31.s64 + 24444;
	// bl 0x8241e51c
	ctx.lr = 0x82277B64;
	__imp__KeSetEvent(ctx, base);
	// lbz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11072);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,11072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11072, ctx.r11.u8);
	// b 0x82277aa0
	goto loc_82277AA0;
loc_82277B74:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82277c14
	if (ctx.cr6.eq) goto loc_82277C14;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r31,13764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13764, ctx.r31.u32);
	// stw r24,13748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13748, ctx.r24.u32);
	// addi r30,r31,13744
	ctx.r30.s64 = ctx.r31.s64 + 13744;
	// stw r11,13752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13752, ctx.r11.u32);
	// stw r24,13756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13756, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r24,13760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13760, ctx.r24.u32);
	// stw r24,13744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13744, ctx.r24.u32);
	// bl 0x82277550
	ctx.lr = 0x82277BA4;
	sub_82277550(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82277660
	ctx.lr = 0x82277BB8;
	sub_82277660(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82276970
	ctx.lr = 0x82277BC0;
	sub_82276970(ctx, base);
	// lwz r11,11152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11152);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11152, ctx.r11.u32);
	// lwz r11,13744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82277be0
	if (!ctx.cr6.eq) goto loc_82277BE0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// b 0x82277bf8
	goto loc_82277BF8;
loc_82277BE0:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r4,r11,-16384
	ctx.r4.s64 = ctx.r11.s64 + -1073741824;
loc_82277BF8:
	// lwz r11,11464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11464);
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 * 108;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,11584
	ctx.r3.s64 = ctx.r11.s64 + 11584;
	// bl 0x8241e6fc
	ctx.lr = 0x82277C10;
	__imp__KeInsertQueueDpc(ctx, base);
	// b 0x82277aa0
	goto loc_82277AA0;
loc_82277C14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82277aa4
	goto loc_82277AA4;
}

__attribute__((alias("__imp__sub_82277C1C"))) PPC_WEAK_FUNC(sub_82277C1C);
PPC_FUNC_IMPL(__imp__sub_82277C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277C20"))) PPC_WEAK_FUNC(sub_82277C20);
PPC_FUNC_IMPL(__imp__sub_82277C20) {
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
	// lwz r11,11024(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11024);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82277c48
	if (ctx.cr6.eq) goto loc_82277C48;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82277C48:
	// lwz r11,13584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82277cb0
	if (!ctx.cr6.eq) goto loc_82277CB0;
	// lbz r11,11068(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82277cb0
	if (!ctx.cr0.eq) goto loc_82277CB0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276f80
	ctx.lr = 0x82277C70;
	sub_82276F80(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82277cb0
	if (ctx.cr6.eq) goto loc_82277CB0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276a58
	ctx.lr = 0x82277C8C;
	sub_82276A58(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82277cb0
	if (ctx.cr0.eq) goto loc_82277CB0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r31,13744
	ctx.r8.s64 = ctx.r31.s64 + 13744;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822776e0
	ctx.lr = 0x82277CB0;
	sub_822776E0(ctx, base);
loc_82277CB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822778e0
	ctx.lr = 0x82277CB8;
	sub_822778E0(ctx, base);
	// lbz r11,11068(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11068);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82277d08
	if (!ctx.cr0.eq) goto loc_82277D08;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,7408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82277d08
	if (ctx.cr6.eq) goto loc_82277D08;
	// lbz r11,11069(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11069);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82277d08
	if (!ctx.cr0.eq) goto loc_82277D08;
	// lwz r11,11036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822767e0
	ctx.lr = 0x82277CFC;
	sub_822767E0(ctx, base);
	// lbz r11,11069(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11069);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,11069(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11069, ctx.r11.u8);
loc_82277D08:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
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

__attribute__((alias("__imp__sub_82277D24"))) PPC_WEAK_FUNC(sub_82277D24);
PPC_FUNC_IMPL(__imp__sub_82277D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277D28"))) PPC_WEAK_FUNC(sub_82277D28);
PPC_FUNC_IMPL(__imp__sub_82277D28) {
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
	// lwz r31,11036(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// stw r31,11056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11056, ctx.r31.u32);
	// bl 0x82277c20
	ctx.lr = 0x82277D44;
	sub_82277C20(ctx, base);
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

__attribute__((alias("__imp__sub_82277D5C"))) PPC_WEAK_FUNC(sub_82277D5C);
PPC_FUNC_IMPL(__imp__sub_82277D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277D60"))) PPC_WEAK_FUNC(sub_82277D60);
PPC_FUNC_IMPL(__imp__sub_82277D60) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82277dd8
	if (ctx.cr6.eq) goto loc_82277DD8;
	// bl 0x8241e04c
	ctx.lr = 0x82277D84;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82277d98
	if (!ctx.cr6.eq) goto loc_82277D98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// b 0x82277da0
	goto loc_82277DA0;
loc_82277D98:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
loc_82277DA0:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,11036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82277db8
	if (!ctx.cr6.eq) goto loc_82277DB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82277DB8;
	sub_82277C20(ctx, base);
loc_82277DB8:
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// lwz r10,11036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfc r11,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
loc_82277DD8:
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

__attribute__((alias("__imp__sub_82277DF0"))) PPC_WEAK_FUNC(sub_82277DF0);
PPC_FUNC_IMPL(__imp__sub_82277DF0) {
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
	// ble cr6,0x82277e1c
	if (!ctx.cr6.gt) goto loc_82277E1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x82277E1C;
	sub_82277C20(ctx, base);
loc_82277E1C:
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,3332
	ctx.r11.s64 = 3332;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82277E54"))) PPC_WEAK_FUNC(sub_82277E54);
PPC_FUNC_IMPL(__imp__sub_82277E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277E58"))) PPC_WEAK_FUNC(sub_82277E58);
PPC_FUNC_IMPL(__imp__sub_82277E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82277E60;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82277ec4
	if (!ctx.cr6.gt) goto loc_82277EC4;
	// bl 0x82277c20
	ctx.lr = 0x82277E88;
	sub_82277C20(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82277ec4
	if (!ctx.cr6.gt) goto loc_82277EC4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276b40
	ctx.lr = 0x82277EA8;
	sub_82276B40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82277ec4
	if (!ctx.cr0.eq) goto loc_82277EC4;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82277ec8
	if (ctx.cr6.gt) goto loc_82277EC8;
loc_82277EC4:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_82277EC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82277ED0"))) PPC_WEAK_FUNC(sub_82277ED0);
PPC_FUNC_IMPL(__imp__sub_82277ED0) {
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
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82277efc
	if (!ctx.cr6.gt) goto loc_82277EFC;
	// bl 0x82277c20
	ctx.lr = 0x82277EF8;
	sub_82277C20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82277EFC:
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r4,11036(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x822767e0
	ctx.lr = 0x82277F28;
	sub_822767E0(ctx, base);
loc_82277F28:
	// lwz r11,11152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82277f28
	if (!ctx.cr6.eq) goto loc_82277F28;
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

__attribute__((alias("__imp__sub_82277F48"))) PPC_WEAK_FUNC(sub_82277F48);
PPC_FUNC_IMPL(__imp__sub_82277F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82277F50;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82277f7c
	if (!ctx.cr6.gt) goto loc_82277F7C;
	// bl 0x82277c20
	ctx.lr = 0x82277F78;
	sub_82277C20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82277F7C:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822772d0
	ctx.lr = 0x82277F90;
	sub_822772D0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82277F9C"))) PPC_WEAK_FUNC(sub_82277F9C);
PPC_FUNC_IMPL(__imp__sub_82277F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82277FA0"))) PPC_WEAK_FUNC(sub_82277FA0);
PPC_FUNC_IMPL(__imp__sub_82277FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82277FA8;
	sub_82248774(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,11036(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11036);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82277fec
	if (ctx.cr6.eq) goto loc_82277FEC;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82277fec
	if (ctx.cr6.eq) goto loc_82277FEC;
	// bl 0x82277ed0
	ctx.lr = 0x82277FD0;
	sub_82277ED0(ctx, base);
	// b 0x82277fdc
	goto loc_82277FDC;
loc_82277FD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82088648
	ctx.lr = 0x82277FDC;
	sub_82088648(ctx, base);
loc_82277FDC:
	// lwz r10,11120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11120);
	// lwz r11,11124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11124);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82277fd4
	if (!ctx.cr6.eq) goto loc_82277FD4;
loc_82277FEC:
	// lwz r11,15292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82278038
	if (ctx.cr6.eq) goto loc_82278038;
	// lwz r8,15296(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15296);
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r11,r8,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// addi r7,r10,512
	ctx.r7.s64 = ctx.r10.s64 + 512;
	// addi r10,r11,512
	ctx.r10.s64 = ctx.r11.s64 + 512;
	// clrlwi r11,r8,3
	ctx.r11.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// rlwinm r8,r7,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r7,16384
	ctx.r7.s64 = 1073741824;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r4,r7,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r3,r7,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r7.s64;
	// bl 0x82278e20
	ctx.lr = 0x82278038;
	sub_82278E20(ctx, base);
loc_82278038:
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,15224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15224);
	// bl 0x82086968
	ctx.lr = 0x82278044;
	sub_82086968(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,15228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15228);
	// bl 0x82086968
	ctx.lr = 0x82278050;
	sub_82086968(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,15224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15224, ctx.r29.u32);
	// stw r29,15228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15228, ctx.r29.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// bl 0x8241e74c
	ctx.lr = 0x8227806C;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8227807c
	if (!ctx.cr6.eq) goto loc_8227807C;
loc_82278074:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82278360
	goto loc_82278360;
loc_8227807C:
	// lwz r25,4(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r26,8(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r28,12(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r30,16(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bne cr6,0x822780a0
	if (!ctx.cr6.eq) goto loc_822780A0;
	// lis r25,0
	ctx.r25.s64 = 0;
	// ori r25,r25,32768
	ctx.r25.u64 = ctx.r25.u64 | 32768;
loc_822780A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822780ac
	if (!ctx.cr6.eq) goto loc_822780AC;
	// lis r28,32
	ctx.r28.s64 = 2097152;
loc_822780AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822780b8
	if (!ctx.cr6.eq) goto loc_822780B8;
	// li r11,32
	ctx.r11.s64 = 32;
loc_822780B8:
	// divwu r27,r28,r11
	ctx.r27.u32 = ctx.r28.u32 / ctx.r11.u32;
	// twllei r11,0
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x822780dc
	if (!ctx.cr6.eq) goto loc_822780DC;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82086c98
	ctx.lr = 0x822780D4;
	sub_82086C98(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r3,15224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15224, ctx.r3.u32);
loc_822780DC:
	// li r24,3
	ctx.r24.s64 = 3;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82278110
	if (!ctx.cr6.eq) goto loc_82278110;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r4,-30848
	ctx.r4.s64 = -2021654528;
	// subfc r11,r11,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & ctx.r24.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x82086c98
	ctx.lr = 0x82278108;
	sub_82086C98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,15228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15228, ctx.r3.u32);
loc_82278110:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82278358
	if (ctx.cr6.eq) goto loc_82278358;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82278358
	if (ctx.cr6.eq) goto loc_82278358;
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// subfic r23,r11,28
	ctx.xer.ca = ctx.r11.u32 <= 28;
	ctx.r23.s64 = 28 - ctx.r11.s64;
	// bl 0x8241e73c
	ctx.lr = 0x82278130;
	__imp__MmGetPhysicalAddress(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8241e72c
	ctx.lr = 0x82278138;
	__imp__VdInitializeRingBuffer(ctx, base);
	// rlwinm r11,r25,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 23) & 0x7FFFFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r4,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r4.s64 = 31 - ctx.r11.s64;
	// cmplwi cr6,r4,19
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19, ctx.xer);
	// ble cr6,0x82278150
	if (!ctx.cr6.gt) goto loc_82278150;
	// li r4,19
	ctx.r4.s64 = 19;
loc_82278150:
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8241e71c
	ctx.lr = 0x82278170;
	__imp__VdEnableRingBufferRPtrWriteBack(ctx, base);
	// rlwinm r11,r28,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFC;
	// lis r9,2989
	ctx.r9.s64 = 195887104;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ori r7,r9,61453
	ctx.r7.u64 = ctx.r9.u64 | 61453;
	// rlwinm r8,r25,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r27,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// rlwinm r11,r28,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,15296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15296, ctx.r9.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r11,15324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15324, ctx.r11.u32);
	// stw r26,15284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15284, ctx.r26.u32);
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// stw r30,15292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15292, ctx.r30.u32);
	// addi r7,r10,-160
	ctx.r7.s64 = ctx.r10.s64 + -160;
	// stw r30,15312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15312, ctx.r30.u32);
	// stw r30,15316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15316, ctx.r30.u32);
	// stw r27,15300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15300, ctx.r27.u32);
	// stw r8,15288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15288, ctx.r8.u32);
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// stw r29,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r29.u32);
	// lwz r11,11036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,11088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11088, ctx.r29.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r29,15304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15304, ctx.r29.u32);
	// bne cr6,0x822781f0
	if (!ctx.cr6.eq) goto loc_822781F0;
	// stw r24,11036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11036, ctx.r24.u32);
loc_822781F0:
	// lwz r11,11036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11036);
	// lwz r10,11024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,11024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// lwz r9,15308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15308);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,11024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11024);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8241e74c
	ctx.lr = 0x82278224;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r9,-16367
	ctx.r9.s64 = -1072627712;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// ori r8,r9,18432
	ctx.r8.u64 = ctx.r9.u64 | 18432;
	// addi r10,r10,12500
	ctx.r10.s64 = ctx.r10.s64 + 12500;
	// li r7,1023
	ctx.r7.s64 = 1023;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
loc_82278258:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82278258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82278258;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r10,11052(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11052, ctx.r10.u16);
	// sth r11,11054(r31)
	PPC_STORE_U16(ctx.r31.u32 + 11054, ctx.r11.u16);
	// li r4,19
	ctx.r4.s64 = 19;
	// sth r11,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r10,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// bl 0x8241e70c
	ctx.lr = 0x822782A4;
	__imp__KiApcNormalRoutineNop(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276320
	ctx.lr = 0x822782B4;
	sub_82276320(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822782cc
	if (!ctx.cr6.gt) goto loc_822782CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82277c20
	ctx.lr = 0x822782CC;
	sub_82277C20(ctx, base);
loc_822782CC:
	// li r11,3330
	ctx.r11.s64 = 3330;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// ori r11,r11,2562
	ctx.r11.u64 = ctx.r11.u64 | 2562;
	// lis r9,-16368
	ctx.r9.s64 = -1072693248;
	// lis r8,2032
	ctx.r8.s64 = 133169152;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,477
	ctx.r6.s64 = 477;
	// li r4,476
	ctx.r4.s64 = 476;
	// lis r30,2
	ctx.r30.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// ori r30,r30,55
	ctx.r30.u64 = ctx.r30.u64 | 55;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// lwz r10,11028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11028);
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
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r30,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r5.u32 = ea;
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// bl 0x82277df0
	ctx.lr = 0x82278354;
	sub_82277DF0(ctx, base);
	// b 0x82278074
	goto loc_82278074;
loc_82278358:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82278360:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82278368"))) PPC_WEAK_FUNC(sub_82278368);
PPC_FUNC_IMPL(__imp__sub_82278368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82278370;
	sub_8224878C(ctx, base);
	// lbz r11,11071(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11071);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stb r11,11071(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11071, ctx.r11.u8);
	// beq cr6,0x8227838c
	if (ctx.cr6.eq) goto loc_8227838C;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,11071(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11071, ctx.r11.u8);
loc_8227838C:
	// lhz r11,10368(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10368);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822783a0
	if (!ctx.cr0.eq) goto loc_822783A0;
	// li r30,16
	ctx.r30.s64 = 16;
	// b 0x822783ac
	goto loc_822783AC;
loc_822783A0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r30,8
	ctx.r30.s64 = 8;
	// bne cr6,0x822783b8
	if (!ctx.cr6.eq) goto loc_822783B8;
loc_822783AC:
	// li r11,32
	ctx.r11.s64 = 32;
	// li r29,80
	ctx.r29.s64 = 80;
	// b 0x822783c0
	goto loc_822783C0;
loc_822783B8:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r29,40
	ctx.r29.s64 = 40;
loc_822783C0:
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// andc r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twllei r11,0
	// divwu r4,r31,r11
	ctx.r4.u32 = ctx.r31.u32 / ctx.r11.u32;
	// beq cr6,0x82278414
	if (ctx.cr6.eq) goto loc_82278414;
	// addi r9,r3,13460
	ctx.r9.s64 = ctx.r3.s64 + 13460;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r3,13340
	ctx.r10.s64 = ctx.r3.s64 + 13340;
loc_822783EC:
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// twllei r11,0
	// lwzu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// twllei r30,0
	// divwu r7,r7,r11
	ctx.r7.u32 = ctx.r7.u32 / ctx.r11.u32;
	// divwu r8,r8,r30
	ctx.r8.u32 = ctx.r8.u32 / ctx.r30.u32;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822783ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822783EC;
loc_82278414:
	// lwz r10,10368(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10368);
	// add r11,r29,r6
	ctx.r11.u64 = ctx.r29.u64 + ctx.r6.u64;
	// stw r31,13524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13524, ctx.r31.u32);
	// twllei r29,0
	// rlwimi r10,r31,18,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 18) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,10368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10368, ctx.r10.u32);
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// divwu r11,r11,r29
	ctx.r11.u32 = ctx.r11.u32 / ctx.r29.u32;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// lbz r10,11071(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11071);
	// stw r11,13528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13528, ctx.r11.u32);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82278478
	if (!ctx.cr0.eq) goto loc_82278478;
	// lwz r11,12260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// rlwinm r11,r11,0,12,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82278478
	if (!ctx.cr6.eq) goto loc_82278478;
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// li r12,-257
	ctx.r12.s64 = -257;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// b 0x82278480
	goto loc_82278480;
loc_82278478:
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_82278480:
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

