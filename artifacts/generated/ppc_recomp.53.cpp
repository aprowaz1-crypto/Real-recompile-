#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82241134"))) PPC_WEAK_FUNC(sub_82241134);
PPC_FUNC_IMPL(__imp__sub_82241134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241138"))) PPC_WEAK_FUNC(sub_82241138);
PPC_FUNC_IMPL(__imp__sub_82241138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82241140;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82241158:
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// beq cr6,0x8224125c
	if (ctx.cr6.eq) goto loc_8224125C;
	// cmplwi cr6,r26,13
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 13, ctx.xer);
	// beq cr6,0x8224125c
	if (ctx.cr6.eq) goto loc_8224125C;
	// cmplwi cr6,r26,21
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 21, ctx.xer);
	// beq cr6,0x8224125c
	if (ctx.cr6.eq) goto loc_8224125C;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8224125c
	if (ctx.cr6.eq) goto loc_8224125C;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8224125c
	if (ctx.cr6.eq) goto loc_8224125C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822411A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r30,r30,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfsx f13,r30,r27
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,48(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 48, temp.u32);
	// bne cr6,0x8224125c
	if (!ctx.cr6.eq) goto loc_8224125C;
	// lwz r29,36(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82241218
	if (ctx.cr6.eq) goto loc_82241218;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822411F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lfsx f0,r30,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,48(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 48, temp.u32);
loc_82241218:
	// lwz r29,68(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8224125c
	if (ctx.cr6.eq) goto loc_8224125C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224123C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lfsx f0,r30,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,48(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 48, temp.u32);
loc_8224125C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 31, ctx.xer);
	// ble cr6,0x82241158
	if (!ctx.cr6.gt) goto loc_82241158;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82241270"))) PPC_WEAK_FUNC(sub_82241270);
PPC_FUNC_IMPL(__imp__sub_82241270) {
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
	// bl 0x82240df8
	ctx.lr = 0x82241290;
	sub_82240DF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822412ac
	if (ctx.cr6.eq) goto loc_822412AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x822412A8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822412AC:
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

__attribute__((alias("__imp__sub_822412C4"))) PPC_WEAK_FUNC(sub_822412C4);
PPC_FUNC_IMPL(__imp__sub_822412C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822412C8"))) PPC_WEAK_FUNC(sub_822412C8);
PPC_FUNC_IMPL(__imp__sub_822412C8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822412dc
	if (ctx.cr6.eq) goto loc_822412DC;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x822412e8
	if (!ctx.cr6.lt) goto loc_822412E8;
loc_822412DC:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_822412E8:
	// lbz r9,1(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// li r11,255
	ctx.r11.s64 = 255;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lbz r7,2(r6)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r6,3(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// lbz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// mullw r4,r8,r7
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// divw r8,r10,r11
	ctx.r8.s32 = ctx.r10.s32 / ctx.r11.s32;
	// divw r7,r4,r11
	ctx.r7.s32 = ctx.r4.s32 / ctx.r11.s32;
	// divw r6,r9,r11
	ctx.r6.s32 = ctx.r9.s32 / ctx.r11.s32;
	// stb r8,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// stb r7,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r7.u8);
	// stb r6,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241334"))) PPC_WEAK_FUNC(sub_82241334);
PPC_FUNC_IMPL(__imp__sub_82241334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241338"))) PPC_WEAK_FUNC(sub_82241338);
PPC_FUNC_IMPL(__imp__sub_82241338) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8224134c
	if (ctx.cr6.eq) goto loc_8224134C;
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82241358
	if (!ctx.cr6.lt) goto loc_82241358;
loc_8224134C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82241358:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbz r10,1(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r9,2(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r8,3(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// stb r8,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224137C"))) PPC_WEAK_FUNC(sub_8224137C);
PPC_FUNC_IMPL(__imp__sub_8224137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241380"))) PPC_WEAK_FUNC(sub_82241380);
PPC_FUNC_IMPL(__imp__sub_82241380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,11432
	ctx.r11.s64 = ctx.r11.s64 + 11432;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r5,-2
	ctx.r10.s64 = ctx.r5.s64 + -2;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822413A0:
	// lhzu r9,2(r11)
	// sthu r9,2(r10)
	// bdnz 0x822413a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822413A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822413B0"))) PPC_WEAK_FUNC(sub_822413B0);
PPC_FUNC_IMPL(__imp__sub_822413B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822413B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,152
	ctx.r31.s64 = ctx.r3.s64 + 152;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
loc_822413C8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241408
	if (ctx.cr6.eq) goto loc_82241408;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822413E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241404
	if (ctx.cr6.eq) goto loc_82241404;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82241404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82241404:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82241408:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x822413c8
	if (!ctx.cr0.eq) goto loc_822413C8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8224141C"))) PPC_WEAK_FUNC(sub_8224141C);
PPC_FUNC_IMPL(__imp__sub_8224141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241420"))) PPC_WEAK_FUNC(sub_82241420);
PPC_FUNC_IMPL(__imp__sub_82241420) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// b 0x82163ef8
	sub_82163EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82241428"))) PPC_WEAK_FUNC(sub_82241428);
PPC_FUNC_IMPL(__imp__sub_82241428) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// stw r7,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224144C"))) PPC_WEAK_FUNC(sub_8224144C);
PPC_FUNC_IMPL(__imp__sub_8224144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241450"))) PPC_WEAK_FUNC(sub_82241450);
PPC_FUNC_IMPL(__imp__sub_82241450) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8224148c
	if (ctx.cr6.eq) goto loc_8224148C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8224148c
	if (ctx.cr6.eq) goto loc_8224148C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8224148c
	if (ctx.cr6.eq) goto loc_8224148C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8224148c
	if (ctx.cr6.eq) goto loc_8224148C;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8224148c
	if (ctx.cr6.eq) goto loc_8224148C;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8224148c
	if (ctx.cr6.eq) goto loc_8224148C;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8224148C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241494"))) PPC_WEAK_FUNC(sub_82241494);
PPC_FUNC_IMPL(__imp__sub_82241494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241498"))) PPC_WEAK_FUNC(sub_82241498);
PPC_FUNC_IMPL(__imp__sub_82241498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822414A0;
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
	// bl 0x8218b1e8
	ctx.lr = 0x822414BC;
	sub_8218B1E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r10,r11,508
	ctx.r10.s64 = ctx.r11.s64 + 508;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82246438
	ctx.lr = 0x822414D8;
	sub_82246438(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r8,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82241554
	if (ctx.cr6.lt) goto loc_82241554;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8224156c
	if (!ctx.cr6.lt) goto loc_8224156C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,496
	ctx.r4.s64 = ctx.r11.s64 + 496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x82241550;
	sub_8218B2D0(ctx, base);
	// b 0x8224156c
	goto loc_8224156C;
loc_82241554:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,496
	ctx.r4.s64 = ctx.r11.s64 + 496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x82241568;
	sub_8218B2D0(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_8224156C:
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82241578:
	// stw r30,-52(r11)
	PPC_STORE_U32(ctx.r11.u32 + -52, ctx.r30.u32);
	// stw r30,-44(r11)
	PPC_STORE_U32(ctx.r11.u32 + -44, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82241578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241578;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822415A0"))) PPC_WEAK_FUNC(sub_822415A0);
PPC_FUNC_IMPL(__imp__sub_822415A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822415A8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82234518
	ctx.lr = 0x822415B8;
	sub_82234518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x822415C0;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x822415CC;
	sub_821837D0(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82241624
	if (ctx.cr6.lt) goto loc_82241624;
	// beq cr6,0x822415f8
	if (ctx.cr6.eq) goto loc_822415F8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82241750
	if (!ctx.cr6.lt) goto loc_82241750;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r8,r11,11672
	ctx.r8.s64 = ctx.r11.s64 + 11672;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82241660
	goto loc_82241660;
loc_822415F8:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r8,r11,11672
	ctx.r8.s64 = ctx.r11.s64 + 11672;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8224160C:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stwu r10,28(r11)
	ea = 28 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8224160c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224160C;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82241660
	goto loc_82241660;
loc_82241624:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r29,r11,12344
	ctx.r29.s64 = ctx.r11.s64 + 12344;
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
loc_82241630:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r11.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82234528
	ctx.lr = 0x82241640;
	sub_82234528(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r10,r29,248
	ctx.r10.s64 = ctx.r29.s64 + 248;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82241630
	if (ctx.cr6.lt) goto loc_82241630;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82241660:
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82246848
	ctx.lr = 0x82241674;
	sub_82246848(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822416a8
	if (ctx.cr6.lt) goto loc_822416A8;
	// beq cr6,0x8224169c
	if (ctx.cr6.eq) goto loc_8224169C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82241750
	if (!ctx.cr6.lt) goto loc_82241750;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r8,r11,12120
	ctx.r8.s64 = ctx.r11.s64 + 12120;
	// b 0x8224173c
	goto loc_8224173C;
loc_8224169C:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r8,r11,12120
	ctx.r8.s64 = ctx.r11.s64 + 12120;
	// b 0x82241738
	goto loc_82241738;
loc_822416A8:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82234520
	ctx.lr = 0x822416B0;
	sub_82234520(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bne cr6,0x822416c4
	if (!ctx.cr6.eq) goto loc_822416C4;
	// bl 0x82234518
	ctx.lr = 0x822416C0;
	sub_82234518(ctx, base);
	// b 0x822416c8
	goto loc_822416C8;
loc_822416C4:
	// bl 0x82234520
	ctx.lr = 0x822416C8;
	sub_82234520(ctx, base);
loc_822416C8:
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,12568
	ctx.r9.s64 = ctx.r9.s64 + 12568;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r3,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r3.u32);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r3,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r3.u32);
	// stw r10,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r3,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r3.u32);
	// stw r10,76(r9)
	PPC_STORE_U32(ctx.r9.u32 + 76, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r3,108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 108, ctx.r3.u32);
	// stw r10,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r3,136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 136, ctx.r3.u32);
	// stw r10,132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 132, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r3,164(r9)
	PPC_STORE_U32(ctx.r9.u32 + 164, ctx.r3.u32);
	// stw r10,160(r9)
	PPC_STORE_U32(ctx.r9.u32 + 160, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r3,192(r9)
	PPC_STORE_U32(ctx.r9.u32 + 192, ctx.r3.u32);
	// stw r10,188(r9)
	PPC_STORE_U32(ctx.r9.u32 + 188, ctx.r10.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r3,220(r9)
	PPC_STORE_U32(ctx.r9.u32 + 220, ctx.r3.u32);
	// stw r10,216(r9)
	PPC_STORE_U32(ctx.r9.u32 + 216, ctx.r10.u32);
loc_82241738:
	// li r7,8
	ctx.r7.s64 = 8;
loc_8224173C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82246848
	ctx.lr = 0x82241750;
	sub_82246848(ctx, base);
loc_82241750:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82241758;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82241760"))) PPC_WEAK_FUNC(sub_82241760);
PPC_FUNC_IMPL(__imp__sub_82241760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82241768;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82241854
	if (!ctx.cr6.eq) goto loc_82241854;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82234528
	ctx.lr = 0x82241788;
	sub_82234528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82241790;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8224179C;
	sub_821837D0(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821a1de8
	ctx.lr = 0x822417A8;
	sub_821A1DE8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r26,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r26.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r29,r11,1200
	ctx.r29.s64 = ctx.r11.s64 + 1200;
	// addi r27,r30,56
	ctx.r27.s64 = ctx.r30.s64 + 56;
loc_822417C0:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r6,96(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82246b20
	ctx.lr = 0x822417E0;
	sub_82246B20(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x822417c0
	if (ctx.cr6.lt) goto loc_822417C0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r30,152
	ctx.r10.s64 = ctx.r30.s64 + 152;
loc_822417F8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82241818
	if (!ctx.cr6.eq) goto loc_82241818;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x822417f8
	if (ctx.cr6.lt) goto loc_822417F8;
	// b 0x8224183c
	goto loc_8224183C;
loc_82241818:
	// addi r11,r11,38
	ctx.r11.s64 = ctx.r11.s64 + 38;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x821a18e8
	ctx.lr = 0x82241838;
	sub_821A18E8(ctx, base);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
loc_8224183C:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r28.u32);
	// bl 0x821837d0
	ctx.lr = 0x82241854;
	sub_821837D0(ctx, base);
loc_82241854:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8224185C"))) PPC_WEAK_FUNC(sub_8224185C);
PPC_FUNC_IMPL(__imp__sub_8224185C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241860"))) PPC_WEAK_FUNC(sub_82241860);
PPC_FUNC_IMPL(__imp__sub_82241860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82241868;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// std r8,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r8.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r9,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r9.u64);
	// li r29,0
	ctx.r29.s64 = 0;
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r31,r1,216
	ctx.r31.s64 = ctx.r1.s64 + 216;
	// addi r11,r1,252
	ctx.r11.s64 = ctx.r1.s64 + 252;
loc_8224189C:
	// lbzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82241900
	if (ctx.cr6.eq) goto loc_82241900;
	// lbz r10,286(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 286);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// and r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 & ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x822418dc
	if (ctx.cr6.eq) goto loc_822418DC;
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// lbz r10,198(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 198);
	// bl 0x8223c7b0
	ctx.lr = 0x822418D8;
	sub_8223C7B0(ctx, base);
	// b 0x822418e4
	goto loc_822418E4;
loc_822418DC:
	// lbz r9,198(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 198);
	// bl 0x8223cd88
	ctx.lr = 0x822418E4;
	sub_8223CD88(ctx, base);
loc_822418E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rotlwi r26,r26,1
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// addi r11,r1,252
	ctx.r11.s64 = ctx.r1.s64 + 252;
	// blt cr6,0x8224189c
	if (ctx.cr6.lt) goto loc_8224189C;
loc_82241900:
	// lbz r11,286(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 286);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// li r11,255
	ctx.r11.s64 = 255;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r6,255
	ctx.r6.s64 = 255;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// beq cr6,0x8224194c
	if (ctx.cr6.eq) goto loc_8224194C;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// lbz r10,198(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 198);
	// bl 0x8223c7b0
	ctx.lr = 0x82241944;
	sub_8223C7B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8224194C:
	// lbz r10,197(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 197);
	// lbz r9,198(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 198);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x8223cd88
	ctx.lr = 0x8224195C;
	sub_8223CD88(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82241964"))) PPC_WEAK_FUNC(sub_82241964);
PPC_FUNC_IMPL(__imp__sub_82241964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241968"))) PPC_WEAK_FUNC(sub_82241968);
PPC_FUNC_IMPL(__imp__sub_82241968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82241970;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r5.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r6,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// std r8,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// std r10,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r10.u64);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// lbz r26,214(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// lbz r22,213(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 213);
	// lhzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,65535
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 65535, ctx.xer);
	// beq cr6,0x82241a38
	if (ctx.cr6.eq) goto loc_82241A38;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,252
	ctx.r8.s64 = ctx.r1.s64 + 252;
	// addi r10,r1,276
	ctx.r10.s64 = ctx.r1.s64 + 276;
	// add r25,r9,r8
	ctx.r25.u64 = ctx.r9.u64 + ctx.r8.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_822419D8:
	// lbzx r30,r23,r29
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82241a38
	if (ctx.cr6.eq) goto loc_82241A38;
	// lbz r10,302(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 302);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// and r9,r10,r24
	ctx.r9.u64 = ctx.r10.u64 & ctx.r24.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82241a18
	if (ctx.cr6.eq) goto loc_82241A18;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// bl 0x8223c7b0
	ctx.lr = 0x82241A14;
	sub_8223C7B0(ctx, base);
	// b 0x82241a20
	goto loc_82241A20;
loc_82241A18:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// bl 0x8223cd88
	ctx.lr = 0x82241A20;
	sub_8223CD88(ctx, base);
loc_82241A20:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rotlwi r24,r24,1
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r24.u32, 1);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x822419d8
	if (ctx.cr6.lt) goto loc_822419D8;
loc_82241A38:
	// lbz r11,302(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 302);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// li r6,255
	ctx.r6.s64 = 255;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bl 0x8223cd88
	ctx.lr = 0x82241A74;
	sub_8223CD88(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82241A7C"))) PPC_WEAK_FUNC(sub_82241A7C);
PPC_FUNC_IMPL(__imp__sub_82241A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241A80"))) PPC_WEAK_FUNC(sub_82241A80);
PPC_FUNC_IMPL(__imp__sub_82241A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// std r6,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// li r6,255
	ctx.r6.s64 = 255;
	// std r7,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r7.u64);
	// li r7,1
	ctx.r7.s64 = 1;
	// std r8,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r8.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// std r9,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r9.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lbz r5,127(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
loc_82241AB4:
	// lbzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82241b10
	if (ctx.cr6.eq) goto loc_82241B10;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// and r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 & ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82241af8
	if (ctx.cr6.eq) goto loc_82241AF8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82241af8
	if (ctx.cr6.gt) goto loc_82241AF8;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82241AF0:
	// stbu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82241af0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241AF0;
loc_82241AF8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x82241ab4
	if (ctx.cr6.lt) goto loc_82241AB4;
loc_82241B10:
	// rlwinm r10,r5,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// subfic r10,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r10.s64 = 256 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82241B38:
	// stbu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82241b38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241B38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82241B44"))) PPC_WEAK_FUNC(sub_82241B44);
PPC_FUNC_IMPL(__imp__sub_82241B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82241B48"))) PPC_WEAK_FUNC(sub_82241B48);
PPC_FUNC_IMPL(__imp__sub_82241B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82241B50;
	sub_82248750(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4432(r1)
	ea = -4432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// stw r5,4468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4468, ctx.r5.u32);
	// bl 0x82345178
	ctx.lr = 0x82241B6C;
	sub_82345178(ctx, base);
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r30,r26,32
	ctx.r30.s64 = ctx.r26.s64 + 32;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82241B80:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82241ca4
	if (!ctx.cr6.eq) goto loc_82241CA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82241b80
	if (ctx.cr6.lt) goto loc_82241B80;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241bc4
	if (ctx.cr6.eq) goto loc_82241BC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82241BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82241bc8
	goto loc_82241BC8;
loc_82241BC4:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_82241BC8:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x821847a8
	ctx.lr = 0x82241BD8;
	sub_821847A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r19,40
	ctx.r4.s64 = ctx.r19.s64 + 40;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82248a40
	ctx.lr = 0x82241BE8;
	sub_82248A40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// ld r6,0(r19)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r19.u32 + 0);
	// ld r7,8(r19)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r19.u32 + 8);
	// ld r8,16(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// ld r10,32(r19)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r19.u32 + 32);
	// lbz r5,2(r19)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// bl 0x82241860
	ctx.lr = 0x82241C0C;
	sub_82241860(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241c2c
	if (ctx.cr6.eq) goto loc_82241C2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82241C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82241C2C:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lhz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// lhz r30,2(r26)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241c58
	if (ctx.cr6.eq) goto loc_82241C58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82241C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82241c5c
	goto loc_82241C5C;
loc_82241C58:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_82241C5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82242154
	if (ctx.cr6.eq) goto loc_82242154;
loc_82241C64:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82241c90
	if (ctx.cr6.eq) goto loc_82241C90;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r10,r21,-4
	ctx.r10.s64 = ctx.r21.s64 + -4;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r8,r1,1200
	ctx.r8.s64 = ctx.r1.s64 + 1200;
loc_82241C7C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82241c7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241C7C;
loc_82241C90:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r21,r21,4096
	ctx.r21.s64 = ctx.r21.s64 + 4096;
	// bne 0x82241c64
	if (!ctx.cr0.eq) goto loc_82241C64;
	// b 0x82242154
	goto loc_82242154;
loc_82241CA4:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241ccc
	if (ctx.cr6.eq) goto loc_82241CCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82241CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82241cd0
	goto loc_82241CD0;
loc_82241CCC:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_82241CD0:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// bl 0x821847a8
	ctx.lr = 0x82241CE0;
	sub_821847A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r19,56
	ctx.r4.s64 = ctx.r19.s64 + 56;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x82248a40
	ctx.lr = 0x82241CF0;
	sub_82248A40(ctx, base);
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// ld r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r19.u32 + 0);
	// ld r5,8(r19)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r19.u32 + 8);
	// ld r6,16(r19)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r7,24(r19)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// ld r8,32(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 32);
	// ld r9,40(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 40);
	// ld r10,48(r19)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r19.u32 + 48);
	// bl 0x82241a80
	ctx.lr = 0x82241D14;
	sub_82241A80(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,3248
	ctx.r3.s64 = ctx.r1.s64 + 3248;
	// bl 0x821847a8
	ctx.lr = 0x82241D24;
	sub_821847A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r19,40
	ctx.r4.s64 = ctx.r19.s64 + 40;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82248a40
	ctx.lr = 0x82241D34;
	sub_82248A40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,3248
	ctx.r3.s64 = ctx.r1.s64 + 3248;
	// ld r6,0(r19)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r19.u32 + 0);
	// ld r7,8(r19)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r19.u32 + 8);
	// ld r8,16(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// ld r10,32(r19)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r19.u32 + 32);
	// lbz r5,2(r19)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// bl 0x82241860
	ctx.lr = 0x82241D58;
	sub_82241860(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241d78
	if (ctx.cr6.eq) goto loc_82241D78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82241D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82241D78:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lhz r18,0(r26)
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241da4
	if (ctx.cr6.eq) goto loc_82241DA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82241D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// b 0x82241da8
	goto loc_82241DA8;
loc_82241DA4:
	// mr r14,r17
	ctx.r14.u64 = ctx.r17.u64;
loc_82241DA8:
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// addi r30,r19,80
	ctx.r30.s64 = ctx.r19.s64 + 80;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r15,r17
	ctx.r15.u64 = ctx.r17.u64;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
loc_82241DBC:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224213c
	if (ctx.cr6.eq) goto loc_8224213C;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241dec
	if (ctx.cr6.eq) goto loc_82241DEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82241DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82241df0
	goto loc_82241DF0;
loc_82241DEC:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_82241DF0:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// bl 0x821847a8
	ctx.lr = 0x82241E00;
	sub_821847A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r19,48
	ctx.r4.s64 = ctx.r19.s64 + 48;
	// stw r15,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r15.u32);
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82248a40
	ctx.lr = 0x82241E14;
	sub_82248A40(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// ld r5,0(r19)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r19.u32 + 0);
	// ld r6,8(r19)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r19.u32 + 8);
	// ld r7,16(r19)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// ld r9,32(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 32);
	// ld r10,40(r19)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r19.u32 + 40);
	// bl 0x82241968
	ctx.lr = 0x82241E38;
	sub_82241968(ctx, base);
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241e58
	if (ctx.cr6.eq) goto loc_82241E58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82241E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82241E58:
	// lwz r8,0(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82241e70
	if (ctx.cr6.eq) goto loc_82241E70;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x82241e74
	goto loc_82241E74;
loc_82241E70:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82241E74:
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// divw r25,r11,r7
	ctx.r25.s32 = ctx.r11.s32 / ctx.r7.s32;
	// andc r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// twllei r7,0
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// twlgei r5,-1
	// beq cr6,0x82241ea4
	if (ctx.cr6.eq) goto loc_82241EA4;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// b 0x82241ea8
	goto loc_82241EA8;
loc_82241EA4:
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
loc_82241EA8:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82241ebc
	if (ctx.cr6.eq) goto loc_82241EBC;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82241ec0
	goto loc_82241EC0;
loc_82241EBC:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82241EC0:
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhz r8,2(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// li r5,1020
	ctx.r5.s64 = 1020;
	// stw r17,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r17.u32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// divw r6,r11,r8
	ctx.r6.s32 = ctx.r11.s32 / ctx.r8.s32;
	// andc r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// twllei r8,0
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// mullw r20,r6,r9
	ctx.r20.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// twlgei r11,-1
	// bl 0x82248f70
	ctx.lr = 0x82241EF8;
	sub_82248F70(ctx, base);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// addi r6,r19,60
	ctx.r6.s64 = ctx.r19.s64 + 60;
loc_82241F04:
	// lbzx r8,r6,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82241f5c
	if (ctx.cr6.eq) goto loc_82241F5C;
	// cmplw cr6,r7,r15
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82241f4c
	if (!ctx.cr6.eq) goto loc_82241F4C;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82241f4c
	if (ctx.cr6.gt) goto loc_82241F4C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// li r9,1
	ctx.r9.s64 = 1;
	// beq 0x82241f4c
	if (ctx.cr0.eq) goto loc_82241F4C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82241F44:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82241f44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241F44;
loc_82241F4C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x82241f04
	if (ctx.cr6.lt) goto loc_82241F04;
loc_82241F5C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r5,2(r19)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// lwz r3,1124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// bl 0x82236478
	ctx.lr = 0x82241F74;
	sub_82236478(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224213c
	if (ctx.cr6.eq) goto loc_8224213C;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82241f9c
	if (ctx.cr6.eq) goto loc_82241F9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8224213c
	if (!ctx.cr6.eq) goto loc_8224213C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r27,r11,4920
	ctx.r27.s64 = ctx.r11.s64 + 4920;
	// b 0x82241fa4
	goto loc_82241FA4;
loc_82241F9C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r27,r11,4808
	ctx.r27.s64 = ctx.r11.s64 + 4808;
loc_82241FA4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8224213c
	if (ctx.cr6.eq) goto loc_8224213C;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82241fd4
	if (ctx.cr6.eq) goto loc_82241FD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82241FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x82241fd8
	goto loc_82241FD8;
loc_82241FD4:
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
loc_82241FD8:
	// lhz r11,2(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// beq cr6,0x82242080
	if (ctx.cr6.eq) goto loc_82242080;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242110
	if (ctx.cr6.eq) goto loc_82242110;
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
loc_82241FF4:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242060
	if (ctx.cr6.eq) goto loc_82242060;
	// subf r28,r25,r23
	ctx.r28.s64 = ctx.r23.s64 - ctx.r25.s64;
	// addi r29,r22,-1
	ctx.r29.s64 = ctx.r22.s64 + -1;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_82242010:
	// lbzu r11,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r8,r1,2224
	ctx.r8.s64 = ctx.r1.s64 + 2224;
	// lbzux r9,r28,r25
	// addi r7,r1,3248
	ctx.r7.s64 = ctx.r1.s64 + 3248;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r4,r1,1200
	ctx.r4.s64 = ctx.r1.s64 + 1200;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82242048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82242010
	if (ctx.cr6.lt) goto loc_82242010;
loc_82242060:
	// lhz r10,2(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r22,r22,r18
	ctx.r22.u64 = ctx.r22.u64 + ctx.r18.u64;
	// add r23,r23,r20
	ctx.r23.u64 = ctx.r23.u64 + ctx.r20.u64;
	// addi r21,r21,4096
	ctx.r21.s64 = ctx.r21.s64 + 4096;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82241ff4
	if (ctx.cr6.lt) goto loc_82241FF4;
	// b 0x82242110
	goto loc_82242110;
loc_82242080:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242110
	if (ctx.cr6.eq) goto loc_82242110;
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
loc_8224208C:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822420f4
	if (ctx.cr6.eq) goto loc_822420F4;
	// subf r28,r25,r23
	ctx.r28.s64 = ctx.r23.s64 - ctx.r25.s64;
	// addi r29,r22,-1
	ctx.r29.s64 = ctx.r22.s64 + -1;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_822420A8:
	// lbzu r11,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r8,r1,2224
	ctx.r8.s64 = ctx.r1.s64 + 2224;
	// lbzux r9,r28,r25
	// addi r7,r1,1200
	ctx.r7.s64 = ctx.r1.s64 + 1200;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bctrl 
	ctx.lr = 0x822420DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822420a8
	if (ctx.cr6.lt) goto loc_822420A8;
loc_822420F4:
	// lhz r10,2(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r22,r22,r18
	ctx.r22.u64 = ctx.r22.u64 + ctx.r18.u64;
	// add r23,r23,r20
	ctx.r23.u64 = ctx.r23.u64 + ctx.r20.u64;
	// addi r21,r21,4096
	ctx.r21.s64 = ctx.r21.s64 + 4096;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8224208c
	if (ctx.cr6.lt) goto loc_8224208C;
loc_82242110:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242130
	if (ctx.cr6.eq) goto loc_82242130;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242130:
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// lwz r21,4468(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4468);
loc_8224213C:
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r16,r16,4
	ctx.r16.s64 = ctx.r16.s64 + 4;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// cmplwi cr6,r15,4
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 4, ctx.xer);
	// blt cr6,0x82241dbc
	if (ctx.cr6.lt) goto loc_82241DBC;
loc_82242154:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242174
	if (ctx.cr6.eq) goto loc_82242174;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242174:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,4432
	ctx.r1.s64 = ctx.r1.s64 + 4432;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82242180"))) PPC_WEAK_FUNC(sub_82242180);
PPC_FUNC_IMPL(__imp__sub_82242180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82242188;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822421c4
	if (ctx.cr6.eq) goto loc_822421C4;
	// lwz r21,16(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x822421d0
	if (!ctx.cr6.eq) goto loc_822421D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r10,560
	ctx.r5.s64 = ctx.r10.s64 + 560;
	// bl 0x8218a128
	ctx.lr = 0x822421C4;
	sub_8218A128(ctx, base);
loc_822421C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_822421D0:
	// lwz r22,20(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82242200
	if (!ctx.cr6.eq) goto loc_82242200;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r10,528
	ctx.r5.s64 = ctx.r10.s64 + 528;
	// bl 0x8218a128
	ctx.lr = 0x822421F4;
	sub_8218A128(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_82242200:
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242224
	if (ctx.cr6.eq) goto loc_82242224;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224221C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82242228
	goto loc_82242228;
loc_82242224:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82242228:
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224224c
	if (ctx.cr6.eq) goto loc_8224224C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x82242250
	goto loc_82242250;
loc_8224224C:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82242250:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242264
	if (ctx.cr6.eq) goto loc_82242264;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x82242268
	goto loc_82242268;
loc_82242264:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82242268:
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224227c
	if (ctx.cr6.eq) goto loc_8224227C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x82242280
	goto loc_82242280;
loc_8224227C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82242280:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242290
	if (ctx.cr6.eq) goto loc_82242290;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x82242294
	goto loc_82242294;
loc_82242290:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82242294:
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r8,r8,r10
	ctx.r8.s32 = ctx.r8.s32 / ctx.r10.s32;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// twllei r10,0
	// andc r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// mullw r27,r8,r9
	ctx.r27.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// twlgei r6,-1
	// beq cr6,0x822421c4
	if (ctx.cr6.eq) goto loc_822421C4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822421c4
	if (ctx.cr6.eq) goto loc_822421C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822422D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822421c4
	if (ctx.cr6.eq) goto loc_822421C4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8223dc78
	ctx.lr = 0x822422E8;
	sub_8223DC78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8224237c
	if (!ctx.cr6.gt) goto loc_8224237C;
loc_822422F4:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8224237c
	if (ctx.cr6.eq) goto loc_8224237C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8224237c
	if (ctx.cr6.eq) goto loc_8224237C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8223dc58
	ctx.lr = 0x82242310;
	sub_8223DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82242364
	if (!ctx.cr6.gt) goto loc_82242364;
	// addi r11,r25,2
	ctx.r11.s64 = ctx.r25.s64 + 2;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_82242320:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lbzx r8,r9,r24
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r24.u32);
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// ble cr6,0x82242354
	if (!ctx.cr6.gt) goto loc_82242354;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r8.u8);
	// stb r7,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r7.u8);
loc_82242354:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82242320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82242320;
loc_82242364:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r26,r27,r26
	ctx.r26.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822422f4
	if (ctx.cr6.lt) goto loc_822422F4;
loc_8224237C:
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242398
	if (ctx.cr6.eq) goto loc_82242398;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242398:
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822423d0
	if (ctx.cr6.eq) goto loc_822423D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822423B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822423d0
	if (ctx.cr6.eq) goto loc_822423D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822423D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822423D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_822423DC"))) PPC_WEAK_FUNC(sub_822423DC);
PPC_FUNC_IMPL(__imp__sub_822423DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822423E0"))) PPC_WEAK_FUNC(sub_822423E0);
PPC_FUNC_IMPL(__imp__sub_822423E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x822423E8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82242420
	if (ctx.cr6.eq) goto loc_82242420;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8224242c
	if (!ctx.cr6.eq) goto loc_8224242C;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r10,560
	ctx.r5.s64 = ctx.r10.s64 + 560;
	// bl 0x8218a128
	ctx.lr = 0x82242420;
	sub_8218A128(ctx, base);
loc_82242420:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8224242C:
	// lwz r27,20(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8224245c
	if (!ctx.cr6.eq) goto loc_8224245C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r10,528
	ctx.r5.s64 = ctx.r10.s64 + 528;
	// bl 0x8218a128
	ctx.lr = 0x82242450;
	sub_8218A128(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8224245C:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242420
	if (ctx.cr6.eq) goto loc_82242420;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242420
	if (ctx.cr6.eq) goto loc_82242420;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8223dc78
	ctx.lr = 0x82242490;
	sub_8223DC78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822424f8
	if (!ctx.cr6.gt) goto loc_822424F8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_822424A0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822424f8
	if (ctx.cr6.eq) goto loc_822424F8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8223dc58
	ctx.lr = 0x822424B0;
	sub_8223DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822424e4
	if (!ctx.cr6.gt) goto loc_822424E4;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_822424C0:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbzu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// stbu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x822424c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822424C0;
loc_822424E4:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822424a0
	if (ctx.cr6.lt) goto loc_822424A0;
loc_822424F8:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242514
	if (ctx.cr6.eq) goto loc_82242514;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242514:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82242520"))) PPC_WEAK_FUNC(sub_82242520);
PPC_FUNC_IMPL(__imp__sub_82242520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82242528;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,24(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8224256c
	if (!ctx.cr6.eq) goto loc_8224256C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r10,620
	ctx.r5.s64 = ctx.r10.s64 + 620;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8218a128
	ctx.lr = 0x82242560;
	sub_8218A128(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8224256C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242594
	if (ctx.cr6.eq) goto loc_82242594;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224258C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82242598
	goto loc_82242598;
loc_82242594:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82242598:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822425bc
	if (ctx.cr6.eq) goto loc_822425BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822425B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822425c0
	goto loc_822425C0;
loc_822425BC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_822425C0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822425ec
	if (!ctx.cr6.eq) goto loc_822425EC;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,620
	ctx.r5.s64 = ctx.r11.s64 + 620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a128
	ctx.lr = 0x822425E0;
	sub_8218A128(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_822425EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82242618
	if (!ctx.cr6.eq) goto loc_82242618;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,592
	ctx.r5.s64 = ctx.r11.s64 + 592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a128
	ctx.lr = 0x8224260C;
	sub_8218A128(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82242618:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8223dc78
	ctx.lr = 0x82242620;
	sub_8223DC78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8224267c
	if (!ctx.cr6.gt) goto loc_8224267C;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82242630:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// bl 0x8223dc58
	ctx.lr = 0x8224263C;
	sub_8223DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82242670
	if (!ctx.cr6.gt) goto loc_82242670;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_82242648:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// ble cr6,0x82242664
	if (!ctx.cr6.gt) goto loc_82242664;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82242664:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bdnz 0x82242648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82242648;
loc_82242670:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r25,r27,r25
	ctx.r25.u64 = ctx.r27.u64 + ctx.r25.u64;
	// bne 0x82242630
	if (!ctx.cr0.eq) goto loc_82242630;
loc_8224267C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822426b4
	if (ctx.cr6.eq) goto loc_822426B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822426b4
	if (ctx.cr6.eq) goto loc_822426B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822426B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822426B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_822426C0"))) PPC_WEAK_FUNC(sub_822426C0);
PPC_FUNC_IMPL(__imp__sub_822426C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x822426C8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,24(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8224270c
	if (!ctx.cr6.eq) goto loc_8224270C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r10,620
	ctx.r5.s64 = ctx.r10.s64 + 620;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8218a128
	ctx.lr = 0x82242700;
	sub_8218A128(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8224270C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242734
	if (ctx.cr6.eq) goto loc_82242734;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224272C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82242738
	goto loc_82242738;
loc_82242734:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82242738:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224275c
	if (ctx.cr6.eq) goto loc_8224275C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82242760
	goto loc_82242760;
loc_8224275C:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82242760:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8224278c
	if (!ctx.cr6.eq) goto loc_8224278C;
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,620
	ctx.r5.s64 = ctx.r11.s64 + 620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a128
	ctx.lr = 0x82242780;
	sub_8218A128(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8224278C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822427b8
	if (!ctx.cr6.eq) goto loc_822427B8;
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,592
	ctx.r5.s64 = ctx.r11.s64 + 592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a128
	ctx.lr = 0x822427AC;
	sub_8218A128(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_822427B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8223dc78
	ctx.lr = 0x822427C0;
	sub_8223DC78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8224280c
	if (!ctx.cr6.gt) goto loc_8224280C;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_822427D4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8223dc58
	ctx.lr = 0x822427DC;
	sub_8223DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82242800
	if (!ctx.cr6.gt) goto loc_82242800;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
loc_822427EC:
	// lbzu r10,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822427ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822427EC;
loc_82242800:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r25,r28,r25
	ctx.r25.u64 = ctx.r28.u64 + ctx.r25.u64;
	// bne 0x822427d4
	if (!ctx.cr0.eq) goto loc_822427D4;
loc_8224280C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242844
	if (ctx.cr6.eq) goto loc_82242844;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242844
	if (ctx.cr6.eq) goto loc_82242844;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242844:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82242850"))) PPC_WEAK_FUNC(sub_82242850);
PPC_FUNC_IMPL(__imp__sub_82242850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82242858;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82242894
	if (ctx.cr6.eq) goto loc_82242894;
	// lwz r27,28(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822428a0
	if (!ctx.cr6.eq) goto loc_822428A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r10,648
	ctx.r5.s64 = ctx.r10.s64 + 648;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8218a128
	ctx.lr = 0x82242894;
	sub_8218A128(ctx, base);
loc_82242894:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_822428A0:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242894
	if (ctx.cr6.eq) goto loc_82242894;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822428BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242894
	if (ctx.cr6.eq) goto loc_82242894;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8223dc78
	ctx.lr = 0x822428D4;
	sub_8223DC78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8224293c
	if (!ctx.cr6.gt) goto loc_8224293C;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_822428E4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8224293c
	if (ctx.cr6.eq) goto loc_8224293C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8223dc58
	ctx.lr = 0x822428F4;
	sub_8223DC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82242928
	if (!ctx.cr6.gt) goto loc_82242928;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_82242904:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbzu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// stb r8,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r8.u8);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// stbu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82242904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82242904;
loc_82242928:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822428e4
	if (ctx.cr6.lt) goto loc_822428E4;
loc_8224293C:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242958
	if (ctx.cr6.eq) goto loc_82242958;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242958:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82242964"))) PPC_WEAK_FUNC(sub_82242964);
PPC_FUNC_IMPL(__imp__sub_82242964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242968"))) PPC_WEAK_FUNC(sub_82242968);
PPC_FUNC_IMPL(__imp__sub_82242968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82242970;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82234528
	ctx.lr = 0x82242984;
	sub_82234528(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8224298C;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82242998;
	sub_821837D0(ctx, base);
	// bl 0x821b1108
	ctx.lr = 0x8224299C;
	sub_821B1108(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// bl 0x821b10f8
	ctx.lr = 0x822429A8;
	sub_821B10F8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,684
	ctx.r4.s64 = ctx.r11.s64 + 684;
	// bl 0x8218a540
	ctx.lr = 0x822429B8;
	sub_8218A540(ctx, base);
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// lwz r3,-19048(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19048);
	// bl 0x821a2ce8
	ctx.lr = 0x822429C4;
	sub_821A2CE8(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x822429C8;
	sub_82182E90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x822429D0;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x822429DC;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x822429E0;
	sub_82183850(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x822429EC;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x822429F4;
	sub_821830F8(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x82242A00;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82242a1c
	if (ctx.cr6.eq) goto loc_82242A1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ae98
	ctx.lr = 0x82242A14;
	sub_8218AE98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82242a20
	goto loc_82242A20;
loc_82242A1C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82242A20:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x82242a34
	if (ctx.cr6.lt) goto loc_82242A34;
	// bne cr6,0x82242a3c
	if (!ctx.cr6.eq) goto loc_82242A3C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82242a38
	goto loc_82242A38;
loc_82242A34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82242A38:
	// bl 0x821830f8
	ctx.lr = 0x82242A3C;
	sub_821830F8(ctx, base);
loc_82242A3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82242A44;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d2978
	ctx.lr = 0x82242A4C;
	sub_821D2978(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x82242A5C;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82242a78
	if (ctx.cr6.eq) goto loc_82242A78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ac78
	ctx.lr = 0x82242A70;
	sub_8218AC78(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82242a7c
	goto loc_82242A7C;
loc_82242A78:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82242A7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r8.u64);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r31,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r31.u32);
	// beq cr6,0x82242ac4
	if (ctx.cr6.eq) goto loc_82242AC4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82242b30
	if (!ctx.cr6.eq) goto loc_82242B30;
loc_82242AC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d2978
	ctx.lr = 0x82242ACC;
	sub_821D2978(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x82242ADC;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82242af8
	if (ctx.cr6.eq) goto loc_82242AF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ac78
	ctx.lr = 0x82242AF0;
	sub_8218AC78(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82242afc
	goto loc_82242AFC;
loc_82242AF8:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82242AFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r8.u64);
	// stw r31,156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 156, ctx.r31.u32);
loc_82242B30:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183e40
	ctx.lr = 0x82242B3C;
	sub_82183E40(ctx, base);
	// lwz r3,-19048(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19048);
	// bl 0x821a2d30
	ctx.lr = 0x82242B44;
	sub_821A2D30(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821b10f8
	ctx.lr = 0x82242B4C;
	sub_821B10F8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x82242B54;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82242B5C"))) PPC_WEAK_FUNC(sub_82242B5C);
PPC_FUNC_IMPL(__imp__sub_82242B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242B60"))) PPC_WEAK_FUNC(sub_82242B60);
PPC_FUNC_IMPL(__imp__sub_82242B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82242B68;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242b8c
	if (ctx.cr6.eq) goto loc_82242B8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242B8C:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242bac
	if (ctx.cr6.eq) goto loc_82242BAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242BAC:
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82242bd4
	if (ctx.cr6.eq) goto loc_82242BD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82245d30
	ctx.lr = 0x82242BC8;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82242BD4;
	sub_82183E40(ctx, base);
loc_82242BD4:
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82242bf8
	if (ctx.cr6.eq) goto loc_82242BF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82245d30
	ctx.lr = 0x82242BEC;
	sub_82245D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82242BF8;
	sub_82183E40(ctx, base);
loc_82242BF8:
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82242C04"))) PPC_WEAK_FUNC(sub_82242C04);
PPC_FUNC_IMPL(__imp__sub_82242C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82242C08"))) PPC_WEAK_FUNC(sub_82242C08);
PPC_FUNC_IMPL(__imp__sub_82242C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82242C10;
	sub_8224878C(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82345178
	ctx.lr = 0x82242C24;
	sub_82345178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r30,2(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x8223dbe0
	ctx.lr = 0x82242C38;
	sub_8223DBE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82248a40
	ctx.lr = 0x82242C48;
	sub_82248A40(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,148(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// stb r10,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r10.u8);
	// bl 0x82345178
	ctx.lr = 0x82242C58;
	sub_82345178(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82242d18
	if (ctx.cr6.eq) goto loc_82242D18;
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// bl 0x82246460
	ctx.lr = 0x82242C78;
	sub_82246460(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82242C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r5,86(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// lhz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r9,r11,14968
	ctx.r9.s64 = ctx.r11.s64 + 14968;
	// mullw r10,r7,r5
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x82242ce8
	if (ctx.cr6.eq) goto loc_82242CE8;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82242ce8
	if (ctx.cr6.eq) goto loc_82242CE8;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82242ce8
	if (ctx.cr6.eq) goto loc_82242CE8;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x82242ce8
	if (ctx.cr6.eq) goto loc_82242CE8;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x82242ce8
	if (ctx.cr6.eq) goto loc_82242CE8;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x82242ce8
	if (ctx.cr6.eq) goto loc_82242CE8;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x82242cf0
	if (!ctx.cr6.eq) goto loc_82242CF0;
loc_82242CE8:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r9,r11,6984
	ctx.r9.s64 = ctx.r11.s64 + 6984;
loc_82242CF0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82242D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242D18:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82242D20"))) PPC_WEAK_FUNC(sub_82242D20);
PPC_FUNC_IMPL(__imp__sub_82242D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82242D28;
	sub_82248774(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82345178
	ctx.lr = 0x82242D38;
	sub_82345178(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// lbz r26,2(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r23,r27,164
	ctx.r23.s64 = ctx.r27.s64 + 164;
	// stb r24,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r24.u8);
loc_82242D4C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82242e60
	if (ctx.cr6.eq) goto loc_82242E60;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,148(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// bl 0x8223dbe0
	ctx.lr = 0x82242D64;
	sub_8223DBE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82248a40
	ctx.lr = 0x82242D74;
	sub_82248A40(ctx, base);
	// lwz r3,148(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// bl 0x82345178
	ctx.lr = 0x82242D7C;
	sub_82345178(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242e60
	if (ctx.cr6.eq) goto loc_82242E60;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242e60
	if (ctx.cr6.eq) goto loc_82242E60;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82242DAC:
	// lhzu r9,2(r11)
	// sthu r9,2(r10)
	// bdnz 0x82242dac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82242DAC;
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// rlwinm r29,r10,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r3,r27,56
	ctx.r3.s64 = ctx.r27.s64 + 56;
	// sth r29,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r29.u16);
	// rlwinm r28,r9,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// bl 0x82246460
	ctx.lr = 0x82242DEC;
	sub_82246460(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82242E00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mullw r11,r29,r30
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82241450
	ctx.lr = 0x82242E20;
	sub_82241450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x82242e48
	if (ctx.cr6.eq) goto loc_82242E48;
	// bl 0x822423e0
	ctx.lr = 0x82242E44;
	sub_822423E0(ctx, base);
	// b 0x82242e4c
	goto loc_82242E4C;
loc_82242E48:
	// bl 0x82242180
	ctx.lr = 0x82242E4C;
	sub_82242180(ctx, base);
loc_82242E4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242E60:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 7, ctx.xer);
	// blt cr6,0x82242d4c
	if (ctx.cr6.lt) goto loc_82242D4C;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82242E78"))) PPC_WEAK_FUNC(sub_82242E78);
PPC_FUNC_IMPL(__imp__sub_82242E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82242E80;
	sub_82248784(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
loc_82242E90:
	// addi r11,r27,41
	ctx.r11.s64 = ctx.r27.s64 + 41;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82242f8c
	if (ctx.cr6.eq) goto loc_82242F8C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,148(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// bl 0x8223dbe0
	ctx.lr = 0x82242EB0;
	sub_8223DBE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82248a40
	ctx.lr = 0x82242EC0;
	sub_82248A40(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242f8c
	if (ctx.cr6.eq) goto loc_82242F8C;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82242f8c
	if (ctx.cr6.eq) goto loc_82242F8C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82242EF0:
	// lhzu r9,2(r11)
	// sthu r9,2(r10)
	// bdnz 0x82242ef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82242EF0;
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// rlwinm r30,r10,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r3,r28,56
	ctx.r3.s64 = ctx.r28.s64 + 56;
	// sth r30,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// rlwinm r29,r9,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// bl 0x82246460
	ctx.lr = 0x82242F30;
	sub_82246460(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82242F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// mullw r11,r30,r5
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r5.s32);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82242f74
	if (ctx.cr6.eq) goto loc_82242F74;
	// bl 0x822426c0
	ctx.lr = 0x82242F70;
	sub_822426C0(ctx, base);
	// b 0x82242f78
	goto loc_82242F78;
loc_82242F74:
	// bl 0x82242520
	ctx.lr = 0x82242F78;
	sub_82242520(ctx, base);
loc_82242F78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82242F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82242F8C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 7, ctx.xer);
	// blt cr6,0x82242e90
	if (ctx.cr6.lt) goto loc_82242E90;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82242FA0"))) PPC_WEAK_FUNC(sub_82242FA0);
PPC_FUNC_IMPL(__imp__sub_82242FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82242FA8;
	sub_82248778(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82345178
	ctx.lr = 0x82242FB8;
	sub_82345178(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// lbz r26,2(r3)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r24,r27,164
	ctx.r24.s64 = ctx.r27.s64 + 164;
	// stb r25,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r25.u8);
loc_82242FC8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822430d8
	if (ctx.cr6.eq) goto loc_822430D8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,148(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// bl 0x8223dbe0
	ctx.lr = 0x82242FE0;
	sub_8223DBE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82248a40
	ctx.lr = 0x82242FF0;
	sub_82248A40(ctx, base);
	// lwz r3,148(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// bl 0x82345178
	ctx.lr = 0x82242FF8;
	sub_82345178(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822430d8
	if (ctx.cr6.eq) goto loc_822430D8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822430d8
	if (ctx.cr6.eq) goto loc_822430D8;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82243028:
	// lhzu r9,2(r11)
	// sthu r9,2(r10)
	// bdnz 0x82243028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82243028;
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// rlwinm r29,r10,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r3,r27,56
	ctx.r3.s64 = ctx.r27.s64 + 56;
	// sth r29,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r29.u16);
	// rlwinm r28,r9,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// bl 0x82246460
	ctx.lr = 0x82243068;
	sub_82246460(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8224307C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mullw r11,r29,r30
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82241450
	ctx.lr = 0x8224309C;
	sub_82241450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x822430c0
	if (ctx.cr6.eq) goto loc_822430C0;
	// bl 0x82242850
	ctx.lr = 0x822430BC;
	sub_82242850(ctx, base);
	// b 0x822430c4
	goto loc_822430C4;
loc_822430C0:
	// bl 0x82242850
	ctx.lr = 0x822430C4;
	sub_82242850(ctx, base);
loc_822430C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822430D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822430D8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplwi cr6,r25,7
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 7, ctx.xer);
	// blt cr6,0x82242fc8
	if (ctx.cr6.lt) goto loc_82242FC8;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_822430F0"))) PPC_WEAK_FUNC(sub_822430F0);
PPC_FUNC_IMPL(__imp__sub_822430F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248758
	ctx.lr = 0x822430F8;
	sub_82248758(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224311C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 88);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r27,36(r21)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r26,40(r21)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822432e8
	if (ctx.cr6.eq) goto loc_822432E8;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r16,-1
	ctx.r16.s64 = -1;
	// ori r20,r11,65535
	ctx.r20.u64 = ctx.r11.u64 | 65535;
loc_8224314C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8224322c
	if (ctx.cr6.eq) goto loc_8224322C;
	// lwz r3,48(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// bl 0x82234518
	ctx.lr = 0x8224315C;
	sub_82234518(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82243164;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82243170;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82243174;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82243180;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82243188;
	sub_821830F8(ctx, base);
	// mullw r11,r26,r27
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r27.s32);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8224319c
	if (!ctx.cr6.gt) goto loc_8224319C;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_8224319C:
	// bl 0x82183850
	ctx.lr = 0x822431A0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x822431b8
	if (ctx.cr6.eq) goto loc_822431B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x822431B4;
	sub_82183448(ctx, base);
	// b 0x822431c4
	goto loc_822431C4;
loc_822431B8:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x822431C4;
	sub_821845A0(ctx, base);
loc_822431C4:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// rlwinm r5,r26,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r27,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8223c958
	ctx.lr = 0x822431D8;
	sub_8223C958(ctx, base);
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// beq cr6,0x822431f4
	if (ctx.cr6.eq) goto loc_822431F4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822431f4
	if (ctx.cr6.eq) goto loc_822431F4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82183e40
	ctx.lr = 0x822431F4;
	sub_82183E40(ctx, base);
loc_822431F4:
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82243218
	if (ctx.cr6.lt) goto loc_82243218;
	// bne cr6,0x82243220
	if (!ctx.cr6.eq) goto loc_82243220;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8224320C;
	sub_821830F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82243214;
	sub_821837D0(ctx, base);
	// b 0x82243230
	goto loc_82243230;
loc_82243218:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x82243220;
	sub_821830F8(ctx, base);
loc_82243220:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82243228;
	sub_821837D0(ctx, base);
	// b 0x82243230
	goto loc_82243230;
loc_8224322C:
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
loc_82243230:
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224324C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8226b130
	ctx.lr = 0x82243264;
	sub_8226B130(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8224328c
	if (ctx.cr6.lt) goto loc_8224328C;
	// mullw r11,r26,r27
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r27.s32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82248a40
	ctx.lr = 0x82243288;
	sub_82248A40(ctx, base);
	// b 0x822432c4
	goto loc_822432C4;
loc_8224328C:
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822432c4
	if (ctx.cr6.eq) goto loc_822432C4;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_822432A0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x822432B0;
	sub_82248A40(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bne 0x822432a0
	if (!ctx.cr0.eq) goto loc_822432A0;
loc_822432C4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822696e0
	ctx.lr = 0x822432D0;
	sub_822696E0(ctx, base);
	// lwz r11,88(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 88);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// rlwinm r27,r27,31,1,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r26,r26,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8224314c
	if (ctx.cr6.lt) goto loc_8224314C;
loc_822432E8:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82243304
	if (!ctx.cr6.gt) goto loc_82243304;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82243304
	if (ctx.cr6.eq) goto loc_82243304;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82183e40
	ctx.lr = 0x82243304;
	sub_82183E40(ctx, base);
loc_82243304:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82243318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487a8
	// ERROR 822487A8
	return;
}

__attribute__((alias("__imp__sub_82243320"))) PPC_WEAK_FUNC(sub_82243320);
PPC_FUNC_IMPL(__imp__sub_82243320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82243328;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82243354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r30,36(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r28,40(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82243538
	if (ctx.cr6.eq) goto loc_82243538;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lis r9,6688
	ctx.r9.s64 = 438304768;
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// ori r18,r10,65535
	ctx.r18.u64 = ctx.r10.u64 | 65535;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// li r14,-1
	ctx.r14.s64 = -1;
	// ori r20,r9,84
	ctx.r20.u64 = ctx.r9.u64 | 84;
	// li r19,2
	ctx.r19.s64 = 2;
	// ori r21,r8,134
	ctx.r21.u64 = ctx.r8.u64 | 134;
loc_822433A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82243480
	if (ctx.cr6.eq) goto loc_82243480;
	// lwz r3,48(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// bl 0x82234518
	ctx.lr = 0x822433B0;
	sub_82234518(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x822433B8;
	sub_82183078(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x822433C4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x822433C8;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x822433D4;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x822433DC;
	sub_821830F8(ctx, base);
	// mullw r11,r28,r30
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x822433f0
	if (!ctx.cr6.gt) goto loc_822433F0;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
loc_822433F0:
	// bl 0x82183850
	ctx.lr = 0x822433F4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8224340c
	if (ctx.cr6.eq) goto loc_8224340C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x82243408;
	sub_82183448(ctx, base);
	// b 0x82243418
	goto loc_82243418;
loc_8224340C:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82243418;
	sub_821845A0(ctx, base);
loc_82243418:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8223c958
	ctx.lr = 0x8224342C;
	sub_8223C958(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x82243448
	if (ctx.cr6.eq) goto loc_82243448;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82243448
	if (ctx.cr6.eq) goto loc_82243448;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82183e40
	ctx.lr = 0x82243448;
	sub_82183E40(ctx, base);
loc_82243448:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x8224346c
	if (ctx.cr6.lt) goto loc_8224346C;
	// bne cr6,0x82243474
	if (!ctx.cr6.eq) goto loc_82243474;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82243460;
	sub_821830F8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821837d0
	ctx.lr = 0x82243468;
	sub_821837D0(ctx, base);
	// b 0x82243484
	goto loc_82243484;
loc_8224346C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x82243474;
	sub_821830F8(ctx, base);
loc_82243474:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821837d0
	ctx.lr = 0x8224347C;
	sub_821837D0(ctx, base);
	// b 0x82243484
	goto loc_82243484;
loc_82243480:
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
loc_82243484:
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822434A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8226b130
	ctx.lr = 0x822434B8;
	sub_8226B130(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x822434BC;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821837d0
	ctx.lr = 0x822434C8;
	sub_821837D0(ctx, base);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// cmpw cr6,r17,r20
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x822434dc
	if (ctx.cr6.eq) goto loc_822434DC;
	// lis r7,6688
	ctx.r7.s64 = 438304768;
	// ori r7,r7,82
	ctx.r7.u64 = ctx.r7.u64 | 82;
loc_822434DC:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// bl 0x822bfe78
	ctx.lr = 0x8224350C;
	sub_822BFE78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822696e0
	ctx.lr = 0x82243518;
	sub_822696E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82243520;
	sub_821837D0(ctx, base);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822433a0
	if (ctx.cr6.lt) goto loc_822433A0;
loc_82243538:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82243554
	if (!ctx.cr6.gt) goto loc_82243554;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82243554
	if (ctx.cr6.eq) goto loc_82243554;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82183e40
	ctx.lr = 0x82243554;
	sub_82183E40(ctx, base);
loc_82243554:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82243568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243574"))) PPC_WEAK_FUNC(sub_82243574);
PPC_FUNC_IMPL(__imp__sub_82243574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243578"))) PPC_WEAK_FUNC(sub_82243578);
PPC_FUNC_IMPL(__imp__sub_82243578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82243580;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,508
	ctx.r10.s64 = ctx.r11.s64 + 508;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822413b0
	ctx.lr = 0x82243598;
	sub_822413B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82242b60
	ctx.lr = 0x822435A0;
	sub_82242B60(ctx, base);
	// addi r28,r30,56
	ctx.r28.s64 = ctx.r30.s64 + 56;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822469b0
	ctx.lr = 0x822435B0;
	sub_822469B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822469b0
	ctx.lr = 0x822435BC;
	sub_822469B0(ctx, base);
	// addi r31,r30,116
	ctx.r31.s64 = ctx.r30.s64 + 116;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r27,0
	ctx.r27.s64 = 0;
loc_822435C8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822435fc
	if (ctx.cr6.eq) goto loc_822435FC;
	// bl 0x821a1c58
	ctx.lr = 0x822435D8;
	sub_821A1C58(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822435f8
	if (ctx.cr6.eq) goto loc_822435F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822435F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822435F8:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_822435FC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x822435c8
	if (!ctx.cr0.eq) goto loc_822435C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82246bb0
	ctx.lr = 0x82243610;
	sub_82246BB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218b208
	ctx.lr = 0x82243618;
	sub_8218B208(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82243620"))) PPC_WEAK_FUNC(sub_82243620);
PPC_FUNC_IMPL(__imp__sub_82243620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82243628;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x8224363C;
	sub_8218AA18(ctx, base);
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82234518
	ctx.lr = 0x82243644;
	sub_82234518(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8224364C;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82243658;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8224365C;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82243668;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82243670;
	sub_821830F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82242968
	ctx.lr = 0x8224367C;
	sub_82242968(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822415a0
	ctx.lr = 0x82243684;
	sub_822415A0(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x82243698
	if (ctx.cr6.lt) goto loc_82243698;
	// bne cr6,0x822436a0
	if (!ctx.cr6.eq) goto loc_822436A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8224369c
	goto loc_8224369C;
loc_82243698:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224369C:
	// bl 0x821830f8
	ctx.lr = 0x822436A0;
	sub_821830F8(ctx, base);
loc_822436A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x822436A8;
	sub_821837D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x822436B0;
	sub_8218A7F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822436BC"))) PPC_WEAK_FUNC(sub_822436BC);
PPC_FUNC_IMPL(__imp__sub_822436BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822436C0"))) PPC_WEAK_FUNC(sub_822436C0);
PPC_FUNC_IMPL(__imp__sub_822436C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822436C8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82345178
	ctx.lr = 0x822436E0;
	sub_82345178(ctx, base);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82243818
	if (ctx.cr6.eq) goto loc_82243818;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r30,r28,164
	ctx.r30.s64 = ctx.r28.s64 + 164;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82243700:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82243700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82243700;
	// stw r29,160(r28)
	PPC_STORE_U32(ctx.r28.u32 + 160, ctx.r29.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82243770
	if (ctx.cr6.lt) goto loc_82243770;
	// beq cr6,0x8224372c
	if (ctx.cr6.eq) goto loc_8224372C;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// blt cr6,0x822437b0
	if (ctx.cr6.lt) goto loc_822437B0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8224372C:
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8224373C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224375c
	if (ctx.cr6.eq) goto loc_8224375C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8224375c
	if (ctx.cr6.eq) goto loc_8224375C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8224375c
	if (ctx.cr6.eq) goto loc_8224375C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82243760
	if (!ctx.cr6.eq) goto loc_82243760;
loc_8224375C:
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
loc_82243760:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8224373c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224373C;
	// b 0x822437b0
	goto loc_822437B0;
loc_82243770:
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82243780:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822437a4
	if (ctx.cr6.eq) goto loc_822437A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822437a4
	if (ctx.cr6.eq) goto loc_822437A4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822437a4
	if (ctx.cr6.eq) goto loc_822437A4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822437a4
	if (ctx.cr6.eq) goto loc_822437A4;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
loc_822437A4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82243780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82243780;
loc_822437B0:
	// bl 0x82088600
	ctx.lr = 0x822437B4;
	sub_82088600(ctx, base);
	// clrldi r29,r3,32
	ctx.r29.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stw r27,148(r28)
	PPC_STORE_U32(ctx.r28.u32 + 148, ctx.r27.u32);
loc_822437BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822437d4
	if (ctx.cr6.eq) goto loc_822437D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82242c08
	ctx.lr = 0x822437D4;
	sub_82242C08(ctx, base);
loc_822437D4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7, ctx.xer);
	// blt cr6,0x822437bc
	if (ctx.cr6.lt) goto loc_822437BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82242d20
	ctx.lr = 0x822437EC;
	sub_82242D20(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82242e78
	ctx.lr = 0x822437F4;
	sub_82242E78(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82242fa0
	ctx.lr = 0x822437FC;
	sub_82242FA0(ctx, base);
	// bl 0x82088600
	ctx.lr = 0x82243800;
	sub_82088600(ctx, base);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// ld r11,1128(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1128);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,1128(r9)
	PPC_STORE_U64(ctx.r9.u32 + 1128, ctx.r11.u64);
loc_82243818:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82243820"))) PPC_WEAK_FUNC(sub_82243820);
PPC_FUNC_IMPL(__imp__sub_82243820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82243828;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// lis r9,6688
	ctx.r9.s64 = 438304768;
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// ori r25,r11,390
	ctx.r25.u64 = ctx.r11.u64 | 390;
	// ori r22,r10,134
	ctx.r22.u64 = ctx.r10.u64 | 134;
	// ori r23,r9,84
	ctx.r23.u64 = ctx.r9.u64 | 84;
	// ori r24,r8,82
	ctx.r24.u64 = ctx.r8.u64 | 82;
loc_82243858:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82246460
	ctx.lr = 0x8224386C;
	sub_82246460(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,96(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82246460
	ctx.lr = 0x82243884;
	sub_82246460(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822464c0
	ctx.lr = 0x82243898;
	sub_822464C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822464c0
	ctx.lr = 0x822438AC;
	sub_822464C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x822438e8
	if (ctx.cr6.eq) goto loc_822438E8;
	// cmpw cr6,r3,r22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x822438e8
	if (ctx.cr6.eq) goto loc_822438E8;
	// cmpw cr6,r3,r23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x822438d0
	if (ctx.cr6.eq) goto loc_822438D0;
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x822438f8
	if (!ctx.cr6.eq) goto loc_822438F8;
loc_822438D0:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82243320
	ctx.lr = 0x822438E4;
	sub_82243320(ctx, base);
	// b 0x822438f8
	goto loc_822438F8;
loc_822438E8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822430f0
	ctx.lr = 0x822438F8;
	sub_822430F0(ctx, base);
loc_822438F8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x82243858
	if (ctx.cr6.lt) goto loc_82243858;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8224390C"))) PPC_WEAK_FUNC(sub_8224390C);
PPC_FUNC_IMPL(__imp__sub_8224390C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243910"))) PPC_WEAK_FUNC(sub_82243910);
PPC_FUNC_IMPL(__imp__sub_82243910) {
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
	// bl 0x82243578
	ctx.lr = 0x82243930;
	sub_82243578(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224394c
	if (ctx.cr6.eq) goto loc_8224394C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82243948;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8224394C:
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

__attribute__((alias("__imp__sub_82243964"))) PPC_WEAK_FUNC(sub_82243964);
PPC_FUNC_IMPL(__imp__sub_82243964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243968"))) PPC_WEAK_FUNC(sub_82243968);
PPC_FUNC_IMPL(__imp__sub_82243968) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r11,740
	ctx.r9.s64 = ctx.r11.s64 + 740;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bl 0x82182e90
	ctx.lr = 0x82243994;
	sub_82182E90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822439BC"))) PPC_WEAK_FUNC(sub_822439BC);
PPC_FUNC_IMPL(__imp__sub_822439BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822439C0"))) PPC_WEAK_FUNC(sub_822439C0);
PPC_FUNC_IMPL(__imp__sub_822439C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822439C8;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x822439E0;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x822439EC;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x82243A00;
	sub_8218AA18(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x820f6b38
	ctx.lr = 0x82243A10;
	sub_820F6B38(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// bl 0x820f66f8
	ctx.lr = 0x82243A24;
	sub_820F66F8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x8218a7f0
	ctx.lr = 0x82243A34;
	sub_8218A7F0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82243A3C;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82243A44"))) PPC_WEAK_FUNC(sub_82243A44);
PPC_FUNC_IMPL(__imp__sub_82243A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243A48"))) PPC_WEAK_FUNC(sub_82243A48);
PPC_FUNC_IMPL(__imp__sub_82243A48) {
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
	// addi r9,r11,11096
	ctx.r9.s64 = ctx.r11.s64 + 11096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82243a80
	if (ctx.cr6.eq) goto loc_82243A80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82243A7C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82243A80:
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

__attribute__((alias("__imp__sub_82243A94"))) PPC_WEAK_FUNC(sub_82243A94);
PPC_FUNC_IMPL(__imp__sub_82243A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243A98"))) PPC_WEAK_FUNC(sub_82243A98);
PPC_FUNC_IMPL(__imp__sub_82243A98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82243AAC"))) PPC_WEAK_FUNC(sub_82243AAC);
PPC_FUNC_IMPL(__imp__sub_82243AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243AB0"))) PPC_WEAK_FUNC(sub_82243AB0);
PPC_FUNC_IMPL(__imp__sub_82243AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82243AB8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r29,r11,60548
	ctx.r29.u64 = ctx.r11.u64 | 60548;
loc_82243AD4:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r5,17420
	ctx.r5.s64 = 17420;
	// lwzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82248a40
	ctx.lr = 0x82243AEC;
	sub_82248A40(ctx, base);
	// addi r31,r31,17420
	ctx.r31.s64 = ctx.r31.s64 + 17420;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82243ad4
	if (ctx.cr6.lt) goto loc_82243AD4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82243B00"))) PPC_WEAK_FUNC(sub_82243B00);
PPC_FUNC_IMPL(__imp__sub_82243B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82243B08;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r29,r11,60548
	ctx.r29.u64 = ctx.r11.u64 | 60548;
loc_82243B24:
	// lwzx r10,r28,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// li r5,17420
	ctx.r5.s64 = 17420;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82248a40
	ctx.lr = 0x82243B3C;
	sub_82248A40(ctx, base);
	// addi r31,r31,17420
	ctx.r31.s64 = ctx.r31.s64 + 17420;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82243b24
	if (ctx.cr6.lt) goto loc_82243B24;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82243B50"))) PPC_WEAK_FUNC(sub_82243B50);
PPC_FUNC_IMPL(__imp__sub_82243B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82243B58;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,976
	ctx.r10.s64 = ctx.r11.s64 + 976;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
loc_82243B78:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82243b8c
	if (ctx.cr6.eq) goto loc_82243B8C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82243B8C;
	sub_82183E40(ctx, base);
loc_82243B8C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x82243b78
	if (!ctx.cr0.eq) goto loc_82243B78;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82243bac
	if (ctx.cr6.eq) goto loc_82243BAC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82243BAC;
	sub_82183E40(ctx, base);
loc_82243BAC:
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821857f0
	ctx.lr = 0x82243BB8;
	sub_821857F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82243BC0"))) PPC_WEAK_FUNC(sub_82243BC0);
PPC_FUNC_IMPL(__imp__sub_82243BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82243BC8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82243c10
	if (ctx.cr6.eq) goto loc_82243C10;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82243cd4
	if (!ctx.cr6.eq) goto loc_82243CD4;
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8223aa28
	ctx.lr = 0x82243BEC;
	sub_8223AA28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82237538
	ctx.lr = 0x82243BF4;
	sub_82237538(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82243C10:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bge cr6,0x82243cc4
	if (!ctx.cr6.lt) goto loc_82243CC4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r30,r11,60548
	ctx.r30.u64 = ctx.r11.u64 | 60548;
loc_82243C24:
	// lwz r29,52(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8223aa28
	ctx.lr = 0x82243C2C;
	sub_8223AA28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82234540
	ctx.lr = 0x82243C34;
	sub_82234540(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82243cc4
	if (ctx.cr6.eq) goto loc_82243CC4;
	// lwz r29,52(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8223aa28
	ctx.lr = 0x82243C44;
	sub_8223AA28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82237538
	ctx.lr = 0x82243C4C;
	sub_82237538(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82243C5C:
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82243c7c
	if (!ctx.cr6.eq) goto loc_82243C7C;
	// lhz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82243ca4
	if (ctx.cr6.eq) goto loc_82243CA4;
loc_82243C7C:
	// addi r11,r11,17420
	ctx.r11.s64 = ctx.r11.s64 + 17420;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82243c5c
	if (ctx.cr6.lt) goto loc_82243C5C;
loc_82243C8C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82243cc4
	if (ctx.cr6.eq) goto loc_82243CC4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82243CA4:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82243c8c
	if (ctx.cr6.eq) goto loc_82243C8C;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// blt cr6,0x82243c24
	if (ctx.cr6.lt) goto loc_82243C24;
loc_82243CC4:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
loc_82243CD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82243CDC"))) PPC_WEAK_FUNC(sub_82243CDC);
PPC_FUNC_IMPL(__imp__sub_82243CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243CE0"))) PPC_WEAK_FUNC(sub_82243CE0);
PPC_FUNC_IMPL(__imp__sub_82243CE0) {
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
	// bl 0x82243b50
	ctx.lr = 0x82243D00;
	sub_82243B50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82243d1c
	if (ctx.cr6.eq) goto loc_82243D1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82243D18;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82243D1C:
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

__attribute__((alias("__imp__sub_82243D34"))) PPC_WEAK_FUNC(sub_82243D34);
PPC_FUNC_IMPL(__imp__sub_82243D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243D38"))) PPC_WEAK_FUNC(sub_82243D38);
PPC_FUNC_IMPL(__imp__sub_82243D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82243D40;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x82243D5C;
	sub_82185740(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r10,r11,976
	ctx.r10.s64 = ctx.r11.s64 + 976;
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r29,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r29.u32);
	// lwz r9,36(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r8.u32);
	// lwz r7,36(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r6,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r6.u32);
	// stw r29,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r29.u32);
	// stw r29,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r29.u32);
	// stw r29,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r29.u32);
	// stw r29,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r29.u32);
	// lwz r31,16(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82183078
	ctx.lr = 0x82243DA8;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82243DB4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82243DB8;
	sub_82183850(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r23,r5,60548
	ctx.r23.u64 = ctx.r5.u64 | 60548;
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82243dd8
	if (ctx.cr6.eq) goto loc_82243DD8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82183448
	ctx.lr = 0x82243DD4;
	sub_82183448(ctx, base);
	// b 0x82243de0
	goto loc_82243DE0;
loc_82243DD8:
	// li r3,11977
	ctx.r3.s64 = 11977;
	// bl 0x821845a0
	ctx.lr = 0x82243DE0;
	sub_821845A0(ctx, base);
loc_82243DE0:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82243e20
	if (ctx.cr6.eq) goto loc_82243E20;
	// li r30,10
	ctx.r30.s64 = 10;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
loc_82243DF4:
	// stw r29,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r29.u32);
	// li r4,17408
	ctx.r4.s64 = 17408;
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x82243E08;
	sub_822AA648(ctx, base);
	// stw r29,17408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17408, ctx.r29.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,17420
	ctx.r31.s64 = ctx.r31.s64 + 17420;
	// bge 0x82243df4
	if (!ctx.cr0.lt) goto loc_82243DF4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82243e24
	goto loc_82243E24;
loc_82243E20:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82243E24:
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x82243E30;
	sub_821837D0(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x82243E34;
	sub_82183078(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x82243E40;
	sub_821837D0(ctx, base);
	// addi r25,r28,20
	ctx.r25.s64 = ctx.r28.s64 + 20;
	// li r26,2
	ctx.r26.s64 = 2;
loc_82243E48:
	// bl 0x82183850
	ctx.lr = 0x82243E4C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82243e64
	if (ctx.cr6.eq) goto loc_82243E64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82183448
	ctx.lr = 0x82243E60;
	sub_82183448(ctx, base);
	// b 0x82243e6c
	goto loc_82243E6C;
loc_82243E64:
	// li r3,11977
	ctx.r3.s64 = 11977;
	// bl 0x821845a0
	ctx.lr = 0x82243E6C;
	sub_821845A0(ctx, base);
loc_82243E6C:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82243eac
	if (ctx.cr6.eq) goto loc_82243EAC;
	// li r30,10
	ctx.r30.s64 = 10;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
loc_82243E80:
	// stw r29,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r29.u32);
	// li r4,17408
	ctx.r4.s64 = 17408;
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x82243E94;
	sub_822AA648(ctx, base);
	// stw r29,17408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17408, ctx.r29.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,17420
	ctx.r31.s64 = ctx.r31.s64 + 17420;
	// bge 0x82243e80
	if (!ctx.cr0.lt) goto loc_82243E80;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82243eb0
	goto loc_82243EB0;
loc_82243EAC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82243EB0:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stwu r11,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r25.u32 = ea;
	// bne 0x82243e48
	if (!ctx.cr0.eq) goto loc_82243E48;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821837d0
	ctx.lr = 0x82243EC4;
	sub_821837D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82243ED0"))) PPC_WEAK_FUNC(sub_82243ED0);
PPC_FUNC_IMPL(__imp__sub_82243ED0) {
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
	ctx.lr = 0x82243EE8;
	sub_8218B1E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,984
	ctx.r9.s64 = ctx.r11.s64 + 984;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
}

__attribute__((alias("__imp__sub_82243F14"))) PPC_WEAK_FUNC(sub_82243F14);
PPC_FUNC_IMPL(__imp__sub_82243F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243F18"))) PPC_WEAK_FUNC(sub_82243F18);
PPC_FUNC_IMPL(__imp__sub_82243F18) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8218b2d0
	sub_8218B2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82243F2C"))) PPC_WEAK_FUNC(sub_82243F2C);
PPC_FUNC_IMPL(__imp__sub_82243F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82243F30"))) PPC_WEAK_FUNC(sub_82243F30);
PPC_FUNC_IMPL(__imp__sub_82243F30) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82243F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82243F78"))) PPC_WEAK_FUNC(sub_82243F78);
PPC_FUNC_IMPL(__imp__sub_82243F78) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,984
	ctx.r10.s64 = ctx.r11.s64 + 984;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b208
	ctx.lr = 0x82243FA4;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82243fc0
	if (ctx.cr6.eq) goto loc_82243FC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82243FBC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82243FC0:
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

__attribute__((alias("__imp__sub_82243FD8"))) PPC_WEAK_FUNC(sub_82243FD8);
PPC_FUNC_IMPL(__imp__sub_82243FD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82243FE0"))) PPC_WEAK_FUNC(sub_82243FE0);
PPC_FUNC_IMPL(__imp__sub_82243FE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1636
	ctx.r3.s64 = ctx.r3.s64 + 1636;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82243FE8"))) PPC_WEAK_FUNC(sub_82243FE8);
PPC_FUNC_IMPL(__imp__sub_82243FE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1736
	ctx.r3.s64 = ctx.r3.s64 + 1736;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82243FF0"))) PPC_WEAK_FUNC(sub_82243FF0);
PPC_FUNC_IMPL(__imp__sub_82243FF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1856
	ctx.r3.s64 = ctx.r3.s64 + 1856;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82243FF8"))) PPC_WEAK_FUNC(sub_82243FF8);
PPC_FUNC_IMPL(__imp__sub_82243FF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r3,r3,1736
	ctx.r3.s64 = ctx.r3.s64 + 1736;
	// b 0x8223a788
	sub_8223A788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82244014"))) PPC_WEAK_FUNC(sub_82244014);
PPC_FUNC_IMPL(__imp__sub_82244014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244018"))) PPC_WEAK_FUNC(sub_82244018);
PPC_FUNC_IMPL(__imp__sub_82244018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82244020;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,1856
	ctx.r29.s64 = ctx.r3.s64 + 1856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82239618
	ctx.lr = 0x82244038;
	sub_82239618(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82244058
	if (!ctx.cr6.eq) goto loc_82244058;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82244058
	if (ctx.cr6.eq) goto loc_82244058;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8209eda0
	ctx.lr = 0x82244058;
	sub_8209EDA0(ctx, base);
loc_82244058:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1736
	ctx.r3.s64 = ctx.r31.s64 + 1736;
	// bl 0x82239630
	ctx.lr = 0x82244064;
	sub_82239630(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8224406C"))) PPC_WEAK_FUNC(sub_8224406C);
PPC_FUNC_IMPL(__imp__sub_8224406C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244070"))) PPC_WEAK_FUNC(sub_82244070);
PPC_FUNC_IMPL(__imp__sub_82244070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82244078;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82239f88
	ctx.lr = 0x8224409C;
	sub_82239F88(ctx, base);
	// addi r3,r31,1636
	ctx.r3.s64 = ctx.r31.s64 + 1636;
	// bl 0x82239f58
	ctx.lr = 0x822440A4;
	sub_82239F58(ctx, base);
	// addi r3,r31,1736
	ctx.r3.s64 = ctx.r31.s64 + 1736;
	// bl 0x82239fb8
	ctx.lr = 0x822440AC;
	sub_82239FB8(ctx, base);
	// addi r29,r31,3484
	ctx.r29.s64 = ctx.r31.s64 + 3484;
	// li r30,1
	ctx.r30.s64 = 1;
loc_822440B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82239f88
	ctx.lr = 0x822440BC;
	sub_82239F88(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1624
	ctx.r29.s64 = ctx.r29.s64 + 1624;
	// bge 0x822440b4
	if (!ctx.cr0.lt) goto loc_822440B4;
	// addi r29,r31,6732
	ctx.r29.s64 = ctx.r31.s64 + 6732;
	// li r30,1
	ctx.r30.s64 = 1;
loc_822440D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82239f58
	ctx.lr = 0x822440D8;
	sub_82239F58(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// bge 0x822440d0
	if (!ctx.cr0.lt) goto loc_822440D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822440F0"))) PPC_WEAK_FUNC(sub_822440F0);
PPC_FUNC_IMPL(__imp__sub_822440F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822440F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r10,1564(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1564, ctx.r10.u8);
	// beq cr6,0x82244130
	if (ctx.cr6.eq) goto loc_82244130;
	// mulli r11,r30,67
	ctx.r11.s64 = ctx.r30.s64 * 67;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r11,1565
	ctx.r3.s64 = ctx.r11.s64 + 1565;
	// bl 0x821847a8
	ctx.lr = 0x82244130;
	sub_821847A8(ctx, base);
loc_82244130:
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r31,1856
	ctx.r3.s64 = ctx.r31.s64 + 1856;
	// bl 0x82165e90
	ctx.lr = 0x8224413C;
	sub_82165E90(ctx, base);
	// addi r29,r31,1636
	ctx.r29.s64 = ctx.r31.s64 + 1636;
	// bl 0x8223aa28
	ctx.lr = 0x82244144;
	sub_8223AA28(ctx, base);
	// bl 0x82234538
	ctx.lr = 0x82244148;
	sub_82234538(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82239b50
	ctx.lr = 0x82244154;
	sub_82239B50(ctx, base);
	// mulli r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 * 100;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,1756
	ctx.r3.s64 = ctx.r11.s64 + 1756;
	// bl 0x82165910
	ctx.lr = 0x82244168;
	sub_82165910(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82244170"))) PPC_WEAK_FUNC(sub_82244170);
PPC_FUNC_IMPL(__imp__sub_82244170) {
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
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r10,3408(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3408);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822441b8
	if (!ctx.cr6.eq) goto loc_822441B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// mulli r10,r4,100
	ctx.r10.s64 = ctx.r4.s64 * 100;
	// stb r9,3408(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3408, ctx.r9.u8);
	// lwz r4,1752(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1752);
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r3,r11,1756
	ctx.r3.s64 = ctx.r11.s64 + 1756;
	// bl 0x82239c38
	ctx.lr = 0x822441B8;
	sub_82239C38(ctx, base);
loc_822441B8:
	// addi r4,r31,1856
	ctx.r4.s64 = ctx.r31.s64 + 1856;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82165e90
	ctx.lr = 0x822441C4;
	sub_82165E90(ctx, base);
	// mulli r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 * 100;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r31,1636
	ctx.r3.s64 = ctx.r31.s64 + 1636;
	// addi r4,r11,1756
	ctx.r4.s64 = ctx.r11.s64 + 1756;
	// bl 0x82165910
	ctx.lr = 0x822441D8;
	sub_82165910(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_822441F4"))) PPC_WEAK_FUNC(sub_822441F4);
PPC_FUNC_IMPL(__imp__sub_822441F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822441F8"))) PPC_WEAK_FUNC(sub_822441F8);
PPC_FUNC_IMPL(__imp__sub_822441F8) {
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
	// mulli r11,r4,1624
	ctx.r11.s64 = ctx.r4.s64 * 1624;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r3,r11,3484
	ctx.r3.s64 = ctx.r11.s64 + 3484;
	// bl 0x82165e90
	ctx.lr = 0x82244228;
	sub_82165E90(ctx, base);
	// mulli r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 * 100;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r31,1636
	ctx.r4.s64 = ctx.r31.s64 + 1636;
	// addi r3,r11,6732
	ctx.r3.s64 = ctx.r11.s64 + 6732;
	// bl 0x82165910
	ctx.lr = 0x8224423C;
	sub_82165910(ctx, base);
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

__attribute__((alias("__imp__sub_82244254"))) PPC_WEAK_FUNC(sub_82244254);
PPC_FUNC_IMPL(__imp__sub_82244254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244258"))) PPC_WEAK_FUNC(sub_82244258);
PPC_FUNC_IMPL(__imp__sub_82244258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82244260;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8223aa28
	ctx.lr = 0x82244274;
	sub_8223AA28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mulli r26,r25,1624
	ctx.r26.s64 = ctx.r25.s64 * 1624;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82244284:
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,4036
	ctx.r5.s64 = ctx.r11.s64 + 4036;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82237f68
	ctx.lr = 0x822442A4;
	sub_82237F68(ctx, base);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r31,1000
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1000, ctx.xer);
	// blt cr6,0x82244284
	if (ctx.cr6.lt) goto loc_82244284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82234538
	ctx.lr = 0x822442BC;
	sub_82234538(ctx, base);
	// add r11,r3,r25
	ctx.r11.u64 = ctx.r3.u64 + ctx.r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,6732
	ctx.r5.s64 = ctx.r11.s64 + 6732;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82237f68
	ctx.lr = 0x822442E0;
	sub_82237F68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x822442E8;
	sub_8209EDA0(ctx, base);
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
	// addi r30,r11,3484
	ctx.r30.s64 = ctx.r11.s64 + 3484;
	// li r5,420
	ctx.r5.s64 = 420;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x82244304;
	sub_82248A40(ctx, base);
	// addi r4,r30,420
	ctx.r4.s64 = ctx.r30.s64 + 420;
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x82248a40
	ctx.lr = 0x82244314;
	sub_82248A40(ctx, base);
	// addi r4,r30,552
	ctx.r4.s64 = ctx.r30.s64 + 552;
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// bl 0x8214a650
	ctx.lr = 0x82244320;
	sub_8214A650(ctx, base);
	// li r10,67
	ctx.r10.s64 = 67;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,1553
	ctx.r9.s64 = ctx.r30.s64 + 1553;
	// addi r8,r31,1553
	ctx.r8.s64 = ctx.r31.s64 + 1553;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbz r10,1552(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1552);
	// stb r10,1564(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1564, ctx.r10.u8);
loc_8224433C:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8224433c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224433C;
	// lwz r10,1620(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	// mulli r11,r25,100
	ctx.r11.s64 = ctx.r25.s64 * 100;
	// stw r10,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r10.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r29,1636
	ctx.r3.s64 = ctx.r29.s64 + 1636;
	// addi r4,r11,6732
	ctx.r4.s64 = ctx.r11.s64 + 6732;
	// bl 0x82165910
	ctx.lr = 0x82244368;
	sub_82165910(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82244370"))) PPC_WEAK_FUNC(sub_82244370);
PPC_FUNC_IMPL(__imp__sub_82244370) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r3,r3,1736
	ctx.r3.s64 = ctx.r3.s64 + 1736;
	// b 0x82165f20
	sub_82165F20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8224438C"))) PPC_WEAK_FUNC(sub_8224438C);
PPC_FUNC_IMPL(__imp__sub_8224438C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244390"))) PPC_WEAK_FUNC(sub_82244390);
PPC_FUNC_IMPL(__imp__sub_82244390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,1004
	ctx.r10.s64 = ctx.r11.s64 + 1004;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821857f0
	sub_821857F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822443A0"))) PPC_WEAK_FUNC(sub_822443A0);
PPC_FUNC_IMPL(__imp__sub_822443A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8952);
	// b 0x821f4870
	sub_821F4870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822443AC"))) PPC_WEAK_FUNC(sub_822443AC);
PPC_FUNC_IMPL(__imp__sub_822443AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822443B0"))) PPC_WEAK_FUNC(sub_822443B0);
PPC_FUNC_IMPL(__imp__sub_822443B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822443B8;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82244d00
	ctx.lr = 0x822443D0;
	sub_82244D00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224442c
	if (ctx.cr6.eq) goto loc_8224442C;
	// bl 0x82244ee0
	ctx.lr = 0x822443E0;
	sub_82244EE0(ctx, base);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1777
	ctx.r4.s64 = 1777;
	// beq cr6,0x82244420
	if (ctx.cr6.eq) goto loc_82244420;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82244420
	if (ctx.cr6.eq) goto loc_82244420;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f2348
	ctx.lr = 0x82244414;
	sub_820F2348(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82244420:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f2348
	ctx.lr = 0x8224442C;
	sub_820F2348(ctx, base);
loc_8224442C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82244438"))) PPC_WEAK_FUNC(sub_82244438);
PPC_FUNC_IMPL(__imp__sub_82244438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82244440;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x82244454;
	sub_82185740(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1004
	ctx.r9.s64 = ctx.r10.s64 + 1004;
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// lwz r31,-8952(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8952);
	// lwz r30,-5068(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + -5068);
	// lwz r29,-5072(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + -5072);
	// bl 0x8215c058
	ctx.lr = 0x8224448C;
	sub_8215C058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x820a26b8
	ctx.lr = 0x822444A0;
	sub_820A26B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822444AC"))) PPC_WEAK_FUNC(sub_822444AC);
PPC_FUNC_IMPL(__imp__sub_822444AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822444B0"))) PPC_WEAK_FUNC(sub_822444B0);
PPC_FUNC_IMPL(__imp__sub_822444B0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,1004
	ctx.r10.s64 = ctx.r11.s64 + 1004;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821857f0
	ctx.lr = 0x822444DC;
	sub_821857F0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822444f8
	if (ctx.cr6.eq) goto loc_822444F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x822444F4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822444F8:
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

__attribute__((alias("__imp__sub_82244510"))) PPC_WEAK_FUNC(sub_82244510);
PPC_FUNC_IMPL(__imp__sub_82244510) {
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
	// bl 0x82244d00
	ctx.lr = 0x8224452C;
	sub_82244D00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244564
	if (ctx.cr6.eq) goto loc_82244564;
	// bl 0x82244ee0
	ctx.lr = 0x8224453C;
	sub_82244EE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1777
	ctx.r4.s64 = 1777;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820f2348
	ctx.lr = 0x82244564;
	sub_820F2348(ctx, base);
loc_82244564:
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

__attribute__((alias("__imp__sub_8224457C"))) PPC_WEAK_FUNC(sub_8224457C);
PPC_FUNC_IMPL(__imp__sub_8224457C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244580"))) PPC_WEAK_FUNC(sub_82244580);
PPC_FUNC_IMPL(__imp__sub_82244580) {
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
	// bl 0x82244d00
	ctx.lr = 0x82244598;
	sub_82244D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224460c
	if (ctx.cr6.eq) goto loc_8224460C;
	// lwz r11,3020(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224460c
	if (ctx.cr6.eq) goto loc_8224460C;
	// addi r31,r3,1248
	ctx.r31.s64 = ctx.r3.s64 + 1248;
	// lfs f0,560(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// lfs f13,556(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x821882d0
	ctx.lr = 0x822445CC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822445e4
	if (ctx.cr6.eq) goto loc_822445E4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822445e4
	if (ctx.cr6.eq) goto loc_822445E4;
	// stfs f31,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
loc_822445E4:
	// lis r4,13133
	ctx.r4.s64 = 860684288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,17985
	ctx.r4.u64 = ctx.r4.u64 | 17985;
	// bl 0x821882d0
	ctx.lr = 0x822445F4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224460c
	if (ctx.cr6.eq) goto loc_8224460C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224460c
	if (ctx.cr6.eq) goto loc_8224460C;
	// bl 0x820fd8c0
	ctx.lr = 0x8224460C;
	sub_820FD8C0(ctx, base);
loc_8224460C:
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

__attribute__((alias("__imp__sub_82244624"))) PPC_WEAK_FUNC(sub_82244624);
PPC_FUNC_IMPL(__imp__sub_82244624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244628"))) PPC_WEAK_FUNC(sub_82244628);
PPC_FUNC_IMPL(__imp__sub_82244628) {
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
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,29776
	ctx.r4.u64 = ctx.r4.u64 | 29776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x82244654;
	sub_82188378(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82185740
	ctx.lr = 0x82244664;
	sub_82185740(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r9,r11,1020
	ctx.r9.s64 = ctx.r11.s64 + 1020;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// addi r8,r10,1012
	ctx.r8.s64 = ctx.r10.s64 + 1012;
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_822446B8"))) PPC_WEAK_FUNC(sub_822446B8);
PPC_FUNC_IMPL(__imp__sub_822446B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82244b10
	sub_82244B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822446C0"))) PPC_WEAK_FUNC(sub_822446C0);
PPC_FUNC_IMPL(__imp__sub_822446C0) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,1020
	ctx.r8.s64 = ctx.r10.s64 + 1020;
	// addi r7,r9,1012
	ctx.r7.s64 = ctx.r9.s64 + 1012;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82244748
	if (ctx.cr6.eq) goto loc_82244748;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4f8
	ctx.lr = 0x8224470C;
	sub_820EF4F8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x82244720
	if (!ctx.cr6.eq) goto loc_82244720;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82244720:
	// lis r4,21300
	ctx.r4.s64 = 1395916800;
	// ori r4,r4,16724
	ctx.r4.u64 = ctx.r4.u64 | 16724;
	// bl 0x821882d0
	ctx.lr = 0x8224472C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244748
	if (ctx.cr6.eq) goto loc_82244748;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82244748
	if (ctx.cr6.eq) goto loc_82244748;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
loc_82244748:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821857f0
	ctx.lr = 0x82244750;
	sub_821857F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x82244758;
	sub_821883B8(ctx, base);
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

__attribute__((alias("__imp__sub_82244770"))) PPC_WEAK_FUNC(sub_82244770);
PPC_FUNC_IMPL(__imp__sub_82244770) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1936(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1936);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,416(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f31,420(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f31,424(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stfs f0,428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// bl 0x820fba38
	ctx.lr = 0x822447B0;
	sub_820FBA38(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1777
	ctx.r4.s64 = 1777;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2348
	ctx.lr = 0x822447CC;
	sub_820F2348(ctx, base);
	// lwz r9,1216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1216);
	// addi r3,r31,1216
	ctx.r3.s64 = ctx.r31.s64 + 1216;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822447E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_822447F8"))) PPC_WEAK_FUNC(sub_822447F8);
PPC_FUNC_IMPL(__imp__sub_822447F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82244800;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8223a9f8
	ctx.lr = 0x82244810;
	sub_8223A9F8(ctx, base);
	// bl 0x8223b310
	ctx.lr = 0x82244814;
	sub_8223B310(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82244d00
	ctx.lr = 0x8224481C;
	sub_82244D00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f1,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// bl 0x822443b0
	ctx.lr = 0x82244830;
	sub_822443B0(ctx, base);
	// lwz r29,20(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x82244d00
	ctx.lr = 0x82244838;
	sub_82244D00(ctx, base);
	// lis r11,17229
	ctx.r11.s64 = 1129119744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r28,r11,20304
	ctx.r28.u64 = ctx.r11.u64 | 20304;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224488c
	if (ctx.cr6.eq) goto loc_8224488C;
	// bl 0x82244ee0
	ctx.lr = 0x82244850;
	sub_82244EE0(ctx, base);
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821882d0
	ctx.lr = 0x8224485C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224488c
	if (ctx.cr6.eq) goto loc_8224488C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224488c
	if (ctx.cr6.eq) goto loc_8224488C;
	// stw r29,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1650
	ctx.r5.s64 = 1650;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820febe0
	ctx.lr = 0x8224488C;
	sub_820FEBE0(ctx, base);
loc_8224488C:
	// addi r3,r30,1248
	ctx.r3.s64 = ctx.r30.s64 + 1248;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821882d0
	ctx.lr = 0x82244898;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822448a8
	if (ctx.cr6.eq) goto loc_822448A8;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x822448ac
	goto loc_822448AC;
loc_822448A8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822448AC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r3,r27,1248
	ctx.r3.s64 = ctx.r27.s64 + 1248;
	// bne cr6,0x822448bc
	if (!ctx.cr6.eq) goto loc_822448BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822448BC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821882d0
	ctx.lr = 0x822448C4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822448d4
	if (ctx.cr6.eq) goto loc_822448D4;
	// lwz r28,24(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x822448d8
	goto loc_822448D8;
loc_822448D4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_822448D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r28,188
	ctx.r29.s64 = ctx.r28.s64 + 188;
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_822448F0:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,-28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,-12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzu r8,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x820febe0
	ctx.lr = 0x8224490C;
	sub_820FEBE0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfs f31,-12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + -12, temp.u32);
	// stwu r27,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r29.u32 = ea;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x822448f0
	if (ctx.cr6.lt) goto loc_822448F0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82244580
	ctx.lr = 0x82244928;
	sub_82244580(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82244934"))) PPC_WEAK_FUNC(sub_82244934);
PPC_FUNC_IMPL(__imp__sub_82244934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244938"))) PPC_WEAK_FUNC(sub_82244938);
PPC_FUNC_IMPL(__imp__sub_82244938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82244940;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82182e90
	ctx.lr = 0x8224495C;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82244964;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82244970;
	sub_821837D0(ctx, base);
	// lwz r11,1972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82244984
	if (!ctx.cr6.eq) goto loc_82244984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1c40
	ctx.lr = 0x82244984;
	sub_820F1C40(ctx, base);
loc_82244984:
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// lwz r3,1972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// ori r4,r4,29776
	ctx.r4.u64 = ctx.r4.u64 | 29776;
	// bl 0x821882d0
	ctx.lr = 0x82244994;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822449bc
	if (ctx.cr6.eq) goto loc_822449BC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822449bc
	if (ctx.cr6.eq) goto loc_822449BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822449BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822449BC:
	// bl 0x82183850
	ctx.lr = 0x822449C0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x822449d8
	if (ctx.cr6.eq) goto loc_822449D8;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82183448
	ctx.lr = 0x822449D4;
	sub_82183448(ctx, base);
	// b 0x822449e0
	goto loc_822449E0;
loc_822449D8:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x822449E0;
	sub_821845A0(ctx, base);
loc_822449E0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822449f8
	if (ctx.cr6.eq) goto loc_822449F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82244628
	ctx.lr = 0x822449F0;
	sub_82244628(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822449fc
	goto loc_822449FC;
loc_822449F8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_822449FC:
	// lis r4,21300
	ctx.r4.s64 = 1395916800;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,16724
	ctx.r4.u64 = ctx.r4.u64 | 16724;
	// bl 0x821882d0
	ctx.lr = 0x82244A0C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244a30
	if (ctx.cr6.eq) goto loc_82244A30;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82244a30
	if (ctx.cr6.eq) goto loc_82244A30;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
loc_82244A30:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// bl 0x820ef4a8
	ctx.lr = 0x82244A3C;
	sub_820EF4A8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82244a58
	if (ctx.cr6.eq) goto loc_82244A58;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r10,r31,416
	ctx.r10.s64 = ctx.r31.s64 + 416;
	// std r11,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r11.u64);
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r9,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r9.u64);
loc_82244A58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r6,r26,24
	ctx.r6.u64 = ctx.r26.u32 & 0xFF;
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820f2348
	ctx.lr = 0x82244A78;
	sub_820F2348(ctx, base);
	// lwz r3,1972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82244A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x82244A98;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82244AA0"))) PPC_WEAK_FUNC(sub_82244AA0);
PPC_FUNC_IMPL(__imp__sub_82244AA0) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82244af4
	if (ctx.cr6.eq) goto loc_82244AF4;
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// ori r4,r4,29776
	ctx.r4.u64 = ctx.r4.u64 | 29776;
	// bl 0x821882d0
	ctx.lr = 0x82244ACC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244af4
	if (ctx.cr6.eq) goto loc_82244AF4;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244af4
	if (ctx.cr6.eq) goto loc_82244AF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82244AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82244AF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82244770
	ctx.lr = 0x82244AFC;
	sub_82244770(ctx, base);
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

__attribute__((alias("__imp__sub_82244B10"))) PPC_WEAK_FUNC(sub_82244B10);
PPC_FUNC_IMPL(__imp__sub_82244B10) {
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
	// bl 0x822446c0
	ctx.lr = 0x82244B30;
	sub_822446C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82244b4c
	if (ctx.cr6.eq) goto loc_82244B4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82244B48;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82244B4C:
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

__attribute__((alias("__imp__sub_82244B64"))) PPC_WEAK_FUNC(sub_82244B64);
PPC_FUNC_IMPL(__imp__sub_82244B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244B68"))) PPC_WEAK_FUNC(sub_82244B68);
PPC_FUNC_IMPL(__imp__sub_82244B68) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82244c18
	if (!ctx.cr6.eq) goto loc_82244C18;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1936);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r10,1028(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1028);
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82244be4
	if (ctx.cr6.eq) goto loc_82244BE4;
	// lhz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// b 0x82244bec
	goto loc_82244BEC;
loc_82244BE4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
loc_82244BEC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8328(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82244c2c
	if (!ctx.cr6.gt) goto loc_82244C2C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4f8
	ctx.lr = 0x82244C0C;
	sub_820EF4F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82244c2c
	goto loc_82244C2C;
loc_82244C18:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bge 0x82244c2c
	if (!ctx.cr0.lt) goto loc_82244C2C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82244C2C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,664(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82244c4c
	if (ctx.cr6.eq) goto loc_82244C4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4a8
	ctx.lr = 0x82244C48;
	sub_820EF4A8(ctx, base);
	// b 0x82244c54
	goto loc_82244C54;
loc_82244C4C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82244c78
	if (ctx.cr6.eq) goto loc_82244C78;
loc_82244C54:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82244770
	ctx.lr = 0x82244C5C;
	sub_82244770(ctx, base);
	// addic. r3,r31,-32
	ctx.xer.ca = ctx.r31.u32 > 31;
	ctx.r3.s64 = ctx.r31.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82244c78
	if (ctx.cr0.eq) goto loc_82244C78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82244C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82244C78:
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

__attribute__((alias("__imp__sub_82244C90"))) PPC_WEAK_FUNC(sub_82244C90);
PPC_FUNC_IMPL(__imp__sub_82244C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,1328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82244CAC"))) PPC_WEAK_FUNC(sub_82244CAC);
PPC_FUNC_IMPL(__imp__sub_82244CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244CB0"))) PPC_WEAK_FUNC(sub_82244CB0);
PPC_FUNC_IMPL(__imp__sub_82244CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,1328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82244cd0
	if (ctx.cr6.eq) goto loc_82244CD0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82244CD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82244CD8"))) PPC_WEAK_FUNC(sub_82244CD8);
PPC_FUNC_IMPL(__imp__sub_82244CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,1328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82244cf8
	if (ctx.cr6.eq) goto loc_82244CF8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82244CF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82244D00"))) PPC_WEAK_FUNC(sub_82244D00);
PPC_FUNC_IMPL(__imp__sub_82244D00) {
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
	// lwz r11,1328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82244d44
	if (ctx.cr6.eq) goto loc_82244D44;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82244d44
	if (ctx.cr6.eq) goto loc_82244D44;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82244d70
	if (ctx.cr6.eq) goto loc_82244D70;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82244d58
	if (ctx.cr6.eq) goto loc_82244D58;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82244d70
	if (ctx.cr6.eq) goto loc_82244D70;
loc_82244D44:
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
loc_82244D58:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-5052(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5052);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82244D70:
	// bl 0x8223a9f8
	ctx.lr = 0x82244D74;
	sub_8223A9F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244d44
	if (ctx.cr6.eq) goto loc_82244D44;
	// bl 0x8223a9f8
	ctx.lr = 0x82244D80;
	sub_8223A9F8(ctx, base);
	// bl 0x8223b2f8
	ctx.lr = 0x82244D84;
	sub_8223B2F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82244D94"))) PPC_WEAK_FUNC(sub_82244D94);
PPC_FUNC_IMPL(__imp__sub_82244D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244D98"))) PPC_WEAK_FUNC(sub_82244D98);
PPC_FUNC_IMPL(__imp__sub_82244D98) {
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
	ctx.lr = 0x82244DB0;
	sub_821855F0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1052
	ctx.r9.s64 = ctx.r10.s64 + 1052;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82247b08
	ctx.lr = 0x82244DD4;
	sub_82247B08(ctx, base);
	// addi r3,r31,1008
	ctx.r3.s64 = ctx.r31.s64 + 1008;
	// bl 0x82244438
	ctx.lr = 0x82244DDC;
	sub_82244438(ctx, base);
	// bl 0x820987c8
	ctx.lr = 0x82244DE0;
	sub_820987C8(ctx, base);
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// lwz r3,14520(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244df8
	if (ctx.cr6.eq) goto loc_82244DF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82167158
	ctx.lr = 0x82244DF8;
	sub_82167158(ctx, base);
loc_82244DF8:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,14524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244e10
	if (ctx.cr6.eq) goto loc_82244E10;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82169308
	ctx.lr = 0x82244E10;
	sub_82169308(ctx, base);
loc_82244E10:
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

__attribute__((alias("__imp__sub_82244E28"))) PPC_WEAK_FUNC(sub_82244E28);
PPC_FUNC_IMPL(__imp__sub_82244E28) {
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
	// bne cr6,0x82244e78
	if (!ctx.cr6.eq) goto loc_82244E78;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244e60
	if (ctx.cr6.eq) goto loc_82244E60;
	// bl 0x820f3a78
	ctx.lr = 0x82244E58;
	sub_820F3A78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82244e78
	if (ctx.cr6.eq) goto loc_82244E78;
loc_82244E60:
	// addi r3,r31,1008
	ctx.r3.s64 = ctx.r31.s64 + 1008;
	// bl 0x822443a0
	ctx.lr = 0x82244E68;
	sub_822443A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82244e78
	if (ctx.cr6.eq) goto loc_82244E78;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82244E78:
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

__attribute__((alias("__imp__sub_82244E8C"))) PPC_WEAK_FUNC(sub_82244E8C);
PPC_FUNC_IMPL(__imp__sub_82244E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244E90"))) PPC_WEAK_FUNC(sub_82244E90);
PPC_FUNC_IMPL(__imp__sub_82244E90) {
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
	// beq cr6,0x82244ec8
	if (ctx.cr6.eq) goto loc_82244EC8;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244ec0
	if (ctx.cr6.eq) goto loc_82244EC0;
	// bl 0x8209eda0
	ctx.lr = 0x82244EC0;
	sub_8209EDA0(ctx, base);
loc_82244EC0:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82247510
	ctx.lr = 0x82244EC8;
	sub_82247510(ctx, base);
loc_82244EC8:
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

__attribute__((alias("__imp__sub_82244EDC"))) PPC_WEAK_FUNC(sub_82244EDC);
PPC_FUNC_IMPL(__imp__sub_82244EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244EE0"))) PPC_WEAK_FUNC(sub_82244EE0);
PPC_FUNC_IMPL(__imp__sub_82244EE0) {
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
	// lwz r11,1328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82244f54
	if (ctx.cr6.eq) goto loc_82244F54;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82244f24
	if (ctx.cr6.eq) goto loc_82244F24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82244f54
	if (ctx.cr6.eq) goto loc_82244F54;
loc_82244F10:
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
loc_82244F24:
	// bl 0x82244d00
	ctx.lr = 0x82244F28;
	sub_82244D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244f10
	if (ctx.cr6.eq) goto loc_82244F10;
	// bl 0x82097100
	ctx.lr = 0x82244F34;
	sub_82097100(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244f10
	if (ctx.cr6.eq) goto loc_82244F10;
	// lbz r11,846(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 846);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82244F54:
	// bl 0x8223aa28
	ctx.lr = 0x82244F58;
	sub_8223AA28(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244f10
	if (ctx.cr6.eq) goto loc_82244F10;
	// bl 0x8223aa28
	ctx.lr = 0x82244F64;
	sub_8223AA28(ctx, base);
	// bl 0x822e6048
	ctx.lr = 0x82244F68;
	sub_822E6048(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82244F78"))) PPC_WEAK_FUNC(sub_82244F78);
PPC_FUNC_IMPL(__imp__sub_82244F78) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,14520(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244f9c
	if (ctx.cr6.eq) goto loc_82244F9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82167158
	ctx.lr = 0x82244F9C;
	sub_82167158(ctx, base);
loc_82244F9C:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,14524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82244fb4
	if (ctx.cr6.eq) goto loc_82244FB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82169308
	ctx.lr = 0x82244FB4;
	sub_82169308(ctx, base);
loc_82244FB4:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-1744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1744);
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

__attribute__((alias("__imp__sub_82244FD4"))) PPC_WEAK_FUNC(sub_82244FD4);
PPC_FUNC_IMPL(__imp__sub_82244FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82244FD8"))) PPC_WEAK_FUNC(sub_82244FD8);
PPC_FUNC_IMPL(__imp__sub_82244FD8) {
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
	ctx.lr = 0x82244FE8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82245000
	if (ctx.cr6.eq) goto loc_82245000;
	// li r3,1040
	ctx.r3.s64 = 1040;
	// bl 0x82183448
	ctx.lr = 0x82244FFC;
	sub_82183448(ctx, base);
	// b 0x82245008
	goto loc_82245008;
loc_82245000:
	// li r3,65
	ctx.r3.s64 = 65;
	// bl 0x821845a0
	ctx.lr = 0x82245008;
	sub_821845A0(ctx, base);
loc_82245008:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224502c
	if (ctx.cr6.eq) goto loc_8224502C;
	// bl 0x82244d98
	ctx.lr = 0x82245014;
	sub_82244D98(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,1328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8224502C:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1328, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82245048"))) PPC_WEAK_FUNC(sub_82245048);
PPC_FUNC_IMPL(__imp__sub_82245048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82245050;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// addi r10,r11,1052
	ctx.r10.s64 = ctx.r11.s64 + 1052;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r29,-440(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -440);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82245088
	if (ctx.cr6.eq) goto loc_82245088;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821625f8
	ctx.lr = 0x8224507C;
	sub_821625F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82245088;
	sub_82183E40(ctx, base);
loc_82245088:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-440(r30)
	PPC_STORE_U32(ctx.r30.u32 + -440, ctx.r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822450b0
	if (ctx.cr6.eq) goto loc_822450B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822450B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822450B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,1008
	ctx.r3.s64 = ctx.r31.s64 + 1008;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82244390
	ctx.lr = 0x822450C0;
	sub_82244390(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82246ea0
	ctx.lr = 0x822450C8;
	sub_82246EA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185670
	ctx.lr = 0x822450D0;
	sub_82185670(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822450D8"))) PPC_WEAK_FUNC(sub_822450D8);
PPC_FUNC_IMPL(__imp__sub_822450D8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82244fd8
	ctx.lr = 0x822450F8;
	sub_82244FD8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82245130
	if (ctx.cr6.eq) goto loc_82245130;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82080000
	ctx.lr = 0x82245108;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245120
	if (ctx.cr6.eq) goto loc_82245120;
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// subfe r4,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82246c40
	ctx.lr = 0x8224511C;
	sub_82246C40(ctx, base);
	// b 0x82245124
	goto loc_82245124;
loc_82245120:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82245124:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,1328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
loc_82245130:
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

__attribute__((alias("__imp__sub_82245148"))) PPC_WEAK_FUNC(sub_82245148);
PPC_FUNC_IMPL(__imp__sub_82245148) {
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
	// bl 0x82245048
	ctx.lr = 0x82245168;
	sub_82245048(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245184
	if (ctx.cr6.eq) goto loc_82245184;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82245180;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82245184:
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

__attribute__((alias("__imp__sub_8224519C"))) PPC_WEAK_FUNC(sub_8224519C);
PPC_FUNC_IMPL(__imp__sub_8224519C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822451A0"))) PPC_WEAK_FUNC(sub_822451A0);
PPC_FUNC_IMPL(__imp__sub_822451A0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822451cc
	if (ctx.cr6.eq) goto loc_822451CC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x822451d0
	goto loc_822451D0;
loc_822451CC:
	// bl 0x821affd8
	ctx.lr = 0x822451D0;
	sub_821AFFD8(ctx, base);
loc_822451D0:
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82245210"))) PPC_WEAK_FUNC(sub_82245210);
PPC_FUNC_IMPL(__imp__sub_82245210) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82245238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8224524C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82245268"))) PPC_WEAK_FUNC(sub_82245268);
PPC_FUNC_IMPL(__imp__sub_82245268) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82245290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_822452AC"))) PPC_WEAK_FUNC(sub_822452AC);
PPC_FUNC_IMPL(__imp__sub_822452AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822452B0"))) PPC_WEAK_FUNC(sub_822452B0);
PPC_FUNC_IMPL(__imp__sub_822452B0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245364
	if (ctx.cr6.eq) goto loc_82245364;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822452f8
	if (ctx.cr6.eq) goto loc_822452F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822452F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_822452F8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224531c
	if (ctx.cr6.eq) goto loc_8224531C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82245318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8224531C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82245340
	if (ctx.cr6.eq) goto loc_82245340;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224533C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_82245340:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82245364
	if (ctx.cr6.eq) goto loc_82245364;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82245360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82245364:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82245394
	if (ctx.cr6.eq) goto loc_82245394;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245390
	if (ctx.cr6.eq) goto loc_82245390;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82245390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82245390:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82245394:
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

__attribute__((alias("__imp__sub_822453AC"))) PPC_WEAK_FUNC(sub_822453AC);
PPC_FUNC_IMPL(__imp__sub_822453AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822453B0"))) PPC_WEAK_FUNC(sub_822453B0);
PPC_FUNC_IMPL(__imp__sub_822453B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x822452b0
	sub_822452B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822453B4"))) PPC_WEAK_FUNC(sub_822453B4);
PPC_FUNC_IMPL(__imp__sub_822453B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822453B8"))) PPC_WEAK_FUNC(sub_822453B8);
PPC_FUNC_IMPL(__imp__sub_822453B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,193
	ctx.r10.s64 = 193;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822453C8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822453c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822453C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822453D4"))) PPC_WEAK_FUNC(sub_822453D4);
PPC_FUNC_IMPL(__imp__sub_822453D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822453D8"))) PPC_WEAK_FUNC(sub_822453D8);
PPC_FUNC_IMPL(__imp__sub_822453D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 + 1344;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822453EC"))) PPC_WEAK_FUNC(sub_822453EC);
PPC_FUNC_IMPL(__imp__sub_822453EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822453F0"))) PPC_WEAK_FUNC(sub_822453F0);
PPC_FUNC_IMPL(__imp__sub_822453F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,1072
	ctx.r8.s64 = ctx.r10.s64 + 1072;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82245404:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8224542c
	if (ctx.cr6.eq) goto loc_8224542C;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmplwi cr6,r9,144
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 144, ctx.xer);
	// blt cr6,0x82245404
	if (ctx.cr6.lt) goto loc_82245404;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8224542C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,6
	ctx.r10.s64 = 6;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8224544C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8224544c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224544C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82245460"))) PPC_WEAK_FUNC(sub_82245460);
PPC_FUNC_IMPL(__imp__sub_82245460) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82245470
	if (ctx.cr6.lt) goto loc_82245470;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// blt cr6,0x82245478
	if (ctx.cr6.lt) goto loc_82245478;
loc_82245470:
	// li r3,193
	ctx.r3.s64 = 193;
	// blr 
	return;
loc_82245478:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1216
	ctx.r9.s64 = ctx.r11.s64 + 1216;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224548C"))) PPC_WEAK_FUNC(sub_8224548C);
PPC_FUNC_IMPL(__imp__sub_8224548C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245490"))) PPC_WEAK_FUNC(sub_82245490);
PPC_FUNC_IMPL(__imp__sub_82245490) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,1248
	ctx.r10.s64 = ctx.r10.s64 + 1248;
loc_8224549C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822454ac
	if (ctx.cr6.lt) goto loc_822454AC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x822454b4
	if (ctx.cr6.lt) goto loc_822454B4;
loc_822454AC:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x822454bc
	goto loc_822454BC;
loc_822454B4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_822454BC:
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x822454d4
	if (ctx.cr6.eq) goto loc_822454D4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8224549c
	if (!ctx.cr6.eq) goto loc_8224549C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822454D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822454DC"))) PPC_WEAK_FUNC(sub_822454DC);
PPC_FUNC_IMPL(__imp__sub_822454DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822454E0"))) PPC_WEAK_FUNC(sub_822454E0);
PPC_FUNC_IMPL(__imp__sub_822454E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// bne cr6,0x82245520
	if (!ctx.cr6.eq) goto loc_82245520;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,121
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 121, ctx.xer);
	// bne cr6,0x82245520
	if (!ctx.cr6.eq) goto loc_82245520;
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82245520
	if (!ctx.cr6.eq) goto loc_82245520;
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x82245520
	if (!ctx.cr6.eq) goto loc_82245520;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,66
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 66, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82245520:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82245528"))) PPC_WEAK_FUNC(sub_82245528);
PPC_FUNC_IMPL(__imp__sub_82245528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82245530;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r24,r3,-4
	ctx.r24.s64 = ctx.r3.s64 + -4;
	// addi r30,r11,1344
	ctx.r30.s64 = ctx.r11.s64 + 1344;
	// li r25,193
	ctx.r25.s64 = 193;
loc_82245548:
	// ld r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r26,-1
	ctx.r26.s64 = -1;
	// ld r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822455d8
	if (ctx.cr6.eq) goto loc_822455D8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82245574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245598
	if (ctx.cr6.eq) goto loc_82245598;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82245594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8224559c
	goto loc_8224559C;
loc_82245598:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224559C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822455d8
	if (!ctx.cr6.gt) goto loc_822455D8;
loc_822455A8:
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpld cr6,r29,r10
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x822455c0
	if (!ctx.cr6.eq) goto loc_822455C0;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// cmpld cr6,r28,r10
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x822455d4
	if (ctx.cr6.eq) goto loc_822455D4;
loc_822455C0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822455a8
	if (ctx.cr6.gt) goto loc_822455A8;
	// b 0x822455d8
	goto loc_822455D8;
loc_822455D4:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_822455D8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stwu r26,4(r24)
	ea = 4 + ctx.r24.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r24.u32 = ea;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82245548
	if (!ctx.cr0.eq) goto loc_82245548;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_822455F0"))) PPC_WEAK_FUNC(sub_822455F0);
PPC_FUNC_IMPL(__imp__sub_822455F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 + 1344;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82245608:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x82245624
	if (!ctx.cr6.eq) goto loc_82245624;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x82245638
	if (ctx.cr6.eq) goto loc_82245638;
loc_82245624:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,193
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 193, ctx.xer);
	// blt cr6,0x82245608
	if (ctx.cr6.lt) goto loc_82245608;
	// blr 
	return;
loc_82245638:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82245640"))) PPC_WEAK_FUNC(sub_82245640);
PPC_FUNC_IMPL(__imp__sub_82245640) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,2596
	ctx.r9.s64 = ctx.r10.s64 + 2596;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224565C"))) PPC_WEAK_FUNC(sub_8224565C);
PPC_FUNC_IMPL(__imp__sub_8224565C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245660"))) PPC_WEAK_FUNC(sub_82245660);
PPC_FUNC_IMPL(__imp__sub_82245660) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82245674
	if (!ctx.cr6.eq) goto loc_82245674;
loc_8224566C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82245674:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8224566c
	if (ctx.cr6.lt) goto loc_8224566C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8224566c
	if (!ctx.cr6.lt) goto loc_8224566C;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224569C"))) PPC_WEAK_FUNC(sub_8224569C);
PPC_FUNC_IMPL(__imp__sub_8224569C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822456A0"))) PPC_WEAK_FUNC(sub_822456A0);
PPC_FUNC_IMPL(__imp__sub_822456A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822456b4
	if (!ctx.cr6.eq) goto loc_822456B4;
loc_822456AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822456B4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822456ac
	if (ctx.cr6.lt) goto loc_822456AC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822456ac
	if (!ctx.cr6.lt) goto loc_822456AC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_822456E8:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822456e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822456E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822456FC"))) PPC_WEAK_FUNC(sub_822456FC);
PPC_FUNC_IMPL(__imp__sub_822456FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245700"))) PPC_WEAK_FUNC(sub_82245700);
PPC_FUNC_IMPL(__imp__sub_82245700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82245718
	if (!ctx.cr6.lt) goto loc_82245718;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82245718:
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82245730"))) PPC_WEAK_FUNC(sub_82245730);
PPC_FUNC_IMPL(__imp__sub_82245730) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r6,r10,22272
	ctx.r6.s64 = ctx.r10.s64 + 22272;
	// b 0x8224a2a0
	sub_8224A2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82245754"))) PPC_WEAK_FUNC(sub_82245754);
PPC_FUNC_IMPL(__imp__sub_82245754) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82245758"))) PPC_WEAK_FUNC(sub_82245758);
PPC_FUNC_IMPL(__imp__sub_82245758) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,2596
	ctx.r10.s64 = ctx.r11.s64 + 2596;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8224578c
	if (ctx.cr6.eq) goto loc_8224578C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8224578C;
	sub_82183E40(ctx, base);
loc_8224578C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822457AC"))) PPC_WEAK_FUNC(sub_822457AC);
PPC_FUNC_IMPL(__imp__sub_822457AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822457B0"))) PPC_WEAK_FUNC(sub_822457B0);
PPC_FUNC_IMPL(__imp__sub_822457B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x822457dc
	if (ctx.cr6.gt) goto loc_822457DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82245878
	goto loc_82245878;
loc_822457DC:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822457f0
	if (ctx.cr6.eq) goto loc_822457F0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x822457F0;
	sub_82183E40(ctx, base);
loc_822457F0:
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,52428
	ctx.r9.u64 = ctx.r11.u64 | 52428;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8224581c
	if (ctx.cr6.gt) goto loc_8224581C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82245820
	goto loc_82245820;
loc_8224581C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82245820:
	// bl 0x82080d68
	ctx.lr = 0x82245824;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224586c
	if (ctx.cr6.eq) goto loc_8224586C;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82245864
	if (ctx.cr0.lt) goto loc_82245864;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
loc_8224584C:
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stfsu f0,20(r11)
	// bdnz 0x8224584c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224584C;
loc_82245864:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82245870
	goto loc_82245870;
loc_8224586C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82245870:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82245878:
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

__attribute__((alias("__imp__sub_82245890"))) PPC_WEAK_FUNC(sub_82245890);
PPC_FUNC_IMPL(__imp__sub_82245890) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822458b8
	if (ctx.cr6.eq) goto loc_822458B8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x822458B8;
	sub_82183E40(ctx, base);
loc_822458B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822458D8"))) PPC_WEAK_FUNC(sub_822458D8);
PPC_FUNC_IMPL(__imp__sub_822458D8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,2596
	ctx.r10.s64 = ctx.r11.s64 + 2596;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82245914
	if (ctx.cr6.eq) goto loc_82245914;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82245914;
	sub_82183E40(ctx, base);
loc_82245914:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8224593c
	if (ctx.cr6.eq) goto loc_8224593C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82245938;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8224593C:
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

__attribute__((alias("__imp__sub_82245954"))) PPC_WEAK_FUNC(sub_82245954);
PPC_FUNC_IMPL(__imp__sub_82245954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245958"))) PPC_WEAK_FUNC(sub_82245958);
PPC_FUNC_IMPL(__imp__sub_82245958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82245960;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8218a810
	ctx.lr = 0x82245980;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822459a0
	if (ctx.cr6.eq) goto loc_822459A0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ab00
	ctx.lr = 0x82245998;
	sub_8218AB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822459a4
	goto loc_822459A4;
loc_822459A0:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_822459A4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x822459B0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822459cc
	if (ctx.cr6.eq) goto loc_822459CC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ac78
	ctx.lr = 0x822459C4;
	sub_8218AC78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822459d0
	goto loc_822459D0;
loc_822459CC:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_822459D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822459e8
	if (!ctx.cr6.eq) goto loc_822459E8;
loc_822459D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_822459E8:
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// addic r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// ori r9,r11,52429
	ctx.r9.u64 = ctx.r11.u64 | 52429;
	// subfe r8,r10,r30
	temp.u8 = (~ctx.r10.u32 + ctx.r30.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mulhwu r7,r30,r9
	ctx.r7.u64 = (uint64_t(ctx.r30.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r11,r7,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r5,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r5.s64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// and r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 & ctx.r8.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822459d8
	if (ctx.cr6.eq) goto loc_822459D8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245a3c
	if (ctx.cr6.eq) goto loc_82245A3C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82245A3C;
	sub_82183E40(ctx, base);
loc_82245A3C:
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// lis r10,3276
	ctx.r10.s64 = 214695936;
	// divwu r31,r30,r11
	ctx.r31.u32 = ctx.r30.u32 / ctx.r11.u32;
	// ori r9,r10,52428
	ctx.r9.u64 = ctx.r10.u64 | 52428;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82245a6c
	if (ctx.cr6.gt) goto loc_82245A6C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82245a70
	goto loc_82245A70;
loc_82245A6C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82245A70:
	// bl 0x82080d68
	ctx.lr = 0x82245A74;
	sub_82080D68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82245abc
	if (ctx.cr6.eq) goto loc_82245ABC;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82245ab4
	if (ctx.cr0.lt) goto loc_82245AB4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82245A9C:
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stfsu f31,20(r11)
	// bdnz 0x82245a9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82245A9C;
loc_82245AB4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82245ac0
	goto loc_82245AC0;
loc_82245ABC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82245AC0:
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x82245AC8;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82245AD4;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82245ADC;
	sub_821830F8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820822c0
	ctx.lr = 0x82245AE8;
	sub_820822C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821847b0
	ctx.lr = 0x82245B00;
	sub_821847B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x82245B0C;
	sub_82183E40(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x82245b20
	if (ctx.cr6.lt) goto loc_82245B20;
	// bne cr6,0x82245b28
	if (!ctx.cr6.eq) goto loc_82245B28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82245b24
	goto loc_82245B24;
loc_82245B20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82245B24:
	// bl 0x821830f8
	ctx.lr = 0x82245B28;
	sub_821830F8(ctx, base);
loc_82245B28:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82245cac
	if (!ctx.cr6.gt) goto loc_82245CAC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82245B3C:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x82245B58;
	sub_821847A8(ctx, base);
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r5,4
	ctx.r5.s64 = 4;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// stb r10,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r10.u8);
	// stb r9,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r9.u8);
	// stb r8,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r8.u8);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x821847a8
	ctx.lr = 0x82245B94;
	sub_821847A8(ctx, base);
	// lbz r6,87(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// li r5,4
	ctx.r5.s64 = 4;
	// lbz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r6,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// stb r10,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r10.u8);
	// stb r9,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r9.u8);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821847a8
	ctx.lr = 0x82245BD0;
	sub_821847A8(ctx, base);
	// lbz r7,91(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r6,90(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// li r5,4
	ctx.r5.s64 = 4;
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r7,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r7.u8);
	// stb r6,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r6.u8);
	// stb r11,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r11.u8);
	// stb r10,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821847a8
	ctx.lr = 0x82245C0C;
	sub_821847A8(ctx, base);
	// lbz r9,95(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// lbz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lbz r7,93(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// li r5,4
	ctx.r5.s64 = 4;
	// lbz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stb r6,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r6.u8);
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x821847a8
	ctx.lr = 0x82245C48;
	sub_821847A8(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r5,99(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r4,98(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// lbz r3,97(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// stb r11,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r11.u8);
	// stb r5,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r5.u8);
	// stb r4,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r4.u8);
	// stb r3,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r3.u8);
	// lfs f12,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822459d8
	if (ctx.cr6.lt) goto loc_822459D8;
	// cmpwi cr6,r11,193
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 193, ctx.xer);
	// bge cr6,0x822459d8
	if (!ctx.cr6.lt) goto loc_822459D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822459d8
	if (ctx.cr6.lt) goto loc_822459D8;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bge cr6,0x822459d8
	if (!ctx.cr6.lt) goto loc_822459D8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82245b3c
	if (ctx.cr6.lt) goto loc_82245B3C;
loc_82245CAC:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245ccc
	if (ctx.cr6.eq) goto loc_82245CCC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r6,r11,22272
	ctx.r6.s64 = ctx.r11.s64 + 22272;
	// bl 0x8224a2a0
	ctx.lr = 0x82245CCC;
	sub_8224A2A0(ctx, base);
loc_82245CCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82245CDC"))) PPC_WEAK_FUNC(sub_82245CDC);
PPC_FUNC_IMPL(__imp__sub_82245CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245CE0"))) PPC_WEAK_FUNC(sub_82245CE0);
PPC_FUNC_IMPL(__imp__sub_82245CE0) {
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
	// beq cr6,0x82245d08
	if (ctx.cr6.eq) goto loc_82245D08;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82245D08;
	sub_82183E40(ctx, base);
loc_82245D08:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82245D2C"))) PPC_WEAK_FUNC(sub_82245D2C);
PPC_FUNC_IMPL(__imp__sub_82245D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245D30"))) PPC_WEAK_FUNC(sub_82245D30);
PPC_FUNC_IMPL(__imp__sub_82245D30) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245d5c
	if (ctx.cr6.eq) goto loc_82245D5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82245D5C;
	sub_82183E40(ctx, base);
loc_82245D5C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245d84
	if (ctx.cr6.eq) goto loc_82245D84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82245D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82245D84:
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

__attribute__((alias("__imp__sub_82245DA0"))) PPC_WEAK_FUNC(sub_82245DA0);
PPC_FUNC_IMPL(__imp__sub_82245DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82245DA8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245dcc
	if (ctx.cr6.eq) goto loc_82245DCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82245DCC;
	sub_82183E40(ctx, base);
loc_82245DCC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245df4
	if (ctx.cr6.eq) goto loc_82245DF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82245DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82245DF4:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ac78
	ctx.lr = 0x82245E04;
	sub_8218AC78(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x82245E0C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82245e24
	if (ctx.cr6.eq) goto loc_82245E24;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82183448
	ctx.lr = 0x82245E20;
	sub_82183448(ctx, base);
	// b 0x82245e34
	goto loc_82245E34;
loc_82245E24:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82245E34;
	sub_821845A0(ctx, base);
loc_82245E34:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ad90
	ctx.lr = 0x82245E4C;
	sub_8218AD90(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82080000
	ctx.lr = 0x82245E54;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245e6c
	if (ctx.cr6.eq) goto loc_82245E6C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822480e8
	ctx.lr = 0x82245E68;
	sub_822480E8(ctx, base);
	// b 0x82245e70
	goto loc_82245E70;
loc_82245E6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82245E70:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82245E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82245E9C"))) PPC_WEAK_FUNC(sub_82245E9C);
PPC_FUNC_IMPL(__imp__sub_82245E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245EA0"))) PPC_WEAK_FUNC(sub_82245EA0);
PPC_FUNC_IMPL(__imp__sub_82245EA0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,2600
	ctx.r9.s64 = ctx.r11.s64 + 2600;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82245640
	ctx.lr = 0x82245ED0;
	sub_82245640(ctx, base);
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

__attribute__((alias("__imp__sub_82245EE8"))) PPC_WEAK_FUNC(sub_82245EE8);
PPC_FUNC_IMPL(__imp__sub_82245EE8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r9,r10,2600
	ctx.r9.s64 = ctx.r10.s64 + 2600;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82245758
	sub_82245758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82245F00"))) PPC_WEAK_FUNC(sub_82245F00);
PPC_FUNC_IMPL(__imp__sub_82245F00) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,2600
	ctx.r10.s64 = ctx.r11.s64 + 2600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82245758
	ctx.lr = 0x82245F30;
	sub_82245758(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82245f4c
	if (ctx.cr6.eq) goto loc_82245F4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82245F48;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82245F4C:
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

__attribute__((alias("__imp__sub_82245F64"))) PPC_WEAK_FUNC(sub_82245F64);
PPC_FUNC_IMPL(__imp__sub_82245F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82245F68"))) PPC_WEAK_FUNC(sub_82245F68);
PPC_FUNC_IMPL(__imp__sub_82245F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82245F70;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,8
	ctx.r26.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82245890
	ctx.lr = 0x82245F88;
	sub_82245890(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r28,8
	ctx.r10.s64 = ctx.r28.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82245F98:
	// lwz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245fb8
	if (ctx.cr6.eq) goto loc_82245FB8;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245fb8
	if (ctx.cr6.eq) goto loc_82245FB8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82245FB8:
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245fd8
	if (ctx.cr6.eq) goto loc_82245FD8;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245fd8
	if (ctx.cr6.eq) goto loc_82245FD8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82245FD8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245ff8
	if (ctx.cr6.eq) goto loc_82245FF8;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245ff8
	if (ctx.cr6.eq) goto loc_82245FF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82245FF8:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246018
	if (ctx.cr6.eq) goto loc_82246018;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246018
	if (ctx.cr6.eq) goto loc_82246018;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82246018:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82245f98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82245F98;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822457b0
	ctx.lr = 0x8224602C;
	sub_822457B0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,8
	ctx.r27.s64 = 8;
loc_82246034:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246094
	if (ctx.cr6.eq) goto loc_82246094;
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82246094
	if (ctx.cr6.eq) goto loc_82246094;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82246094
	if (!ctx.cr6.gt) goto loc_82246094;
loc_8224605C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82245660
	ctx.lr = 0x82246068;
	sub_82245660(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246080
	if (ctx.cr6.eq) goto loc_82246080;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822456a0
	ctx.lr = 0x82246080;
	sub_822456A0(ctx, base);
loc_82246080:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8224605c
	if (ctx.cr6.lt) goto loc_8224605C;
loc_82246094:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82246034
	if (!ctx.cr0.eq) goto loc_82246034;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82245730
	ctx.lr = 0x822460A8;
	sub_82245730(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822460B0"))) PPC_WEAK_FUNC(sub_822460B0);
PPC_FUNC_IMPL(__imp__sub_822460B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822460B8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8223d300
	ctx.lr = 0x822460D4;
	sub_8223D300(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// addi r9,r11,2604
	ctx.r9.s64 = ctx.r11.s64 + 2604;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822460FC"))) PPC_WEAK_FUNC(sub_822460FC);
PPC_FUNC_IMPL(__imp__sub_822460FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246100"))) PPC_WEAK_FUNC(sub_82246100);
PPC_FUNC_IMPL(__imp__sub_82246100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82246108;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8234a248
	ctx.lr = 0x82246114;
	sub_8234A248(ctx, base);
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82246134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82246150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82246168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82246170"))) PPC_WEAK_FUNC(sub_82246170);
PPC_FUNC_IMPL(__imp__sub_82246170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82246178;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8234a248
	ctx.lr = 0x82246184;
	sub_8234A248(ctx, base);
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822461A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822461C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822461D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822461E0"))) PPC_WEAK_FUNC(sub_822461E0);
PPC_FUNC_IMPL(__imp__sub_822461E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822461E8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8234a248
	ctx.lr = 0x822461F8;
	sub_8234A248(ctx, base);
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8224623c
	if (ctx.cr6.eq) goto loc_8224623C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224621C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224623c
	if (ctx.cr6.eq) goto loc_8224623C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82246238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8224623C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82245268
	ctx.lr = 0x82246248;
	sub_82245268(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224625C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r30,r3,180
	ctx.r30.s64 = ctx.r3.s64 * 180;
	// lwz r8,120(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82246278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,120(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82246294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x822462A0;
	sub_821847A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822462A8"))) PPC_WEAK_FUNC(sub_822462A8);
PPC_FUNC_IMPL(__imp__sub_822462A8) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,2604
	ctx.r10.s64 = ctx.r11.s64 + 2604;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x822462f0
	if (ctx.cr6.eq) goto loc_822462F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822462F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822462F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x8223d350
	ctx.lr = 0x82246300;
	sub_8223D350(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8224631c
	if (ctx.cr6.eq) goto loc_8224631C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82246318;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8224631C:
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

__attribute__((alias("__imp__sub_82246334"))) PPC_WEAK_FUNC(sub_82246334);
PPC_FUNC_IMPL(__imp__sub_82246334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246338"))) PPC_WEAK_FUNC(sub_82246338);
PPC_FUNC_IMPL(__imp__sub_82246338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82246340;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246370
	if (ctx.cr6.eq) goto loc_82246370;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82246370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82246370:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82182e90
	ctx.lr = 0x8224637C;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82246384;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82246390;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82246394;
	sub_82183850(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x822463A0;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x822463A8;
	sub_821830F8(ctx, base);
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82183850
	ctx.lr = 0x822463B0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x822463c8
	if (ctx.cr6.eq) goto loc_822463C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x822463C4;
	sub_82183448(ctx, base);
	// b 0x822463d4
	goto loc_822463D4;
loc_822463C8:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x822463D4;
	sub_821845A0(ctx, base);
loc_822463D4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x822463ec
	if (ctx.cr6.lt) goto loc_822463EC;
	// bne cr6,0x822463f4
	if (!ctx.cr6.eq) goto loc_822463F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822463f0
	goto loc_822463F0;
loc_822463EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822463F0:
	// bl 0x821830f8
	ctx.lr = 0x822463F4;
	sub_821830F8(ctx, base);
loc_822463F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x822463FC;
	sub_821837D0(ctx, base);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223d548
	ctx.lr = 0x82246414;
	sub_8223D548(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8224642c
	if (ctx.cr6.eq) goto loc_8224642C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8224642C;
	sub_82183E40(ctx, base);
loc_8224642C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82246434"))) PPC_WEAK_FUNC(sub_82246434);
PPC_FUNC_IMPL(__imp__sub_82246434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246438"))) PPC_WEAK_FUNC(sub_82246438);
PPC_FUNC_IMPL(__imp__sub_82246438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8224644C:
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8224644c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224644C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82246460"))) PPC_WEAK_FUNC(sub_82246460);
PPC_FUNC_IMPL(__imp__sub_82246460) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82246494
	if (!ctx.cr6.eq) goto loc_82246494;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwzx r3,r5,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// blr 
	return;
loc_82246494:
	// addi r10,r4,5
	ctx.r10.s64 = ctx.r4.s64 + 5;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822464C0"))) PPC_WEAK_FUNC(sub_822464C0);
PPC_FUNC_IMPL(__imp__sub_822464C0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x822464ec
	if (!ctx.cr6.eq) goto loc_822464EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// blr 
	return;
loc_822464EC:
	// addi r10,r4,5
	ctx.r10.s64 = ctx.r4.s64 + 5;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82246510"))) PPC_WEAK_FUNC(sub_82246510);
PPC_FUNC_IMPL(__imp__sub_82246510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82246518;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82246540
	if (!ctx.cr6.gt) goto loc_82246540;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82246540:
	// bl 0x82183850
	ctx.lr = 0x82246544;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8224655c
	if (ctx.cr6.eq) goto loc_8224655C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x82246558;
	sub_82183448(ctx, base);
	// b 0x82246568
	goto loc_82246568;
loc_8224655C:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82246568;
	sub_821845A0(ctx, base);
loc_82246568:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x8224657c
	if (ctx.cr6.gt) goto loc_8224657C;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8224657C:
	// bl 0x82183850
	ctx.lr = 0x82246580;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82246598
	if (ctx.cr6.eq) goto loc_82246598;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82246594;
	sub_82183448(ctx, base);
	// b 0x822465a4
	goto loc_822465A4;
loc_82246598:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x822465A4;
	sub_821845A0(ctx, base);
loc_822465A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822465e8
	if (!ctx.cr6.gt) goto loc_822465E8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_822465C4:
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r8,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stwx r9,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x822465c4
	if (ctx.cr6.lt) goto loc_822465C4;
loc_822465E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822465F0"))) PPC_WEAK_FUNC(sub_822465F0);
PPC_FUNC_IMPL(__imp__sub_822465F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822465F8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82246698
	if (!ctx.cr6.gt) goto loc_82246698;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82246618:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82246684
	if (ctx.cr6.eq) goto loc_82246684;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82246684
	if (ctx.cr6.eq) goto loc_82246684;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224664C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8224667c
	if (ctx.cr6.eq) goto loc_8224667C;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224667c
	if (ctx.cr6.eq) goto loc_8224667C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224667C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224667C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
loc_82246684:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82246618
	if (ctx.cr6.lt) goto loc_82246618;
loc_82246698:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822466ac
	if (ctx.cr6.eq) goto loc_822466AC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x822466AC;
	sub_82183E40(ctx, base);
loc_822466AC:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822466c4
	if (ctx.cr6.eq) goto loc_822466C4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x822466C4;
	sub_82183E40(ctx, base);
loc_822466C4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822466E4"))) PPC_WEAK_FUNC(sub_822466E4);
PPC_FUNC_IMPL(__imp__sub_822466E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822466E8"))) PPC_WEAK_FUNC(sub_822466E8);
PPC_FUNC_IMPL(__imp__sub_822466E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x822466F0;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82246720
	if (!ctx.cr6.eq) goto loc_82246720;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
loc_82246720:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82246758
	if (!ctx.cr6.gt) goto loc_82246758;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82246738:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82246758
	if (ctx.cr6.eq) goto loc_82246758;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82246738
	if (ctx.cr6.lt) goto loc_82246738;
loc_82246758:
	// bl 0x82183078
	ctx.lr = 0x8224675C;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82246768;
	sub_821837D0(ctx, base);
	// bl 0x821b1108
	ctx.lr = 0x8224676C;
	sub_821B1108(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821b10f8
	ctx.lr = 0x82246778;
	sub_821B10F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// blt cr6,0x822467d0
	if (ctx.cr6.lt) goto loc_822467D0;
	// bne cr6,0x82246830
	if (!ctx.cr6.eq) goto loc_82246830;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821d2978
	ctx.lr = 0x822467B0;
	sub_821D2978(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x82246828
	goto loc_82246828;
loc_822467D0:
	// bl 0x82183850
	ctx.lr = 0x822467D4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x822467ec
	if (ctx.cr6.eq) goto loc_822467EC;
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82183448
	ctx.lr = 0x822467E8;
	sub_82183448(ctx, base);
	// b 0x822467f4
	goto loc_822467F4;
loc_822467EC:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821845a0
	ctx.lr = 0x822467F4;
	sub_821845A0(ctx, base);
loc_822467F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246804
	if (ctx.cr6.eq) goto loc_82246804;
	// bl 0x822482c8
	ctx.lr = 0x82246800;
	sub_822482C8(ctx, base);
	// b 0x82246808
	goto loc_82246808;
loc_82246804:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246808:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82246828:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x82246830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82246830:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821b10f8
	ctx.lr = 0x82246838;
	sub_821B10F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82246840;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82246848"))) PPC_WEAK_FUNC(sub_82246848);
PPC_FUNC_IMPL(__imp__sub_82246848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82246850;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r10,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,3276
	ctx.r9.s64 = 214695936;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// ori r8,r9,52428
	ctx.r8.u64 = ctx.r9.u64 | 52428;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stwx r5,r26,r3
	PPC_STORE_U32(ctx.r26.u32 + ctx.r3.u32, ctx.r5.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stwx r6,r25,r3
	PPC_STORE_U32(ctx.r25.u32 + ctx.r3.u32, ctx.r6.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x822468a0
	if (ctx.cr6.gt) goto loc_822468A0;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x822468a4
	goto loc_822468A4;
loc_822468A0:
	// li r28,-1
	ctx.r28.s64 = -1;
loc_822468A4:
	// bl 0x82183850
	ctx.lr = 0x822468A8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x822468c0
	if (ctx.cr6.eq) goto loc_822468C0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183448
	ctx.lr = 0x822468BC;
	sub_82183448(ctx, base);
	// b 0x822468cc
	goto loc_822468CC;
loc_822468C0:
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x822468CC;
	sub_821845A0(ctx, base);
loc_822468CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246914
	if (ctx.cr6.eq) goto loc_82246914;
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// blt 0x8224690c
	if (ctx.cr0.lt) goto loc_8224690C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,2
	ctx.r9.s64 = 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_822468F4:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stwu r31,20(r11)
	ea = 20 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822468f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822468F4;
loc_8224690C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8224691c
	goto loc_8224691C;
loc_82246914:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8224691C:
	// addi r10,r27,5
	ctx.r10.s64 = ctx.r27.s64 + 5;
	// lwzx r9,r26,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stwx r11,r27,r29
	PPC_STORE_U32(ctx.r27.u32 + ctx.r29.u32, ctx.r11.u32);
	// ble cr6,0x8224695c
	if (!ctx.cr6.gt) goto loc_8224695C;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82246938:
	// lwzx r11,r27,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// lwzx r4,r25,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r29.u32);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82246510
	ctx.lr = 0x82246948;
	sub_82246510(ctx, base);
	// lwzx r11,r26,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82246938
	if (ctx.cr6.lt) goto loc_82246938;
loc_8224695C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822469a4
	if (ctx.cr6.eq) goto loc_822469A4;
	// addi r31,r24,-4
	ctx.r31.s64 = ctx.r24.s64 + -4;
loc_82246968:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r27,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzu r9,28(r31)
	ea = 28 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822466e8
	ctx.lr = 0x8224699C;
	sub_822466E8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82246968
	if (!ctx.cr0.eq) goto loc_82246968;
loc_822469A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_822469AC"))) PPC_WEAK_FUNC(sub_822469AC);
PPC_FUNC_IMPL(__imp__sub_822469AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822469B0"))) PPC_WEAK_FUNC(sub_822469B0);
PPC_FUNC_IMPL(__imp__sub_822469B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x822469B8;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,5
	ctx.r11.s64 = ctx.r4.s64 + 5;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r23,r11,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwzx r10,r23,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82246b14
	if (ctx.cr6.eq) goto loc_82246B14;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// lwzx r10,r24,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82246aec
	if (!ctx.cr6.gt) goto loc_82246AEC;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// li r21,2
	ctx.r21.s64 = 2;
	// li r22,-1
	ctx.r22.s64 = -1;
loc_82246A00:
	// lwzx r11,r23,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r27.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82246a9c
	if (!ctx.cr6.gt) goto loc_82246A9C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82246A1C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82246a88
	if (ctx.cr6.eq) goto loc_82246A88;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82246a88
	if (ctx.cr6.eq) goto loc_82246A88;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82246A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82246a80
	if (ctx.cr6.eq) goto loc_82246A80;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246a80
	if (ctx.cr6.eq) goto loc_82246A80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82246A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82246A80:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r29,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u32);
loc_82246A88:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82246a1c
	if (ctx.cr6.lt) goto loc_82246A1C;
loc_82246A9C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246ab0
	if (ctx.cr6.eq) goto loc_82246AB0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82246AB0;
	sub_82183E40(ctx, base);
loc_82246AB0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246ac8
	if (ctx.cr6.eq) goto loc_82246AC8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82246AC8;
	sub_82183E40(ctx, base);
loc_82246AC8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// addi r26,r26,20
	ctx.r26.s64 = ctx.r26.s64 + 20;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwzx r11,r24,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r27.u32);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82246a00
	if (ctx.cr6.lt) goto loc_82246A00;
loc_82246AEC:
	// addi r11,r20,3
	ctx.r11.s64 = ctx.r20.s64 + 3;
	// lwzx r3,r23,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r27.u32);
	// stwx r29,r24,r27
	PPC_STORE_U32(ctx.r24.u32 + ctx.r27.u32, ctx.r29.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r29,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r29.u32);
	// beq cr6,0x82246b10
	if (ctx.cr6.eq) goto loc_82246B10;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82246B10;
	sub_82183E40(ctx, base);
loc_82246B10:
	// stwx r29,r23,r27
	PPC_STORE_U32(ctx.r23.u32 + ctx.r27.u32, ctx.r29.u32);
loc_82246B14:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_82246B1C"))) PPC_WEAK_FUNC(sub_82246B1C);
PPC_FUNC_IMPL(__imp__sub_82246B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246B20"))) PPC_WEAK_FUNC(sub_82246B20);
PPC_FUNC_IMPL(__imp__sub_82246B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82246B28;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r7,r4,5
	ctx.r7.s64 = ctx.r4.s64 + 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r7,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 + ctx.r11.u64;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r11,r9,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// std r4,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r4.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r8.u64);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x821a18e8
	ctx.lr = 0x82246B90;
	sub_821A18E8(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stwx r10,r8,r28
	PPC_STORE_U32(ctx.r8.u32 + ctx.r28.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82246BAC"))) PPC_WEAK_FUNC(sub_82246BAC);
PPC_FUNC_IMPL(__imp__sub_82246BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246BB0"))) PPC_WEAK_FUNC(sub_82246BB0);
PPC_FUNC_IMPL(__imp__sub_82246BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82246BB8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82246BC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246c28
	if (ctx.cr6.eq) goto loc_82246C28;
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82246c08
	if (!ctx.cr6.gt) goto loc_82246C08;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82246BE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822465f0
	ctx.lr = 0x82246BF4;
	sub_822465F0(ctx, base);
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82246be8
	if (ctx.cr6.lt) goto loc_82246BE8;
loc_82246C08:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r28.u32);
	// beq cr6,0x82246c24
	if (ctx.cr6.eq) goto loc_82246C24;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82246C24;
	sub_82183E40(ctx, base);
loc_82246C24:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82246C28:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82246bc8
	if (!ctx.cr0.eq) goto loc_82246BC8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82246C3C"))) PPC_WEAK_FUNC(sub_82246C3C);
PPC_FUNC_IMPL(__imp__sub_82246C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246C40"))) PPC_WEAK_FUNC(sub_82246C40);
PPC_FUNC_IMPL(__imp__sub_82246C40) {
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
	// bl 0x8218b1e8
	ctx.lr = 0x82246C5C;
	sub_8218B1E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r11,2960
	ctx.r9.s64 = ctx.r11.s64 + 2960;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r31,-444(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -444);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82246c98
	if (ctx.cr6.eq) goto loc_82246C98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821614f8
	ctx.lr = 0x82246C80;
	sub_821614F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82160fa0
	ctx.lr = 0x82246C8C;
	sub_82160FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82161010
	ctx.lr = 0x82246C98;
	sub_82161010(ctx, base);
loc_82246C98:
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

__attribute__((alias("__imp__sub_82246CB4"))) PPC_WEAK_FUNC(sub_82246CB4);
PPC_FUNC_IMPL(__imp__sub_82246CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246CB8"))) PPC_WEAK_FUNC(sub_82246CB8);
PPC_FUNC_IMPL(__imp__sub_82246CB8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r11,2960
	ctx.r9.s64 = ctx.r11.s64 + 2960;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r31,-444(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -444);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82246d0c
	if (ctx.cr6.eq) goto loc_82246D0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821614f8
	ctx.lr = 0x82246CF4;
	sub_821614F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82160fa0
	ctx.lr = 0x82246D00;
	sub_82160FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82161010
	ctx.lr = 0x82246D0C;
	sub_82161010(ctx, base);
loc_82246D0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218b208
	ctx.lr = 0x82246D14;
	sub_8218B208(ctx, base);
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

__attribute__((alias("__imp__sub_82246D2C"))) PPC_WEAK_FUNC(sub_82246D2C);
PPC_FUNC_IMPL(__imp__sub_82246D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246D30"))) PPC_WEAK_FUNC(sub_82246D30);
PPC_FUNC_IMPL(__imp__sub_82246D30) {
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
	// bl 0x82246cb8
	ctx.lr = 0x82246D50;
	sub_82246CB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246d6c
	if (ctx.cr6.eq) goto loc_82246D6C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82246D68;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82246D6C:
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

__attribute__((alias("__imp__sub_82246D84"))) PPC_WEAK_FUNC(sub_82246D84);
PPC_FUNC_IMPL(__imp__sub_82246D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246D88"))) PPC_WEAK_FUNC(sub_82246D88);
PPC_FUNC_IMPL(__imp__sub_82246D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82246D90;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82182e90
	ctx.lr = 0x82246DA0;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82246DA8;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82246DB4;
	sub_821837D0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x82246DC8;
	sub_8218AA18(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,-444(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -444);
	// bl 0x8218a810
	ctx.lr = 0x82246DDC;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82246df8
	if (ctx.cr6.eq) goto loc_82246DF8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x82246DF0;
	sub_8218AC78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82246dfc
	goto loc_82246DFC;
loc_82246DF8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82246DFC:
	// bl 0x82183850
	ctx.lr = 0x82246E00;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82246e18
	if (ctx.cr6.eq) goto loc_82246E18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82246E14;
	sub_82183448(ctx, base);
	// b 0x82246e24
	goto loc_82246E24;
loc_82246E18:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82246E24;
	sub_821845A0(ctx, base);
loc_82246E24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x82246E30;
	sub_822AA648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82246E3C;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82246e58
	if (ctx.cr6.eq) goto loc_82246E58;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ad90
	ctx.lr = 0x82246E58;
	sub_8218AD90(ctx, base);
loc_82246E58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f07a0
	ctx.lr = 0x82246E60;
	sub_820F07A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821611d0
	ctx.lr = 0x82246E6C;
	sub_821611D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82160fa0
	ctx.lr = 0x82246E78;
	sub_82160FA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82161010
	ctx.lr = 0x82246E84;
	sub_82161010(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x82246E8C;
	sub_8218A7F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82246E94;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82246EA0"))) PPC_WEAK_FUNC(sub_82246EA0);
PPC_FUNC_IMPL(__imp__sub_82246EA0) {
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
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,3140
	ctx.r10.s64 = ctx.r11.s64 + 3140;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82246ee0
	if (ctx.cr6.eq) goto loc_82246EE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82246EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82246EE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x824054f8
	ctx.lr = 0x82246EF0;
	sub_824054F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x82246EF8;
	sub_821857F0(ctx, base);
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

__attribute__((alias("__imp__sub_82246F0C"))) PPC_WEAK_FUNC(sub_82246F0C);
PPC_FUNC_IMPL(__imp__sub_82246F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246F10"))) PPC_WEAK_FUNC(sub_82246F10);
PPC_FUNC_IMPL(__imp__sub_82246F10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_82246F30"))) PPC_WEAK_FUNC(sub_82246F30);
PPC_FUNC_IMPL(__imp__sub_82246F30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82246F34"))) PPC_WEAK_FUNC(sub_82246F34);
PPC_FUNC_IMPL(__imp__sub_82246F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246F38"))) PPC_WEAK_FUNC(sub_82246F38);
PPC_FUNC_IMPL(__imp__sub_82246F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82246F58"))) PPC_WEAK_FUNC(sub_82246F58);
PPC_FUNC_IMPL(__imp__sub_82246F58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82246F5C"))) PPC_WEAK_FUNC(sub_82246F5C);
PPC_FUNC_IMPL(__imp__sub_82246F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82246F60"))) PPC_WEAK_FUNC(sub_82246F60);
PPC_FUNC_IMPL(__imp__sub_82246F60) {
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
	// ori r4,r4,21872
	ctx.r4.u64 = ctx.r4.u64 | 21872;
	// bl 0x821882d0
	ctx.lr = 0x82246F78;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82246f94
	if (ctx.cr6.eq) goto loc_82246F94;
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
loc_82246F94:
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

__attribute__((alias("__imp__sub_82246FA8"))) PPC_WEAK_FUNC(sub_82246FA8);
PPC_FUNC_IMPL(__imp__sub_82246FA8) {
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
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,3140
	ctx.r10.s64 = ctx.r11.s64 + 3140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82246ff0
	if (ctx.cr6.eq) goto loc_82246FF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82246FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82246FF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x824054f8
	ctx.lr = 0x82247000;
	sub_824054F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x82247008;
	sub_821857F0(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82247024
	if (ctx.cr6.eq) goto loc_82247024;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82247020;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82247024:
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

__attribute__((alias("__imp__sub_8224703C"))) PPC_WEAK_FUNC(sub_8224703C);
PPC_FUNC_IMPL(__imp__sub_8224703C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247040"))) PPC_WEAK_FUNC(sub_82247040);
PPC_FUNC_IMPL(__imp__sub_82247040) {
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
	// bl 0x82249928
	ctx.lr = 0x82247054;
	sub_82249928(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// beq cr6,0x822471f8
	if (ctx.cr6.eq) goto loc_822471F8;
	// lfs f0,948(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 948);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,972(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 972);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,948(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 948, temp.u32);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822470a0
	if (ctx.cr6.gt) goto loc_822470A0;
	// lfs f13,960(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822470a8
	if (!ctx.cr6.lt) goto loc_822470A8;
loc_822470A0:
	// stfs f13,948(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 948, temp.u32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
loc_822470A8:
	// lfs f0,952(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// lfs f13,976(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 976);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,952(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 952, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822470cc
	if (ctx.cr6.gt) goto loc_822470CC;
	// lfs f13,964(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 964);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822470d4
	if (!ctx.cr6.lt) goto loc_822470D4;
loc_822470CC:
	// stfs f13,952(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 952, temp.u32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
loc_822470D4:
	// lfs f0,956(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// lfs f13,980(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,956(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 956, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822470f8
	if (ctx.cr6.gt) goto loc_822470F8;
	// lfs f13,968(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82247100
	if (!ctx.cr6.lt) goto loc_82247100;
loc_822470F8:
	// stfs f13,956(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 956, temp.u32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_82247100:
	// ld r10,928(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 928);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ld r8,936(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 936);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r31,928
	ctx.r11.s64 = ctx.r31.s64 + 928;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// bl 0x820804f8
	ctx.lr = 0x82247120;
	sub_820804F8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82187c70
	ctx.lr = 0x8224712C;
	sub_82187C70(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f30,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x82247150;
	sub_8208EA90(ctx, base);
	// ld r5,928(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 928);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ld r4,936(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 936);
	// lfs f0,912(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// std r5,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// stfs f9,912(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 912, temp.u32);
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// stfs f7,916(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 916, temp.u32);
	// stfs f6,920(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x8224719C;
	sub_820804F8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82187c70
	ctx.lr = 0x822471A8;
	sub_82187C70(ctx, base);
	// stfs f30,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x822471C4;
	sub_8208EA90(ctx, base);
	// lfs f5,912(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f2,f5
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f4
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fadds f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f0,912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 912, temp.u32);
	// stfs f12,916(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 916, temp.u32);
	// stfs f11,920(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// b 0x82247260
	goto loc_82247260;
loc_822471F8:
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f13,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f28,f13
	ctx.f10.f64 = double(float(ctx.f28.f64 + ctx.f13.f64));
	// fadds f9,f30,f12
	ctx.f9.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// stfs f10,68(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fadds f11,f29,f0
	ctx.f11.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// stfs f11,64(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// stfs f9,72(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f12,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
loc_82247238:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8224724c
	if (!ctx.cr6.lt) goto loc_8224724C;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82247258
	goto loc_82247258;
loc_8224724C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82247258
	if (!ctx.cr6.gt) goto loc_82247258;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82247258:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82247238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82247238;
loc_82247260:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82249974
	ctx.lr = 0x8224726C;
	sub_82249974(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8224727C"))) PPC_WEAK_FUNC(sub_8224727C);
PPC_FUNC_IMPL(__imp__sub_8224727C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247280"))) PPC_WEAK_FUNC(sub_82247280);
PPC_FUNC_IMPL(__imp__sub_82247280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f11,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f3,f11
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fadds f13,f2,f10
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// stfs f9,104(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f12,96(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f0,3316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,100(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x822472c0
	if (ctx.cr6.lt) goto loc_822472C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,3152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
loc_822472C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8964(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8964);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x822472e0
	if (ctx.cr6.gt) goto loc_822472E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,3148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
loc_822472E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,2136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82247300
	if (!ctx.cr6.lt) goto loc_82247300;
	// fadds f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
loc_82247300:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82247320"))) PPC_WEAK_FUNC(sub_82247320);
PPC_FUNC_IMPL(__imp__sub_82247320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f3,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f1,96(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f2,100(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,3316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82247348
	if (ctx.cr6.lt) goto loc_82247348;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,3152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
loc_82247348:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8964(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8964);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82247368
	if (ctx.cr6.gt) goto loc_82247368;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,3148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
loc_82247368:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x82247388
	if (!ctx.cr6.lt) goto loc_82247388;
	// fadds f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
loc_82247388:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,2140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2140);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822473A8"))) PPC_WEAK_FUNC(sub_822473A8);
PPC_FUNC_IMPL(__imp__sub_822473A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822473B0;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82244d00
	ctx.lr = 0x822473C4;
	sub_82244D00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// beq cr6,0x82247478
	if (ctx.cr6.eq) goto loc_82247478;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82247478
	if (ctx.cr6.eq) goto loc_82247478;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822473FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,1248
	ctx.r11.s64 = ctx.r30.s64 + 1248;
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r4,r4,21872
	ctx.r4.u64 = ctx.r4.u64 | 21872;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821882d0
	ctx.lr = 0x82247414;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82247424
	if (ctx.cr6.eq) goto loc_82247424;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82247428
	goto loc_82247428;
loc_82247424:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82247428:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82247438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,84(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,180(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	// lfs f0,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x8224746C;
	sub_82187400(ctx, base);
	// lfs f0,420(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82247478:
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,912(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 912, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,916(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 916, temp.u32);
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,920(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// lfs f10,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,96(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f9,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmr f2,f9
	ctx.f2.f64 = ctx.f9.f64;
	// stfs f9,100(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f8,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,104(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f7,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,960(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 960, temp.u32);
	// lfs f6,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,964(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// lfs f5,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,968(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// lfs f4,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,972(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// lfs f3,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,976(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// lfs f1,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,980(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// stfs f31,948(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 948, temp.u32);
	// stfs f31,952(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 952, temp.u32);
	// stfs f31,956(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 956, temp.u32);
	// stfs f0,916(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 916, temp.u32);
	// bl 0x82247320
	ctx.lr = 0x82247504;
	sub_82247320(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82247510"))) PPC_WEAK_FUNC(sub_82247510);
PPC_FUNC_IMPL(__imp__sub_82247510) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82247568
	if (ctx.cr6.eq) goto loc_82247568;
	// ld r11,912(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 912);
	// addi r10,r3,912
	ctx.r10.s64 = ctx.r3.s64 + 912;
	// ld r9,920(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 920);
	// ld r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 96);
	// ld r7,104(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 104);
	// std r11,784(r3)
	PPC_STORE_U64(ctx.r3.u32 + 784, ctx.r11.u64);
	// std r9,792(r3)
	PPC_STORE_U64(ctx.r3.u32 + 792, ctx.r9.u64);
	// std r8,800(r3)
	PPC_STORE_U64(ctx.r3.u32 + 800, ctx.r8.u64);
	// std r7,808(r3)
	PPC_STORE_U64(ctx.r3.u32 + 808, ctx.r7.u64);
	// b 0x822475c8
	goto loc_822475C8;
loc_82247568:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// ld r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// ld r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// lfs f11,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f0,f13,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f9,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f11,f9,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f8.f64));
	// lfs f5,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// std r10,800(r31)
	PPC_STORE_U64(ctx.r31.u32 + 800, ctx.r10.u64);
	// lfs f4,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// std r9,808(r31)
	PPC_STORE_U64(ctx.r31.u32 + 808, ctx.r9.u64);
	// fmadds f3,f7,f5,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f4.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,784(r31)
	PPC_STORE_U64(ctx.r31.u32 + 784, ctx.r8.u64);
	// std r7,792(r31)
	PPC_STORE_U64(ctx.r31.u32 + 792, ctx.r7.u64);
loc_822475C8:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822475DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// lwz r30,14520(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14520);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822476bc
	if (ctx.cr6.eq) goto loc_822476BC;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822476bc
	if (ctx.cr6.eq) goto loc_822476BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r30,80
	ctx.r6.s64 = ctx.r30.s64 + 80;
	// lfs f31,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lfs f30,11296(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11296);
	ctx.f30.f64 = double(temp.f32);
	// std r5,80(r30)
	PPC_STORE_U64(ctx.r30.u32 + 80, ctx.r5.u64);
	// lfs f29,11292(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11292);
	ctx.f29.f64 = double(temp.f32);
	// std r4,88(r30)
	PPC_STORE_U64(ctx.r30.u32 + 88, ctx.r4.u64);
	// bl 0x82244d00
	ctx.lr = 0x82247644;
	sub_82244D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82247694
	if (ctx.cr6.eq) goto loc_82247694;
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r31,368
	ctx.r4.s64 = ctx.r31.s64 + 368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x82247678;
	sub_8208EA90(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82247688
	if (!ctx.cr6.lt) goto loc_82247688;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_82247688:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82247694
	if (!ctx.cr6.gt) goto loc_82247694;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_82247694:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8056);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// stfs f0,132(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// stfs f13,136(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 136, temp.u32);
	// lfs f12,640(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
loc_822476BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
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

__attribute__((alias("__imp__sub_822476E0"))) PPC_WEAK_FUNC(sub_822476E0);
PPC_FUNC_IMPL(__imp__sub_822476E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822476E8;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82244d00
	ctx.lr = 0x822476FC;
	sub_82244D00(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f9,48(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f7,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f6,52(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f4,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// stfs f3,56(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f2,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,64(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f1,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,68(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// std r9,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r9.u64);
	// ld r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// std r8,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r8.u64);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82247828
	if (ctx.cr6.eq) goto loc_82247828;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82247828
	if (ctx.cr6.eq) goto loc_82247828;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822477A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r29,1248
	ctx.r28.s64 = ctx.r29.s64 + 1248;
	// lis r4,19823
	ctx.r4.s64 = 1299120128;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r4,r4,21872
	ctx.r4.u64 = ctx.r4.u64 | 21872;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821882d0
	ctx.lr = 0x822477BC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822477e8
	if (ctx.cr6.eq) goto loc_822477E8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822477e8
	if (ctx.cr6.eq) goto loc_822477E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82246f60
	ctx.lr = 0x822477D8;
	sub_82246F60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822477E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822477E8:
	// lwz r10,84(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r27,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// lfs f0,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x8224781C;
	sub_82187400(ctx, base);
	// lfs f0,420(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82247828:
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f3,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82247320
	ctx.lr = 0x82247848;
	sub_82247320(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82247854"))) PPC_WEAK_FUNC(sub_82247854);
PPC_FUNC_IMPL(__imp__sub_82247854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247858"))) PPC_WEAK_FUNC(sub_82247858);
PPC_FUNC_IMPL(__imp__sub_82247858) {
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
	ctx.lr = 0x8224786C;
	sub_82249920(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,900(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f28,8616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8616);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x82247894
	if (ctx.cr6.eq) goto loc_82247894;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,9052(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9052);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82247898
	goto loc_82247898;
loc_82247894:
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
loc_82247898:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822478ac
	if (ctx.cr6.eq) goto loc_822478AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9048);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822478b4
	goto loc_822478B4;
loc_822478AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11484);
	ctx.f0.f64 = double(temp.f32);
loc_822478B4:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lfs f26,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f26.f64 = double(temp.f32);
	// fmr f27,f26
	ctx.f27.f64 = ctx.f26.f64;
	// rlwinm r8,r11,0,20,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// fmr f29,f26
	ctx.f29.f64 = ctx.f26.f64;
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82247928
	if (ctx.cr6.eq) goto loc_82247928;
	// rlwinm r9,r11,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822478ec
	if (ctx.cr6.eq) goto loc_822478EC;
	// fneg f29,f0
	ctx.f29.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_822478EC:
	// rlwinm r9,r11,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822478fc
	if (ctx.cr6.eq) goto loc_822478FC;
	// fadds f29,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
loc_822478FC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82247a40
	if (!ctx.cr6.eq) goto loc_82247A40;
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82247914
	if (ctx.cr6.eq) goto loc_82247914;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_82247914:
	// rlwinm r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247a40
	if (ctx.cr6.eq) goto loc_82247A40;
	// fsubs f30,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// b 0x82247a40
	goto loc_82247A40;
loc_82247928:
	// bl 0x82244d00
	ctx.lr = 0x8224792C;
	sub_82244D00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82247a40
	if (ctx.cr6.eq) goto loc_82247A40;
	// lwz r10,900(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822479c8
	if (ctx.cr6.eq) goto loc_822479C8;
	// ld r10,416(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 416);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ld r8,424(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 424);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f0,912(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r11,416
	ctx.r5.s64 = ctx.r11.s64 + 416;
	// lfs f13,916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f12,920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// bl 0x820a42e0
	ctx.lr = 0x822479AC;
	sub_820A42E0(ctx, base);
	// lfs f5,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f5,f31
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f4,f31
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f12,f3,f31
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// b 0x822479d4
	goto loc_822479D4;
loc_822479C8:
	// fmr f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f26.f64;
	// fmr f13,f26
	ctx.f13.f64 = ctx.f26.f64;
	// fmr f12,f28
	ctx.f12.f64 = ctx.f28.f64;
loc_822479D4:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82247a14
	if (ctx.cr6.eq) goto loc_82247A14;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f10,956(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-13416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13416);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x82247a14
	if (!ctx.cr6.gt) goto loc_82247A14;
	// fneg f30,f0
	ctx.f30.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f29,f13
	ctx.f29.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f27,f12
	ctx.f27.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_82247A14:
	// rlwinm r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247a40
	if (ctx.cr6.eq) goto loc_82247A40;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,956(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,10184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10184);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82247a40
	if (!ctx.cr6.lt) goto loc_82247A40;
	// fadds f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fadds f29,f13,f29
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// fadds f27,f27,f12
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f12.f64));
loc_82247A40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82247040
	ctx.lr = 0x82247A54;
	sub_82247040(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82247aa8
	if (!ctx.cr6.eq) goto loc_82247AA8;
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f26.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82247a80
	if (ctx.cr6.eq) goto loc_82247A80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f2,3164(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3164);
	ctx.f2.f64 = double(temp.f32);
loc_82247A80:
	// rlwinm r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247a98
	if (ctx.cr6.eq) goto loc_82247A98;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,3160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3160);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
loc_82247A98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f26
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f26.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82247280
	ctx.lr = 0x82247AA8;
	sub_82247280(ctx, base);
loc_82247AA8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8224996c
	ctx.lr = 0x82247AB4;
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

__attribute__((alias("__imp__sub_82247AC4"))) PPC_WEAK_FUNC(sub_82247AC4);
PPC_FUNC_IMPL(__imp__sub_82247AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247AC8"))) PPC_WEAK_FUNC(sub_82247AC8);
PPC_FUNC_IMPL(__imp__sub_82247AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r4,896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 896, ctx.r4.u32);
	// addi r10,r11,-7560
	ctx.r10.s64 = ctx.r11.s64 + -7560;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82247af4
	if (!ctx.cr6.eq) goto loc_82247AF4;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mulli r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 * 52;
	// addi r11,r11,13160
	ctx.r11.s64 = ctx.r11.s64 + 13160;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822473a8
	sub_822473A8(ctx, base);
	return;
loc_82247AF4:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// mulli r11,r4,52
	ctx.r11.s64 = ctx.r4.s64 * 52;
	// addi r10,r10,13000
	ctx.r10.s64 = ctx.r10.s64 + 13000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822473a8
	sub_822473A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82247B08"))) PPC_WEAK_FUNC(sub_82247B08);
PPC_FUNC_IMPL(__imp__sub_82247B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82247B10;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x82247B24;
	sub_82185740(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,3140
	ctx.r10.s64 = ctx.r11.s64 + 3140;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82405798
	ctx.lr = 0x82247B48;
	sub_82405798(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r29,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r29.u32);
	// stw r29,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r29.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,944(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 944, temp.u32);
	// stfs f0,948(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 948, temp.u32);
	// stfs f0,952(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 952, temp.u32);
	// stfs f0,956(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 956, temp.u32);
	// stfs f0,960(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 960, temp.u32);
	// stfs f0,964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// stfs f0,968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// stfs f0,972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// stfs f0,976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 976, temp.u32);
	// stfs f0,980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,920(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// stfs f0,916(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 916, temp.u32);
	// stfs f0,912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 912, temp.u32);
	// stfs f13,924(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
	// stfs f0,936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 936, temp.u32);
	// stfs f0,932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 932, temp.u32);
	// stfs f0,928(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// stfs f13,940(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 940, temp.u32);
	// lfs f1,11948(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11948);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a9678
	ctx.lr = 0x82247BF8;
	sub_821A9678(ctx, base);
	// lis r6,-32178
	ctx.r6.s64 = -2108817408;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r5,r6,-7560
	ctx.r5.s64 = ctx.r6.s64 + -7560;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// bne cr6,0x82247c1c
	if (!ctx.cr6.eq) goto loc_82247C1C;
	// addi r4,r11,12792
	ctx.r4.s64 = ctx.r11.s64 + 12792;
	// b 0x82247c24
	goto loc_82247C24;
loc_82247C1C:
	// addi r11,r11,12792
	ctx.r11.s64 = ctx.r11.s64 + 12792;
	// addi r4,r11,104
	ctx.r4.s64 = ctx.r11.s64 + 104;
loc_82247C24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822476e0
	ctx.lr = 0x82247C2C;
	sub_822476E0(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x82247C30;
	sub_8215BD08(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82183850
	ctx.lr = 0x82247C38;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82247c50
	if (ctx.cr6.eq) goto loc_82247C50;
	// li r3,228
	ctx.r3.s64 = 228;
	// bl 0x82183448
	ctx.lr = 0x82247C4C;
	sub_82183448(ctx, base);
	// b 0x82247c58
	goto loc_82247C58;
loc_82247C50:
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x821845a0
	ctx.lr = 0x82247C58;
	sub_821845A0(ctx, base);
loc_82247C58:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82247c70
	if (ctx.cr6.eq) goto loc_82247C70;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823c58b0
	ctx.lr = 0x82247C6C;
	sub_823C58B0(ctx, base);
	// b 0x82247c74
	goto loc_82247C74;
loc_82247C70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82247C74:
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82247C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,60(r9)
	PPC_STORE_U32(ctx.r9.u32 + 60, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82247C9C"))) PPC_WEAK_FUNC(sub_82247C9C);
PPC_FUNC_IMPL(__imp__sub_82247C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247CA0"))) PPC_WEAK_FUNC(sub_82247CA0);
PPC_FUNC_IMPL(__imp__sub_82247CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82247CA8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82247CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// clrlwi r9,r27,16
	ctx.r9.u64 = ctx.r27.u32 & 0xFFFF;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// clrlwi r8,r26,16
	ctx.r8.u64 = ctx.r26.u32 & 0xFFFF;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r9,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r9.u16);
	// li r7,256
	ctx.r7.s64 = 256;
	// sth r8,94(r31)
	PPC_STORE_U16(ctx.r31.u32 + 94, ctx.r8.u16);
	// li r6,32
	ctx.r6.s64 = 32;
	// stb r10,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r10.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r10,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r10.u8);
	// sth r11,83(r31)
	PPC_STORE_U16(ctx.r31.u32 + 83, ctx.r11.u16);
	// sth r7,85(r31)
	PPC_STORE_U16(ctx.r31.u32 + 85, ctx.r7.u16);
	// stb r6,87(r31)
	PPC_STORE_U8(ctx.r31.u32 + 87, ctx.r6.u8);
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
	// sth r11,90(r31)
	PPC_STORE_U16(ctx.r31.u32 + 90, ctx.r11.u16);
	// stb r5,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r5.u8);
	// stb r11,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r11.u8);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// stw r25,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82247D4C"))) PPC_WEAK_FUNC(sub_82247D4C);
PPC_FUNC_IMPL(__imp__sub_82247D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247D50"))) PPC_WEAK_FUNC(sub_82247D50);
PPC_FUNC_IMPL(__imp__sub_82247D50) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82247D68"))) PPC_WEAK_FUNC(sub_82247D68);
PPC_FUNC_IMPL(__imp__sub_82247D68) {
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
	// bl 0x821a14a8
	ctx.lr = 0x82247D80;
	sub_821A14A8(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
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

__attribute__((alias("__imp__sub_82247D98"))) PPC_WEAK_FUNC(sub_82247D98);
PPC_FUNC_IMPL(__imp__sub_82247D98) {
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
	// bl 0x821a14c0
	ctx.lr = 0x82247DB0;
	sub_821A14C0(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
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

__attribute__((alias("__imp__sub_82247DC8"))) PPC_WEAK_FUNC(sub_82247DC8);
PPC_FUNC_IMPL(__imp__sub_82247DC8) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82247e20
	if (ctx.cr6.eq) goto loc_82247E20;
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82247e04
	if (ctx.cr6.eq) goto loc_82247E04;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82247E04;
	sub_82183E40(ctx, base);
loc_82247E04:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82247e1c
	if (ctx.cr6.eq) goto loc_82247E1C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82247E1C;
	sub_82183E40(ctx, base);
loc_82247E1C:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
loc_82247E20:
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82247E4C"))) PPC_WEAK_FUNC(sub_82247E4C);
PPC_FUNC_IMPL(__imp__sub_82247E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82247E50"))) PPC_WEAK_FUNC(sub_82247E50);
PPC_FUNC_IMPL(__imp__sub_82247E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r11,17(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// rlwinm r9,r11,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x82247e74
	if (!ctx.cr6.eq) goto loc_82247E74;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82247f40
	if (ctx.cr6.eq) goto loc_82247F40;
loc_82247E74:
	// subfic r10,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r9.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r11.s64;
	// rlwinm r10,r8,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r6,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x82247eb0
	if (ctx.cr6.eq) goto loc_82247EB0;
	// lhz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// lhz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// b 0x82247eb4
	goto loc_82247EB4;
loc_82247EB0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82247EB4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82247ec8
	if (ctx.cr6.eq) goto loc_82247EC8;
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82247ecc
	goto loc_82247ECC;
loc_82247EC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82247ECC:
	// lhz r9,14(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82247f40
	if (ctx.cr6.eq) goto loc_82247F40;
	// lhz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
loc_82247EF0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82247f24
	if (!ctx.cr6.gt) goto loc_82247F24;
loc_82247F00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r3,1(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// stbu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r8.u32 = ea;
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lhz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82247f00
	if (ctx.cr6.lt) goto loc_82247F00;
loc_82247F24:
	// lhz r10,14(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// mullw r11,r9,r31
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r3,r10,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82247ef0
	if (ctx.cr6.lt) goto loc_82247EF0;
loc_82247F40:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82247F48"))) PPC_WEAK_FUNC(sub_82247F48);
PPC_FUNC_IMPL(__imp__sub_82247F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r11,17(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// rlwinm r9,r11,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x82247f70
	if (!ctx.cr6.eq) goto loc_82247F70;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82248048
	if (ctx.cr6.eq) goto loc_82248048;
loc_82247F70:
	// subfic r10,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r9.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r11.s64;
	// rlwinm r10,r8,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r6,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x82247fac
	if (ctx.cr6.eq) goto loc_82247FAC;
	// lhz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// lhz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// b 0x82247fb0
	goto loc_82247FB0;
loc_82247FAC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82247FB0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82247fc4
	if (ctx.cr6.eq) goto loc_82247FC4;
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82247fc8
	goto loc_82247FC8;
loc_82247FC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82247FC8:
	// lhz r9,14(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82248048
	if (ctx.cr6.eq) goto loc_82248048;
	// lhz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// addi r8,r3,-4
	ctx.r8.s64 = ctx.r3.s64 + -4;
loc_82247FF0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82248028
	if (!ctx.cr6.gt) goto loc_82248028;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82248004:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82248004
	if (ctx.cr6.lt) goto loc_82248004;
loc_82248028:
	// lhz r10,14(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// mullw r7,r9,r31
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// rlwinm r3,r10,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82247ff0
	if (ctx.cr6.lt) goto loc_82247FF0;
loc_82248048:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82248054"))) PPC_WEAK_FUNC(sub_82248054);
PPC_FUNC_IMPL(__imp__sub_82248054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82248058"))) PPC_WEAK_FUNC(sub_82248058);
PPC_FUNC_IMPL(__imp__sub_82248058) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82248060"))) PPC_WEAK_FUNC(sub_82248060);
PPC_FUNC_IMPL(__imp__sub_82248060) {
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
	// bl 0x821a14e8
	ctx.lr = 0x82248078;
	sub_821A14E8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,3168
	ctx.r9.s64 = ctx.r10.s64 + 3168;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// stb r8,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r8.u8);
	// sth r11,83(r31)
	PPC_STORE_U16(ctx.r31.u32 + 83, ctx.r11.u16);
	// sth r11,85(r31)
	PPC_STORE_U16(ctx.r31.u32 + 85, ctx.r11.u16);
	// stb r11,87(r31)
	PPC_STORE_U8(ctx.r31.u32 + 87, ctx.r11.u8);
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
	// sth r11,90(r31)
	PPC_STORE_U16(ctx.r31.u32 + 90, ctx.r11.u16);
	// sth r11,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r11.u16);
	// sth r11,94(r31)
	PPC_STORE_U16(ctx.r31.u32 + 94, ctx.r11.u16);
	// stb r7,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r7.u8);
	// stb r11,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r11.u8);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822480E8"))) PPC_WEAK_FUNC(sub_822480E8);
PPC_FUNC_IMPL(__imp__sub_822480E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822480F0;
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
	// bl 0x821a14e8
	ctx.lr = 0x82248104;
	sub_821A14E8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,3168
	ctx.r9.s64 = ctx.r10.s64 + 3168;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// stb r8,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r8.u8);
	// sth r11,83(r31)
	PPC_STORE_U16(ctx.r31.u32 + 83, ctx.r11.u16);
	// sth r11,85(r31)
	PPC_STORE_U16(ctx.r31.u32 + 85, ctx.r11.u16);
	// stb r11,87(r31)
	PPC_STORE_U8(ctx.r31.u32 + 87, ctx.r11.u8);
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
	// sth r11,90(r31)
	PPC_STORE_U16(ctx.r31.u32 + 90, ctx.r11.u16);
	// sth r11,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r11.u16);
	// sth r11,94(r31)
	PPC_STORE_U16(ctx.r31.u32 + 94, ctx.r11.u16);
	// stb r7,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r7.u8);
	// stb r11,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r11.u8);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82248168"))) PPC_WEAK_FUNC(sub_82248168);
PPC_FUNC_IMPL(__imp__sub_82248168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82248170;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82182e90
	ctx.lr = 0x8224817C;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82248184;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82248190;
	sub_821837D0(ctx, base);
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822481b8
	if (!ctx.cr6.eq) goto loc_822481B8;
	// bl 0x82247e50
	ctx.lr = 0x822481A8;
	sub_82247E50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x822481B0;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_822481B8:
	// bl 0x82247f48
	ctx.lr = 0x822481BC;
	sub_82247F48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x822481C4;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822481CC"))) PPC_WEAK_FUNC(sub_822481CC);
PPC_FUNC_IMPL(__imp__sub_822481CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822481D0"))) PPC_WEAK_FUNC(sub_822481D0);
PPC_FUNC_IMPL(__imp__sub_822481D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x822481D8;
	sub_8224877C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,32
	ctx.r29.s64 = 32;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r28.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// sth r31,83(r1)
	PPC_STORE_U16(ctx.r1.u32 + 83, ctx.r31.u16);
	// li r4,18
	ctx.r4.s64 = 18;
	// sth r31,85(r1)
	PPC_STORE_U16(ctx.r1.u32 + 85, ctx.r31.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// sth r31,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r31.u16);
	// sth r31,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r31.u16);
	// sth r31,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r31.u16);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// stb r31,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r31.u8);
	// bl 0x822aa648
	ctx.lr = 0x82248234;
	sub_822AA648(ctx, base);
	// lis r11,1168
	ctx.r11.s64 = 76546048;
	// sth r26,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r26.u16);
	// ori r9,r11,258
	ctx.r9.u64 = ctx.r11.u64 | 258;
	// sth r25,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r25.u16);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82248270
	if (ctx.cr6.eq) goto loc_82248270;
	// addis r11,r30,-6184
	ctx.r11.s64 = ctx.r30.s64 + -405274624;
	// addic. r11,r11,-134
	ctx.xer.ca = ctx.r11.u32 > 133;
	ctx.r11.s64 = ctx.r11.s64 + -134;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82248260
	if (ctx.cr0.eq) goto loc_82248260;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82248290
	if (!ctx.cr6.eq) goto loc_82248290;
loc_82248260:
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r28.u8);
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// b 0x82248290
	goto loc_82248290;
loc_82248270:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// li r10,256
	ctx.r10.s64 = 256;
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// sth r10,85(r1)
	PPC_STORE_U16(ctx.r1.u32 + 85, ctx.r10.u16);
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
loc_82248290:
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// beq cr6,0x822482bc
	if (ctx.cr6.eq) goto loc_822482BC;
	// li r5,18
	ctx.r5.s64 = 18;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821847a8
	ctx.lr = 0x822482BC;
	sub_821847A8(ctx, base);
loc_822482BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_822482C4"))) PPC_WEAK_FUNC(sub_822482C4);
PPC_FUNC_IMPL(__imp__sub_822482C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822482C8"))) PPC_WEAK_FUNC(sub_822482C8);
PPC_FUNC_IMPL(__imp__sub_822482C8) {
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
	// bl 0x82248060
	ctx.lr = 0x822482E0;
	sub_82248060(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3256
	ctx.r9.s64 = ctx.r11.s64 + 3256;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
}

__attribute__((alias("__imp__sub_8224830C"))) PPC_WEAK_FUNC(sub_8224830C);
PPC_FUNC_IMPL(__imp__sub_8224830C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82248310"))) PPC_WEAK_FUNC(sub_82248310);
PPC_FUNC_IMPL(__imp__sub_82248310) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,3168
	ctx.r10.s64 = ctx.r11.s64 + 3168;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821a1488
	ctx.lr = 0x8224833C;
	sub_821A1488(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82248358
	if (ctx.cr6.eq) goto loc_82248358;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82248354;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82248358:
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

__attribute__((alias("__imp__sub_82248370"))) PPC_WEAK_FUNC(sub_82248370);
PPC_FUNC_IMPL(__imp__sub_82248370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82248378;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x822481d0
	ctx.lr = 0x822483C4;
	sub_822481D0(ctx, base);
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// lhz r9,94(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 94);
	// rlwinm r8,r10,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lbz r6,87(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 87);
	// lhz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lhz r4,85(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 85);
	// rlwinm r3,r6,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw. r30,r5,r7
	ctx.r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mullw r29,r3,r4
	ctx.r29.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// beq 0x82248404
	if (ctx.cr0.eq) goto loc_82248404;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82184710
	ctx.lr = 0x82248400;
	sub_82184710(ctx, base);
	// b 0x82248408
	goto loc_82248408;
loc_82248404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82248408:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// beq cr6,0x82248428
	if (ctx.cr6.eq) goto loc_82248428;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82184710
	ctx.lr = 0x82248424;
	sub_82184710(ctx, base);
	// b 0x8224842c
	goto loc_8224842C;
loc_82248428:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8224842C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248448
	if (ctx.cr6.eq) goto loc_82248448;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822aa648
	ctx.lr = 0x82248448;
	sub_822AA648(ctx, base);
loc_82248448:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224845c
	if (ctx.cr6.eq) goto loc_8224845C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x8224845C;
	sub_822AA648(ctx, base);
loc_8224845C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

