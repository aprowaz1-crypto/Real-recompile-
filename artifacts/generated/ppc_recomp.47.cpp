#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8221BCE8"))) PPC_WEAK_FUNC(sub_8221BCE8);
PPC_FUNC_IMPL(__imp__sub_8221BCE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BCF4"))) PPC_WEAK_FUNC(sub_8221BCF4);
PPC_FUNC_IMPL(__imp__sub_8221BCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BCF8"))) PPC_WEAK_FUNC(sub_8221BCF8);
PPC_FUNC_IMPL(__imp__sub_8221BCF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BD04"))) PPC_WEAK_FUNC(sub_8221BD04);
PPC_FUNC_IMPL(__imp__sub_8221BD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BD08"))) PPC_WEAK_FUNC(sub_8221BD08);
PPC_FUNC_IMPL(__imp__sub_8221BD08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BD14"))) PPC_WEAK_FUNC(sub_8221BD14);
PPC_FUNC_IMPL(__imp__sub_8221BD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BD18"))) PPC_WEAK_FUNC(sub_8221BD18);
PPC_FUNC_IMPL(__imp__sub_8221BD18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BD2C"))) PPC_WEAK_FUNC(sub_8221BD2C);
PPC_FUNC_IMPL(__imp__sub_8221BD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BD30"))) PPC_WEAK_FUNC(sub_8221BD30);
PPC_FUNC_IMPL(__imp__sub_8221BD30) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x8221bd4c
	if (ctx.cr6.lt) goto loc_8221BD4C;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8221BD4C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8221bd6c
	if (!ctx.cr6.lt) goto loc_8221BD6C;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_8221BD6C:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BD84"))) PPC_WEAK_FUNC(sub_8221BD84);
PPC_FUNC_IMPL(__imp__sub_8221BD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BD88"))) PPC_WEAK_FUNC(sub_8221BD88);
PPC_FUNC_IMPL(__imp__sub_8221BD88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BD94"))) PPC_WEAK_FUNC(sub_8221BD94);
PPC_FUNC_IMPL(__imp__sub_8221BD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BD98"))) PPC_WEAK_FUNC(sub_8221BD98);
PPC_FUNC_IMPL(__imp__sub_8221BD98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BDA4"))) PPC_WEAK_FUNC(sub_8221BDA4);
PPC_FUNC_IMPL(__imp__sub_8221BDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BDA8"))) PPC_WEAK_FUNC(sub_8221BDA8);
PPC_FUNC_IMPL(__imp__sub_8221BDA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BDB8"))) PPC_WEAK_FUNC(sub_8221BDB8);
PPC_FUNC_IMPL(__imp__sub_8221BDB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BDD0"))) PPC_WEAK_FUNC(sub_8221BDD0);
PPC_FUNC_IMPL(__imp__sub_8221BDD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8221cde8
	sub_8221CDE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221BDD8"))) PPC_WEAK_FUNC(sub_8221BDD8);
PPC_FUNC_IMPL(__imp__sub_8221BDD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8221cea0
	sub_8221CEA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221BDE0"))) PPC_WEAK_FUNC(sub_8221BDE0);
PPC_FUNC_IMPL(__imp__sub_8221BDE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8221dc18
	sub_8221DC18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221BDE8"))) PPC_WEAK_FUNC(sub_8221BDE8);
PPC_FUNC_IMPL(__imp__sub_8221BDE8) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82183850
	ctx.lr = 0x8221BE0C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8221be24
	if (ctx.cr6.eq) goto loc_8221BE24;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x8221BE20;
	sub_82183448(ctx, base);
	// b 0x8221be2c
	goto loc_8221BE2C;
loc_8221BE24:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8221BE2C;
	sub_821845A0(ctx, base);
loc_8221BE2C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221be40
	if (ctx.cr6.eq) goto loc_8221BE40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8221cd10
	ctx.lr = 0x8221BE3C;
	sub_8221CD10(ctx, base);
	// b 0x8221be44
	goto loc_8221BE44;
loc_8221BE40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221BE44:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x8221BE4C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8221be64
	if (ctx.cr6.eq) goto loc_8221BE64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x8221BE60;
	sub_82183448(ctx, base);
	// b 0x8221be6c
	goto loc_8221BE6C;
loc_8221BE64:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x8221BE6C;
	sub_821845A0(ctx, base);
loc_8221BE6C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221be84
	if (ctx.cr6.eq) goto loc_8221BE84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8221cf58
	ctx.lr = 0x8221BE7C;
	sub_8221CF58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221be88
	goto loc_8221BE88;
loc_8221BE84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221BE88:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8221BEA8"))) PPC_WEAK_FUNC(sub_8221BEA8);
PPC_FUNC_IMPL(__imp__sub_8221BEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8221BEB0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221bed8
	if (ctx.cr6.eq) goto loc_8221BED8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8221BECC;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8221BED8;
	sub_82183E40(ctx, base);
loc_8221BED8:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221bf00
	if (ctx.cr6.eq) goto loc_8221BF00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8221BEF4;
	sub_8209EDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8221BF00;
	sub_82183E40(ctx, base);
loc_8221BF00:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8221BF0C"))) PPC_WEAK_FUNC(sub_8221BF0C);
PPC_FUNC_IMPL(__imp__sub_8221BF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BF10"))) PPC_WEAK_FUNC(sub_8221BF10);
PPC_FUNC_IMPL(__imp__sub_8221BF10) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8221bf40
	if (!ctx.cr6.eq) goto loc_8221BF40;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8221BF40:
	// addi r10,r10,1029
	ctx.r10.s64 = ctx.r10.s64 + 1029;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BF50"))) PPC_WEAK_FUNC(sub_8221BF50);
PPC_FUNC_IMPL(__imp__sub_8221BF50) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// lhzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lhz r5,22(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 22);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8221bf90
	if (ctx.cr6.lt) goto loc_8221BF90;
loc_8221BF88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8221BF90:
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x8221bf88
	if (ctx.cr6.eq) goto loc_8221BF88;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,1029
	ctx.r10.s64 = ctx.r10.s64 + 1029;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BFAC"))) PPC_WEAK_FUNC(sub_8221BFAC);
PPC_FUNC_IMPL(__imp__sub_8221BFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BFB0"))) PPC_WEAK_FUNC(sub_8221BFB0);
PPC_FUNC_IMPL(__imp__sub_8221BFB0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8221bfe8
	if (!ctx.cr6.eq) goto loc_8221BFE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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
loc_8221BFE8:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x8221BFF4;
	sub_8218AA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x8221C000;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8221c018
	if (ctx.cr6.eq) goto loc_8221C018;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x8221C014;
	sub_8218AB00(ctx, base);
	// b 0x8221c01c
	goto loc_8221C01C;
loc_8221C018:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221C01C:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x8221C028;
	sub_8218A7F0(ctx, base);
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

__attribute__((alias("__imp__sub_8221C03C"))) PPC_WEAK_FUNC(sub_8221C03C);
PPC_FUNC_IMPL(__imp__sub_8221C03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C040"))) PPC_WEAK_FUNC(sub_8221C040);
PPC_FUNC_IMPL(__imp__sub_8221C040) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8221c078
	if (!ctx.cr6.eq) goto loc_8221C078;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
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
loc_8221C078:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x8221C084;
	sub_8218AA18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x8221C090;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8221c0a8
	if (ctx.cr6.eq) goto loc_8221C0A8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x8221C0A4;
	sub_8218AB00(ctx, base);
	// b 0x8221c0ac
	goto loc_8221C0AC;
loc_8221C0A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221C0AC:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x8221C0B8;
	sub_8218A7F0(ctx, base);
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

__attribute__((alias("__imp__sub_8221C0CC"))) PPC_WEAK_FUNC(sub_8221C0CC);
PPC_FUNC_IMPL(__imp__sub_8221C0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C0D0"))) PPC_WEAK_FUNC(sub_8221C0D0);
PPC_FUNC_IMPL(__imp__sub_8221C0D0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8221c108
	if (!ctx.cr6.eq) goto loc_8221C108;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
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
loc_8221C108:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x8221C114;
	sub_8218AA18(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x8221C120;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8221c138
	if (ctx.cr6.eq) goto loc_8221C138;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x8221C134;
	sub_8218AB00(ctx, base);
	// b 0x8221c13c
	goto loc_8221C13C;
loc_8221C138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221C13C:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x8221C148;
	sub_8218A7F0(ctx, base);
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

__attribute__((alias("__imp__sub_8221C15C"))) PPC_WEAK_FUNC(sub_8221C15C);
PPC_FUNC_IMPL(__imp__sub_8221C15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C160"))) PPC_WEAK_FUNC(sub_8221C160);
PPC_FUNC_IMPL(__imp__sub_8221C160) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8221C168;
	sub_8224878C(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// sth r11,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r10,17(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// stb r10,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r10.u8);
	// stb r8,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r8.u8);
	// lhz r7,-46(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -46);
	// sth r7,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r7.u16);
loc_8221C190:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8221C19C:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r4,r8,7
	ctx.r4.s64 = ctx.r8.s64 + 7;
	// addi r5,r7,6
	ctx.r5.s64 = ctx.r7.s64 + 6;
	// lbz r30,1(r6)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r29,0(r6)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stb r30,-48(r1)
	PPC_STORE_U8(ctx.r1.u32 + -48, ctx.r30.u8);
	// addi r5,r11,22
	ctx.r5.s64 = ctx.r11.s64 + 22;
	// stb r29,-47(r1)
	PPC_STORE_U8(ctx.r1.u32 + -47, ctx.r29.u8);
	// addi r5,r11,26
	ctx.r5.s64 = ctx.r11.s64 + 26;
	// lhz r30,-48(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + -48);
	// addi r5,r11,30
	ctx.r5.s64 = ctx.r11.s64 + 30;
	// sth r30,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r30.u16);
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r30,22(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// addi r5,r11,34
	ctx.r5.s64 = ctx.r11.s64 + 34;
	// lbz r4,23(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stb r4,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r4.u8);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// stb r30,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r30.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lhz r5,-46(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -46);
	// sth r5,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r5.u16);
	// lbz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r4,1(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// stb r4,-48(r1)
	PPC_STORE_U8(ctx.r1.u32 + -48, ctx.r4.u8);
	// stb r5,-47(r1)
	PPC_STORE_U8(ctx.r1.u32 + -47, ctx.r5.u8);
	// lhz r4,-48(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -48);
	// sth r4,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r4.u16);
	// lbz r5,26(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26);
	// lbz r8,27(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27);
	// stb r8,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r8.u8);
	// stb r5,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r5.u8);
	// lhz r4,-46(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -46);
	// sth r4,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r4.u16);
	// lbz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lbz r8,1(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// stb r8,-48(r1)
	PPC_STORE_U8(ctx.r1.u32 + -48, ctx.r8.u8);
	// stb r5,-47(r1)
	PPC_STORE_U8(ctx.r1.u32 + -47, ctx.r5.u8);
	// lhz r4,-48(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -48);
	// sth r4,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r4.u16);
	// lbz r7,30(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// lbz r8,31(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// stb r8,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r8.u8);
	// stb r7,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r7.u8);
	// lhz r5,-46(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -46);
	// sth r5,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r5.u16);
	// lbz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r4,1(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// stb r4,-48(r1)
	PPC_STORE_U8(ctx.r1.u32 + -48, ctx.r4.u8);
	// stb r8,-47(r1)
	PPC_STORE_U8(ctx.r1.u32 + -47, ctx.r8.u8);
	// lhz r7,-48(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -48);
	// sth r7,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r7.u16);
	// lbz r5,34(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 34);
	// lbz r6,35(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 35);
	// stb r6,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r6.u8);
	// stb r5,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r5.u8);
	// lhz r4,-46(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -46);
	// sth r4,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r4.u16);
	// bdnz 0x8221c19c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221C19C;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpwi cr6,r9,1024
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1024, ctx.xer);
	// blt cr6,0x8221c190
	if (ctx.cr6.lt) goto loc_8221C190;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c324
	if (ctx.cr6.eq) goto loc_8221C324;
	// addi r11,r3,4118
	ctx.r11.s64 = ctx.r3.s64 + 4118;
loc_8221C2E0:
	// lbz r9,-1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// stb r9,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r9.u8);
	// stb r8,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r8.u8);
	// lhz r7,-46(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -46);
	// sth r7,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r7.u16);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r5,-48(r1)
	PPC_STORE_U8(ctx.r1.u32 + -48, ctx.r5.u8);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r6,-47(r1)
	PPC_STORE_U8(ctx.r1.u32 + -47, ctx.r6.u8);
	// lhz r4,-48(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -48);
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8221c2e0
	if (ctx.cr6.lt) goto loc_8221C2E0;
loc_8221C324:
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8221C328"))) PPC_WEAK_FUNC(sub_8221C328);
PPC_FUNC_IMPL(__imp__sub_8221C328) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8221c360
	if (!ctx.cr6.eq) goto loc_8221C360;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
loc_8221C360:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x8221C36C;
	sub_8218AA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x8221C378;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8221c390
	if (ctx.cr6.eq) goto loc_8221C390;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab00
	ctx.lr = 0x8221C38C;
	sub_8218AB00(ctx, base);
	// b 0x8221c394
	goto loc_8221C394;
loc_8221C390:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221C394:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c3a8
	if (!ctx.cr6.eq) goto loc_8221C3A8;
	// bl 0x8221c160
	ctx.lr = 0x8221C3A8;
	sub_8221C160(ctx, base);
loc_8221C3A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x8221C3B0;
	sub_8218A7F0(ctx, base);
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

__attribute__((alias("__imp__sub_8221C3C4"))) PPC_WEAK_FUNC(sub_8221C3C4);
PPC_FUNC_IMPL(__imp__sub_8221C3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C3C8"))) PPC_WEAK_FUNC(sub_8221C3C8);
PPC_FUNC_IMPL(__imp__sub_8221C3C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C3DC"))) PPC_WEAK_FUNC(sub_8221C3DC);
PPC_FUNC_IMPL(__imp__sub_8221C3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C3E0"))) PPC_WEAK_FUNC(sub_8221C3E0);
PPC_FUNC_IMPL(__imp__sub_8221C3E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r11,r3,6
	ctx.r11.s64 = ctx.r3.s64 + 6;
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,10
	ctx.r11.s64 = ctx.r3.s64 + 10;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stb r10,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r10.u8);
	// addi r11,r3,14
	ctx.r11.s64 = ctx.r3.s64 + 14;
	// stb r9,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r9.u8);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stb r8,-10(r1)
	PPC_STORE_U8(ctx.r1.u32 + -10, ctx.r8.u8);
	// addi r11,r3,18
	ctx.r11.s64 = ctx.r3.s64 + 18;
	// stb r7,-9(r1)
	PPC_STORE_U8(ctx.r1.u32 + -9, ctx.r7.u8);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// addi r11,r3,22
	ctx.r11.s64 = ctx.r3.s64 + 22;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lbz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// addi r11,r3,26
	ctx.r11.s64 = ctx.r3.s64 + 26;
	// lbz r5,5(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r5,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r5.u8);
	// stb r4,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r4.u8);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// lbz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r10,7(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// stb r10,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r10.u8);
	// stb r9,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r9.u8);
	// lhz r8,-14(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// lbz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r7,9(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// stb r7,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r7.u8);
	// stb r6,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r6.u8);
	// lhz r5,-12(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -12);
	// sth r5,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r5.u16);
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r4,11(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// stb r4,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r4.u8);
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// lbz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lbz r9,13(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lhz r7,-14(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r7,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r7.u16);
	// lbz r5,14(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// lbz r6,15(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// stb r6,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r6.u8);
	// stb r5,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r5.u8);
	// lhz r4,-12(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -12);
	// sth r4,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r4.u16);
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r11,17(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r9,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r9.u16);
	// lbz r7,18(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// lbz r8,19(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// stb r8,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lhz r6,-14(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r6,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r6.u16);
	// lbz r4,21(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// lbz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// stb r5,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r5.u8);
	// stb r4,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r4.u8);
	// lhz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -12);
	// sth r11,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r11.u16);
	// lbz r9,23(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// lbz r10,22(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r8,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r8.u16);
	// lbz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// lbz r6,25(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// lhz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r5,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r5.u16);
	// lbz r11,26(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 26);
	// lbz r4,27(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// stb r4,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r4.u8);
	// stb r11,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r11.u8);
	// lhz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -12);
	// sth r10,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C55C"))) PPC_WEAK_FUNC(sub_8221C55C);
PPC_FUNC_IMPL(__imp__sub_8221C55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C560"))) PPC_WEAK_FUNC(sub_8221C560);
PPC_FUNC_IMPL(__imp__sub_8221C560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8221C568;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8221c588
	if (!ctx.cr6.eq) goto loc_8221C588;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8221C588:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218aa18
	ctx.lr = 0x8221C594;
	sub_8218AA18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a810
	ctx.lr = 0x8221C5A0;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8221c5bc
	if (ctx.cr6.eq) goto loc_8221C5BC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ab00
	ctx.lr = 0x8221C5B4;
	sub_8218AB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8221c5c0
	goto loc_8221C5C0;
loc_8221C5BC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221C5C0:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a810
	ctx.lr = 0x8221C5CC;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8221c5e0
	if (ctx.cr6.eq) goto loc_8221C5E0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218abc0
	ctx.lr = 0x8221C5E0;
	sub_8218ABC0(ctx, base);
loc_8221C5E0:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c654
	if (!ctx.cr6.eq) goto loc_8221C654;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// sth r10,18(r30)
	PPC_STORE_U16(ctx.r30.u32 + 18, ctx.r10.u16);
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r7,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r7.u16);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8221c654
	if (ctx.cr6.eq) goto loc_8221C654;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221C62C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x8221c3e0
	ctx.lr = 0x8221C63C;
	sub_8221C3E0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8221c62c
	if (ctx.cr6.lt) goto loc_8221C62C;
loc_8221C654:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a7f0
	ctx.lr = 0x8221C65C;
	sub_8218A7F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8221C664"))) PPC_WEAK_FUNC(sub_8221C664);
PPC_FUNC_IMPL(__imp__sub_8221C664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C668"))) PPC_WEAK_FUNC(sub_8221C668);
PPC_FUNC_IMPL(__imp__sub_8221C668) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C67C"))) PPC_WEAK_FUNC(sub_8221C67C);
PPC_FUNC_IMPL(__imp__sub_8221C67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C680"))) PPC_WEAK_FUNC(sub_8221C680);
PPC_FUNC_IMPL(__imp__sub_8221C680) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8221dd70
	sub_8221DD70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C69C"))) PPC_WEAK_FUNC(sub_8221C69C);
PPC_FUNC_IMPL(__imp__sub_8221C69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C6A0"))) PPC_WEAK_FUNC(sub_8221C6A0);
PPC_FUNC_IMPL(__imp__sub_8221C6A0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x820ef4b8
	sub_820EF4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C6AC"))) PPC_WEAK_FUNC(sub_8221C6AC);
PPC_FUNC_IMPL(__imp__sub_8221C6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C6B0"))) PPC_WEAK_FUNC(sub_8221C6B0);
PPC_FUNC_IMPL(__imp__sub_8221C6B0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x8221dc88
	sub_8221DC88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C6BC"))) PPC_WEAK_FUNC(sub_8221C6BC);
PPC_FUNC_IMPL(__imp__sub_8221C6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C6C0"))) PPC_WEAK_FUNC(sub_8221C6C0);
PPC_FUNC_IMPL(__imp__sub_8221C6C0) {
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
	// bl 0x8221ddf0
	ctx.lr = 0x8221C6DC;
	sub_8221DDF0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8221c714
	if (ctx.cr6.eq) goto loc_8221C714;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// rotlwi r11,r9,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
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
loc_8221C714:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8221dd70
	ctx.lr = 0x8221C72C;
	sub_8221DD70(ctx, base);
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

__attribute__((alias("__imp__sub_8221C740"))) PPC_WEAK_FUNC(sub_8221C740);
PPC_FUNC_IMPL(__imp__sub_8221C740) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// bl 0x82183850
	ctx.lr = 0x8221C784;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8221c79c
	if (ctx.cr6.eq) goto loc_8221C79C;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82183448
	ctx.lr = 0x8221C798;
	sub_82183448(ctx, base);
	// b 0x8221c7a4
	goto loc_8221C7A4;
loc_8221C79C:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821845a0
	ctx.lr = 0x8221C7A4;
	sub_821845A0(ctx, base);
loc_8221C7A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221c7bc
	if (ctx.cr6.eq) goto loc_8221C7BC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8221df50
	ctx.lr = 0x8221C7B4;
	sub_8221DF50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8221c7c0
	goto loc_8221C7C0;
loc_8221C7BC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8221C7C0:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8221C7E0"))) PPC_WEAK_FUNC(sub_8221C7E0);
PPC_FUNC_IMPL(__imp__sub_8221C7E0) {
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
	// bl 0x8221e630
	ctx.lr = 0x8221C7FC;
	sub_8221E630(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x8221c874
	if (ctx.cr6.gt) goto loc_8221C874;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8221c838
	// bdzf 4*cr6+eq,0x8221c864
	// bne cr6,0x8221c874
	if (!ctx.cr6.eq) goto loc_8221C874;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8221dca8
	ctx.lr = 0x8221C824;
	sub_8221DCA8(ctx, base);
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
loc_8221C838:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8221dd70
	ctx.lr = 0x8221C850;
	sub_8221DD70(ctx, base);
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
loc_8221C864:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221c6c0
	ctx.lr = 0x8221C86C;
	sub_8221C6C0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8215f480
	ctx.lr = 0x8221C874;
	sub_8215F480(ctx, base);
loc_8221C874:
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

__attribute__((alias("__imp__sub_8221C888"))) PPC_WEAK_FUNC(sub_8221C888);
PPC_FUNC_IMPL(__imp__sub_8221C888) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_8221C89C:
	// lbz r7,28(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 28);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8221c8bc
	if (ctx.cr6.eq) goto loc_8221C8BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt cr6,0x8221c89c
	if (ctx.cr6.lt) goto loc_8221C89C;
loc_8221C8BC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221c8cc
	if (!ctx.cr6.eq) goto loc_8221C8CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8221C8CC:
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// twllei r11,0
	// addi r5,r6,29344
	ctx.r5.s64 = ctx.r6.s64 + 29344;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r10,24332(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 24332);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stb r4,24332(r7)
	PPC_STORE_U8(ctx.r7.u32 + 24332, ctx.r4.u8);
	// lbzx r5,r10,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// divw r4,r5,r11
	ctx.r4.s32 = ctx.r5.s32 / ctx.r11.s32;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rotlwi r8,r5,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// mullw r6,r4,r11
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// subf r6,r6,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// add r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// andc r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// rotlwi r11,r8,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twlgei r7,-1
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C92C"))) PPC_WEAK_FUNC(sub_8221C92C);
PPC_FUNC_IMPL(__imp__sub_8221C92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C930"))) PPC_WEAK_FUNC(sub_8221C930);
PPC_FUNC_IMPL(__imp__sub_8221C930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r5,-32179
	ctx.r5.s64 = -2108882944;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r4,29344
	ctx.r3.s64 = ctx.r4.s64 + 29344;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r10,24332(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 24332);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stb r8,24332(r5)
	PPC_STORE_U8(ctx.r5.u32 + 24332, ctx.r8.u8);
	// lbzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r5,r3,100
	ctx.r5.s64 = ctx.r3.s64 * 100;
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
loc_8221C970:
	// lhz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8221c99c
	if (ctx.cr6.lt) goto loc_8221C99C;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blt cr6,0x8221c970
	if (ctx.cr6.lt) goto loc_8221C970;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8221C99C:
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// rotlwi r10,r9,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C9BC"))) PPC_WEAK_FUNC(sub_8221C9BC);
PPC_FUNC_IMPL(__imp__sub_8221C9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C9C0"))) PPC_WEAK_FUNC(sub_8221C9C0);
PPC_FUNC_IMPL(__imp__sub_8221C9C0) {
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
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221c9f8
	if (ctx.cr6.eq) goto loc_8221C9F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221e740
	ctx.lr = 0x8221C9EC;
	sub_8221E740(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8221C9F8;
	sub_82183E40(ctx, base);
loc_8221C9F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8221CA18"))) PPC_WEAK_FUNC(sub_8221CA18);
PPC_FUNC_IMPL(__imp__sub_8221CA18) {
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
	// bl 0x8221c888
	ctx.lr = 0x8221CA30;
	sub_8221C888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221ca50
	if (!ctx.cr6.eq) goto loc_8221CA50;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8221dd70
	ctx.lr = 0x8221CA50;
	sub_8221DD70(ctx, base);
loc_8221CA50:
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

__attribute__((alias("__imp__sub_8221CA64"))) PPC_WEAK_FUNC(sub_8221CA64);
PPC_FUNC_IMPL(__imp__sub_8221CA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221CA68"))) PPC_WEAK_FUNC(sub_8221CA68);
PPC_FUNC_IMPL(__imp__sub_8221CA68) {
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
	// bl 0x8221e2f8
	ctx.lr = 0x8221CA84;
	sub_8221E2F8(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x8221cafc
	if (ctx.cr6.gt) goto loc_8221CAFC;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8221cac0
	// bdzf 4*cr6+eq,0x8221caec
	// bne cr6,0x8221cafc
	if (!ctx.cr6.eq) goto loc_8221CAFC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8221dfc0
	ctx.lr = 0x8221CAAC;
	sub_8221DFC0(ctx, base);
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
loc_8221CAC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8221dd70
	ctx.lr = 0x8221CAD8;
	sub_8221DD70(ctx, base);
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
loc_8221CAEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221ca18
	ctx.lr = 0x8221CAF4;
	sub_8221CA18(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8221dc90
	ctx.lr = 0x8221CAFC;
	sub_8221DC90(ctx, base);
loc_8221CAFC:
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

__attribute__((alias("__imp__sub_8221CB10"))) PPC_WEAK_FUNC(sub_8221CB10);
PPC_FUNC_IMPL(__imp__sub_8221CB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8221CB18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cd04
	if (ctx.cr6.eq) goto loc_8221CD04;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// lwz r9,492(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8221cb5c
	if (!ctx.cr6.eq) goto loc_8221CB5C;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8221cb7c
	if (ctx.cr6.lt) goto loc_8221CB7C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8221cb7c
	if (ctx.cr6.eq) goto loc_8221CB7C;
loc_8221CB5C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8221dd70
	ctx.lr = 0x8221CB74;
	sub_8221DD70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8221CB7C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r30,-32179
	ctx.r30.s64 = -2108882944;
	// addi r29,r11,29344
	ctx.r29.s64 = ctx.r11.s64 + 29344;
loc_8221CB88:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x8221de58
	ctx.lr = 0x8221CB98;
	sub_8221DE58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221cbb4
	if (ctx.cr6.eq) goto loc_8221CBB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221c888
	ctx.lr = 0x8221CBA8;
	sub_8221C888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221cb88
	if (!ctx.cr6.eq) goto loc_8221CB88;
	// b 0x8221cb5c
	goto loc_8221CB5C;
loc_8221CBB4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x8221de70
	ctx.lr = 0x8221CBC4;
	sub_8221DE70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221cc10
	if (ctx.cr6.eq) goto loc_8221CC10;
	// lbz r11,24332(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24332);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r10,24332(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24332, ctx.r10.u8);
	// lbzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r7,r8,100
	ctx.r7.s64 = ctx.r8.s64 * 100;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// lhz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8221cc98
	if (!ctx.cr6.lt) goto loc_8221CC98;
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r10,r10,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x8221cb88
	goto loc_8221CB88;
loc_8221CC10:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x8221deb8
	ctx.lr = 0x8221CC20;
	sub_8221DEB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221cc6c
	if (ctx.cr6.eq) goto loc_8221CC6C;
	// lbz r11,24332(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24332);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r10,24332(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24332, ctx.r10.u8);
	// lbzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// mulli r7,r8,100
	ctx.r7.s64 = ctx.r8.s64 * 100;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8221ccb8
	if (!ctx.cr6.lt) goto loc_8221CCB8;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8221cb88
	goto loc_8221CB88;
loc_8221CC6C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x8221de88
	ctx.lr = 0x8221CC7C;
	sub_8221DE88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221ccd8
	if (ctx.cr6.eq) goto loc_8221CCD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221c930
	ctx.lr = 0x8221CC8C;
	sub_8221C930(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221cb88
	if (!ctx.cr6.eq) goto loc_8221CB88;
	// b 0x8221cb5c
	goto loc_8221CB5C;
loc_8221CC98:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x8221dd70
	ctx.lr = 0x8221CCB0;
	sub_8221DD70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8221CCB8:
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x8221dd70
	ctx.lr = 0x8221CCD0;
	sub_8221DD70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8221CCD8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x8221dea0
	ctx.lr = 0x8221CCE8;
	sub_8221DEA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8221cd00
	if (ctx.cr6.eq) goto loc_8221CD00;
	// bl 0x8221c7e0
	ctx.lr = 0x8221CCF8;
	sub_8221C7E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8221CD00:
	// bl 0x8221ca68
	ctx.lr = 0x8221CD04;
	sub_8221CA68(ctx, base);
loc_8221CD04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8221CD0C"))) PPC_WEAK_FUNC(sub_8221CD0C);
PPC_FUNC_IMPL(__imp__sub_8221CD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221CD10"))) PPC_WEAK_FUNC(sub_8221CD10);
PPC_FUNC_IMPL(__imp__sub_8221CD10) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CD34"))) PPC_WEAK_FUNC(sub_8221CD34);
PPC_FUNC_IMPL(__imp__sub_8221CD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221CD38"))) PPC_WEAK_FUNC(sub_8221CD38);
PPC_FUNC_IMPL(__imp__sub_8221CD38) {
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
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8221cdc8
	if (ctx.cr6.gt) goto loc_8221CDC8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8221cdc8
	// bdzf 4*cr6+eq,0x8221cd78
	// bne cr6,0x8221cda4
	if (!ctx.cr6.eq) goto loc_8221CDA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221cdcc
	goto loc_8221CDCC;
loc_8221CD78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8221cd9c
	if (ctx.cr6.eq) goto loc_8221CD9C;
	// bl 0x8209c0d0
	ctx.lr = 0x8221CD94;
	sub_8209C0D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r3.u32);
loc_8221CD9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8221cdcc
	goto loc_8221CDCC;
loc_8221CDA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8221cd9c
	if (ctx.cr6.eq) goto loc_8221CD9C;
	// bl 0x8209c0d0
	ctx.lr = 0x8221CDB8;
	sub_8209C0D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8221cdcc
	goto loc_8221CDCC;
loc_8221CDC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221CDCC:
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

__attribute__((alias("__imp__sub_8221CDE4"))) PPC_WEAK_FUNC(sub_8221CDE4);
PPC_FUNC_IMPL(__imp__sub_8221CDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221CDE8"))) PPC_WEAK_FUNC(sub_8221CDE8);
PPC_FUNC_IMPL(__imp__sub_8221CDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8221CDF0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bge cr6,0x8221ce80
	if (!ctx.cr6.lt) goto loc_8221CE80;
loc_8221CE04:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221ce74
	if (ctx.cr6.eq) goto loc_8221CE74;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// rlwinm r10,r28,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1FFFE;
	// li r31,1
	ctx.r31.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r27,r11,16
	ctx.r27.s64 = ctx.r11.s64 + 16;
loc_8221CE38:
	// lbzx r4,r27,r29
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r29.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221ce68
	if (ctx.cr6.eq) goto loc_8221CE68;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8221cd38
	ctx.lr = 0x8221CE50;
	sub_8221CD38(ctx, base);
	// and r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 & ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8221ce74
	if (ctx.cr6.eq) goto loc_8221CE74;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x8221ce38
	if (ctx.cr6.lt) goto loc_8221CE38;
loc_8221CE68:
	// and r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221ce8c
	if (!ctx.cr6.eq) goto loc_8221CE8C;
loc_8221CE74:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// blt cr6,0x8221ce04
	if (ctx.cr6.lt) goto loc_8221CE04;
loc_8221CE80:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8221CE8C:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8221CEA0"))) PPC_WEAK_FUNC(sub_8221CEA0);
PPC_FUNC_IMPL(__imp__sub_8221CEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8221CEA8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,64
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 64, ctx.xer);
	// bge cr6,0x8221cf38
	if (!ctx.cr6.lt) goto loc_8221CF38;
loc_8221CEBC:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221cf2c
	if (ctx.cr6.eq) goto loc_8221CF2C;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// rlwinm r10,r28,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1FFFE;
	// li r31,1
	ctx.r31.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r27,r11,16
	ctx.r27.s64 = ctx.r11.s64 + 16;
loc_8221CEF0:
	// lbzx r4,r27,r29
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r29.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221cf20
	if (ctx.cr6.eq) goto loc_8221CF20;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8221cd38
	ctx.lr = 0x8221CF08;
	sub_8221CD38(ctx, base);
	// and r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 & ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8221cf2c
	if (ctx.cr6.eq) goto loc_8221CF2C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x8221cef0
	if (ctx.cr6.lt) goto loc_8221CEF0;
loc_8221CF20:
	// and r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 & ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221cf44
	if (!ctx.cr6.eq) goto loc_8221CF44;
loc_8221CF2C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,64
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 64, ctx.xer);
	// blt cr6,0x8221cebc
	if (ctx.cr6.lt) goto loc_8221CEBC;
loc_8221CF38:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8221CF44:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8221CF58"))) PPC_WEAK_FUNC(sub_8221CF58);
PPC_FUNC_IMPL(__imp__sub_8221CF58) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CF78"))) PPC_WEAK_FUNC(sub_8221CF78);
PPC_FUNC_IMPL(__imp__sub_8221CF78) {
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
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bgt cr6,0x8221d170
	if (ctx.cr6.gt) goto loc_8221D170;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-12376
	ctx.r12.s64 = ctx.r12.s64 + -12376;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-12284(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12284);
	// lwz r17,-11920(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11920);
	// lwz r17,-12264(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12264);
	// lwz r17,-12240(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12240);
	// lwz r17,-11920(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11920);
	// lwz r17,-11920(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11920);
	// lwz r17,-11920(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11920);
	// lwz r17,-11920(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11920);
	// lwz r17,-12208(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12208);
	// lwz r17,-12184(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12184);
	// lwz r17,-12140(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12140);
	// lwz r17,-11920(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11920);
	// lwz r17,-11920(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11920);
	// lwz r17,-11920(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11920);
	// lwz r17,-11920(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11920);
	// lwz r17,-11920(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11920);
	// lwz r17,-11920(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11920);
	// lwz r17,-11920(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11920);
	// lwz r17,-12096(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12096);
	// lwz r17,-12064(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12064);
	// lwz r17,-12028(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12028);
	// lwz r17,-11992(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11992);
	// lwz r17,-11956(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11956);
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,500(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822170e8
	ctx.lr = 0x8221D058;
	sub_822170E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82217000
	ctx.lr = 0x8221D070;
	sub_82217000(ctx, base);
	// li r11,60
	ctx.r11.s64 = 60;
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// subfc r8,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r3.s64;
	// adde r3,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82217000
	ctx.lr = 0x8221D09C;
	sub_82217000(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// subfc r8,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r3.s64;
	// adde r3,r9,r10
	temp.u8 = (ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82217130
	ctx.lr = 0x8221D0C8;
	sub_82217130(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82217130
	ctx.lr = 0x8221D0E8;
	sub_82217130(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82217130
	ctx.lr = 0x8221D10C;
	sub_82217130(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82217130
	ctx.lr = 0x8221D130;
	sub_82217130(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82217130
	ctx.lr = 0x8221D154;
	sub_82217130(ctx, base);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221D170:
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

__attribute__((alias("__imp__sub_8221D184"))) PPC_WEAK_FUNC(sub_8221D184);
PPC_FUNC_IMPL(__imp__sub_8221D184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221D188"))) PPC_WEAK_FUNC(sub_8221D188);
PPC_FUNC_IMPL(__imp__sub_8221D188) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,-100
	ctx.r11.s64 = ctx.r4.s64 + -100;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bgt cr6,0x8221d2b0
	if (ctx.cr6.gt) goto loc_8221D2B0;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11828
	ctx.r12.s64 = ctx.r12.s64 + -11828;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-11744(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11744);
	// lwz r17,-11732(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11732);
	// lwz r17,-11720(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11720);
	// lwz r17,-11676(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11676);
	// lwz r17,-11636(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11636);
	// lwz r17,-11572(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11572);
	// lwz r17,-11544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11544);
	// lwz r17,-11524(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11524);
	// lwz r17,-11512(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11512);
	// lwz r17,-11500(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11500);
	// lwz r17,-11456(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11456);
	// lwz r17,-11444(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11444);
	// lwz r17,-11432(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11432);
	// lwz r17,-11420(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11420);
	// lwz r17,-11408(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11408);
	// lwz r17,-11396(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11396);
	// lwz r17,-11384(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11384);
	// lwz r17,-11352(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11352);
	// lwz r17,-11340(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11340);
	// lwz r17,-11328(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11328);
	// lwz r17,-11316(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11316);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e5e0
	ctx.lr = 0x8221D228;
	sub_8208E5E0(ctx, base);
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e618
	ctx.lr = 0x8221D234;
	sub_8208E618(ctx, base);
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e688
	ctx.lr = 0x8221D240;
	sub_8208E688(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221d25c
	if (!ctx.cr6.eq) goto loc_8221D25C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e650
	ctx.lr = 0x8221D250;
	sub_8208E650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8221d2b4
	if (ctx.cr6.eq) goto loc_8221D2B4;
loc_8221D25C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e6c0
	ctx.lr = 0x8221D26C;
	sub_8208E6C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221d2b0
	if (ctx.cr6.eq) goto loc_8221D2B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e5d8
	ctx.lr = 0x8221D27C;
	sub_8208E5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8221d2b4
	if (ctx.cr6.eq) goto loc_8221D2B4;
	// b 0x8221d2b0
	goto loc_8221D2B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e6c0
	ctx.lr = 0x8221D294;
	sub_8208E6C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221d2b0
	if (ctx.cr6.eq) goto loc_8221D2B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e5e0
	ctx.lr = 0x8221D2A4;
	sub_8208E5E0(ctx, base);
loc_8221D2A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8221d2b4
	if (!ctx.cr6.eq) goto loc_8221D2B4;
loc_8221D2B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221D2B4:
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e6c0
	ctx.lr = 0x8221D2D4;
	sub_8208E6C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221d2b0
	if (ctx.cr6.eq) goto loc_8221D2B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e618
	ctx.lr = 0x8221D2E4;
	sub_8208E618(ctx, base);
	// b 0x8221d2a4
	goto loc_8221D2A4;
	// lwz r11,1328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1328);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208dea8
	ctx.lr = 0x8221D304;
	sub_8208DEA8(ctx, base);
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208df38
	ctx.lr = 0x8221D310;
	sub_8208DF38(ctx, base);
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208df80
	ctx.lr = 0x8221D31C;
	sub_8208DF80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221d25c
	if (!ctx.cr6.eq) goto loc_8221D25C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208def0
	ctx.lr = 0x8221D32C;
	sub_8208DEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8221d2b4
	if (ctx.cr6.eq) goto loc_8221D2B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82218040
	ctx.lr = 0x8221D348;
	sub_82218040(ctx, base);
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217fb8
	ctx.lr = 0x8221D354;
	sub_82217FB8(ctx, base);
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82218150
	ctx.lr = 0x8221D360;
	sub_82218150(ctx, base);
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822180c8
	ctx.lr = 0x8221D36C;
	sub_822180C8(ctx, base);
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217028
	ctx.lr = 0x8221D378;
	sub_82217028(ctx, base);
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208dbb0
	ctx.lr = 0x8221D384;
	sub_8208DBB0(ctx, base);
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208dbb0
	ctx.lr = 0x8221D390;
	sub_8208DBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221d2b0
	if (ctx.cr6.eq) goto loc_8221D2B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82218318
	ctx.lr = 0x8221D3A4;
	sub_82218318(ctx, base);
	// b 0x8221d2a4
	goto loc_8221D2A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822178b8
	ctx.lr = 0x8221D3B0;
	sub_822178B8(ctx, base);
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217848
	ctx.lr = 0x8221D3BC;
	sub_82217848(ctx, base);
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e5b8
	ctx.lr = 0x8221D3C8;
	sub_8208E5B8(ctx, base);
	// b 0x8221d2b4
	goto loc_8221D2B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217928
	ctx.lr = 0x8221D3D4;
	sub_82217928(ctx, base);
	// b 0x8221d2b4
	goto loc_8221D2B4;
}

__attribute__((alias("__imp__sub_8221D3D8"))) PPC_WEAK_FUNC(sub_8221D3D8);
PPC_FUNC_IMPL(__imp__sub_8221D3D8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,-200
	ctx.r11.s64 = ctx.r4.s64 + -200;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bgt cr6,0x8221d4c0
	if (ctx.cr6.gt) goto loc_8221D4C0;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11236
	ctx.r12.s64 = ctx.r12.s64 + -11236;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-11132(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11132);
	// lwz r17,-11120(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11120);
	// lwz r17,-11044(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11044);
	// lwz r17,-11032(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11032);
	// lwz r17,-11020(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11020);
	// lwz r17,-11008(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -11008);
	// lwz r17,-10980(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10980);
	// lwz r17,-10952(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10952);
	// lwz r17,-10924(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10924);
	// lwz r17,-10908(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10908);
	// lwz r17,-10880(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10880);
	// lwz r17,-10852(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10852);
	// lwz r17,-10824(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10824);
	// lwz r17,-10808(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10808);
	// lwz r17,-10780(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10780);
	// lwz r17,-10752(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10752);
	// lwz r17,-10724(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10724);
	// lwz r17,-10692(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10692);
	// lwz r17,-10680(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10680);
	// lwz r17,-10660(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10660);
	// lwz r17,-10640(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10640);
	// lwz r17,-10608(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10608);
	// lwz r17,-10596(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10596);
	// lwz r17,-10576(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10576);
	// lwz r17,-10556(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10556);
	// lwz r17,-10544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10544);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217760
	ctx.lr = 0x8221D48C;
	sub_82217760(ctx, base);
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217760
	ctx.lr = 0x8221D498;
	sub_82217760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221d4c0
	if (!ctx.cr6.eq) goto loc_8221D4C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822177c8
	ctx.lr = 0x8221D4AC;
	sub_822177C8(ctx, base);
loc_8221D4AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9052);
	ctx.f0.f64 = double(temp.f32);
loc_8221D4B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8221d4c4
	if (!ctx.cr6.gt) goto loc_8221D4C4;
loc_8221D4C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221D4C4:
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0c8
	ctx.lr = 0x8221D4E4;
	sub_8208E0C8(ctx, base);
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0b0
	ctx.lr = 0x8221D4F0;
	sub_8208E0B0(ctx, base);
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822175e8
	ctx.lr = 0x8221D4FC;
	sub_822175E8(ctx, base);
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D50C;
	sub_822177F0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D528;
	sub_822177F0(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D544;
	sub_822177F0(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82216fe0
	ctx.lr = 0x8221D560;
	sub_82216FE0(ctx, base);
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D570;
	sub_822177F0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D58C;
	sub_822177F0(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D5A8;
	sub_822177F0(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82216fe0
	ctx.lr = 0x8221D5C4;
	sub_82216FE0(ctx, base);
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D5D4;
	sub_822177F0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D5F0;
	sub_822177F0(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D60C;
	sub_822177F0(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217778
	ctx.lr = 0x8221D624;
	sub_82217778(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9052);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8221d4c4
	if (ctx.cr6.gt) goto loc_8221D4C4;
	// b 0x8221d4c0
	goto loc_8221D4C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217778
	ctx.lr = 0x8221D644;
	sub_82217778(ctx, base);
	// b 0x8221d4ac
	goto loc_8221D4AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217778
	ctx.lr = 0x8221D650;
	sub_82217778(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8221d4b4
	goto loc_8221D4B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217778
	ctx.lr = 0x8221D664;
	sub_82217778(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8344);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8221d4b4
	goto loc_8221D4B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177a0
	ctx.lr = 0x8221D678;
	sub_822177A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9052);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8221d4c4
	if (ctx.cr6.gt) goto loc_8221D4C4;
	// b 0x8221d4c0
	goto loc_8221D4C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177a0
	ctx.lr = 0x8221D698;
	sub_822177A0(ctx, base);
	// b 0x8221d4ac
	goto loc_8221D4AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177a0
	ctx.lr = 0x8221D6A4;
	sub_822177A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8221d4b4
	goto loc_8221D4B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177a0
	ctx.lr = 0x8221D6B8;
	sub_822177A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8344);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8221d4b4
	goto loc_8221D4B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82218850
	ctx.lr = 0x8221D6CC;
	sub_82218850(ctx, base);
	// b 0x8221d4c4
	goto loc_8221D4C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e078
	ctx.lr = 0x8221D6D8;
	sub_8208E078(ctx, base);
	// b 0x8221d4c4
	goto loc_8221D4C4;
}

__attribute__((alias("__imp__sub_8221D6DC"))) PPC_WEAK_FUNC(sub_8221D6DC);
PPC_FUNC_IMPL(__imp__sub_8221D6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221D6E0"))) PPC_WEAK_FUNC(sub_8221D6E0);
PPC_FUNC_IMPL(__imp__sub_8221D6E0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,-300
	ctx.r11.s64 = ctx.r4.s64 + -300;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bgt cr6,0x8221d7c8
	if (ctx.cr6.gt) goto loc_8221D7C8;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-10460
	ctx.r12.s64 = ctx.r12.s64 + -10460;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-10356(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10356);
	// lwz r17,-10344(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10344);
	// lwz r17,-10268(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10268);
	// lwz r17,-10256(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10256);
	// lwz r17,-10244(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10244);
	// lwz r17,-10232(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10232);
	// lwz r17,-10204(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10204);
	// lwz r17,-10176(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10176);
	// lwz r17,-10148(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10148);
	// lwz r17,-10132(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10132);
	// lwz r17,-10104(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10104);
	// lwz r17,-10076(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10076);
	// lwz r17,-10048(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10048);
	// lwz r17,-10032(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10032);
	// lwz r17,-10004(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -10004);
	// lwz r17,-9976(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -9976);
	// lwz r17,-9948(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -9948);
	// lwz r17,-9916(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -9916);
	// lwz r17,-9904(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -9904);
	// lwz r17,-9884(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -9884);
	// lwz r17,-9864(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -9864);
	// lwz r17,-9832(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -9832);
	// lwz r17,-9820(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -9820);
	// lwz r17,-9800(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -9800);
	// lwz r17,-9780(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -9780);
	// lwz r17,-9768(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -9768);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217760
	ctx.lr = 0x8221D794;
	sub_82217760(ctx, base);
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217760
	ctx.lr = 0x8221D7A0;
	sub_82217760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221d7c8
	if (!ctx.cr6.eq) goto loc_8221D7C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822177c8
	ctx.lr = 0x8221D7B4;
	sub_822177C8(ctx, base);
loc_8221D7B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9052);
	ctx.f0.f64 = double(temp.f32);
loc_8221D7BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8221d7cc
	if (!ctx.cr6.gt) goto loc_8221D7CC;
loc_8221D7C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221D7CC:
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0c8
	ctx.lr = 0x8221D7EC;
	sub_8208E0C8(ctx, base);
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e0b0
	ctx.lr = 0x8221D7F8;
	sub_8208E0B0(ctx, base);
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822175e8
	ctx.lr = 0x8221D804;
	sub_822175E8(ctx, base);
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D814;
	sub_822177F0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D830;
	sub_822177F0(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D84C;
	sub_822177F0(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82216fe0
	ctx.lr = 0x8221D868;
	sub_82216FE0(ctx, base);
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D878;
	sub_822177F0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D894;
	sub_822177F0(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D8B0;
	sub_822177F0(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82216fe0
	ctx.lr = 0x8221D8CC;
	sub_82216FE0(ctx, base);
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D8DC;
	sub_822177F0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D8F8;
	sub_822177F0(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177f0
	ctx.lr = 0x8221D914;
	sub_822177F0(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217778
	ctx.lr = 0x8221D92C;
	sub_82217778(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9052);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8221d7cc
	if (ctx.cr6.gt) goto loc_8221D7CC;
	// b 0x8221d7c8
	goto loc_8221D7C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217778
	ctx.lr = 0x8221D94C;
	sub_82217778(ctx, base);
	// b 0x8221d7b4
	goto loc_8221D7B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217778
	ctx.lr = 0x8221D958;
	sub_82217778(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8221d7bc
	goto loc_8221D7BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82217778
	ctx.lr = 0x8221D96C;
	sub_82217778(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8344);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8221d7bc
	goto loc_8221D7BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177a0
	ctx.lr = 0x8221D980;
	sub_822177A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9052);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8221d7cc
	if (ctx.cr6.gt) goto loc_8221D7CC;
	// b 0x8221d7c8
	goto loc_8221D7C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177a0
	ctx.lr = 0x8221D9A0;
	sub_822177A0(ctx, base);
	// b 0x8221d7b4
	goto loc_8221D7B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177a0
	ctx.lr = 0x8221D9AC;
	sub_822177A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8060(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8221d7bc
	goto loc_8221D7BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822177a0
	ctx.lr = 0x8221D9C0;
	sub_822177A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8344);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8221d7bc
	goto loc_8221D7BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82218850
	ctx.lr = 0x8221D9D4;
	sub_82218850(ctx, base);
	// b 0x8221d7cc
	goto loc_8221D7CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208e078
	ctx.lr = 0x8221D9E0;
	sub_8208E078(ctx, base);
	// b 0x8221d7cc
	goto loc_8221D7CC;
}

__attribute__((alias("__imp__sub_8221D9E4"))) PPC_WEAK_FUNC(sub_8221D9E4);
PPC_FUNC_IMPL(__imp__sub_8221D9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221D9E8"))) PPC_WEAK_FUNC(sub_8221D9E8);
PPC_FUNC_IMPL(__imp__sub_8221D9E8) {
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
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8221da64
	if (ctx.cr6.eq) goto loc_8221DA64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8221da38
	if (ctx.cr6.eq) goto loc_8221DA38;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x8221da98
	if (!ctx.cr6.eq) goto loc_8221DA98;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x822170d0
	ctx.lr = 0x8221DA28;
	sub_822170D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221DA38:
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x822170b8
	ctx.lr = 0x8221DA54;
	sub_822170B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221DA64:
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r8,29344
	ctx.r7.s64 = ctx.r8.s64 + 29344;
	// lbz r11,24332(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 24332);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stb r6,24332(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24332, ctx.r6.u8);
	// lbzx r3,r11,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// mulli r11,r3,100
	ctx.r11.s64 = ctx.r3.s64 * 100;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8221da9c
	if (ctx.cr6.lt) goto loc_8221DA9C;
loc_8221DA98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221DA9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DAAC"))) PPC_WEAK_FUNC(sub_8221DAAC);
PPC_FUNC_IMPL(__imp__sub_8221DAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221DAB0"))) PPC_WEAK_FUNC(sub_8221DAB0);
PPC_FUNC_IMPL(__imp__sub_8221DAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8221DAB8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221dad8
	if (!ctx.cr6.eq) goto loc_8221DAD8;
loc_8221DACC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8221DAD8:
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8221dacc
	if (ctx.cr6.eq) goto loc_8221DACC;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r28,1
	ctx.r28.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
loc_8221DB14:
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221dbcc
	if (ctx.cr6.eq) goto loc_8221DBCC;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,100
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 100, ctx.xer);
	// bge cr6,0x8221db3c
	if (!ctx.cr6.lt) goto loc_8221DB3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221cf78
	ctx.lr = 0x8221DB38;
	sub_8221CF78(ctx, base);
	// b 0x8221dbb0
	goto loc_8221DBB0;
loc_8221DB3C:
	// cmpwi cr6,r4,200
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 200, ctx.xer);
	// bge cr6,0x8221db50
	if (!ctx.cr6.lt) goto loc_8221DB50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221d188
	ctx.lr = 0x8221DB4C;
	sub_8221D188(ctx, base);
	// b 0x8221dbb0
	goto loc_8221DBB0;
loc_8221DB50:
	// cmpwi cr6,r4,300
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 300, ctx.xer);
	// bge cr6,0x8221db64
	if (!ctx.cr6.lt) goto loc_8221DB64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221d3d8
	ctx.lr = 0x8221DB60;
	sub_8221D3D8(ctx, base);
	// b 0x8221dbb0
	goto loc_8221DBB0;
loc_8221DB64:
	// cmpwi cr6,r4,400
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 400, ctx.xer);
	// bge cr6,0x8221db78
	if (!ctx.cr6.lt) goto loc_8221DB78;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221d6e0
	ctx.lr = 0x8221DB74;
	sub_8221D6E0(ctx, base);
	// b 0x8221dbb0
	goto loc_8221DBB0;
loc_8221DB78:
	// cmpwi cr6,r4,500
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 500, ctx.xer);
	// bge cr6,0x8221db88
	if (!ctx.cr6.lt) goto loc_8221DB88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221dbb0
	goto loc_8221DBB0;
loc_8221DB88:
	// cmpwi cr6,r4,600
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 600, ctx.xer);
	// bge cr6,0x8221db98
	if (!ctx.cr6.lt) goto loc_8221DB98;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221dbb0
	goto loc_8221DBB0;
loc_8221DB98:
	// li r11,700
	ctx.r11.s64 = 700;
	// xoris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addc r7,r8,r9
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 & ctx.r10.u64;
loc_8221DBB0:
	// and r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 & ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8221dacc
	if (ctx.cr6.eq) goto loc_8221DACC;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// blt cr6,0x8221db14
	if (ctx.cr6.lt) goto loc_8221DB14;
loc_8221DBCC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221DBD0:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221dc08
	if (ctx.cr6.eq) goto loc_8221DC08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x8221d9e8
	ctx.lr = 0x8221DBEC;
	sub_8221D9E8(ctx, base);
	// and r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 & ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8221dacc
	if (ctx.cr6.eq) goto loc_8221DACC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x8221dbd0
	if (ctx.cr6.lt) goto loc_8221DBD0;
loc_8221DC08:
	// and r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 & ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8221DC14"))) PPC_WEAK_FUNC(sub_8221DC14);
PPC_FUNC_IMPL(__imp__sub_8221DC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221DC18"))) PPC_WEAK_FUNC(sub_8221DC18);
PPC_FUNC_IMPL(__imp__sub_8221DC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8221DC20;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8221dc64
	if (ctx.cr6.eq) goto loc_8221DC64;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// bge cr6,0x8221dc64
	if (!ctx.cr6.lt) goto loc_8221DC64;
loc_8221DC40:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221dab0
	ctx.lr = 0x8221DC50;
	sub_8221DAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221dc70
	if (!ctx.cr6.eq) goto loc_8221DC70;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8221dc40
	if (ctx.cr6.lt) goto loc_8221DC40;
loc_8221DC64:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8221DC70:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8221DC84"))) PPC_WEAK_FUNC(sub_8221DC84);
PPC_FUNC_IMPL(__imp__sub_8221DC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221DC88"))) PPC_WEAK_FUNC(sub_8221DC88);
PPC_FUNC_IMPL(__imp__sub_8221DC88) {
	PPC_FUNC_PROLOGUE();
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DC90"))) PPC_WEAK_FUNC(sub_8221DC90);
PPC_FUNC_IMPL(__imp__sub_8221DC90) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DCA8"))) PPC_WEAK_FUNC(sub_8221DCA8);
PPC_FUNC_IMPL(__imp__sub_8221DCA8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// lhz r7,6(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// sth r7,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r7.u16);
	// lhz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// sth r6,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r6.u16);
	// lhz r5,10(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// sth r5,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r5.u16);
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// lhz r9,14(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// sth r9,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, ctx.r9.u16);
	// lhz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// sth r8,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r8.u16);
	// lhz r7,18(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// sth r7,46(r3)
	PPC_STORE_U16(ctx.r3.u32 + 46, ctx.r7.u16);
	// lhz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// sth r6,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, ctx.r6.u16);
	// lhz r5,22(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// sth r5,50(r3)
	PPC_STORE_U16(ctx.r3.u32 + 50, ctx.r5.u16);
	// lhz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 24);
	// sth r11,52(r3)
	PPC_STORE_U16(ctx.r3.u32 + 52, ctx.r11.u16);
	// lhz r9,26(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// sth r9,54(r3)
	PPC_STORE_U16(ctx.r3.u32 + 54, ctx.r9.u16);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DD1C"))) PPC_WEAK_FUNC(sub_8221DD1C);
PPC_FUNC_IMPL(__imp__sub_8221DD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221DD20"))) PPC_WEAK_FUNC(sub_8221DD20);
PPC_FUNC_IMPL(__imp__sub_8221DD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8221DD28;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// addi r31,r3,26
	ctx.r31.s64 = ctx.r3.s64 + 26;
	// li r30,4
	ctx.r30.s64 = 4;
loc_8221DD3C:
	// lhz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// bl 0x8221f918
	ctx.lr = 0x8221DD48;
	sub_8221F918(ctx, base);
	// stw r3,-12(r29)
	PPC_STORE_U32(ctx.r29.u32 + -12, ctx.r3.u32);
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lhzu r5,6(r31)
	// bl 0x8221ea80
	ctx.lr = 0x8221DD5C;
	sub_8221EA80(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// bne 0x8221dd3c
	if (!ctx.cr0.eq) goto loc_8221DD3C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8221DD70"))) PPC_WEAK_FUNC(sub_8221DD70);
PPC_FUNC_IMPL(__imp__sub_8221DD70) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,500(r7)
	PPC_STORE_U32(ctx.r7.u32 + 500, ctx.r11.u32);
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x82217188
	sub_82217188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221DDA0"))) PPC_WEAK_FUNC(sub_8221DDA0);
PPC_FUNC_IMPL(__imp__sub_8221DDA0) {
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
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r30,4
	ctx.r30.s64 = 4;
loc_8221DDBC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221ddcc
	if (ctx.cr6.eq) goto loc_8221DDCC;
	// bl 0x8221e748
	ctx.lr = 0x8221DDCC;
	sub_8221E748(ctx, base);
loc_8221DDCC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8221ddbc
	if (!ctx.cr0.eq) goto loc_8221DDBC;
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

__attribute__((alias("__imp__sub_8221DDF0"))) PPC_WEAK_FUNC(sub_8221DDF0);
PPC_FUNC_IMPL(__imp__sub_8221DDF0) {
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
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
loc_8221DE0C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221de24
	if (ctx.cr6.eq) goto loc_8221DE24;
	// bl 0x8221e848
	ctx.lr = 0x8221DE1C;
	sub_8221E848(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221de50
	if (!ctx.cr6.eq) goto loc_8221DE50;
loc_8221DE24:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x8221de0c
	if (ctx.cr6.lt) goto loc_8221DE0C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8221DE38:
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
loc_8221DE50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8221de38
	goto loc_8221DE38;
}

__attribute__((alias("__imp__sub_8221DE58"))) PPC_WEAK_FUNC(sub_8221DE58);
PPC_FUNC_IMPL(__imp__sub_8221DE58) {
	PPC_FUNC_PROLOGUE();
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DE6C"))) PPC_WEAK_FUNC(sub_8221DE6C);
PPC_FUNC_IMPL(__imp__sub_8221DE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221DE70"))) PPC_WEAK_FUNC(sub_8221DE70);
PPC_FUNC_IMPL(__imp__sub_8221DE70) {
	PPC_FUNC_PROLOGUE();
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DE84"))) PPC_WEAK_FUNC(sub_8221DE84);
PPC_FUNC_IMPL(__imp__sub_8221DE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221DE88"))) PPC_WEAK_FUNC(sub_8221DE88);
PPC_FUNC_IMPL(__imp__sub_8221DE88) {
	PPC_FUNC_PROLOGUE();
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DE9C"))) PPC_WEAK_FUNC(sub_8221DE9C);
PPC_FUNC_IMPL(__imp__sub_8221DE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221DEA0"))) PPC_WEAK_FUNC(sub_8221DEA0);
PPC_FUNC_IMPL(__imp__sub_8221DEA0) {
	PPC_FUNC_PROLOGUE();
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DEB4"))) PPC_WEAK_FUNC(sub_8221DEB4);
PPC_FUNC_IMPL(__imp__sub_8221DEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221DEB8"))) PPC_WEAK_FUNC(sub_8221DEB8);
PPC_FUNC_IMPL(__imp__sub_8221DEB8) {
	PPC_FUNC_PROLOGUE();
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221DECC"))) PPC_WEAK_FUNC(sub_8221DECC);
PPC_FUNC_IMPL(__imp__sub_8221DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221DED0"))) PPC_WEAK_FUNC(sub_8221DED0);
PPC_FUNC_IMPL(__imp__sub_8221DED0) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8221df08
	if (!ctx.cr6.lt) goto loc_8221DF08;
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
loc_8221DF08:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82217948
	ctx.lr = 0x8221DF14;
	sub_82217948(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 & ctx.r3.u64;
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

__attribute__((alias("__imp__sub_8221DF50"))) PPC_WEAK_FUNC(sub_8221DF50);
PPC_FUNC_IMPL(__imp__sub_8221DF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8221DF58;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r30,0
	ctx.r30.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8221DF74:
	// stw r30,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8221df74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221DF74;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x822aa648
	ctx.lr = 0x8221DF8C;
	sub_822AA648(ctx, base);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 500, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8221DFC0"))) PPC_WEAK_FUNC(sub_8221DFC0);
PPC_FUNC_IMPL(__imp__sub_8221DFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r3,32
	ctx.r7.s64 = ctx.r3.s64 + 32;
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// lhz r8,6(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// sth r8,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r8.u16);
	// lhz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// sth r6,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r6.u16);
	// lhz r5,10(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// sth r5,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r5.u16);
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// lhz r9,14(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// sth r9,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, ctx.r9.u16);
	// lhz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// sth r8,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r8.u16);
	// lhz r6,18(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// sth r6,46(r3)
	PPC_STORE_U16(ctx.r3.u32 + 46, ctx.r6.u16);
	// lhz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// sth r5,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, ctx.r5.u16);
	// lhz r11,22(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// sth r11,50(r3)
	PPC_STORE_U16(ctx.r3.u32 + 50, ctx.r11.u16);
	// lhz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 24);
	// sth r9,52(r3)
	PPC_STORE_U16(ctx.r3.u32 + 52, ctx.r9.u16);
	// lhz r8,26(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// sth r8,54(r3)
	PPC_STORE_U16(ctx.r3.u32 + 54, ctx.r8.u16);
	// lhz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// cmplwi cr6,r6,7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 7, ctx.xer);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// bne cr6,0x8221e0fc
	if (!ctx.cr6.eq) goto loc_8221E0FC;
	// lis r31,-32179
	ctx.r31.s64 = -2108882944;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,29344
	ctx.r30.s64 = ctx.r11.s64 + 29344;
	// addi r5,r3,34
	ctx.r5.s64 = ctx.r3.s64 + 34;
	// lbz r9,24332(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24332);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stb r6,24332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24332, ctx.r6.u8);
	// lbzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mulli r9,r9,100
	ctx.r9.s64 = ctx.r9.s64 * 100;
	// srawi r6,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 8;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
loc_8221E084:
	// lhz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8221e0a8
	if (ctx.cr6.lt) goto loc_8221E0A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 + 6;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8221e084
	if (ctx.cr6.lt) goto loc_8221E084;
	// b 0x8221e0d8
	goto loc_8221E0D8;
loc_8221E0A8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lhz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// sth r9,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r9.u16);
	// lhz r8,34(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// sth r8,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
	// lhz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// sth r6,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r6.u16);
	// sth r4,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r4.u16);
loc_8221E0D8:
	// sth r4,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r4.u16);
	// sth r4,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r4.u16);
	// sth r4,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, ctx.r4.u16);
	// sth r4,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r4.u16);
	// sth r4,46(r3)
	PPC_STORE_U16(ctx.r3.u32 + 46, ctx.r4.u16);
	// sth r4,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, ctx.r4.u16);
	// sth r4,50(r3)
	PPC_STORE_U16(ctx.r3.u32 + 50, ctx.r4.u16);
	// sth r4,52(r3)
	PPC_STORE_U16(ctx.r3.u32 + 52, ctx.r4.u16);
	// sth r4,54(r3)
	PPC_STORE_U16(ctx.r3.u32 + 54, ctx.r4.u16);
loc_8221E0FC:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E108"))) PPC_WEAK_FUNC(sub_8221E108);
PPC_FUNC_IMPL(__imp__sub_8221E108) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e168
	if (ctx.cr6.eq) goto loc_8221E168;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// beq cr6,0x8221e168
	if (ctx.cr6.eq) goto loc_8221E168;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// bne cr6,0x8221e164
	if (!ctx.cr6.eq) goto loc_8221E164;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8221E164:
	// b 0x8221e848
	sub_8221E848(ctx, base);
	return;
loc_8221E168:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E170"))) PPC_WEAK_FUNC(sub_8221E170);
PPC_FUNC_IMPL(__imp__sub_8221E170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8221E178;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8221e208
	if (!ctx.cr6.eq) goto loc_8221E208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208e820
	ctx.lr = 0x8221E1B8;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221e1d0
	if (!ctx.cr6.eq) goto loc_8221E1D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208e5d8
	ctx.lr = 0x8221E1C8;
	sub_8208E5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221e280
	if (ctx.cr6.eq) goto loc_8221E280;
loc_8221E1D0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r11,r9,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r5,r9,28
	ctx.r5.u64 = ctx.r9.u32 & 0xF;
	// addi r4,r11,10000
	ctx.r4.s64 = ctx.r11.s64 + 10000;
	// bl 0x822189d8
	ctx.lr = 0x8221E200;
	sub_822189D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8221E208:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8221e280
	if (!ctx.cr6.eq) goto loc_8221E280;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208e820
	ctx.lr = 0x8221E218;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221e230
	if (!ctx.cr6.eq) goto loc_8221E230;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8208e5d8
	ctx.lr = 0x8221E228;
	sub_8208E5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221e280
	if (ctx.cr6.eq) goto loc_8221E280;
loc_8221E230:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,344(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 344);
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r4,34(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 34);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8221e280
	if (ctx.cr6.eq) goto loc_8221E280;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r5,r9,24,8,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// bl 0x82218380
	ctx.lr = 0x8221E280;
	sub_82218380(ctx, base);
loc_8221E280:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8221E288"))) PPC_WEAK_FUNC(sub_8221E288);
PPC_FUNC_IMPL(__imp__sub_8221E288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8221E290;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8221E2A0:
	// lwz r30,-12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221e2c0
	if (ctx.cr6.eq) goto loc_8221E2C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221f980
	ctx.lr = 0x8221E2B4;
	sub_8221F980(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8221E2C0;
	sub_82183E40(ctx, base);
loc_8221E2C0:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r28,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8221e2e4
	if (ctx.cr6.eq) goto loc_8221E2E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221ead8
	ctx.lr = 0x8221E2D8;
	sub_8221EAD8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x8221E2E4;
	sub_82183E40(ctx, base);
loc_8221E2E4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8221e2a0
	if (!ctx.cr0.eq) goto loc_8221E2A0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8221E2F8"))) PPC_WEAK_FUNC(sub_8221E2F8);
PPC_FUNC_IMPL(__imp__sub_8221E2F8) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8221e614
	if (ctx.cr6.gt) goto loc_8221E614;
	// li r30,0
	ctx.r30.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8221e350
	// bdzf 4*cr6+eq,0x8221e374
	// bdzf 4*cr6+eq,0x8221e388
	// bdzf 4*cr6+eq,0x8221e40c
	// bdzf 4*cr6+eq,0x8221e4e0
	// bdzf 4*cr6+eq,0x8221e504
	// bdzf 4*cr6+eq,0x8221e54c
	// bne cr6,0x8221e5d4
	if (!ctx.cr6.eq) goto loc_8221E5D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221e618
	goto loc_8221E618;
loc_8221E350:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// bl 0x8221e288
	ctx.lr = 0x8221E368;
	sub_8221E288(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8221E374:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221dd20
	ctx.lr = 0x8221E37C;
	sub_8221DD20(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8221E388:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 32);
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// bne cr6,0x8221e3f8
	if (!ctx.cr6.eq) goto loc_8221E3F8;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r9,-7560
	ctx.r8.s64 = ctx.r9.s64 + -7560;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,76
	ctx.r6.s64 = 76;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,60(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lhzx r4,r5,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r31.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.f9.u32);
loc_8221E3F8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 500, ctx.r10.u32);
	// b 0x8221e614
	goto loc_8221E614;
loc_8221E40C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 500, ctx.r30.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 32);
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// bne cr6,0x8221e454
	if (!ctx.cr6.eq) goto loc_8221E454;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8221e44c
	if (ctx.cr6.gt) goto loc_8221E44C;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8221e610
	goto loc_8221E610;
loc_8221E44C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
loc_8221E454:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e46c
	if (ctx.cr6.eq) goto loc_8221E46C;
	// bl 0x8221e748
	ctx.lr = 0x8221E46C;
	sub_8221E748(ctx, base);
loc_8221E46C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e4b4
	if (ctx.cr6.eq) goto loc_8221E4B4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// beq cr6,0x8221e4b4
	if (ctx.cr6.eq) goto loc_8221E4B4;
	// bl 0x8221e900
	ctx.lr = 0x8221E4A4;
	sub_8221E900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221e4b4
	if (ctx.cr6.eq) goto loc_8221E4B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221e618
	goto loc_8221E618;
loc_8221E4B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x8221e108
	ctx.lr = 0x8221E4C0;
	sub_8221E108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221e614
	if (ctx.cr6.eq) goto loc_8221E614;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x8221ded0
	ctx.lr = 0x8221E4DC;
	sub_8221DED0(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
loc_8221E4E0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221e4f8
	if (!ctx.cr6.gt) goto loc_8221E4F8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x8221e614
	goto loc_8221E614;
loc_8221E4F8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8221E504:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e51c
	if (ctx.cr6.eq) goto loc_8221E51C;
	// bl 0x8221ec40
	ctx.lr = 0x8221E51C;
	sub_8221EC40(ctx, base);
loc_8221E51C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x8221e170
	ctx.lr = 0x8221E528;
	sub_8221E170(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e54c
	if (ctx.cr6.eq) goto loc_8221E54C;
	// bl 0x8221e748
	ctx.lr = 0x8221E54C;
	sub_8221E748(ctx, base);
loc_8221E54C:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e564
	if (ctx.cr6.eq) goto loc_8221E564;
	// bl 0x8221ebc0
	ctx.lr = 0x8221E564;
	sub_8221EBC0(ctx, base);
loc_8221E564:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e598
	if (ctx.cr6.eq) goto loc_8221E598;
	// bl 0x8221f798
	ctx.lr = 0x8221E57C;
	sub_8221F798(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221e598
	if (ctx.cr6.eq) goto loc_8221E598;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// b 0x8221e618
	goto loc_8221E618;
loc_8221E598:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e5b8
	if (ctx.cr6.eq) goto loc_8221E5B8;
	// bl 0x8221f6e0
	ctx.lr = 0x8221E5B0;
	sub_8221F6E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221e614
	if (ctx.cr6.eq) goto loc_8221E614;
loc_8221E5B8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// b 0x8221e614
	goto loc_8221E614;
loc_8221E5D4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8221e604
	if (!ctx.cr6.lt) goto loc_8221E604;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221e60c
	if (!ctx.cr6.eq) goto loc_8221E60C;
loc_8221E604:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8221e618
	goto loc_8221E618;
loc_8221E60C:
	// li r11,3
	ctx.r11.s64 = 3;
loc_8221E610:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8221E614:
	// li r3,3
	ctx.r3.s64 = 3;
loc_8221E618:
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

__attribute__((alias("__imp__sub_8221E630"))) PPC_WEAK_FUNC(sub_8221E630);
PPC_FUNC_IMPL(__imp__sub_8221E630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8221E638;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8221e734
	if (ctx.cr6.gt) goto loc_8221E734;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8221e670
	// bdzf 4*cr6+eq,0x8221e690
	// bdzf 4*cr6+eq,0x8221e6b0
	// bne cr6,0x8221e72c
	if (!ctx.cr6.eq) goto loc_8221E72C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8221E670:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221e288
	ctx.lr = 0x8221E678;
	sub_8221E288(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8221E690:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221dd20
	ctx.lr = 0x8221E698;
	sub_8221DD20(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8221E6B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221dda0
	ctx.lr = 0x8221E6B8;
	sub_8221DDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221ddf0
	ctx.lr = 0x8221E6C0;
	sub_8221DDF0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8221e6e0
	if (ctx.cr6.eq) goto loc_8221E6E0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8221E6E0:
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// li r29,4
	ctx.r29.s64 = 4;
loc_8221E6EC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e700
	if (ctx.cr6.eq) goto loc_8221E700;
	// bl 0x8221e900
	ctx.lr = 0x8221E6FC;
	sub_8221E900(ctx, base);
	// and r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 & ctx.r28.u64;
loc_8221E700:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8221e6ec
	if (!ctx.cr0.eq) goto loc_8221E6EC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8221e734
	if (ctx.cr6.eq) goto loc_8221E734;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8221E72C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8221E734:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8221E740"))) PPC_WEAK_FUNC(sub_8221E740);
PPC_FUNC_IMPL(__imp__sub_8221E740) {
	PPC_FUNC_PROLOGUE();
	// b 0x8221e288
	sub_8221E288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E744"))) PPC_WEAK_FUNC(sub_8221E744);
PPC_FUNC_IMPL(__imp__sub_8221E744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221E748"))) PPC_WEAK_FUNC(sub_8221E748);
PPC_FUNC_IMPL(__imp__sub_8221E748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8221E750;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
loc_8221E760:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e78c
	if (ctx.cr6.eq) goto loc_8221E78C;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221E780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8221e760
	if (ctx.cr6.lt) goto loc_8221E760;
loc_8221E78C:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
loc_8221E794:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e7c0
	if (ctx.cr6.eq) goto loc_8221E7C0;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221E7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8221e794
	if (ctx.cr6.lt) goto loc_8221E794;
loc_8221E7C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8221E7C8"))) PPC_WEAK_FUNC(sub_8221E7C8);
PPC_FUNC_IMPL(__imp__sub_8221E7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8221E7D0;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82219a58
	ctx.lr = 0x8221E7EC;
	sub_82219A58(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r1,82
	ctx.r31.s64 = ctx.r1.s64 + 82;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
loc_8221E7F8:
	// lhz r4,-2(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221e840
	if (ctx.cr6.eq) goto loc_8221E840;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221fa28
	ctx.lr = 0x8221E80C;
	sub_8221FA28(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221e82c
	if (ctx.cr6.eq) goto loc_8221E82C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8221E82C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221E82C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8221e7f8
	if (ctx.cr6.lt) goto loc_8221E7F8;
loc_8221E840:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8221E848"))) PPC_WEAK_FUNC(sub_8221E848);
PPC_FUNC_IMPL(__imp__sub_8221E848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8221E850;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
loc_8221E864:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e8a0
	if (ctx.cr6.eq) goto loc_8221E8A0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221E884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// and r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 & ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8221e8f0
	if (ctx.cr6.eq) goto loc_8221E8F0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8221e864
	if (ctx.cr6.lt) goto loc_8221E864;
loc_8221E8A0:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r28,36
	ctx.r31.s64 = ctx.r28.s64 + 36;
loc_8221E8A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e8e4
	if (ctx.cr6.eq) goto loc_8221E8E4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221E8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// and r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 & ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8221e8f0
	if (ctx.cr6.eq) goto loc_8221E8F0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x8221e8a8
	if (ctx.cr6.lt) goto loc_8221E8A8;
loc_8221E8E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8221E8F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8221E8FC"))) PPC_WEAK_FUNC(sub_8221E8FC);
PPC_FUNC_IMPL(__imp__sub_8221E8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221E900"))) PPC_WEAK_FUNC(sub_8221E900);
PPC_FUNC_IMPL(__imp__sub_8221E900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8221E908;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
loc_8221E91C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e958
	if (ctx.cr6.eq) goto loc_8221E958;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221E93C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8221e9a8
	if (ctx.cr6.eq) goto loc_8221E9A8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8221e91c
	if (ctx.cr6.lt) goto loc_8221E91C;
loc_8221E958:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r28,36
	ctx.r31.s64 = ctx.r28.s64 + 36;
loc_8221E960:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e99c
	if (ctx.cr6.eq) goto loc_8221E99C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221E980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8221e9a8
	if (ctx.cr6.eq) goto loc_8221E9A8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x8221e960
	if (ctx.cr6.lt) goto loc_8221E960;
loc_8221E99C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8221E9A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8221E9B4"))) PPC_WEAK_FUNC(sub_8221E9B4);
PPC_FUNC_IMPL(__imp__sub_8221E9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221E9B8"))) PPC_WEAK_FUNC(sub_8221E9B8);
PPC_FUNC_IMPL(__imp__sub_8221E9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8221E9C0;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r28,r3,36
	ctx.r28.s64 = ctx.r3.s64 + 36;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
loc_8221EA14:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8221ea14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221EA14;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221e7c8
	ctx.lr = 0x8221EA2C;
	sub_8221E7C8(ctx, base);
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82219a58
	ctx.lr = 0x8221EA40;
	sub_82219A58(ctx, base);
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8221EA48:
	// lbzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221ea70
	if (ctx.cr6.eq) goto loc_8221EA70;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221fe38
	ctx.lr = 0x8221EA5C;
	sub_8221FE38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8221ea48
	if (ctx.cr6.lt) goto loc_8221EA48;
loc_8221EA70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8221EA7C"))) PPC_WEAK_FUNC(sub_8221EA7C);
PPC_FUNC_IMPL(__imp__sub_8221EA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221EA80"))) PPC_WEAK_FUNC(sub_8221EA80);
PPC_FUNC_IMPL(__imp__sub_8221EA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8221EA88;
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221eac8
	if (ctx.cr6.eq) goto loc_8221EAC8;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82080000
	ctx.lr = 0x8221EAA8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221eac8
	if (ctx.cr6.eq) goto loc_8221EAC8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8221e9b8
	ctx.lr = 0x8221EAC0;
	sub_8221E9B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8221EAC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8221EAD4"))) PPC_WEAK_FUNC(sub_8221EAD4);
PPC_FUNC_IMPL(__imp__sub_8221EAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221EAD8"))) PPC_WEAK_FUNC(sub_8221EAD8);
PPC_FUNC_IMPL(__imp__sub_8221EAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8221EAE0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8221EAF4:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221eb14
	if (ctx.cr6.eq) goto loc_8221EB14;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221fa08
	ctx.lr = 0x8221EB08;
	sub_8221FA08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8221EB14;
	sub_82183E40(ctx, base);
loc_8221EB14:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8221eaf4
	if (!ctx.cr0.eq) goto loc_8221EAF4;
	// addi r31,r27,32
	ctx.r31.s64 = ctx.r27.s64 + 32;
	// li r30,8
	ctx.r30.s64 = 8;
loc_8221EB28:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221eb48
	if (ctx.cr6.eq) goto loc_8221EB48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221fb28
	ctx.lr = 0x8221EB3C;
	sub_8221FB28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8221EB48;
	sub_82183E40(ctx, base);
loc_8221EB48:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8221eb28
	if (!ctx.cr0.eq) goto loc_8221EB28;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8221EB5C"))) PPC_WEAK_FUNC(sub_8221EB5C);
PPC_FUNC_IMPL(__imp__sub_8221EB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221EB60"))) PPC_WEAK_FUNC(sub_8221EB60);
PPC_FUNC_IMPL(__imp__sub_8221EB60) {
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
	// bl 0x82218150
	ctx.lr = 0x8221EB80;
	sub_82218150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221eba0
	if (!ctx.cr6.eq) goto loc_8221EBA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822180c8
	ctx.lr = 0x8221EB94;
	sub_822180C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8221eba4
	if (ctx.cr6.eq) goto loc_8221EBA4;
loc_8221EBA0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8221EBA4:
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

__attribute__((alias("__imp__sub_8221EBBC"))) PPC_WEAK_FUNC(sub_8221EBBC);
PPC_FUNC_IMPL(__imp__sub_8221EBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221EBC0"))) PPC_WEAK_FUNC(sub_8221EBC0);
PPC_FUNC_IMPL(__imp__sub_8221EBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8221EBC8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
loc_8221EBD8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ec04
	if (ctx.cr6.eq) goto loc_8221EC04;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221EBF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8221ebd8
	if (ctx.cr6.lt) goto loc_8221EBD8;
loc_8221EC04:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
loc_8221EC0C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ec38
	if (ctx.cr6.eq) goto loc_8221EC38;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221EC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8221ec0c
	if (ctx.cr6.lt) goto loc_8221EC0C;
loc_8221EC38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8221EC40"))) PPC_WEAK_FUNC(sub_8221EC40);
PPC_FUNC_IMPL(__imp__sub_8221EC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8221EC48;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 144);
	// clrlwi r3,r10,20
	ctx.r3.u64 = ctx.r10.u32 & 0xFFF;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x8221a6d0
	ctx.lr = 0x8221EC64;
	sub_8221A6D0(ctx, base);
	// addi r9,r29,-2048
	ctx.r9.s64 = ctx.r29.s64 + -2048;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r3,r9,20
	ctx.r3.u64 = ctx.r9.u32 & 0xFFF;
	// bl 0x8221a6d0
	ctx.lr = 0x8221EC74;
	sub_8221A6D0(ctx, base);
	// addi r8,r29,-1024
	ctx.r8.s64 = ctx.r29.s64 + -1024;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi r3,r8,20
	ctx.r3.u64 = ctx.r8.u32 & 0xFFF;
	// bl 0x8221a6d0
	ctx.lr = 0x8221EC84;
	sub_8221A6D0(ctx, base);
	// addi r7,r29,1024
	ctx.r7.s64 = ctx.r29.s64 + 1024;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r3,r7,20
	ctx.r3.u64 = ctx.r7.u32 & 0xFFF;
	// bl 0x8221a6d0
	ctx.lr = 0x8221EC94;
	sub_8221A6D0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r11,140
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 140, ctx.xer);
	// bgt cr6,0x8221f644
	if (ctx.cr6.gt) goto loc_8221F644;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4924
	ctx.r12.s64 = ctx.r12.s64 + -4924;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-4360(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4360);
	// lwz r17,-4328(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4328);
	// lwz r17,-4292(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4292);
	// lwz r17,-4252(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4252);
	// lwz r17,-4212(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4212);
	// lwz r17,-4176(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4176);
	// lwz r17,-4140(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4140);
	// lwz r17,-4104(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4104);
	// lwz r17,-4068(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4068);
	// lwz r17,-4028(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4028);
	// lwz r17,-3988(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3988);
	// lwz r17,-3952(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3952);
	// lwz r17,-3916(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3916);
	// lwz r17,-3880(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3880);
	// lwz r17,-3844(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3844);
	// lwz r17,-3804(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3804);
	// lwz r17,-3764(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3764);
	// lwz r17,-3728(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3728);
	// lwz r17,-3692(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3692);
	// lwz r17,-3656(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3656);
	// lwz r17,-3620(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3620);
	// lwz r17,-3584(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3584);
	// lwz r17,-3548(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3548);
	// lwz r17,-3508(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3508);
	// lwz r17,-3468(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3468);
	// lwz r17,-3432(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3432);
	// lwz r17,-3396(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3396);
	// lwz r17,-3360(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3360);
	// lwz r17,-3324(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3324);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-3288(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3288);
	// lwz r17,-3252(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3252);
	// lwz r17,-3212(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3212);
	// lwz r17,-3172(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3172);
	// lwz r17,-3132(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3132);
	// lwz r17,-3092(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3092);
	// lwz r17,-3056(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3056);
	// lwz r17,-3016(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -3016);
	// lwz r17,-2976(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2976);
	// lwz r17,-2936(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2936);
	// lwz r17,-2896(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2896);
	// lwz r17,-2860(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2860);
	// lwz r17,-2820(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2820);
	// lwz r17,-2860(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2860);
	// lwz r17,-2820(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2820);
	// lwz r17,-2780(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2780);
	// lwz r17,-2740(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2740);
	// lwz r17,-2700(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2700);
	// lwz r17,-2664(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2664);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2596(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2596);
	// lwz r17,-2596(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2596);
	// lwz r17,-2588(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2588);
	// lwz r17,-2588(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2588);
	// lwz r17,-2588(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2588);
	// lwz r17,-2588(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2588);
	// lwz r17,-2580(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2580);
	// lwz r17,-2544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2544);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2492);
	// lwz r17,-2508(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -2508);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221EF14;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221EF38;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// rlwimi r4,r30,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221EF60;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r4,r30,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221EF88;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r4,773
	ctx.r4.s64 = 773;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221EFAC;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r4,774
	ctx.r4.s64 = 774;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221EFD0;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221EFF4;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F018;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,9
	ctx.r10.s64 = 9;
	// li r4,9
	ctx.r4.s64 = 9;
	// rlwimi r4,r30,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F040;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r4,10
	ctx.r4.s64 = 10;
	// rlwimi r4,r30,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F068;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// li r4,779
	ctx.r4.s64 = 779;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F08C;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r4,780
	ctx.r4.s64 = 780;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F0B0;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,13
	ctx.r10.s64 = 13;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F0D4;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F0F8;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r4,15
	ctx.r4.s64 = 15;
	// rlwimi r4,r30,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F120;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwimi r4,r30,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F148;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,17
	ctx.r10.s64 = 17;
	// li r4,785
	ctx.r4.s64 = 785;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F16C;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r4,786
	ctx.r4.s64 = 786;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F190;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,19
	ctx.r10.s64 = 19;
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F1B4;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F1D8;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,21
	ctx.r10.s64 = 21;
	// li r4,789
	ctx.r4.s64 = 789;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F1FC;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,22
	ctx.r10.s64 = 22;
	// li r4,790
	ctx.r4.s64 = 790;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F220;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,23
	ctx.r10.s64 = 23;
	// li r4,23
	ctx.r4.s64 = 23;
	// rlwimi r4,r30,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F248;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r4,24
	ctx.r4.s64 = 24;
	// rlwimi r4,r30,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F270;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,25
	ctx.r10.s64 = 25;
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F294;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,26
	ctx.r10.s64 = 26;
	// li r4,26
	ctx.r4.s64 = 26;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F2B8;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F2DC;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,28
	ctx.r10.s64 = 28;
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F300;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,29
	ctx.r10.s64 = 29;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F324;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,30
	ctx.r10.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F348;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r4,30
	ctx.r4.s64 = 30;
	// rlwimi r4,r30,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F370;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r4,30
	ctx.r4.s64 = 30;
	// rlwimi r4,r28,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F398;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,33
	ctx.r10.s64 = 33;
	// li r4,30
	ctx.r4.s64 = 30;
	// rlwimi r4,r29,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F3C0;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,34
	ctx.r10.s64 = 34;
	// li r4,30
	ctx.r4.s64 = 30;
	// rlwimi r4,r3,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F3E8;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,35
	ctx.r10.s64 = 35;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F40C;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,36
	ctx.r10.s64 = 36;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwimi r4,r30,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F434;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,37
	ctx.r10.s64 = 37;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwimi r4,r28,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F45C;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,38
	ctx.r10.s64 = 38;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwimi r4,r29,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F484;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,39
	ctx.r10.s64 = 39;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwimi r4,r3,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F4AC;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,40
	ctx.r10.s64 = 40;
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F4D0;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,41
	ctx.r10.s64 = 41;
	// li r4,33
	ctx.r4.s64 = 33;
	// rlwimi r4,r30,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F4F8;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,42
	ctx.r10.s64 = 42;
	// li r4,33
	ctx.r4.s64 = 33;
	// rlwimi r4,r28,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F520;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,43
	ctx.r10.s64 = 43;
	// li r4,33
	ctx.r4.s64 = 33;
	// rlwimi r4,r29,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F548;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,43
	ctx.r10.s64 = 43;
	// li r4,33
	ctx.r4.s64 = 33;
	// rlwimi r4,r3,8,0,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFFFFFF00) | (ctx.r4.u64 & 0xFFFFFFFF000000FF);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F570;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,44
	ctx.r10.s64 = 44;
	// li r4,801
	ctx.r4.s64 = 801;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F594;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,45
	ctx.r10.s64 = 45;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8221eb60
	ctx.lr = 0x8221F5B4;
	sub_8221EB60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x8221f5d0
	if (ctx.cr6.eq) goto loc_8221F5D0;
	// li r4,801
	ctx.r4.s64 = 801;
	// bl 0x8221ba00
	ctx.lr = 0x8221F5CC;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
loc_8221F5D0:
	// li r4,33
	ctx.r4.s64 = 33;
	// bl 0x8221ba00
	ctx.lr = 0x8221F5D8;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// li r10,46
	ctx.r10.s64 = 46;
	// b 0x8221f638
	goto loc_8221F638;
	// li r10,47
	ctx.r10.s64 = 47;
	// b 0x8221f638
	goto loc_8221F638;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// rlwinm r4,r29,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F60C;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// rlwinm r4,r3,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x8221ba00
	ctx.lr = 0x8221F630;
	sub_8221BA00(ctx, base);
	// b 0x8221f644
	goto loc_8221F644;
	// li r10,49
	ctx.r10.s64 = 49;
loc_8221F638:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8221F644:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8221F65C"))) PPC_WEAK_FUNC(sub_8221F65C);
PPC_FUNC_IMPL(__imp__sub_8221F65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F660"))) PPC_WEAK_FUNC(sub_8221F660);
PPC_FUNC_IMPL(__imp__sub_8221F660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8221F668;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82219a20
	ctx.lr = 0x8221F684;
	sub_82219A20(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r1,82
	ctx.r31.s64 = ctx.r1.s64 + 82;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
loc_8221F690:
	// lhz r4,-2(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221f6d8
	if (ctx.cr6.eq) goto loc_8221F6D8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822200a0
	ctx.lr = 0x8221F6A4;
	sub_822200A0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221f6c4
	if (ctx.cr6.eq) goto loc_8221F6C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8221F6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221F6C4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8221f690
	if (ctx.cr6.lt) goto loc_8221F690;
loc_8221F6D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8221F6E0"))) PPC_WEAK_FUNC(sub_8221F6E0);
PPC_FUNC_IMPL(__imp__sub_8221F6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8221F6E8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
loc_8221F6FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f738
	if (ctx.cr6.eq) goto loc_8221F738;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221F71C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// and r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 & ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8221f788
	if (ctx.cr6.eq) goto loc_8221F788;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8221f6fc
	if (ctx.cr6.lt) goto loc_8221F6FC;
loc_8221F738:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r28,36
	ctx.r31.s64 = ctx.r28.s64 + 36;
loc_8221F740:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f77c
	if (ctx.cr6.eq) goto loc_8221F77C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221F760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// and r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 & ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8221f788
	if (ctx.cr6.eq) goto loc_8221F788;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x8221f740
	if (ctx.cr6.lt) goto loc_8221F740;
loc_8221F77C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8221F788:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8221F794"))) PPC_WEAK_FUNC(sub_8221F794);
PPC_FUNC_IMPL(__imp__sub_8221F794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F798"))) PPC_WEAK_FUNC(sub_8221F798);
PPC_FUNC_IMPL(__imp__sub_8221F798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8221F7A0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
loc_8221F7B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f7f0
	if (ctx.cr6.eq) goto loc_8221F7F0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221F7D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8221f840
	if (ctx.cr6.eq) goto loc_8221F840;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8221f7b4
	if (ctx.cr6.lt) goto loc_8221F7B4;
loc_8221F7F0:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r28,36
	ctx.r31.s64 = ctx.r28.s64 + 36;
loc_8221F7F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f834
	if (ctx.cr6.eq) goto loc_8221F834;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221F818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// or r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 | ctx.r30.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8221f840
	if (ctx.cr6.eq) goto loc_8221F840;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x8221f7f8
	if (ctx.cr6.lt) goto loc_8221F7F8;
loc_8221F834:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8221F840:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8221F84C"))) PPC_WEAK_FUNC(sub_8221F84C);
PPC_FUNC_IMPL(__imp__sub_8221F84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F850"))) PPC_WEAK_FUNC(sub_8221F850);
PPC_FUNC_IMPL(__imp__sub_8221F850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8221F858;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// addi r28,r3,36
	ctx.r28.s64 = ctx.r3.s64 + 36;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
loc_8221F8AC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8221f8ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221F8AC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221f660
	ctx.lr = 0x8221F8C4;
	sub_8221F660(ctx, base);
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82219a20
	ctx.lr = 0x8221F8D8;
	sub_82219A20(ctx, base);
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8221F8E0:
	// lbzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221f908
	if (ctx.cr6.eq) goto loc_8221F908;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82220b38
	ctx.lr = 0x8221F8F4;
	sub_82220B38(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x8221f8e0
	if (ctx.cr6.lt) goto loc_8221F8E0;
loc_8221F908:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8221F914"))) PPC_WEAK_FUNC(sub_8221F914);
PPC_FUNC_IMPL(__imp__sub_8221F914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F918"))) PPC_WEAK_FUNC(sub_8221F918);
PPC_FUNC_IMPL(__imp__sub_8221F918) {
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
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x8221f964
	if (ctx.cr6.lt) goto loc_8221F964;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x8221f964
	if (ctx.cr6.eq) goto loc_8221F964;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82080000
	ctx.lr = 0x8221F94C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221f964
	if (ctx.cr6.eq) goto loc_8221F964;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8221f850
	ctx.lr = 0x8221F960;
	sub_8221F850(ctx, base);
	// b 0x8221f968
	goto loc_8221F968;
loc_8221F964:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221F968:
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

__attribute__((alias("__imp__sub_8221F980"))) PPC_WEAK_FUNC(sub_8221F980);
PPC_FUNC_IMPL(__imp__sub_8221F980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8221F988;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8221F99C:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221f9bc
	if (ctx.cr6.eq) goto loc_8221F9BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221fe70
	ctx.lr = 0x8221F9B0;
	sub_8221FE70(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8221F9BC;
	sub_82183E40(ctx, base);
loc_8221F9BC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8221f99c
	if (!ctx.cr0.eq) goto loc_8221F99C;
	// addi r31,r27,32
	ctx.r31.s64 = ctx.r27.s64 + 32;
	// li r30,8
	ctx.r30.s64 = 8;
loc_8221F9D0:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8221f9f0
	if (ctx.cr6.eq) goto loc_8221F9F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822203b8
	ctx.lr = 0x8221F9E4;
	sub_822203B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8221F9F0;
	sub_82183E40(ctx, base);
loc_8221F9F0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x8221f9d0
	if (!ctx.cr0.eq) goto loc_8221F9D0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8221FA04"))) PPC_WEAK_FUNC(sub_8221FA04);
PPC_FUNC_IMPL(__imp__sub_8221FA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FA08"))) PPC_WEAK_FUNC(sub_8221FA08);
PPC_FUNC_IMPL(__imp__sub_8221FA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-3064
	ctx.r10.s64 = ctx.r11.s64 + -3064;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221FA18"))) PPC_WEAK_FUNC(sub_8221FA18);
PPC_FUNC_IMPL(__imp__sub_8221FA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x822170b8
	sub_822170B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FA24"))) PPC_WEAK_FUNC(sub_8221FA24);
PPC_FUNC_IMPL(__imp__sub_8221FA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FA28"))) PPC_WEAK_FUNC(sub_8221FA28);
PPC_FUNC_IMPL(__imp__sub_8221FA28) {
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8221faac
	if (ctx.cr6.eq) goto loc_8221FAAC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8221fb0c
	if (!ctx.cr6.eq) goto loc_8221FB0C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x8221FA54;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221fb0c
	if (ctx.cr6.eq) goto loc_8221FB0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r9,r11,-3064
	ctx.r9.s64 = ctx.r11.s64 + -3064;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r4,r7,-3032
	ctx.r4.s64 = ctx.r7.s64 + -3032;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
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
loc_8221FAAC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x8221FAB4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221fb0c
	if (ctx.cr6.eq) goto loc_8221FB0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-3064
	ctx.r9.s64 = ctx.r11.s64 + -3064;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r8,-3048
	ctx.r5.s64 = ctx.r8.s64 + -3048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
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
loc_8221FB0C:
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

__attribute__((alias("__imp__sub_8221FB24"))) PPC_WEAK_FUNC(sub_8221FB24);
PPC_FUNC_IMPL(__imp__sub_8221FB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FB28"))) PPC_WEAK_FUNC(sub_8221FB28);
PPC_FUNC_IMPL(__imp__sub_8221FB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-3016
	ctx.r10.s64 = ctx.r11.s64 + -3016;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221FB38"))) PPC_WEAK_FUNC(sub_8221FB38);
PPC_FUNC_IMPL(__imp__sub_8221FB38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221FB4C"))) PPC_WEAK_FUNC(sub_8221FB4C);
PPC_FUNC_IMPL(__imp__sub_8221FB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FB50"))) PPC_WEAK_FUNC(sub_8221FB50);
PPC_FUNC_IMPL(__imp__sub_8221FB50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221FB64"))) PPC_WEAK_FUNC(sub_8221FB64);
PPC_FUNC_IMPL(__imp__sub_8221FB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FB68"))) PPC_WEAK_FUNC(sub_8221FB68);
PPC_FUNC_IMPL(__imp__sub_8221FB68) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8208e820
	ctx.lr = 0x8221FB90;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221fba0
	if (ctx.cr6.eq) goto loc_8221FBA0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8221FBA0:
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

__attribute__((alias("__imp__sub_8221FBB4"))) PPC_WEAK_FUNC(sub_8221FBB4);
PPC_FUNC_IMPL(__imp__sub_8221FBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FBB8"))) PPC_WEAK_FUNC(sub_8221FBB8);
PPC_FUNC_IMPL(__imp__sub_8221FBB8) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82217630
	ctx.lr = 0x8221FBE0;
	sub_82217630(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221fbf0
	if (ctx.cr6.eq) goto loc_8221FBF0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8221FBF0:
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

__attribute__((alias("__imp__sub_8221FC04"))) PPC_WEAK_FUNC(sub_8221FC04);
PPC_FUNC_IMPL(__imp__sub_8221FC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FC08"))) PPC_WEAK_FUNC(sub_8221FC08);
PPC_FUNC_IMPL(__imp__sub_8221FC08) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822176c8
	ctx.lr = 0x8221FC30;
	sub_822176C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221fc40
	if (ctx.cr6.eq) goto loc_8221FC40;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8221FC40:
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

__attribute__((alias("__imp__sub_8221FC54"))) PPC_WEAK_FUNC(sub_8221FC54);
PPC_FUNC_IMPL(__imp__sub_8221FC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FC58"))) PPC_WEAK_FUNC(sub_8221FC58);
PPC_FUNC_IMPL(__imp__sub_8221FC58) {
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8221fccc
	if (!ctx.cr6.eq) goto loc_8221FCCC;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x8221FC7C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221fccc
	if (ctx.cr6.eq) goto loc_8221FCCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3016
	ctx.r9.s64 = ctx.r11.s64 + -3016;
	// addi r8,r10,-3004
	ctx.r8.s64 = ctx.r10.s64 + -3004;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
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
loc_8221FCCC:
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

__attribute__((alias("__imp__sub_8221FCE4"))) PPC_WEAK_FUNC(sub_8221FCE4);
PPC_FUNC_IMPL(__imp__sub_8221FCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FCE8"))) PPC_WEAK_FUNC(sub_8221FCE8);
PPC_FUNC_IMPL(__imp__sub_8221FCE8) {
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
	// cmpwi cr6,r4,100
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 100, ctx.xer);
	// beq cr6,0x8221fdc4
	if (ctx.cr6.eq) goto loc_8221FDC4;
	// cmpwi cr6,r4,101
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 101, ctx.xer);
	// beq cr6,0x8221fd6c
	if (ctx.cr6.eq) goto loc_8221FD6C;
	// cmpwi cr6,r4,102
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 102, ctx.xer);
	// bne cr6,0x8221fe1c
	if (!ctx.cr6.eq) goto loc_8221FE1C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x8221FD1C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221fe1c
	if (ctx.cr6.eq) goto loc_8221FE1C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3016
	ctx.r9.s64 = ctx.r11.s64 + -3016;
	// addi r8,r10,-2968
	ctx.r8.s64 = ctx.r10.s64 + -2968;
	// li r7,102
	ctx.r7.s64 = 102;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
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
loc_8221FD6C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x8221FD74;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221fe1c
	if (ctx.cr6.eq) goto loc_8221FE1C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3016
	ctx.r9.s64 = ctx.r11.s64 + -3016;
	// addi r8,r10,-2980
	ctx.r8.s64 = ctx.r10.s64 + -2980;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,101
	ctx.r7.s64 = 101;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
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
loc_8221FDC4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x8221FDCC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221fe1c
	if (ctx.cr6.eq) goto loc_8221FE1C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3016
	ctx.r9.s64 = ctx.r11.s64 + -3016;
	// addi r8,r10,-2992
	ctx.r8.s64 = ctx.r10.s64 + -2992;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
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
loc_8221FE1C:
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

__attribute__((alias("__imp__sub_8221FE34"))) PPC_WEAK_FUNC(sub_8221FE34);
PPC_FUNC_IMPL(__imp__sub_8221FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FE38"))) PPC_WEAK_FUNC(sub_8221FE38);
PPC_FUNC_IMPL(__imp__sub_8221FE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,100
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 100, ctx.xer);
	// bge cr6,0x8221fe48
	if (!ctx.cr6.lt) goto loc_8221FE48;
	// b 0x8221fc58
	sub_8221FC58(ctx, base);
	return;
loc_8221FE48:
	// cmpwi cr6,r4,200
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 200, ctx.xer);
	// bge cr6,0x8221fe54
	if (!ctx.cr6.lt) goto loc_8221FE54;
	// b 0x8221fce8
	sub_8221FCE8(ctx, base);
	return;
loc_8221FE54:
	// li r11,300
	ctx.r11.s64 = 300;
	// xoris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addc r7,r8,r9
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221FE70"))) PPC_WEAK_FUNC(sub_8221FE70);
PPC_FUNC_IMPL(__imp__sub_8221FE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-2956
	ctx.r10.s64 = ctx.r11.s64 + -2956;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221FE80"))) PPC_WEAK_FUNC(sub_8221FE80);
PPC_FUNC_IMPL(__imp__sub_8221FE80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221FE98"))) PPC_WEAK_FUNC(sub_8221FE98);
PPC_FUNC_IMPL(__imp__sub_8221FE98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221FEA8"))) PPC_WEAK_FUNC(sub_8221FEA8);
PPC_FUNC_IMPL(__imp__sub_8221FEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221FEC4"))) PPC_WEAK_FUNC(sub_8221FEC4);
PPC_FUNC_IMPL(__imp__sub_8221FEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FEC8"))) PPC_WEAK_FUNC(sub_8221FEC8);
PPC_FUNC_IMPL(__imp__sub_8221FEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x822170d0
	sub_822170D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FED4"))) PPC_WEAK_FUNC(sub_8221FED4);
PPC_FUNC_IMPL(__imp__sub_8221FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FED8"))) PPC_WEAK_FUNC(sub_8221FED8);
PPC_FUNC_IMPL(__imp__sub_8221FED8) {
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
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8208e820
	ctx.lr = 0x8221FEF8;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221ff14
	if (ctx.cr6.eq) goto loc_8221FF14;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221ff14
	if (!ctx.cr6.gt) goto loc_8221FF14;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8221FF14:
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

__attribute__((alias("__imp__sub_8221FF28"))) PPC_WEAK_FUNC(sub_8221FF28);
PPC_FUNC_IMPL(__imp__sub_8221FF28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208e820
	ctx.lr = 0x8221FF50;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221ff68
	if (!ctx.cr6.eq) goto loc_8221FF68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208e5d8
	ctx.lr = 0x8221FF60;
	sub_8208E5D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221ff7c
	if (ctx.cr6.eq) goto loc_8221FF7C;
loc_8221FF68:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221ff7c
	if (!ctx.cr6.gt) goto loc_8221FF7C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8221FF7C:
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

__attribute__((alias("__imp__sub_8221FF94"))) PPC_WEAK_FUNC(sub_8221FF94);
PPC_FUNC_IMPL(__imp__sub_8221FF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FF98"))) PPC_WEAK_FUNC(sub_8221FF98);
PPC_FUNC_IMPL(__imp__sub_8221FF98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221FFAC"))) PPC_WEAK_FUNC(sub_8221FFAC);
PPC_FUNC_IMPL(__imp__sub_8221FFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FFB0"))) PPC_WEAK_FUNC(sub_8221FFB0);
PPC_FUNC_IMPL(__imp__sub_8221FFB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// orc r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ~ctx.r10.u64;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221FFC4"))) PPC_WEAK_FUNC(sub_8221FFC4);
PPC_FUNC_IMPL(__imp__sub_8221FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221FFC8"))) PPC_WEAK_FUNC(sub_8221FFC8);
PPC_FUNC_IMPL(__imp__sub_8221FFC8) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82217058
	ctx.lr = 0x8221FFE8;
	sub_82217058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82220004
	if (ctx.cr6.eq) goto loc_82220004;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82220004
	if (!ctx.cr6.gt) goto loc_82220004;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82220004:
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

__attribute__((alias("__imp__sub_82220018"))) PPC_WEAK_FUNC(sub_82220018);
PPC_FUNC_IMPL(__imp__sub_82220018) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822183e8
	ctx.lr = 0x82220038;
	sub_822183E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,8608(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8608);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,8060(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2140);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fnmsubs f10,f0,f13,f12
	ctx.f10.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// bgt cr6,0x8222008c
	if (ctx.cr6.gt) goto loc_8222008C;
	// fmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8222008c
	if (ctx.cr6.lt) goto loc_8222008C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222008C:
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

__attribute__((alias("__imp__sub_822200A0"))) PPC_WEAK_FUNC(sub_822200A0);
PPC_FUNC_IMPL(__imp__sub_822200A0) {
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
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8222039c
	if (ctx.cr6.gt) goto loc_8222039C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8222013c
	// bdzf 4*cr6+eq,0x82220188
	// bdzf 4*cr6+eq,0x822201d4
	// bdzf 4*cr6+eq,0x82220220
	// bdzf 4*cr6+eq,0x8222026c
	// bdzf 4*cr6+eq,0x822202b8
	// bdzf 4*cr6+eq,0x82220304
	// bne cr6,0x82220350
	if (!ctx.cr6.eq) goto loc_82220350;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x822200F8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222039c
	if (ctx.cr6.eq) goto loc_8222039C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r9,r11,-2956
	ctx.r9.s64 = ctx.r11.s64 + -2956;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r8,-2936
	ctx.r5.s64 = ctx.r8.s64 + -2936;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// b 0x822203a0
	goto loc_822203A0;
loc_8222013C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x82220144;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222039c
	if (ctx.cr6.eq) goto loc_8222039C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2956
	ctx.r9.s64 = ctx.r11.s64 + -2956;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r8,-2916
	ctx.r5.s64 = ctx.r8.s64 + -2916;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// b 0x822203a0
	goto loc_822203A0;
loc_82220188:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x82220190;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222039c
	if (ctx.cr6.eq) goto loc_8222039C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r9,r11,-2956
	ctx.r9.s64 = ctx.r11.s64 + -2956;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r8,-2896
	ctx.r6.s64 = ctx.r8.s64 + -2896;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// b 0x822203a0
	goto loc_822203A0;
loc_822201D4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x822201DC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222039c
	if (ctx.cr6.eq) goto loc_8222039C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2956
	ctx.r9.s64 = ctx.r11.s64 + -2956;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r8,-2876
	ctx.r5.s64 = ctx.r8.s64 + -2876;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// b 0x822203a0
	goto loc_822203A0;
loc_82220220:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x82220228;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222039c
	if (ctx.cr6.eq) goto loc_8222039C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2956
	ctx.r9.s64 = ctx.r11.s64 + -2956;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r8,-2856
	ctx.r6.s64 = ctx.r8.s64 + -2856;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// b 0x822203a0
	goto loc_822203A0;
loc_8222026C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x82220274;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222039c
	if (ctx.cr6.eq) goto loc_8222039C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2956
	ctx.r9.s64 = ctx.r11.s64 + -2956;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r8,-2836
	ctx.r6.s64 = ctx.r8.s64 + -2836;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// b 0x822203a0
	goto loc_822203A0;
loc_822202B8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x822202C0;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222039c
	if (ctx.cr6.eq) goto loc_8222039C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2956
	ctx.r9.s64 = ctx.r11.s64 + -2956;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r8,-2816
	ctx.r6.s64 = ctx.r8.s64 + -2816;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// b 0x822203a0
	goto loc_822203A0;
loc_82220304:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x8222030C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222039c
	if (ctx.cr6.eq) goto loc_8222039C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2956
	ctx.r9.s64 = ctx.r11.s64 + -2956;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r8,-2796
	ctx.r6.s64 = ctx.r8.s64 + -2796;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// b 0x822203a0
	goto loc_822203A0;
loc_82220350:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x82220358;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222039c
	if (ctx.cr6.eq) goto loc_8222039C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2956
	ctx.r9.s64 = ctx.r11.s64 + -2956;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r8,-2776
	ctx.r6.s64 = ctx.r8.s64 + -2776;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// b 0x822203a0
	goto loc_822203A0;
loc_8222039C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822203A0:
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

__attribute__((alias("__imp__sub_822203B8"))) PPC_WEAK_FUNC(sub_822203B8);
PPC_FUNC_IMPL(__imp__sub_822203B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-2756
	ctx.r10.s64 = ctx.r11.s64 + -2756;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822203C8"))) PPC_WEAK_FUNC(sub_822203C8);
PPC_FUNC_IMPL(__imp__sub_822203C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822203DC"))) PPC_WEAK_FUNC(sub_822203DC);
PPC_FUNC_IMPL(__imp__sub_822203DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822203E0"))) PPC_WEAK_FUNC(sub_822203E0);
PPC_FUNC_IMPL(__imp__sub_822203E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822203F4"))) PPC_WEAK_FUNC(sub_822203F4);
PPC_FUNC_IMPL(__imp__sub_822203F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822203F8"))) PPC_WEAK_FUNC(sub_822203F8);
PPC_FUNC_IMPL(__imp__sub_822203F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220418"))) PPC_WEAK_FUNC(sub_82220418);
PPC_FUNC_IMPL(__imp__sub_82220418) {
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
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8208e820
	ctx.lr = 0x82220438;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82220448
	if (ctx.cr6.eq) goto loc_82220448;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82220448:
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

__attribute__((alias("__imp__sub_8222045C"))) PPC_WEAK_FUNC(sub_8222045C);
PPC_FUNC_IMPL(__imp__sub_8222045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220460"))) PPC_WEAK_FUNC(sub_82220460);
PPC_FUNC_IMPL(__imp__sub_82220460) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208dc50
	ctx.lr = 0x82220488;
	sub_8208DC50(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822204a4
	if (!ctx.cr6.eq) goto loc_822204A4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82220500
	if (ctx.cr6.eq) goto loc_82220500;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x822204fc
	goto loc_822204FC;
loc_822204A4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822204c8
	if (!ctx.cr6.eq) goto loc_822204C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82217810
	ctx.lr = 0x822204B8;
	sub_82217810(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82220500
	if (ctx.cr6.eq) goto loc_82220500;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x822204fc
	goto loc_822204FC;
loc_822204C8:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82220500
	if (!ctx.cr6.eq) goto loc_82220500;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82217630
	ctx.lr = 0x822204DC;
	sub_82217630(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822204f8
	if (!ctx.cr6.eq) goto loc_822204F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822176c8
	ctx.lr = 0x822204F0;
	sub_822176C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82220500
	if (ctx.cr6.eq) goto loc_82220500;
loc_822204F8:
	// li r11,8
	ctx.r11.s64 = 8;
loc_822204FC:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82220500:
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

__attribute__((alias("__imp__sub_82220518"))) PPC_WEAK_FUNC(sub_82220518);
PPC_FUNC_IMPL(__imp__sub_82220518) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82220558
	if (!ctx.cr6.eq) goto loc_82220558;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,1328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82220558
	if (!ctx.cr6.eq) goto loc_82220558;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82220558:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82220578
	if (!ctx.cr6.eq) goto loc_82220578;
	// bl 0x822181d8
	ctx.lr = 0x82220568;
	sub_822181D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82220578
	if (ctx.cr6.eq) goto loc_82220578;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82220578:
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

__attribute__((alias("__imp__sub_8222058C"))) PPC_WEAK_FUNC(sub_8222058C);
PPC_FUNC_IMPL(__imp__sub_8222058C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220590"))) PPC_WEAK_FUNC(sub_82220590);
PPC_FUNC_IMPL(__imp__sub_82220590) {
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
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x822205cc
	if (!ctx.cr6.eq) goto loc_822205CC;
	// bl 0x8208e058
	ctx.lr = 0x822205BC;
	sub_8208E058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822205cc
	if (ctx.cr6.eq) goto loc_822205CC;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_822205CC:
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

__attribute__((alias("__imp__sub_822205E0"))) PPC_WEAK_FUNC(sub_822205E0);
PPC_FUNC_IMPL(__imp__sub_822205E0) {
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82220638
	if (!ctx.cr6.eq) goto loc_82220638;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82217fb8
	ctx.lr = 0x82220614;
	sub_82217FB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82220638
	if (!ctx.cr6.eq) goto loc_82220638;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82218040
	ctx.lr = 0x82220628;
	sub_82218040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82220638
	if (!ctx.cr6.eq) goto loc_82220638;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82220638:
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

__attribute__((alias("__imp__sub_82220650"))) PPC_WEAK_FUNC(sub_82220650);
PPC_FUNC_IMPL(__imp__sub_82220650) {
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822206a8
	if (!ctx.cr6.eq) goto loc_822206A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822180c8
	ctx.lr = 0x82220684;
	sub_822180C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822206a8
	if (!ctx.cr6.eq) goto loc_822206A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82218150
	ctx.lr = 0x82220698;
	sub_82218150(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822206a8
	if (!ctx.cr6.eq) goto loc_822206A8;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_822206A8:
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

__attribute__((alias("__imp__sub_822206C0"))) PPC_WEAK_FUNC(sub_822206C0);
PPC_FUNC_IMPL(__imp__sub_822206C0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bne cr6,0x822206fc
	if (!ctx.cr6.eq) goto loc_822206FC;
	// bl 0x8208e820
	ctx.lr = 0x822206EC;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82220718
	if (!ctx.cr6.eq) goto loc_82220718;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82220714
	goto loc_82220714;
loc_822206FC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82220718
	if (!ctx.cr6.eq) goto loc_82220718;
	// bl 0x8208e820
	ctx.lr = 0x82220708;
	sub_8208E820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82220718
	if (ctx.cr6.eq) goto loc_82220718;
	// li r11,8
	ctx.r11.s64 = 8;
loc_82220714:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82220718:
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

__attribute__((alias("__imp__sub_8222072C"))) PPC_WEAK_FUNC(sub_8222072C);
PPC_FUNC_IMPL(__imp__sub_8222072C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220730"))) PPC_WEAK_FUNC(sub_82220730);
PPC_FUNC_IMPL(__imp__sub_82220730) {
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
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8208e0b0
	ctx.lr = 0x82220750;
	sub_8208E0B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82220760
	if (!ctx.cr6.eq) goto loc_82220760;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82220760:
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

__attribute__((alias("__imp__sub_82220774"))) PPC_WEAK_FUNC(sub_82220774);
PPC_FUNC_IMPL(__imp__sub_82220774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220778"))) PPC_WEAK_FUNC(sub_82220778);
PPC_FUNC_IMPL(__imp__sub_82220778) {
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
	// cmpwi cr6,r4,50
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 50, ctx.xer);
	// bgt cr6,0x8222090c
	if (ctx.cr6.gt) goto loc_8222090C;
	// beq cr6,0x822208b4
	if (ctx.cr6.eq) goto loc_822208B4;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82220860
	if (ctx.cr6.eq) goto loc_82220860;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82220808
	if (ctx.cr6.eq) goto loc_82220808;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bne cr6,0x82220a2c
	if (!ctx.cr6.eq) goto loc_82220A2C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x822207B8;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220a2c
	if (ctx.cr6.eq) goto loc_82220A2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-2756
	ctx.r9.s64 = ctx.r11.s64 + -2756;
	// addi r8,r10,-2708
	ctx.r8.s64 = ctx.r10.s64 + -2708;
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
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
loc_82220808:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x82220810;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220a2c
	if (ctx.cr6.eq) goto loc_82220A2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-2756
	ctx.r9.s64 = ctx.r11.s64 + -2756;
	// addi r8,r10,-2724
	ctx.r8.s64 = ctx.r10.s64 + -2724;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
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
loc_82220860:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x82220868;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220a2c
	if (ctx.cr6.eq) goto loc_82220A2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-2756
	ctx.r9.s64 = ctx.r11.s64 + -2756;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r10,-2740
	ctx.r8.s64 = ctx.r10.s64 + -2740;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
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
loc_822208B4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x822208BC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220a2c
	if (ctx.cr6.eq) goto loc_82220A2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-2756
	ctx.r9.s64 = ctx.r11.s64 + -2756;
	// addi r8,r10,-2692
	ctx.r8.s64 = ctx.r10.s64 + -2692;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,50
	ctx.r7.s64 = 50;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
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
loc_8222090C:
	// cmpwi cr6,r4,51
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 51, ctx.xer);
	// beq cr6,0x822209d4
	if (ctx.cr6.eq) goto loc_822209D4;
	// cmpwi cr6,r4,52
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 52, ctx.xer);
	// beq cr6,0x8222097c
	if (ctx.cr6.eq) goto loc_8222097C;
	// cmpwi cr6,r4,53
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 53, ctx.xer);
	// bne cr6,0x82220a2c
	if (!ctx.cr6.eq) goto loc_82220A2C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x8222092C;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220a2c
	if (ctx.cr6.eq) goto loc_82220A2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-2756
	ctx.r9.s64 = ctx.r11.s64 + -2756;
	// addi r8,r10,-2644
	ctx.r8.s64 = ctx.r10.s64 + -2644;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,53
	ctx.r7.s64 = 53;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
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
loc_8222097C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x82220984;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220a2c
	if (ctx.cr6.eq) goto loc_82220A2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-2756
	ctx.r9.s64 = ctx.r11.s64 + -2756;
	// addi r8,r10,-2660
	ctx.r8.s64 = ctx.r10.s64 + -2660;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,52
	ctx.r7.s64 = 52;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
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
loc_822209D4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x822209DC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220a2c
	if (ctx.cr6.eq) goto loc_82220A2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-2756
	ctx.r9.s64 = ctx.r11.s64 + -2756;
	// addi r8,r10,-2676
	ctx.r8.s64 = ctx.r10.s64 + -2676;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,51
	ctx.r7.s64 = 51;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
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
loc_82220A2C:
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

__attribute__((alias("__imp__sub_82220A44"))) PPC_WEAK_FUNC(sub_82220A44);
PPC_FUNC_IMPL(__imp__sub_82220A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220A48"))) PPC_WEAK_FUNC(sub_82220A48);
PPC_FUNC_IMPL(__imp__sub_82220A48) {
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
	// cmpwi cr6,r4,100
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 100, ctx.xer);
	// beq cr6,0x82220ac4
	if (ctx.cr6.eq) goto loc_82220AC4;
	// cmpwi cr6,r4,150
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 150, ctx.xer);
	// bne cr6,0x82220b1c
	if (!ctx.cr6.eq) goto loc_82220B1C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x82220A74;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220b1c
	if (ctx.cr6.eq) goto loc_82220B1C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-2756
	ctx.r9.s64 = ctx.r11.s64 + -2756;
	// addi r8,r10,-2612
	ctx.r8.s64 = ctx.r10.s64 + -2612;
	// li r7,150
	ctx.r7.s64 = 150;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
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
loc_82220AC4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x82220ACC;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220b1c
	if (ctx.cr6.eq) goto loc_82220B1C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-2756
	ctx.r9.s64 = ctx.r11.s64 + -2756;
	// addi r8,r10,-2628
	ctx.r8.s64 = ctx.r10.s64 + -2628;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
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
loc_82220B1C:
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

__attribute__((alias("__imp__sub_82220B34"))) PPC_WEAK_FUNC(sub_82220B34);
PPC_FUNC_IMPL(__imp__sub_82220B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220B38"))) PPC_WEAK_FUNC(sub_82220B38);
PPC_FUNC_IMPL(__imp__sub_82220B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,100
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 100, ctx.xer);
	// bge cr6,0x82220b48
	if (!ctx.cr6.lt) goto loc_82220B48;
	// b 0x82220778
	sub_82220778(ctx, base);
	return;
loc_82220B48:
	// cmpwi cr6,r4,200
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 200, ctx.xer);
	// bge cr6,0x82220b54
	if (!ctx.cr6.lt) goto loc_82220B54;
	// b 0x82220a48
	sub_82220A48(ctx, base);
	return;
loc_82220B54:
	// li r11,300
	ctx.r11.s64 = 300;
	// xoris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addc r7,r8,r9
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220B70"))) PPC_WEAK_FUNC(sub_82220B70);
PPC_FUNC_IMPL(__imp__sub_82220B70) {
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
	ctx.lr = 0x82220B80;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82220b98
	if (ctx.cr6.eq) goto loc_82220B98;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82183448
	ctx.lr = 0x82220B94;
	sub_82183448(ctx, base);
	// b 0x82220ba0
	goto loc_82220BA0;
loc_82220B98:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x82220BA0;
	sub_821845A0(ctx, base);
loc_82220BA0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82220bd4
	if (ctx.cr6.eq) goto loc_82220BD4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r3,-748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82220BD4:
	// stw r11,-748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -748, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220BE8"))) PPC_WEAK_FUNC(sub_82220BE8);
PPC_FUNC_IMPL(__imp__sub_82220BE8) {
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
	// lwz r31,-748(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82220c2c
	if (ctx.cr6.eq) goto loc_82220C2C;
	// bl 0x82222520
	ctx.lr = 0x82220C14;
	sub_82222520(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82220c2c
	if (ctx.cr6.eq) goto loc_82220C2C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82220c30
	goto loc_82220C30;
loc_82220C2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82220C30:
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

__attribute__((alias("__imp__sub_82220C48"))) PPC_WEAK_FUNC(sub_82220C48);
PPC_FUNC_IMPL(__imp__sub_82220C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220C70"))) PPC_WEAK_FUNC(sub_82220C70);
PPC_FUNC_IMPL(__imp__sub_82220C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r3,-744(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -744);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82221e10
	sub_82221E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220CA4"))) PPC_WEAK_FUNC(sub_82220CA4);
PPC_FUNC_IMPL(__imp__sub_82220CA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220CA8"))) PPC_WEAK_FUNC(sub_82220CA8);
PPC_FUNC_IMPL(__imp__sub_82220CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82220CB0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x823ab568
	ctx.lr = 0x82220CC0;
	sub_823AB568(ctx, base);
	// bl 0x82183078
	ctx.lr = 0x82220CC4;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821837d0
	ctx.lr = 0x82220CD0;
	sub_821837D0(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229370
	ctx.lr = 0x82220CE0;
	sub_82229370(ctx, base);
	// bl 0x82224530
	ctx.lr = 0x82220CE4;
	sub_82224530(ctx, base);
	// clrlwi r29,r3,31
	ctx.r29.u64 = ctx.r3.u32 & 0x1;
	// bl 0x82227930
	ctx.lr = 0x82220CEC;
	sub_82227930(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// and r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 & ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82220D00;
	sub_821837D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82220D0C"))) PPC_WEAK_FUNC(sub_82220D0C);
PPC_FUNC_IMPL(__imp__sub_82220D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220D10"))) PPC_WEAK_FUNC(sub_82220D10);
PPC_FUNC_IMPL(__imp__sub_82220D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220D20"))) PPC_WEAK_FUNC(sub_82220D20);
PPC_FUNC_IMPL(__imp__sub_82220D20) {
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
	// bl 0x8215bd60
	ctx.lr = 0x82220D38;
	sub_8215BD60(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82220d5c
	if (ctx.cr6.eq) goto loc_82220D5C;
loc_82220D44:
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
loc_82220D5C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82220d44
	if (!ctx.cr6.eq) goto loc_82220D44;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82220d7c
	if (!ctx.cr6.eq) goto loc_82220D7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82220D7C:
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

__attribute__((alias("__imp__sub_82220D94"))) PPC_WEAK_FUNC(sub_82220D94);
PPC_FUNC_IMPL(__imp__sub_82220D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220D98"))) PPC_WEAK_FUNC(sub_82220D98);
PPC_FUNC_IMPL(__imp__sub_82220D98) {
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
	// bl 0x822294d0
	ctx.lr = 0x82220DB4;
	sub_822294D0(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r11,-748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82220df4
	if (!ctx.cr6.eq) goto loc_82220DF4;
	// bl 0x82183078
	ctx.lr = 0x82220DC8;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821837d0
	ctx.lr = 0x82220DD4;
	sub_821837D0(ctx, base);
	// bl 0x82220b70
	ctx.lr = 0x82220DD8;
	sub_82220B70(ctx, base);
	// lwz r3,-748(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -748);
	// bl 0x82220ca8
	ctx.lr = 0x82220DE0;
	sub_82220CA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82220DEC;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82220df8
	goto loc_82220DF8;
loc_82220DF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82220DF8:
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

__attribute__((alias("__imp__sub_82220E10"))) PPC_WEAK_FUNC(sub_82220E10);
PPC_FUNC_IMPL(__imp__sub_82220E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82220E18;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220e80
	if (ctx.cr6.eq) goto loc_82220E80;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82220e48
	if (ctx.cr6.eq) goto loc_82220E48;
	// bl 0x822279a0
	ctx.lr = 0x82220E44;
	sub_822279A0(ctx, base);
	// clrlwi r29,r3,31
	ctx.r29.u64 = ctx.r3.u32 & 0x1;
loc_82220E48:
	// bl 0x82222558
	ctx.lr = 0x82220E4C;
	sub_82222558(ctx, base);
	// and r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 & ctx.r29.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82220e7c
	if (ctx.cr6.eq) goto loc_82220E7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822292e8
	ctx.lr = 0x82220E60;
	sub_822292E8(ctx, base);
	// lwz r3,-748(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -748);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82220e74
	if (ctx.cr6.eq) goto loc_82220E74;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82220E74;
	sub_82183E40(ctx, base);
loc_82220E74:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-748(r30)
	PPC_STORE_U32(ctx.r30.u32 + -748, ctx.r11.u32);
loc_82220E7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82220E80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82220E88"))) PPC_WEAK_FUNC(sub_82220E88);
PPC_FUNC_IMPL(__imp__sub_82220E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82220E90;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82220ed0
	if (!ctx.cr6.eq) goto loc_82220ED0;
	// bl 0x8215bd08
	ctx.lr = 0x82220EAC;
	sub_8215BD08(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82220ed0
	if (ctx.cr6.lt) goto loc_82220ED0;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// lwz r11,21796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21796);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82220ed0
	if (!ctx.cr6.lt) goto loc_82220ED0;
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
loc_82220ED0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82220f2c
	if (ctx.cr6.eq) goto loc_82220F2C;
	// bl 0x8215bd08
	ctx.lr = 0x82220EE0;
	sub_8215BD08(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,-8460(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5650
	ctx.lr = 0x82220EF8;
	sub_820E5650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82220f24
	if (ctx.cr6.eq) goto loc_82220F24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5670
	ctx.lr = 0x82220F0C;
	sub_820E5670(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82220f34
	if (ctx.cr6.lt) goto loc_82220F34;
	// bne cr6,0x82220f2c
	if (!ctx.cr6.eq) goto loc_82220F2C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82220f2c
	if (!ctx.cr6.eq) goto loc_82220F2C;
loc_82220F24:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_82220F2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82220F34:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82220f2c
	if (ctx.cr6.eq) goto loc_82220F2C;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82220F48"))) PPC_WEAK_FUNC(sub_82220F48);
PPC_FUNC_IMPL(__imp__sub_82220F48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82220fc8
	if (ctx.cr6.eq) goto loc_82220FC8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82220fa4
	if (ctx.cr6.eq) goto loc_82220FA4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82220ff8
	if (!ctx.cr6.eq) goto loc_82220FF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82224fc0
	ctx.lr = 0x82220F80;
	sub_82224FC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82220ff8
	if (ctx.cr6.eq) goto loc_82220FF8;
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
loc_82220FA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82220e88
	ctx.lr = 0x82220FAC;
	sub_82220E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82220d20
	ctx.lr = 0x82220FB4;
	sub_82220D20(ctx, base);
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
loc_82220FC8:
	// bl 0x822225c8
	ctx.lr = 0x82220FCC;
	sub_822225C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82220ff8
	if (ctx.cr6.eq) goto loc_82220FF8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220ff8
	if (ctx.cr6.eq) goto loc_82220FF8;
	// bl 0x8215bd60
	ctx.lr = 0x82220FE8;
	sub_8215BD60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82220FF8:
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

__attribute__((alias("__imp__sub_8222100C"))) PPC_WEAK_FUNC(sub_8222100C);
PPC_FUNC_IMPL(__imp__sub_8222100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221010"))) PPC_WEAK_FUNC(sub_82221010);
PPC_FUNC_IMPL(__imp__sub_82221010) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,-748(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222104c
	if (ctx.cr6.eq) goto loc_8222104C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82220f48
	ctx.lr = 0x8222103C;
	sub_82220F48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8222104C:
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

__attribute__((alias("__imp__sub_82221060"))) PPC_WEAK_FUNC(sub_82221060);
PPC_FUNC_IMPL(__imp__sub_82221060) {
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
	// bl 0x82354838
	ctx.lr = 0x82221078;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221088
	if (ctx.cr6.eq) goto loc_82221088;
	// extsb r4,r31
	ctx.r4.s64 = ctx.r31.s8;
	// bl 0x82354858
	ctx.lr = 0x82221088;
	sub_82354858(ctx, base);
loc_82221088:
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

__attribute__((alias("__imp__sub_8222109C"))) PPC_WEAK_FUNC(sub_8222109C);
PPC_FUNC_IMPL(__imp__sub_8222109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822210A0"))) PPC_WEAK_FUNC(sub_822210A0);
PPC_FUNC_IMPL(__imp__sub_822210A0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x822210B8;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822210d8
	if (ctx.cr6.eq) goto loc_822210D8;
	// bl 0x823554e8
	ctx.lr = 0x822210C4;
	sub_823554E8(ctx, base);
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
loc_822210D8:
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

__attribute__((alias("__imp__sub_822210F0"))) PPC_WEAK_FUNC(sub_822210F0);
PPC_FUNC_IMPL(__imp__sub_822210F0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x82221110;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221120
	if (ctx.cr6.eq) goto loc_82221120;
	// bl 0x823554e8
	ctx.lr = 0x8222111C;
	sub_823554E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82221120:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82221144"))) PPC_WEAK_FUNC(sub_82221144);
PPC_FUNC_IMPL(__imp__sub_82221144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221148"))) PPC_WEAK_FUNC(sub_82221148);
PPC_FUNC_IMPL(__imp__sub_82221148) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x82221160;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221180
	if (ctx.cr6.eq) goto loc_82221180;
	// bl 0x82355530
	ctx.lr = 0x8222116C;
	sub_82355530(ctx, base);
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
loc_82221180:
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

__attribute__((alias("__imp__sub_82221198"))) PPC_WEAK_FUNC(sub_82221198);
PPC_FUNC_IMPL(__imp__sub_82221198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822211A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x822211B4;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822211d0
	if (ctx.cr6.eq) goto loc_822211D0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82354980
	ctx.lr = 0x822211C8;
	sub_82354980(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_822211D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822211DC"))) PPC_WEAK_FUNC(sub_822211DC);
PPC_FUNC_IMPL(__imp__sub_822211DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822211E0"))) PPC_WEAK_FUNC(sub_822211E0);
PPC_FUNC_IMPL(__imp__sub_822211E0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x82221200;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221214
	if (ctx.cr6.eq) goto loc_82221214;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82354990
	ctx.lr = 0x82221210;
	sub_82354990(ctx, base);
	// b 0x82221218
	goto loc_82221218;
loc_82221214:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82221218:
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

__attribute__((alias("__imp__sub_82221230"))) PPC_WEAK_FUNC(sub_82221230);
PPC_FUNC_IMPL(__imp__sub_82221230) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x82221250;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221264
	if (ctx.cr6.eq) goto loc_82221264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82354998
	ctx.lr = 0x82221260;
	sub_82354998(ctx, base);
	// b 0x82221268
	goto loc_82221268;
loc_82221264:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82221268:
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

__attribute__((alias("__imp__sub_82221280"))) PPC_WEAK_FUNC(sub_82221280);
PPC_FUNC_IMPL(__imp__sub_82221280) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x822212A0;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822212b8
	if (ctx.cr6.eq) goto loc_822212B8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82354890
	ctx.lr = 0x822212B0;
	sub_82354890(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822212bc
	goto loc_822212BC;
loc_822212B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822212BC:
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

__attribute__((alias("__imp__sub_822212D4"))) PPC_WEAK_FUNC(sub_822212D4);
PPC_FUNC_IMPL(__imp__sub_822212D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822212D8"))) PPC_WEAK_FUNC(sub_822212D8);
PPC_FUNC_IMPL(__imp__sub_822212D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822212E0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x822212F4;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222133c
	if (ctx.cr6.eq) goto loc_8222133C;
	// bl 0x82354838
	ctx.lr = 0x82221300;
	sub_82354838(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222133c
	if (ctx.cr6.eq) goto loc_8222133C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229528
	ctx.lr = 0x82221314;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355000
	ctx.lr = 0x82221320;
	sub_82355000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82229678
	ctx.lr = 0x82221330;
	sub_82229678(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8222133C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82221348"))) PPC_WEAK_FUNC(sub_82221348);
PPC_FUNC_IMPL(__imp__sub_82221348) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x822296a8
	sub_822296A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221350"))) PPC_WEAK_FUNC(sub_82221350);
PPC_FUNC_IMPL(__imp__sub_82221350) {
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
	// li r31,0
	ctx.r31.s64 = 0;
loc_8222136C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229640
	ctx.lr = 0x82221374;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82221380
	if (ctx.cr6.eq) goto loc_82221380;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82221380:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x8222136c
	if (ctx.cr6.lt) goto loc_8222136C;
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

__attribute__((alias("__imp__sub_822213A8"))) PPC_WEAK_FUNC(sub_822213A8);
PPC_FUNC_IMPL(__imp__sub_822213A8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x822213C8;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822213e4
	if (ctx.cr6.eq) goto loc_822213E4;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82355220
	ctx.lr = 0x822213E0;
	sub_82355220(ctx, base);
	// b 0x822213e8
	goto loc_822213E8;
loc_822213E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822213E8:
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

__attribute__((alias("__imp__sub_82221400"))) PPC_WEAK_FUNC(sub_82221400);
PPC_FUNC_IMPL(__imp__sub_82221400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82221408;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x82221418;
	sub_82354838(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221464
	if (ctx.cr6.eq) goto loc_82221464;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82354908
	ctx.lr = 0x8222142C;
	sub_82354908(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222143c
	if (!ctx.cr6.eq) goto loc_8222143C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8222143C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823552c0
	ctx.lr = 0x82221454;
	sub_823552C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r29,r9,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_82221464:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82221470"))) PPC_WEAK_FUNC(sub_82221470);
PPC_FUNC_IMPL(__imp__sub_82221470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82221478;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x8222148C;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822214a8
	if (ctx.cr6.eq) goto loc_822214A8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82354f48
	ctx.lr = 0x822214A0;
	sub_82354F48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_822214A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822214B4"))) PPC_WEAK_FUNC(sub_822214B4);
PPC_FUNC_IMPL(__imp__sub_822214B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822214B8"))) PPC_WEAK_FUNC(sub_822214B8);
PPC_FUNC_IMPL(__imp__sub_822214B8) {
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
	// bl 0x82354838
	ctx.lr = 0x822214D4;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822214f8
	if (ctx.cr6.eq) goto loc_822214F8;
	// bl 0x82355600
	ctx.lr = 0x822214E4;
	sub_82355600(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822214f8
	if (ctx.cr6.eq) goto loc_822214F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355318
	ctx.lr = 0x822214F4;
	sub_82355318(ctx, base);
	// b 0x822214fc
	goto loc_822214FC;
loc_822214F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822214FC:
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

__attribute__((alias("__imp__sub_82221514"))) PPC_WEAK_FUNC(sub_82221514);
PPC_FUNC_IMPL(__imp__sub_82221514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221518"))) PPC_WEAK_FUNC(sub_82221518);
PPC_FUNC_IMPL(__imp__sub_82221518) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x82221538;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222154c
	if (ctx.cr6.eq) goto loc_8222154C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82354908
	ctx.lr = 0x82221548;
	sub_82354908(ctx, base);
	// b 0x82221550
	goto loc_82221550;
loc_8222154C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82221550:
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

__attribute__((alias("__imp__sub_82221568"))) PPC_WEAK_FUNC(sub_82221568);
PPC_FUNC_IMPL(__imp__sub_82221568) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x82221580;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822215a0
	if (ctx.cr6.eq) goto loc_822215A0;
	// bl 0x82354ef8
	ctx.lr = 0x8222158C;
	sub_82354EF8(ctx, base);
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
loc_822215A0:
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

__attribute__((alias("__imp__sub_822215B8"))) PPC_WEAK_FUNC(sub_822215B8);
PPC_FUNC_IMPL(__imp__sub_822215B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822215C0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x822215D4;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822215f8
	if (ctx.cr6.eq) goto loc_822215F8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82355128
	ctx.lr = 0x822215F0;
	sub_82355128(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_822215F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82221604"))) PPC_WEAK_FUNC(sub_82221604);
PPC_FUNC_IMPL(__imp__sub_82221604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221608"))) PPC_WEAK_FUNC(sub_82221608);
PPC_FUNC_IMPL(__imp__sub_82221608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82221610;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x82221624;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222164c
	if (ctx.cr6.eq) goto loc_8222164C;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82355178
	ctx.lr = 0x82221644;
	sub_82355178(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8222164C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82221658"))) PPC_WEAK_FUNC(sub_82221658);
PPC_FUNC_IMPL(__imp__sub_82221658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82221660;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x82221674;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221698
	if (ctx.cr6.eq) goto loc_82221698;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823551d0
	ctx.lr = 0x82221690;
	sub_823551D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82221698:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822216A4"))) PPC_WEAK_FUNC(sub_822216A4);
PPC_FUNC_IMPL(__imp__sub_822216A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822216A8"))) PPC_WEAK_FUNC(sub_822216A8);
PPC_FUNC_IMPL(__imp__sub_822216A8) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82354838
	ctx.lr = 0x822216C8;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822216e0
	if (ctx.cr6.eq) goto loc_822216E0;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// bl 0x823550f0
	ctx.lr = 0x822216DC;
	sub_823550F0(ctx, base);
	// b 0x822216e4
	goto loc_822216E4;
loc_822216E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822216E4:
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

__attribute__((alias("__imp__sub_822216FC"))) PPC_WEAK_FUNC(sub_822216FC);
PPC_FUNC_IMPL(__imp__sub_822216FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221700"))) PPC_WEAK_FUNC(sub_82221700);
PPC_FUNC_IMPL(__imp__sub_82221700) {
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
	// bl 0x82354838
	ctx.lr = 0x82221710;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222171c
	if (ctx.cr6.eq) goto loc_8222171C;
	// bl 0x82355120
	ctx.lr = 0x8222171C;
	sub_82355120(ctx, base);
loc_8222171C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222172C"))) PPC_WEAK_FUNC(sub_8222172C);
PPC_FUNC_IMPL(__imp__sub_8222172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221730"))) PPC_WEAK_FUNC(sub_82221730);
PPC_FUNC_IMPL(__imp__sub_82221730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82221738;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8222a6c0
	ctx.lr = 0x82221750;
	sub_8222A6C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82228cb8
	ctx.lr = 0x82221764;
	sub_82228CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a780
	ctx.lr = 0x8222176C;
	sub_8222A780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228b80
	ctx.lr = 0x82221778;
	sub_82228B80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a810
	ctx.lr = 0x82221780;
	sub_8222A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6ef0
	ctx.lr = 0x8222178C;
	sub_821E6EF0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x82221798;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x822217A8;
	sub_82228CB8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,2
	ctx.r27.s64 = 2;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822217f8
	if (!ctx.cr6.gt) goto loc_822217F8;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// ble cr6,0x822217e0
	if (!ctx.cr6.gt) goto loc_822217E0;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x822217f8
	if (!ctx.cr6.eq) goto loc_822217F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ae0
	ctx.lr = 0x822217D0;
	sub_82355AE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ac0
	ctx.lr = 0x822217DC;
	sub_82355AC0(ctx, base);
	// b 0x822217f4
	goto loc_822217F4;
loc_822217E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ad0
	ctx.lr = 0x822217E8;
	sub_82355AD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ab0
	ctx.lr = 0x822217F4;
	sub_82355AB0(ctx, base);
loc_822217F4:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_822217F8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x82221808;
	sub_82228CB8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x82221818;
	sub_82228CB8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x82221824;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x82221834;
	sub_82228CB8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x82221840;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x82221850;
	sub_82228CB8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x8222185C;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x8222186C;
	sub_82228CB8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x82221878;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x82221888;
	sub_82228CB8(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x82221894;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x822218A4;
	sub_82228CB8(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x822218B0;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x822218C0;
	sub_82228CB8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x822218CC;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x822218DC;
	sub_82228CB8(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x822218E8;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x822218F8;
	sub_82228CB8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x82221904;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x82221914;
	sub_82228CB8(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x82221920;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x82221930;
	sub_82228CB8(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x8222193C;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x8222194C;
	sub_82228CB8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x82221958;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x82221968;
	sub_82228CB8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x82221974;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x82221984;
	sub_82228CB8(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a6c0
	ctx.lr = 0x82221990;
	sub_8222A6C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228cb8
	ctx.lr = 0x822219A0;
	sub_82228CB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822219A8"))) PPC_WEAK_FUNC(sub_822219A8);
PPC_FUNC_IMPL(__imp__sub_822219A8) {
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
	// bl 0x822296d0
	ctx.lr = 0x822219B8;
	sub_822296D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822219C8;
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

__attribute__((alias("__imp__sub_822219D8"))) PPC_WEAK_FUNC(sub_822219D8);
PPC_FUNC_IMPL(__imp__sub_822219D8) {
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
	// bl 0x82356318
	ctx.lr = 0x822219F8;
	sub_82356318(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-2484
	ctx.r10.s64 = ctx.r11.s64 + -2484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,168(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r9,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// lwz r8,172(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r8,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r8.u32);
	// lfs f0,176(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lfs f13,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// lfs f12,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,184(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
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

__attribute__((alias("__imp__sub_82221A48"))) PPC_WEAK_FUNC(sub_82221A48);
PPC_FUNC_IMPL(__imp__sub_82221A48) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x82221A64;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82221aa4
	if (!ctx.cr6.eq) goto loc_82221AA4;
	// bl 0x82354838
	ctx.lr = 0x82221A70;
	sub_82354838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221aa4
	if (ctx.cr6.eq) goto loc_82221AA4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354ae0
	ctx.lr = 0x82221A84;
	sub_82354AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82221A90;
	sub_82229558(ctx, base);
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
loc_82221AA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82221ABC"))) PPC_WEAK_FUNC(sub_82221ABC);
PPC_FUNC_IMPL(__imp__sub_82221ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221AC0"))) PPC_WEAK_FUNC(sub_82221AC0);
PPC_FUNC_IMPL(__imp__sub_82221AC0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x82221ADC;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82221b1c
	if (!ctx.cr6.eq) goto loc_82221B1C;
	// bl 0x82354838
	ctx.lr = 0x82221AE8;
	sub_82354838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221b1c
	if (ctx.cr6.eq) goto loc_82221B1C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354bc8
	ctx.lr = 0x82221AFC;
	sub_82354BC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82221B08;
	sub_82229558(ctx, base);
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
loc_82221B1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82221B34"))) PPC_WEAK_FUNC(sub_82221B34);
PPC_FUNC_IMPL(__imp__sub_82221B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221B38"))) PPC_WEAK_FUNC(sub_82221B38);
PPC_FUNC_IMPL(__imp__sub_82221B38) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x82221B50;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221b70
	if (ctx.cr6.eq) goto loc_82221B70;
	// bl 0x823555b8
	ctx.lr = 0x82221B5C;
	sub_823555B8(ctx, base);
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
loc_82221B70:
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

__attribute__((alias("__imp__sub_82221B88"))) PPC_WEAK_FUNC(sub_82221B88);
PPC_FUNC_IMPL(__imp__sub_82221B88) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x82221BA4;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82221bec
	if (!ctx.cr6.eq) goto loc_82221BEC;
	// bl 0x82354838
	ctx.lr = 0x82221BB0;
	sub_82354838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221bec
	if (ctx.cr6.eq) goto loc_82221BEC;
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355708
	ctx.lr = 0x82221BCC;
	sub_82355708(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82221BD8;
	sub_82229558(ctx, base);
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
loc_82221BEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82221C04"))) PPC_WEAK_FUNC(sub_82221C04);
PPC_FUNC_IMPL(__imp__sub_82221C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221C08"))) PPC_WEAK_FUNC(sub_82221C08);
PPC_FUNC_IMPL(__imp__sub_82221C08) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x82221C24;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82221c68
	if (!ctx.cr6.eq) goto loc_82221C68;
	// bl 0x82354838
	ctx.lr = 0x82221C30;
	sub_82354838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221c68
	if (ctx.cr6.eq) goto loc_82221C68;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354d68
	ctx.lr = 0x82221C48;
	sub_82354D68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82221C54;
	sub_82229558(ctx, base);
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
loc_82221C68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

