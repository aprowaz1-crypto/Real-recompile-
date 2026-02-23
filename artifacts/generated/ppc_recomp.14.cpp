#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820F38D0"))) PPC_WEAK_FUNC(sub_820F38D0);
PPC_FUNC_IMPL(__imp__sub_820F38D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,96(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f3920
	if (!ctx.cr6.eq) goto loc_820F3920;
	// lwz r11,1740(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820f3914
	if (ctx.cr6.lt) goto loc_820F3914;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bge cr6,0x820f3914
	if (!ctx.cr6.lt) goto loc_820F3914;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-5052
	ctx.r7.s64 = ctx.r9.s64 + -5052;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f3920
	if (!ctx.cr6.eq) goto loc_820F3920;
loc_820F3914:
	// lwz r11,1732(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820F3920:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r8,368(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 368);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820F3938"))) PPC_WEAK_FUNC(sub_820F3938);
PPC_FUNC_IMPL(__imp__sub_820F3938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F393C"))) PPC_WEAK_FUNC(sub_820F393C);
PPC_FUNC_IMPL(__imp__sub_820F393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3940"))) PPC_WEAK_FUNC(sub_820F3940);
PPC_FUNC_IMPL(__imp__sub_820F3940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f13,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,140(r9)
	PPC_STORE_U8(ctx.r9.u32 + 140, ctx.r11.u8);
	// lbz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820f397c
	if (ctx.cr6.eq) goto loc_820F397C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,21796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21796);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_820F397C:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F398C"))) PPC_WEAK_FUNC(sub_820F398C);
PPC_FUNC_IMPL(__imp__sub_820F398C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3990"))) PPC_WEAK_FUNC(sub_820F3990);
PPC_FUNC_IMPL(__imp__sub_820F3990) {
	PPC_FUNC_PROLOGUE();
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,-5052
	ctx.r9.s64 = ctx.r11.s64 + -5052;
	// rlwinm r5,r8,2,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1C;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// lwzx r3,r5,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// stw r3,96(r7)
	PPC_STORE_U32(ctx.r7.u32 + 96, ctx.r3.u32);
	// lwz r11,-2088(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -2088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f39f4
	if (ctx.cr6.eq) goto loc_820F39F4;
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// addi r7,r8,316
	ctx.r7.s64 = ctx.r8.s64 + 316;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820f39e8
	if (ctx.cr6.eq) goto loc_820F39E8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x820f39ec
	goto loc_820F39EC;
loc_820F39E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F39EC:
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r11,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r11.u32);
loc_820F39F4:
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// stw r8,1728(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1728, ctx.r8.u32);
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r6,36(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r5,96(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// stw r5,1732(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1732, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F3A28"))) PPC_WEAK_FUNC(sub_820F3A28);
PPC_FUNC_IMPL(__imp__sub_820F3A28) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F3A40"))) PPC_WEAK_FUNC(sub_820F3A40);
PPC_FUNC_IMPL(__imp__sub_820F3A40) {
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
	// beq cr6,0x820f3a60
	if (ctx.cr6.eq) goto loc_820F3A60;
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// bl 0x820f2d58
	ctx.lr = 0x820F3A60;
	sub_820F2D58(ctx, base);
loc_820F3A60:
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

__attribute__((alias("__imp__sub_820F3A74"))) PPC_WEAK_FUNC(sub_820F3A74);
PPC_FUNC_IMPL(__imp__sub_820F3A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3A78"))) PPC_WEAK_FUNC(sub_820F3A78);
PPC_FUNC_IMPL(__imp__sub_820F3A78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F3A80"))) PPC_WEAK_FUNC(sub_820F3A80);
PPC_FUNC_IMPL(__imp__sub_820F3A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// addi r10,r10,95
	ctx.r10.s64 = ctx.r10.s64 + 95;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F3AA4"))) PPC_WEAK_FUNC(sub_820F3AA4);
PPC_FUNC_IMPL(__imp__sub_820F3AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3AA8"))) PPC_WEAK_FUNC(sub_820F3AA8);
PPC_FUNC_IMPL(__imp__sub_820F3AA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82114f60
	sub_82114F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F3AAC"))) PPC_WEAK_FUNC(sub_820F3AAC);
PPC_FUNC_IMPL(__imp__sub_820F3AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3AB0"))) PPC_WEAK_FUNC(sub_820F3AB0);
PPC_FUNC_IMPL(__imp__sub_820F3AB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82115018
	sub_82115018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F3AB4"))) PPC_WEAK_FUNC(sub_820F3AB4);
PPC_FUNC_IMPL(__imp__sub_820F3AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3AB8"))) PPC_WEAK_FUNC(sub_820F3AB8);
PPC_FUNC_IMPL(__imp__sub_820F3AB8) {
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
	// lbz r6,3(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// bl 0x82080ae8
	ctx.lr = 0x820F3AD4;
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

__attribute__((alias("__imp__sub_820F3AE8"))) PPC_WEAK_FUNC(sub_820F3AE8);
PPC_FUNC_IMPL(__imp__sub_820F3AE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,1945(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1945, ctx.r10.u8);
	// stb r9,1944(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1944, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F3B04"))) PPC_WEAK_FUNC(sub_820F3B04);
PPC_FUNC_IMPL(__imp__sub_820F3B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3B08"))) PPC_WEAK_FUNC(sub_820F3B08);
PPC_FUNC_IMPL(__imp__sub_820F3B08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,1945(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1945, ctx.r10.u8);
	// stb r9,1944(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1944, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F3B24"))) PPC_WEAK_FUNC(sub_820F3B24);
PPC_FUNC_IMPL(__imp__sub_820F3B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3B28"))) PPC_WEAK_FUNC(sub_820F3B28);
PPC_FUNC_IMPL(__imp__sub_820F3B28) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820f3b58
	if (ctx.cr6.lt) goto loc_820F3B58;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820f3b64
	if (!ctx.cr6.eq) goto loc_820F3B64;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,2012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2012, ctx.r9.u32);
	// b 0x820f3b64
	goto loc_820F3B64;
loc_820F3B58:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,2016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2016, ctx.r9.u32);
loc_820F3B64:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x820f3b80
	if (!ctx.cr6.lt) goto loc_820F3B80;
	// addi r11,r10,503
	ctx.r11.s64 = ctx.r10.s64 + 503;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
loc_820F3B80:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F3B88"))) PPC_WEAK_FUNC(sub_820F3B88);
PPC_FUNC_IMPL(__imp__sub_820F3B88) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x820f3bb0
	if (!ctx.cr6.lt) goto loc_820F3BB0;
	// addi r11,r11,503
	ctx.r11.s64 = ctx.r11.s64 + 503;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
loc_820F3BB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F3BB8"))) PPC_WEAK_FUNC(sub_820F3BB8);
PPC_FUNC_IMPL(__imp__sub_820F3BB8) {
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
	// lis r4,17230
	ctx.r4.s64 = 1129185280;
	// ori r4,r4,21328
	ctx.r4.u64 = ctx.r4.u64 | 21328;
	// bl 0x821882d0
	ctx.lr = 0x820F3BD0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f3bec
	if (ctx.cr6.eq) goto loc_820F3BEC;
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
loc_820F3BEC:
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

__attribute__((alias("__imp__sub_820F3C00"))) PPC_WEAK_FUNC(sub_820F3C00);
PPC_FUNC_IMPL(__imp__sub_820F3C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F3C08;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r29,r11,4393
	ctx.r29.s64 = ctx.r11.s64 + 4393;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8218a128
	ctx.lr = 0x820F3C2C;
	sub_8218A128(ctx, base);
	// std r30,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r30.u64);
	// std r30,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r30.u64);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// std r30,264(r31)
	PPC_STORE_U64(ctx.r31.u32 + 264, ctx.r30.u64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// std r30,256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 256, ctx.r30.u64);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x8218a128
	ctx.lr = 0x820F3C4C;
	sub_8218A128(ctx, base);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F3C6C"))) PPC_WEAK_FUNC(sub_820F3C6C);
PPC_FUNC_IMPL(__imp__sub_820F3C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3C70"))) PPC_WEAK_FUNC(sub_820F3C70);
PPC_FUNC_IMPL(__imp__sub_820F3C70) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f3ce4
	if (ctx.cr6.eq) goto loc_820F3CE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1552(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1552);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820f3ce0
	if (ctx.cr6.eq) goto loc_820F3CE0;
	// addi r30,r3,1248
	ctx.r30.s64 = ctx.r3.s64 + 1248;
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,21057
	ctx.r4.u64 = ctx.r4.u64 | 21057;
	// bl 0x821882d0
	ctx.lr = 0x820F3CBC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f3ccc
	if (ctx.cr6.eq) goto loc_820F3CCC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f3cd0
	goto loc_820F3CD0;
loc_820F3CCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F3CD0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f1,1552(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820efa60
	ctx.lr = 0x820F3CE0;
	sub_820EFA60(ctx, base);
loc_820F3CE0:
	// stfs f31,1552(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
loc_820F3CE4:
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

__attribute__((alias("__imp__sub_820F3D00"))) PPC_WEAK_FUNC(sub_820F3D00);
PPC_FUNC_IMPL(__imp__sub_820F3D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F3D08;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,21300
	ctx.r4.s64 = 1395916800;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,16724
	ctx.r4.u64 = ctx.r4.u64 | 16724;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820F3D24;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// addi r10,r11,21176
	ctx.r10.s64 = ctx.r11.s64 + 21176;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821882d0
	ctx.lr = 0x820F3D44;
	sub_821882D0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f3d58
	if (ctx.cr6.eq) goto loc_820F3D58;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f3d5c
	goto loc_820F3D5C;
loc_820F3D58:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820F3D5C:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,16722
	ctx.r4.u64 = ctx.r4.u64 | 16722;
	// bl 0x821882d0
	ctx.lr = 0x820F3D70;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f3d80
	if (ctx.cr6.eq) goto loc_820F3D80;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f3d84
	goto loc_820F3D84;
loc_820F3D80:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820F3D84:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F3DB0"))) PPC_WEAK_FUNC(sub_820F3DB0);
PPC_FUNC_IMPL(__imp__sub_820F3DB0) {
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
	// addi r10,r11,21176
	ctx.r10.s64 = ctx.r11.s64 + 21176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821883b8
	ctx.lr = 0x820F3DDC;
	sub_821883B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f3df8
	if (ctx.cr6.eq) goto loc_820F3DF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820F3DF4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F3DF8:
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

__attribute__((alias("__imp__sub_820F3E10"))) PPC_WEAK_FUNC(sub_820F3E10);
PPC_FUNC_IMPL(__imp__sub_820F3E10) {
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
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f3ef8
	if (ctx.cr6.eq) goto loc_820F3EF8;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r6,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// addi r9,r11,-4888
	ctx.r9.s64 = ctx.r11.s64 + -4888;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// addi r7,r8,-5052
	ctx.r7.s64 = ctx.r8.s64 + -5052;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3e60
	if (ctx.cr6.eq) goto loc_820F3E60;
	// stw r11,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r11.u32);
loc_820F3E60:
	// lwz r11,1732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f3f58
	if (ctx.cr6.eq) goto loc_820F3F58;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f31,9052(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9052);
	ctx.f31.f64 = double(temp.f32);
	// blt cr6,0x820f3e98
	if (ctx.cr6.lt) goto loc_820F3E98;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f31,f12
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
loc_820F3E98:
	// lis r4,19526
	ctx.r4.s64 = 1279655936;
	// lwz r3,1972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// ori r4,r4,16707
	ctx.r4.u64 = ctx.r4.u64 | 16707;
	// bl 0x821882d0
	ctx.lr = 0x820F3EA8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f3ecc
	if (ctx.cr6.eq) goto loc_820F3ECC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f3ecc
	if (ctx.cr6.eq) goto loc_820F3ECC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,108(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// b 0x820f3f58
	goto loc_820F3F58;
loc_820F3ECC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820b8e30
	ctx.lr = 0x820F3ED8;
	sub_820B8E30(ctx, base);
	// lwz r11,1972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820F3EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f3f58
	goto loc_820F3F58;
loc_820F3EF8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f31,9052(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9052);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x820f3f24
	if (!ctx.cr6.gt) goto loc_820F3F24;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f31,f12
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
loc_820F3F24:
	// lis r4,19526
	ctx.r4.s64 = 1279655936;
	// lwz r3,1972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// ori r4,r4,16707
	ctx.r4.u64 = ctx.r4.u64 | 16707;
	// bl 0x821882d0
	ctx.lr = 0x820F3F34;
	sub_821882D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f3f54
	if (ctx.cr6.eq) goto loc_820F3F54;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f3f54
	if (ctx.cr6.eq) goto loc_820F3F54;
	// stfs f31,108(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
loc_820F3F54:
	// stw r10,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r10.u32);
loc_820F3F58:
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

__attribute__((alias("__imp__sub_820F3F70"))) PPC_WEAK_FUNC(sub_820F3F70);
PPC_FUNC_IMPL(__imp__sub_820F3F70) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4018
	if (ctx.cr6.eq) goto loc_820F4018;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r5,348(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,344(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// lwz r3,-5072(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5072);
	// bl 0x820f0698
	ctx.lr = 0x820F3FA4;
	sub_820F0698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f3fcc
	if (ctx.cr6.eq) goto loc_820F3FCC;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f3fcc
	if (ctx.cr6.eq) goto loc_820F3FCC;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// bl 0x82097070
	ctx.lr = 0x820F3FC0;
	sub_82097070(ctx, base);
	// bl 0x820f15c0
	ctx.lr = 0x820F3FC4;
	sub_820F15C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f3fe8
	if (!ctx.cr6.eq) goto loc_820F3FE8;
loc_820F3FCC:
	// lwz r11,1284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
	// bl 0x820d6ce0
	ctx.lr = 0x820F3FE0;
	sub_820D6CE0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1502(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1502, ctx.r10.u8);
loc_820F3FE8:
	// lis r4,21318
	ctx.r4.s64 = 1397096448;
	// addi r3,r31,1248
	ctx.r3.s64 = ctx.r31.s64 + 1248;
	// ori r4,r4,22597
	ctx.r4.u64 = ctx.r4.u64 | 22597;
	// bl 0x821882d0
	ctx.lr = 0x820F3FF8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4018
	if (ctx.cr6.eq) goto loc_820F4018;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4018
	if (ctx.cr6.eq) goto loc_820F4018;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82182ab8
	ctx.lr = 0x820F4018;
	sub_82182AB8(ctx, base);
loc_820F4018:
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

__attribute__((alias("__imp__sub_820F4030"))) PPC_WEAK_FUNC(sub_820F4030);
PPC_FUNC_IMPL(__imp__sub_820F4030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F4038;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f4218
	if (ctx.cr6.eq) goto loc_820F4218;
	// addi r29,r4,1248
	ctx.r29.s64 = ctx.r4.s64 + 1248;
	// lis r4,17230
	ctx.r4.s64 = 1129185280;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,21328
	ctx.r4.u64 = ctx.r4.u64 | 21328;
	// bl 0x821882d0
	ctx.lr = 0x820F405C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f406c
	if (ctx.cr6.eq) goto loc_820F406C;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f4070
	goto loc_820F4070;
loc_820F406C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820F4070:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,74
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 74, ctx.xer);
	// bne cr6,0x820f40c4
	if (!ctx.cr6.eq) goto loc_820F40C4;
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x820f40c4
	if (!ctx.cr6.eq) goto loc_820F40C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820bd9a0
	ctx.lr = 0x820F4090;
	sub_820BD9A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4218
	if (ctx.cr6.eq) goto loc_820F4218;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x8210f5d0
	ctx.lr = 0x820F40AC;
	sub_8210F5D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// bl 0x8210f5a8
	ctx.lr = 0x820F40B8;
	sub_8210F5A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820F40C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f4218
	if (ctx.cr6.eq) goto loc_820F4218;
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lbz r8,7(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmpwi cr6,r11,74
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 74, ctx.xer);
	// lbz r5,5(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lfs f13,2144(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lfs f0,21800(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21800);
	ctx.f0.f64 = double(temp.f32);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stb r5,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r5.u8);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// stb r4,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r4.u8);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bne cr6,0x820f41bc
	if (!ctx.cr6.eq) goto loc_820F41BC;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lbz r8,10(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x820f79f0
	ctx.lr = 0x820F41B0;
	sub_820F79F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820F41BC:
	// cmpwi cr6,r11,229
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 229, ctx.xer);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x820f41f0
	if (!ctx.cr6.eq) goto loc_820F41F0;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lbz r8,10(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x820f75d8
	ctx.lr = 0x820F41E4;
	sub_820F75D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820F41F0:
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x820f7450
	ctx.lr = 0x820F4204;
	sub_820F7450(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x820f7848
	ctx.lr = 0x820F4218;
	sub_820F7848(ctx, base);
loc_820F4218:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F4224"))) PPC_WEAK_FUNC(sub_820F4224);
PPC_FUNC_IMPL(__imp__sub_820F4224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4228"))) PPC_WEAK_FUNC(sub_820F4228);
PPC_FUNC_IMPL(__imp__sub_820F4228) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f4290
	if (ctx.cr6.eq) goto loc_820F4290;
	// addi r3,r4,1248
	ctx.r3.s64 = ctx.r4.s64 + 1248;
	// lis r4,17230
	ctx.r4.s64 = 1129185280;
	// ori r4,r4,21328
	ctx.r4.u64 = ctx.r4.u64 | 21328;
	// bl 0x821882d0
	ctx.lr = 0x820F4254;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4290
	if (ctx.cr6.eq) goto loc_820F4290;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4290
	if (ctx.cr6.eq) goto loc_820F4290;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x820f75f0
	ctx.lr = 0x820F4290;
	sub_820F75F0(ctx, base);
loc_820F4290:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_820F42A8"))) PPC_WEAK_FUNC(sub_820F42A8);
PPC_FUNC_IMPL(__imp__sub_820F42A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F42B0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// beq cr6,0x820f4378
	if (ctx.cr6.eq) goto loc_820F4378;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x822e6048
	ctx.lr = 0x820F4310;
	sub_822E6048(ctx, base);
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// lwz r3,1292(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// ori r4,r4,21579
	ctx.r4.u64 = ctx.r4.u64 | 21579;
	// bl 0x821882d0
	ctx.lr = 0x820F4320;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4330
	if (ctx.cr6.eq) goto loc_820F4330;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f4334
	goto loc_820F4334;
loc_820F4330:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F4334:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F4344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1296(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820F4358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,36(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r5,352(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 352);
	// lwz r4,348(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 348);
	// lwz r3,344(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 344);
	// bl 0x82084b50
	ctx.lr = 0x820F436C;
	sub_82084B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4b0
	ctx.lr = 0x820F4378;
	sub_820EF4B0(ctx, base);
loc_820F4378:
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x820f3c70
	ctx.lr = 0x820F4380;
	sub_820F3C70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F438C"))) PPC_WEAK_FUNC(sub_820F438C);
PPC_FUNC_IMPL(__imp__sub_820F438C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4390"))) PPC_WEAK_FUNC(sub_820F4390);
PPC_FUNC_IMPL(__imp__sub_820F4390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F4398;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// beq cr6,0x820f4468
	if (ctx.cr6.eq) goto loc_820F4468;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 360, ctx.r10.u32);
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e6048
	ctx.lr = 0x820F4400;
	sub_822E6048(ctx, base);
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// ori r4,r4,21579
	ctx.r4.u64 = ctx.r4.u64 | 21579;
	// lwz r3,1292(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// bl 0x821882d0
	ctx.lr = 0x820F4410;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4420
	if (ctx.cr6.eq) goto loc_820F4420;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f4424
	goto loc_820F4424;
loc_820F4420:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F4424:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F4434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1296(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820F4448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,36(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r5,352(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 352);
	// lwz r4,348(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 348);
	// lwz r3,344(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 344);
	// bl 0x82084b50
	ctx.lr = 0x820F445C;
	sub_82084B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef4b0
	ctx.lr = 0x820F4468;
	sub_820EF4B0(ctx, base);
loc_820F4468:
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x820f3c70
	ctx.lr = 0x820F4470;
	sub_820F3C70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F447C"))) PPC_WEAK_FUNC(sub_820F447C);
PPC_FUNC_IMPL(__imp__sub_820F447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4480"))) PPC_WEAK_FUNC(sub_820F4480);
PPC_FUNC_IMPL(__imp__sub_820F4480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820F4488;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820f44cc
	if (!ctx.cr6.eq) goto loc_820F44CC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f45b8
	if (ctx.cr6.eq) goto loc_820F45B8;
	// lwz r10,716(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// beq cr6,0x820f45b8
	if (ctx.cr6.eq) goto loc_820F45B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4d8
	ctx.lr = 0x820F44C0;
	sub_820EF4D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820F44CC:
	// addi r30,r31,596
	ctx.r30.s64 = ctx.r31.s64 + 596;
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4d8
	ctx.lr = 0x820F44DC;
	sub_820EF4D8(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f4568
	if (ctx.cr6.eq) goto loc_820F4568;
	// lwz r29,716(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r29,30
	ctx.r4.u64 = ctx.r29.u32 & 0x3;
	// bl 0x820ef4d8
	ctx.lr = 0x820F44F8;
	sub_820EF4D8(ctx, base);
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4514
	if (ctx.cr6.eq) goto loc_820F4514;
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r11,8
	ctx.r4.u64 = ctx.r11.u64 | 8;
	// bl 0x820ef4d8
	ctx.lr = 0x820F4514;
	sub_820EF4D8(ctx, base);
loc_820F4514:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4530
	if (ctx.cr6.eq) goto loc_820F4530;
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r11,4
	ctx.r4.u64 = ctx.r11.u64 | 4;
	// bl 0x820ef4d8
	ctx.lr = 0x820F4530;
	sub_820EF4D8(ctx, base);
loc_820F4530:
	// rlwinm r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f454c
	if (ctx.cr6.eq) goto loc_820F454C;
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 | 32;
	// bl 0x820ef4d8
	ctx.lr = 0x820F454C;
	sub_820EF4D8(ctx, base);
loc_820F454C:
	// rlwinm r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4568
	if (ctx.cr6.eq) goto loc_820F4568;
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r11,16
	ctx.r4.u64 = ctx.r11.u64 | 16;
	// bl 0x820ef4d8
	ctx.lr = 0x820F4568;
	sub_820EF4D8(ctx, base);
loc_820F4568:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ef4a0
	ctx.lr = 0x820F4574;
	sub_820EF4A0(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820f4588
	if (!ctx.cr6.eq) goto loc_820F4588;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F4588:
	// lis r4,17217
	ctx.r4.s64 = 1128333312;
	// ori r4,r4,21569
	ctx.r4.u64 = ctx.r4.u64 | 21569;
	// bl 0x821882d0
	ctx.lr = 0x820F4594;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f45b8
	if (ctx.cr6.eq) goto loc_820F45B8;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f45b8
	if (ctx.cr6.eq) goto loc_820F45B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F45B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F45B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820F45C4"))) PPC_WEAK_FUNC(sub_820F45C4);
PPC_FUNC_IMPL(__imp__sub_820F45C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F45C8"))) PPC_WEAK_FUNC(sub_820F45C8);
PPC_FUNC_IMPL(__imp__sub_820F45C8) {
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
	// lis r4,21313
	ctx.r4.s64 = 1396768768;
	// ori r4,r4,21057
	ctx.r4.u64 = ctx.r4.u64 | 21057;
	// bl 0x821882d0
	ctx.lr = 0x820F45E0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f45f0
	if (ctx.cr6.eq) goto loc_820F45F0;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f45f4
	goto loc_820F45F4;
loc_820F45F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F45F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ef360
	ctx.lr = 0x820F4600;
	sub_820EF360(ctx, base);
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

__attribute__((alias("__imp__sub_820F4614"))) PPC_WEAK_FUNC(sub_820F4614);
PPC_FUNC_IMPL(__imp__sub_820F4614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4618"))) PPC_WEAK_FUNC(sub_820F4618);
PPC_FUNC_IMPL(__imp__sub_820F4618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f46a4
	if (ctx.cr6.eq) goto loc_820F46A4;
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r8,1(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rotlwi r6,r10,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lfs f0,8608(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8608);
	ctx.f0.f64 = double(temp.f32);
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// lfs f13,2140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2140);
	ctx.f13.f64 = double(temp.f32);
	// neg r10,r3
	ctx.r10.s64 = -ctx.r3.s64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820f4684
	if (!ctx.cr6.gt) goto loc_820F4684;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,2136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,1552(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1552, temp.u32);
	// blr 
	return;
loc_820F4684:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820f46a0
	if (!ctx.cr6.lt) goto loc_820F46A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_820F46A0:
	// stfs f0,1552(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1552, temp.u32);
loc_820F46A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F46AC"))) PPC_WEAK_FUNC(sub_820F46AC);
PPC_FUNC_IMPL(__imp__sub_820F46AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F46B0"))) PPC_WEAK_FUNC(sub_820F46B0);
PPC_FUNC_IMPL(__imp__sub_820F46B0) {
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
	// lwz r30,40(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// ori r4,r4,20304
	ctx.r4.u64 = ctx.r4.u64 | 20304;
	// bl 0x821882d0
	ctx.lr = 0x820F46D8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4748
	if (ctx.cr6.eq) goto loc_820F4748;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4748
	if (ctx.cr6.eq) goto loc_820F4748;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r9,372(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// beq cr6,0x820f4738
	if (ctx.cr6.eq) goto loc_820F4738;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x820f4728
	if (!ctx.cr6.eq) goto loc_820F4728;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r5,200
	ctx.r5.s64 = ctx.r5.s64 + 200;
	// b 0x820f4738
	goto loc_820F4738;
loc_820F4728:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x820f4738
	if (!ctx.cr6.eq) goto loc_820F4738;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r5,-200
	ctx.r5.s64 = ctx.r5.s64 + -200;
loc_820F4738:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x820febe0
	ctx.lr = 0x820F4748;
	sub_820FEBE0(ctx, base);
loc_820F4748:
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

__attribute__((alias("__imp__sub_820F4764"))) PPC_WEAK_FUNC(sub_820F4764);
PPC_FUNC_IMPL(__imp__sub_820F4764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4768"))) PPC_WEAK_FUNC(sub_820F4768);
PPC_FUNC_IMPL(__imp__sub_820F4768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F4770;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,40(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// ori r4,r4,20304
	ctx.r4.u64 = ctx.r4.u64 | 20304;
	// bl 0x821882d0
	ctx.lr = 0x820F4788;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f484c
	if (ctx.cr6.eq) goto loc_820F484C;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f484c
	if (ctx.cr6.eq) goto loc_820F484C;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r9,5(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r7,372(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// lbz r31,1(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// beq cr6,0x820f4800
	if (ctx.cr6.eq) goto loc_820F4800;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x820f47f0
	if (!ctx.cr6.eq) goto loc_820F47F0;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r5,r5,200
	ctx.r5.s64 = ctx.r5.s64 + 200;
	// b 0x820f4800
	goto loc_820F4800;
loc_820F47F0:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x820f4800
	if (!ctx.cr6.eq) goto loc_820F4800;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r5,r5,-200
	ctx.r5.s64 = ctx.r5.s64 + -200;
loc_820F4800:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820febe0
	ctx.lr = 0x820F4818;
	sub_820FEBE0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r5,r6,r29
	PPC_STORE_U32(ctx.r6.u32 + ctx.r29.u32, ctx.r5.u32);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsx f12,r7,r29
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r29.u32, temp.u32);
loc_820F484C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F4858"))) PPC_WEAK_FUNC(sub_820F4858);
PPC_FUNC_IMPL(__imp__sub_820F4858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820F4860;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r29,40(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// ori r4,r4,20304
	ctx.r4.u64 = ctx.r4.u64 | 20304;
	// bl 0x821882d0
	ctx.lr = 0x820F4878;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f496c
	if (ctx.cr6.eq) goto loc_820F496C;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f496c
	if (ctx.cr6.eq) goto loc_820F496C;
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r4,3(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lhz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r4,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r4.u8);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r3,7(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rotlwi r28,r3,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r11,372(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 372);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r29,r6
	ctx.r29.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// beq cr6,0x820f48f4
	if (ctx.cr6.eq) goto loc_820F48F4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r31,r29,-200
	ctx.r31.s64 = ctx.r29.s64 + -200;
	// addi r29,r11,200
	ctx.r29.s64 = ctx.r11.s64 + 200;
loc_820F48F4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820febe0
	ctx.lr = 0x820F490C;
	sub_820FEBE0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820febe0
	ctx.lr = 0x820F4928;
	sub_820FEBE0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820febe0
	ctx.lr = 0x820F4944;
	sub_820FEBE0(ctx, base);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r11,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r11.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,180(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 180, temp.u32);
	// stfs f12,184(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 184, temp.u32);
	// stw r11,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r11.u32);
loc_820F496C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820F4978"))) PPC_WEAK_FUNC(sub_820F4978);
PPC_FUNC_IMPL(__imp__sub_820F4978) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820f49a0
	if (!ctx.cr6.eq) goto loc_820F49A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F49A0:
	// lis r4,21333
	ctx.r4.s64 = 1398079488;
	// ori r4,r4,16973
	ctx.r4.u64 = ctx.r4.u64 | 16973;
	// bl 0x821882d0
	ctx.lr = 0x820F49AC;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f49dc
	if (ctx.cr6.eq) goto loc_820F49DC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f49dc
	if (ctx.cr6.eq) goto loc_820F49DC;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r5,3(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// bl 0x820be110
	ctx.lr = 0x820F49DC;
	sub_820BE110(ctx, base);
loc_820F49DC:
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

__attribute__((alias("__imp__sub_820F49F4"))) PPC_WEAK_FUNC(sub_820F49F4);
PPC_FUNC_IMPL(__imp__sub_820F49F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F49F8"))) PPC_WEAK_FUNC(sub_820F49F8);
PPC_FUNC_IMPL(__imp__sub_820F49F8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820f4a20
	if (!ctx.cr6.eq) goto loc_820F4A20;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F4A20:
	// lis r4,21333
	ctx.r4.s64 = 1398079488;
	// ori r4,r4,16973
	ctx.r4.u64 = ctx.r4.u64 | 16973;
	// bl 0x821882d0
	ctx.lr = 0x820F4A2C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4a5c
	if (ctx.cr6.eq) goto loc_820F4A5C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4a5c
	if (ctx.cr6.eq) goto loc_820F4A5C;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r5,3(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// bl 0x820be098
	ctx.lr = 0x820F4A5C;
	sub_820BE098(ctx, base);
loc_820F4A5C:
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

__attribute__((alias("__imp__sub_820F4A74"))) PPC_WEAK_FUNC(sub_820F4A74);
PPC_FUNC_IMPL(__imp__sub_820F4A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4A78"))) PPC_WEAK_FUNC(sub_820F4A78);
PPC_FUNC_IMPL(__imp__sub_820F4A78) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4ac8
	if (ctx.cr6.eq) goto loc_820F4AC8;
	// lis r4,18763
	ctx.r4.s64 = 1229651968;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// ori r4,r4,21573
	ctx.r4.u64 = ctx.r4.u64 | 21573;
	// bl 0x821882d0
	ctx.lr = 0x820F4AA8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4ac8
	if (ctx.cr6.eq) goto loc_820F4AC8;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4ac8
	if (ctx.cr6.eq) goto loc_820F4AC8;
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// bl 0x820f8368
	ctx.lr = 0x820F4AC8;
	sub_820F8368(ctx, base);
loc_820F4AC8:
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

__attribute__((alias("__imp__sub_820F4AE0"))) PPC_WEAK_FUNC(sub_820F4AE0);
PPC_FUNC_IMPL(__imp__sub_820F4AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820F4AE8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f4b0c
	if (!ctx.cr6.eq) goto loc_820F4B0C;
loc_820F4B00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_820F4B0C:
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lwz r8,352(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// clrlwi r25,r9,29
	ctx.r25.u64 = ctx.r9.u32 & 0x7;
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x820f4b00
	if (ctx.cr6.eq) goto loc_820F4B00;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4b00
	if (ctx.cr6.eq) goto loc_820F4B00;
	// lwz r11,352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x820f4b00
	if (!ctx.cr6.eq) goto loc_820F4B00;
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// lwz r29,96(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r27,96(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bne cr6,0x820f4be0
	if (!ctx.cr6.eq) goto loc_820F4BE0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f4be0
	if (ctx.cr6.eq) goto loc_820F4BE0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f4be0
	if (ctx.cr6.eq) goto loc_820F4BE0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820f4be0
	if (ctx.cr6.eq) goto loc_820F4BE0;
	// addi r3,r10,1248
	ctx.r3.s64 = ctx.r10.s64 + 1248;
	// bl 0x82097070
	ctx.lr = 0x820F4B70;
	sub_82097070(ctx, base);
	// addi r11,r29,1248
	ctx.r11.s64 = ctx.r29.s64 + 1248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82097070
	ctx.lr = 0x820F4B80;
	sub_82097070(ctx, base);
	// addi r11,r27,1248
	ctx.r11.s64 = ctx.r27.s64 + 1248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82097070
	ctx.lr = 0x820F4B90;
	sub_82097070(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f4bd0
	if (ctx.cr6.eq) goto loc_820F4BD0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f4bd0
	if (ctx.cr6.eq) goto loc_820F4BD0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4bd0
	if (ctx.cr6.eq) goto loc_820F4BD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1580
	ctx.lr = 0x820F4BB4;
	sub_820F1580(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820f1580
	ctx.lr = 0x820F4BBC;
	sub_820F1580(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f1580
	ctx.lr = 0x820F4BC4;
	sub_820F1580(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f21e0
	ctx.lr = 0x820F4BD0;
	sub_820F21E0(ctx, base);
loc_820F4BD0:
	// lwz r11,1476(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1476);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,1476(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1476, ctx.r11.u32);
	// stw r10,1476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1476, ctx.r10.u32);
loc_820F4BE0:
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// stw r27,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4bf8
	if (ctx.cr6.eq) goto loc_820F4BF8;
	// stw r25,1728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1728, ctx.r25.u32);
loc_820F4BF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820F4C04"))) PPC_WEAK_FUNC(sub_820F4C04);
PPC_FUNC_IMPL(__imp__sub_820F4C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4C08"))) PPC_WEAK_FUNC(sub_820F4C08);
PPC_FUNC_IMPL(__imp__sub_820F4C08) {
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
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// ori r4,r4,20304
	ctx.r4.u64 = ctx.r4.u64 | 20304;
	// bl 0x821882d0
	ctx.lr = 0x820F4C28;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4c44
	if (ctx.cr6.eq) goto loc_820F4C44;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4c44
	if (ctx.cr6.eq) goto loc_820F4C44;
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// bl 0x820fe1f0
	ctx.lr = 0x820F4C44;
	sub_820FE1F0(ctx, base);
loc_820F4C44:
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

__attribute__((alias("__imp__sub_820F4C5C"))) PPC_WEAK_FUNC(sub_820F4C5C);
PPC_FUNC_IMPL(__imp__sub_820F4C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4C60"))) PPC_WEAK_FUNC(sub_820F4C60);
PPC_FUNC_IMPL(__imp__sub_820F4C60) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,36(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x820d2fb8
	ctx.lr = 0x820F4C88;
	sub_820D2FB8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r5,1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f13,11484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,14780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14780);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// beq cr6,0x820f4cf4
	if (ctx.cr6.eq) goto loc_820F4CF4;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_820F4CF4:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4d1c
	if (ctx.cr6.eq) goto loc_820F4D1C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_820F4D1C:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// beq cr6,0x820f4d34
	if (ctx.cr6.eq) goto loc_820F4D34;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_820F4D34:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// li r9,128
	ctx.r9.s64 = 128;
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lbz r7,7(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// beq cr6,0x820f4d68
	if (ctx.cr6.eq) goto loc_820F4D68;
	// lwz r11,1284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1284);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x820f4d6c
	goto loc_820F4D6C;
loc_820F4D68:
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_820F4D6C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820d3680
	ctx.lr = 0x820F4D74;
	sub_820D3680(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_820F4D90"))) PPC_WEAK_FUNC(sub_820F4D90);
PPC_FUNC_IMPL(__imp__sub_820F4D90) {
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
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r6,7(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbz r5,6(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// lbz r31,9(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lfs f0,9852(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// lfs f13,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// stb r5,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r5.u8);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lbz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// lbz r6,3(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82080c38
	ctx.lr = 0x820F4E58;
	sub_82080C38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_820F4E70"))) PPC_WEAK_FUNC(sub_820F4E70);
PPC_FUNC_IMPL(__imp__sub_820F4E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F4E78;
	sub_8224878C(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4448(r1)
	ea = -4448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r29,r10,1,24,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFE;
	// lwz r31,1936(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1936);
	// bl 0x8210f568
	ctx.lr = 0x820F4E9C;
	sub_8210F568(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8210f910
	ctx.lr = 0x820F4EA4;
	sub_8210F910(ctx, base);
	// addi r4,r31,864
	ctx.r4.s64 = ctx.r31.s64 + 864;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e4368
	ctx.lr = 0x820F4EB0;
	sub_820E4368(ctx, base);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r8,352(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 352);
	// lwz r7,348(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 348);
	// lwz r4,344(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 344);
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// bl 0x8210f2b8
	ctx.lr = 0x820F4ED4;
	sub_8210F2B8(ctx, base);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc5d0
	ctx.lr = 0x820F4EFC;
	sub_820FC5D0(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820f4f10
	if (!ctx.cr6.eq) goto loc_820F4F10;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F4F10:
	// lis r4,18763
	ctx.r4.s64 = 1229651968;
	// ori r4,r4,21573
	ctx.r4.u64 = ctx.r4.u64 | 21573;
	// bl 0x821882d0
	ctx.lr = 0x820F4F1C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4f38
	if (ctx.cr6.eq) goto loc_820F4F38;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4f38
	if (ctx.cr6.eq) goto loc_820F4F38;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x820f9fd8
	ctx.lr = 0x820F4F38;
	sub_820F9FD8(ctx, base);
loc_820F4F38:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8209eda0
	ctx.lr = 0x820F4F40;
	sub_8209EDA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,4448
	ctx.r1.s64 = ctx.r1.s64 + 4448;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F4F4C"))) PPC_WEAK_FUNC(sub_820F4F4C);
PPC_FUNC_IMPL(__imp__sub_820F4F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4F50"))) PPC_WEAK_FUNC(sub_820F4F50);
PPC_FUNC_IMPL(__imp__sub_820F4F50) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,1732(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4f88
	if (ctx.cr6.eq) goto loc_820F4F88;
	// bl 0x8208ecd0
	ctx.lr = 0x820F4F80;
	sub_8208ECD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f4fd0
	if (!ctx.cr6.eq) goto loc_820F4FD0;
loc_820F4F88:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820f4f9c
	if (!ctx.cr6.eq) goto loc_820F4F9C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F4F9C:
	// lis r4,18763
	ctx.r4.s64 = 1229651968;
	// ori r4,r4,21573
	ctx.r4.u64 = ctx.r4.u64 | 21573;
	// bl 0x821882d0
	ctx.lr = 0x820F4FA8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4fd0
	if (ctx.cr6.eq) goto loc_820F4FD0;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4fd0
	if (ctx.cr6.eq) goto loc_820F4FD0;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// rlwinm r6,r11,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFE;
	// lbz r4,1(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// bl 0x820f8878
	ctx.lr = 0x820F4FD0;
	sub_820F8878(ctx, base);
loc_820F4FD0:
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

__attribute__((alias("__imp__sub_820F4FEC"))) PPC_WEAK_FUNC(sub_820F4FEC);
PPC_FUNC_IMPL(__imp__sub_820F4FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4FF0"))) PPC_WEAK_FUNC(sub_820F4FF0);
PPC_FUNC_IMPL(__imp__sub_820F4FF0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820f5018
	if (!ctx.cr6.eq) goto loc_820F5018;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F5018:
	// lis r4,18763
	ctx.r4.s64 = 1229651968;
	// ori r4,r4,21573
	ctx.r4.u64 = ctx.r4.u64 | 21573;
	// bl 0x821882d0
	ctx.lr = 0x820F5024;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f5048
	if (ctx.cr6.eq) goto loc_820F5048;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f5048
	if (ctx.cr6.eq) goto loc_820F5048;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r5,r11,1,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFE;
	// bl 0x820fa168
	ctx.lr = 0x820F5048;
	sub_820FA168(ctx, base);
loc_820F5048:
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

__attribute__((alias("__imp__sub_820F5060"))) PPC_WEAK_FUNC(sub_820F5060);
PPC_FUNC_IMPL(__imp__sub_820F5060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x820F5068;
	sub_8224875C(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r27,36(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r26,40(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r25,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r25.u32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lfs f31,8616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// lis r20,-32182
	ctx.r20.s64 = -2109079552;
	// lis r19,-32187
	ctx.r19.s64 = -2109407232;
	// addi r23,r11,-4848
	ctx.r23.s64 = ctx.r11.s64 + -4848;
loc_820F50B0:
	// lbz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbzx r24,r29,r21
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r21.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x820f5d70
	if (!ctx.cr6.gt) goto loc_820F5D70;
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -1, ctx.xer);
	// beq cr6,0x820f50dc
	if (ctx.cr6.eq) goto loc_820F50DC;
	// cmpw cr6,r18,r29
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x820f50dc
	if (ctx.cr6.eq) goto loc_820F50DC;
	// add r30,r24,r30
	ctx.r30.u64 = ctx.r24.u64 + ctx.r30.u64;
	// subf r22,r24,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r24.s64;
	// b 0x820f5d68
	goto loc_820F5D68;
loc_820F50DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,612(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F50F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,230
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 230, ctx.xer);
	// bge cr6,0x820f5194
	if (!ctx.cr6.lt) goto loc_820F5194;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r23,4
	ctx.r10.s64 = ctx.r23.s64 + 4;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r28,r9,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r28,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820f5194
	if (ctx.cr6.eq) goto loc_820F5194;
	// addi r11,r23,8
	ctx.r11.s64 = ctx.r23.s64 + 8;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820f5194
	if (ctx.cr6.eq) goto loc_820F5194;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820f5170
	if (ctx.cr6.eq) goto loc_820F5170;
	// std r25,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r25.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// std r25,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r25.u64);
	// std r25,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.r25.u64);
	// std r25,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r25.u64);
	// bl 0x820f3c00
	ctx.lr = 0x820F514C;
	sub_820F3C00(ctx, base);
	// lwz r11,432(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 432);
	// lwzx r10,r28,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r23.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// std r9,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r9.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r8.u64);
	// b 0x820f517c
	goto loc_820F517C;
loc_820F5170:
	// lwzx r11,r28,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820F517C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820F5188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f5d98
	if (ctx.cr6.eq) goto loc_820F5D98;
	// b 0x820f5d5c
	goto loc_820F5D5C;
loc_820F5194:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F51AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f5d5c
	if (ctx.cr6.eq) goto loc_820F5D5C;
	// cmplwi cr6,r29,229
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 229, ctx.xer);
	// bgt cr6,0x820f5d5c
	if (ctx.cr6.gt) goto loc_820F5D5C;
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20948
	ctx.r12.s64 = ctx.r12.s64 + 20948;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,22568(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22568);
	// lwz r16,23936(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23936);
	// lwz r16,24192(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24192);
	// lwz r16,24272(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24272);
	// lwz r16,24312(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24312);
	// lwz r16,24352(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24352);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23548(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23548);
	// lwz r16,23560(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23560);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23976(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23976);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,21880(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 21880);
	// lwz r16,21892(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 21892);
	// lwz r16,21932(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 21932);
	// lwz r16,22836(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22836);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23840(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23840);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22848(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22848);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22860(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22860);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23608(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23608);
	// lwz r16,23704(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23704);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22976(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22976);
	// lwz r16,22928(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22928);
	// lwz r16,22940(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22940);
	// lwz r16,22952(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22952);
	// lwz r16,22964(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22964);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23656(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23656);
	// lwz r16,23668(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23668);
	// lwz r16,23716(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23716);
	// lwz r16,23748(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23748);
	// lwz r16,22712(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22712);
	// lwz r16,22744(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22744);
	// lwz r16,22712(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22712);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,24016(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24016);
	// lwz r16,24096(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24096);
	// lwz r16,24152(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24152);
	// lwz r16,24232(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24232);
	// lwz r16,24392(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24392);
	// lwz r16,21868(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 21868);
	// lwz r16,24512(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24512);
	// lwz r16,24548(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24548);
	// lwz r16,21956(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 21956);
	// lwz r16,23024(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23024);
	// lwz r16,21980(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 21980);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,21992(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 21992);
	// lwz r16,22024(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22024);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23048(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23048);
	// lwz r16,22872(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22872);
	// lwz r16,22616(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22616);
	// lwz r16,22680(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22680);
	// lwz r16,23680(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23680);
	// lwz r16,23692(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23692);
	// lwz r16,21968(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 21968);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22616(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22616);
	// lwz r16,22648(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22648);
	// lwz r16,23036(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23036);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22532(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22532);
	// lwz r16,22556(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22556);
	// lwz r16,22788(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22788);
	// lwz r16,22776(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22776);
	// lwz r16,22544(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22544);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22508(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22508);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22916(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22916);
	// lwz r16,22100(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22100);
	// lwz r16,24056(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24056);
	// lwz r16,24588(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24588);
	// lwz r16,24432(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24432);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22520(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22520);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22112(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22112);
	// lwz r16,22904(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22904);
	// lwz r16,22124(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22124);
	// lwz r16,22156(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22156);
	// lwz r16,22188(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22188);
	// lwz r16,22220(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22220);
	// lwz r16,22284(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22284);
	// lwz r16,22316(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22316);
	// lwz r16,22348(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22348);
	// lwz r16,22380(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22380);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22412(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22412);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22800(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22800);
	// lwz r16,22812(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22812);
	// lwz r16,22088(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22088);
	// lwz r16,24472(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 24472);
	// lwz r16,23204(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23204);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23060(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23060);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23584(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23584);
	// lwz r16,21944(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 21944);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23216(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23216);
	// lwz r16,23280(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23280);
	// lwz r16,23620(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23620);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23192(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23192);
	// lwz r16,23248(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23248);
	// lwz r16,23312(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23312);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22444(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22444);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22056(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22056);
	// lwz r16,22252(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22252);
	// lwz r16,23476(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23476);
	// lwz r16,23516(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23516);
	// lwz r16,22824(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22824);
	// lwz r16,23780(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23780);
	// lwz r16,23792(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23792);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22988(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22988);
	// lwz r16,23000(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23000);
	// lwz r16,23012(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23012);
	// lwz r16,22580(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22580);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23804(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23804);
	// lwz r16,23816(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23816);
	// lwz r16,23828(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23828);
	// lwz r16,23128(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23128);
	// lwz r16,23160(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23160);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23572(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23572);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22592(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22592);
	// lwz r16,22604(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22604);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23596(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23596);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,22476(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22476);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23084(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23084);
	// lwz r16,23116(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23116);
	// lwz r16,23368(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23368);
	// lwz r16,23452(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23452);
	// lwz r16,23440(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23440);
	// lwz r16,23464(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23464);
	// lwz r16,23344(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23344);
	// lwz r16,23356(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23356);
	// lwz r16,23380(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23380);
	// lwz r16,23392(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23392);
	// lwz r16,23404(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23404);
	// lwz r16,23416(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23416);
	// lwz r16,23428(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23428);
	// lwz r16,23632(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23632);
	// lwz r16,23644(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23644);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23072(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23072);
	// lwz r16,23852(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23852);
	// lwz r16,23900(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23900);
	// lwz r16,23864(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23864);
	// lwz r16,23876(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 23876);
	// lwz r16,22616(r15)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r15.u32 + 22616);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f0,-27256(r19)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r19.u32 + -27256, temp.u32);
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stw r11,-4948(r20)
	PPC_STORE_U32(ctx.r20.u32 + -4948, ctx.r11.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F56A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F56C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F56E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F57A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F57C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F57E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F58B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F58D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F58F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,400(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,420(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,472(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,476(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r7,3(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r6,2(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f5d5c
	goto loc_820F5D5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,552(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,560(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,600(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 600);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// b 0x820f5d4c
	goto loc_820F5D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,608(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
loc_820F5D4C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820F5D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F5D5C:
	// add r30,r24,r30
	ctx.r30.u64 = ctx.r24.u64 + ctx.r30.u64;
	// subf. r22,r24,r22
	ctx.r22.s64 = ctx.r22.s64 - ctx.r24.s64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble 0x820f5d70
	if (!ctx.cr0.gt) goto loc_820F5D70;
loc_820F5D68:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x820f50b0
	if (!ctx.cr6.eq) goto loc_820F50B0;
loc_820F5D70:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F5D98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r7,180(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820F5E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5FD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F6024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_820F6034"))) PPC_WEAK_FUNC(sub_820F6034);
PPC_FUNC_IMPL(__imp__sub_820F6034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6038"))) PPC_WEAK_FUNC(sub_820F6038);
PPC_FUNC_IMPL(__imp__sub_820F6038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820f6048
	if (!ctx.cr6.eq) goto loc_820F6048;
loc_820F6040:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820F6048:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,51200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51200, ctx.xer);
	// beq cr6,0x820f6040
	if (ctx.cr6.eq) goto loc_820F6040;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820f6068
	if (!ctx.cr6.eq) goto loc_820F6068;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820F6068:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F607C"))) PPC_WEAK_FUNC(sub_820F607C);
PPC_FUNC_IMPL(__imp__sub_820F607C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6080"))) PPC_WEAK_FUNC(sub_820F6080);
PPC_FUNC_IMPL(__imp__sub_820F6080) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F60AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f60d4
	if (ctx.cr6.eq) goto loc_820F60D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F60D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F60D4:
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

__attribute__((alias("__imp__sub_820F60F0"))) PPC_WEAK_FUNC(sub_820F60F0);
PPC_FUNC_IMPL(__imp__sub_820F60F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820F60F8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F6120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820F6144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r28,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r28.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820F6150"))) PPC_WEAK_FUNC(sub_820F6150);
PPC_FUNC_IMPL(__imp__sub_820F6150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820F6158;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f61f4
	if (ctx.cr6.eq) goto loc_820F61F4;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r28,r3,-4
	ctx.r28.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt 0x820f61d0
	if (ctx.cr0.lt) goto loc_820F61D0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820F618C:
	// lwzu r3,-8(r31)
	ea = -8 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F61A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r29,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r29.u16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f61c4
	if (ctx.cr6.eq) goto loc_820F61C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F61C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F61C4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bge 0x820f618c
	if (!ctx.cr0.lt) goto loc_820F618C;
loc_820F61D0:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f61e8
	if (ctx.cr6.eq) goto loc_820F61E8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x820F61E8;
	sub_82183E40(ctx, base);
loc_820F61E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820F61F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f6080
	ctx.lr = 0x820F61FC;
	sub_820F6080(ctx, base);
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f6214
	if (ctx.cr6.eq) goto loc_820F6214;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x820F6214;
	sub_82183E40(ctx, base);
loc_820F6214:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820F6220"))) PPC_WEAK_FUNC(sub_820F6220);
PPC_FUNC_IMPL(__imp__sub_820F6220) {
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
	// beq cr6,0x820f6248
	if (ctx.cr6.eq) goto loc_820F6248;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f6150
	ctx.lr = 0x820F6248;
	sub_820F6150(ctx, base);
loc_820F6248:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820F6268"))) PPC_WEAK_FUNC(sub_820F6268);
PPC_FUNC_IMPL(__imp__sub_820F6268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820F6270;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f62a4
	if (ctx.cr6.eq) goto loc_820F62A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x820F62A0;
	sub_82183E40(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_820F62A4:
	// sth r29,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r29.u16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// sth r29,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r29.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x820F62B8;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820f62d0
	if (ctx.cr6.eq) goto loc_820F62D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ae98
	ctx.lr = 0x820F62CC;
	sub_8218AE98(ctx, base);
	// b 0x820f62d4
	goto loc_820F62D4;
loc_820F62D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_820F62D4:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a810
	ctx.lr = 0x820F62E4;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820f630c
	if (ctx.cr6.eq) goto loc_820F630C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218ac78
	ctx.lr = 0x820F62F8;
	sub_8218AC78(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// sth r28,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r28.u16);
	// sth r27,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r27.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820F630C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// sth r28,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r28.u16);
	// sth r27,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r27.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820F6324"))) PPC_WEAK_FUNC(sub_820F6324);
PPC_FUNC_IMPL(__imp__sub_820F6324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6328"))) PPC_WEAK_FUNC(sub_820F6328);
PPC_FUNC_IMPL(__imp__sub_820F6328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820F6330;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6368
	if (ctx.cr6.eq) goto loc_820F6368;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x820F6364;
	sub_82183E40(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_820F6368:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// sth r29,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r29.u16);
	// sth r29,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r29.u16);
	// beq cr6,0x820f63bc
	if (ctx.cr6.eq) goto loc_820F63BC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820f63bc
	if (ctx.cr6.eq) goto loc_820F63BC;
	// bl 0x82183850
	ctx.lr = 0x820F6384;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x820f639c
	if (ctx.cr6.eq) goto loc_820F639C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820F6398;
	sub_82183448(ctx, base);
	// b 0x820f63a8
	goto loc_820F63A8;
loc_820F639C:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820F63A8;
	sub_821845A0(ctx, base);
loc_820F63A8:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821847a8
	ctx.lr = 0x820F63BC;
	sub_821847A8(ctx, base);
loc_820F63BC:
	// sth r27,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r27.u16);
	// sth r28,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r28.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820F63CC"))) PPC_WEAK_FUNC(sub_820F63CC);
PPC_FUNC_IMPL(__imp__sub_820F63CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F63D0"))) PPC_WEAK_FUNC(sub_820F63D0);
PPC_FUNC_IMPL(__imp__sub_820F63D0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x821847a8
	ctx.lr = 0x820F6404;
	sub_821847A8(ctx, base);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_820F6448"))) PPC_WEAK_FUNC(sub_820F6448);
PPC_FUNC_IMPL(__imp__sub_820F6448) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821847a8
	ctx.lr = 0x820F6478;
	sub_821847A8(ctx, base);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r4,r31,2
	ctx.r4.s64 = ctx.r31.s64 + 2;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// bl 0x821847a8
	ctx.lr = 0x820F64A4;
	sub_821847A8(ctx, base);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// stb r7,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r7.u8);
	// lhz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r6,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r6.u16);
	// bl 0x820f63d0
	ctx.lr = 0x820F64C8;
	sub_820F63D0(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820f63d0
	ctx.lr = 0x820F64D4;
	sub_820F63D0(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820f63d0
	ctx.lr = 0x820F64E0;
	sub_820F63D0(ctx, base);
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

__attribute__((alias("__imp__sub_820F64F8"))) PPC_WEAK_FUNC(sub_820F64F8);
PPC_FUNC_IMPL(__imp__sub_820F64F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820F6500;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6520
	if (ctx.cr6.eq) goto loc_820F6520;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f6150
	ctx.lr = 0x820F6520;
	sub_820F6150(ctx, base);
loc_820F6520:
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
	// stw r26,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r26.u32);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820f6550
	if (ctx.cr6.gt) goto loc_820F6550;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f6554
	if (!ctx.cr6.gt) goto loc_820F6554;
loc_820F6550:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_820F6554:
	// bl 0x82183850
	ctx.lr = 0x820F6558;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820f6570
	if (ctx.cr6.eq) goto loc_820F6570;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820F656C;
	sub_82183448(ctx, base);
	// b 0x820f657c
	goto loc_820F657C;
loc_820F6570:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820F657C;
	sub_821845A0(ctx, base);
loc_820F657C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f65bc
	if (ctx.cr6.eq) goto loc_820F65BC;
	// addic. r31,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r31.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// blt 0x820f65ac
	if (ctx.cr0.lt) goto loc_820F65AC;
	// addi r30,r28,-8
	ctx.r30.s64 = ctx.r28.s64 + -8;
loc_820F6598:
	// sth r26,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r26.u16);
	// bl 0x821affd8
	ctx.lr = 0x820F65A0;
	sub_821AFFD8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r3,8(r30)
	ea = 8 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// bge 0x820f6598
	if (!ctx.cr0.lt) goto loc_820F6598;
loc_820F65AC:
	// stw r28,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r28.u32);
	// stw r29,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_820F65BC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
	// stw r29,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820F65D0"))) PPC_WEAK_FUNC(sub_820F65D0);
PPC_FUNC_IMPL(__imp__sub_820F65D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820F65D8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f6664
	if (ctx.cr6.eq) goto loc_820F6664;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r28,r3,-4
	ctx.r28.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addic. r29,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r29.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt 0x820f6640
	if (ctx.cr0.lt) goto loc_820F6640;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820F6610:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6630
	if (ctx.cr6.eq) goto loc_820F6630;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x820F662C;
	sub_82183E40(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_820F6630:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// bge 0x820f6610
	if (!ctx.cr0.lt) goto loc_820F6610;
loc_820F6640:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f6658
	if (ctx.cr6.eq) goto loc_820F6658;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x820F6658;
	sub_82183E40(ctx, base);
loc_820F6658:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_820F6664:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6684
	if (ctx.cr6.eq) goto loc_820F6684;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x820F6680;
	sub_82183E40(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_820F6684:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// sth r30,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r30.u16);
	// sth r30,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r30.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f66a4
	if (ctx.cr6.eq) goto loc_820F66A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x820F66A4;
	sub_82183E40(ctx, base);
loc_820F66A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820F66B0"))) PPC_WEAK_FUNC(sub_820F66B0);
PPC_FUNC_IMPL(__imp__sub_820F66B0) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f66d8
	if (ctx.cr6.eq) goto loc_820F66D8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f65d0
	ctx.lr = 0x820F66D8;
	sub_820F65D0(ctx, base);
loc_820F66D8:
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

__attribute__((alias("__imp__sub_820F66F8"))) PPC_WEAK_FUNC(sub_820F66F8);
PPC_FUNC_IMPL(__imp__sub_820F66F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x820F6700;
	sub_82248774(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f672c
	if (ctx.cr6.eq) goto loc_820F672C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820F672C;
	sub_82183E40(ctx, base);
loc_820F672C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x820F6740;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820f675c
	if (ctx.cr6.eq) goto loc_820F675C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ac78
	ctx.lr = 0x820F6754;
	sub_8218AC78(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x820f6760
	goto loc_820F6760;
loc_820F675C:
	// li r25,0
	ctx.r25.s64 = 0;
loc_820F6760:
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// rlwinm r29,r25,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r30,r29,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// ble cr6,0x820f6780
	if (!ctx.cr6.gt) goto loc_820F6780;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_820F6780:
	// bl 0x82183850
	ctx.lr = 0x820F6784;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820f679c
	if (ctx.cr6.eq) goto loc_820F679C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820F6798;
	sub_82183448(ctx, base);
	// b 0x820f67a8
	goto loc_820F67A8;
loc_820F679C:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820F67A8;
	sub_821845A0(ctx, base);
loc_820F67A8:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82183850
	ctx.lr = 0x820F67B0;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x820F67BC;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820F67C4;
	sub_821830F8(ctx, base);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x820f67d8
	if (ctx.cr6.gt) goto loc_820F67D8;
	// rlwinm r31,r29,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
loc_820F67D8:
	// bl 0x82183850
	ctx.lr = 0x820F67DC;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820f67f4
	if (ctx.cr6.eq) goto loc_820F67F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820F67F0;
	sub_82183448(ctx, base);
	// b 0x820f6800
	goto loc_820F6800;
loc_820F67F4:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820F6800;
	sub_821845A0(ctx, base);
loc_820F6800:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x820f6818
	if (ctx.cr6.lt) goto loc_820F6818;
	// bne cr6,0x820f6820
	if (!ctx.cr6.eq) goto loc_820F6820;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820f681c
	goto loc_820F681C;
loc_820F6818:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F681C:
	// bl 0x821830f8
	ctx.lr = 0x820F6820;
	sub_821830F8(ctx, base);
loc_820F6820:
	// bl 0x82183850
	ctx.lr = 0x820F6824;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x820F6830;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x820F6838;
	sub_821830F8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218a810
	ctx.lr = 0x820F6844;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820f6860
	if (ctx.cr6.eq) goto loc_820F6860;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8218ae98
	ctx.lr = 0x820F6858;
	sub_8218AE98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x820f6864
	goto loc_820F6864;
loc_820F6860:
	// li r28,0
	ctx.r28.s64 = 0;
loc_820F6864:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821847a8
	ctx.lr = 0x820F6874;
	sub_821847A8(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x820f6888
	if (ctx.cr6.lt) goto loc_820F6888;
	// bne cr6,0x820f6890
	if (!ctx.cr6.eq) goto loc_820F6890;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820f688c
	goto loc_820F688C;
loc_820F6888:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F688C:
	// bl 0x821830f8
	ctx.lr = 0x820F6890;
	sub_821830F8(ctx, base);
loc_820F6890:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x820f6908
	if (!ctx.cr6.gt) goto loc_820F6908;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r27,12
	ctx.r30.s64 = ctx.r27.s64 + 12;
	// addi r31,r24,-8
	ctx.r31.s64 = ctx.r24.s64 + -8;
	// lfs f31,7948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
loc_820F68B0:
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// bl 0x820f6448
	ctx.lr = 0x820F68B8;
	sub_820F6448(ctx, base);
	// lhz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + -12);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// lhz r10,-10(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + -10);
	// sth r10,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r10.u16);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f0,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f13,f31
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// stfs f30,36(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfsu f8,32(r31)
	// bne 0x820f68b0
	if (!ctx.cr0.eq) goto loc_820F68B0;
loc_820F6908:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f691c
	if (ctx.cr6.eq) goto loc_820F691C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x820F691C;
	sub_82183E40(ctx, base);
loc_820F691C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820f6930
	if (ctx.cr6.eq) goto loc_820F6930;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82183e40
	ctx.lr = 0x820F6930;
	sub_82183E40(ctx, base);
loc_820F6930:
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820F6944"))) PPC_WEAK_FUNC(sub_820F6944);
PPC_FUNC_IMPL(__imp__sub_820F6944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6948"))) PPC_WEAK_FUNC(sub_820F6948);
PPC_FUNC_IMPL(__imp__sub_820F6948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820F6950;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6970
	if (ctx.cr6.eq) goto loc_820F6970;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f65d0
	ctx.lr = 0x820F6970;
	sub_820F65D0(ctx, base);
loc_820F6970:
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820f69a0
	if (ctx.cr6.gt) goto loc_820F69A0;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f69a4
	if (!ctx.cr6.gt) goto loc_820F69A4;
loc_820F69A0:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_820F69A4:
	// bl 0x82183850
	ctx.lr = 0x820F69A8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820f69c0
	if (ctx.cr6.eq) goto loc_820F69C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183448
	ctx.lr = 0x820F69BC;
	sub_82183448(ctx, base);
	// b 0x820f69cc
	goto loc_820F69CC;
loc_820F69C0:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820F69CC;
	sub_821845A0(ctx, base);
loc_820F69CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6a14
	if (ctx.cr6.eq) goto loc_820F6A14;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x820f6a04
	if (ctx.cr0.lt) goto loc_820F6A04;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-6
	ctx.r11.s64 = ctx.r9.s64 + -6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F69F0:
	// stw r29,6(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6, ctx.r29.u32);
	// stw r29,10(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10, ctx.r29.u32);
	// sth r29,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r29.u16);
	// sthu r29,16(r11)
	// bdnz 0x820f69f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F69F0;
loc_820F6A04:
	// stw r9,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r9.u32);
	// stw r30,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820F6A14:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// stw r30,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820F6A28"))) PPC_WEAK_FUNC(sub_820F6A28);
PPC_FUNC_IMPL(__imp__sub_820F6A28) {
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
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// li r30,0
	ctx.r30.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F6A50:
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
	// bdnz 0x820f6a50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F6A50;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F6A7C:
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
	// bdnz 0x820f6a7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F6A7C;
	// bl 0x821affd8
	ctx.lr = 0x820F6AA0;
	sub_821AFFD8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x820F6AA8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820f6ac0
	if (ctx.cr6.eq) goto loc_820F6AC0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x820F6ABC;
	sub_82183448(ctx, base);
	// b 0x820f6ac8
	goto loc_820F6AC8;
loc_820F6AC0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x820F6AC8;
	sub_821845A0(ctx, base);
loc_820F6AC8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6ad8
	if (ctx.cr6.eq) goto loc_820F6AD8;
	// bl 0x821a1580
	ctx.lr = 0x820F6AD4;
	sub_821A1580(ctx, base);
	// b 0x820f6adc
	goto loc_820F6ADC;
loc_820F6AD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820F6ADC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_820F6B38"))) PPC_WEAK_FUNC(sub_820F6B38);
PPC_FUNC_IMPL(__imp__sub_820F6B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F6B40;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f6b7c
	if (ctx.cr6.eq) goto loc_820F6B7C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6b6c
	if (ctx.cr6.eq) goto loc_820F6B6C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820F6B6C;
	sub_82183E40(ctx, base);
loc_820F6B6C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x820F6B7C;
	sub_82183E40(ctx, base);
loc_820F6B7C:
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// bl 0x82183850
	ctx.lr = 0x820F6B84;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820f6b9c
	if (ctx.cr6.eq) goto loc_820F6B9C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82183448
	ctx.lr = 0x820F6B98;
	sub_82183448(ctx, base);
	// b 0x820f6ba4
	goto loc_820F6BA4;
loc_820F6B9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x820F6BA4;
	sub_821845A0(ctx, base);
loc_820F6BA4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6bbc
	if (ctx.cr6.eq) goto loc_820F6BBC;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820F6BBC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F6BCC"))) PPC_WEAK_FUNC(sub_820F6BCC);
PPC_FUNC_IMPL(__imp__sub_820F6BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6BD0"))) PPC_WEAK_FUNC(sub_820F6BD0);
PPC_FUNC_IMPL(__imp__sub_820F6BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F6BD8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	ctx.lr = 0x820F6BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821a1c58
	ctx.lr = 0x820F6BFC;
	sub_821A1C58(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6c10
	if (ctx.cr6.eq) goto loc_820F6C10;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f6150
	ctx.lr = 0x820F6C10;
	sub_820F6150(ctx, base);
loc_820F6C10:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// beq cr6,0x820f6c30
	if (ctx.cr6.eq) goto loc_820F6C30;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820f65d0
	ctx.lr = 0x820F6C30;
	sub_820F65D0(ctx, base);
loc_820F6C30:
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f6c68
	if (ctx.cr6.eq) goto loc_820F6C68;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6c58
	if (ctx.cr6.eq) goto loc_820F6C58;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820F6C58;
	sub_82183E40(ctx, base);
loc_820F6C58:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x820F6C68;
	sub_82183E40(ctx, base);
loc_820F6C68:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F6C84"))) PPC_WEAK_FUNC(sub_820F6C84);
PPC_FUNC_IMPL(__imp__sub_820F6C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6C88"))) PPC_WEAK_FUNC(sub_820F6C88);
PPC_FUNC_IMPL(__imp__sub_820F6C88) {
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
	// bl 0x820f6bd0
	ctx.lr = 0x820F6CA4;
	sub_820F6BD0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6cc4
	if (ctx.cr6.eq) goto loc_820F6CC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F6CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F6CC4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6cec
	if (ctx.cr6.eq) goto loc_820F6CEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F6CEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F6CEC:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_820F6D0C"))) PPC_WEAK_FUNC(sub_820F6D0C);
PPC_FUNC_IMPL(__imp__sub_820F6D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6D10"))) PPC_WEAK_FUNC(sub_820F6D10);
PPC_FUNC_IMPL(__imp__sub_820F6D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820F6D18;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820f6d80
	if (!ctx.cr6.eq) goto loc_820F6D80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// addi r27,r11,22060
	ctx.r27.s64 = ctx.r11.s64 + 22060;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_820F6D40:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r5,412
	ctx.r11.s64 = ctx.r5.s64 + 412;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// bne cr6,0x820f6d6c
	if (!ctx.cr6.eq) goto loc_820F6D6C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f9dc8
	ctx.lr = 0x820F6D6C;
	sub_820F9DC8(ctx, base);
loc_820F6D6C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r27,16
	ctx.r11.s64 = ctx.r27.s64 + 16;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f6d40
	if (ctx.cr6.lt) goto loc_820F6D40;
loc_820F6D80:
	// stw r26,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820F6D8C"))) PPC_WEAK_FUNC(sub_820F6D8C);
PPC_FUNC_IMPL(__imp__sub_820F6D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6D90"))) PPC_WEAK_FUNC(sub_820F6D90);
PPC_FUNC_IMPL(__imp__sub_820F6D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820F6D98;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r11,22060
	ctx.r27.s64 = ctx.r11.s64 + 22060;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r28,0
	ctx.r28.s64 = 0;
loc_820F6DB4:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r5,412
	ctx.r11.s64 = ctx.r5.s64 + 412;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// bne cr6,0x820f6de0
	if (!ctx.cr6.eq) goto loc_820F6DE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f9dc8
	ctx.lr = 0x820F6DE0;
	sub_820F9DC8(ctx, base);
loc_820F6DE0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r27,16
	ctx.r11.s64 = ctx.r27.s64 + 16;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f6db4
	if (ctx.cr6.lt) goto loc_820F6DB4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820F6DFC"))) PPC_WEAK_FUNC(sub_820F6DFC);
PPC_FUNC_IMPL(__imp__sub_820F6DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6E00"))) PPC_WEAK_FUNC(sub_820F6E00);
PPC_FUNC_IMPL(__imp__sub_820F6E00) {
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
	// lis r4,17253
	ctx.r4.s64 = 1130692608;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,17996
	ctx.r4.u64 = ctx.r4.u64 | 17996;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820F6E2C;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r10,r11,22112
	ctx.r10.s64 = ctx.r11.s64 + 22112;
	// addi r3,r30,1248
	ctx.r3.s64 = ctx.r30.s64 + 1248;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x820f6e4c
	if (!ctx.cr6.eq) goto loc_820F6E4C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F6E4C:
	// lis r4,17222
	ctx.r4.s64 = 1128660992;
	// ori r4,r4,19563
	ctx.r4.u64 = ctx.r4.u64 | 19563;
	// bl 0x821882d0
	ctx.lr = 0x820F6E58;
	sub_821882D0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_820F6E78"))) PPC_WEAK_FUNC(sub_820F6E78);
PPC_FUNC_IMPL(__imp__sub_820F6E78) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r11,2012
	ctx.r3.s64 = ctx.r11.s64 + 2012;
	// bl 0x822aa648
	ctx.lr = 0x820F6E9C;
	sub_822AA648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x820f6d10
	ctx.lr = 0x820F6EA8;
	sub_820F6D10(ctx, base);
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

__attribute__((alias("__imp__sub_820F6EBC"))) PPC_WEAK_FUNC(sub_820F6EBC);
PPC_FUNC_IMPL(__imp__sub_820F6EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6EC0"))) PPC_WEAK_FUNC(sub_820F6EC0);
PPC_FUNC_IMPL(__imp__sub_820F6EC0) {
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
	// addi r10,r11,22080
	ctx.r10.s64 = ctx.r11.s64 + 22080;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821883b8
	ctx.lr = 0x820F6EEC;
	sub_821883B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f6f08
	if (ctx.cr6.eq) goto loc_820F6F08;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820F6F04;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F6F08:
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

__attribute__((alias("__imp__sub_820F6F20"))) PPC_WEAK_FUNC(sub_820F6F20);
PPC_FUNC_IMPL(__imp__sub_820F6F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f13,140(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f13,156(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// stfs f0,192(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stfs f13,204(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f13,220(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// stfs f0,244(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stfs f0,288(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// stfs f0,264(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stfs f0,260(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stfs f0,256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f13,268(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stfs f0,280(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stfs f0,276(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// stfs f0,272(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// stfs f13,284(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F6FF0"))) PPC_WEAK_FUNC(sub_820F6FF0);
PPC_FUNC_IMPL(__imp__sub_820F6FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820F6FF8;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,88
	ctx.r31.s64 = ctx.r3.s64 + 88;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r27,r11,22060
	ctx.r27.s64 = ctx.r11.s64 + 22060;
	// addi r28,r10,-26620
	ctx.r28.s64 = ctx.r10.s64 + -26620;
loc_820F7024:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820f703c
	if (ctx.cr6.eq) goto loc_820F703C;
	// xori r11,r26,1
	ctx.r11.u64 = ctx.r26.u64 ^ 1;
loc_820F703C:
	// addi r9,r11,503
	ctx.r9.s64 = ctx.r11.s64 + 503;
	// lwz r11,-40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bne cr6,0x820f70b8
	if (!ctx.cr6.eq) goto loc_820F70B8;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f0,-24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f9,-24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + -24, temp.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f8,504(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f7,-16(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + -16, temp.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f6,496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 496);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f5,-8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f4,504(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 504);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bne cr6,0x820f7170
	if (!ctx.cr6.eq) goto loc_820F7170;
	// stw r24,-40(r31)
	PPC_STORE_U32(ctx.r31.u32 + -40, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x820f7160
	goto loc_820F7160;
loc_820F70B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f7170
	if (!ctx.cr6.eq) goto loc_820F7170;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820f7170
	if (ctx.cr6.eq) goto loc_820F7170;
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// addi r10,r31,-24
	ctx.r10.s64 = ctx.r31.s64 + -24;
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r8,r11,147
	ctx.r8.s64 = ctx.r11.s64 + 147;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,36(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// lwzx r5,r7,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r10,180(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 180);
	// rlwinm r11,r5,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// ld r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r3,-24(r31)
	PPC_STORE_U64(ctx.r31.u32 + -24, ctx.r3.u64);
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,-16(r31)
	PPC_STORE_U64(ctx.r31.u32 + -16, ctx.r11.u64);
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x820f7120
	if (!ctx.cr6.eq) goto loc_820F7120;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r8,700(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// b 0x820f7130
	goto loc_820F7130;
loc_820F7120:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x820f7158
	if (!ctx.cr6.eq) goto loc_820F7158;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r8,716(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
loc_820F7130:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r10,r31,-8
	ctx.r10.s64 = ctx.r31.s64 + -8;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,180(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// ld r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r6,-8(r31)
	PPC_STORE_U64(ctx.r31.u32 + -8, ctx.r6.u64);
	// ld r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r5,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_820F7158:
	// stw r25,-40(r31)
	PPC_STORE_U32(ctx.r31.u32 + -40, ctx.r25.u32);
	// li r4,7
	ctx.r4.s64 = 7;
loc_820F7160:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r5,r29,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x820f9dc8
	ctx.lr = 0x820F7170;
	sub_820F9DC8(ctx, base);
loc_820F7170:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x820f7024
	if (ctx.cr6.lt) goto loc_820F7024;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820F718C"))) PPC_WEAK_FUNC(sub_820F718C);
PPC_FUNC_IMPL(__imp__sub_820F718C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7190"))) PPC_WEAK_FUNC(sub_820F7190);
PPC_FUNC_IMPL(__imp__sub_820F7190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820F7198;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,17222
	ctx.r4.s64 = 1128660992;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,19563
	ctx.r4.u64 = ctx.r4.u64 | 19563;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82188378
	ctx.lr = 0x820F71BC;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// addi r10,r11,22080
	ctx.r10.s64 = ctx.r11.s64 + 22080;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x820f6f20
	ctx.lr = 0x820F71DC;
	sub_820F6F20(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820F71E4"))) PPC_WEAK_FUNC(sub_820F71E4);
PPC_FUNC_IMPL(__imp__sub_820F71E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F71E8"))) PPC_WEAK_FUNC(sub_820F71E8);
PPC_FUNC_IMPL(__imp__sub_820F71E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820F71F0;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r4,17230
	ctx.r4.s64 = 1129185280;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21328
	ctx.r4.u64 = ctx.r4.u64 | 21328;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820F7210;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// addi r9,r11,23556
	ctx.r9.s64 = ctx.r11.s64 + 23556;
	// stw r30,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r30.u32);
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_820F7238:
	// stw r25,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r25.u32);
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820f7238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F7238;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r29,r30,366
	ctx.r29.s64 = ctx.r30.s64 + 366;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r27,r11,-26164
	ctx.r27.s64 = ctx.r11.s64 + -26164;
	// addi r26,r10,-26180
	ctx.r26.s64 = ctx.r10.s64 + -26180;
loc_820F725C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r31,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F7274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r9,-6(r29)
	PPC_STORE_U16(ctx.r29.u32 + -6, ctx.r9.u16);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwzx r4,r31,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820F7294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// sthu r6,2(r29)
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x820f725c
	if (ctx.cr6.lt) goto loc_820F725C;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r9,r30,374
	ctx.r9.s64 = ctx.r30.s64 + 374;
	// addi r10,r30,340
	ctx.r10.s64 = ctx.r30.s64 + 340;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r30,140
	ctx.r11.s64 = ctx.r30.s64 + 140;
	// lfs f13,2144(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lfs f0,2148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
loc_820F72D0:
	// stfs f0,-100(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -100, temp.u32);
	// stfs f0,-84(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -84, temp.u32);
	// stfs f0,-132(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -132, temp.u32);
	// stfs f0,-116(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -116, temp.u32);
	// stfs f0,-52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -52, temp.u32);
	// stfs f0,-56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -56, temp.u32);
	// stfs f0,-60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// stfs f13,-48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -48, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f13,16(r11)
	// stfs f0,-68(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -68, temp.u32);
	// stfs f0,-52(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -52, temp.u32);
	// stwu r25,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	// bdnz 0x820f72d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F72D0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r29,r30,304
	ctx.r29.s64 = ctx.r30.s64 + 304;
loc_820F731C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7560
	ctx.lr = 0x820F7328;
	sub_820E7560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stbx r11,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,34
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 34, ctx.xer);
	// blt cr6,0x820f731c
	if (ctx.cr6.lt) goto loc_820F731C;
	// stw r25,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r25.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f7358
	if (ctx.cr6.eq) goto loc_820F7358;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r11.u32);
loc_820F7358:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820F7360"))) PPC_WEAK_FUNC(sub_820F7360);
PPC_FUNC_IMPL(__imp__sub_820F7360) {
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
	// addi r10,r11,23556
	ctx.r10.s64 = ctx.r11.s64 + 23556;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821883b8
	ctx.lr = 0x820F738C;
	sub_821883B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f73a8
	if (ctx.cr6.eq) goto loc_820F73A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820F73A4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F73A8:
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

__attribute__((alias("__imp__sub_820F73C0"))) PPC_WEAK_FUNC(sub_820F73C0);
PPC_FUNC_IMPL(__imp__sub_820F73C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F73D0:
	// stw r7,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r7.u32);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820f73d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F73D0;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r9,r3,374
	ctx.r9.s64 = ctx.r3.s64 + 374;
	// addi r10,r3,340
	ctx.r10.s64 = ctx.r3.s64 + 340;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r3,140
	ctx.r11.s64 = ctx.r3.s64 + 140;
	// lfs f13,2144(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lfs f0,2148(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
loc_820F7404:
	// stfs f0,-100(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -100, temp.u32);
	// stfs f0,-84(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -84, temp.u32);
	// stfs f0,-132(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -132, temp.u32);
	// stfs f0,-116(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -116, temp.u32);
	// stfs f0,-52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -52, temp.u32);
	// stfs f0,-56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -56, temp.u32);
	// stfs f0,-60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// stfs f13,-48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -48, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f13,16(r11)
	// stfs f0,-68(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -68, temp.u32);
	// stfs f0,-52(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -52, temp.u32);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	// bdnz 0x820f7404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F7404;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F744C"))) PPC_WEAK_FUNC(sub_820F744C);
PPC_FUNC_IMPL(__imp__sub_820F744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7450"))) PPC_WEAK_FUNC(sub_820F7450);
PPC_FUNC_IMPL(__imp__sub_820F7450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820F7458;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f75cc
	if (ctx.cr6.eq) goto loc_820F75CC;
	// lis r4,17230
	ctx.r4.s64 = 1129185280;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// ori r4,r4,21328
	ctx.r4.u64 = ctx.r4.u64 | 21328;
	// bl 0x821882d0
	ctx.lr = 0x820F7494;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f75cc
	if (ctx.cr6.eq) goto loc_820F75CC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f75cc
	if (ctx.cr6.eq) goto loc_820F75CC;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f75cc
	if (ctx.cr6.eq) goto loc_820F75CC;
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f75cc
	if (ctx.cr0.eq) goto loc_820F75CC;
	// addi r10,r30,9
	ctx.r10.s64 = ctx.r30.s64 + 9;
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,13
	ctx.r9.s64 = ctx.r30.s64 + 13;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// addi r26,r30,64
	ctx.r26.s64 = ctx.r30.s64 + 64;
	// stwx r5,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r5.u32);
	// addi r6,r30,68
	ctx.r6.s64 = ctx.r30.s64 + 68;
	// ld r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stdx r27,r8,r31
	PPC_STORE_U64(ctx.r8.u32 + ctx.r31.u32, ctx.r27.u64);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// stwx r28,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r28.u32);
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r6,r26,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r30,86
	ctx.r4.s64 = ctx.r30.s64 + 86;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r7,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// stfsx f12,r5,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, temp.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stfsx f13,r6,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, temp.u32);
	// ld r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// lfs f0,2148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// ld r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// stfsx f0,r8,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// stfsx f31,r10,r31
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// stwx r28,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r28.u32);
	// stfsx f0,r9,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820f75a4
	if (!ctx.cr6.eq) goto loc_820F75A4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F75A4:
	// bl 0x820bd9a0
	ctx.lr = 0x820F75A8;
	sub_820BD9A0(ctx, base);
	// addi r11,r30,412
	ctx.r11.s64 = ctx.r30.s64 + 412;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// ori r6,r9,64
	ctx.r6.u64 = ctx.r9.u64 | 64;
	// bl 0x820f9ed0
	ctx.lr = 0x820F75CC;
	sub_820F9ED0(ctx, base);
loc_820F75CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820F75D8"))) PPC_WEAK_FUNC(sub_820F75D8);
PPC_FUNC_IMPL(__imp__sub_820F75D8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,188
	ctx.r11.s64 = ctx.r4.s64 + 188;
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F75EC"))) PPC_WEAK_FUNC(sub_820F75EC);
PPC_FUNC_IMPL(__imp__sub_820F75EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F75F0"))) PPC_WEAK_FUNC(sub_820F75F0);
PPC_FUNC_IMPL(__imp__sub_820F75F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820F75F8;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r4,9
	ctx.r10.s64 = ctx.r4.s64 + 9;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f762c
	if (ctx.cr6.eq) goto loc_820F762C;
	// addi r9,r4,86
	ctx.r9.s64 = ctx.r4.s64 + 86;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r8.u32);
loc_820F762C:
	// addi r9,r31,13
	ctx.r9.s64 = ctx.r31.s64 + 13;
	// addi r6,r31,5
	ctx.r6.s64 = ctx.r31.s64 + 5;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// add r30,r8,r3
	ctx.r30.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r11.u32);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r31,68
	ctx.r6.s64 = ctx.r31.s64 + 68;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// ld r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 72;
	// std r29,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r29.u64);
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// std r27,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r27.u64);
	// lfsx f12,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// stfsx f13,r6,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, temp.u32);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lfs f0,2148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stfsx f11,r4,r3
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, temp.u32);
	// stfsx f12,r5,r3
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// stwx r28,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r28.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,2144(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsx f0,r8,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// stfsx f31,r10,r3
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// stfsx f0,r9,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820f76ec
	if (!ctx.cr6.eq) goto loc_820F76EC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F76EC:
	// lis r4,18763
	ctx.r4.s64 = 1229651968;
	// ori r4,r4,21573
	ctx.r4.u64 = ctx.r4.u64 | 21573;
	// bl 0x821882d0
	ctx.lr = 0x820F76F8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7708
	if (ctx.cr6.eq) goto loc_820F7708;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f770c
	goto loc_820F770C;
loc_820F7708:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F770C:
	// addi r11,r31,412
	ctx.r11.s64 = ctx.r31.s64 + 412;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// clrlwi r6,r9,28
	ctx.r6.u64 = ctx.r9.u32 & 0xF;
	// bl 0x820f9ed0
	ctx.lr = 0x820F7730;
	sub_820F9ED0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820F773C"))) PPC_WEAK_FUNC(sub_820F773C);
PPC_FUNC_IMPL(__imp__sub_820F773C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7740"))) PPC_WEAK_FUNC(sub_820F7740);
PPC_FUNC_IMPL(__imp__sub_820F7740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820F7748;
	sub_82248788(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f7774
	if (!ctx.cr6.eq) goto loc_820F7774;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820804f8
	ctx.lr = 0x820F776C;
	sub_820804F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820F7774:
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,19780
	ctx.r4.u64 = ctx.r4.u64 | 19780;
	// bl 0x821882d0
	ctx.lr = 0x820F7784;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7794
	if (ctx.cr6.eq) goto loc_820F7794;
	// lwz r29,24(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f7798
	goto loc_820F7798;
loc_820F7794:
	// li r29,0
	ctx.r29.s64 = 0;
loc_820F7798:
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x820f77b8
	if (!ctx.cr6.eq) goto loc_820F77B8;
	// li r31,33
	ctx.r31.s64 = 33;
loc_820F77B8:
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,556(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 556);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820804f8
	ctx.lr = 0x820F77FC;
	sub_820804F8(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r5,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// bl 0x820e7588
	ctx.lr = 0x820F7820;
	sub_820E7588(ctx, base);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82289c50
	ctx.lr = 0x820F783C;
	sub_82289C50(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820F7844"))) PPC_WEAK_FUNC(sub_820F7844);
PPC_FUNC_IMPL(__imp__sub_820F7844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7848"))) PPC_WEAK_FUNC(sub_820F7848);
PPC_FUNC_IMPL(__imp__sub_820F7848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F7850;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,188
	ctx.r11.s64 = ctx.r4.s64 + 188;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// sthx r5,r29,r3
	PPC_STORE_U16(ctx.r29.u32 + ctx.r3.u32, ctx.r5.u16);
	// beq cr6,0x820f7930
	if (ctx.cr6.eq) goto loc_820F7930;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sthx r11,r29,r3
	PPC_STORE_U16(ctx.r29.u32 + ctx.r3.u32, ctx.r11.u16);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820f788c
	if (!ctx.cr6.eq) goto loc_820F788C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F788C:
	// lis r4,21337
	ctx.r4.s64 = 1398341632;
	// ori r4,r4,20035
	ctx.r4.u64 = ctx.r4.u64 | 20035;
	// bl 0x821882d0
	ctx.lr = 0x820F7898;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f78a8
	if (ctx.cr6.eq) goto loc_820F78A8;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f78ac
	goto loc_820F78AC;
loc_820F78A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F78AC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820f16a8
	ctx.lr = 0x820F78B4;
	sub_820F16A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820f7930
	if (!ctx.cr6.gt) goto loc_820F7930;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_820F78C4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r7,352(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 352);
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x820f78f0
	if (ctx.cr6.eq) goto loc_820F78F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820f78c4
	if (ctx.cr6.lt) goto loc_820F78C4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820F78F0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r4,17224
	ctx.r4.s64 = 1128792064;
	// ori r4,r4,16722
	ctx.r4.u64 = ctx.r4.u64 | 16722;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x821882d0
	ctx.lr = 0x820F7908;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7924
	if (ctx.cr6.eq) goto loc_820F7924;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,1284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// sthx r11,r29,r30
	PPC_STORE_U16(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820F7924:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r11,1284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// sthx r11,r29,r30
	PPC_STORE_U16(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u16);
loc_820F7930:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F7938"))) PPC_WEAK_FUNC(sub_820F7938);
PPC_FUNC_IMPL(__imp__sub_820F7938) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f79d4
	if (ctx.cr6.eq) goto loc_820F79D4;
	// addi r31,r3,1248
	ctx.r31.s64 = ctx.r3.s64 + 1248;
	// lis r4,18763
	ctx.r4.s64 = 1229651968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,21573
	ctx.r4.u64 = ctx.r4.u64 | 21573;
	// bl 0x821882d0
	ctx.lr = 0x820F796C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7984
	if (ctx.cr6.eq) goto loc_820F7984;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7984
	if (ctx.cr6.eq) goto loc_820F7984;
	// bl 0x820f8458
	ctx.lr = 0x820F7984;
	sub_820F8458(ctx, base);
loc_820F7984:
	// lis r4,17230
	ctx.r4.s64 = 1129185280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,21328
	ctx.r4.u64 = ctx.r4.u64 | 21328;
	// bl 0x821882d0
	ctx.lr = 0x820F7994;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f79d0
	if (ctx.cr6.eq) goto loc_820F79D0;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f79d0
	if (ctx.cr6.eq) goto loc_820F79D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
loc_820F79B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f75f0
	ctx.lr = 0x820F79C4;
	sub_820F75F0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x820f79b4
	if (ctx.cr6.lt) goto loc_820F79B4;
loc_820F79D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820F79D4:
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

__attribute__((alias("__imp__sub_820F79F0"))) PPC_WEAK_FUNC(sub_820F79F0);
PPC_FUNC_IMPL(__imp__sub_820F79F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820F79F8;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x820f7848
	ctx.lr = 0x820F7A1C;
	sub_820F7848(ctx, base);
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820f7b98
	if (ctx.cr6.eq) goto loc_820F7B98;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820f7a54
	if (!ctx.cr6.eq) goto loc_820F7A54;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F7A54:
	// lis r4,17230
	ctx.r4.s64 = 1129185280;
	// ori r4,r4,21328
	ctx.r4.u64 = ctx.r4.u64 | 21328;
	// bl 0x821882d0
	ctx.lr = 0x820F7A60;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7b98
	if (ctx.cr6.eq) goto loc_820F7B98;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7b98
	if (ctx.cr6.eq) goto loc_820F7B98;
	// lwz r10,340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7b98
	if (ctx.cr6.eq) goto loc_820F7B98;
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f7b98
	if (ctx.cr0.eq) goto loc_820F7B98;
	// addi r10,r30,9
	ctx.r10.s64 = ctx.r30.s64 + 9;
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,13
	ctx.r9.s64 = ctx.r30.s64 + 13;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// addi r26,r30,64
	ctx.r26.s64 = ctx.r30.s64 + 64;
	// stwx r5,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r5.u32);
	// addi r6,r30,68
	ctx.r6.s64 = ctx.r30.s64 + 68;
	// ld r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stdx r27,r8,r31
	PPC_STORE_U64(ctx.r8.u32 + ctx.r31.u32, ctx.r27.u64);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// stwx r28,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r28.u32);
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r6,r26,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r30,86
	ctx.r4.s64 = ctx.r30.s64 + 86;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r7,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// stfsx f12,r5,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, temp.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stfsx f13,r6,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, temp.u32);
	// ld r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// lfs f0,2148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// ld r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// stfsx f0,r8,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// stfsx f31,r10,r31
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// stwx r28,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r28.u32);
	// stfsx f0,r9,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820f7b70
	if (!ctx.cr6.eq) goto loc_820F7B70;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F7B70:
	// bl 0x820bd9a0
	ctx.lr = 0x820F7B74;
	sub_820BD9A0(ctx, base);
	// addi r11,r30,412
	ctx.r11.s64 = ctx.r30.s64 + 412;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// ori r6,r9,64
	ctx.r6.u64 = ctx.r9.u64 | 64;
	// bl 0x820f9ed0
	ctx.lr = 0x820F7B98;
	sub_820F9ED0(ctx, base);
loc_820F7B98:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820F7BA4"))) PPC_WEAK_FUNC(sub_820F7BA4);
PPC_FUNC_IMPL(__imp__sub_820F7BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7BA8"))) PPC_WEAK_FUNC(sub_820F7BA8);
PPC_FUNC_IMPL(__imp__sub_820F7BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F7BB0;
	sub_8224878C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,188
	ctx.r11.s64 = ctx.r5.s64 + 188;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820f7c0c
	if (ctx.cr6.eq) goto loc_820F7C0C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bgt cr6,0x820f7c0c
	if (ctx.cr6.gt) goto loc_820F7C0C;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7c0c
	if (ctx.cr6.eq) goto loc_820F7C0C;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bl 0x820f3bb8
	ctx.lr = 0x820F7C04;
	sub_820F3BB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820f7c40
	goto loc_820F7C40;
loc_820F7C0C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7c40
	if (ctx.cr6.eq) goto loc_820F7C40;
	// lis r4,17230
	ctx.r4.s64 = 1129185280;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// ori r4,r4,21328
	ctx.r4.u64 = ctx.r4.u64 | 21328;
	// bl 0x821882d0
	ctx.lr = 0x820F7C2C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7c3c
	if (ctx.cr6.eq) goto loc_820F7C3C;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820f7c40
	goto loc_820F7C40;
loc_820F7C3C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_820F7C40:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7d50
	if (ctx.cr6.eq) goto loc_820F7D50;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f7d50
	if (ctx.cr6.eq) goto loc_820F7D50;
	// addi r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820f7d50
	if (ctx.cr6.eq) goto loc_820F7D50;
	// lwz r11,340(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7d50
	if (ctx.cr6.eq) goto loc_820F7D50;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f7740
	ctx.lr = 0x820F7C80;
	sub_820F7740(ctx, base);
	// addi r11,r29,5
	ctx.r11.s64 = ctx.r29.s64 + 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// bl 0x8208ea90
	ctx.lr = 0x820F7CA8;
	sub_8208EA90(ctx, base);
	// addi r8,r29,184
	ctx.r8.s64 = ctx.r29.s64 + 184;
	// addi r7,r29,180
	ctx.r7.s64 = ctx.r29.s64 + 180;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r11,r6,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r30.u32);
	// lhzx r10,r5,r30
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r30.u32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r8,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r7,84(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// lwz r11,180(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 180);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// ld r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// ld r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsubs f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fsubs f2,f0,f5
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfs f2,0(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f1,f13,f4
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f0,f12,f3
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820F7D50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F7D7C"))) PPC_WEAK_FUNC(sub_820F7D7C);
PPC_FUNC_IMPL(__imp__sub_820F7D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7D80"))) PPC_WEAK_FUNC(sub_820F7D80);
PPC_FUNC_IMPL(__imp__sub_820F7D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r3,340
	ctx.r11.s64 = ctx.r3.s64 + 340;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lfs f11,2144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,9064(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9064);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,-7560
	ctx.r10.s64 = ctx.r10.s64 + -7560;
loc_820F7DA8:
	// lfs f0,60(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,-132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-100(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -100, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820f7dd8
	if (!ctx.cr6.gt) goto loc_820F7DD8;
	// fdivs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f9,-68(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -68, temp.u32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820f7ddc
	if (ctx.cr6.lt) goto loc_820F7DDC;
loc_820F7DD8:
	// stfs f11,-68(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -68, temp.u32);
loc_820F7DDC:
	// lfs f0,-116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820f7dfc
	if (!ctx.cr6.gt) goto loc_820F7DFC;
	// lfs f13,-84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -84);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f10,-52(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -52, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820f7e00
	if (ctx.cr6.lt) goto loc_820F7E00;
loc_820F7DFC:
	// stfs f11,-52(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -52, temp.u32);
loc_820F7E00:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820f7da8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F7DA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F7E0C"))) PPC_WEAK_FUNC(sub_820F7E0C);
PPC_FUNC_IMPL(__imp__sub_820F7E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7E10"))) PPC_WEAK_FUNC(sub_820F7E10);
PPC_FUNC_IMPL(__imp__sub_820F7E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820F7E18;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r31,1
	ctx.r31.s64 = 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r10,9000
	ctx.r4.s64 = ctx.r10.s64 + 9000;
	// lwz r28,84(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// sth r31,192(r3)
	PPC_STORE_U16(ctx.r3.u32 + 192, ctx.r31.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820F7E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,194(r29)
	PPC_STORE_U16(ctx.r29.u32 + 194, ctx.r3.u16);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// sth r31,512(r29)
	PPC_STORE_U16(ctx.r29.u32 + 512, ctx.r31.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r6,8068
	ctx.r4.s64 = ctx.r6.s64 + 8068;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F7E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,2
	ctx.r30.s64 = 2;
	// sth r3,514(r29)
	PPC_STORE_U16(ctx.r29.u32 + 514, ctx.r3.u16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// sth r30,832(r29)
	PPC_STORE_U16(ctx.r29.u32 + 832, ctx.r30.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r9,18760
	ctx.r4.s64 = ctx.r9.s64 + 18760;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820F7E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,834(r29)
	PPC_STORE_U16(ctx.r29.u32 + 834, ctx.r3.u16);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r5,9008
	ctx.r4.s64 = ctx.r5.s64 + 9008;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F7EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,836(r29)
	PPC_STORE_U16(ctx.r29.u32 + 836, ctx.r3.u16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// sth r30,1152(r29)
	PPC_STORE_U16(ctx.r29.u32 + 1152, ctx.r30.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r8,18784
	ctx.r4.s64 = ctx.r8.s64 + 18784;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820F7EDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,1154(r29)
	PPC_STORE_U16(ctx.r29.u32 + 1154, ctx.r3.u16);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r4,9020
	ctx.r4.s64 = ctx.r4.s64 + 9020;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F7EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,1156(r29)
	PPC_STORE_U16(ctx.r29.u32 + 1156, ctx.r3.u16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// sth r31,1472(r29)
	PPC_STORE_U16(ctx.r29.u32 + 1472, ctx.r31.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r8,9040
	ctx.r4.s64 = ctx.r8.s64 + 9040;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820F7F20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,1474(r29)
	PPC_STORE_U16(ctx.r29.u32 + 1474, ctx.r3.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820F7F2C"))) PPC_WEAK_FUNC(sub_820F7F2C);
PPC_FUNC_IMPL(__imp__sub_820F7F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7F30"))) PPC_WEAK_FUNC(sub_820F7F30);
PPC_FUNC_IMPL(__imp__sub_820F7F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r9,16
	ctx.r9.s64 = 16;
	// lfs f13,9864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9864);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,146
	ctx.r10.s64 = ctx.r3.s64 + 146;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f12,8056(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8056);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f12,84(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f13,124(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f13,140(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// sth r11,144(r3)
	PPC_STORE_U16(ctx.r3.u32 + 144, ctx.r11.u16);
loc_820F7FEC:
	// sthu r8,2(r10)
	// bdnz 0x820f7fec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F7FEC;
	// li r9,3
	ctx.r9.s64 = 3;
	// stfs f0,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stw r8,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r8.u32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stfs f0,212(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// addi r10,r3,284
	ctx.r10.s64 = ctx.r3.s64 + 284;
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stfs f13,220(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
loc_820F8034:
	// stfs f0,-28(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -28, temp.u32);
	// stw r11,-40(r10)
	PPC_STORE_U32(ctx.r10.u32 + -40, ctx.r11.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820f8034
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F8034;
	// stfs f0,280(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stfs f0,276(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// stfs f0,272(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// stfs f13,284(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 284, temp.u32);
	// stfs f0,300(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F805C"))) PPC_WEAK_FUNC(sub_820F805C);
PPC_FUNC_IMPL(__imp__sub_820F805C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F8060"))) PPC_WEAK_FUNC(sub_820F8060);
PPC_FUNC_IMPL(__imp__sub_820F8060) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,24124
	ctx.r10.s64 = ctx.r11.s64 + 24124;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820f8098
	if (ctx.cr6.eq) goto loc_820F8098;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820F8098;
	sub_82183E40(ctx, base);
loc_820F8098:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f80b4
	if (ctx.cr6.eq) goto loc_820F80B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820F80B4;
	sub_82183E40(ctx, base);
loc_820F80B4:
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820F80C0;
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

__attribute__((alias("__imp__sub_820F80D8"))) PPC_WEAK_FUNC(sub_820F80D8);
PPC_FUNC_IMPL(__imp__sub_820F80D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F80E0;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f12,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x820f8234
	if (!ctx.cr6.gt) goto loc_820F8234;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lfs f31,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// blt cr6,0x820f815c
	if (ctx.cr6.lt) goto loc_820F815C;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x820f815c
	if (!ctx.cr6.gt) goto loc_820F815C;
	// fdivs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x820f8178
	if (ctx.cr6.lt) goto loc_820F8178;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820f815c
	if (!ctx.cr6.gt) goto loc_820F815C;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x820f8168
	goto loc_820F8168;
loc_820F815C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x820f8178
	if (ctx.cr6.lt) goto loc_820F8178;
loc_820F8168:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
loc_820F8178:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,24020
	ctx.r11.s64 = ctx.r11.s64 + 24020;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// lfs f13,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,-296
	ctx.r3.s64 = ctx.r11.s64 + -296;
	// lfs f12,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,36(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lwzx r9,r5,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwzx r11,r5,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,180(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,147
	ctx.r3.s64 = ctx.r11.s64 + 147;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1424
	ctx.r9.s64 = ctx.r11.s64 + 1424;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r6,r10,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// ld r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r8,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// ld r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r6,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r6.u64);
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r10,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r10.u64);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fadds f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82186cd8
	ctx.lr = 0x820F8230;
	sub_82186CD8(ctx, base);
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_820F8234:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F8240"))) PPC_WEAK_FUNC(sub_820F8240);
PPC_FUNC_IMPL(__imp__sub_820F8240) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f827c
	if (!ctx.cr6.eq) goto loc_820F827C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
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
loc_820F827C:
	// bl 0x8208e1b8
	ctx.lr = 0x820F8280;
	sub_8208E1B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820f82d8
	if (ctx.cr6.eq) goto loc_820F82D8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,1924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f82d8
	if (ctx.cr6.eq) goto loc_820F82D8;
	// lbz r11,867(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 867);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// ble cr6,0x820f82d8
	if (!ctx.cr6.gt) goto loc_820F82D8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,8616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
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
loc_820F82D8:
	// lfs f13,1692(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1696(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820f8340
	if (ctx.cr6.eq) goto loc_820F8340;
	// lfs f12,1704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,1708(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f12,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f9,1704(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// fmadds f8,f11,f9,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f8,1696(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// fsubs f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820f831c
	if (!ctx.cr6.lt) goto loc_820F831C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820F831C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,11484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11484);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x820f8338
	if (!ctx.cr6.lt) goto loc_820F8338;
	// stfs f13,1696(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// stfs f12,1700(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
	// stfs f12,1704(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
loc_820F8338:
	// lfs f13,1696(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	ctx.f13.f64 = double(temp.f32);
	// b 0x820f8350
	goto loc_820F8350;
loc_820F8340:
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1700(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
	// stfs f0,1704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// stfs f0,1708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1708, temp.u32);
loc_820F8350:
	// fmr f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f13.f64;
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

__attribute__((alias("__imp__sub_820F8368"))) PPC_WEAK_FUNC(sub_820F8368);
PPC_FUNC_IMPL(__imp__sub_820F8368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// lwz r10,1732(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// lfs f13,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// bgt cr6,0x820f83ec
	if (ctx.cr6.gt) goto loc_820F83EC;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820f83a0
	// bdzf 4*cr6+eq,0x820f83a8
	// bne cr6,0x820f83c4
	if (!ctx.cr6.eq) goto loc_820F83C4;
	// lfs f0,560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1692(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1692, temp.u32);
	// b 0x820f83ec
	goto loc_820F83EC;
loc_820F83A0:
	// stfs f13,1692(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1692, temp.u32);
	// b 0x820f83ec
	goto loc_820F83EC;
loc_820F83A8:
	// lfs f0,560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f0,1692(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1692, temp.u32);
	// beq cr6,0x820f83ec
	if (ctx.cr6.eq) goto loc_820F83EC;
	// lfs f0,560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1692(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1692, temp.u32);
	// b 0x820f83ec
	goto loc_820F83EC;
loc_820F83C4:
	// lfs f0,560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f0,1692(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1692, temp.u32);
	// beq cr6,0x820f83ec
	if (ctx.cr6.eq) goto loc_820F83EC;
	// lfs f0,556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f10,560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,1692(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1692, temp.u32);
loc_820F83EC:
	// stw r4,1688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1688, ctx.r4.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x820f8418
	if (ctx.cr6.gt) goto loc_820F8418;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1692(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1692);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1696(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1696, temp.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1704(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1704, temp.u32);
	// stfs f0,1708(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1708, temp.u32);
	// stfs f0,1700(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1700, temp.u32);
	// blr 
	return;
loc_820F8418:
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// addi r8,r10,-7560
	ctx.r8.s64 = ctx.r10.s64 + -7560;
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1704(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1704, temp.u32);
	// fdivs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f10,1708(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1708, temp.u32);
	// lfs f0,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfs f9,1700(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1700, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F8458"))) PPC_WEAK_FUNC(sub_820F8458);
PPC_FUNC_IMPL(__imp__sub_820F8458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f13,156(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f13,172(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f0,472(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 472, temp.u32);
	// stfs f0,468(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 468, temp.u32);
	// stfs f0,464(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// stfs f13,476(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 476, temp.u32);
	// stfs f0,488(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 488, temp.u32);
	// stfs f0,484(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 484, temp.u32);
	// stfs f0,480(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 480, temp.u32);
	// stfs f13,492(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 492, temp.u32);
	// stfs f0,792(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 792, temp.u32);
	// stfs f0,788(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 788, temp.u32);
	// stfs f0,784(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 784, temp.u32);
	// stfs f13,796(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 796, temp.u32);
	// stfs f0,808(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 808, temp.u32);
	// stfs f0,804(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 804, temp.u32);
	// stfs f0,800(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 800, temp.u32);
	// stfs f13,812(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 812, temp.u32);
	// stfs f0,1112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1112, temp.u32);
	// stfs f0,1108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1108, temp.u32);
	// stfs f0,1104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1104, temp.u32);
	// stfs f13,1116(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1116, temp.u32);
	// stfs f0,1128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1128, temp.u32);
	// stfs f0,1124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1124, temp.u32);
	// stfs f0,1120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1120, temp.u32);
	// stfs f13,1132(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1132, temp.u32);
	// stfs f0,1432(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1432, temp.u32);
	// stfs f0,1428(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1428, temp.u32);
	// stfs f0,1424(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1424, temp.u32);
	// stfs f13,1436(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1436, temp.u32);
	// stfs f0,1448(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1448, temp.u32);
	// stfs f0,1444(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1444, temp.u32);
	// stfs f0,1440(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1440, temp.u32);
	// stfs f13,1452(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1452, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F850C"))) PPC_WEAK_FUNC(sub_820F850C);
PPC_FUNC_IMPL(__imp__sub_820F850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F8510"))) PPC_WEAK_FUNC(sub_820F8510);
PPC_FUNC_IMPL(__imp__sub_820F8510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820F8518;
	sub_82248788(ctx, base);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r9,192(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 192);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x820f87b8
	if (ctx.cr6.lt) goto loc_820F87B8;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r30,-3
	ctx.r28.s64 = ctx.r30.s64 + -3;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r31,r11,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
loc_820F8550:
	// add r11,r31,r7
	ctx.r11.u64 = ctx.r31.u64 + ctx.r7.u64;
	// addi r11,r11,97
	ctx.r11.s64 = ctx.r11.s64 + 97;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820f85e8
	if (ctx.cr6.lt) goto loc_820F85E8;
	// lwz r9,184(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 184);
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,180(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 180);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f2,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_820F85E8:
	// add r11,r31,r7
	ctx.r11.u64 = ctx.r31.u64 + ctx.r7.u64;
	// addi r11,r11,98
	ctx.r11.s64 = ctx.r11.s64 + 98;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820f8680
	if (ctx.cr6.lt) goto loc_820F8680;
	// lwz r9,184(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 184);
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,180(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 180);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_820F8680:
	// add r11,r31,r7
	ctx.r11.u64 = ctx.r31.u64 + ctx.r7.u64;
	// addi r11,r11,99
	ctx.r11.s64 = ctx.r11.s64 + 99;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820f8718
	if (ctx.cr6.lt) goto loc_820F8718;
	// lwz r9,184(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 184);
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,180(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 180);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_820F8718:
	// add r11,r29,r7
	ctx.r11.u64 = ctx.r29.u64 + ctx.r7.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820f87ac
	if (ctx.cr6.lt) goto loc_820F87AC;
	// lwz r11,184(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 184);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,180(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 180);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f2,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_820F87AC:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x820f8550
	if (ctx.cr6.lt) goto loc_820F8550;
loc_820F87B8:
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x820f8874
	if (!ctx.cr6.lt) goto loc_820F8874;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r7,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r7.s64;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r11,97
	ctx.r8.s64 = ctx.r11.s64 + 97;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F87D8:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820f886c
	if (ctx.cr6.lt) goto loc_820F886C;
	// lwz r11,184(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 184);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,180(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 180);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f4,f12
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_820F886C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x820f87d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F87D8;
loc_820F8874:
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820F8878"))) PPC_WEAK_FUNC(sub_820F8878);
PPC_FUNC_IMPL(__imp__sub_820F8878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820F8880;
	sub_8224878C(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,1732(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f8a48
	if (ctx.cr6.eq) goto loc_820F8A48;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lwz r11,1936(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1936);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r9,-26064
	ctx.r7.s64 = ctx.r9.s64 + -26064;
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lfs f12,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// lwzx r7,r31,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// beq cr6,0x820f88c4
	if (ctx.cr6.eq) goto loc_820F88C4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x820f88c8
	if (!ctx.cr6.eq) goto loc_820F88C8;
loc_820F88C4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_820F88C8:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// lfs f10,8344(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8344);
	ctx.f10.f64 = double(temp.f32);
	// blt cr6,0x820f8958
	if (ctx.cr6.lt) goto loc_820F8958;
	// beq cr6,0x820f8940
	if (ctx.cr6.eq) goto loc_820F8940;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bge cr6,0x820f89c8
	if (!ctx.cr6.lt) goto loc_820F89C8;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r5,596(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lwz r11,592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,180(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	// lfs f0,9052(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 9052);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f13,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f9,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f9,f0,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f11.f64));
	// beq cr6,0x820f8934
	if (ctx.cr6.eq) goto loc_820F8934;
	// lfs f0,2004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x820f89c8
	goto loc_820F89C8;
loc_820F8934:
	// lfs f0,2260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2260);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x820f89c8
	goto loc_820F89C8;
loc_820F8940:
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// lwz r9,592(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// lwz r29,36(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r8,592(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 592);
	// b 0x820f8978
	goto loc_820F8978;
loc_820F8958:
	// lwz r10,1356(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1356);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820f8a48
	if (ctx.cr6.eq) goto loc_820F8A48;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// lwz r9,596(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// lwz r29,36(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r8,604(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 604);
loc_820F8978:
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r30,40(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r8,r8,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lfs f0,8060(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f11,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fsubs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
loc_820F89C8:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f11,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,264(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// stfs f12,260(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// stfs f12,256(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 256, temp.u32);
	// stfs f11,268(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// stfs f0,260(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// ble cr6,0x820f8a04
	if (!ctx.cr6.gt) goto loc_820F8A04;
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// b 0x820f8a10
	goto loc_820F8A10;
loc_820F8A04:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,24156(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24156);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_820F8A10:
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,260(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// stw r4,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r4.u32);
	// stfs f12,272(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f8a44
	if (ctx.cr6.eq) goto loc_820F8A44;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r10.u64);
	// lfd f0,-48(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
loc_820F8A44:
	// stfs f11,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 276, temp.u32);
loc_820F8A48:
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820F8A4C"))) PPC_WEAK_FUNC(sub_820F8A4C);
PPC_FUNC_IMPL(__imp__sub_820F8A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F8A50"))) PPC_WEAK_FUNC(sub_820F8A50);
PPC_FUNC_IMPL(__imp__sub_820F8A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// stw r8,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r8.u32);
	// stfs f0,276(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 276, temp.u32);
	// stfs f0,264(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// stfs f0,260(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// stfs f0,256(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 256, temp.u32);
	// stfs f13,268(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F8A94"))) PPC_WEAK_FUNC(sub_820F8A94);
PPC_FUNC_IMPL(__imp__sub_820F8A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F8A98"))) PPC_WEAK_FUNC(sub_820F8A98);
PPC_FUNC_IMPL(__imp__sub_820F8A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r8,r10,256
	ctx.r8.s64 = ctx.r10.s64 + 256;
	// ld r7,256(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 256);
	// ld r6,264(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 264);
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// bne cr6,0x820f8b30
	if (!ctx.cr6.eq) goto loc_820F8B30;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lwz r7,36(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r11,2000
	ctx.r5.s64 = ctx.r11.s64 + 2000;
	// ld r4,2000(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2000);
	// ld r11,2008(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2008);
	// lfs f0,8060(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r5,640(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 640);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// rlwinm r9,r5,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// lfs f13,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,180(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 180);
	// lfs f12,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// b 0x820f8ba4
	goto loc_820F8BA4;
loc_820F8B30:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820f8b9c
	if (!ctx.cr6.eq) goto loc_820F8B9C;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lwz r7,36(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r11,2256
	ctx.r5.s64 = ctx.r11.s64 + 2256;
	// ld r4,2256(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2256);
	// ld r11,2264(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2264);
	// lfs f0,8060(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r5,672(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 672);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// rlwinm r9,r5,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// lfs f10,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,180(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 180);
	// lfs f11,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// b 0x820f8ba4
	goto loc_820F8BA4;
loc_820F8B9C:
	// lfs f0,-24(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
loc_820F8BA4:
	// lfs f12,272(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,-20(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f7,8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F8BD0"))) PPC_WEAK_FUNC(sub_820F8BD0);
PPC_FUNC_IMPL(__imp__sub_820F8BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820F8BD8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r3,1376
	ctx.r6.s64 = ctx.r3.s64 + 1376;
	// lfs f13,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// li r5,20
	ctx.r5.s64 = 20;
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820F8C04:
	// addi r7,r6,-1280
	ctx.r7.s64 = ctx.r6.s64 + -1280;
	// li r8,0
	ctx.r8.s64 = 0;
loc_820F8C0C:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F8C1C:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x820f8c34
	if (!ctx.cr6.eq) goto loc_820F8C34;
	// stfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// b 0x820f8c38
	goto loc_820F8C38;
loc_820F8C34:
	// stfsx f13,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
loc_820F8C38:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x820f8c1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F8C1C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x820f8c0c
	if (ctx.cr6.lt) goto loc_820F8C0C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_820F8C50:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F8C60:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x820f8c78
	if (!ctx.cr6.eq) goto loc_820F8C78;
	// stfsx f0,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// b 0x820f8c7c
	goto loc_820F8C7C;
loc_820F8C78:
	// stfsx f13,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
loc_820F8C7C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x820f8c60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F8C60;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x820f8c50
	if (ctx.cr6.lt) goto loc_820F8C50;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stwu r3,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r4.u32 = ea;
	// addi r6,r6,64
	ctx.r6.s64 = ctx.r6.s64 + 64;
	// bne 0x820f8c04
	if (!ctx.cr0.eq) goto loc_820F8C04;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
	// addi r28,r11,-26144
	ctx.r28.s64 = ctx.r11.s64 + -26144;
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// lwz r29,84(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
loc_820F8CB8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F8CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// addi r9,r28,80
	ctx.r9.s64 = ctx.r28.s64 + 80;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820f8cb8
	if (ctx.cr6.lt) goto loc_820F8CB8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820F8CF0"))) PPC_WEAK_FUNC(sub_820F8CF0);
PPC_FUNC_IMPL(__imp__sub_820F8CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// ld r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r9,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r9.u64);
	// ld r6,40(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r6,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.r6.u64);
	// ld r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r10,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r10.u64);
	// ld r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r9,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r9.u64);
	// ld r8,64(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 64);
	// std r8,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, ctx.r8.u64);
	// ld r7,72(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 72);
	// std r7,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, ctx.r7.u64);
	// ld r6,80(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 80);
	// std r6,144(r3)
	PPC_STORE_U64(ctx.r3.u32 + 144, ctx.r6.u64);
	// ld r10,88(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 88);
	// std r10,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.r10.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
loc_820F8D50:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820f8e0c
	if (ctx.cr6.lt) goto loc_820F8E0C;
	// lwz r9,176(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r8,r11,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// ld r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r7,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r7.u64);
	// ld r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r6,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r6.u64);
	// ld r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r8,32(r9)
	PPC_STORE_U64(ctx.r9.u32 + 32, ctx.r8.u64);
	// ld r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r7,40(r9)
	PPC_STORE_U64(ctx.r9.u32 + 40, ctx.r7.u64);
	// ld r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r6,48(r9)
	PPC_STORE_U64(ctx.r9.u32 + 48, ctx.r6.u64);
	// ld r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r10,56(r9)
	PPC_STORE_U64(ctx.r9.u32 + 56, ctx.r10.u64);
	// bne cr6,0x820f8e0c
	if (!ctx.cr6.eq) goto loc_820F8E0C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f8dec
	if (ctx.cr6.eq) goto loc_820F8DEC;
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r9,r3,208
	ctx.r9.s64 = ctx.r3.s64 + 208;
	// std r10,208(r3)
	PPC_STORE_U64(ctx.r3.u32 + 208, ctx.r10.u64);
	// ld r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r8,216(r3)
	PPC_STORE_U64(ctx.r3.u32 + 216, ctx.r8.u64);
	// b 0x820f8e0c
	goto loc_820F8E0C;
loc_820F8DEC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,212(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
loc_820F8E0C:
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820f8ecc
	if (ctx.cr6.lt) goto loc_820F8ECC;
	// lwz r9,176(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r8,r11,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r31,r10,16
	ctx.r31.s64 = ctx.r10.s64 + 16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r9,r8,160
	ctx.r9.s64 = ctx.r8.s64 + 160;
	// ld r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// std r31,160(r8)
	PPC_STORE_U64(ctx.r8.u32 + 160, ctx.r31.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,168(r8)
	PPC_STORE_U64(ctx.r8.u32 + 168, ctx.r6.u64);
	// ld r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,176(r8)
	PPC_STORE_U64(ctx.r8.u32 + 176, ctx.r9.u64);
	// ld r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r6,184(r8)
	PPC_STORE_U64(ctx.r8.u32 + 184, ctx.r6.u64);
	// ld r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r9,192(r8)
	PPC_STORE_U64(ctx.r8.u32 + 192, ctx.r9.u64);
	// ld r6,40(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r6,200(r8)
	PPC_STORE_U64(ctx.r8.u32 + 200, ctx.r6.u64);
	// ld r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r9,208(r8)
	PPC_STORE_U64(ctx.r8.u32 + 208, ctx.r9.u64);
	// ld r6,56(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r6,216(r8)
	PPC_STORE_U64(ctx.r8.u32 + 216, ctx.r6.u64);
	// bne cr6,0x820f8ecc
	if (!ctx.cr6.eq) goto loc_820F8ECC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f8eac
	if (ctx.cr6.eq) goto loc_820F8EAC;
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r9,r8,208
	ctx.r9.s64 = ctx.r8.s64 + 208;
	// std r10,208(r8)
	PPC_STORE_U64(ctx.r8.u32 + 208, ctx.r10.u64);
	// ld r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r6,216(r8)
	PPC_STORE_U64(ctx.r8.u32 + 216, ctx.r6.u64);
	// b 0x820f8ecc
	goto loc_820F8ECC;
loc_820F8EAC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,212(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,212(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 212, temp.u32);
loc_820F8ECC:
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820f8f88
	if (ctx.cr6.lt) goto loc_820F8F88;
	// lwz r9,176(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r8,r11,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r9,r8,224
	ctx.r9.s64 = ctx.r8.s64 + 224;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// std r7,224(r8)
	PPC_STORE_U64(ctx.r8.u32 + 224, ctx.r7.u64);
	// ld r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,232(r8)
	PPC_STORE_U64(ctx.r8.u32 + 232, ctx.r9.u64);
	// ld r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r7,240(r8)
	PPC_STORE_U64(ctx.r8.u32 + 240, ctx.r7.u64);
	// ld r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r6,248(r8)
	PPC_STORE_U64(ctx.r8.u32 + 248, ctx.r6.u64);
	// ld r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r9,256(r8)
	PPC_STORE_U64(ctx.r8.u32 + 256, ctx.r9.u64);
	// ld r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r7,264(r8)
	PPC_STORE_U64(ctx.r8.u32 + 264, ctx.r7.u64);
	// ld r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r6,272(r8)
	PPC_STORE_U64(ctx.r8.u32 + 272, ctx.r6.u64);
	// ld r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r10,280(r8)
	PPC_STORE_U64(ctx.r8.u32 + 280, ctx.r10.u64);
	// bne cr6,0x820f8f88
	if (!ctx.cr6.eq) goto loc_820F8F88;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f8f68
	if (ctx.cr6.eq) goto loc_820F8F68;
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r9,r8,272
	ctx.r9.s64 = ctx.r8.s64 + 272;
	// std r10,272(r8)
	PPC_STORE_U64(ctx.r8.u32 + 272, ctx.r10.u64);
	// ld r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r7,280(r8)
	PPC_STORE_U64(ctx.r8.u32 + 280, ctx.r7.u64);
	// b 0x820f8f88
	goto loc_820F8F88;
loc_820F8F68:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,276(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,276(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 276, temp.u32);
loc_820F8F88:
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x820f9044
	if (ctx.cr6.lt) goto loc_820F9044;
	// lwz r10,176(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r9,r8,288
	ctx.r9.s64 = ctx.r8.s64 + 288;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// std r7,288(r8)
	PPC_STORE_U64(ctx.r8.u32 + 288, ctx.r7.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,296(r8)
	PPC_STORE_U64(ctx.r8.u32 + 296, ctx.r7.u64);
	// ld r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,304(r8)
	PPC_STORE_U64(ctx.r8.u32 + 304, ctx.r9.u64);
	// ld r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r7,312(r8)
	PPC_STORE_U64(ctx.r8.u32 + 312, ctx.r7.u64);
	// ld r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r9,320(r8)
	PPC_STORE_U64(ctx.r8.u32 + 320, ctx.r9.u64);
	// ld r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r7,328(r8)
	PPC_STORE_U64(ctx.r8.u32 + 328, ctx.r7.u64);
	// ld r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r9,336(r8)
	PPC_STORE_U64(ctx.r8.u32 + 336, ctx.r9.u64);
	// ld r7,56(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r7,344(r8)
	PPC_STORE_U64(ctx.r8.u32 + 344, ctx.r7.u64);
	// bne cr6,0x820f9044
	if (!ctx.cr6.eq) goto loc_820F9044;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f9024
	if (ctx.cr6.eq) goto loc_820F9024;
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r9,r8,336
	ctx.r9.s64 = ctx.r8.s64 + 336;
	// std r10,336(r8)
	PPC_STORE_U64(ctx.r8.u32 + 336, ctx.r10.u64);
	// ld r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r7,344(r8)
	PPC_STORE_U64(ctx.r8.u32 + 344, ctx.r7.u64);
	// b 0x820f9044
	goto loc_820F9044;
loc_820F9024:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,340(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,340(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 340, temp.u32);
loc_820F9044:
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x820f9100
	if (ctx.cr6.lt) goto loc_820F9100;
	// lwz r10,176(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r9,r8,352
	ctx.r9.s64 = ctx.r8.s64 + 352;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// std r6,352(r8)
	PPC_STORE_U64(ctx.r8.u32 + 352, ctx.r6.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,360(r8)
	PPC_STORE_U64(ctx.r8.u32 + 360, ctx.r6.u64);
	// ld r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,368(r8)
	PPC_STORE_U64(ctx.r8.u32 + 368, ctx.r9.u64);
	// ld r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r6,376(r8)
	PPC_STORE_U64(ctx.r8.u32 + 376, ctx.r6.u64);
	// ld r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r9,384(r8)
	PPC_STORE_U64(ctx.r8.u32 + 384, ctx.r9.u64);
	// ld r6,40(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r6,392(r8)
	PPC_STORE_U64(ctx.r8.u32 + 392, ctx.r6.u64);
	// ld r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r9,400(r8)
	PPC_STORE_U64(ctx.r8.u32 + 400, ctx.r9.u64);
	// ld r6,56(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r6,408(r8)
	PPC_STORE_U64(ctx.r8.u32 + 408, ctx.r6.u64);
	// bne cr6,0x820f9100
	if (!ctx.cr6.eq) goto loc_820F9100;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f90e0
	if (ctx.cr6.eq) goto loc_820F90E0;
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r9,r8,400
	ctx.r9.s64 = ctx.r8.s64 + 400;
	// std r10,400(r8)
	PPC_STORE_U64(ctx.r8.u32 + 400, ctx.r10.u64);
	// ld r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r6,408(r8)
	PPC_STORE_U64(ctx.r8.u32 + 408, ctx.r6.u64);
	// b 0x820f9100
	goto loc_820F9100;
loc_820F90E0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,404(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,404(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 404, temp.u32);
loc_820F9100:
	// addi r6,r11,6
	ctx.r6.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x820f91bc
	if (ctx.cr6.lt) goto loc_820F91BC;
	// lwz r10,176(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r9,r8,416
	ctx.r9.s64 = ctx.r8.s64 + 416;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// std r7,416(r8)
	PPC_STORE_U64(ctx.r8.u32 + 416, ctx.r7.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,424(r8)
	PPC_STORE_U64(ctx.r8.u32 + 424, ctx.r7.u64);
	// ld r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,432(r8)
	PPC_STORE_U64(ctx.r8.u32 + 432, ctx.r9.u64);
	// ld r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r7,440(r8)
	PPC_STORE_U64(ctx.r8.u32 + 440, ctx.r7.u64);
	// ld r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r9,448(r8)
	PPC_STORE_U64(ctx.r8.u32 + 448, ctx.r9.u64);
	// ld r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r7,456(r8)
	PPC_STORE_U64(ctx.r8.u32 + 456, ctx.r7.u64);
	// ld r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r9,464(r8)
	PPC_STORE_U64(ctx.r8.u32 + 464, ctx.r9.u64);
	// ld r7,56(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r7,472(r8)
	PPC_STORE_U64(ctx.r8.u32 + 472, ctx.r7.u64);
	// bne cr6,0x820f91bc
	if (!ctx.cr6.eq) goto loc_820F91BC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f919c
	if (ctx.cr6.eq) goto loc_820F919C;
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r9,r8,464
	ctx.r9.s64 = ctx.r8.s64 + 464;
	// std r10,464(r8)
	PPC_STORE_U64(ctx.r8.u32 + 464, ctx.r10.u64);
	// ld r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r7,472(r8)
	PPC_STORE_U64(ctx.r8.u32 + 472, ctx.r7.u64);
	// b 0x820f91bc
	goto loc_820F91BC;
loc_820F919C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,468(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 468);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,468(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 468, temp.u32);
loc_820F91BC:
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x820f9278
	if (ctx.cr6.lt) goto loc_820F9278;
	// lwz r10,176(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r9,r8,480
	ctx.r9.s64 = ctx.r8.s64 + 480;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// std r6,480(r8)
	PPC_STORE_U64(ctx.r8.u32 + 480, ctx.r6.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,488(r8)
	PPC_STORE_U64(ctx.r8.u32 + 488, ctx.r6.u64);
	// ld r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,496(r8)
	PPC_STORE_U64(ctx.r8.u32 + 496, ctx.r9.u64);
	// ld r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r6,504(r8)
	PPC_STORE_U64(ctx.r8.u32 + 504, ctx.r6.u64);
	// ld r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r9,512(r8)
	PPC_STORE_U64(ctx.r8.u32 + 512, ctx.r9.u64);
	// ld r6,40(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r6,520(r8)
	PPC_STORE_U64(ctx.r8.u32 + 520, ctx.r6.u64);
	// ld r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r9,528(r8)
	PPC_STORE_U64(ctx.r8.u32 + 528, ctx.r9.u64);
	// ld r6,56(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r6,536(r8)
	PPC_STORE_U64(ctx.r8.u32 + 536, ctx.r6.u64);
	// bne cr6,0x820f9278
	if (!ctx.cr6.eq) goto loc_820F9278;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f9258
	if (ctx.cr6.eq) goto loc_820F9258;
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r9,r8,528
	ctx.r9.s64 = ctx.r8.s64 + 528;
	// std r10,528(r8)
	PPC_STORE_U64(ctx.r8.u32 + 528, ctx.r10.u64);
	// ld r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r6,536(r8)
	PPC_STORE_U64(ctx.r8.u32 + 536, ctx.r6.u64);
	// b 0x820f9278
	goto loc_820F9278;
loc_820F9258:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,532(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,532(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 532, temp.u32);
loc_820F9278:
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820f9334
	if (ctx.cr6.lt) goto loc_820F9334;
	// lwz r9,176(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// rlwinm r8,r10,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r10,r9,544
	ctx.r10.s64 = ctx.r9.s64 + 544;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r8,544(r9)
	PPC_STORE_U64(ctx.r9.u32 + 544, ctx.r8.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,552(r9)
	PPC_STORE_U64(ctx.r9.u32 + 552, ctx.r10.u64);
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r8,560(r9)
	PPC_STORE_U64(ctx.r9.u32 + 560, ctx.r8.u64);
	// ld r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r7,568(r9)
	PPC_STORE_U64(ctx.r9.u32 + 568, ctx.r7.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,576(r9)
	PPC_STORE_U64(ctx.r9.u32 + 576, ctx.r10.u64);
	// ld r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// std r8,584(r9)
	PPC_STORE_U64(ctx.r9.u32 + 584, ctx.r8.u64);
	// ld r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r7,592(r9)
	PPC_STORE_U64(ctx.r9.u32 + 592, ctx.r7.u64);
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,600(r9)
	PPC_STORE_U64(ctx.r9.u32 + 600, ctx.r11.u64);
	// bne cr6,0x820f9334
	if (!ctx.cr6.eq) goto loc_820F9334;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f9314
	if (ctx.cr6.eq) goto loc_820F9314;
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r10,r9,592
	ctx.r10.s64 = ctx.r9.s64 + 592;
	// std r11,592(r9)
	PPC_STORE_U64(ctx.r9.u32 + 592, ctx.r11.u64);
	// ld r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r8,600(r9)
	PPC_STORE_U64(ctx.r9.u32 + 600, ctx.r8.u64);
	// b 0x820f9334
	goto loc_820F9334;
loc_820F9314:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,596(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,596(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 596, temp.u32);
loc_820F9334:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,13
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 13, ctx.xer);
	// blt cr6,0x820f8d50
	if (ctx.cr6.lt) goto loc_820F8D50;
	// cmpwi cr6,r6,20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 20, ctx.xer);
	// bge cr6,0x820f9410
	if (!ctx.cr6.lt) goto loc_820F9410;
loc_820F9348:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x820f9404
	if (ctx.cr6.lt) goto loc_820F9404;
	// lwz r10,176(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// ld r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r7,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r7.u64);
	// ld r6,24(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r6,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r6.u64);
	// ld r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// std r8,32(r9)
	PPC_STORE_U64(ctx.r9.u32 + 32, ctx.r8.u64);
	// ld r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 40);
	// std r7,40(r9)
	PPC_STORE_U64(ctx.r9.u32 + 40, ctx.r7.u64);
	// ld r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// std r6,48(r9)
	PPC_STORE_U64(ctx.r9.u32 + 48, ctx.r6.u64);
	// ld r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r10,56(r9)
	PPC_STORE_U64(ctx.r9.u32 + 56, ctx.r10.u64);
	// bne cr6,0x820f9404
	if (!ctx.cr6.eq) goto loc_820F9404;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f93e4
	if (ctx.cr6.eq) goto loc_820F93E4;
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r9,r3,208
	ctx.r9.s64 = ctx.r3.s64 + 208;
	// std r10,208(r3)
	PPC_STORE_U64(ctx.r3.u32 + 208, ctx.r10.u64);
	// ld r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r8,216(r3)
	PPC_STORE_U64(ctx.r3.u32 + 216, ctx.r8.u64);
	// b 0x820f9404
	goto loc_820F9404;
loc_820F93E4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,212(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
loc_820F9404:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x820f9348
	if (ctx.cr6.lt) goto loc_820F9348;
loc_820F9410:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F9418"))) PPC_WEAK_FUNC(sub_820F9418);
PPC_FUNC_IMPL(__imp__sub_820F9418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820F9420;
	sub_82248780(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r7,96(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 96);
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// addi r10,r3,1376
	ctx.r10.s64 = ctx.r3.s64 + 1376;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// std r7,1376(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1376, ctx.r7.u64);
	// li r30,1
	ctx.r30.s64 = 1;
	// ld r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 104);
	// std r4,1384(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1384, ctx.r4.u64);
	// ld r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 112);
	// lfs f30,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// std r3,1392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1392, ctx.r3.u64);
	// fdivs f31,f30,f0
	ctx.f31.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// ld r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// std r11,1400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1400, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ld r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 128);
	// addi r27,r11,24040
	ctx.r27.s64 = ctx.r11.s64 + 24040;
	// std r10,1408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1408, ctx.r10.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ld r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 136);
	// lfs f29,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f29.f64 = double(temp.f32);
	// std r9,1416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1416, ctx.r9.u64);
	// ld r8,144(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// std r8,1424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1424, ctx.r8.u64);
	// ld r7,152(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 152);
	// std r7,1432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1432, ctx.r7.u64);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,84(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
loc_820F94B4:
	// rlwinm r10,r30,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r29,88
	ctx.r9.s64 = ctx.r29.s64 + 88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820F94CC:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x820f94cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F94CC;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x820f94ec
	if (!ctx.cr6.eq) goto loc_820F94EC;
	// stfs f29,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// b 0x820f9578
	goto loc_820F9578;
loc_820F94EC:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r26,r9,r31
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820F9510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820F9530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F9550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_820F9578:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,1376
	ctx.r3.s64 = ctx.r29.s64 + 1376;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,1376
	ctx.r5.s64 = ctx.r11.s64 + 1376;
	// bl 0x82289c50
	ctx.lr = 0x820F9598;
	sub_82289C50(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// blt cr6,0x820f94b4
	if (ctx.cr6.lt) goto loc_820F94B4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820F95B8"))) PPC_WEAK_FUNC(sub_820F95B8);
PPC_FUNC_IMPL(__imp__sub_820F95B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x820F95C0;
	sub_8224876C(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r4,18763
	ctx.r4.s64 = 1229651968;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,21573
	ctx.r4.u64 = ctx.r4.u64 | 21573;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820F95E8;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r21,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r21.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r29,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r29.u32);
	// addi r9,r10,24124
	ctx.r9.s64 = ctx.r10.s64 + 24124;
	// stw r31,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r31.u32);
	// stw r22,1684(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1684, ctx.r22.u32);
	// addi r4,r29,1644
	ctx.r4.s64 = ctx.r29.s64 + 1644;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stfs f31,1668(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1668, temp.u32);
	// stw r22,1680(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1680, ctx.r22.u32);
	// stfs f31,1672(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1672, temp.u32);
	// stw r22,1688(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1688, ctx.r22.u32);
	// stfs f31,1676(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1676, temp.u32);
	// addi r3,r29,48
	ctx.r3.s64 = ctx.r29.s64 + 48;
	// lfs f0,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stfs f0,1692(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1692, temp.u32);
	// lfs f13,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1696(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1696, temp.u32);
	// stfs f31,1700(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1700, temp.u32);
	// stfs f31,1704(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1704, temp.u32);
	// stfs f31,1708(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1708, temp.u32);
loc_820F964C:
	// bl 0x820f7f30
	ctx.lr = 0x820F9650;
	sub_820F7F30(ctx, base);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stwu r22,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r4.u32 = ea;
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// bne 0x820f964c
	if (!ctx.cr0.eq) goto loc_820F964C;
	// bl 0x82183850
	ctx.lr = 0x820F9664;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820f967c
	if (ctx.cr6.eq) goto loc_820F967C;
	// li r3,2656
	ctx.r3.s64 = 2656;
	// bl 0x82183448
	ctx.lr = 0x820F9678;
	sub_82183448(ctx, base);
	// b 0x820f9684
	goto loc_820F9684;
loc_820F967C:
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x821845a0
	ctx.lr = 0x820F9684;
	sub_821845A0(ctx, base);
loc_820F9684:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f9698
	if (ctx.cr6.eq) goto loc_820F9698;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f8bd0
	ctx.lr = 0x820F9694;
	sub_820F8BD0(ctx, base);
	// b 0x820f969c
	goto loc_820F969C;
loc_820F9698:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_820F969C:
	// stw r3,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x820F96A4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820f96bc
	if (ctx.cr6.eq) goto loc_820F96BC;
	// li r3,2656
	ctx.r3.s64 = 2656;
	// bl 0x82183448
	ctx.lr = 0x820F96B8;
	sub_82183448(ctx, base);
	// b 0x820f96c4
	goto loc_820F96C4;
loc_820F96BC:
	// li r3,166
	ctx.r3.s64 = 166;
	// bl 0x821845a0
	ctx.lr = 0x820F96C4;
	sub_821845A0(ctx, base);
loc_820F96C4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f96d8
	if (ctx.cr6.eq) goto loc_820F96D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f8bd0
	ctx.lr = 0x820F96D4;
	sub_820F8BD0(ctx, base);
	// b 0x820f96dc
	goto loc_820F96DC;
loc_820F96D8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_820F96DC:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r3,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r3.u32);
	// addi r30,r29,232
	ctx.r30.s64 = ctx.r29.s64 + 232;
	// addi r27,r11,-25992
	ctx.r27.s64 = ctx.r11.s64 + -25992;
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// lwz r31,84(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
loc_820F96F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F9710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820F9728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,-4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + -4, temp.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820F9748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F9760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820F9780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820f9790
	if (!ctx.cr6.eq) goto loc_820F9790;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// b 0x820f979c
	goto loc_820F979C;
loc_820F9790:
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820F979C:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F97B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820f97c8
	if (!ctx.cr6.eq) goto loc_820F97C8;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// b 0x820f97d4
	goto loc_820F97D4;
loc_820F97C8:
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820F97D4:
	// lfs f0,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r27,84
	ctx.r10.s64 = ctx.r27.s64 + 84;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r30,r30,320
	ctx.r30.s64 = ctx.r30.s64 + 320;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820f96f8
	if (ctx.cr6.lt) goto loc_820F96F8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r26,160
	ctx.r26.s64 = 160;
	// li r25,6
	ctx.r25.s64 = 6;
	// addi r30,r29,668
	ctx.r30.s64 = ctx.r29.s64 + 668;
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// addi r23,r11,-26044
	ctx.r23.s64 = ctx.r11.s64 + -26044;
loc_820F9818:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// addi r24,r26,84
	ctx.r24.s64 = ctx.r26.s64 + 84;
loc_820F9820:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r25,r27
	ctx.r10.u64 = ctx.r25.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r9,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820F9840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r7,r11,73
	ctx.r7.s64 = ctx.r11.s64 + 73;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stwx r28,r6,r29
	PPC_STORE_U32(ctx.r6.u32 + ctx.r29.u32, ctx.r28.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F986C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// addi r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 + 76;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, temp.u32);
	// bne cr6,0x820f9890
	if (!ctx.cr6.eq) goto loc_820F9890;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// b 0x820f989c
	goto loc_820F989C;
loc_820F9890:
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820F989C:
	// add r10,r24,r27
	ctx.r10.u64 = ctx.r24.u64 + ctx.r27.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// stwx r11,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r11.u32);
	// blt cr6,0x820f9820
	if (ctx.cr6.lt) goto loc_820F9820;
	// lwz r10,272(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r7,268(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ld r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// ld r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r5,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r5.u64);
	// std r9,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// std r7,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r7.u64);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f6,152(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82187200
	ctx.lr = 0x820F9954;
	sub_82187200(ctx, base);
	// lwz r6,268(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// lfs f5,280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f5.f64 = double(temp.f32);
	// lwz r3,272(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// rlwinm r9,r6,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// fadds f4,f5,f1
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f1,284(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 284, temp.u32);
	// rlwinm r7,r3,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// stfs f4,276(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 276, temp.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,264(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// ld r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// rlwinm r8,r4,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// ld r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r8,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r8.u64);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// std r3,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r3.u64);
	// lfs f1,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// lfs f2,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lfs f3,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f10,f3,f2
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r8,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// ld r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r11.u64);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// ld r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ld r4,56(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// addi r7,r10,48
	ctx.r7.s64 = ctx.r10.s64 + 48;
	// std r4,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r4.u64);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// std r6,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r6.u64);
	// lfs f8,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// stfs f4,132(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f1,f3,f6
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fsubs f0,f2,f8
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// bl 0x82187200
	ctx.lr = 0x820F9A64;
	sub_82187200(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x820f9a74
	if (!ctx.cr6.gt) goto loc_820F9A74;
	// fdivs f0,f30,f1
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// b 0x820f9a78
	goto loc_820F9A78;
loc_820F9A74:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_820F9A78:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82187200
	ctx.lr = 0x820F9AA8;
	sub_82187200(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x820f9ab8
	if (!ctx.cr6.gt) goto loc_820F9AB8;
	// fdivs f0,f30,f1
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// b 0x820f9abc
	goto loc_820F9ABC;
loc_820F9AB8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_820F9ABC:
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f6,f9,f12,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmadds f1,f8,f0,f6
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f6.f64));
	// bl 0x82249b48
	ctx.lr = 0x820F9B00;
	sub_82249B48(ctx, base);
	// addi r25,r25,3
	ctx.r25.s64 = ctx.r25.s64 + 3;
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfsu f5,320(r30)
	// addi r26,r26,80
	ctx.r26.s64 = ctx.r26.s64 + 80;
	// cmpwi cr6,r25,12
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 12, ctx.xer);
	// blt cr6,0x820f9818
	if (ctx.cr6.lt) goto loc_820F9818;
	// stfs f31,144(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 144, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f31,152(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 152, temp.u32);
	// stfs f31,148(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 148, temp.u32);
	// stfs f30,156(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 156, temp.u32);
	// stfs f31,160(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 160, temp.u32);
	// stfs f31,168(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 168, temp.u32);
	// stfs f31,164(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 164, temp.u32);
	// stfs f30,172(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 172, temp.u32);
	// stfs f31,472(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 472, temp.u32);
	// stfs f31,468(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 468, temp.u32);
	// stfs f31,464(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 464, temp.u32);
	// stfs f30,476(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 476, temp.u32);
	// stfs f31,488(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 488, temp.u32);
	// stfs f31,484(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 484, temp.u32);
	// stfs f31,480(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 480, temp.u32);
	// stfs f30,492(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 492, temp.u32);
	// stfs f31,792(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 792, temp.u32);
	// stfs f31,788(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 788, temp.u32);
	// stfs f31,784(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 784, temp.u32);
	// stfs f30,796(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 796, temp.u32);
	// stfs f31,808(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 808, temp.u32);
	// stfs f31,804(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 804, temp.u32);
	// stfs f31,800(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 800, temp.u32);
	// stfs f30,812(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 812, temp.u32);
	// stfs f31,1112(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1112, temp.u32);
	// stfs f31,1108(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1108, temp.u32);
	// stfs f31,1104(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1104, temp.u32);
	// stfs f30,1116(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1116, temp.u32);
	// stfs f31,1128(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1128, temp.u32);
	// stfs f31,1124(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1124, temp.u32);
	// stfs f31,1120(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1120, temp.u32);
	// stfs f30,1132(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1132, temp.u32);
	// stfs f31,1432(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1432, temp.u32);
	// stfs f31,1428(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1428, temp.u32);
	// stfs f31,1424(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1424, temp.u32);
	// stfs f30,1436(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1436, temp.u32);
	// stfs f31,1448(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1448, temp.u32);
	// stfs f31,1444(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1444, temp.u32);
	// stfs f31,1440(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1440, temp.u32);
	// stfs f30,1452(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1452, temp.u32);
	// bl 0x820f7e10
	ctx.lr = 0x820F9BC0;
	sub_820F7E10(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,8056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 132, temp.u32);
	// stfs f0,452(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 452, temp.u32);
	// stfs f0,772(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 772, temp.u32);
	// stfs f0,1092(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1092, temp.u32);
	// stfs f0,1412(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1412, temp.u32);
	// stw r29,44(r21)
	PPC_STORE_U32(ctx.r21.u32 + 44, ctx.r29.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_820F9BF4"))) PPC_WEAK_FUNC(sub_820F9BF4);
PPC_FUNC_IMPL(__imp__sub_820F9BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F9BF8"))) PPC_WEAK_FUNC(sub_820F9BF8);
PPC_FUNC_IMPL(__imp__sub_820F9BF8) {
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
	// bl 0x820f8060
	ctx.lr = 0x820F9C18;
	sub_820F8060(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f9c34
	if (ctx.cr6.eq) goto loc_820F9C34;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820F9C30;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F9C34:
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

__attribute__((alias("__imp__sub_820F9C4C"))) PPC_WEAK_FUNC(sub_820F9C4C);
PPC_FUNC_IMPL(__imp__sub_820F9C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F9C50"))) PPC_WEAK_FUNC(sub_820F9C50);
PPC_FUNC_IMPL(__imp__sub_820F9C50) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x820f8cf0
	ctx.lr = 0x820F9C78;
	sub_820F8CF0(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x820f9418
	ctx.lr = 0x820F9C80;
	sub_820F9418(ctx, base);
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

__attribute__((alias("__imp__sub_820F9C94"))) PPC_WEAK_FUNC(sub_820F9C94);
PPC_FUNC_IMPL(__imp__sub_820F9C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F9C98"))) PPC_WEAK_FUNC(sub_820F9C98);
PPC_FUNC_IMPL(__imp__sub_820F9C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,9864(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9864);
	ctx.f11.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8056);
	ctx.f12.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
loc_820F9CCC:
	// stfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// stfs f0,164(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// stfs f13,176(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stw r9,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r9.u32);
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f13,112(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stw r10,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r10.u32);
	// stfs f12,116(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f12,120(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f0,316(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 316, temp.u32);
	// stfs f0,312(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 312, temp.u32);
	// stfs f0,308(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 308, temp.u32);
	// stfsu f13,320(r11)
	// bdnz 0x820f9ccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F9CCC;
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f13,156(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f13,172(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stfs f0,472(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 472, temp.u32);
	// stfs f0,468(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 468, temp.u32);
	// stfs f0,464(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// stfs f13,476(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 476, temp.u32);
	// stfs f0,488(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 488, temp.u32);
	// stfs f0,484(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 484, temp.u32);
	// stfs f0,480(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 480, temp.u32);
	// stfs f13,492(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 492, temp.u32);
	// stfs f0,792(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 792, temp.u32);
	// stfs f0,788(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 788, temp.u32);
	// stfs f0,784(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 784, temp.u32);
	// stfs f13,796(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 796, temp.u32);
	// stfs f0,808(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 808, temp.u32);
	// stfs f0,804(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 804, temp.u32);
	// stfs f0,800(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 800, temp.u32);
	// stfs f13,812(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 812, temp.u32);
	// stfs f0,1112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1112, temp.u32);
	// stfs f0,1108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1108, temp.u32);
	// stfs f0,1104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1104, temp.u32);
	// stfs f13,1116(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1116, temp.u32);
	// stfs f0,1128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1128, temp.u32);
	// stfs f0,1124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1124, temp.u32);
	// stfs f0,1120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1120, temp.u32);
	// stfs f13,1132(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1132, temp.u32);
	// stfs f0,1432(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1432, temp.u32);
	// stfs f0,1428(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1428, temp.u32);
	// stfs f0,1424(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1424, temp.u32);
	// stfs f13,1436(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1436, temp.u32);
	// stfs f0,1448(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1448, temp.u32);
	// stfs f0,1444(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1444, temp.u32);
	// stfs f0,1440(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1440, temp.u32);
	// stfs f13,1452(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1452, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F9DC8"))) PPC_WEAK_FUNC(sub_820F9DC8);
PPC_FUNC_IMPL(__imp__sub_820F9DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820F9DD0;
	sub_82248784(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,24020
	ctx.r11.s64 = ctx.r11.s64 + 24020;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,-296
	ctx.r7.s64 = ctx.r11.s64 + -296;
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r28,r8,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r29,r1,-64
	ctx.r29.s64 = ctx.r1.s64 + -64;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r8,r28,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r7,180(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r10,147
	ctx.r30.s64 = ctx.r10.s64 + 147;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,1424
	ctx.r8.s64 = ctx.r10.s64 + 1424;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lwzx r6,r9,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// ld r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// rlwinm r10,r6,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lfs f0,2144(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f13,8056(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8056);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r10,48
	ctx.r7.s64 = ctx.r10.s64 + 48;
	// std r9,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r9.u64);
	// std r8,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r8.u64);
	// lfs f12,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f11.f64 = double(temp.f32);
	// ld r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 48);
	// lfs f10,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f10.f64 = double(temp.f32);
	// std r6,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r6.u64);
	// ld r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 56);
	// std r10,120(r11)
	PPC_STORE_U64(ctx.r11.u32 + 120, ctx.r10.u64);
	// lfs f9,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f7,112(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f5,116(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f4,120(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stfs f0,124(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// beq cr6,0x820f9ea8
	if (ctx.cr6.eq) goto loc_820F9EA8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x820f9eb0
	goto loc_820F9EB0;
loc_820F9EA8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
loc_820F9EB0:
	// addi r10,r5,412
	ctx.r10.s64 = ctx.r5.s64 + 412;
	// stfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stfs f13,132(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r9.u32);
	// stwx r4,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r4.u32);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820F9ED0"))) PPC_WEAK_FUNC(sub_820F9ED0);
PPC_FUNC_IMPL(__imp__sub_820F9ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820F9ED8;
	sub_82248788(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,24020
	ctx.r11.s64 = ctx.r11.s64 + 24020;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,-296
	ctx.r7.s64 = ctx.r11.s64 + -296;
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// lwzx r28,r8,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// std r5,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r5.u64);
	// addi r29,r1,-64
	ctx.r29.s64 = ctx.r1.s64 + -64;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r8,r28,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r7,180(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r10,147
	ctx.r30.s64 = ctx.r10.s64 + 147;
	// lfd f0,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r5,r10,1424
	ctx.r5.s64 = ctx.r10.s64 + 1424;
	// addi r4,r4,412
	ctx.r4.s64 = ctx.r4.s64 + 412;
	// li r30,-1
	ctx.r30.s64 = -1;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// ld r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f0,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r31,r10,48
	ctx.r31.s64 = ctx.r10.s64 + 48;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// std r8,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r8.u64);
	// std r5,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r5.u64);
	// lfs f11,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f9.f64 = double(temp.f32);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lfs f13,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// std r10,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r10.u64);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r9,120(r11)
	PPC_STORE_U64(ctx.r11.u32 + 120, ctx.r9.u64);
	// lfs f8,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f7,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fsubs f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// stfs f6,112(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f3,116(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f4,120(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// stw r30,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r30.u32);
	// stfs f0,124(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// stfs f13,128(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// stfs f12,132(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// stwx r6,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r6.u32);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820F9FD4"))) PPC_WEAK_FUNC(sub_820F9FD4);
PPC_FUNC_IMPL(__imp__sub_820F9FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F9FD8"))) PPC_WEAK_FUNC(sub_820F9FD8);
PPC_FUNC_IMPL(__imp__sub_820F9FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x820F9FE0;
	sub_82248774(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x820f8cf0
	ctx.lr = 0x820FA008;
	sub_820F8CF0(ctx, base);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,64
	ctx.r27.s64 = 64;
	// addi r23,r11,23920
	ctx.r23.s64 = ctx.r11.s64 + 23920;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r24,r23,4
	ctx.r24.s64 = ctx.r23.s64 + 4;
	// lfs f30,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lwz r25,1936(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1936);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,9864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9864);
	ctx.f31.f64 = double(temp.f32);
loc_820FA030:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x820fa138
	if (ctx.cr6.eq) goto loc_820FA138;
	// addi r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 + 180;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x820fa138
	if (ctx.cr6.lt) goto loc_820FA138;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r31,r11,96
	ctx.r31.s64 = ctx.r11.s64 + 96;
	// lfs f0,2060(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2060);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820fa084
	if (!ctx.cr6.lt) goto loc_820FA084;
	// addi r11,r30,128
	ctx.r11.s64 = ctx.r30.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82192068
	ctx.lr = 0x820FA084;
	sub_82192068(ctx, base);
loc_820FA084:
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820fa118
	if (!ctx.cr6.lt) goto loc_820FA118;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// beq cr6,0x820fa0e8
	if (ctx.cr6.eq) goto loc_820FA0E8;
	// addi r11,r30,167
	ctx.r11.s64 = ctx.r30.s64 + 167;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_820FA0E8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r9.u64);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// std r8,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r8.u64);
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lfs f13,560(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f30,60(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// b 0x820fa134
	goto loc_820FA134;
loc_820FA118:
	// addi r11,r30,167
	ctx.r11.s64 = ctx.r30.s64 + 167;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r9.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r8.u64);
loc_820FA134:
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
loc_820FA138:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r11,r23,80
	ctx.r11.s64 = ctx.r23.s64 + 80;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fa030
	if (ctx.cr6.lt) goto loc_820FA030;
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// bl 0x820f9418
	ctx.lr = 0x820FA154;
	sub_820F9418(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820FA164"))) PPC_WEAK_FUNC(sub_820FA164);
PPC_FUNC_IMPL(__imp__sub_820FA164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FA168"))) PPC_WEAK_FUNC(sub_820FA168);
PPC_FUNC_IMPL(__imp__sub_820FA168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-25912
	ctx.r8.s64 = ctx.r11.s64 + -25912;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bne cr6,0x820fa1c8
	if (!ctx.cr6.eq) goto loc_820FA1C8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// stw r6,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r6.u32);
	// stfs f0,276(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 276, temp.u32);
	// stfs f0,264(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// stfs f0,260(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 260, temp.u32);
	// stfs f0,256(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 256, temp.u32);
	// stfs f13,268(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// blr 
	return;
loc_820FA1C8:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,7948(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7948);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f11,276(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 276, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FA200"))) PPC_WEAK_FUNC(sub_820FA200);
PPC_FUNC_IMPL(__imp__sub_820FA200) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,1680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1680, ctx.r5.u32);
	// stw r5,1688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1688, ctx.r5.u32);
	// lfs f10,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1668(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1668, temp.u32);
	// stfs f10,1672(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1672, temp.u32);
	// stfs f10,1676(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1676, temp.u32);
	// lfs f0,560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1692(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1692, temp.u32);
	// lfs f13,560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,1648
	ctx.r11.s64 = ctx.r3.s64 + 1648;
	// stfs f13,1696(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1696, temp.u32);
	// stfs f10,1700(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1700, temp.u32);
	// stfs f10,1704(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1704, temp.u32);
	// stfs f10,1708(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1708, temp.u32);
	// stw r5,1648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1648, ctx.r5.u32);
	// stw r5,1652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1652, ctx.r5.u32);
	// stw r5,1656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1656, ctx.r5.u32);
	// stw r5,1660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1660, ctx.r5.u32);
	// stw r5,1664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1664, ctx.r5.u32);
	// bl 0x820f9c98
	ctx.lr = 0x820FA268;
	sub_820F9C98(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f10,272(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// stw r5,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r5.u32);
	// stfs f10,276(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// stfs f10,256(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f10,264(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// lfs f0,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f10,260(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stfs f0,268(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stw r5,600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 600, ctx.r5.u32);
	// stfs f10,592(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 592, temp.u32);
	// stfs f10,596(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 596, temp.u32);
	// stfs f10,584(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 584, temp.u32);
	// stfs f10,580(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 580, temp.u32);
	// stfs f10,576(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 576, temp.u32);
	// stfs f0,588(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 588, temp.u32);
	// stw r5,920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 920, ctx.r5.u32);
	// stfs f10,912(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 912, temp.u32);
	// stfs f10,916(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 916, temp.u32);
	// stfs f10,904(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 904, temp.u32);
	// stfs f10,900(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 900, temp.u32);
	// stfs f10,896(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 896, temp.u32);
	// stfs f0,908(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 908, temp.u32);
	// stw r5,1240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1240, ctx.r5.u32);
	// stfs f10,1232(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1232, temp.u32);
	// stfs f10,1236(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1236, temp.u32);
	// stfs f10,1224(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1224, temp.u32);
	// stfs f10,1220(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1220, temp.u32);
	// stfs f10,1216(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1216, temp.u32);
	// stfs f0,1228(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1228, temp.u32);
	// stw r5,1560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1560, ctx.r5.u32);
	// stfs f10,1552(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1552, temp.u32);
	// stfs f10,1556(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1556, temp.u32);
	// stfs f10,1544(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1544, temp.u32);
	// stfs f10,1540(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1540, temp.u32);
	// stfs f10,1536(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1536, temp.u32);
	// stfs f0,1548(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1548, temp.u32);
	// lwz r11,-4984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4984);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fa328
	if (ctx.cr6.eq) goto loc_820FA328;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820fa328
	if (ctx.cr6.eq) goto loc_820FA328;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820FA328:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FA340"))) PPC_WEAK_FUNC(sub_820FA340);
PPC_FUNC_IMPL(__imp__sub_820FA340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x820FA348;
	sub_8224876C(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8224991c
	ctx.lr = 0x820FA350;
	sub_8224991C(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x820f8cf0
	ctx.lr = 0x820FA36C;
	sub_820F8CF0(ctx, base);
	// lwz r3,44(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// bl 0x820f9418
	ctx.lr = 0x820FA374;
	sub_820F9418(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822aa648
	ctx.lr = 0x820FA380;
	sub_822AA648(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// addi r27,r24,1648
	ctx.r27.s64 = ctx.r24.s64 + 1648;
	// lfs f31,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// addi r30,r24,52
	ctx.r30.s64 = ctx.r24.s64 + 52;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r22,r11,24020
	ctx.r22.s64 = ctx.r11.s64 + 24020;
	// addi r28,r10,24256
	ctx.r28.s64 = ctx.r10.s64 + 24256;
loc_820FA3B8:
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820fa3cc
	if (!ctx.cr6.eq) goto loc_820FA3CC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_820FA3CC:
	// lis r4,17230
	ctx.r4.s64 = 1129185280;
	// ori r4,r4,21328
	ctx.r4.u64 = ctx.r4.u64 | 21328;
	// bl 0x821882d0
	ctx.lr = 0x820FA3D8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fa420
	if (ctx.cr6.eq) goto loc_820FA420;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820fa420
	if (ctx.cr6.eq) goto loc_820FA420;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820fa420
	if (ctx.cr6.eq) goto loc_820FA420;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820f7ba8
	ctx.lr = 0x820FA408;
	sub_820F7BA8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r31,r30,-4
	ctx.r31.s64 = ctx.r30.s64 + -4;
	// std r11,-4(r30)
	PPC_STORE_U64(ctx.r30.u32 + -4, ctx.r11.u64);
	// ld r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r10,4(r30)
	PPC_STORE_U64(ctx.r30.u32 + 4, ctx.r10.u64);
	// b 0x820fa530
	goto loc_820FA530;
loc_820FA420:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x820fa4c0
	if (!ctx.cr6.eq) goto loc_820FA4C0;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// bge cr6,0x820fa4c0
	if (!ctx.cr6.lt) goto loc_820FA4C0;
	// lwz r11,1684(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fa464
	if (!ctx.cr6.eq) goto loc_820FA464;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// bne cr6,0x820fa454
	if (!ctx.cr6.eq) goto loc_820FA454;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_820FA454:
	// lis r4,17222
	ctx.r4.s64 = 1128660992;
	// ori r4,r4,19563
	ctx.r4.u64 = ctx.r4.u64 | 19563;
	// bl 0x821882d0
	ctx.lr = 0x820FA460;
	sub_821882D0(ctx, base);
	// stw r3,1684(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1684, ctx.r3.u32);
loc_820FA464:
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lwz r10,1684(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1684);
	// addi r31,r30,-4
	ctx.r31.s64 = ctx.r30.s64 + -4;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rlwinm r9,r7,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ldx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// std r5,-4(r30)
	PPC_STORE_U64(ctx.r30.u32 + -4, ctx.r5.u64);
	// ld r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r4,4(r30)
	PPC_STORE_U64(ctx.r30.u32 + 4, ctx.r4.u64);
	// lwz r11,1684(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1684);
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// ld r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// std r9,268(r30)
	PPC_STORE_U64(ctx.r30.u32 + 268, ctx.r9.u64);
	// ld r7,88(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// std r7,276(r30)
	PPC_STORE_U64(ctx.r30.u32 + 276, ctx.r7.u64);
	// stwx r25,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r25.u32);
	// b 0x820fa530
	goto loc_820FA530;
loc_820FA4C0:
	// addi r11,r22,-296
	ctx.r11.s64 = ctx.r22.s64 + -296;
	// lwz r9,36(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r30,-4
	ctx.r31.s64 = ctx.r30.s64 + -4;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r7,36(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// addi r6,r11,147
	ctx.r6.s64 = ctx.r11.s64 + 147;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,180(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 180);
	// lwzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,-4(r30)
	PPC_STORE_U64(ctx.r30.u32 + -4, ctx.r10.u64);
	// ld r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r9,4(r30)
	PPC_STORE_U64(ctx.r30.u32 + 4, ctx.r9.u64);
	// bne cr6,0x820fa530
	if (!ctx.cr6.eq) goto loc_820FA530;
	// lwzx r10,r29,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	// lwz r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,1424
	ctx.r9.s64 = ctx.r11.s64 + 1424;
	// ld r8,1424(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1424);
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// ld r7,1432(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1432);
	// std r7,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r7.u64);
loc_820FA530:
	// lfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820fa5b4
	if (!ctx.cr6.gt) goto loc_820FA5B4;
	// ld r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 28);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 36);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fsubs f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// fmuls f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f1,f10,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fadds f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_820FA5B4:
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820fa5d4
	if (!ctx.cr6.eq) goto loc_820FA5D4;
	// lfs f0,220(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820fa684
	if (!ctx.cr6.gt) goto loc_820FA684;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fa628
	if (ctx.cr6.eq) goto loc_820FA628;
loc_820FA5D4:
	// lfs f0,220(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,220(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 220, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820fa5f4
	if (!ctx.cr6.lt) goto loc_820FA5F4;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x820fa600
	goto loc_820FA600;
loc_820FA5F4:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x820fa600
	if (!ctx.cr6.gt) goto loc_820FA600;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_820FA600:
	// stfs f0,220(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 220, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820fa628
	if (ctx.cr6.gt) goto loc_820FA628;
	// stfs f31,220(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 220, temp.u32);
	// stw r21,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r21.u32);
	// stfs f31,224(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 224, temp.u32);
	// stfs f31,212(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 212, temp.u32);
	// stfs f31,208(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
	// stfs f31,204(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 204, temp.u32);
	// stfs f30,216(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 216, temp.u32);
loc_820FA628:
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r11,1732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fa684
	if (ctx.cr6.eq) goto loc_820FA684;
	// lwz r11,1328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820fa684
	if (ctx.cr6.eq) goto loc_820FA684;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820f8a98
	ctx.lr = 0x820FA654;
	sub_820F8A98(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_820FA684:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820f80d8
	ctx.lr = 0x820FA690;
	sub_820F80D8(ctx, base);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r30,r30,320
	ctx.r30.s64 = ctx.r30.s64 + 320;
	// cmpwi cr6,r29,20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 20, ctx.xer);
	// blt cr6,0x820fa3b8
	if (ctx.cr6.lt) goto loc_820FA3B8;
	// addi r11,r22,-276
	ctx.r11.s64 = ctx.r22.s64 + -276;
	// addi r10,r22,-276
	ctx.r10.s64 = ctx.r22.s64 + -276;
	// addi r9,r22,-276
	ctx.r9.s64 = ctx.r22.s64 + -276;
	// addi r8,r22,-276
	ctx.r8.s64 = ctx.r22.s64 + -276;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// addi r6,r10,48
	ctx.r6.s64 = ctx.r10.s64 + 48;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r5,r9,72
	ctx.r5.s64 = ctx.r9.s64 + 72;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lfs f28,7948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7948);
	ctx.f28.f64 = double(temp.f32);
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// lfs f26,9856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9856);
	ctx.f26.f64 = double(temp.f32);
	// addi r26,r24,228
	ctx.r26.s64 = ctx.r24.s64 + 228;
	// lfs f27,2136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2136);
	ctx.f27.f64 = double(temp.f32);
	// lfs f25,8328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8328);
	ctx.f25.f64 = double(temp.f32);
loc_820FA700:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// beq cr6,0x820faaa0
	if (ctx.cr6.eq) goto loc_820FAAA0;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// srawi r9,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r11,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r29.s64 - ctx.r11.s64;
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// adde r30,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r6,r10,147
	ctx.r6.s64 = ctx.r10.s64 + 147;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x820fa748
	if (!ctx.cr6.eq) goto loc_820FA748;
	// addi r27,r8,32
	ctx.r27.s64 = ctx.r8.s64 + 32;
	// b 0x820fa754
	goto loc_820FA754;
loc_820FA748:
	// lwz r8,176(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_820FA754:
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// rlwinm r9,r6,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,180(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 180);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_820FA77C:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x820fa77c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FA77C;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82096f18
	ctx.lr = 0x820FA794;
	sub_82096F18(ctx, base);
	// ld r11,-180(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + -180);
	// ld r10,-172(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + -172);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r8,r26,-180
	ctx.r8.s64 = ctx.r26.s64 + -180;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// bl 0x8208ea90
	ctx.lr = 0x820FA7B8;
	sub_8208EA90(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f9,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmuls f6,f8,f25
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f25.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f0,f0,f12
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f4,f13,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fsubs f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// fdivs f1,f3,f6
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f6.f64));
	// bl 0x82249b48
	ctx.lr = 0x820FA7F4;
	sub_82249B48(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820fa804
	if (ctx.cr6.eq) goto loc_820FA804;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820FA804:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// addi r10,r10,147
	ctx.r10.s64 = ctx.r10.s64 + 147;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x820fa82c
	if (!ctx.cr6.eq) goto loc_820FA82C;
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// b 0x820fa838
	goto loc_820FA838;
loc_820FA82C:
	// lwz r9,176(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_820FA838:
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r9,r1,328
	ctx.r9.s64 = ctx.r1.s64 + 328;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FA848:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x820fa848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FA848;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r9,r9,147
	ctx.r9.s64 = ctx.r9.s64 + 147;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820fa878
	if (!ctx.cr6.eq) goto loc_820FA878;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// b 0x820fa884
	goto loc_820FA884;
loc_820FA878:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820FA884:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,456
	ctx.r10.s64 = ctx.r1.s64 + 456;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820FA894:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x820fa894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FA894;
	// fadds f29,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// fmuls f0,f29,f26
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f26.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// bl 0x82186e70
	ctx.lr = 0x820FA8BC;
	sub_82186E70(ctx, base);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82289c50
	ctx.lr = 0x820FA8CC;
	sub_82289C50(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// bl 0x82187200
	ctx.lr = 0x820FA904;
	sub_82187200(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x820fa914
	if (!ctx.cr6.gt) goto loc_820FA914;
	// fdivs f0,f30,f1
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// b 0x820fa918
	goto loc_820FA918;
loc_820FA914:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_820FA918:
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82187200
	ctx.lr = 0x820FA944;
	sub_82187200(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x820fa954
	if (!ctx.cr6.gt) goto loc_820FA954;
	// fdivs f0,f30,f1
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// b 0x820fa958
	goto loc_820FA958;
loc_820FA954:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_820FA958:
	// lfs f13,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmsubs f5,f0,f10,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 - ctx.f8.f64));
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmsubs f4,f9,f13,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmsubs f3,f12,f11,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f3,144(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x82187200
	ctx.lr = 0x820FA9B8;
	sub_82187200(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x820fa9c8
	if (!ctx.cr6.gt) goto loc_820FA9C8;
	// fdivs f0,f30,f1
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// b 0x820fa9cc
	goto loc_820FA9CC;
loc_820FA9C8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_820FA9CC:
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f6,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// stfs f1,152(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f4,144(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f2,148(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f0,f9,f10,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f1,f7,f8,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bge cr6,0x820faa24
	if (!ctx.cr6.lt) goto loc_820FAA24;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// b 0x820faa30
	goto loc_820FAA30;
loc_820FAA24:
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x820faa30
	if (!ctx.cr6.gt) goto loc_820FAA30;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
loc_820FAA30:
	// bl 0x82249b48
	ctx.lr = 0x820FAA34;
	sub_82249B48(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x82187ac0
	ctx.lr = 0x820FAA44;
	sub_82187AC0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82289c50
	ctx.lr = 0x820FAA54;
	sub_82289C50(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// ld r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fmuls f0,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f26.f64));
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// ld r9,280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// ld r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// ld r7,296(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// ld r6,304(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// std r6,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r6.u64);
	// ld r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// std r5,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r5.u64);
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// bl 0x82186e70
	ctx.lr = 0x820FAAA0;
	sub_82186E70(ctx, base);
loc_820FAAA0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r26,r26,320
	ctx.r26.s64 = ctx.r26.s64 + 320;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// blt cr6,0x820fa700
	if (ctx.cr6.lt) goto loc_820FA700;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// addi r25,r22,-180
	ctx.r25.s64 = ctx.r22.s64 + -180;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// addi r28,r1,208
	ctx.r28.s64 = ctx.r1.s64 + 208;
	// addi r23,r24,194
	ctx.r23.s64 = ctx.r24.s64 + 194;
	// lwz r31,84(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_820FAACC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820fac44
	if (ctx.cr6.eq) goto loc_820FAC44;
loc_820FAAE0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,36(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// addi r9,r11,147
	ctx.r9.s64 = ctx.r11.s64 + 147;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r8,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x820fac24
	if (ctx.cr6.eq) goto loc_820FAC24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FAB14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// rlwinm r30,r30,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82289c50
	ctx.lr = 0x820FAB38;
	sub_82289C50(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bl 0x82289c50
	ctx.lr = 0x820FAB54;
	sub_82289C50(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x820fac24
	if (!ctx.cr6.eq) goto loc_820FAC24;
	// lhz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x820fac24
	if (ctx.cr6.lt) goto loc_820FAC24;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// ld r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// bctrl 
	ctx.lr = 0x820FABA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x820FABDC;
	sub_8208EA90(ctx, base);
	// lfs f7,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fsubs f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r7.u64);
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r8,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r8.u64);
loc_820FAC24:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r22,-180
	ctx.r11.s64 = ctx.r22.s64 + -180;
	// add r10,r27,r26
	ctx.r10.u64 = ctx.r27.u64 + ctx.r26.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x820faae0
	if (!ctx.cr6.eq) goto loc_820FAAE0;
loc_820FAC44:
	// addi r11,r22,-180
	ctx.r11.s64 = ctx.r22.s64 + -180;
	// addi r25,r25,20
	ctx.r25.s64 = ctx.r25.s64 + 20;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// addi r26,r26,5
	ctx.r26.s64 = ctx.r26.s64 + 5;
	// addi r23,r23,320
	ctx.r23.s64 = ctx.r23.s64 + 320;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820faacc
	if (ctx.cr6.lt) goto loc_820FAACC;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
loc_820FAC6C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820f8510
	ctx.lr = 0x820FAC78;
	sub_820F8510(ctx, base);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x820fac6c
	if (ctx.cr6.lt) goto loc_820FAC6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r11,r11,24160
	ctx.r11.s64 = ctx.r11.s64 + 24160;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// addi r7,r11,72
	ctx.r7.s64 = ctx.r11.s64 + 72;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// beq cr6,0x820fae70
	if (ctx.cr6.eq) goto loc_820FAE70;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fae70
	if (ctx.cr6.eq) goto loc_820FAE70;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r10,1328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820fae70
	if (ctx.cr6.eq) goto loc_820FAE70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r30,r24,960
	ctx.r30.s64 = ctx.r24.s64 + 960;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// lfs f30,2132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2132);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2140);
	ctx.f31.f64 = double(temp.f32);
loc_820FACF0:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// beq cr6,0x820fae5c
	if (ctx.cr6.eq) goto loc_820FAE5C;
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// li r11,2
	ctx.r11.s64 = 2;
	// srawi r9,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r11,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r29.s64 - ctx.r11.s64;
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// adde r28,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x820fad5c
	if (!ctx.cr6.eq) goto loc_820FAD5C;
	// addi r11,r22,-20
	ctx.r11.s64 = ctx.r22.s64 + -20;
	// lwz r10,36(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r7,r11,147
	ctx.r7.s64 = ctx.r11.s64 + 147;
	// lwz r11,180(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// ld r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r3,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r3.u64);
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
loc_820FAD5C:
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r7,36(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwz r5,36(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,180(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 180);
	// addi r4,r10,147
	ctx.r4.s64 = ctx.r10.s64 + 147;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_820FAD9C:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x820fad9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FAD9C;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82096f18
	ctx.lr = 0x820FADB4;
	sub_82096F18(ctx, base);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// bl 0x8208ea90
	ctx.lr = 0x820FADD4;
	sub_8208EA90(ctx, base);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,-12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f9,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f7,f9,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmuls f6,f8,f25
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f25.f64));
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f0,f0,f12
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f4,f13,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fsubs f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// fdivs f1,f3,f6
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f6.f64));
	// bl 0x82249b48
	ctx.lr = 0x820FAE10;
	sub_82249B48(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820fae40
	if (ctx.cr6.eq) goto loc_820FAE40;
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820fae34
	if (!ctx.cr6.gt) goto loc_820FAE34;
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// b 0x820fae40
	goto loc_820FAE40;
loc_820FAE34:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x820fae40
	if (!ctx.cr6.lt) goto loc_820FAE40;
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
loc_820FAE40:
	// fadds f0,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// fmuls f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lhz r4,86(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// bl 0x82186e70
	ctx.lr = 0x820FAE5C;
	sub_82186E70(ctx, base);
loc_820FAE5C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,320
	ctx.r30.s64 = ctx.r30.s64 + 320;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// blt cr6,0x820facf0
	if (ctx.cr6.lt) goto loc_820FACF0;
loc_820FAE70:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82249968
	ctx.lr = 0x820FAE7C;
	sub_82249968(ctx, base);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_820FAE80"))) PPC_WEAK_FUNC(sub_820FAE80);
PPC_FUNC_IMPL(__imp__sub_820FAE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820FAE88;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,-25888
	ctx.r28.s64 = ctx.r11.s64 + -25888;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_820FAEAC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224bcb0
	ctx.lr = 0x820FAEB8;
	sub_8224BCB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820faeec
	if (ctx.cr6.eq) goto loc_820FAEEC;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplwi cr6,r29,792
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 792, ctx.xer);
	// blt cr6,0x820faeac
	if (ctx.cr6.lt) goto loc_820FAEAC;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_820FAEEC:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r28,20
	ctx.r10.s64 = ctx.r28.s64 + 20;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r6,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r6.u32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r5,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820FAF18"))) PPC_WEAK_FUNC(sub_820FAF18);
PPC_FUNC_IMPL(__imp__sub_820FAF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,176
	ctx.r11.s64 = ctx.r4.s64 * 176;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r7,935(r11)
	PPC_STORE_U8(ctx.r11.u32 + 935, ctx.r7.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,2144(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// sth r5,932(r11)
	PPC_STORE_U16(ctx.r11.u32 + 932, ctx.r5.u16);
	// lfs f13,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// stb r6,934(r11)
	PPC_STORE_U8(ctx.r11.u32 + 934, ctx.r6.u8);
	// stfs f0,884(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 884, temp.u32);
	// stfs f13,920(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 920, temp.u32);
	// sth r7,936(r11)
	PPC_STORE_U16(ctx.r11.u32 + 936, ctx.r7.u16);
	// stfs f1,868(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 868, temp.u32);
	// stw r10,872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 872, ctx.r10.u32);
	// stfs f1,924(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 924, temp.u32);
	// sth r10,944(r11)
	PPC_STORE_U16(ctx.r11.u32 + 944, ctx.r10.u16);
	// stfs f1,928(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 928, temp.u32);
	// sth r10,950(r11)
	PPC_STORE_U16(ctx.r11.u32 + 950, ctx.r10.u16);
	// stb r10,952(r11)
	PPC_STORE_U8(ctx.r11.u32 + 952, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FAF70"))) PPC_WEAK_FUNC(sub_820FAF70);
PPC_FUNC_IMPL(__imp__sub_820FAF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820FAF78;
	sub_82248788(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,2456
	ctx.r3.s64 = ctx.r3.s64 + 2456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8210f010
	ctx.lr = 0x820FAFB0;
	sub_8210F010(ctx, base);
	// addi r3,r31,2504
	ctx.r3.s64 = ctx.r31.s64 + 2504;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8210f010
	ctx.lr = 0x820FAFBC;
	sub_8210F010(ctx, base);
	// addi r3,r31,2096
	ctx.r3.s64 = ctx.r31.s64 + 2096;
	// addi r4,r31,864
	ctx.r4.s64 = ctx.r31.s64 + 864;
	// bl 0x820e4368
	ctx.lr = 0x820FAFC8;
	sub_820E4368(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r31,6816
	ctx.r4.s64 = ctx.r31.s64 + 6816;
	// addi r3,r31,10960
	ctx.r3.s64 = ctx.r31.s64 + 10960;
	// lfs f30,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,24408(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24408);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,2116(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2116, temp.u32);
	// stfs f0,2152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2152, temp.u32);
	// stb r8,2096(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2096, ctx.r8.u8);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8210f8d0
	ctx.lr = 0x820FAFF8;
	sub_8210F8D0(ctx, base);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r7,948(r31)
	PPC_STORE_U16(ctx.r31.u32 + 948, ctx.r7.u16);
	// li r6,-1
	ctx.r6.s64 = -1;
	// sth r30,932(r31)
	PPC_STORE_U16(ctx.r31.u32 + 932, ctx.r30.u16);
	// stb r29,934(r31)
	PPC_STORE_U8(ctx.r31.u32 + 934, ctx.r29.u8);
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// stb r28,935(r31)
	PPC_STORE_U8(ctx.r31.u32 + 935, ctx.r28.u8);
	// stfs f30,884(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stfs f31,920(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// sth r6,936(r31)
	PPC_STORE_U16(ctx.r31.u32 + 936, ctx.r6.u16);
	// stfs f29,868(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// stfs f29,924(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
	// sth r11,944(r31)
	PPC_STORE_U16(ctx.r31.u32 + 944, ctx.r11.u16);
	// stfs f29,928(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 928, temp.u32);
	// sth r11,950(r31)
	PPC_STORE_U16(ctx.r31.u32 + 950, ctx.r11.u16);
	// stb r11,952(r31)
	PPC_STORE_U8(ctx.r31.u32 + 952, ctx.r11.u8);
	// sth r11,1108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1108, ctx.r11.u16);
	// stw r11,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r11.u32);
	// stfs f31,1060(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1060, temp.u32);
	// stfs f31,1096(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1096, temp.u32);
	// sth r11,1284(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1284, ctx.r11.u16);
	// stw r11,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r11.u32);
	// stfs f31,1236(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1236, temp.u32);
	// stfs f31,1272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// sth r11,1460(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1460, ctx.r11.u16);
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// stfs f31,1412(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// stfs f31,1448(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1448, temp.u32);
	// sth r11,1636(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1636, ctx.r11.u16);
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// stfs f31,1588(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// stfs f31,1624(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1624, temp.u32);
	// sth r11,1812(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1812, ctx.r11.u16);
	// stw r11,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r11.u32);
	// stfs f31,1764(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1764, temp.u32);
	// stfs f31,1800(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1800, temp.u32);
	// sth r11,1988(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1988, ctx.r11.u16);
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// stfs f31,1940(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1940, temp.u32);
	// stfs f31,1976(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1976, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820FB0B4"))) PPC_WEAK_FUNC(sub_820FB0B4);
PPC_FUNC_IMPL(__imp__sub_820FB0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB0B8"))) PPC_WEAK_FUNC(sub_820FB0B8);
PPC_FUNC_IMPL(__imp__sub_820FB0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r4,r3,6816
	ctx.r4.s64 = ctx.r3.s64 + 6816;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r3,r3,10960
	ctx.r3.s64 = ctx.r3.s64 + 10960;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8210f8d0
	ctx.lr = 0x820FB0EC;
	sub_8210F8D0(ctx, base);
	// stfs f31,2116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2116, temp.u32);
	// stfs f30,2152(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2152, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB110"))) PPC_WEAK_FUNC(sub_820FB110);
PPC_FUNC_IMPL(__imp__sub_820FB110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820FB118;
	sub_8224878C(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lbz r5,71(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 71);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbz r4,70(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 70);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 68);
	// bl 0x82084690
	ctx.lr = 0x820FB140;
	sub_82084690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fb1d0
	if (ctx.cr6.eq) goto loc_820FB1D0;
	// lhz r11,122(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 122);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x820fb1ac
	if (ctx.cr6.lt) goto loc_820FB1AC;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x820fb1ac
	if (ctx.cr6.gt) goto loc_820FB1AC;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lbz r9,134(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 134);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r4,716(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// beq cr6,0x820fb174
	if (ctx.cr6.eq) goto loc_820FB174;
	// ori r4,r4,516
	ctx.r4.u64 = ctx.r4.u64 | 516;
loc_820FB174:
	// lbz r9,135(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 135);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fb184
	if (ctx.cr6.eq) goto loc_820FB184;
	// ori r4,r4,1032
	ctx.r4.u64 = ctx.r4.u64 | 1032;
loc_820FB184:
	// lbz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fb194
	if (ctx.cr6.eq) goto loc_820FB194;
	// ori r4,r4,16
	ctx.r4.u64 = ctx.r4.u64 | 16;
loc_820FB194:
	// lbz r9,137(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 137);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fb1a4
	if (ctx.cr6.eq) goto loc_820FB1A4;
	// ori r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 | 32;
loc_820FB1A4:
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4d8
	ctx.lr = 0x820FB1AC;
	sub_820EF4D8(ctx, base);
loc_820FB1AC:
	// lhz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x820fb1d0
	if (ctx.cr6.lt) goto loc_820FB1D0;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x820fb1d0
	if (ctx.cr6.gt) goto loc_820FB1D0;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef4d8
	ctx.lr = 0x820FB1D0;
	sub_820EF4D8(ctx, base);
loc_820FB1D0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820FB1D8"))) PPC_WEAK_FUNC(sub_820FB1D8);
PPC_FUNC_IMPL(__imp__sub_820FB1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820FB1E0;
	sub_82248788(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8208de68
	ctx.lr = 0x820FB1FC;
	sub_8208DE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fb268
	if (ctx.cr6.eq) goto loc_820FB268;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbz r5,71(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 71);
	// lbz r4,70(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// lhz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// bl 0x82084690
	ctx.lr = 0x820FB218;
	sub_82084690(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fb268
	if (ctx.cr6.eq) goto loc_820FB268;
	// lhz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 156);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x820fb244
	if (ctx.cr6.lt) goto loc_820FB244;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x820fb244
	if (ctx.cr6.gt) goto loc_820FB244;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef488
	ctx.lr = 0x820FB244;
	sub_820EF488(ctx, base);
loc_820FB244:
	// lhz r11,158(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 158);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x820fb268
	if (ctx.cr6.lt) goto loc_820FB268;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x820fb268
	if (ctx.cr6.gt) goto loc_820FB268;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,596
	ctx.r3.s64 = ctx.r11.s64 + 596;
	// bl 0x820ef488
	ctx.lr = 0x820FB268;
	sub_820EF488(ctx, base);
loc_820FB268:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820FB270"))) PPC_WEAK_FUNC(sub_820FB270);
PPC_FUNC_IMPL(__imp__sub_820FB270) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FB280"))) PPC_WEAK_FUNC(sub_820FB280);
PPC_FUNC_IMPL(__imp__sub_820FB280) {
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
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fb2ac
	if (ctx.cr6.eq) goto loc_820FB2AC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820FB2AC;
	sub_82183E40(ctx, base);
loc_820FB2AC:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fb2c8
	if (ctx.cr6.eq) goto loc_820FB2C8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820FB2C8;
	sub_82183E40(ctx, base);
loc_820FB2C8:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fb2e0
	if (ctx.cr6.eq) goto loc_820FB2E0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820FB2E0;
	sub_82183E40(ctx, base);
loc_820FB2E0:
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_820FB2FC"))) PPC_WEAK_FUNC(sub_820FB2FC);
PPC_FUNC_IMPL(__imp__sub_820FB2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB300"))) PPC_WEAK_FUNC(sub_820FB300);
PPC_FUNC_IMPL(__imp__sub_820FB300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820FB308;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FB328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820fb39c
	if (!ctx.cr6.gt) goto loc_820FB39C;
loc_820FB330:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x820fb344
	if (!ctx.cr6.eq) goto loc_820FB344;
	// addi r29,r11,32
	ctx.r29.s64 = ctx.r11.s64 + 32;
	// b 0x820fb350
	goto loc_820FB350;
loc_820FB344:
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820FB350:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FB368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82187c20
	ctx.lr = 0x820FB37C;
	sub_82187C20(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820FB394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820fb330
	if (ctx.cr6.lt) goto loc_820FB330;
loc_820FB39C:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820fb41c
	if (!ctx.cr6.gt) goto loc_820FB41C;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r30,8864
	ctx.r31.s64 = ctx.r30.s64 + 8864;
loc_820FB3B4:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820FB3D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r29,32
	ctx.r27.s64 = ctx.r29.s64 + 32;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821927b8
	ctx.lr = 0x820FB3E8;
	sub_821927B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,-4144
	ctx.r3.s64 = ctx.r31.s64 + -4144;
	// bl 0x821927b8
	ctx.lr = 0x820FB3F4;
	sub_821927B8(ctx, base);
	// ld r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// std r7,-6192(r31)
	PPC_STORE_U64(ctx.r31.u32 + -6192, ctx.r7.u64);
	// ld r6,24(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// std r6,-6184(r31)
	PPC_STORE_U64(ctx.r31.u32 + -6184, ctx.r6.u64);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmpw cr6,r26,r5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820fb3b4
	if (ctx.cr6.lt) goto loc_820FB3B4;
loc_820FB41C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820FB424"))) PPC_WEAK_FUNC(sub_820FB424);
PPC_FUNC_IMPL(__imp__sub_820FB424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB428"))) PPC_WEAK_FUNC(sub_820FB428);
PPC_FUNC_IMPL(__imp__sub_820FB428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x820FB430;
	sub_82248764(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82249928
	ctx.lr = 0x820FB438;
	sub_82249928(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x820fb74c
	if (!ctx.cr6.gt) goto loc_820FB74C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r23,r6,2
	ctx.r23.s64 = ctx.r6.s64 + 2;
	// lfs f31,9864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9864);
	ctx.f31.f64 = double(temp.f32);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// lfs f28,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,11484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11484);
	ctx.f30.f64 = double(temp.f32);
loc_820FB47C:
	// lbz r8,-2(r23)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + -2);
	// lbz r7,-1(r23)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r23.u32 + -1);
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// beq cr6,0x820fb49c
	if (ctx.cr6.eq) goto loc_820FB49C;
	// mulli r11,r8,4144
	ctx.r11.s64 = ctx.r8.s64 * 4144;
	// add r28,r11,r21
	ctx.r28.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x820fb4a0
	goto loc_820FB4A0;
loc_820FB49C:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_820FB4A0:
	// cmpwi cr6,r7,255
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 255, ctx.xer);
	// beq cr6,0x820fb4b4
	if (ctx.cr6.eq) goto loc_820FB4B4;
	// mulli r11,r7,4144
	ctx.r11.s64 = ctx.r7.s64 * 4144;
	// add r26,r11,r21
	ctx.r26.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x820fb4b8
	goto loc_820FB4B8;
loc_820FB4B4:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_820FB4B8:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// beq cr6,0x820fb4cc
	if (ctx.cr6.eq) goto loc_820FB4CC;
	// mulli r11,r10,4144
	ctx.r11.s64 = ctx.r10.s64 * 4144;
	// add r27,r11,r21
	ctx.r27.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x820fb4d0
	goto loc_820FB4D0;
loc_820FB4CC:
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_820FB4D0:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r28,4096
	ctx.r11.s64 = ctx.r28.s64 + 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820FB4E0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820fb4e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FB4E0;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// addi r11,r26,4096
	ctx.r11.s64 = ctx.r26.s64 + 4096;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820FB4FC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820fb4fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FB4FC;
	// lbz r11,1(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb58c
	if (ctx.cr6.eq) goto loc_820FB58C;
	// lbz r11,2(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fb558
	if (!ctx.cr6.eq) goto loc_820FB558;
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// beq cr6,0x820fb564
	if (ctx.cr6.eq) goto loc_820FB564;
	// cmpwi cr6,r7,255
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 255, ctx.xer);
	// beq cr6,0x820fb564
	if (ctx.cr6.eq) goto loc_820FB564;
	// mulli r11,r8,4144
	ctx.r11.s64 = ctx.r8.s64 * 4144;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lfs f0,4100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x820fb564
	if (!ctx.cr6.lt) goto loc_820FB564;
	// mulli r11,r7,4144
	ctx.r11.s64 = ctx.r7.s64 * 4144;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lfs f0,4100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x820fb564
	if (!ctx.cr6.lt) goto loc_820FB564;
loc_820FB558:
	// stfs f29,4100(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4100, temp.u32);
	// stfs f29,4136(r27)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4136, temp.u32);
	// b 0x820fb740
	goto loc_820FB740;
loc_820FB564:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r23,2
	ctx.r11.s64 = ctx.r23.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820FB574:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820fb574
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FB574;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8210f010
	ctx.lr = 0x820FB58C;
	sub_8210F010(ctx, base);
loc_820FB58C:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x820fb5c0
	if (!ctx.cr6.lt) goto loc_820FB5C0;
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x820fb5b0
	if (!ctx.cr6.lt) goto loc_820FB5B0;
	// stfs f29,4100(r27)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4100, temp.u32);
	// stfs f29,4136(r27)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4136, temp.u32);
	// b 0x820fb740
	goto loc_820FB740;
loc_820FB5B0:
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x820fb740
	if (ctx.cr6.eq) goto loc_820FB740;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x820fb734
	goto loc_820FB734;
loc_820FB5C0:
	// lfs f13,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// blt cr6,0x820fb728
	if (ctx.cr6.lt) goto loc_820FB728;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x820fb728
	if (ctx.cr6.lt) goto loc_820FB728;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f4,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f2,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ble cr6,0x820fb740
	if (!ctx.cr6.gt) goto loc_820FB740;
	// addi r31,r27,2048
	ctx.r31.s64 = ctx.r27.s64 + 2048;
	// addi r30,r26,12
	ctx.r30.s64 = ctx.r26.s64 + 12;
	// subf r25,r26,r28
	ctx.r25.s64 = ctx.r28.s64 - ctx.r26.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r27,r27,r28
	ctx.r27.s64 = ctx.r28.s64 - ctx.r27.s64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_820FB654:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x820fb684
	if (ctx.cr6.lt) goto loc_820FB684;
	// lfsx f0,r30,r25
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820fb6ac
	if (!ctx.cr6.lt) goto loc_820FB6AC;
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r31,-2048
	ctx.r10.s64 = ctx.r31.s64 + -2048;
	// std r11,-2048(r31)
	PPC_STORE_U64(ctx.r31.u32 + -2048, ctx.r11.u64);
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r9,-2040(r31)
	PPC_STORE_U64(ctx.r31.u32 + -2040, ctx.r9.u64);
	// b 0x820fb6ac
	goto loc_820FB6AC;
loc_820FB684:
	// lwz r11,68(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r5,r30,-12
	ctx.r5.s64 = ctx.r30.s64 + -12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,-2048
	ctx.r3.s64 = ctx.r31.s64 + -2048;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82186cd8
	ctx.lr = 0x820FB6AC;
	sub_82186CD8(ctx, base);
loc_820FB6AC:
	// lfs f0,2048(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x820fb6c8
	if (ctx.cr6.lt) goto loc_820FB6C8;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x820fb70c
	if (!ctx.cr6.lt) goto loc_820FB70C;
loc_820FB6C8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x820fb6e8
	if (ctx.cr6.lt) goto loc_820FB6E8;
	// ldx r10,r31,r27
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r27.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// ldx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + ctx.r11.u32);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// b 0x820fb70c
	goto loc_820FB70C;
loc_820FB6E8:
	// lwz r11,68(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r5,r31,r27
	ctx.r5.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r4,r30,2036
	ctx.r4.s64 = ctx.r30.s64 + 2036;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82192138
	ctx.lr = 0x820FB70C;
	sub_82192138(ctx, base);
loc_820FB70C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x820fb654
	if (!ctx.cr0.eq) goto loc_820FB654;
	// b 0x820fb740
	goto loc_820FB740;
loc_820FB728:
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x820fb740
	if (ctx.cr6.eq) goto loc_820FB740;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_820FB734:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210f8d0
	ctx.lr = 0x820FB740;
	sub_8210F8D0(ctx, base);
loc_820FB740:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r23,r23,48
	ctx.r23.s64 = ctx.r23.s64 + 48;
	// bne 0x820fb47c
	if (!ctx.cr0.eq) goto loc_820FB47C;
loc_820FB74C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82249974
	ctx.lr = 0x820FB758;
	sub_82249974(ctx, base);
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_820FB75C"))) PPC_WEAK_FUNC(sub_820FB75C);
PPC_FUNC_IMPL(__imp__sub_820FB75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FB760"))) PPC_WEAK_FUNC(sub_820FB760);
PPC_FUNC_IMPL(__imp__sub_820FB760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820FB768;
	sub_82248784(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249928
	ctx.lr = 0x820FB770;
	sub_82249928(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,1028
	ctx.r11.s64 = ctx.r3.s64 + 1028;
loc_820FB780:
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x820fb79c
	if (!ctx.cr6.eq) goto loc_820FB79C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x820fb780
	if (ctx.cr6.lt) goto loc_820FB780;
loc_820FB79C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820fba24
	if (!ctx.cr6.gt) goto loc_820FBA24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r28,-32187
	ctx.r28.s64 = -2109407232;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,9864(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9864);
	ctx.f29.f64 = double(temp.f32);
loc_820FB7C8:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,8876(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8876);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x820fb81c
	if (!ctx.cr6.lt) goto loc_820FB81C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820fb800
	if (!ctx.cr6.eq) goto loc_820FB800;
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// b 0x820fb80c
	goto loc_820FB80C;
loc_820FB800:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820FB80C:
	// addi r11,r29,554
	ctx.r11.s64 = ctx.r29.s64 + 554;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82192068
	ctx.lr = 0x820FB81C;
	sub_82192068(ctx, base);
loc_820FB81C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,6828(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6828);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// bge cr6,0x820fb9d8
	if (!ctx.cr6.lt) goto loc_820FB9D8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820fb84c
	if (!ctx.cr6.eq) goto loc_820FB84C;
	// addi r30,r10,32
	ctx.r30.s64 = ctx.r10.s64 + 32;
	// b 0x820fb858
	goto loc_820FB858;
loc_820FB84C:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820FB858:
	// addi r11,r29,426
	ctx.r11.s64 = ctx.r29.s64 + 426;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ldx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// beq cr6,0x820fb920
	if (ctx.cr6.eq) goto loc_820FB920;
	// addi r11,r29,167
	ctx.r11.s64 = ctx.r29.s64 + 167;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_820FB8BC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f30,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r9.u64);
	// std r8,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r8.u64);
	// bne cr6,0x820fba14
	if (!ctx.cr6.eq) goto loc_820FBA14;
loc_820FB8E0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f1,560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x820fb8f8
	if (ctx.cr6.eq) goto loc_820FB8F8;
	// bl 0x820f8240
	ctx.lr = 0x820FB8F8;
	sub_820F8240(ctx, base);
loc_820FB8F8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,52(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// addi r10,r31,2656
	ctx.r10.s64 = ctx.r31.s64 + 2656;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,2656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2656, ctx.r9.u64);
	// std r8,2664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2664, ctx.r8.u64);
	// b 0x820fba14
	goto loc_820FBA14;
loc_820FB920:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820fb8bc
	if (ctx.cr6.eq) goto loc_820FB8BC;
	// lbz r11,11(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 11);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb8bc
	if (ctx.cr6.eq) goto loc_820FB8BC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,2648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2648);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f12,2644(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2644);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,876(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f0,-27256(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -27256);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r8.u64);
	// std r6,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r6.u64);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f1,404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f28,f9,f0
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// bl 0x82187320
	ctx.lr = 0x820FB998;
	sub_82187320(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f8,416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f28,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f28.f64 + ctx.f8.f64));
	// stfs f5,416(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 416, temp.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// fmuls f4,f6,f28
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f2,424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f1,424(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
	// stfs f3,52(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// b 0x820fb8e0
	goto loc_820FB8E0;
loc_820FB9D8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820fb9e8
	if (!ctx.cr6.eq) goto loc_820FB9E8;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// b 0x820fb9f4
	goto loc_820FB9F4;
loc_820FB9E8:
	// lwz r10,176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820FB9F4:
	// addi r10,r29,167
	ctx.r10.s64 = ctx.r29.s64 + 167;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r8.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r7.u64);
loc_820FBA14:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fb7c8
	if (ctx.cr6.lt) goto loc_820FB7C8;
loc_820FBA24:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82249974
	ctx.lr = 0x820FBA30;
	sub_82249974(ctx, base);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820FBA34"))) PPC_WEAK_FUNC(sub_820FBA34);
PPC_FUNC_IMPL(__imp__sub_820FBA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBA38"))) PPC_WEAK_FUNC(sub_820FBA38);
PPC_FUNC_IMPL(__imp__sub_820FBA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r10,r3,6844
	ctx.r10.s64 = ctx.r3.s64 + 6844;
	// lfs f0,9864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9864);
	ctx.f0.f64 = double(temp.f32);
loc_820FBA58:
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820fba78
	if (!ctx.cr6.eq) goto loc_820FBA78;
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// b 0x820fba84
	goto loc_820FBA84;
loc_820FBA78:
	// lwz r9,176(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_820FBA84:
	// ld r9,-4156(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4156);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// addi r6,r10,-4156
	ctx.r6.s64 = ctx.r10.s64 + -4156;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// std r9,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// ld r4,-4148(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4148);
	// std r4,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r4.u64);
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fba58
	if (ctx.cr6.lt) goto loc_820FBA58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FBABC"))) PPC_WEAK_FUNC(sub_820FBABC);
PPC_FUNC_IMPL(__imp__sub_820FBABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBAC0"))) PPC_WEAK_FUNC(sub_820FBAC0);
PPC_FUNC_IMPL(__imp__sub_820FBAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x820FBAC8;
	sub_82248780(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lhz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 68);
	// lis r31,-32182
	ctx.r31.s64 = -2109079552;
	// lbz r6,71(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 71);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// ori r4,r11,32768
	ctx.r4.u64 = ctx.r11.u64 | 32768;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r5,70(r26)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r26.u32 + 70);
	// lwz r3,-5056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5056);
	// bl 0x820ed7d8
	ctx.lr = 0x820FBAF4;
	sub_820ED7D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fbbe4
	if (ctx.cr6.eq) goto loc_820FBBE4;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,-5056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5056);
	// addi r28,r11,4208
	ctx.r28.s64 = ctx.r11.s64 + 4208;
	// lhz r29,10(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820fbbe4
	if (ctx.cr6.eq) goto loc_820FBBE4;
	// lwz r31,124(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x820fbb8c
	if (!ctx.cr6.gt) goto loc_820FBB8C;
loc_820FBB28:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,230
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 230, ctx.xer);
	// bge cr6,0x820fbb7c
	if (!ctx.cr6.lt) goto loc_820FBB7C;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fbb70
	if (ctx.cr6.eq) goto loc_820FBB70;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FBB68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fbbe4
	if (ctx.cr6.eq) goto loc_820FBBE4;
loc_820FBB70:
	// subf. r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// ble 0x820fbb8c
	if (!ctx.cr0.gt) goto loc_820FBB8C;
loc_820FBB7C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x820fbb28
	if (ctx.cr6.gt) goto loc_820FBB28;
loc_820FBB8C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,60(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,9852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x820fb110
	ctx.lr = 0x820FBBD0;
	sub_820FB110(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820fb1d8
	ctx.lr = 0x820FBBE4;
	sub_820FB1D8(ctx, base);
loc_820FBBE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_820FBBF0"))) PPC_WEAK_FUNC(sub_820FBBF0);
PPC_FUNC_IMPL(__imp__sub_820FBBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x820FBBF8;
	sub_8224876C(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fbdf4
	if (!ctx.cr6.eq) goto loc_820FBDF4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,9852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f31.f64 = double(temp.f32);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fctiwz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x820fbc6c
	if (ctx.cr6.eq) goto loc_820FBC6C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x820fb110
	ctx.lr = 0x820FBC58;
	sub_820FB110(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820fb1d8
	ctx.lr = 0x820FBC6C;
	sub_820FB1D8(ctx, base);
loc_820FBC6C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f31.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f12,f0,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// fctiwz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bge cr6,0x820fbcb0
	if (!ctx.cr6.lt) goto loc_820FBCB0;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_820FBCB0:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x820fbdf4
	if (ctx.cr6.eq) goto loc_820FBDF4;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
	// lhz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbz r6,71(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 71);
	// ori r4,r11,32768
	ctx.r4.u64 = ctx.r11.u64 | 32768;
	// lbz r5,70(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// lwz r3,-5056(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5056);
	// bl 0x820ed7d8
	ctx.lr = 0x820FBCD8;
	sub_820ED7D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fbdf4
	if (ctx.cr6.eq) goto loc_820FBDF4;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r24,r30,1
	ctx.r24.s64 = ctx.r30.s64 + 1;
	// lwz r27,124(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r21,r28,1
	ctx.r21.s64 = ctx.r28.s64 + 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// lhz r23,8(r11)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r30,10(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// lwz r11,-5056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5056);
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// addi r25,r11,4208
	ctx.r25.s64 = ctx.r11.s64 + 4208;
	// bge cr6,0x820fbdf4
	if (!ctx.cr6.lt) goto loc_820FBDF4;
loc_820FBD0C:
	// lbzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x820fbd2c
	if (!ctx.cr6.eq) goto loc_820FBD2C;
loc_820FBD18:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,255
	ctx.r26.s64 = ctx.r26.s64 + 255;
	// lbzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x820fbd18
	if (ctx.cr6.eq) goto loc_820FBD18;
loc_820FBD2C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// add r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 + ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x820fbd58
	if (!ctx.cr6.eq) goto loc_820FBD58;
loc_820FBD44:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// lbzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x820fbd44
	if (ctx.cr6.eq) goto loc_820FBD44;
loc_820FBD58:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x820fbdf4
	if (ctx.cr6.gt) goto loc_820FBDF4;
	// cmpw cr6,r26,r21
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r21.s32, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x820fbdec
	if (!ctx.cr6.gt) goto loc_820FBDEC;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lbzx r29,r11,r25
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x820fbdec
	if (!ctx.cr6.gt) goto loc_820FBDEC;
loc_820FBD8C:
	// cmplwi cr6,r11,230
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 230, ctx.xer);
	// bge cr6,0x820fbddc
	if (!ctx.cr6.lt) goto loc_820FBDDC;
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fbdd0
	if (ctx.cr6.eq) goto loc_820FBDD0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FBDC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fbdf4
	if (ctx.cr6.eq) goto loc_820FBDF4;
loc_820FBDD0:
	// subf. r28,r29,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// ble 0x820fbdec
	if (!ctx.cr0.gt) goto loc_820FBDEC;
loc_820FBDDC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbzx r29,r11,r25
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt cr6,0x820fbd8c
	if (ctx.cr6.gt) goto loc_820FBD8C;
loc_820FBDEC:
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x820fbd0c
	if (ctx.cr6.lt) goto loc_820FBD0C;
loc_820FBDF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_820FBE04"))) PPC_WEAK_FUNC(sub_820FBE04);
PPC_FUNC_IMPL(__imp__sub_820FBE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FBE08"))) PPC_WEAK_FUNC(sub_820FBE08);
PPC_FUNC_IMPL(__imp__sub_820FBE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820FBE10;
	sub_82248778(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5824(r1)
	ea = -5824 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-5056(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5056);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,84(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r24,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r24.u32);
	// stw r24,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r24.u32);
	// beq cr6,0x820fc338
	if (ctx.cr6.eq) goto loc_820FC338;
	// lwz r11,4464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fc338
	if (ctx.cr6.eq) goto loc_820FC338;
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r11,r1,1616
	ctx.r11.s64 = ctx.r1.s64 + 1616;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FBE6C:
	// std r24,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r24.u64);
	// stdu r24,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r24.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x820fbe6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FBE6C;
	// li r27,112
	ctx.r27.s64 = 112;
	// addi r29,r31,76
	ctx.r29.s64 = ctx.r31.s64 + 76;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_820FBE84:
	// lwz r10,-5056(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5056);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// add r30,r27,r10
	ctx.r30.u64 = ctx.r27.u64 + ctx.r10.u64;
	// lbzx r10,r27,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fbeb8
	if (ctx.cr6.eq) goto loc_820FBEB8;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FBEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
loc_820FBEB8:
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x820fbf48
	if (ctx.cr6.eq) goto loc_820FBF48;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,1632
	ctx.r10.s64 = ctx.r1.s64 + 1632;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// sth r9,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sthx r11,r5,r8
	PPC_STORE_U16(ctx.r5.u32 + ctx.r8.u32, ctx.r11.u16);
	// bl 0x8218a540
	ctx.lr = 0x820FBEF0;
	sub_8218A540(ctx, base);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820fae80
	ctx.lr = 0x820FBF10;
	sub_820FAE80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x820fbf38
	if (ctx.cr6.eq) goto loc_820FBF38;
	// addi r10,r11,147
	ctx.r10.s64 = ctx.r11.s64 + 147;
	// addi r9,r11,180
	ctx.r9.s64 = ctx.r11.s64 + 180;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r28.u32);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stwx r6,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r6.u32);
loc_820FBF38:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x820fbf4c
	goto loc_820FBF4C;
loc_820FBF48:
	// sth r25,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r25.u16);
loc_820FBF4C:
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplwi cr6,r27,4208
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4208, ctx.xer);
	// blt cr6,0x820fbe84
	if (ctx.cr6.lt) goto loc_820FBE84;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fc338
	if (ctx.cr6.eq) goto loc_820FC338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb280
	ctx.lr = 0x820FBF70;
	sub_820FB280(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,1284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// addi r30,r11,29
	ctx.r30.s64 = ctx.r11.s64 + 29;
	// bl 0x82183078
	ctx.lr = 0x820FBF80;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x820FBF8C;
	sub_821837D0(ctx, base);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,-1
	ctx.r30.s64 = -1;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820fbfac
	if (!ctx.cr6.gt) goto loc_820FBFAC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_820FBFAC:
	// bl 0x82183850
	ctx.lr = 0x820FBFB0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820fbfc8
	if (ctx.cr6.eq) goto loc_820FBFC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x820FBFC4;
	sub_82183448(ctx, base);
	// b 0x820fbfd4
	goto loc_820FBFD4;
loc_820FBFC8:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820FBFD4;
	sub_821845A0(ctx, base);
loc_820FBFD4:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820fbff4
	if (!ctx.cr6.gt) goto loc_820FBFF4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_820FBFF4:
	// bl 0x82183850
	ctx.lr = 0x820FBFF8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820fc010
	if (ctx.cr6.eq) goto loc_820FC010;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x820FC00C;
	sub_82183448(ctx, base);
	// b 0x820fc01c
	goto loc_820FC01C;
loc_820FC010:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820FC01C;
	sub_821845A0(ctx, base);
loc_820FC01C:
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// lwz r29,60(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820fc038
	if (ctx.cr6.gt) goto loc_820FC038;
	// rlwinm r30,r29,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
loc_820FC038:
	// bl 0x82183850
	ctx.lr = 0x820FC03C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x820fc054
	if (ctx.cr6.eq) goto loc_820FC054;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x820FC050;
	sub_82183448(ctx, base);
	// b 0x820fc060
	goto loc_820FC060;
loc_820FC054:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x820FC060;
	sub_821845A0(ctx, base);
loc_820FC060:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fc090
	if (ctx.cr6.eq) goto loc_820FC090;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x820fc088
	if (ctx.cr0.lt) goto loc_820FC088;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FC07C:
	// std r24,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r24.u64);
	// stdu r24,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r24.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x820fc07c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC07C;
loc_820FC088:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x820fc094
	goto loc_820FC094;
loc_820FC090:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820FC094:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x82248a40
	ctx.lr = 0x820FC0AC;
	sub_82248A40(ctx, base);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82248a40
	ctx.lr = 0x820FC0C0;
	sub_82248A40(ctx, base);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r4,r1,1632
	ctx.r4.s64 = ctx.r1.s64 + 1632;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82248a40
	ctx.lr = 0x820FC0D4;
	sub_82248A40(ctx, base);
	// addi r3,r31,6816
	ctx.r3.s64 = ctx.r31.s64 + 6816;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8210f8a0
	ctx.lr = 0x820FC0E0;
	sub_8210F8A0(ctx, base);
	// addi r3,r31,10960
	ctx.r3.s64 = ctx.r31.s64 + 10960;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8210f8a0
	ctx.lr = 0x820FC0EC;
	sub_8210F8A0(ctx, base);
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8210f8a0
	ctx.lr = 0x820FC0F8;
	sub_8210F8A0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f31,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// ble cr6,0x820fc15c
	if (!ctx.cr6.gt) goto loc_820FC15C;
	// addi r11,r31,10956
	ctx.r11.s64 = ctx.r31.s64 + 10956;
loc_820FC11C:
	// stfs f30,-2092(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + -2092, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f31,-2088(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -2088, temp.u32);
	// stfs f31,-2084(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -2084, temp.u32);
	// stfs f31,-2080(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -2080, temp.u32);
	// stfs f31,-4132(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4132, temp.u32);
	// stfs f31,-4136(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4136, temp.u32);
	// stfs f31,-4140(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4140, temp.u32);
	// stfs f30,-4128(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4128, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f30,16(r11)
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820fc11c
	if (ctx.cr6.lt) goto loc_820FC11C;
loc_820FC15C:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x820fc190
	if (!ctx.cr6.gt) goto loc_820FC190;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r31,6828
	ctx.r10.s64 = ctx.r31.s64 + 6828;
	// lfs f0,9864(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9864);
	ctx.f0.f64 = double(temp.f32);
loc_820FC17C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsu f0,16(r10)
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820fc17c
	if (ctx.cr6.lt) goto loc_820FC17C;
loc_820FC190:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb300
	ctx.lr = 0x820FC198;
	sub_820FB300(ctx, base);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r28,r31,2268
	ctx.r28.s64 = ctx.r31.s64 + 2268;
	// addi r29,r31,864
	ctx.r29.s64 = ctx.r31.s64 + 864;
loc_820FC1A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210f458
	ctx.lr = 0x820FC1AC;
	sub_8210F458(ctx, base);
	// stwu r30,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r28.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x820fc1a4
	if (ctx.cr6.lt) goto loc_820FC1A4;
	// stw r27,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r27.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r27,2304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2304, ctx.r27.u8);
	// stb r24,2307(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2307, ctx.r24.u8);
	// stb r24,2305(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2305, ctx.r24.u8);
	// stb r11,2306(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2306, ctx.r11.u8);
	// lwz r10,2640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2640);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bge cr6,0x820fc214
	if (!ctx.cr6.lt) goto loc_820FC214;
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r8,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r8.u32);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// stb r24,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r24.u8);
loc_820FC214:
	// lwz r8,2640(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2640);
	// li r9,3
	ctx.r9.s64 = 3;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// bge cr6,0x820fc254
	if (!ctx.cr6.lt) goto loc_820FC254;
	// addi r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 48;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r7.u32);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stb r24,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r24.u8);
loc_820FC254:
	// lwz r8,2640(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2640);
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// bge cr6,0x820fc28c
	if (!ctx.cr6.lt) goto loc_820FC28C;
	// addi r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 48;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r7.u32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// stb r27,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r27.u8);
loc_820FC28C:
	// lwz r9,2640(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2640);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// bge cr6,0x820fc2c8
	if (!ctx.cr6.lt) goto loc_820FC2C8;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r8,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r8.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// stb r27,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r27.u8);
loc_820FC2C8:
	// lwz r9,2640(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2640);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// bge cr6,0x820fc304
	if (!ctx.cr6.lt) goto loc_820FC304;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r8,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r8.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r11,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// stb r24,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r24.u8);
loc_820FC304:
	// addi r3,r31,2456
	ctx.r3.s64 = ctx.r31.s64 + 2456;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8210f010
	ctx.lr = 0x820FC310;
	sub_8210F010(ctx, base);
	// addi r3,r31,2504
	ctx.r3.s64 = ctx.r31.s64 + 2504;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8210f010
	ctx.lr = 0x820FC31C;
	sub_8210F010(ctx, base);
	// stfs f30,884(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stfs f31,920(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 920, temp.u32);
	// sth r24,932(r31)
	PPC_STORE_U16(ctx.r31.u32 + 932, ctx.r24.u16);
	// stb r24,934(r31)
	PPC_STORE_U8(ctx.r31.u32 + 934, ctx.r24.u8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r24,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r24.u32);
	// bl 0x821837d0
	ctx.lr = 0x820FC338;
	sub_821837D0(ctx, base);
loc_820FC338:
	// addi r1,r1,5824
	ctx.r1.s64 = ctx.r1.s64 + 5824;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820FC348"))) PPC_WEAK_FUNC(sub_820FC348);
PPC_FUNC_IMPL(__imp__sub_820FC348) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x820fbe08
	sub_820FBE08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FC350"))) PPC_WEAK_FUNC(sub_820FC350);
PPC_FUNC_IMPL(__imp__sub_820FC350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820FC358;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,56(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x820fc4a0
	if (!ctx.cr6.eq) goto loc_820FC4A0;
	// lbz r11,2096(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2096);
	// li r10,7
	ctx.r10.s64 = 7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820fc384
	if (!ctx.cr6.eq) goto loc_820FC384;
	// li r10,6
	ctx.r10.s64 = 6;
loc_820FC384:
	// mulli r11,r10,176
	ctx.r11.s64 = ctx.r10.s64 * 176;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,884(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 884);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// blt cr6,0x820fc49c
	if (ctx.cr6.lt) goto loc_820FC49C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// lfs f11,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f11.f64 = double(temp.f32);
	// blt cr6,0x820fc454
	if (ctx.cr6.lt) goto loc_820FC454;
	// mulli r9,r11,176
	ctx.r9.s64 = ctx.r11.s64 * 176;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r9,r9,708
	ctx.r9.s64 = ctx.r9.s64 + 708;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC3C8:
	// fsubs f12,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x820fc3e4
	if (!ctx.cr6.gt) goto loc_820FC3E4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_820FC3E4:
	// fadds f12,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820fc404
	if (!ctx.cr6.gt) goto loc_820FC404;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_820FC404:
	// fadds f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,-176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -176);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820fc424
	if (!ctx.cr6.gt) goto loc_820FC424;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
loc_820FC424:
	// fadds f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,-352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -352);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820fc444
	if (!ctx.cr6.gt) goto loc_820FC444;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
loc_820FC444:
	// fadds f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r9,r9,-704
	ctx.r9.s64 = ctx.r9.s64 + -704;
	// bdnz 0x820fc3c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC3C8;
loc_820FC454:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820fc49c
	if (ctx.cr6.lt) goto loc_820FC49C;
	// mulli r9,r11,176
	ctx.r9.s64 = ctx.r11.s64 * 176;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r9,r9,884
	ctx.r9.s64 = ctx.r9.s64 + 884;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC470:
	// fsubs f12,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x820fc48c
	if (!ctx.cr6.gt) goto loc_820FC48C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_820FC48C:
	// fadds f13,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,-176
	ctx.r9.s64 = ctx.r9.s64 + -176;
	// bdnz 0x820fc470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC470;
loc_820FC49C:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_820FC4A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r24,r30,864
	ctx.r24.s64 = ctx.r30.s64 + 864;
	// li r29,8
	ctx.r29.s64 = 8;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lfs f31,11484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11484);
	ctx.f31.f64 = double(temp.f32);
loc_820FC4B4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820fc4d8
	if (ctx.cr6.eq) goto loc_820FC4D8;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820fc4d8
	if (!ctx.cr6.gt) goto loc_820FC4D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210f130
	ctx.lr = 0x820FC4D8;
	sub_8210F130(ctx, base);
loc_820FC4D8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// bne 0x820fc4b4
	if (!ctx.cr0.eq) goto loc_820FC4B4;
	// mulli r11,r28,176
	ctx.r11.s64 = ctx.r28.s64 * 176;
	// add r25,r11,r30
	ctx.r25.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r31,r25,864
	ctx.r31.s64 = ctx.r25.s64 + 864;
loc_820FC4F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fbbf0
	ctx.lr = 0x820FC4FC;
	sub_820FBBF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fc4f0
	if (ctx.cr6.eq) goto loc_820FC4F0;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// li r26,8
	ctx.r26.s64 = 8;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_820FC514:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820fc5a0
	if (ctx.cr6.eq) goto loc_820FC5A0;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820fc5a0
	if (!ctx.cr6.gt) goto loc_820FC5A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210f148
	ctx.lr = 0x820FC538;
	sub_8210F148(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fc5a0
	if (ctx.cr6.eq) goto loc_820FC5A0;
	// stb r28,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r28.u8);
	// addi r4,r30,6816
	ctx.r4.s64 = ctx.r30.s64 + 6816;
	// addi r3,r30,10960
	ctx.r3.s64 = ctx.r30.s64 + 10960;
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x8210f8d0
	ctx.lr = 0x820FC558;
	sub_8210F8D0(ctx, base);
	// stb r27,2096(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2096, ctx.r27.u8);
	// lhz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820fc56c
	if (!ctx.cr6.eq) goto loc_820FC56C;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
loc_820FC56C:
	// sth r28,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r28.u16);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r3,r30,2116
	ctx.r3.s64 = ctx.r30.s64 + 2116;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8210f0e0
	ctx.lr = 0x820FC58C;
	sub_8210F0E0(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x820fc5a0
	if (ctx.cr6.eq) goto loc_820FC5A0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fbac0
	ctx.lr = 0x820FC5A0;
	sub_820FBAC0(ctx, base);
loc_820FC5A0:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8210f048
	ctx.lr = 0x820FC5A8;
	sub_8210F048(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// bne 0x820fc514
	if (!ctx.cr0.eq) goto loc_820FC514;
	// lfs f1,868(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 868);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x820ef350
	ctx.lr = 0x820FC5C0;
	sub_820EF350(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820FC5CC"))) PPC_WEAK_FUNC(sub_820FC5CC);
PPC_FUNC_IMPL(__imp__sub_820FC5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FC5D0"))) PPC_WEAK_FUNC(sub_820FC5D0);
PPC_FUNC_IMPL(__imp__sub_820FC5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248754
	ctx.lr = 0x820FC5D8;
	sub_82248754(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x8224991c
	ctx.lr = 0x820FC5E0;
	sub_8224991C(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r16,164(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lfs f0,76(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f13,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lwz r29,172(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// fadds f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// stw r16,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r16.u32);
	// bl 0x820804f8
	ctx.lr = 0x820FC610;
	sub_820804F8(ctx, base);
	// lwz r11,168(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fcfa4
	if (ctx.cr6.eq) goto loc_820FCFA4;
	// lhz r11,150(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 150);
	// li r15,0
	ctx.r15.s64 = 0;
	// stw r15,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r15.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fcfa4
	if (ctx.cr6.eq) goto loc_820FCFA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fctiwz f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f27.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f27.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// srawi r20,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r20.s64 = ctx.r10.s32 >> 1;
	// lfs f0,8060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f25,f27,f0
	ctx.f25.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lfs f29,9860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9860);
	ctx.f29.f64 = double(temp.f32);
	// li r19,0
	ctx.r19.s64 = 0;
	// lfs f30,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// ori r23,r7,49152
	ctx.r23.u64 = ctx.r7.u64 | 49152;
	// lfs f31,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f26,10340(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10340);
	ctx.f26.f64 = double(temp.f32);
loc_820FC678:
	// lwz r11,156(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 156);
	// lhz r4,8(r16)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r16.u32 + 8);
	// add r27,r19,r11
	ctx.r27.u64 = ctx.r19.u64 + ctx.r11.u64;
	// lhzx r11,r19,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r19.u32 + ctx.r11.u32);
	// addi r11,r11,38
	ctx.r11.s64 = ctx.r11.s64 + 38;
	// lbz r10,2(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r31,r10,28
	ctx.r31.u64 = ctx.r10.u32 & 0xF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r22,r9,r17
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r17.u32);
	// bl 0x8210f318
	ctx.lr = 0x820FC6A4;
	sub_8210F318(ctx, base);
	// extsw r8,r20
	ctx.r8.s64 = ctx.r20.s32;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// std r8,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r8.u64);
	// lfd f0,344(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// fsubs f28,f25,f12
	ctx.f28.f64 = double(float(ctx.f25.f64 - ctx.f12.f64));
	// ble cr6,0x820fc6f8
	if (!ctx.cr6.gt) goto loc_820FC6F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x8210f3c0
	ctx.lr = 0x820FC6D8;
	sub_8210F3C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x820fc6e8
	if (ctx.cr6.lt) goto loc_820FC6E8;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_820FC6E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x8210f408
	ctx.lr = 0x820FC6F4;
	sub_8210F408(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
loc_820FC6F8:
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x820fc708
	if (ctx.cr6.lt) goto loc_820FC708;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_820FC708:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// li r25,1
	ctx.r25.s64 = 1;
	// ble cr6,0x820fc718
	if (!ctx.cr6.gt) goto loc_820FC718;
	// li r25,0
	ctx.r25.s64 = 0;
loc_820FC718:
	// lbz r11,3(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 3);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fc958
	if (ctx.cr6.eq) goto loc_820FC958;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r26,6
	ctx.r26.s64 = 6;
	// beq cr6,0x820fc738
	if (ctx.cr6.eq) goto loc_820FC738;
	// li r26,12
	ctx.r26.s64 = 12;
loc_820FC738:
	// extsh r31,r22
	ctx.r31.s64 = ctx.r22.s16;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x820fc950
	if (ctx.cr6.eq) goto loc_820FC950;
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lbz r11,3(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 3);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820fcaec
	if (!ctx.cr6.eq) goto loc_820FCAEC;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,6
	ctx.r11.s64 = 6;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r9,r1,95
	ctx.r9.s64 = ctx.r1.s64 + 95;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_820FC794:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x820fc794
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC794;
	// lbz r9,99(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lbz r8,98(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lbz r7,101(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// stb r9,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r9.u8);
	// stb r8,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r8.u8);
	// lbz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// clrlwi r9,r11,22
	ctx.r9.u64 = ctx.r11.u32 & 0x3FF;
	// lhz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// rlwinm r8,r11,0,17,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C00;
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// rlwinm r5,r10,3,13,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x40000;
	// stb r6,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r6.u8);
	// clrlwi r4,r10,22
	ctx.r4.u64 = ctx.r10.u32 & 0x3FF;
	// rlwinm r3,r10,0,17,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7C00;
	// rlwinm r10,r11,3,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x40000;
	// lhz r11,114(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// rlwinm r7,r11,3,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x40000;
	// clrlwi r6,r11,22
	ctx.r6.u64 = ctx.r11.u32 & 0x3FF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// add r9,r8,r23
	ctx.r9.u64 = ctx.r8.u64 + ctx.r23.u64;
	// rlwinm r11,r11,0,17,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C00;
	// or r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 | ctx.r4.u64;
	// add r5,r3,r23
	ctx.r5.u64 = ctx.r3.u64 + ctx.r23.u64;
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// or r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r11,r10,13,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r10,r9,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r9,r8,13,0,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r8,r5,13,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r7,r4,13,0,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r6,r3,13,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 13) & 0xFFFFE000;
	// or r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// bne cr6,0x820fcb70
	if (!ctx.cr6.eq) goto loc_820FCB70;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,6
	ctx.r11.s64 = 6;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// addi r9,r1,95
	ctx.r9.s64 = ctx.r1.s64 + 95;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_820FC870:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x820fc870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC870;
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r8,101(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// lbz r7,99(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// stb r11,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r11.u8);
	// stb r10,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// stb r9,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r9.u8);
	// stb r8,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r8.u8);
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// lbz r6,98(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// stb r6,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r6.u8);
	// lhz r11,110(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// clrlwi r4,r11,22
	ctx.r4.u64 = ctx.r11.u32 & 0x3FF;
	// rlwinm r3,r11,0,17,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C00;
	// lhz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// rlwinm r5,r11,3,13,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x40000;
	// lhz r11,106(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// rlwinm r9,r10,3,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x40000;
	// clrlwi r8,r10,22
	ctx.r8.u64 = ctx.r10.u32 & 0x3FF;
	// rlwinm r7,r10,0,17,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7C00;
	// rlwinm r6,r11,3,13,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x40000;
	// clrlwi r10,r11,22
	ctx.r10.u64 = ctx.r11.u32 & 0x3FF;
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// add r4,r3,r23
	ctx.r4.u64 = ctx.r3.u64 + ctx.r23.u64;
	// rlwinm r11,r11,0,17,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C00;
	// or r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 | ctx.r8.u64;
	// add r9,r7,r23
	ctx.r9.u64 = ctx.r7.u64 + ctx.r23.u64;
	// or r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 | ctx.r10.u64;
	// add r7,r11,r23
	ctx.r7.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r6,r5,13,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r5,r4,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r4,r3,13,0,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r3,r9,13,0,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r11,r8,13,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r10,r7,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// or r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 | ctx.r3.u64;
	// or r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
loc_820FC924:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,3
	ctx.r7.s64 = 3;
	// add r31,r11,r18
	ctx.r31.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186cd8
	ctx.lr = 0x820FC944;
	sub_82186CD8(ctx, base);
loc_820FC944:
	// lwz r16,208(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stfs f30,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r15,124(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_820FC950:
	// mullw r11,r26,r24
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r24.s32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_820FC958:
	// stfs f30,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lbz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fcb90
	if (!ctx.cr6.eq) goto loc_820FCB90;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stb r8,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r8.u8);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stb r7,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r7.u8);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stb r9,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r9.u8);
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r5,r31,25,17,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 25) & 0x7FE0;
	// rlwinm r4,r31,16,16,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFC0;
	// bl 0x82186ee8
	ctx.lr = 0x820FC9E4;
	sub_82186EE8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x820FC9F0;
	sub_8208EA90(ctx, base);
	// rlwinm r6,r31,20,0,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 20) & 0xFFF00000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r11.u64);
	// lfd f0,312(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821924c8
	ctx.lr = 0x820FCA20;
	sub_821924C8(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x820fcab0
	if (!ctx.cr6.eq) goto loc_820FCAB0;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stb r10,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r10.u8);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stb r9,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r9.u8);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stb r8,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r8.u8);
	// stb r7,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r7.u8);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r5,r31,25,17,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 25) & 0x7FE0;
	// rlwinm r4,r31,16,16,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFC0;
	// bl 0x82186ee8
	ctx.lr = 0x820FCA74;
	sub_82186EE8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x820FCA80;
	sub_8208EA90(ctx, base);
	// rlwinm r6,r31,20,0,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 20) & 0xFFF00000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r11.u64);
	// lfd f0,288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821924c8
	ctx.lr = 0x820FCAB0;
	sub_821924C8(ctx, base);
loc_820FCAB0:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_820FCAB4:
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// extsh r11,r22
	ctx.r11.s64 = ctx.r22.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820fcf8c
	if (ctx.cr6.eq) goto loc_820FCF8C;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x820fcf78
	if (ctx.cr6.eq) goto loc_820FCF78;
	// ld r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// b 0x820fcf8c
	goto loc_820FCF8C;
loc_820FCAEC:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820fcb68
	if (!ctx.cr6.eq) goto loc_820FCB68;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x820FCB10;
	sub_82248A40(ctx, base);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bne cr6,0x820fcb70
	if (!ctx.cr6.eq) goto loc_820FCB70;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x820FCB4C;
	sub_82248A40(ctx, base);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// b 0x820fc924
	goto loc_820FC924;
loc_820FCB68:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x820fc924
	if (ctx.cr6.eq) goto loc_820FC924;
loc_820FCB70:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r18
	ctx.r31.u64 = ctx.r11.u64 + ctx.r18.u64;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// stdx r9,r11,r18
	PPC_STORE_U64(ctx.r11.u32 + ctx.r18.u32, ctx.r9.u64);
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// b 0x820fc944
	goto loc_820FC944;
loc_820FCB90:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820fccec
	if (!ctx.cr6.eq) goto loc_820FCCEC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwimi r8,r10,4,20,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF0FF);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r4,r8,20
	ctx.r4.u64 = ctx.r8.u32 & 0xFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwimi r5,r4,3,0,28
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0xFFFFFFF8) | (ctx.r5.u64 & 0xFFFFFFFF00000007);
	// rlwimi r10,r11,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r5,r5,0,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC;
	// rlwinm r4,r10,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// bl 0x82186ee8
	ctx.lr = 0x820FCBFC;
	sub_82186EE8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x820FCC08;
	sub_8208EA90(ctx, base);
	// rlwimi r30,r31,8,16,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFF00) | (ctx.r30.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r30,0,16,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// std r6,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r6.u64);
	// lfd f0,296(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821924c8
	ctx.lr = 0x820FCC38;
	sub_821924C8(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x820fcce0
	if (!ctx.cr6.eq) goto loc_820FCCE0;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwimi r8,r10,4,20,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF0FF);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r4,r8,20
	ctx.r4.u64 = ctx.r8.u32 & 0xFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwimi r5,r4,3,0,28
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0xFFFFFFF8) | (ctx.r5.u64 & 0xFFFFFFFF00000007);
	// rlwimi r10,r11,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r5,r5,0,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC;
	// rlwinm r4,r10,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// bl 0x82186ee8
	ctx.lr = 0x820FCCA4;
	sub_82186EE8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x820FCCB0;
	sub_8208EA90(ctx, base);
	// rlwimi r30,r31,8,16,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFF00) | (ctx.r30.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r30,0,16,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFF8;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// std r6,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r6.u64);
	// lfd f0,304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821924c8
	ctx.lr = 0x820FCCE0;
	sub_821924C8(ctx, base);
loc_820FCCE0:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// b 0x820fcab4
	goto loc_820FCAB4;
loc_820FCCEC:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820fce1c
	if (!ctx.cr6.eq) goto loc_820FCE1C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r30,5(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// bl 0x82186ee8
	ctx.lr = 0x820FCD44;
	sub_82186EE8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x820FCD50;
	sub_8208EA90(ctx, base);
	// rlwimi r31,r30,8,16,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFF00) | (ctx.r31.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r10,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r10.u64);
	// lfd f0,320(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821924c8
	ctx.lr = 0x820FCD7C;
	sub_821924C8(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x820fce0c
	if (!ctx.cr6.eq) goto loc_820FCE0C;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r30,5(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// bl 0x82186ee8
	ctx.lr = 0x820FCDD4;
	sub_82186EE8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x820FCDE0;
	sub_8208EA90(ctx, base);
	// rlwimi r31,r30,8,16,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFF00) | (ctx.r31.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// std r10,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r10.u64);
	// lfd f0,336(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821924c8
	ctx.lr = 0x820FCE0C;
	sub_821924C8(ctx, base);
loc_820FCE0C:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x820fcab4
	goto loc_820FCAB4;
loc_820FCE1C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820fcab0
	if (!ctx.cr6.eq) goto loc_820FCAB0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwimi r8,r10,4,20,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF0FF);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r4,r8,20
	ctx.r4.u64 = ctx.r8.u32 & 0xFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwimi r5,r4,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi r10,r11,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// rlwinm r5,r5,1,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFC;
	// rlwinm r4,r10,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFF8;
	// bl 0x82186ee8
	ctx.lr = 0x820FCE88;
	sub_82186EE8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x820FCE94;
	sub_8208EA90(ctx, base);
	// rlwimi r30,r31,8,16,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFF00) | (ctx.r30.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r30,0,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// std r6,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r6.u64);
	// lfd f0,352(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821924c8
	ctx.lr = 0x820FCEC4;
	sub_821924C8(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x820fcf6c
	if (!ctx.cr6.eq) goto loc_820FCF6C;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwimi r8,r10,4,20,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF0FF);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r4,r8,20
	ctx.r4.u64 = ctx.r8.u32 & 0xFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwimi r5,r4,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi r10,r11,1,0,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xFFFFFFFE) | (ctx.r10.u64 & 0xFFFFFFFF00000001);
	// rlwinm r5,r5,1,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFC;
	// rlwinm r4,r10,3,16,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFF8;
	// bl 0x82186ee8
	ctx.lr = 0x820FCF30;
	sub_82186EE8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x820FCF3C;
	sub_8208EA90(ctx, base);
	// rlwimi r30,r31,8,16,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 8) & 0xFF00) | (ctx.r30.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r30,0,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFC;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// std r6,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r6.u64);
	// lfd f0,328(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821924c8
	ctx.lr = 0x820FCF6C;
	sub_821924C8(ctx, base);
loc_820FCF6C:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// b 0x820fcab4
	goto loc_820FCAB4;
loc_820FCF78:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x82192138
	ctx.lr = 0x820FCF8C;
	sub_82192138(ctx, base);
loc_820FCF8C:
	// lhz r11,150(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 150);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// stw r15,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r15.u32);
	// cmpw cr6,r15,r11
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fc678
	if (ctx.cr6.lt) goto loc_820FC678;
loc_820FCFA4:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82249968
	ctx.lr = 0x820FCFB0;
	sub_82249968(ctx, base);
	// b 0x822487a4
	// ERROR 822487A4
	return;
}

__attribute__((alias("__imp__sub_820FCFB4"))) PPC_WEAK_FUNC(sub_820FCFB4);
PPC_FUNC_IMPL(__imp__sub_820FCFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FCFB8"))) PPC_WEAK_FUNC(sub_820FCFB8);
PPC_FUNC_IMPL(__imp__sub_820FCFB8) {
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
	// bl 0x820faf70
	ctx.lr = 0x820FCFD0;
	sub_820FAF70(ctx, base);
	// addi r4,r31,864
	ctx.r4.s64 = ctx.r31.s64 + 864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fbac0
	ctx.lr = 0x820FCFDC;
	sub_820FBAC0(ctx, base);
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

__attribute__((alias("__imp__sub_820FCFF0"))) PPC_WEAK_FUNC(sub_820FCFF0);
PPC_FUNC_IMPL(__imp__sub_820FCFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x820FCFF8;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,168(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,172(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fd178
	if (ctx.cr6.eq) goto loc_820FD178;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fd178
	if (ctx.cr6.eq) goto loc_820FD178;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,38
	ctx.r11.s64 = ctx.r11.s64 + 38;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// beq cr6,0x820fd178
	if (ctx.cr6.eq) goto loc_820FD178;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820fd124
	if (!ctx.cr6.eq) goto loc_820FD124;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,95
	ctx.r10.s64 = ctx.r1.s64 + 95;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820FD058:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x820fd058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FD058;
	// lbz r8,98(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lbz r10,99(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r7,97(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// ori r11,r9,49152
	ctx.r11.u64 = ctx.r9.u64 | 49152;
	// lbz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r5,101(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lbz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r30,r10,22
	ctx.r30.u64 = ctx.r10.u32 & 0x3FF;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r6,r11,22
	ctx.r6.u64 = ctx.r11.u32 & 0x3FF;
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// rlwinm r5,r11,0,17,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C00;
	// rlwinm r7,r11,3,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x40000;
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r8,r10,3,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x40000;
	// rlwinm r29,r11,3,13,13
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x40000;
	// clrlwi r28,r11,22
	ctx.r28.u64 = ctx.r11.u32 & 0x3FF;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r10,r10,0,17,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7C00;
	// rlwinm r11,r11,0,17,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C00;
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// or r5,r8,r30
	ctx.r5.u64 = ctx.r8.u64 | ctx.r30.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// or r3,r29,r28
	ctx.r3.u64 = ctx.r29.u64 | ctx.r28.u64;
	// rlwinm r10,r7,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r9,r6,13,0,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r8,r5,13,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r7,r4,13,0,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r6,r3,13,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r5,r11,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// or r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x820fd150
	goto loc_820FD150;
loc_820FD124:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x820fd150
	if (!ctx.cr6.eq) goto loc_820FD150;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82248a40
	ctx.lr = 0x820FD138;
	sub_82248A40(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_820FD150:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_820FD178:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_820FD1A0"))) PPC_WEAK_FUNC(sub_820FD1A0);
PPC_FUNC_IMPL(__imp__sub_820FD1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x820FD1A8;
	sub_82248770(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lis r4,27725
	ctx.r4.s64 = 1816985600;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,28487
	ctx.r4.u64 = ctx.r4.u64 | 28487;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820FD1CC;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// addi r10,r11,24412
	ctx.r10.s64 = ctx.r11.s64 + 24412;
	// stw r22,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r22.u32);
	// addi r28,r31,864
	ctx.r28.s64 = ctx.r31.s64 + 864;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r29,7
	ctx.r29.s64 = 7;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_820FD210:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210f568
	ctx.lr = 0x820FD218;
	sub_8210F568(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r27,176
	ctx.r27.s64 = ctx.r27.s64 + 176;
	// bge 0x820fd210
	if (!ctx.cr0.lt) goto loc_820FD210;
	// addi r23,r31,2304
	ctx.r23.s64 = ctx.r31.s64 + 2304;
	// li r29,6
	ctx.r29.s64 = 6;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_820FD230:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210f9d8
	ctx.lr = 0x820FD238;
	sub_8210F9D8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r27,48
	ctx.r27.s64 = ctx.r27.s64 + 48;
	// bge 0x820fd230
	if (!ctx.cr0.lt) goto loc_820FD230;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r26,r31,2672
	ctx.r26.s64 = ctx.r31.s64 + 2672;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,2644(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2644, temp.u32);
	// stfs f0,2648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2648, temp.u32);
	// bl 0x8210f910
	ctx.lr = 0x820FD26C;
	sub_8210F910(ctx, base);
	// addi r25,r31,6816
	ctx.r25.s64 = ctx.r31.s64 + 6816;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8210f910
	ctx.lr = 0x820FD278;
	sub_8210F910(ctx, base);
	// addi r24,r31,10960
	ctx.r24.s64 = ctx.r31.s64 + 10960;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8210f910
	ctx.lr = 0x820FD284;
	sub_8210F910(ctx, base);
	// li r11,256
	ctx.r11.s64 = 256;
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820FD29C:
	// sthu r9,2(r10)
	// bdnz 0x820fd29c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FD29C;
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r11,r31,716
	ctx.r11.s64 = ctx.r31.s64 + 716;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FD2B0:
	// stw r9,-128(r11)
	PPC_STORE_U32(ctx.r11.u32 + -128, ctx.r9.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820fd2b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FD2B0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r27,r31,2268
	ctx.r27.s64 = ctx.r31.s64 + 2268;
loc_820FD2C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210f458
	ctx.lr = 0x820FD2CC;
	sub_8210F458(ctx, base);
	// stwu r29,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r27.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,176
	ctx.r28.s64 = ctx.r28.s64 + 176;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x820fd2c4
	if (ctx.cr6.lt) goto loc_820FD2C4;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// li r29,7
	ctx.r29.s64 = 7;
loc_820FD2E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210f978
	ctx.lr = 0x820FD2F0;
	sub_8210F978(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// bne 0x820fd2e8
	if (!ctx.cr0.eq) goto loc_820FD2E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r30.u32);
	// stfs f31,2668(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2668, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2664, temp.u32);
	// stfs f0,2660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2660, temp.u32);
	// stfs f0,2656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2656, temp.u32);
	// bl 0x8210f840
	ctx.lr = 0x820FD320;
	sub_8210F840(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8210f840
	ctx.lr = 0x820FD328;
	sub_8210F840(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8210f840
	ctx.lr = 0x820FD330;
	sub_8210F840(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fbe08
	ctx.lr = 0x820FD33C;
	sub_820FBE08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_820FD34C"))) PPC_WEAK_FUNC(sub_820FD34C);
PPC_FUNC_IMPL(__imp__sub_820FD34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FD350"))) PPC_WEAK_FUNC(sub_820FD350);
PPC_FUNC_IMPL(__imp__sub_820FD350) {
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
	// addi r10,r11,24412
	ctx.r10.s64 = ctx.r11.s64 + 24412;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820fb280
	ctx.lr = 0x820FD37C;
	sub_820FB280(ctx, base);
	// addi r3,r31,10960
	ctx.r3.s64 = ctx.r31.s64 + 10960;
	// bl 0x8209eda0
	ctx.lr = 0x820FD384;
	sub_8209EDA0(ctx, base);
	// addi r3,r31,6816
	ctx.r3.s64 = ctx.r31.s64 + 6816;
	// bl 0x8209eda0
	ctx.lr = 0x820FD38C;
	sub_8209EDA0(ctx, base);
	// addi r3,r31,2672
	ctx.r3.s64 = ctx.r31.s64 + 2672;
	// bl 0x8209eda0
	ctx.lr = 0x820FD394;
	sub_8209EDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820FD39C;
	sub_821883B8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fd3b8
	if (ctx.cr6.eq) goto loc_820FD3B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820FD3B4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820FD3B8:
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

__attribute__((alias("__imp__sub_820FD3D0"))) PPC_WEAK_FUNC(sub_820FD3D0);
PPC_FUNC_IMPL(__imp__sub_820FD3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x820FD3D8;
	sub_82248770(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,31952
	ctx.r12.u64 = ctx.r12.u64 | 31952;
	// bl 0x8224a1a4
	ctx.lr = 0x820FD3F0;
	sub_8224A1A4(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r30,r1,320
	ctx.r30.s64 = ctx.r1.s64 + 320;
	// li r31,7
	ctx.r31.s64 = 7;
loc_820FD404:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210f910
	ctx.lr = 0x820FD40C;
	sub_8210F910(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4144
	ctx.r30.s64 = ctx.r30.s64 + 4144;
	// bge 0x820fd404
	if (!ctx.cr0.lt) goto loc_820FD404;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// ori r4,r4,33152
	ctx.r4.u64 = ctx.r4.u64 | 33152;
	// bl 0x822aa648
	ctx.lr = 0x820FD428;
	sub_822AA648(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r1,328
	ctx.r30.s64 = ctx.r1.s64 + 328;
	// addi r24,r26,2272
	ctx.r24.s64 = ctx.r26.s64 + 2272;
	// lfs f30,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r26,1000
	ctx.r31.s64 = ctx.r26.s64 + 1000;
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f29,11484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11484);
	ctx.f29.f64 = double(temp.f32);
	// li r23,8
	ctx.r23.s64 = 8;
loc_820FD454:
	// lfs f0,-116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -116);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x820fd5a8
	if (ctx.cr6.lt) goto loc_820FD5A8;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// addi r4,r26,6816
	ctx.r4.s64 = ctx.r26.s64 + 6816;
	// lwz r5,60(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// mulli r27,r10,4144
	ctx.r27.s64 = ctx.r10.s64 * 4144;
	// add r29,r27,r11
	ctx.r29.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210f8d0
	ctx.lr = 0x820FD480;
	sub_8210F8D0(ctx, base);
	// lbz r9,-136(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -136);
	// addi r28,r31,-136
	ctx.r28.s64 = ctx.r31.s64 + -136;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820fd4a4
	if (!ctx.cr6.eq) goto loc_820FD4A4;
	// addi r4,r26,10960
	ctx.r4.s64 = ctx.r26.s64 + 10960;
	// lwz r5,60(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210f8d0
	ctx.lr = 0x820FD4A0;
	sub_8210F8D0(ctx, base);
	// b 0x820fd568
	goto loc_820FD568;
loc_820FD4A4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820fc5d0
	ctx.lr = 0x820FD4B4;
	sub_820FC5D0(ctx, base);
	// stfs f31,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r11,-135(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -135);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fd568
	if (ctx.cr6.eq) goto loc_820FD568;
	// lfs f0,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820fd4ec
	if (!ctx.cr6.eq) goto loc_820FD4EC;
	// addi r5,r31,-24
	ctx.r5.s64 = ctx.r31.s64 + -24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820fcff0
	ctx.lr = 0x820FD4EC;
	sub_820FCFF0(ctx, base);
loc_820FD4EC:
	// ld r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + -24);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// ld r7,-8(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + -8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f6,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f7,-8(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + -8, temp.u32);
	// stfs f6,-4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + -4, temp.u32);
	// std r8,-16(r31)
	PPC_STORE_U64(ctx.r31.u32 + -16, ctx.r8.u64);
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// std r7,-24(r31)
	PPC_STORE_U64(ctx.r31.u32 + -24, ctx.r7.u64);
	// stfs f30,4(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r6,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// addi r10,r31,-24
	ctx.r10.s64 = ctx.r31.s64 + -24;
	// std r11,-8(r31)
	PPC_STORE_U64(ctx.r31.u32 + -8, ctx.r11.u64);
	// bl 0x820fcff0
	ctx.lr = 0x820FD568;
	sub_820FCFF0(ctx, base);
loc_820FD568:
	// addi r11,r1,4420
	ctx.r11.s64 = ctx.r1.s64 + 4420;
	// li r9,10
	ctx.r9.s64 = 10;
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r11,r31,-120
	ctx.r11.s64 = ctx.r31.s64 + -120;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820FD580:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820fd580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FD580;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r30,r30,4144
	ctx.r30.s64 = ctx.r30.s64 + 4144;
	// stwx r29,r25,r11
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r29.u32);
	// stwx r28,r25,r10
	PPC_STORE_U32(ctx.r25.u32 + ctx.r10.u32, ctx.r28.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
loc_820FD5A8:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// bne 0x820fd454
	if (!ctx.cr0.eq) goto loc_820FD454;
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// ble cr6,0x820fd71c
	if (!ctx.cr6.gt) goto loc_820FD71C;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r22,-1
	ctx.r25.s64 = ctx.r22.s64 + -1;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
loc_820FD5D0:
	// lwzx r28,r27,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// ld r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// addi r29,r28,96
	ctx.r29.s64 = ctx.r28.s64 + 96;
	// ld r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 96);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x820fd5f8
	if (!ctx.cr6.eq) goto loc_820FD5F8;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820fd708
	if (ctx.cr6.eq) goto loc_820FD708;
loc_820FD5F8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821875f8
	ctx.lr = 0x820FD604;
	sub_821875F8(ctx, base);
	// ld r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r9,104(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 104);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// stfs f30,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x82096f18
	ctx.lr = 0x820FD628;
	sub_82096F18(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f1,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821875f8
	ctx.lr = 0x820FD634;
	sub_821875F8(ctx, base);
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,228
	ctx.r7.s64 = ctx.r1.s64 + 228;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// stfs f30,316(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// lwzx r31,r27,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8208ea90
	ctx.lr = 0x820FD678;
	sub_8208EA90(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208ea90
	ctx.lr = 0x820FD684;
	sub_8208EA90(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r6,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r6.u64);
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,108(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821927b8
	ctx.lr = 0x820FD6CC;
	sub_821927B8(ctx, base);
	// addi r31,r31,2048
	ctx.r31.s64 = ctx.r31.s64 + 2048;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821920b8
	ctx.lr = 0x820FD6E0;
	sub_821920B8(ctx, base);
	// lfs f13,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821927b8
	ctx.lr = 0x820FD6F8;
	sub_821927B8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821920b8
	ctx.lr = 0x820FD708;
	sub_821920B8(ctx, base);
loc_820FD708:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// bne 0x820fd5d0
	if (!ctx.cr0.eq) goto loc_820FD5D0;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
loc_820FD71C:
	// bne cr6,0x820fd7b0
	if (!ctx.cr6.eq) goto loc_820FD7B0;
	// addi r3,r26,6816
	ctx.r3.s64 = ctx.r26.s64 + 6816;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r5,60(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// bl 0x8210f8d0
	ctx.lr = 0x820FD730;
	sub_8210F8D0(ctx, base);
	// lfs f0,140(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x820fd778
	if (!ctx.cr6.eq) goto loc_820FD778;
	// ld r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 128);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 136);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,36(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// addi r8,r30,128
	ctx.r8.s64 = ctx.r30.s64 + 128;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// bl 0x8208ea90
	ctx.lr = 0x820FD764;
	sub_8208EA90(ctx, base);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r6,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.r6.u64);
	// std r5,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r5.u64);
loc_820FD778:
	// lis r31,0
	ctx.r31.s64 = 0;
	// ori r31,r31,33472
	ctx.r31.u64 = ctx.r31.u64 | 33472;
	// add r31,r1,r31
	ctx.r31.u64 = ctx.r1.u64 + ctx.r31.u64;
	// li r30,7
	ctx.r30.s64 = 7;
loc_820FD788:
	// addi r31,r31,-4144
	ctx.r31.s64 = ctx.r31.s64 + -4144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x820FD794;
	sub_8209EDA0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x820fd788
	if (!ctx.cr0.lt) goto loc_820FD788;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_820FD7B0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x820fd7f0
	if (!ctx.cr6.eq) goto loc_820FD7F0;
	// lis r31,0
	ctx.r31.s64 = 0;
	// ori r31,r31,33472
	ctx.r31.u64 = ctx.r31.u64 | 33472;
	// add r31,r1,r31
	ctx.r31.u64 = ctx.r1.u64 + ctx.r31.u64;
	// li r30,7
	ctx.r30.s64 = 7;
loc_820FD7C8:
	// addi r31,r31,-4144
	ctx.r31.s64 = ctx.r31.s64 + -4144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x820FD7D4;
	sub_8209EDA0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x820fd7c8
	if (!ctx.cr0.lt) goto loc_820FD7C8;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_820FD7F0:
	// stfs f31,10952(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 10952, temp.u32);
	// addi r6,r26,2304
	ctx.r6.s64 = ctx.r26.s64 + 2304;
	// stfs f30,10916(r26)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r26.u32 + 10916, temp.u32);
	// addi r5,r26,6816
	ctx.r5.s64 = ctx.r26.s64 + 6816;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r8,60(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,2640(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2640);
	// bl 0x820fb428
	ctx.lr = 0x820FD814;
	sub_820FB428(ctx, base);
	// lis r31,0
	ctx.r31.s64 = 0;
	// ori r31,r31,33472
	ctx.r31.u64 = ctx.r31.u64 | 33472;
	// add r31,r1,r31
	ctx.r31.u64 = ctx.r1.u64 + ctx.r31.u64;
	// li r30,7
	ctx.r30.s64 = 7;
loc_820FD824:
	// addi r31,r31,-4144
	ctx.r31.s64 = ctx.r31.s64 + -4144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209eda0
	ctx.lr = 0x820FD830;
	sub_8209EDA0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x820fd824
	if (!ctx.cr0.lt) goto loc_820FD824;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_820FD84C"))) PPC_WEAK_FUNC(sub_820FD84C);
PPC_FUNC_IMPL(__imp__sub_820FD84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FD850"))) PPC_WEAK_FUNC(sub_820FD850);
PPC_FUNC_IMPL(__imp__sub_820FD850) {
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
	// bl 0x820fc350
	ctx.lr = 0x820FD868;
	sub_820FC350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fd3d0
	ctx.lr = 0x820FD870;
	sub_820FD3D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb760
	ctx.lr = 0x820FD878;
	sub_820FB760(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fd898
	if (ctx.cr6.eq) goto loc_820FD898;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FD898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820FD898:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fd8ac
	if (ctx.cr6.eq) goto loc_820FD8AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820fa340
	ctx.lr = 0x820FD8AC;
	sub_820FA340(ctx, base);
loc_820FD8AC:
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

__attribute__((alias("__imp__sub_820FD8C0"))) PPC_WEAK_FUNC(sub_820FD8C0);
PPC_FUNC_IMPL(__imp__sub_820FD8C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820fd934
	if (!ctx.cr6.gt) goto loc_820FD934;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_820FD8D8:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lhzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820fd91c
	if (ctx.cr6.eq) goto loc_820FD91C;
	// lwz r5,64(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,176(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 176);
	// addi r4,r9,352
	ctx.r4.s64 = ctx.r9.s64 + 352;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// ld r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r5,352(r9)
	PPC_STORE_U64(ctx.r9.u32 + 352, ctx.r5.u64);
	// ld r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r4,360(r9)
	PPC_STORE_U64(ctx.r9.u32 + 360, ctx.r4.u64);
loc_820FD91C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fd8d8
	if (ctx.cr6.lt) goto loc_820FD8D8;
loc_820FD934:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_820FD94C:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lhzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820fd990
	if (ctx.cr6.eq) goto loc_820FD990;
	// lwz r5,64(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,176(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 176);
	// addi r4,r9,352
	ctx.r4.s64 = ctx.r9.s64 + 352;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// ld r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r5,352(r9)
	PPC_STORE_U64(ctx.r9.u32 + 352, ctx.r5.u64);
	// ld r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r4,360(r9)
	PPC_STORE_U64(ctx.r9.u32 + 360, ctx.r4.u64);
loc_820FD990:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fd94c
	if (ctx.cr6.lt) goto loc_820FD94C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FD9AC"))) PPC_WEAK_FUNC(sub_820FD9AC);
PPC_FUNC_IMPL(__imp__sub_820FD9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FD9B0"))) PPC_WEAK_FUNC(sub_820FD9B0);
PPC_FUNC_IMPL(__imp__sub_820FD9B0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820fda3c
	if (ctx.cr6.eq) goto loc_820FDA3C;
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820fda3c
	if (ctx.cr6.eq) goto loc_820FDA3C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,25356
	ctx.r9.s64 = ctx.r9.s64 + 25356;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x820fda3c
	if (!ctx.cr6.gt) goto loc_820FDA3C;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r7,r8,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_820FDA0C:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820fda24
	if (!ctx.cr6.eq) goto loc_820FDA24;
	// lhzx r8,r9,r5
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r5.u32);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// bne cr6,0x820fda48
	if (!ctx.cr6.eq) goto loc_820FDA48;
loc_820FDA24:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blt cr6,0x820fda0c
	if (ctx.cr6.lt) goto loc_820FDA0C;
loc_820FDA3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_820FDA48:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FDA60"))) PPC_WEAK_FUNC(sub_820FDA60);
PPC_FUNC_IMPL(__imp__sub_820FDA60) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820fdaec
	if (ctx.cr6.eq) goto loc_820FDAEC;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820fdaec
	if (ctx.cr6.eq) goto loc_820FDAEC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,25356
	ctx.r9.s64 = ctx.r9.s64 + 25356;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x820fdaec
	if (!ctx.cr6.gt) goto loc_820FDAEC;
	// addi r7,r9,12
	ctx.r7.s64 = ctx.r9.s64 + 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r7,r8,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_820FDABC:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820fdad4
	if (!ctx.cr6.eq) goto loc_820FDAD4;
	// lhzx r8,r9,r5
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r5.u32);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// bne cr6,0x820fdaf8
	if (!ctx.cr6.eq) goto loc_820FDAF8;
loc_820FDAD4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blt cr6,0x820fdabc
	if (ctx.cr6.lt) goto loc_820FDABC;
loc_820FDAEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_820FDAF8:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FDB10"))) PPC_WEAK_FUNC(sub_820FDB10);
PPC_FUNC_IMPL(__imp__sub_820FDB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820FDB18;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820fdb4c
	if (!ctx.cr6.eq) goto loc_820FDB4C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_820FDB4C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fdb78
	if (!ctx.cr6.eq) goto loc_820FDB78;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f04f0
	ctx.lr = 0x820FDB6C;
	sub_820F04F0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fdbc4
	if (ctx.cr6.eq) goto loc_820FDBC4;
loc_820FDB78:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820fdbac
	if (!ctx.cr6.eq) goto loc_820FDBAC;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsh r8,r28
	ctx.r8.s64 = ctx.r28.s16;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820fdbac
	if (!ctx.cr6.eq) goto loc_820FDBAC;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// extsh r8,r27
	ctx.r8.s64 = ctx.r27.s16;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x820fdbc4
	if (ctx.cr6.eq) goto loc_820FDBC4;
loc_820FDBAC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f04f0
	ctx.lr = 0x820FDBC0;
	sub_820F04F0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_820FDBC4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x820f0548
	ctx.lr = 0x820FDBF0;
	sub_820F0548(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820FDBF8"))) PPC_WEAK_FUNC(sub_820FDBF8);
PPC_FUNC_IMPL(__imp__sub_820FDBF8) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,25444
	ctx.r10.s64 = ctx.r11.s64 + 25444;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820fdc30
	if (ctx.cr6.eq) goto loc_820FDC30;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820FDC30;
	sub_82183E40(ctx, base);
loc_820FDC30:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fdc4c
	if (ctx.cr6.eq) goto loc_820FDC4C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820FDC4C;
	sub_82183E40(ctx, base);
loc_820FDC4C:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fdc64
	if (ctx.cr6.eq) goto loc_820FDC64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820FDC64;
	sub_82183E40(ctx, base);
loc_820FDC64:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fdc7c
	if (ctx.cr6.eq) goto loc_820FDC7C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x820FDC7C;
	sub_82183E40(ctx, base);
loc_820FDC7C:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x820FDC88;
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

__attribute__((alias("__imp__sub_820FDCA0"))) PPC_WEAK_FUNC(sub_820FDCA0);
PPC_FUNC_IMPL(__imp__sub_820FDCA0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x820fd9b0
	ctx.lr = 0x820FDCC0;
	sub_820FD9B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fdd2c
	if (ctx.cr6.eq) goto loc_820FDD2C;
	// lbz r10,372(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 372);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x820fdd30
	if (!ctx.cr6.eq) goto loc_820FDD30;
	// extsh r6,r30
	ctx.r6.s64 = ctx.r30.s16;
	// ld r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ld r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// lfs f0,2148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// std r9,160(r11)
	PPC_STORE_U64(ctx.r11.u32 + 160, ctx.r9.u64);
	// stfs f12,84(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// std r7,168(r11)
	PPC_STORE_U64(ctx.r11.u32 + 168, ctx.r7.u64);
	// std r9,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// bl 0x820e7978
	ctx.lr = 0x820FDD2C;
	sub_820E7978(ctx, base);
loc_820FDD2C:
	// li r3,6
	ctx.r3.s64 = 6;
loc_820FDD30:
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

__attribute__((alias("__imp__sub_820FDD48"))) PPC_WEAK_FUNC(sub_820FDD48);
PPC_FUNC_IMPL(__imp__sub_820FDD48) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x820fda60
	ctx.lr = 0x820FDD68;
	sub_820FDA60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fdf20
	if (ctx.cr6.eq) goto loc_820FDF20;
	// extsh r6,r30
	ctx.r6.s64 = ctx.r30.s16;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,80(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f13,2144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lfs f11,9860(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9860);
	ctx.f11.f64 = double(temp.f32);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r10,r10,2140
	ctx.r10.s64 = ctx.r10.s64 + 2140;
	// lfs f10,2136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2136);
	ctx.f10.f64 = double(temp.f32);
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f6,48(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// bge cr6,0x820fde3c
	if (!ctx.cr6.lt) goto loc_820FDE3C;
	// fsubs f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// ble cr6,0x820fde54
	if (!ctx.cr6.gt) goto loc_820FDE54;
	// fadds f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// b 0x820fde50
	goto loc_820FDE50;
loc_820FDE3C:
	// fsubs f9,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// ble cr6,0x820fde54
	if (!ctx.cr6.gt) goto loc_820FDE54;
	// lfs f0,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
loc_820FDE50:
	// stfs f13,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
loc_820FDE54:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820fde9c
	if (!ctx.cr6.lt) goto loc_820FDE9C;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820fdeb4
	if (!ctx.cr6.gt) goto loc_820FDEB4;
	// lfs f0,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// b 0x820fdeb0
	goto loc_820FDEB0;
loc_820FDE9C:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820fdeb4
	if (!ctx.cr6.gt) goto loc_820FDEB4;
	// lfs f0,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
loc_820FDEB0:
	// stfs f13,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
loc_820FDEB4:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820fdf04
	if (!ctx.cr6.lt) goto loc_820FDF04;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820fdf24
	if (!ctx.cr6.gt) goto loc_820FDF24;
	// lfs f0,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f13,152(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// b 0x820fdf24
	goto loc_820FDF24;
loc_820FDF04:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820fdf24
	if (!ctx.cr6.gt) goto loc_820FDF24;
	// lfs f0,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f13,152(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// b 0x820fdf24
	goto loc_820FDF24;
loc_820FDF20:
	// li r3,3
	ctx.r3.s64 = 3;
loc_820FDF24:
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

__attribute__((alias("__imp__sub_820FDF3C"))) PPC_WEAK_FUNC(sub_820FDF3C);
PPC_FUNC_IMPL(__imp__sub_820FDF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FDF40"))) PPC_WEAK_FUNC(sub_820FDF40);
PPC_FUNC_IMPL(__imp__sub_820FDF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820FDF48;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r30,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r30.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// bl 0x82184800
	ctx.lr = 0x820FDF7C;
	sub_82184800(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82184800
	ctx.lr = 0x820FDF8C;
	sub_82184800(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82184800
	ctx.lr = 0x820FDF9C;
	sub_82184800(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82184800
	ctx.lr = 0x820FDFAC;
	sub_82184800(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82184800
	ctx.lr = 0x820FDFBC;
	sub_82184800(ctx, base);
	// lis r4,13133
	ctx.r4.s64 = 860684288;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ori r4,r4,17985
	ctx.r4.u64 = ctx.r4.u64 | 17985;
	// bl 0x821882d0
	ctx.lr = 0x820FDFCC;
	sub_821882D0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fdfe0
	if (ctx.cr6.eq) goto loc_820FDFE0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820fdfe4
	goto loc_820FDFE4;
loc_820FDFE0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820FDFE4:
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 + 132;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
loc_820FE000:
	// stfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stw r29,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r29.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820fe000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FE000;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820FE01C"))) PPC_WEAK_FUNC(sub_820FE01C);
PPC_FUNC_IMPL(__imp__sub_820FE01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FE020"))) PPC_WEAK_FUNC(sub_820FE020);
PPC_FUNC_IMPL(__imp__sub_820FE020) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820fe04c
	if (ctx.cr6.lt) goto loc_820FE04C;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_820FE04C:
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x820fdd48
	sub_820FDD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FE054"))) PPC_WEAK_FUNC(sub_820FE054);
PPC_FUNC_IMPL(__imp__sub_820FE054) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FE058"))) PPC_WEAK_FUNC(sub_820FE058);
PPC_FUNC_IMPL(__imp__sub_820FE058) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820fe078
	if (ctx.cr6.lt) goto loc_820FE078;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_820FE078:
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x820fdca0
	sub_820FDCA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FE080"))) PPC_WEAK_FUNC(sub_820FE080);
PPC_FUNC_IMPL(__imp__sub_820FE080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FE084"))) PPC_WEAK_FUNC(sub_820FE084);
PPC_FUNC_IMPL(__imp__sub_820FE084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FE088"))) PPC_WEAK_FUNC(sub_820FE088);
PPC_FUNC_IMPL(__imp__sub_820FE088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820FE090;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820fe1e8
	if (!ctx.cr6.eq) goto loc_820FE1E8;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r11,25396
	ctx.r29.s64 = ctx.r11.s64 + 25396;
	// lwz r30,44(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r31,r30,768
	ctx.r31.s64 = ctx.r30.s64 + 768;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,820(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 820);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// bne cr6,0x820fe18c
	if (!ctx.cr6.eq) goto loc_820FE18C;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x820fe1e8
	if (ctx.cr6.lt) goto loc_820FE1E8;
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820fe114
	if (ctx.cr6.eq) goto loc_820FE114;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,-7560
	ctx.r8.s64 = ctx.r11.s64 + -7560;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,25476(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25476);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f0,64(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820FE114:
	// bl 0x8218fba8
	ctx.lr = 0x820FE118;
	sub_8218FBA8(ctx, base);
	// lis r11,27670
	ctx.r11.s64 = 1813381120;
	// rlwinm r9,r3,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// ori r8,r11,49517
	ctx.r8.u64 = ctx.r11.u64 | 49517;
	// mulhwu r11,r9,r8
	ctx.r11.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r6,26,6,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FFFFFF;
	// mulli r4,r5,90
	ctx.r4.s64 = ctx.r5.s64 * 90;
	// subf. r3,r4,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fe1e8
	if (!ctx.cr0.eq) goto loc_820FE1E8;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r8,r11,-7560
	ctx.r8.s64 = ctx.r11.s64 + -7560;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,13660(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13660);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,64(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1204(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1204, temp.u32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// b 0x820fe1d4
	goto loc_820FE1D4;
loc_820FE18C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x820fe1e8
	if (!ctx.cr6.gt) goto loc_820FE1E8;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,-7560
	ctx.r8.s64 = ctx.r11.s64 + -7560;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7884(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7884);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,64(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1204(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1204, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_820FE1D4:
	// stfs f0,1184(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1184, temp.u32);
	// stfs f12,1300(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1300, temp.u32);
	// lfs f0,64(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f11,1232(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1232, temp.u32);
loc_820FE1E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820FE1F0"))) PPC_WEAK_FUNC(sub_820FE1F0);
PPC_FUNC_IMPL(__imp__sub_820FE1F0) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r4,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fe244
	if (!ctx.cr6.eq) goto loc_820FE244;
	// lis r4,13133
	ctx.r4.s64 = 860684288;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// ori r4,r4,17985
	ctx.r4.u64 = ctx.r4.u64 | 17985;
	// bl 0x821882d0
	ctx.lr = 0x820FE22C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fe23c
	if (ctx.cr6.eq) goto loc_820FE23C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820fe240
	goto loc_820FE240;
loc_820FE23C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FE240:
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_820FE244:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe35c
	if (ctx.cr6.eq) goto loc_820FE35C;
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820fe35c
	if (ctx.cr6.eq) goto loc_820FE35C;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,25396
	ctx.r8.s64 = ctx.r10.s64 + 25396;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// ld r4,768(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 768);
	// ld r3,776(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 776);
	// addi r10,r11,768
	ctx.r10.s64 = ctx.r11.s64 + 768;
	// addi r11,r11,1152
	ctx.r11.s64 = ctx.r11.s64 + 1152;
	// lfsx f11,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r10,144
	ctx.r7.s64 = ctx.r10.s64 + 144;
	// lfs f13,25480(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 25480);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,144
	ctx.r9.s64 = ctx.r11.s64 + 144;
	// lfs f12,3688(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3688);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// stfs f11,52(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// std r4,144(r10)
	PPC_STORE_U64(ctx.r10.u32 + 144, ctx.r4.u64);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// std r3,152(r10)
	PPC_STORE_U64(ctx.r10.u32 + 152, ctx.r3.u64);
	// stfs f13,56(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// stfs f12,80(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f11,52(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// std r6,152(r11)
	PPC_STORE_U64(ctx.r11.u32 + 152, ctx.r6.u64);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// std r5,144(r11)
	PPC_STORE_U64(ctx.r11.u32 + 144, ctx.r5.u64);
	// stfs f12,80(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// bne cr6,0x820fe35c
	if (!ctx.cr6.eq) goto loc_820FE35C;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// ld r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FE35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820FE35C:
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

__attribute__((alias("__imp__sub_820FE374"))) PPC_WEAK_FUNC(sub_820FE374);
PPC_FUNC_IMPL(__imp__sub_820FE374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FE378"))) PPC_WEAK_FUNC(sub_820FE378);
PPC_FUNC_IMPL(__imp__sub_820FE378) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,25412
	ctx.r10.s64 = ctx.r11.s64 + 25412;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x820fe3c0
	if (ctx.cr6.eq) goto loc_820FE3C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FE3C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820FE3C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x821883b8
	ctx.lr = 0x820FE3D0;
	sub_821883B8(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe3ec
	if (ctx.cr6.eq) goto loc_820FE3EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820FE3E8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820FE3EC:
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

__attribute__((alias("__imp__sub_820FE404"))) PPC_WEAK_FUNC(sub_820FE404);
PPC_FUNC_IMPL(__imp__sub_820FE404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FE408"))) PPC_WEAK_FUNC(sub_820FE408);
PPC_FUNC_IMPL(__imp__sub_820FE408) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r4,r11,400
	ctx.r4.s64 = ctx.r11.s64 + 400;
	// bl 0x820e7d30
	ctx.lr = 0x820FE430;
	sub_820E7D30(ctx, base);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_820FE450"))) PPC_WEAK_FUNC(sub_820FE450);
PPC_FUNC_IMPL(__imp__sub_820FE450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x820FE458;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x820FE470;
	sub_82185740(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,25484
	ctx.r10.s64 = ctx.r11.s64 + 25484;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x821882d0
	ctx.lr = 0x820FE498;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fe4a8
	if (ctx.cr6.eq) goto loc_820FE4A8;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820fe4ac
	goto loc_820FE4AC;
loc_820FE4A8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_820FE4AC:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,19780
	ctx.r4.u64 = ctx.r4.u64 | 19780;
	// bl 0x821882d0
	ctx.lr = 0x820FE4C0;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fe4e0
	if (ctx.cr6.eq) goto loc_820FE4E0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_820FE4E0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_820FE4F8"))) PPC_WEAK_FUNC(sub_820FE4F8);
PPC_FUNC_IMPL(__imp__sub_820FE4F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FE510"))) PPC_WEAK_FUNC(sub_820FE510);
PPC_FUNC_IMPL(__imp__sub_820FE510) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rotlw r11,r11,r10
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, ctx.r10.u8 & 0x1F);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe538
	if (ctx.cr6.eq) goto loc_820FE538;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FE52C:
	// rotlwi r11,r11,31
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 31);
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
	// bdnz 0x820fe52c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FE52C;
loc_820FE538:
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// slw r10,r9,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// ble cr6,0x820fe56c
	if (!ctx.cr6.gt) goto loc_820FE56C;
	// subf r6,r8,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r8.s64;
	// slw r3,r7,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// blr 
	return;
loc_820FE56C:
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srw r3,r7,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FE578"))) PPC_WEAK_FUNC(sub_820FE578);
PPC_FUNC_IMPL(__imp__sub_820FE578) {
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
	// bl 0x820fdbf8
	ctx.lr = 0x820FE598;
	sub_820FDBF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe5b4
	if (ctx.cr6.eq) goto loc_820FE5B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x820FE5B0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820FE5B4:
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

__attribute__((alias("__imp__sub_820FE5CC"))) PPC_WEAK_FUNC(sub_820FE5CC);
PPC_FUNC_IMPL(__imp__sub_820FE5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FE5D0"))) PPC_WEAK_FUNC(sub_820FE5D0);
PPC_FUNC_IMPL(__imp__sub_820FE5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
loc_820FE5FC:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lhzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820fe64c
	if (ctx.cr6.eq) goto loc_820FE64C;
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r8,176(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// addi r11,r10,352
	ctx.r11.s64 = ctx.r10.s64 + 352;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f13,360(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 356);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// lfs f11,352(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
loc_820FE64C:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r7,r7,384
	ctx.r7.s64 = ctx.r7.s64 + 384;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fe5fc
	if (ctx.cr6.lt) goto loc_820FE5FC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FE668"))) PPC_WEAK_FUNC(sub_820FE668);
PPC_FUNC_IMPL(__imp__sub_820FE668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x820FE670;
	sub_82248774(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r25,r11,-7560
	ctx.r25.s64 = ctx.r11.s64 + -7560;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// beq cr6,0x820fe69c
	if (ctx.cr6.eq) goto loc_820FE69C;
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// bne cr6,0x820fe6a0
	if (!ctx.cr6.eq) goto loc_820FE6A0;
loc_820FE69C:
	// li r23,1
	ctx.r23.s64 = 1;
loc_820FE6A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x820fe900
	if (!ctx.cr6.gt) goto loc_820FE900;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
loc_820FE6C0:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lhzx r9,r11,r26
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// extsh r27,r9
	ctx.r27.s64 = ctx.r9.s16;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x820fe8e8
	if (ctx.cr6.eq) goto loc_820FE8E8;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820fe710
	if (ctx.cr6.gt) goto loc_820FE710;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x820fe704
	if (!ctx.cr6.eq) goto loc_820FE704;
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// bne cr6,0x820fe704
	if (!ctx.cr6.eq) goto loc_820FE704;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x820fe70c
	goto loc_820FE70C;
loc_820FE704:
	// lfs f12,60(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_820FE70C:
	// stfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_820FE710:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820fe744
	if (!ctx.cr6.gt) goto loc_820FE744;
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// std r11,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r11.u64);
	// std r10,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r10.u64);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// b 0x820fe77c
	goto loc_820FE77C;
loc_820FE744:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820fe760
	if (!ctx.cr6.eq) goto loc_820FE760;
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// b 0x820fe77c
	goto loc_820FE77C;
loc_820FE760:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// bl 0x82186cd8
	ctx.lr = 0x820FE77C;
	sub_82186CD8(ctx, base);
loc_820FE77C:
	// lbz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 372);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820fe814
	if (!ctx.cr6.eq) goto loc_820FE814;
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820fe7a4
	if (ctx.cr6.gt) goto loc_820FE7A4;
	// lfs f12,60(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_820FE7A4:
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820fe7dc
	if (!ctx.cr6.gt) goto loc_820FE7DC;
	// ld r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// ld r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r9,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r9.u64);
	// std r8,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r8.u64);
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// std r8,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r8.u64);
	// b 0x820fe814
	goto loc_820FE814;
loc_820FE7DC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820fe7f8
	if (!ctx.cr6.eq) goto loc_820FE7F8;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// b 0x820fe814
	goto loc_820FE814;
loc_820FE7F8:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// bl 0x82186cd8
	ctx.lr = 0x820FE814;
	sub_82186CD8(ctx, base);
loc_820FE814:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821877f8
	ctx.lr = 0x820FE820;
	sub_821877F8(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm r9,r27,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 6) & 0xFFFFFFC0;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r7.u64);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r6,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r6.u64);
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r5,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r5.u64);
	// ld r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r4,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r4.u64);
	// lbz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 372);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x820fe8e4
	if (!ctx.cr6.eq) goto loc_820FE8E4;
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r8,176(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// addi r11,r10,352
	ctx.r11.s64 = ctx.r10.s64 + 352;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f0,360(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 356);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// lfs f12,352(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r7,64(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,176(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 176);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f10,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lfs f9,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f7,48(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f5,52(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f4,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f3,56(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_820FE8E4:
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
loc_820FE8E8:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// addi r28,r28,384
	ctx.r28.s64 = ctx.r28.s64 + 384;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fe6c0
	if (ctx.cr6.lt) goto loc_820FE6C0;
loc_820FE900:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820fea1c
	if (!ctx.cr6.gt) goto loc_820FEA1C;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_820FE918:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lhzx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x820fea04
	if (ctx.cr6.eq) goto loc_820FEA04;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820fe968
	if (ctx.cr6.gt) goto loc_820FE968;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x820fe95c
	if (!ctx.cr6.eq) goto loc_820FE95C;
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// bne cr6,0x820fe95c
	if (!ctx.cr6.eq) goto loc_820FE95C;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x820fe964
	goto loc_820FE964;
loc_820FE95C:
	// lfs f12,60(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_820FE964:
	// stfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_820FE968:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820fe99c
	if (!ctx.cr6.gt) goto loc_820FE99C;
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// ld r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// std r10,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r10.u64);
	// std r9,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r9.u64);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// b 0x820fe9d8
	goto loc_820FE9D8;
loc_820FE99C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820fe9bc
	if (!ctx.cr6.eq) goto loc_820FE9BC;
	// ld r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// ld r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// b 0x820fe9d8
	goto loc_820FE9D8;
loc_820FE9BC:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// bl 0x82186cd8
	ctx.lr = 0x820FE9D8;
	sub_82186CD8(ctx, base);
loc_820FE9D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82187920
	ctx.lr = 0x820FE9E4;
	sub_82187920(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r31,304
	ctx.r5.s64 = ctx.r31.s64 + 304;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82289c50
	ctx.lr = 0x820FEA00;
	sub_82289C50(ctx, base);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
loc_820FEA04:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r28,r28,384
	ctx.r28.s64 = ctx.r28.s64 + 384;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820fe918
	if (ctx.cr6.lt) goto loc_820FE918;
loc_820FEA1C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_820FEA28"))) PPC_WEAK_FUNC(sub_820FEA28);
PPC_FUNC_IMPL(__imp__sub_820FEA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820FEA30;
	sub_82248784(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x820fd9b0
	ctx.lr = 0x820FEA40;
	sub_820FD9B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fea88
	if (ctx.cr6.eq) goto loc_820FEA88;
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,2144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f12,80(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
loc_820FEA88:
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// li r6,9
	ctx.r6.s64 = 9;
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// li r28,31
	ctx.r28.s64 = 31;
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r29,10
	ctx.r29.s64 = 10;
	// or r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x820fe510
	ctx.lr = 0x820FEAD8;
	sub_820FE510(ctx, base);
	// li r7,21
	ctx.r7.s64 = 21;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r30,11
	ctx.r30.s64 = 11;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820fe510
	ctx.lr = 0x820FEB00;
	sub_820FE510(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// or r30,r3,r27
	ctx.r30.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820fe510
	ctx.lr = 0x820FEB1C;
	sub_820FE510(ctx, base);
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820feb68
	if (ctx.cr6.eq) goto loc_820FEB68;
	// rlwinm r10,r11,16,16,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFC0;
	// rlwinm r9,r11,26,16,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFFE0;
	// rlwinm r8,r11,5,16,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFE0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82186d38
	ctx.lr = 0x820FEB4C;
	sub_82186D38(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82187ef8
	ctx.lr = 0x820FEB58;
	sub_82187EF8(ctx, base);
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r7,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r7.u64);
	// std r6,152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 152, ctx.r6.u64);
loc_820FEB68:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820FEB74"))) PPC_WEAK_FUNC(sub_820FEB74);
PPC_FUNC_IMPL(__imp__sub_820FEB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FEB78"))) PPC_WEAK_FUNC(sub_820FEB78);
PPC_FUNC_IMPL(__imp__sub_820FEB78) {
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
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,20304
	ctx.r4.u64 = ctx.r4.u64 | 20304;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820FEBA4;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,25492
	ctx.r10.s64 = ctx.r11.s64 + 25492;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x820fdf40
	ctx.lr = 0x820FEBC0;
	sub_820FDF40(ctx, base);
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

__attribute__((alias("__imp__sub_820FEBDC"))) PPC_WEAK_FUNC(sub_820FEBDC);
PPC_FUNC_IMPL(__imp__sub_820FEBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FEBE0"))) PPC_WEAK_FUNC(sub_820FEBE0);
PPC_FUNC_IMPL(__imp__sub_820FEBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x820FEBE8;
	sub_8224877C(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x820fec08
	if (!ctx.cr6.eq) goto loc_820FEC08;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// b 0x820fec10
	goto loc_820FEC10;
loc_820FEC08:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x820fed50
	if (ctx.cr6.eq) goto loc_820FED50;
loc_820FEC10:
	// addi r11,r30,34
	ctx.r11.s64 = ctx.r30.s64 + 34;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820fed50
	if (ctx.cr6.eq) goto loc_820FED50;
	// addi r11,r30,10
	ctx.r11.s64 = ctx.r30.s64 + 10;
	// addi r10,r30,14
	ctx.r10.s64 = ctx.r30.s64 + 14;
	// addi r9,r30,18
	ctx.r9.s64 = ctx.r30.s64 + 18;
	// addi r4,r30,22
	ctx.r4.s64 = ctx.r30.s64 + 22;
	// addi r3,r30,26
	ctx.r3.s64 = ctx.r30.s64 + 26;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// rlwinm r26,r9,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r5.u32);
	// stwx r7,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r7.u32);
	// lfs f0,2148(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stwx r8,r26,r31
	PPC_STORE_U32(ctx.r26.u32 + ctx.r31.u32, ctx.r8.u32);
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fec80
	if (!ctx.cr6.eq) goto loc_820FEC80;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x820be980
	ctx.lr = 0x820FEC7C;
	sub_820BE980(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
loc_820FEC80:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fec90
	if (ctx.cr6.eq) goto loc_820FEC90;
	// bl 0x820fe5d0
	ctx.lr = 0x820FEC90;
	sub_820FE5D0(ctx, base);
loc_820FEC90:
	// addi r11,r30,38
	ctx.r11.s64 = ctx.r30.s64 + 38;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// stwx r25,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r25.u32);
	// lwz r11,-4984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820fecec
	if (!ctx.cr6.eq) goto loc_820FECEC;
	// bl 0x8215bd60
	ctx.lr = 0x820FECB4;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820fecec
	if (!ctx.cr6.eq) goto loc_820FECEC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x820fecec
	if (!ctx.cr6.eq) goto loc_820FECEC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820fecec
	if (!ctx.cr6.eq) goto loc_820FECEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-5068(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5068);
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x820f0698
	ctx.lr = 0x820FECE8;
	sub_820F0698(ctx, base);
	// stw r25,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r25.u32);
loc_820FECEC:
	// lwz r3,-5068(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -5068);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fed50
	if (ctx.cr6.eq) goto loc_820FED50;
	// lwzx r6,r26,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// lwzx r5,r27,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x820f0698
	ctx.lr = 0x820FED08;
	sub_820F0698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820fed50
	if (!ctx.cr6.eq) goto loc_820FED50;
	// lwzx r6,r29,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x820fed34
	if (!ctx.cr6.eq) goto loc_820FED34;
	// lwzx r11,r27,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820fed34
	if (!ctx.cr6.eq) goto loc_820FED34;
	// lwzx r11,r26,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fed50
	if (ctx.cr6.eq) goto loc_820FED50;
loc_820FED34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwzx r8,r26,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwzx r7,r27,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// addi r5,r11,25540
	ctx.r5.s64 = ctx.r11.s64 + 25540;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a5f0
	ctx.lr = 0x820FED50;
	sub_8218A5F0(ctx, base);
loc_820FED50:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_820FED58"))) PPC_WEAK_FUNC(sub_820FED58);
PPC_FUNC_IMPL(__imp__sub_820FED58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x820FED60;
	sub_82248750(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff3e8
	if (ctx.cr6.eq) goto loc_820FF3E8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r19,r11,-7560
	ctx.r19.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x820feda4
	if (ctx.cr6.eq) goto loc_820FEDA4;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// mr r14,r17
	ctx.r14.u64 = ctx.r17.u64;
	// bne cr6,0x820feda8
	if (!ctx.cr6.eq) goto loc_820FEDA8;
loc_820FEDA4:
	// li r14,1
	ctx.r14.s64 = 1;
loc_820FEDA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,10922
	ctx.r8.s64 = 715784192;
	// lis r7,17224
	ctx.r7.s64 = 1128792064;
	// lfs f30,8328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8328);
	ctx.f30.f64 = double(temp.f32);
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// lfs f31,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// ori r15,r8,43691
	ctx.r15.u64 = ctx.r8.u64 | 43691;
	// lfs f29,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f29.f64 = double(temp.f32);
	// ori r16,r7,16722
	ctx.r16.u64 = ctx.r7.u64 | 16722;
	// lis r18,-32182
	ctx.r18.s64 = -2109079552;
loc_820FEDD8:
	// addi r11,r21,10
	ctx.r11.s64 = ctx.r21.s64 + 10;
	// rlwinm r24,r11,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r24,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x820fee00
	if (!ctx.cr6.eq) goto loc_820FEE00;
	// addi r11,r21,18
	ctx.r11.s64 = ctx.r21.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820ff3c8
	if (ctx.cr6.eq) goto loc_820FF3C8;
loc_820FEE00:
	// addi r11,r21,44
	ctx.r11.s64 = ctx.r21.s64 + 44;
	// rlwinm r20,r11,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r21,48
	ctx.r11.s64 = ctx.r21.s64 + 48;
	// lfsx f0,r20,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x820fee3c
	if (!ctx.cr6.gt) goto loc_820FEE3C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,60(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f0,r20,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r31.u32, temp.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ff3c8
	if (ctx.cr6.eq) goto loc_820FF3C8;
	// stwx r17,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r17.u32);
	// b 0x820fee48
	goto loc_820FEE48;
loc_820FEE3C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f29,r20,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r31.u32, temp.u32);
	// stwx r17,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r17.u32);
loc_820FEE48:
	// addi r11,r21,22
	ctx.r11.s64 = ctx.r21.s64 + 22;
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r22,r11,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfsx f0,r22,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x820fee84
	if (!ctx.cr6.eq) goto loc_820FEE84;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820fee84
	if (ctx.cr6.eq) goto loc_820FEE84;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfsx f0,r22,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + ctx.r31.u32, temp.u32);
	// b 0x820ff3c8
	goto loc_820FF3C8;
loc_820FEE84:
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820feeac
	if (!ctx.cr6.eq) goto loc_820FEEAC;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820feea8
	if (!ctx.cr6.eq) goto loc_820FEEA8;
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfsx f0,r22,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + ctx.r31.u32, temp.u32);
	// b 0x820ff3c8
	goto loc_820FF3C8;
loc_820FEEA8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_820FEEAC:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x820fefb4
	if (ctx.cr6.eq) goto loc_820FEFB4;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820feeec
	if (ctx.cr6.eq) goto loc_820FEEEC;
	// mulhw r10,r11,r15
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32)) >> 32;
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfsx f0,r22,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + ctx.r31.u32, temp.u32);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bne cr6,0x820ff3c8
	if (!ctx.cr6.eq) goto loc_820FF3C8;
loc_820FEEEC:
	// lfsx f0,r22,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r21,38
	ctx.r11.s64 = ctx.r21.s64 + 38;
	// addi r10,r21,18
	ctx.r10.s64 = ctx.r21.s64 + 18;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r9,r21,14
	ctx.r9.s64 = ctx.r21.s64 + 14;
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r25,r10,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-5068(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5068);
	// rlwinm r26,r9,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r4,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 1;
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r7,r25,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// addze r8,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r8.s64 = temp.s64;
	// lwzx r6,r26,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820fdb10
	ctx.lr = 0x820FEF3C;
	sub_820FDB10(ctx, base);
	// lfsx f12,r22,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,60(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfsx f11,r22,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r22.u32 + ctx.r31.u32, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ff3c8
	if (ctx.cr6.eq) goto loc_820FF3C8;
loc_820FEF58:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x820ff3c8
	if (ctx.cr6.eq) goto loc_820FF3C8;
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ff048
	if (ctx.cr6.eq) goto loc_820FF048;
	// clrlwi r28,r11,25
	ctx.r28.u64 = ctx.r11.u32 & 0x7F;
	// addi r30,r23,1
	ctx.r30.s64 = ctx.r23.s64 + 1;
loc_820FEF78:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x820ff048
	if (!ctx.cr6.gt) goto loc_820FF048;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bgt cr6,0x820fefdc
	if (ctx.cr6.gt) goto loc_820FEFDC;
	// beq cr6,0x820ff144
	if (ctx.cr6.eq) goto loc_820FF144;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x820fefcc
	if (ctx.cr6.gt) goto loc_820FEFCC;
	// beq cr6,0x820ff118
	if (ctx.cr6.eq) goto loc_820FF118;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820ff108
	if (ctx.cr6.eq) goto loc_820FF108;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// b 0x820ff038
	goto loc_820FF038;
loc_820FEFB4:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820feeec
	if (ctx.cr6.eq) goto loc_820FEEEC;
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfsx f0,r22,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + ctx.r31.u32, temp.u32);
	// b 0x820ff3c8
	goto loc_820FF3C8;
loc_820FEFCC:
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x820ff144
	if (ctx.cr6.eq) goto loc_820FF144;
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// b 0x820ff038
	goto loc_820FF038;
loc_820FEFDC:
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bgt cr6,0x820ff034
	if (ctx.cr6.gt) goto loc_820FF034;
	// beq cr6,0x820feff8
	if (ctx.cr6.eq) goto loc_820FEFF8;
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// beq cr6,0x820ff144
	if (ctx.cr6.eq) goto loc_820FF144;
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// b 0x820ff038
	goto loc_820FF038;
loc_820FEFF8:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x821882d0
	ctx.lr = 0x820FF004;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ff014
	if (ctx.cr6.eq) goto loc_820FF014;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820ff018
	goto loc_820FF018;
loc_820FF014:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
loc_820FF018:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FF030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820ff03c
	goto loc_820FF03C;
loc_820FF034:
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
loc_820FF038:
	// beq cr6,0x820ff144
	if (ctx.cr6.eq) goto loc_820FF144;
loc_820FF03C:
	// subf. r28,r29,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// bgt 0x820fef78
	if (ctx.cr0.gt) goto loc_820FEF78;
loc_820FF048:
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ff074
	if (ctx.cr6.eq) goto loc_820FF074;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_820FF074:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x820ff3c8
	if (!ctx.cr0.gt) goto loc_820FF3C8;
loc_820FF084:
	// lbzx r4,r30,r23
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r23.u32);
	// add r11,r30,r23
	ctx.r11.u64 = ctx.r30.u64 + ctx.r23.u64;
	// cmplwi cr6,r4,119
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 119, ctx.xer);
	// beq cr6,0x820ff264
	if (ctx.cr6.eq) goto loc_820FF264;
	// cmplwi cr6,r4,120
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 120, ctx.xer);
	// beq cr6,0x820ff264
	if (ctx.cr6.eq) goto loc_820FF264;
	// cmplwi cr6,r4,121
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 121, ctx.xer);
	// beq cr6,0x820ff264
	if (ctx.cr6.eq) goto loc_820FF264;
	// lfsx f0,r22,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r4,123
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 123, ctx.xer);
	// bne cr6,0x820ff19c
	if (!ctx.cr6.eq) goto loc_820FF19C;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt cr6,0x820ff0d4
	if (ctx.cr6.gt) goto loc_820FF0D4;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x820ff0d4
	if (!ctx.cr6.eq) goto loc_820FF0D4;
	// li r6,1
	ctx.r6.s64 = 1;
loc_820FF0D4:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x820ff0e4
	if (ctx.cr6.eq) goto loc_820FF0E4;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// bne cr6,0x820ff3b8
	if (!ctx.cr6.eq) goto loc_820FF3B8;
loc_820FF0E4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820FF0FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r30,r11,3
	ctx.r30.s64 = ctx.r11.s64 + 3;
	// b 0x820ff3b8
	goto loc_820FF3B8;
loc_820FF108:
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x820ff134
	goto loc_820FF134;
loc_820FF118:
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
loc_820FF134:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfsx f11,r22,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r22.u32 + ctx.r31.u32, temp.u32);
loc_820FF144:
	// lfsx f0,r22,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r3,-5068(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + -5068);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r7,r25,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwzx r6,r26,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// lwzx r5,r24,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// bl 0x820fdb10
	ctx.lr = 0x820FF17C;
	sub_820FDB10(ctx, base);
	// lfsx f12,r22,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,60(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfsx f11,r22,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r22.u32 + ctx.r31.u32, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820fef58
	if (!ctx.cr6.eq) goto loc_820FEF58;
	// b 0x820ff3c8
	goto loc_820FF3C8;
loc_820FF19C:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt cr6,0x820ff1bc
	if (ctx.cr6.gt) goto loc_820FF1BC;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x820ff1bc
	if (!ctx.cr6.eq) goto loc_820FF1BC;
	// li r6,1
	ctx.r6.s64 = 1;
loc_820FF1BC:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ff1f8
	if (ctx.cr6.eq) goto loc_820FF1F8;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x820ff1d8
	if (ctx.cr6.eq) goto loc_820FF1D8;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// bne cr6,0x820ff1f8
	if (!ctx.cr6.eq) goto loc_820FF1F8;
loc_820FF1D8:
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// beq cr6,0x820ff1e8
	if (ctx.cr6.eq) goto loc_820FF1E8;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// bne cr6,0x820ff1f8
	if (!ctx.cr6.eq) goto loc_820FF1F8;
loc_820FF1E8:
	// li r3,4
	ctx.r3.s64 = 4;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// b 0x820ff3b8
	goto loc_820FF3B8;
loc_820FF1F8:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x820ff240
	if (ctx.cr6.eq) goto loc_820FF240;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// beq cr6,0x820ff240
	if (ctx.cr6.eq) goto loc_820FF240;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// lfsx f0,r20,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x820ff24c
	goto loc_820FF24C;
loc_820FF240:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820FF24C:
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820FF258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// b 0x820ff3b8
	goto loc_820FF3B8;
loc_820FF264:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lfsx f0,r22,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt cr6,0x820ff288
	if (ctx.cr6.gt) goto loc_820FF288;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x820ff288
	if (!ctx.cr6.eq) goto loc_820FF288;
	// li r26,1
	ctx.r26.s64 = 1;
loc_820FF288:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r4,121
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 121, ctx.xer);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r25,r8,r9
	ctx.r25.u64 = ctx.r8.u64 | ctx.r9.u64;
	// bne cr6,0x820ff2b0
	if (!ctx.cr6.eq) goto loc_820FF2B0;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// li r11,30
	ctx.r11.s64 = 30;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x820ff2ec
	goto loc_820FF2EC;
loc_820FF2B0:
	// cmplwi cr6,r4,120
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 120, ctx.xer);
	// bne cr6,0x820ff2c8
	if (!ctx.cr6.eq) goto loc_820FF2C8;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r11,30
	ctx.r11.s64 = 30;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x820ff2ec
	goto loc_820FF2EC;
loc_820FF2C8:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// li r29,30
	ctx.r29.s64 = 30;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// li r11,37
	ctx.r11.s64 = 37;
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// or r25,r6,r25
	ctx.r25.u64 = ctx.r6.u64 | ctx.r25.u64;
loc_820FF2EC:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820ff3b8
	if (!ctx.cr6.gt) goto loc_820FF3B8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_820FF2FC:
	// and r11,r27,r25
	ctx.r11.u64 = ctx.r27.u64 & ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff3a8
	if (ctx.cr6.eq) goto loc_820FF3A8;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ff33c
	if (ctx.cr6.eq) goto loc_820FF33C;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x820ff324
	if (ctx.cr6.eq) goto loc_820FF324;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// bne cr6,0x820ff33c
	if (!ctx.cr6.eq) goto loc_820FF33C;
loc_820FF324:
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 32, ctx.xer);
	// beq cr6,0x820ff334
	if (ctx.cr6.eq) goto loc_820FF334;
	// cmpwi cr6,r29,33
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 33, ctx.xer);
	// bne cr6,0x820ff33c
	if (!ctx.cr6.eq) goto loc_820FF33C;
loc_820FF334:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x820ff3a8
	goto loc_820FF3A8;
loc_820FF33C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x820ff384
	if (ctx.cr6.eq) goto loc_820FF384;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// beq cr6,0x820ff384
	if (ctx.cr6.eq) goto loc_820FF384;
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// lfsx f0,r20,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x820ff394
	goto loc_820FF394;
loc_820FF384:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FF394:
	// add r5,r30,r23
	ctx.r5.u64 = ctx.r30.u64 + ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820FF3A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_820FF3A8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rotlwi r27,r27,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// bne 0x820ff2fc
	if (!ctx.cr0.eq) goto loc_820FF2FC;
loc_820FF3B8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820ff084
	if (ctx.cr6.lt) goto loc_820FF084;
loc_820FF3C8:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 4, ctx.xer);
	// blt cr6,0x820fedd8
	if (ctx.cr6.lt) goto loc_820FEDD8;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ff3e8
	if (ctx.cr6.eq) goto loc_820FF3E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fe088
	ctx.lr = 0x820FF3E8;
	sub_820FE088(ctx, base);
loc_820FF3E8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

__attribute__((alias("__imp__sub_820FF3FC"))) PPC_WEAK_FUNC(sub_820FF3FC);
PPC_FUNC_IMPL(__imp__sub_820FF3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FF400"))) PPC_WEAK_FUNC(sub_820FF400);
PPC_FUNC_IMPL(__imp__sub_820FF400) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820ff420
	if (ctx.cr6.lt) goto loc_820FF420;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_820FF420:
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x820fea28
	sub_820FEA28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FF428"))) PPC_WEAK_FUNC(sub_820FF428);
PPC_FUNC_IMPL(__imp__sub_820FF428) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820FF42C"))) PPC_WEAK_FUNC(sub_820FF42C);
PPC_FUNC_IMPL(__imp__sub_820FF42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FF430"))) PPC_WEAK_FUNC(sub_820FF430);
PPC_FUNC_IMPL(__imp__sub_820FF430) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,21872
	ctx.r4.u64 = ctx.r4.u64 | 21872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820FF45C;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// lis r4,19779
	ctx.r4.s64 = 1296236544;
	// addi r10,r11,25412
	ctx.r10.s64 = ctx.r11.s64 + 25412;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821882d0
	ctx.lr = 0x820FF47C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ff48c
	if (ctx.cr6.eq) goto loc_820FF48C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820ff490
	goto loc_820FF490;
loc_820FF48C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FF490:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,19780
	ctx.r4.u64 = ctx.r4.u64 | 19780;
	// bl 0x821882d0
	ctx.lr = 0x820FF4A4;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ff4b4
	if (ctx.cr6.eq) goto loc_820FF4B4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x820ff4b8
	goto loc_820FF4B8;
loc_820FF4B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FF4B8:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82183850
	ctx.lr = 0x820FF4C0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x820ff4d8
	if (ctx.cr6.eq) goto loc_820FF4D8;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82183448
	ctx.lr = 0x820FF4D4;
	sub_82183448(ctx, base);
	// b 0x820ff4e0
	goto loc_820FF4E0;
loc_820FF4D8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x820FF4E0;
	sub_821845A0(ctx, base);
loc_820FF4E0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ff4f8
	if (ctx.cr6.eq) goto loc_820FF4F8;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x820fe450
	ctx.lr = 0x820FF4F0;
	sub_820FE450(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x820ff4fc
	goto loc_820FF4FC;
loc_820FF4F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FF4FC:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820FF51C"))) PPC_WEAK_FUNC(sub_820FF51C);
PPC_FUNC_IMPL(__imp__sub_820FF51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FF520"))) PPC_WEAK_FUNC(sub_820FF520);
PPC_FUNC_IMPL(__imp__sub_820FF520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820FF528;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r27,r11,25356
	ctx.r27.s64 = ctx.r11.s64 + 25356;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ff72c
	if (ctx.cr6.eq) goto loc_820FF72C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff72c
	if (ctx.cr6.eq) goto loc_820FF72C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820ff72c
	if (!ctx.cr6.gt) goto loc_820FF72C;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_820FF570:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r9,r27,4
	ctx.r9.s64 = ctx.r27.s64 + 4;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwzx r4,r5,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820FF5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// sthx r3,r26,r10
	PPC_STORE_U16(ctx.r26.u32 + ctx.r10.u32, ctx.r3.u16);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e8b58
	ctx.lr = 0x820FF5B8;
	sub_820E8B58(ctx, base);
	// addi r3,r29,304
	ctx.r3.s64 = ctx.r29.s64 + 304;
	// bl 0x820804f8
	ctx.lr = 0x820FF5C0;
	sub_820804F8(ctx, base);
	// stw r25,368(r29)
	PPC_STORE_U32(ctx.r29.u32 + 368, ctx.r25.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// lbzx r4,r5,r28
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r28.u32);
	// stb r4,372(r7)
	PPC_STORE_U8(ctx.r7.u32 + 372, ctx.r4.u8);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lhzx r11,r26,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r3.u32);
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x820ff710
	if (ctx.cr6.eq) goto loc_820FF710;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FF614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82187920
	ctx.lr = 0x820FF64C;
	sub_82187920(ctx, base);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r9,r29,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r8,r10,352
	ctx.r8.s64 = ctx.r10.s64 + 352;
	// lwz r11,176(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 176);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// ld r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r5,352(r10)
	PPC_STORE_U64(ctx.r10.u32 + 352, ctx.r5.u64);
	// ld r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r3,360(r10)
	PPC_STORE_U64(ctx.r10.u32 + 360, ctx.r3.u64);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// bl 0x82187ef8
	ctx.lr = 0x820FF690;
	sub_82187EF8(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r7,r11,144
	ctx.r7.s64 = ctx.r11.s64 + 144;
	// std r6,144(r11)
	PPC_STORE_U64(ctx.r11.u32 + 144, ctx.r6.u64);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,152(r11)
	PPC_STORE_U64(ctx.r11.u32 + 152, ctx.r5.u64);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// stdx r4,r30,r11
	PPC_STORE_U64(ctx.r30.u32 + ctx.r11.u32, ctx.r4.u64);
	// ld r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// std r10,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r8,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r8.u64);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r6,r30,r9
	ctx.r6.u64 = ctx.r30.u64 + ctx.r9.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r27.u32);
	// lbzx r3,r4,r28
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r28.u32);
	// stb r3,372(r6)
	PPC_STORE_U8(ctx.r6.u32 + 372, ctx.r3.u8);
loc_820FF710:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// addi r30,r30,384
	ctx.r30.s64 = ctx.r30.s64 + 384;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ff570
	if (ctx.cr6.lt) goto loc_820FF570;
loc_820FF72C:
	// lis r4,17229
	ctx.r4.s64 = 1129119744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,20304
	ctx.r4.u64 = ctx.r4.u64 | 20304;
	// bl 0x821882d0
	ctx.lr = 0x820FF73C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ff768
	if (ctx.cr6.eq) goto loc_820FF768;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ff768
	if (ctx.cr6.eq) goto loc_820FF768;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820febe0
	ctx.lr = 0x820FF768;
	sub_820FEBE0(ctx, base);
loc_820FF768:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff888
	if (ctx.cr6.eq) goto loc_820FF888;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff888
	if (ctx.cr6.eq) goto loc_820FF888;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820ff888
	if (!ctx.cr6.gt) goto loc_820FF888;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_820FF79C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r9,r27,12
	ctx.r9.s64 = ctx.r27.s64 + 12;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwzx r4,r5,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820FF7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// sthx r3,r10,r28
	PPC_STORE_U16(ctx.r10.u32 + ctx.r28.u32, ctx.r3.u16);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e8b58
	ctx.lr = 0x820FF7E4;
	sub_820E8B58(ctx, base);
	// addi r3,r29,304
	ctx.r3.s64 = ctx.r29.s64 + 304;
	// bl 0x820804f8
	ctx.lr = 0x820FF7EC;
	sub_820804F8(ctx, base);
	// stw r25,368(r29)
	PPC_STORE_U32(ctx.r29.u32 + 368, ctx.r25.u32);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lhzx r7,r8,r28
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r28.u32);
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x820ff86c
	if (ctx.cr6.lt) goto loc_820FF86C;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FF81C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// bl 0x82187920
	ctx.lr = 0x820FF830;
	sub_82187920(ctx, base);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r8,r9,352
	ctx.r8.s64 = ctx.r9.s64 + 352;
	// lwz r10,176(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 176);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// ld r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r5,352(r9)
	PPC_STORE_U64(ctx.r9.u32 + 352, ctx.r5.u64);
	// ld r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// std r4,360(r9)
	PPC_STORE_U64(ctx.r9.u32 + 360, ctx.r4.u64);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r25,372(r3)
	PPC_STORE_U8(ctx.r3.u32 + 372, ctx.r25.u8);
loc_820FF86C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r30,r30,384
	ctx.r30.s64 = ctx.r30.s64 + 384;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ff79c
	if (ctx.cr6.lt) goto loc_820FF79C;
loc_820FF888:
	// stw r25,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_820FF894"))) PPC_WEAK_FUNC(sub_820FF894);
PPC_FUNC_IMPL(__imp__sub_820FF894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FF898"))) PPC_WEAK_FUNC(sub_820FF898);
PPC_FUNC_IMPL(__imp__sub_820FF898) {
	PPC_FUNC_PROLOGUE();
	// b 0x820fe5d0
	sub_820FE5D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820FF89C"))) PPC_WEAK_FUNC(sub_820FF89C);
PPC_FUNC_IMPL(__imp__sub_820FF89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FF8A0"))) PPC_WEAK_FUNC(sub_820FF8A0);
PPC_FUNC_IMPL(__imp__sub_820FF8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x820FF8A8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,13133
	ctx.r4.s64 = 860684288;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,17985
	ctx.r4.u64 = ctx.r4.u64 | 17985;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82188378
	ctx.lr = 0x820FF8C8;
	sub_82188378(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r9,r10,25444
	ctx.r9.s64 = ctx.r10.s64 + 25444;
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820FF910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,25356
	ctx.r30.s64 = ctx.r10.s64 + 25356;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,170
	ctx.r11.s64 = 11141120;
	// ori r28,r6,65535
	ctx.r28.u64 = ctx.r6.u64 | 65535;
	// ori r29,r11,43690
	ctx.r29.u64 = ctx.r11.u64 | 43690;
	// li r27,-1
	ctx.r27.s64 = -1;
	// lwzx r11,r3,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// ble cr6,0x820ff994
	if (!ctx.cr6.gt) goto loc_820FF994;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x820ff964
	if (!ctx.cr6.gt) goto loc_820FF964;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_820FF964:
	// bl 0x82080d68
	ctx.lr = 0x820FF968;
	sub_82080D68(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x820ff988
	if (ctx.cr6.gt) goto loc_820FF988;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// b 0x820ff98c
	goto loc_820FF98C;
loc_820FF988:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_820FF98C:
	// bl 0x82080d68
	ctx.lr = 0x820FF990;
	sub_82080D68(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_820FF994:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// ble cr6,0x820ff9f8
	if (!ctx.cr6.gt) goto loc_820FF9F8;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x820ff9c8
	if (!ctx.cr6.gt) goto loc_820FF9C8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_820FF9C8:
	// bl 0x82080d68
	ctx.lr = 0x820FF9CC;
	sub_82080D68(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x820ff9ec
	if (ctx.cr6.gt) goto loc_820FF9EC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// b 0x820ff9f0
	goto loc_820FF9F0;
loc_820FF9EC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_820FF9F0:
	// bl 0x82080d68
	ctx.lr = 0x820FF9F4;
	sub_82080D68(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
loc_820FF9F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ff520
	ctx.lr = 0x820FFA00;
	sub_820FF520(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_820FFA0C"))) PPC_WEAK_FUNC(sub_820FFA0C);
PPC_FUNC_IMPL(__imp__sub_820FFA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820FFA10"))) PPC_WEAK_FUNC(sub_820FFA10);
PPC_FUNC_IMPL(__imp__sub_820FFA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x820FFA18;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// li r5,672
	ctx.r5.s64 = 672;
	// addi r4,r11,-24848
	ctx.r4.s64 = ctx.r11.s64 + -24848;
	// bl 0x821847a8
	ctx.lr = 0x820FFA34;
	sub_821847A8(ctx, base);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r11,-8540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// addi r30,r11,1696
	ctx.r30.s64 = ctx.r11.s64 + 1696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820c81b8
	ctx.lr = 0x820FFA54;
	sub_820C81B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x820c81b8
	ctx.lr = 0x820FFA68;
	sub_820C81B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x820c81b8
	ctx.lr = 0x820FFA7C;
	sub_820C81B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x820c81b8
	ctx.lr = 0x820FFA90;
	sub_820C81B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x820c81b8
	ctx.lr = 0x820FFAA4;
	sub_820C81B8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c81b8
	ctx.lr = 0x820FFAB8;
	sub_820C81B8(ctx, base);
	// lhz r9,148(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 148);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// stw r7,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r7.u32);
	// lhz r6,150(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 150);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,9852(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9852);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,132(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lhz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 152);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
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
	// stfs f6,144(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lhz r8,154(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 154);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,148(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lhz r5,156(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 156);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,152(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lhz r10,148(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 148);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r9.u32);
	// lhz r8,150(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 150);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,180(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lhz r5,152(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 152);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,192(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lhz r10,154(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 154);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,196(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// lhz r7,156(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 156);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,200(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lhz r4,160(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 160);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lhz r10,162(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 162);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,228(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lhz r7,164(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 164);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,240(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lhz r4,166(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 166);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,244(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lhz r9,168(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 168);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,248(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lhz r6,172(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 172);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r5.u32);
	// lhz r4,174(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 174);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,276(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// lhz r9,176(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 176);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,288(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// lhz r6,178(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 178);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,292(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// lhz r11,180(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 180);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,296(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lhz r8,184(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 184);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r7.u32);
	// lhz r6,186(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 186);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,324(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lhz r11,188(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 188);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,336(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// lhz r8,190(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 190);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,340(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// lhz r5,192(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 192);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,344(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// lhz r10,148(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 148);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r9.u32);
	// lhz r8,150(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 150);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,564(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// lhz r5,152(r26)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r26.u32 + 152);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,576(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// lhz r10,154(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 154);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,580(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// lhz r7,156(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 156);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,584(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// lhz r4,160(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 160);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// lhz r10,162(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 162);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,612(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// lhz r7,164(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 164);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,624(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// lhz r4,166(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 166);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,628(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// lhz r9,168(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 168);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,632(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// lhz r6,172(r26)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r26.u32 + 172);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r5.u32);
	// lhz r4,174(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 174);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,660(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 660, temp.u32);
	// lhz r9,176(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 176);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,672(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// lhz r6,178(r26)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r26.u32 + 178);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,676(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// lhz r11,180(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 180);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,680(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// lhz r8,148(r24)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r24.u32 + 148);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r7.u32);
	// lhz r6,150(r24)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r24.u32 + 150);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,708(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 708, temp.u32);
	// lhz r11,152(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 152);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,720(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 720, temp.u32);
	// lhz r8,154(r24)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r24.u32 + 154);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,724(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 724, temp.u32);
	// lhz r5,156(r24)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r24.u32 + 156);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,728(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
	// lhz r10,148(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 148);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r9.u32);
	// lhz r8,150(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 150);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,372(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lhz r5,152(r25)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r25.u32 + 152);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,384(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// lhz r10,154(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 154);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,388(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// lhz r7,156(r25)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r25.u32 + 156);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,392(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// lhz r4,160(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 160);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// lhz r10,162(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 162);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,420(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// lhz r7,164(r25)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r25.u32 + 164);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,432(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// lhz r4,166(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 166);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,436(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// lhz r9,168(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 168);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,440(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// lhz r6,172(r25)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r25.u32 + 172);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stw r5,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r5.u32);
	// lhz r4,174(r25)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + 174);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,468(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// lhz r9,176(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 176);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,480(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// lhz r6,178(r25)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r25.u32 + 178);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,484(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// lhz r11,180(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 180);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,488(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// lhz r8,148(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 148);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r7.u32);
	// lhz r6,150(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 150);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,516(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// lhz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 152);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,528(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// lhz r8,154(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 154);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,532(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// lhz r5,156(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,536(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_821001E4"))) PPC_WEAK_FUNC(sub_821001E4);
PPC_FUNC_IMPL(__imp__sub_821001E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821001E8"))) PPC_WEAK_FUNC(sub_821001E8);
PPC_FUNC_IMPL(__imp__sub_821001E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,24(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82100230:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82100230
	if (ctx.cr6.lt) goto loc_82100230;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82100284"))) PPC_WEAK_FUNC(sub_82100284);
PPC_FUNC_IMPL(__imp__sub_82100284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82100288"))) PPC_WEAK_FUNC(sub_82100288);
PPC_FUNC_IMPL(__imp__sub_82100288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82100290;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82188378
	ctx.lr = 0x821002B0;
	sub_82188378(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r11,25728
	ctx.r10.s64 = ctx.r11.s64 + 25728;
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82190520
	ctx.lr = 0x821002D4;
	sub_82190520(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// lfs f0,2148(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lwz r8,92(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821002f8
	if (!ctx.cr6.eq) goto loc_821002F8;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_821002F8:
	// stw r31,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82190a98
	ctx.lr = 0x82100308;
	sub_82190A98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ffa10
	ctx.lr = 0x82100310;
	sub_820FFA10(ctx, base);
	// cmpwi cr6,r28,21
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 21, ctx.xer);
	// bne cr6,0x82100384
	if (!ctx.cr6.eq) goto loc_82100384;
	// li r10,14
	ctx.r10.s64 = 14;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8210032C:
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r9.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8210032c
	if (ctx.cr6.lt) goto loc_8210032C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// ori r6,r7,16
	ctx.r6.u64 = ctx.r7.u64 | 16;
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// ori r3,r4,16
	ctx.r3.u64 = ctx.r4.u64 | 16;
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
loc_82100384:
	// lis r4,21337
	ctx.r4.s64 = 1398341632;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,20035
	ctx.r4.u64 = ctx.r4.u64 | 20035;
	// bl 0x821882d0
	ctx.lr = 0x82100394;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821003b4
	if (ctx.cr6.eq) goto loc_821003B4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_821003B4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_821003CC"))) PPC_WEAK_FUNC(sub_821003CC);
PPC_FUNC_IMPL(__imp__sub_821003CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821003D0"))) PPC_WEAK_FUNC(sub_821003D0);
PPC_FUNC_IMPL(__imp__sub_821003D0) {
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
	// addi r9,r11,25728
	ctx.r9.s64 = ctx.r11.s64 + 25728;
	// lis r4,21059
	ctx.r4.s64 = 1380122624;
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
	ctx.lr = 0x82100408;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82100418
	if (ctx.cr6.eq) goto loc_82100418;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8210041c
	goto loc_8210041C;
loc_82100418:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8210041C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f09e8
	ctx.lr = 0x82100424;
	sub_820F09E8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82190648
	ctx.lr = 0x8210042C;
	sub_82190648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821883b8
	ctx.lr = 0x82100434;
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

__attribute__((alias("__imp__sub_82100448"))) PPC_WEAK_FUNC(sub_82100448);
PPC_FUNC_IMPL(__imp__sub_82100448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// blt cr6,0x82100548
	if (ctx.cr6.lt) goto loc_82100548;
	// addi r5,r4,-3
	ctx.r5.s64 = ctx.r4.s64 + -3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82100478:
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stfs f0,24(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f13,28(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r11,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f13,28(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r11,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwzx r9,r6,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f13,28(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stw r11,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r11.u32);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f13,28(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f0,32(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwzx r9,r8,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// stw r11,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// blt cr6,0x82100478
	if (ctx.cr6.lt) goto loc_82100478;
loc_82100548:
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82100590
	if (!ctx.cr6.lt) goto loc_82100590;
	// subf r10,r7,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r7.s64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8210055C:
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f13,28(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r11,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, ctx.r11.u32);
	// bdnz 0x8210055c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210055C;
loc_82100590:
	// cmpwi cr6,r4,21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 21, ctx.xer);
	// bne cr6,0x82100608
	if (!ctx.cr6.eq) goto loc_82100608;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821005d0
	if (!ctx.cr6.gt) goto loc_821005D0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_821005B0:
	// lwz r7,56(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// lwz r5,48(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x821005b0
	if (ctx.cr6.lt) goto loc_821005B0;
loc_821005D0:
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// lwz r7,56(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,36(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// ori r5,r6,16
	ctx.r5.u64 = ctx.r6.u64 | 16;
	// stw r5,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r5.u32);
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// stw r8,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r8.u32);
loc_82100608:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82100610"))) PPC_WEAK_FUNC(sub_82100610);
PPC_FUNC_IMPL(__imp__sub_82100610) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-9772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100668
	if (ctx.cr6.eq) goto loc_82100668;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82100668
	if (ctx.cr6.eq) goto loc_82100668;
	// lis r4,21059
	ctx.r4.s64 = 1380122624;
	// ori r4,r4,21580
	ctx.r4.u64 = ctx.r4.u64 | 21580;
	// bl 0x821882d0
	ctx.lr = 0x8210064C;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210065c
	if (ctx.cr6.eq) goto loc_8210065C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82100660
	goto loc_82100660;
loc_8210065C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82100660:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b45f8
	ctx.lr = 0x82100668;
	sub_820B45F8(ctx, base);
loc_82100668:
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

__attribute__((alias("__imp__sub_8210067C"))) PPC_WEAK_FUNC(sub_8210067C);
PPC_FUNC_IMPL(__imp__sub_8210067C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82100680"))) PPC_WEAK_FUNC(sub_82100680);
PPC_FUNC_IMPL(__imp__sub_82100680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82100688;
	sub_82248788(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// stw r29,548(r28)
	PPC_STORE_U32(ctx.r28.u32 + 548, ctx.r29.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// stw r29,552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 552, ctx.r29.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f30.f64 = double(temp.f32);
loc_821006C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r9,r11,53
	ctx.r9.s64 = ctx.r11.s64 + 53;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwzx r4,r8,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// bl 0x82187400
	ctx.lr = 0x821006E4;
	sub_82187400(ctx, base);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r6,r29,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// stfs f0,32(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwzx r4,r29,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r3,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r3.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8210072c
	if (ctx.cr6.eq) goto loc_8210072C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82100730
	goto loc_82100730;
loc_8210072C:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82100730:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r29,56
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 56, ctx.xer);
	// stfs f0,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// blt cr6,0x821006c0
	if (ctx.cr6.lt) goto loc_821006C0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,212(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lwz r8,212(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f13,56(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,52(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// stfs f13,24(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f12,420(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,52(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f7,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fadds f4,f9,f8
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fcmpu cr6,f4,f5
	ctx.cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// ble cr6,0x821007c4
	if (!ctx.cr6.gt) goto loc_821007C4;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_821007C4:
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821008f4
	if (!ctx.cr6.eq) goto loc_821008F4;
	// lwz r3,344(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 344);
	// bl 0x8208dfc8
	ctx.lr = 0x821007D8;
	sub_8208DFC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82100810
	if (!ctx.cr6.eq) goto loc_82100810;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stfs f31,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stfs f31,28(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// stfs f31,32(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stfs f31,28(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
loc_82100810:
	// lwz r11,1360(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1360);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82100864
	if (!ctx.cr6.eq) goto loc_82100864;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stfs f31,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stfs f31,28(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// stfs f31,32(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,44(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// stfs f31,28(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stfs f31,28(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
loc_82100864:
	// lwz r11,1364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1364);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821008b8
	if (!ctx.cr6.eq) goto loc_821008B8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stfs f31,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stfs f31,28(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// stfs f31,32(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,28(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// stfs f31,28(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stfs f31,28(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
loc_821008B8:
	// lwz r11,1356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1356);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821008f4
	if (!ctx.cr6.eq) goto loc_821008F4;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,14
	ctx.r10.s64 = 14;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f31,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stfs f31,28(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821008F4:
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8210090C"))) PPC_WEAK_FUNC(sub_8210090C);
PPC_FUNC_IMPL(__imp__sub_8210090C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82100910"))) PPC_WEAK_FUNC(sub_82100910);
PPC_FUNC_IMPL(__imp__sub_82100910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82100918;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82100aec
	if (ctx.cr6.eq) goto loc_82100AEC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// addi r11,r11,416
	ctx.r11.s64 = ctx.r11.s64 + 416;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f1,496(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f13,500(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f11,504(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 504, temp.u32);
	// bl 0x821001e8
	ctx.lr = 0x821009A4;
	sub_821001E8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82100aec
	if (!ctx.cr6.eq) goto loc_82100AEC;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 768);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82100aec
	if (!ctx.cr6.eq) goto loc_82100AEC;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82100aec
	if (ctx.cr6.eq) goto loc_82100AEC;
	// bl 0x820f15c0
	ctx.lr = 0x821009CC;
	sub_820F15C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82100aec
	if (ctx.cr6.eq) goto loc_82100AEC;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lis r10,21061
	ctx.r10.s64 = 1380253696;
	// ori r28,r10,17996
	ctx.r28.u64 = ctx.r10.u64 | 17996;
	// lwz r29,36(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82100a64
	if (ctx.cr6.eq) goto loc_82100A64;
loc_821009EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821882d0
	ctx.lr = 0x821009F8;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82100a58
	if (ctx.cr6.eq) goto loc_82100A58;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100a58
	if (ctx.cr6.eq) goto loc_82100A58;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,416(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 416, temp.u32);
	// lfs f10,424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,424(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82100A58:
	// lwz r29,36(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821009ec
	if (!ctx.cr6.eq) goto loc_821009EC;
loc_82100A64:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r30,40(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82100aec
	if (ctx.cr6.eq) goto loc_82100AEC;
loc_82100A74:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821882d0
	ctx.lr = 0x82100A80;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82100ae0
	if (ctx.cr6.eq) goto loc_82100AE0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100ae0
	if (ctx.cr6.eq) goto loc_82100AE0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,416(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 416, temp.u32);
	// lfs f11,424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,424(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82100AE0:
	// lwz r30,40(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82100a74
	if (!ctx.cr6.eq) goto loc_82100A74;
loc_82100AEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82100AF4"))) PPC_WEAK_FUNC(sub_82100AF4);
PPC_FUNC_IMPL(__imp__sub_82100AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82100AF8"))) PPC_WEAK_FUNC(sub_82100AF8);
PPC_FUNC_IMPL(__imp__sub_82100AF8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82100ca8
	if (ctx.cr6.eq) goto loc_82100CA8;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// beq cr6,0x82100ca8
	if (ctx.cr6.eq) goto loc_82100CA8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,796(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 796);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82100bf8
	if (!ctx.cr6.eq) goto loc_82100BF8;
	// lwz r10,616(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82100bf8
	if (!ctx.cr6.eq) goto loc_82100BF8;
	// lwz r10,676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82100bf8
	if (!ctx.cr6.eq) goto loc_82100BF8;
	// lwz r10,640(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82100b9c
	if (ctx.cr6.eq) goto loc_82100B9C;
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82100b9c
	if (ctx.cr6.eq) goto loc_82100B9C;
	// lwz r9,756(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 756);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82100bf8
	if (!ctx.cr6.eq) goto loc_82100BF8;
	// lwz r10,752(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 752);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82100bf8
	if (!ctx.cr6.eq) goto loc_82100BF8;
loc_82100B9C:
	// lwz r10,684(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82100bf8
	if (ctx.cr6.eq) goto loc_82100BF8;
	// lwz r10,624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82100c10
	if (ctx.cr6.eq) goto loc_82100C10;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,568(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 568);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f0,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x82100c0c
	if (!ctx.cr6.eq) goto loc_82100C0C;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82100c10
	goto loc_82100C10;
loc_82100BF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_82100C0C:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82100C10:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82100910
	ctx.lr = 0x82100C20;
	sub_82100910(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f0,496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82100c34
	if (!ctx.cr6.lt) goto loc_82100C34;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82100C34:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,9852(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82100c5c
	if (ctx.cr6.gt) goto loc_82100C5C;
	// lfs f0,504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82100c54
	if (!ctx.cr6.lt) goto loc_82100C54;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82100C54:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82100c64
	if (!ctx.cr6.gt) goto loc_82100C64;
loc_82100C5C:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 548, ctx.r10.u32);
loc_82100C64:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f0,496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82100c78
	if (!ctx.cr6.lt) goto loc_82100C78;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82100C78:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8616(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82100ca0
	if (ctx.cr6.gt) goto loc_82100CA0;
	// lfs f0,504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82100c98
	if (!ctx.cr6.lt) goto loc_82100C98;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82100C98:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82100ca8
	if (!ctx.cr6.gt) goto loc_82100CA8;
loc_82100CA0:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
loc_82100CA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82100CC4"))) PPC_WEAK_FUNC(sub_82100CC4);
PPC_FUNC_IMPL(__imp__sub_82100CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82100CC8"))) PPC_WEAK_FUNC(sub_82100CC8);
PPC_FUNC_IMPL(__imp__sub_82100CC8) {
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
	// bl 0x821003d0
	ctx.lr = 0x82100CE8;
	sub_821003D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100d04
	if (ctx.cr6.eq) goto loc_82100D04;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82100D00;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82100D04:
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

