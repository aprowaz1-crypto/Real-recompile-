#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82221C80"))) PPC_WEAK_FUNC(sub_82221C80);
PPC_FUNC_IMPL(__imp__sub_82221C80) {
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
	ctx.lr = 0x82221C98;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221cb8
	if (ctx.cr6.eq) goto loc_82221CB8;
	// bl 0x82355600
	ctx.lr = 0x82221CA4;
	sub_82355600(ctx, base);
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
loc_82221CB8:
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

__attribute__((alias("__imp__sub_82221CD0"))) PPC_WEAK_FUNC(sub_82221CD0);
PPC_FUNC_IMPL(__imp__sub_82221CD0) {
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
	ctx.lr = 0x82221CE8;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221d08
	if (ctx.cr6.eq) goto loc_82221D08;
	// bl 0x82354958
	ctx.lr = 0x82221CF4;
	sub_82354958(ctx, base);
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
loc_82221D08:
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

__attribute__((alias("__imp__sub_82221D20"))) PPC_WEAK_FUNC(sub_82221D20);
PPC_FUNC_IMPL(__imp__sub_82221D20) {
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
	ctx.lr = 0x82221D3C;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82221d7c
	if (!ctx.cr6.eq) goto loc_82221D7C;
	// bl 0x82354838
	ctx.lr = 0x82221D48;
	sub_82354838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221d7c
	if (ctx.cr6.eq) goto loc_82221D7C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823557f8
	ctx.lr = 0x82221D5C;
	sub_823557F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82221D68;
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
loc_82221D7C:
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

__attribute__((alias("__imp__sub_82221D94"))) PPC_WEAK_FUNC(sub_82221D94);
PPC_FUNC_IMPL(__imp__sub_82221D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221D98"))) PPC_WEAK_FUNC(sub_82221D98);
PPC_FUNC_IMPL(__imp__sub_82221D98) {
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
	ctx.lr = 0x82221DB4;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82221df4
	if (!ctx.cr6.eq) goto loc_82221DF4;
	// bl 0x82354838
	ctx.lr = 0x82221DC0;
	sub_82354838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221df4
	if (ctx.cr6.eq) goto loc_82221DF4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823557a8
	ctx.lr = 0x82221DD4;
	sub_823557A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82221DE0;
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
loc_82221DF4:
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

__attribute__((alias("__imp__sub_82221E0C"))) PPC_WEAK_FUNC(sub_82221E0C);
PPC_FUNC_IMPL(__imp__sub_82221E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221E10"))) PPC_WEAK_FUNC(sub_82221E10);
PPC_FUNC_IMPL(__imp__sub_82221E10) {
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
loc_82221E24:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822297f8
	ctx.lr = 0x82221E30;
	sub_822297F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82221e24
	if (ctx.cr6.lt) goto loc_82221E24;
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

__attribute__((alias("__imp__sub_82221E50"))) PPC_WEAK_FUNC(sub_82221E50);
PPC_FUNC_IMPL(__imp__sub_82221E50) {
	PPC_FUNC_PROLOGUE();
	// b 0x822297c0
	sub_822297C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82221E54"))) PPC_WEAK_FUNC(sub_82221E54);
PPC_FUNC_IMPL(__imp__sub_82221E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221E58"))) PPC_WEAK_FUNC(sub_82221E58);
PPC_FUNC_IMPL(__imp__sub_82221E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82221E60;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82221e88
	if (!ctx.cr6.lt) goto loc_82221E88;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x82221e88
	if (ctx.cr6.lt) goto loc_82221E88;
loc_82221E7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82221E88:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x82221E90;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82221e7c
	if (!ctx.cr6.eq) goto loc_82221E7C;
	// bl 0x82354838
	ctx.lr = 0x82221E9C;
	sub_82354838(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82221e7c
	if (ctx.cr6.eq) goto loc_82221E7C;
	// bl 0x822298a8
	ctx.lr = 0x82221EAC;
	sub_822298A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8222aa40
	ctx.lr = 0x82221EB8;
	sub_8222AA40(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82221ed0
	if (!ctx.cr6.lt) goto loc_82221ED0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82221ed0
	if (ctx.cr6.lt) goto loc_82221ED0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82221ee0
	goto loc_82221EE0;
loc_82221ED0:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,9644
	ctx.r9.s64 = ctx.r11.s64 + 9644;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82221EE0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354cb0
	ctx.lr = 0x82221EF0;
	sub_82354CB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82221EFC;
	sub_82229558(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82221F04"))) PPC_WEAK_FUNC(sub_82221F04);
PPC_FUNC_IMPL(__imp__sub_82221F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221F08"))) PPC_WEAK_FUNC(sub_82221F08);
PPC_FUNC_IMPL(__imp__sub_82221F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82221F10;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82221f3c
	if (!ctx.cr6.lt) goto loc_82221F3C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x82221f3c
	if (ctx.cr6.lt) goto loc_82221F3C;
loc_82221F30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82221F3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x82221F44;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82221f30
	if (!ctx.cr6.eq) goto loc_82221F30;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82221f5c
	if (ctx.cr6.eq) goto loc_82221F5C;
	// bl 0x82229868
	ctx.lr = 0x82221F58;
	sub_82229868(ctx, base);
	// b 0x82221f64
	goto loc_82221F64;
loc_82221F5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229828
	ctx.lr = 0x82221F64;
	sub_82229828(ctx, base);
loc_82221F64:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82221F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8222aa40
	ctx.lr = 0x82221F80;
	sub_8222AA40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82221F8C"))) PPC_WEAK_FUNC(sub_82221F8C);
PPC_FUNC_IMPL(__imp__sub_82221F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221F90"))) PPC_WEAK_FUNC(sub_82221F90);
PPC_FUNC_IMPL(__imp__sub_82221F90) {
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
	// bl 0x82229640
	ctx.lr = 0x82221FA4;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82221fc0
	if (ctx.cr6.eq) goto loc_82221FC0;
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
loc_82221FC0:
	// bl 0x82229888
	ctx.lr = 0x82221FC4;
	sub_82229888(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82221FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221FE8"))) PPC_WEAK_FUNC(sub_82221FE8);
PPC_FUNC_IMPL(__imp__sub_82221FE8) {
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
	// bl 0x82229640
	ctx.lr = 0x82221FFC;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82222018
	if (ctx.cr6.eq) goto loc_82222018;
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
loc_82222018:
	// bl 0x82229888
	ctx.lr = 0x8222201C;
	sub_82229888(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222202C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222040"))) PPC_WEAK_FUNC(sub_82222040);
PPC_FUNC_IMPL(__imp__sub_82222040) {
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
	// bl 0x82229640
	ctx.lr = 0x82222054;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82222084
	if (!ctx.cr6.eq) goto loc_82222084;
	// bl 0x82229868
	ctx.lr = 0x82222060;
	sub_82229868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82222070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82229888
	ctx.lr = 0x82222074;
	sub_82229888(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82222084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82222084:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222094"))) PPC_WEAK_FUNC(sub_82222094);
PPC_FUNC_IMPL(__imp__sub_82222094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222098"))) PPC_WEAK_FUNC(sub_82222098);
PPC_FUNC_IMPL(__imp__sub_82222098) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x822220B4;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822220c4
	if (ctx.cr6.eq) goto loc_822220C4;
loc_822220BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82222110
	goto loc_82222110;
loc_822220C4:
	// bl 0x82354838
	ctx.lr = 0x822220C8;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822220bc
	if (ctx.cr6.eq) goto loc_822220BC;
	// bl 0x822298c8
	ctx.lr = 0x822220D8;
	sub_822298C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822220EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354c70
	ctx.lr = 0x82222104;
	sub_82354C70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82222110;
	sub_82229558(ctx, base);
loc_82222110:
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

__attribute__((alias("__imp__sub_82222128"))) PPC_WEAK_FUNC(sub_82222128);
PPC_FUNC_IMPL(__imp__sub_82222128) {
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
	// bl 0x82229640
	ctx.lr = 0x8222213C;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82222158
	if (!ctx.cr6.eq) goto loc_82222158;
	// bl 0x822298c8
	ctx.lr = 0x82222148;
	sub_822298C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82222158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82222158:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222168"))) PPC_WEAK_FUNC(sub_82222168);
PPC_FUNC_IMPL(__imp__sub_82222168) {
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
	// bl 0x822298c8
	ctx.lr = 0x82222178;
	sub_822298C8(ctx, base);
	// bl 0x823ac6b8
	ctx.lr = 0x8222217C;
	sub_823AC6B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222218C"))) PPC_WEAK_FUNC(sub_8222218C);
PPC_FUNC_IMPL(__imp__sub_8222218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222190"))) PPC_WEAK_FUNC(sub_82222190);
PPC_FUNC_IMPL(__imp__sub_82222190) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82354838
	ctx.lr = 0x822221B0;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822221f4
	if (ctx.cr6.eq) goto loc_822221F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x822221dc
	if (!ctx.cr6.eq) goto loc_822221DC;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,2000
	ctx.r8.s64 = 2000;
	// li r7,1000
	ctx.r7.s64 = 1000;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,34
	ctx.r5.s64 = 34;
	// b 0x822221f0
	goto loc_822221F0;
loc_822221DC:
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
loc_822221F0:
	// bl 0x82354e38
	ctx.lr = 0x822221F4;
	sub_82354E38(ctx, base);
loc_822221F4:
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

__attribute__((alias("__imp__sub_8222220C"))) PPC_WEAK_FUNC(sub_8222220C);
PPC_FUNC_IMPL(__imp__sub_8222220C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222210"))) PPC_WEAK_FUNC(sub_82222210);
PPC_FUNC_IMPL(__imp__sub_82222210) {
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
	ctx.lr = 0x82222228;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222238
	if (ctx.cr6.eq) goto loc_82222238;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82354db8
	ctx.lr = 0x82222238;
	sub_82354DB8(ctx, base);
loc_82222238:
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

__attribute__((alias("__imp__sub_8222224C"))) PPC_WEAK_FUNC(sub_8222224C);
PPC_FUNC_IMPL(__imp__sub_8222224C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222250"))) PPC_WEAK_FUNC(sub_82222250);
PPC_FUNC_IMPL(__imp__sub_82222250) {
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
	ctx.lr = 0x82222268;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222288
	if (ctx.cr6.eq) goto loc_82222288;
	// bl 0x82354df8
	ctx.lr = 0x82222274;
	sub_82354DF8(ctx, base);
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
loc_82222288:
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

__attribute__((alias("__imp__sub_822222A0"))) PPC_WEAK_FUNC(sub_822222A0);
PPC_FUNC_IMPL(__imp__sub_822222A0) {
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
	ctx.lr = 0x822222B8;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822222c8
	if (ctx.cr6.eq) goto loc_822222C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82354e88
	ctx.lr = 0x822222C8;
	sub_82354E88(ctx, base);
loc_822222C8:
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

__attribute__((alias("__imp__sub_822222DC"))) PPC_WEAK_FUNC(sub_822222DC);
PPC_FUNC_IMPL(__imp__sub_822222DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822222E0"))) PPC_WEAK_FUNC(sub_822222E0);
PPC_FUNC_IMPL(__imp__sub_822222E0) {
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
	ctx.lr = 0x822222F8;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222308
	if (ctx.cr6.eq) goto loc_82222308;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82354f90
	ctx.lr = 0x82222308;
	sub_82354F90(ctx, base);
loc_82222308:
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

__attribute__((alias("__imp__sub_8222231C"))) PPC_WEAK_FUNC(sub_8222231C);
PPC_FUNC_IMPL(__imp__sub_8222231C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222320"))) PPC_WEAK_FUNC(sub_82222320);
PPC_FUNC_IMPL(__imp__sub_82222320) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// li r9,2000
	ctx.r9.s64 = 2000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,34
	ctx.r8.s64 = 34;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// sth r8,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r8.u16);
	// sth r7,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r7.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222234C"))) PPC_WEAK_FUNC(sub_8222234C);
PPC_FUNC_IMPL(__imp__sub_8222234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222350"))) PPC_WEAK_FUNC(sub_82222350);
PPC_FUNC_IMPL(__imp__sub_82222350) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222237C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_822223A8"))) PPC_WEAK_FUNC(sub_822223A8);
PPC_FUNC_IMPL(__imp__sub_822223A8) {
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
	// addi r10,r11,-2436
	ctx.r10.s64 = ctx.r11.s64 + -2436;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823574a0
	ctx.lr = 0x822223D4;
	sub_823574A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822223ec
	if (ctx.cr6.eq) goto loc_822223EC;
	// bl 0x82357128
	ctx.lr = 0x822223E8;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822223EC:
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

__attribute__((alias("__imp__sub_82222404"))) PPC_WEAK_FUNC(sub_82222404);
PPC_FUNC_IMPL(__imp__sub_82222404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222408"))) PPC_WEAK_FUNC(sub_82222408);
PPC_FUNC_IMPL(__imp__sub_82222408) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x8222242C;
	sub_82185740(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-2492
	ctx.r10.s64 = ctx.r11.s64 + -2492;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82228c88
	ctx.lr = 0x82222448;
	sub_82228C88(ctx, base);
	// li r11,30201
	ctx.r11.s64 = 30201;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_822224AC"))) PPC_WEAK_FUNC(sub_822224AC);
PPC_FUNC_IMPL(__imp__sub_822224AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822224B0"))) PPC_WEAK_FUNC(sub_822224B0);
PPC_FUNC_IMPL(__imp__sub_822224B0) {
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
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// addi r10,r11,-2492
	ctx.r10.s64 = ctx.r11.s64 + -2492;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8209eda0
	ctx.lr = 0x822224E0;
	sub_8209EDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x822224E8;
	sub_821857F0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82222504
	if (ctx.cr6.eq) goto loc_82222504;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82222500;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82222504:
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

__attribute__((alias("__imp__sub_8222251C"))) PPC_WEAK_FUNC(sub_8222251C);
PPC_FUNC_IMPL(__imp__sub_8222251C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222520"))) PPC_WEAK_FUNC(sub_82222520);
PPC_FUNC_IMPL(__imp__sub_82222520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82222538
	if (!ctx.cr6.eq) goto loc_82222538;
	// blr 
	return;
loc_82222538:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222554"))) PPC_WEAK_FUNC(sub_82222554);
PPC_FUNC_IMPL(__imp__sub_82222554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222558"))) PPC_WEAK_FUNC(sub_82222558);
PPC_FUNC_IMPL(__imp__sub_82222558) {
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
	// bl 0x8222ac60
	ctx.lr = 0x8222256C;
	sub_8222AC60(ctx, base);
	// bl 0x8222a598
	ctx.lr = 0x82222570;
	sub_8222A598(ctx, base);
	// bl 0x82354838
	ctx.lr = 0x82222574;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222580
	if (ctx.cr6.eq) goto loc_82222580;
	// bl 0x823547c8
	ctx.lr = 0x82222580;
	sub_823547C8(ctx, base);
loc_82222580:
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822225a4
	if (ctx.cr6.eq) goto loc_822225A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822225A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822225A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -744, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822225C4"))) PPC_WEAK_FUNC(sub_822225C4);
PPC_FUNC_IMPL(__imp__sub_822225C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822225C8"))) PPC_WEAK_FUNC(sub_822225C8);
PPC_FUNC_IMPL(__imp__sub_822225C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822225e0
	if (!ctx.cr6.eq) goto loc_822225E0;
	// blr 
	return;
loc_822225E0:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822225F4"))) PPC_WEAK_FUNC(sub_822225F4);
PPC_FUNC_IMPL(__imp__sub_822225F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822225F8"))) PPC_WEAK_FUNC(sub_822225F8);
PPC_FUNC_IMPL(__imp__sub_822225F8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x8222261C;
	sub_822AA648(ctx, base);
	// bl 0x82354838
	ctx.lr = 0x82222620;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222660
	if (ctx.cr6.eq) goto loc_82222660;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823579a0
	ctx.lr = 0x82222634;
	sub_823579A0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823558e0
	ctx.lr = 0x82222644;
	sub_823558E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82357bb8
	ctx.lr = 0x8222264C;
	sub_82357BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x823579f8
	ctx.lr = 0x82222660;
	sub_823579F8(ctx, base);
loc_82222660:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_8222267C"))) PPC_WEAK_FUNC(sub_8222267C);
PPC_FUNC_IMPL(__imp__sub_8222267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222680"))) PPC_WEAK_FUNC(sub_82222680);
PPC_FUNC_IMPL(__imp__sub_82222680) {
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
	// bl 0x82354838
	ctx.lr = 0x822226A0;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822226d8
	if (ctx.cr6.eq) goto loc_822226D8;
	// bl 0x82355578
	ctx.lr = 0x822226AC;
	sub_82355578(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822226d8
	if (!ctx.cr6.eq) goto loc_822226D8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// lwz r31,748(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// bl 0x82221350
	ctx.lr = 0x822226C8;
	sub_82221350(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 & ctx.r31.u64;
	// b 0x822226dc
	goto loc_822226DC;
loc_822226D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822226DC:
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

__attribute__((alias("__imp__sub_822226F4"))) PPC_WEAK_FUNC(sub_822226F4);
PPC_FUNC_IMPL(__imp__sub_822226F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822226F8"))) PPC_WEAK_FUNC(sub_822226F8);
PPC_FUNC_IMPL(__imp__sub_822226F8) {
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
	// bl 0x82354838
	ctx.lr = 0x82222718;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222750
	if (ctx.cr6.eq) goto loc_82222750;
	// bl 0x82355578
	ctx.lr = 0x82222724;
	sub_82355578(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82222750
	if (ctx.cr6.eq) goto loc_82222750;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// lwz r31,748(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// bl 0x82221350
	ctx.lr = 0x82222740;
	sub_82221350(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 & ctx.r31.u64;
	// b 0x82222754
	goto loc_82222754;
loc_82222750:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82222754:
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

__attribute__((alias("__imp__sub_8222276C"))) PPC_WEAK_FUNC(sub_8222276C);
PPC_FUNC_IMPL(__imp__sub_8222276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222770"))) PPC_WEAK_FUNC(sub_82222770);
PPC_FUNC_IMPL(__imp__sub_82222770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82222778;
	sub_82248788(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x8222278C;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822228a8
	if (ctx.cr6.eq) goto loc_822228A8;
	// bl 0x82355530
	ctx.lr = 0x8222279C;
	sub_82355530(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822227b0
	if (!ctx.cr6.eq) goto loc_822227B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_822227B0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823579a0
	ctx.lr = 0x822227B8;
	sub_823579A0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823558e0
	ctx.lr = 0x822227C8;
	sub_823558E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822228a0
	if (ctx.cr6.eq) goto loc_822228A0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82357bb8
	ctx.lr = 0x822227D8;
	sub_82357BB8(ctx, base);
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// beq cr6,0x82222878
	if (ctx.cr6.eq) goto loc_82222878;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r30,-8460(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822228a0
	if (ctx.cr6.eq) goto loc_822228A0;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82222800:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5650
	ctx.lr = 0x8222280C;
	sub_820E5650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82222858
	if (ctx.cr6.eq) goto loc_82222858;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5670
	ctx.lr = 0x82222820;
	sub_820E5670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82222858
	if (ctx.cr6.eq) goto loc_82222858;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256348
	ctx.lr = 0x82222840;
	sub_82256348(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82222858
	if (!ctx.cr6.eq) goto loc_82222858;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// and r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822228a0
	if (ctx.cr6.eq) goto loc_822228A0;
loc_82222858:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x82222800
	if (ctx.cr6.lt) goto loc_82222800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823579f8
	ctx.lr = 0x8222286C;
	sub_823579F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82222878:
	// bl 0x8215bd08
	ctx.lr = 0x8222287C;
	sub_8215BD08(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82256348
	ctx.lr = 0x82222894;
	sub_82256348(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822228a0
	if (!ctx.cr6.eq) goto loc_822228A0;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822228A0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823579f8
	ctx.lr = 0x822228A8;
	sub_823579F8(ctx, base);
loc_822228A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822228B4"))) PPC_WEAK_FUNC(sub_822228B4);
PPC_FUNC_IMPL(__imp__sub_822228B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822228B8"))) PPC_WEAK_FUNC(sub_822228B8);
PPC_FUNC_IMPL(__imp__sub_822228B8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822228C8"))) PPC_WEAK_FUNC(sub_822228C8);
PPC_FUNC_IMPL(__imp__sub_822228C8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822228D8"))) PPC_WEAK_FUNC(sub_822228D8);
PPC_FUNC_IMPL(__imp__sub_822228D8) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82354838
	ctx.lr = 0x822228F4;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222918
	if (ctx.cr6.eq) goto loc_82222918;
	// bl 0x822296d0
	ctx.lr = 0x82222904;
	sub_822296D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355110
	ctx.lr = 0x82222914;
	sub_82355110(ctx, base);
	// b 0x8222291c
	goto loc_8222291C;
loc_82222918:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8222291C:
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

__attribute__((alias("__imp__sub_82222934"))) PPC_WEAK_FUNC(sub_82222934);
PPC_FUNC_IMPL(__imp__sub_82222934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222938"))) PPC_WEAK_FUNC(sub_82222938);
PPC_FUNC_IMPL(__imp__sub_82222938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82222940;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82166180
	ctx.lr = 0x82222954;
	sub_82166180(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222964;
	sub_82166180(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222978;
	sub_8222A608(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822229bc
	if (!ctx.cr6.gt) goto loc_822229BC;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// ble cr6,0x822229a4
	if (!ctx.cr6.gt) goto loc_822229A4;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x822229bc
	if (!ctx.cr6.eq) goto loc_822229BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355aa8
	ctx.lr = 0x8222299C;
	sub_82355AA8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x822229b4
	goto loc_822229B4;
loc_822229A4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355aa8
	ctx.lr = 0x822229B0;
	sub_82355AA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822229B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ab8
	ctx.lr = 0x822229BC;
	sub_82355AB8(ctx, base);
loc_822229BC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x822229C8;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x822229D8;
	sub_8222A608(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// bl 0x82228bd8
	ctx.lr = 0x822229F8;
	sub_82228BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a7d8
	ctx.lr = 0x82222A04;
	sub_8222A7D8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222A10;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222A20;
	sub_8222A608(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222A2C;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222A3C;
	sub_8222A608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222A48;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222A58;
	sub_8222A608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222A64;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222A74;
	sub_8222A608(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222A80;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222A90;
	sub_8222A608(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222A9C;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222AAC;
	sub_8222A608(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222AB8;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222AC8;
	sub_8222A608(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222AD4;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222AE4;
	sub_8222A608(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222AF0;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222B00;
	sub_8222A608(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222B0C;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222B1C;
	sub_8222A608(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222B28;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222B38;
	sub_8222A608(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222B44;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222B54;
	sub_8222A608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222B60;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222B70;
	sub_8222A608(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x82222B7C;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a608
	ctx.lr = 0x82222B8C;
	sub_8222A608(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82222B94"))) PPC_WEAK_FUNC(sub_82222B94);
PPC_FUNC_IMPL(__imp__sub_82222B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222B98"))) PPC_WEAK_FUNC(sub_82222B98);
PPC_FUNC_IMPL(__imp__sub_82222B98) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822296d0
	ctx.lr = 0x82222BB8;
	sub_822296D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82222BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x822296d0
	ctx.lr = 0x82222BCC;
	sub_822296D0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82222BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82222938
	ctx.lr = 0x82222BEC;
	sub_82222938(ctx, base);
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

__attribute__((alias("__imp__sub_82222C04"))) PPC_WEAK_FUNC(sub_82222C04);
PPC_FUNC_IMPL(__imp__sub_82222C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222C08"))) PPC_WEAK_FUNC(sub_82222C08);
PPC_FUNC_IMPL(__imp__sub_82222C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82222C10;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x82222C2C;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82222d20
	if (!ctx.cr6.eq) goto loc_82222D20;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8222a920
	ctx.lr = 0x82222C3C;
	sub_8222A920(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8222a870
	ctx.lr = 0x82222C44;
	sub_8222A870(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82222938
	ctx.lr = 0x82222C50;
	sub_82222938(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82222C5C;
	sub_82166180(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82355af8
	ctx.lr = 0x82222C6C;
	sub_82355AF8(ctx, base);
	// addi r3,r30,104
	ctx.r3.s64 = ctx.r30.s64 + 104;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x82222C7C;
	sub_82248A40(ctx, base);
	// bl 0x82354838
	ctx.lr = 0x82222C80;
	sub_82354838(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222d0c
	if (ctx.cr6.eq) goto loc_82222D0C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,10184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10184);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82222cd0
	if (ctx.cr6.eq) goto loc_82222CD0;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82222cc8
	if (ctx.cr6.eq) goto loc_82222CC8;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// beq cr6,0x82222cc0
	if (ctx.cr6.eq) goto loc_82222CC0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,25476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25476);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82222cd0
	goto loc_82222CD0;
loc_82222CC0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82222cd0
	goto loc_82222CD0;
loc_82222CC8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,11080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11080);
	ctx.f1.f64 = double(temp.f32);
loc_82222CD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823548d0
	ctx.lr = 0x82222CD8;
	sub_823548D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82355690
	ctx.lr = 0x82222CE4;
	sub_82355690(ctx, base);
	// li r7,128
	ctx.r7.s64 = 128;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354aa0
	ctx.lr = 0x82222CFC;
	sub_82354AA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82222D08;
	sub_82229558(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82222D0C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,-2484
	ctx.r10.s64 = ctx.r11.s64 + -2484;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82355de8
	ctx.lr = 0x82222D20;
	sub_82355DE8(ctx, base);
loc_82222D20:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82222D30"))) PPC_WEAK_FUNC(sub_82222D30);
PPC_FUNC_IMPL(__imp__sub_82222D30) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x82222D54;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82222e8c
	if (!ctx.cr6.eq) goto loc_82222E8C;
	// bl 0x822296d0
	ctx.lr = 0x82222D60;
	sub_822296D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82222D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8222b5b0
	ctx.lr = 0x82222D78;
	sub_8222B5B0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8222b718
	ctx.lr = 0x82222D80;
	sub_8222B718(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82222D8C;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8222b670
	ctx.lr = 0x82222D9C;
	sub_8222B670(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82222DA8;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8222b670
	ctx.lr = 0x82222DB8;
	sub_8222B670(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82222DC4;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8222b670
	ctx.lr = 0x82222DD4;
	sub_8222B670(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82222DE0;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8222b670
	ctx.lr = 0x82222DF0;
	sub_8222B670(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82222DFC;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8222b670
	ctx.lr = 0x82222E0C;
	sub_8222B670(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82222E18;
	sub_82166180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8222b670
	ctx.lr = 0x82222E28;
	sub_8222B670(ctx, base);
	// bl 0x82354838
	ctx.lr = 0x82222E2C;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222e84
	if (ctx.cr6.eq) goto loc_82222E84;
	// bl 0x822296d0
	ctx.lr = 0x82222E3C;
	sub_822296D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222e58
	if (ctx.cr6.eq) goto loc_82222E58;
	// bl 0x822296d0
	ctx.lr = 0x82222E48;
	sub_822296D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82222E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82222E58:
	// bl 0x822296d0
	ctx.lr = 0x82222E5C;
	sub_822296D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r7,20
	ctx.r7.s64 = 20;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354bf8
	ctx.lr = 0x82222E74;
	sub_82354BF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82222E80;
	sub_82229558(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82222E84:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8222b5f0
	ctx.lr = 0x82222E8C;
	sub_8222B5F0(ctx, base);
loc_82222E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_82222EA8"))) PPC_WEAK_FUNC(sub_82222EA8);
PPC_FUNC_IMPL(__imp__sub_82222EA8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x82222EC8;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82222f30
	if (!ctx.cr6.eq) goto loc_82222F30;
	// bl 0x82354838
	ctx.lr = 0x82222ED4;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222f30
	if (ctx.cr6.eq) goto loc_82222F30;
	// bl 0x822296d0
	ctx.lr = 0x82222EE4;
	sub_822296D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82222f00
	if (ctx.cr6.eq) goto loc_82222F00;
	// bl 0x822296d0
	ctx.lr = 0x82222EF0;
	sub_822296D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82222F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82222F00:
	// bl 0x822296d0
	ctx.lr = 0x82222F04;
	sub_822296D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822296f0
	ctx.lr = 0x82222F0C;
	sub_822296F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354c38
	ctx.lr = 0x82222F20;
	sub_82354C38(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82222F2C;
	sub_82229558(ctx, base);
	// b 0x82222f34
	goto loc_82222F34;
loc_82222F30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82222F34:
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

__attribute__((alias("__imp__sub_82222F4C"))) PPC_WEAK_FUNC(sub_82222F4C);
PPC_FUNC_IMPL(__imp__sub_82222F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222F50"))) PPC_WEAK_FUNC(sub_82222F50);
PPC_FUNC_IMPL(__imp__sub_82222F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82222F6C"))) PPC_WEAK_FUNC(sub_82222F6C);
PPC_FUNC_IMPL(__imp__sub_82222F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82222F70"))) PPC_WEAK_FUNC(sub_82222F70);
PPC_FUNC_IMPL(__imp__sub_82222F70) {
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
	// lwz r30,-744(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82222fb8
	if (ctx.cr6.eq) goto loc_82222FB8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82222fb4
	if (!ctx.cr6.eq) goto loc_82222FB4;
	// bl 0x822296f0
	ctx.lr = 0x82222FA4;
	sub_822296F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82222FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82222FB4:
	// stw r31,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r31.u32);
loc_82222FB8:
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

__attribute__((alias("__imp__sub_82222FD0"))) PPC_WEAK_FUNC(sub_82222FD0);
PPC_FUNC_IMPL(__imp__sub_82222FD0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223024
	if (ctx.cr6.eq) goto loc_82223024;
	// bl 0x822296f0
	ctx.lr = 0x82223000;
	sub_822296F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223024
	if (ctx.cr6.eq) goto loc_82223024;
	// bl 0x82357358
	ctx.lr = 0x8222300C;
	sub_82357358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x8222301C;
	sub_82248A40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82223028
	goto loc_82223028;
loc_82223024:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82223028:
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

__attribute__((alias("__imp__sub_82223040"))) PPC_WEAK_FUNC(sub_82223040);
PPC_FUNC_IMPL(__imp__sub_82223040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82223048;
	sub_82248788(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822230c0
	if (ctx.cr6.eq) goto loc_822230C0;
	// bl 0x822296f0
	ctx.lr = 0x8222306C;
	sub_822296F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822230c0
	if (ctx.cr6.eq) goto loc_822230C0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82357260
	ctx.lr = 0x82223080;
	sub_82357260(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823572a8
	ctx.lr = 0x82223088;
	sub_823572A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82357348
	ctx.lr = 0x82223094;
	sub_82357348(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823572b8
	ctx.lr = 0x822230A0;
	sub_823572B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229730
	ctx.lr = 0x822230A8;
	sub_82229730(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x823573b0
	ctx.lr = 0x822230B4;
	sub_823573B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_822230C0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822230CC"))) PPC_WEAK_FUNC(sub_822230CC);
PPC_FUNC_IMPL(__imp__sub_822230CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822230D0"))) PPC_WEAK_FUNC(sub_822230D0);
PPC_FUNC_IMPL(__imp__sub_822230D0) {
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
	// li r31,-1
	ctx.r31.s64 = -1;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223124
	if (ctx.cr6.eq) goto loc_82223124;
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82223124
	if (ctx.cr6.eq) goto loc_82223124;
	// bl 0x822296f0
	ctx.lr = 0x82223104;
	sub_822296F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223124
	if (ctx.cr6.eq) goto loc_82223124;
	// bl 0x82229710
	ctx.lr = 0x82223110;
	sub_82229710(ctx, base);
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
loc_82223124:
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

__attribute__((alias("__imp__sub_8222313C"))) PPC_WEAK_FUNC(sub_8222313C);
PPC_FUNC_IMPL(__imp__sub_8222313C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223140"))) PPC_WEAK_FUNC(sub_82223140);
PPC_FUNC_IMPL(__imp__sub_82223140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82223148;
	sub_82248784(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x822296d0
	ctx.lr = 0x82223160;
	sub_822296D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82223170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x822232a8
	if (!ctx.cr6.gt) goto loc_822232A8;
	// bl 0x822296d0
	ctx.lr = 0x8222317C;
	sub_822296D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82223190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822219d8
	ctx.lr = 0x822231AC;
	sub_822219D8(ctx, base);
	// lwz r8,248(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r7,252(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f12,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stfs f13,116(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// stfs f12,120(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stw r7,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r7.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// bl 0x8222a6c0
	ctx.lr = 0x822231E8;
	sub_8222A6C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82223230
	if (!ctx.cr6.gt) goto loc_82223230;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82223218
	if (!ctx.cr6.gt) goto loc_82223218;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82223230
	if (!ctx.cr6.eq) goto loc_82223230;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355ae0
	ctx.lr = 0x82223208;
	sub_82355AE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355ac0
	ctx.lr = 0x82223214;
	sub_82355AC0(ctx, base);
	// b 0x8222322c
	goto loc_8222322C;
loc_82223218:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355ad0
	ctx.lr = 0x82223220;
	sub_82355AD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355ab0
	ctx.lr = 0x8222322C;
	sub_82355AB0(ctx, base);
loc_8222322C:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82223230:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228cb8
	ctx.lr = 0x82223240;
	sub_82228CB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228cb8
	ctx.lr = 0x82223250;
	sub_82228CB8(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82223278
	if (ctx.cr6.eq) goto loc_82223278;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-2484
	ctx.r10.s64 = ctx.r11.s64 + -2484;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82355de8
	ctx.lr = 0x8222326C;
	sub_82355DE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82223278:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163ef8
	ctx.lr = 0x82223284;
	sub_82163EF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82221730
	ctx.lr = 0x82223290;
	sub_82221730(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-2484
	ctx.r10.s64 = ctx.r11.s64 + -2484;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82355de8
	ctx.lr = 0x822232A8;
	sub_82355DE8(ctx, base);
loc_822232A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822232B4"))) PPC_WEAK_FUNC(sub_822232B4);
PPC_FUNC_IMPL(__imp__sub_822232B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822232B8"))) PPC_WEAK_FUNC(sub_822232B8);
PPC_FUNC_IMPL(__imp__sub_822232B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822232C0;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x822232DC;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82223408
	if (!ctx.cr6.eq) goto loc_82223408;
	// bl 0x82354838
	ctx.lr = 0x822232E8;
	sub_82354838(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223408
	if (ctx.cr6.eq) goto loc_82223408;
	// bl 0x822296d0
	ctx.lr = 0x822232F8;
	sub_822296D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82222350
	ctx.lr = 0x82223300;
	sub_82222350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822219d8
	ctx.lr = 0x8222330C;
	sub_822219D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r31,2
	ctx.r31.s64 = 2;
	// bl 0x8222a6c0
	ctx.lr = 0x8222331C;
	sub_8222A6C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8222334c
	if (!ctx.cr6.gt) goto loc_8222334C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82223340
	if (!ctx.cr6.gt) goto loc_82223340;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8222334c
	if (!ctx.cr6.eq) goto loc_8222334C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82355ac0
	ctx.lr = 0x8222333C;
	sub_82355AC0(ctx, base);
	// b 0x82223348
	goto loc_82223348;
loc_82223340:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82355ab0
	ctx.lr = 0x82223348;
	sub_82355AB0(ctx, base);
loc_82223348:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8222334C:
	// bl 0x82227aa0
	ctx.lr = 0x82223350;
	sub_82227AA0(ctx, base);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,104
	ctx.r4.s64 = ctx.r29.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82223140
	ctx.lr = 0x82223368;
	sub_82223140(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,10184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10184);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x822233ac
	if (ctx.cr6.eq) goto loc_822233AC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x822233a4
	if (ctx.cr6.eq) goto loc_822233A4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// beq cr6,0x8222339c
	if (ctx.cr6.eq) goto loc_8222339C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,25476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25476);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822233ac
	goto loc_822233AC;
loc_8222339C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x822233ac
	goto loc_822233AC;
loc_822233A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,11080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11080);
	ctx.f1.f64 = double(temp.f32);
loc_822233AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823548d0
	ctx.lr = 0x822233B4;
	sub_823548D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82355690
	ctx.lr = 0x822233C0;
	sub_82355690(ctx, base);
	// bl 0x822296d0
	ctx.lr = 0x822233C4;
	sub_822296D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82222350
	ctx.lr = 0x822233CC;
	sub_82222350(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82354b88
	ctx.lr = 0x822233E4;
	sub_82354B88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x822233F0;
	sub_82229558(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2484
	ctx.r10.s64 = ctx.r11.s64 + -2484;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82355de8
	ctx.lr = 0x82223408;
	sub_82355DE8(ctx, base);
loc_82223408:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82223418"))) PPC_WEAK_FUNC(sub_82223418);
PPC_FUNC_IMPL(__imp__sub_82223418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82223420;
	sub_82248788(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r5,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r5.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x8222344c
	if (!ctx.cr6.lt) goto loc_8222344C;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x8222344c
	if (ctx.cr6.lt) goto loc_8222344C;
loc_82223440:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8222344C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x82223454;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82223440
	if (!ctx.cr6.eq) goto loc_82223440;
	// bl 0x82354838
	ctx.lr = 0x82223460;
	sub_82354838(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223440
	if (ctx.cr6.eq) goto loc_82223440;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bne cr6,0x822234d4
	if (!ctx.cr6.eq) goto loc_822234D4;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x822234e0
	if (ctx.cr6.eq) goto loc_822234E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822297c0
	ctx.lr = 0x8222349C;
	sub_822297C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822234e0
	if (ctx.cr6.eq) goto loc_822234E0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r10,38
	ctx.r10.s64 = 38;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x822234CC;
	sub_82229558(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_822234D4:
	// bl 0x82229868
	ctx.lr = 0x822234D8;
	sub_82229868(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x822234f8
	goto loc_822234F8;
loc_822234E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229828
	ctx.lr = 0x822234E8;
	sub_82229828(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822297f8
	ctx.lr = 0x822234F8;
	sub_822297F8(ctx, base);
loc_822234F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222350C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8222351c
	if (!ctx.cr6.lt) goto loc_8222351C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bge cr6,0x8222352c
	if (!ctx.cr6.lt) goto loc_8222352C;
loc_8222351C:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,9644
	ctx.r9.s64 = ctx.r11.s64 + 9644;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_8222352C:
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356fe0
	ctx.lr = 0x82223538;
	sub_82356FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82357f70
	ctx.lr = 0x82223544;
	sub_82357F70(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82354d28
	ctx.lr = 0x8222355C;
	sub_82354D28(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82223574:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82223574
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82223574;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82358098
	ctx.lr = 0x82223588;
	sub_82358098(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x82223590;
	sub_82356EB8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x8222359C;
	sub_82229558(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822235A4"))) PPC_WEAK_FUNC(sub_822235A4);
PPC_FUNC_IMPL(__imp__sub_822235A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822235A8"))) PPC_WEAK_FUNC(sub_822235A8);
PPC_FUNC_IMPL(__imp__sub_822235A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822235B0;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x822235dc
	if (!ctx.cr6.lt) goto loc_822235DC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x822235dc
	if (ctx.cr6.lt) goto loc_822235DC;
loc_822235D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_822235DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x822235E4;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822235d0
	if (!ctx.cr6.eq) goto loc_822235D0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822235fc
	if (ctx.cr6.eq) goto loc_822235FC;
	// bl 0x82229868
	ctx.lr = 0x822235F8;
	sub_82229868(ctx, base);
	// b 0x82223604
	goto loc_82223604;
loc_822235FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229828
	ctx.lr = 0x82223604;
	sub_82229828(ctx, base);
loc_82223604:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82223618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bl 0x8215bd08
	ctx.lr = 0x82223628;
	sub_8215BD08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82256578
	ctx.lr = 0x82223634;
	sub_82256578(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82356fe0
	ctx.lr = 0x82223640;
	sub_82356FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357880
	ctx.lr = 0x8222364C;
	sub_82357880(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x82223650;
	sub_8215BD08(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82256338
	ctx.lr = 0x82223660;
	sub_82256338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823578b8
	ctx.lr = 0x8222366C;
	sub_823578B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ab28
	ctx.lr = 0x82223678;
	sub_8222AB28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82223684"))) PPC_WEAK_FUNC(sub_82223684);
PPC_FUNC_IMPL(__imp__sub_82223684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223688"))) PPC_WEAK_FUNC(sub_82223688);
PPC_FUNC_IMPL(__imp__sub_82223688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82223690;
	sub_82248784(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x822236bc
	if (!ctx.cr6.lt) goto loc_822236BC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x822236bc
	if (ctx.cr6.lt) goto loc_822236BC;
loc_822236B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_822236BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x822236C4;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822236b0
	if (!ctx.cr6.eq) goto loc_822236B0;
	// bl 0x82354838
	ctx.lr = 0x822236D0;
	sub_82354838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822236b0
	if (ctx.cr6.eq) goto loc_822236B0;
	// bl 0x82229888
	ctx.lr = 0x822236E0;
	sub_82229888(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822236F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8222370c
	if (!ctx.cr6.lt) goto loc_8222370C;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8222370c
	if (ctx.cr6.lt) goto loc_8222370C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8222371c
	goto loc_8222371C;
loc_8222370C:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,9644
	ctx.r9.s64 = ctx.r11.s64 + 9644;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_8222371C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82358058
	ctx.lr = 0x8222372C;
	sub_82358058(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354d28
	ctx.lr = 0x82223744;
	sub_82354D28(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82358098
	ctx.lr = 0x8222374C;
	sub_82358098(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82223758;
	sub_82229558(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82223760"))) PPC_WEAK_FUNC(sub_82223760);
PPC_FUNC_IMPL(__imp__sub_82223760) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82229640
	ctx.lr = 0x82223784;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82223804
	if (!ctx.cr6.eq) goto loc_82223804;
	// bl 0x82229640
	ctx.lr = 0x82223794;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822237a4
	if (ctx.cr6.eq) goto loc_822237A4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822237bc
	goto loc_822237BC;
loc_822237A4:
	// bl 0x82229888
	ctx.lr = 0x822237A8;
	sub_82229888(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822237B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
loc_822237BC:
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x822237d0
	if (ctx.cr6.lt) goto loc_822237D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82223804
	goto loc_82223804;
loc_822237D0:
	// bl 0x82229888
	ctx.lr = 0x822237D4;
	sub_82229888(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822237E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228a28
	ctx.lr = 0x822237F4;
	sub_82228A28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ab28
	ctx.lr = 0x82223800;
	sub_8222AB28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82223804:
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

__attribute__((alias("__imp__sub_8222381C"))) PPC_WEAK_FUNC(sub_8222381C);
PPC_FUNC_IMPL(__imp__sub_8222381C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223820"))) PPC_WEAK_FUNC(sub_82223820);
PPC_FUNC_IMPL(__imp__sub_82223820) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82223854
	if (ctx.cr6.eq) goto loc_82223854;
loc_8222383C:
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
loc_82223854:
	// bl 0x82354838
	ctx.lr = 0x82223858;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223888
	if (ctx.cr6.eq) goto loc_82223888;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229528
	ctx.lr = 0x8222386C;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823550e8
	ctx.lr = 0x82223878;
	sub_823550E8(ctx, base);
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// beq cr6,0x8222383c
	if (ctx.cr6.eq) goto loc_8222383C;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// beq cr6,0x8222383c
	if (ctx.cr6.eq) goto loc_8222383C;
loc_82223888:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// bl 0x82220d10
	ctx.lr = 0x82223894;
	sub_82220D10(ctx, base);
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

__attribute__((alias("__imp__sub_822238A8"))) PPC_WEAK_FUNC(sub_822238A8);
PPC_FUNC_IMPL(__imp__sub_822238A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822238B0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82223820
	ctx.lr = 0x822238C4;
	sub_82223820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822238d8
	if (ctx.cr6.eq) goto loc_822238D8;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// b 0x822239ec
	goto loc_822239EC;
loc_822238D8:
	// bl 0x82354838
	ctx.lr = 0x822238DC;
	sub_82354838(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223900
	if (ctx.cr6.eq) goto loc_82223900;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229528
	ctx.lr = 0x822238F0;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823550b0
	ctx.lr = 0x822238FC;
	sub_823550B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82223900:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822239d8
	if (ctx.cr6.gt) goto loc_822239D8;
	// beq cr6,0x822239c0
	if (ctx.cr6.eq) goto loc_822239C0;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8222395c
	if (ctx.cr6.gt) goto loc_8222395C;
	// beq cr6,0x82223984
	if (ctx.cr6.eq) goto loc_82223984;
	// addis r11,r31,-4096
	ctx.r11.s64 = ctx.r31.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82223984
	if (ctx.cr6.gt) goto loc_82223984;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82223984
	if (ctx.cr6.eq) goto loc_82223984;
	// bdz 0x82223984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82223984;
	// bdz 0x82223984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82223984;
	// bdz 0x82223984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82223984;
	// bdz 0x82223984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82223984;
	// b 0x82223984
	goto loc_82223984;
loc_8222395C:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r10,r11,11
	ctx.r10.u64 = ctx.r11.u64 | 11;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8222399c
	if (ctx.cr6.gt) goto loc_8222399C;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r10,r11,10
	ctx.r10.u64 = ctx.r11.u64 | 10;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82223984
	if (!ctx.cr6.lt) goto loc_82223984;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
loc_82223984:
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r11,30200
	ctx.r11.s64 = 30200;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8222399C:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82223984
	if (ctx.cr6.lt) goto loc_82223984;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82223a54
	if (!ctx.cr6.gt) goto loc_82223A54;
	// b 0x82223984
	goto loc_82223984;
loc_822239C0:
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r11,30202
	ctx.r11.s64 = 30202;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_822239D8:
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82223a40
	if (ctx.cr6.gt) goto loc_82223A40;
	// beq cr6,0x82223984
	if (ctx.cr6.eq) goto loc_82223984;
loc_822239EC:
	// addis r11,r10,-8192
	ctx.r11.s64 = ctx.r10.s64 + -536870912;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82223984
	if (ctx.cr6.gt) goto loc_82223984;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14868
	ctx.r12.s64 = ctx.r12.s64 + 14868;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,14932(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14932);
	// lwz r17,14724(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14724);
	// lwz r17,14724(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14724);
	// lwz r17,14724(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14724);
	// lwz r17,14724(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14724);
	// lwz r17,14724(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14724);
	// lwz r17,14724(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14724);
	// lwz r17,14724(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14724);
	// lwz r17,14724(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14724);
	// lwz r17,14724(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14724);
	// lwz r17,14724(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 14724);
loc_82223A40:
	// addis r11,r31,-16384
	ctx.r11.s64 = ctx.r31.s64 + -1073741824;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82223984
	if (ctx.cr0.eq) goto loc_82223984;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82223984
	if (!ctx.cr6.eq) goto loc_82223984;
loc_82223A54:
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r11,30203
	ctx.r11.s64 = 30203;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82223A6C"))) PPC_WEAK_FUNC(sub_82223A6C);
PPC_FUNC_IMPL(__imp__sub_82223A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223A70"))) PPC_WEAK_FUNC(sub_82223A70);
PPC_FUNC_IMPL(__imp__sub_82223A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82223A78;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82223820
	ctx.lr = 0x82223A90;
	sub_82223820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82223aa4
	if (ctx.cr6.eq) goto loc_82223AA4;
	// lis r31,8192
	ctx.r31.s64 = 536870912;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82223acc
	goto loc_82223ACC;
loc_82223AA4:
	// bl 0x82354838
	ctx.lr = 0x82223AA8;
	sub_82354838(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223acc
	if (ctx.cr6.eq) goto loc_82223ACC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229528
	ctx.lr = 0x82223ABC;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823550b0
	ctx.lr = 0x82223AC8;
	sub_823550B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82223ACC:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82223af0
	if (ctx.cr6.eq) goto loc_82223AF0;
	// addis r11,r31,-16384
	ctx.r11.s64 = ctx.r31.s64 + -1073741824;
	// addic. r11,r11,-6
	ctx.xer.ca = ctx.r11.u32 > 5;
	ctx.r11.s64 = ctx.r11.s64 + -6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82223af0
	if (ctx.cr0.eq) goto loc_82223AF0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82223b0c
	if (!ctx.cr6.eq) goto loc_82223B0C;
loc_82223AF0:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,30204
	ctx.r10.s64 = 30204;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82223B0C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82223B18"))) PPC_WEAK_FUNC(sub_82223B18);
PPC_FUNC_IMPL(__imp__sub_82223B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82223B20;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82223820
	ctx.lr = 0x82223B38;
	sub_82223820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82223b8c
	if (!ctx.cr6.eq) goto loc_82223B8C;
	// bl 0x82354838
	ctx.lr = 0x82223B44;
	sub_82354838(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223b68
	if (ctx.cr6.eq) goto loc_82223B68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229528
	ctx.lr = 0x82223B58;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823550b0
	ctx.lr = 0x82223B64;
	sub_823550B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82223B68:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r11,r11,9
	ctx.r11.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82223bc4
	if (ctx.cr6.gt) goto loc_82223BC4;
	// beq cr6,0x82223b98
	if (ctx.cr6.eq) goto loc_82223B98;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82223be4
	if (ctx.cr6.eq) goto loc_82223BE4;
loc_82223B8C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82223B98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822296a8
	ctx.lr = 0x82223BA0;
	sub_822296A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82223b8c
	if (ctx.cr6.eq) goto loc_82223B8C;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,30206
	ctx.r10.s64 = 30206;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82223BC4:
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82223b8c
	if (ctx.cr6.lt) goto loc_82223B8C;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r10,r11,7
	ctx.r10.u64 = ctx.r11.u64 | 7;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82223b8c
	if (ctx.cr6.gt) goto loc_82223B8C;
loc_82223BE4:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,30205
	ctx.r10.s64 = 30205;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82223C00"))) PPC_WEAK_FUNC(sub_82223C00);
PPC_FUNC_IMPL(__imp__sub_82223C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82223C08;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82223820
	ctx.lr = 0x82223C20;
	sub_82223820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82223c60
	if (ctx.cr6.eq) goto loc_82223C60;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
loc_82223C30:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r9,r11,4
	ctx.r9.u64 = ctx.r11.u64 | 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82223d28
	if (ctx.cr6.eq) goto loc_82223D28;
	// addis r11,r10,-16384
	ctx.r11.s64 = ctx.r10.s64 + -1073741824;
	// addic. r11,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82223d0c
	if (ctx.cr0.eq) goto loc_82223D0C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
loc_82223C50:
	// beq cr6,0x82223d28
	if (ctx.cr6.eq) goto loc_82223D28;
loc_82223C54:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82223C60:
	// bl 0x82354838
	ctx.lr = 0x82223C64;
	sub_82354838(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223c88
	if (ctx.cr6.eq) goto loc_82223C88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229528
	ctx.lr = 0x82223C78;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823550b0
	ctx.lr = 0x82223C84;
	sub_823550B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82223C88:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82223c30
	if (ctx.cr6.gt) goto loc_82223C30;
	// beq cr6,0x82223cf0
	if (ctx.cr6.eq) goto loc_82223CF0;
	// addis r11,r31,-4096
	ctx.r11.s64 = ctx.r31.s64 + -268435456;
	// addic. r11,r11,-6
	ctx.xer.ca = ctx.r11.u32 > 5;
	ctx.r11.s64 = ctx.r11.s64 + -6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82223d0c
	if (ctx.cr0.eq) goto loc_82223D0C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82223cc4
	if (ctx.cr6.eq) goto loc_82223CC4;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// ori r9,r10,65531
	ctx.r9.u64 = ctx.r10.u64 | 65531;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// b 0x82223c50
	goto loc_82223C50;
loc_82223CC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822296a8
	ctx.lr = 0x82223CCC;
	sub_822296A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82223c54
	if (ctx.cr6.eq) goto loc_82223C54;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,30207
	ctx.r10.s64 = 30207;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82223CF0:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,30202
	ctx.r10.s64 = 30202;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82223D0C:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,30203
	ctx.r10.s64 = 30203;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82223D28:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,30203
	ctx.r10.s64 = 30203;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82223D44"))) PPC_WEAK_FUNC(sub_82223D44);
PPC_FUNC_IMPL(__imp__sub_82223D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223D48"))) PPC_WEAK_FUNC(sub_82223D48);
PPC_FUNC_IMPL(__imp__sub_82223D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82223D50;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82223820
	ctx.lr = 0x82223D68;
	sub_82223820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82223dd4
	if (!ctx.cr6.eq) goto loc_82223DD4;
	// bl 0x82354838
	ctx.lr = 0x82223D74;
	sub_82354838(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223d98
	if (ctx.cr6.eq) goto loc_82223D98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229528
	ctx.lr = 0x82223D88;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823550b0
	ctx.lr = 0x82223D94;
	sub_823550B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82223D98:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82223db8
	if (ctx.cr6.eq) goto loc_82223DB8;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82223dd4
	if (!ctx.cr6.eq) goto loc_82223DD4;
loc_82223DB8:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,30203
	ctx.r10.s64 = 30203;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82223DD4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82223DE0"))) PPC_WEAK_FUNC(sub_82223DE0);
PPC_FUNC_IMPL(__imp__sub_82223DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82223DE8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82223820
	ctx.lr = 0x82223E00;
	sub_82223820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82223e5c
	if (!ctx.cr6.eq) goto loc_82223E5C;
	// bl 0x82354838
	ctx.lr = 0x82223E0C;
	sub_82354838(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223e30
	if (ctx.cr6.eq) goto loc_82223E30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229528
	ctx.lr = 0x82223E20;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823550b0
	ctx.lr = 0x82223E2C;
	sub_823550B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82223E30:
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82223e5c
	if (!ctx.cr6.eq) goto loc_82223E5C;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,30201
	ctx.r10.s64 = 30201;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82223E5C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82223E68"))) PPC_WEAK_FUNC(sub_82223E68);
PPC_FUNC_IMPL(__imp__sub_82223E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82223E70;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82223820
	ctx.lr = 0x82223E88;
	sub_82223820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82223e9c
	if (ctx.cr6.eq) goto loc_82223E9C;
	// lis r31,8192
	ctx.r31.s64 = 536870912;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82223ec4
	goto loc_82223EC4;
loc_82223E9C:
	// bl 0x82354838
	ctx.lr = 0x82223EA0;
	sub_82354838(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223ec4
	if (ctx.cr6.eq) goto loc_82223EC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229528
	ctx.lr = 0x82223EB4;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823550b0
	ctx.lr = 0x82223EC0;
	sub_823550B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82223EC4:
	// addis r11,r31,-4096
	ctx.r11.s64 = ctx.r31.s64 + -268435456;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82223ee8
	if (ctx.cr0.eq) goto loc_82223EE8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82223ee8
	if (ctx.cr6.eq) goto loc_82223EE8;
	// lis r10,12287
	ctx.r10.s64 = 805240832;
	// ori r9,r10,65533
	ctx.r9.u64 = ctx.r10.u64 | 65533;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82223f04
	if (!ctx.cr6.eq) goto loc_82223F04;
loc_82223EE8:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,30200
	ctx.r10.s64 = 30200;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82223F04:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82223F10"))) PPC_WEAK_FUNC(sub_82223F10);
PPC_FUNC_IMPL(__imp__sub_82223F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82223F18;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82223820
	ctx.lr = 0x82223F30;
	sub_82223820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82223f70
	if (ctx.cr6.eq) goto loc_82223F70;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
loc_82223F40:
	// addis r11,r10,-16384
	ctx.r11.s64 = ctx.r10.s64 + -1073741824;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82223fd0
	if (ctx.cr0.eq) goto loc_82223FD0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82223fc4
	if (!ctx.cr6.eq) goto loc_82223FC4;
loc_82223F54:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,30208
	ctx.r10.s64 = 30208;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82223F70:
	// bl 0x82354838
	ctx.lr = 0x82223F74;
	sub_82354838(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82223f98
	if (ctx.cr6.eq) goto loc_82223F98;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229528
	ctx.lr = 0x82223F88;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823550b0
	ctx.lr = 0x82223F94;
	sub_823550B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82223F98:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82223f40
	if (ctx.cr6.gt) goto loc_82223F40;
	// beq cr6,0x82223fd0
	if (ctx.cr6.eq) goto loc_82223FD0;
	// addis r11,r31,-4096
	ctx.r11.s64 = ctx.r31.s64 + -268435456;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82223fd0
	if (ctx.cr0.eq) goto loc_82223FD0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82223f54
	if (ctx.cr6.eq) goto loc_82223F54;
loc_82223FC4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82223FD0:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,30200
	ctx.r10.s64 = 30200;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82223FEC"))) PPC_WEAK_FUNC(sub_82223FEC);
PPC_FUNC_IMPL(__imp__sub_82223FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82223FF0"))) PPC_WEAK_FUNC(sub_82223FF0);
PPC_FUNC_IMPL(__imp__sub_82223FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82223FF8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r27,30201
	ctx.r27.s64 = 30201;
loc_82224014:
	// bl 0x82354838
	ctx.lr = 0x82224018;
	sub_82354838(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224038
	if (ctx.cr6.eq) goto loc_82224038;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229528
	ctx.lr = 0x8222402C;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82354fc8
	ctx.lr = 0x82224038;
	sub_82354FC8(ctx, base);
loc_82224038:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stwu r27,16(r30)
	ea = 16 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r30.u32 = ea;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x82224014
	if (ctx.cr6.lt) goto loc_82224014;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8222405C"))) PPC_WEAK_FUNC(sub_8222405C);
PPC_FUNC_IMPL(__imp__sub_8222405C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82224060"))) PPC_WEAK_FUNC(sub_82224060);
PPC_FUNC_IMPL(__imp__sub_82224060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82224068;
	sub_8224878C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823553a8
	ctx.lr = 0x82224078;
	sub_823553A8(ctx, base);
	// bl 0x82229748
	ctx.lr = 0x8222407C;
	sub_82229748(ctx, base);
	// bl 0x82354838
	ctx.lr = 0x82224080;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224170
	if (ctx.cr6.eq) goto loc_82224170;
	// li r4,15360
	ctx.r4.s64 = 15360;
	// bl 0x82355848
	ctx.lr = 0x82224094;
	sub_82355848(ctx, base);
	// bl 0x8222b480
	ctx.lr = 0x82224098;
	sub_8222B480(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-724(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -724);
	// bl 0x823549a0
	ctx.lr = 0x822240A8;
	sub_823549A0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82354858
	ctx.lr = 0x822240B4;
	sub_82354858(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82358170
	ctx.lr = 0x822240BC;
	sub_82358170(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a4128
	ctx.lr = 0x822240C8;
	sub_823A4128(ctx, base);
	// bl 0x820855d8
	ctx.lr = 0x822240CC;
	sub_820855D8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82358488
	ctx.lr = 0x822240DC;
	sub_82358488(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823582c8
	ctx.lr = 0x822240E8;
	sub_823582C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82358390
	ctx.lr = 0x822240F0;
	sub_82358390(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r9,r10,4128
	ctx.r9.s64 = ctx.r10.s64 + 4128;
	// lwz r4,68(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// bl 0x823544b8
	ctx.lr = 0x82224104;
	sub_823544B8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x821142a0
	ctx.lr = 0x8222410C;
	sub_821142A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222412c
	if (ctx.cr6.eq) goto loc_8222412C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82117428
	ctx.lr = 0x82224120;
	sub_82117428(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222412c
	if (ctx.cr6.eq) goto loc_8222412C;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8222412C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82358260
	ctx.lr = 0x82224138;
	sub_82358260(ctx, base);
	// bl 0x82354838
	ctx.lr = 0x8222413C;
	sub_82354838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222414c
	if (ctx.cr6.eq) goto loc_8222414C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82354ec0
	ctx.lr = 0x8222414C;
	sub_82354EC0(ctx, base);
loc_8222414C:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82354a38
	ctx.lr = 0x8222415C;
	sub_82354A38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82224168;
	sub_82229558(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823581e0
	ctx.lr = 0x82224170;
	sub_823581E0(ctx, base);
loc_82224170:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82224180"))) PPC_WEAK_FUNC(sub_82224180);
PPC_FUNC_IMPL(__imp__sub_82224180) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82354838
	ctx.lr = 0x8222419C;
	sub_82354838(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,-724(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -724);
	// bl 0x823549e0
	ctx.lr = 0x822241AC;
	sub_823549E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354a70
	ctx.lr = 0x822241B8;
	sub_82354A70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x822241C4;
	sub_82229558(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_822241E4"))) PPC_WEAK_FUNC(sub_822241E4);
PPC_FUNC_IMPL(__imp__sub_822241E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822241E8"))) PPC_WEAK_FUNC(sub_822241E8);
PPC_FUNC_IMPL(__imp__sub_822241E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822241F0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224264
	if (ctx.cr6.eq) goto loc_82224264;
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// addi r28,r3,-8
	ctx.r28.s64 = ctx.r3.s64 + -8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82224244
	if (ctx.cr0.lt) goto loc_82224244;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,-2484
	ctx.r29.s64 = ctx.r11.s64 + -2484;
loc_82224230:
	// stwu r29,-192(r30)
	ea = -192 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355de8
	ctx.lr = 0x8222423C;
	sub_82355DE8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82224230
	if (!ctx.cr0.lt) goto loc_82224230;
loc_82224244:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224258
	if (ctx.cr6.eq) goto loc_82224258;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357128
	ctx.lr = 0x82224258;
	sub_82357128(ctx, base);
loc_82224258:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82224264:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,-2484
	ctx.r10.s64 = ctx.r11.s64 + -2484;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82355de8
	ctx.lr = 0x82224278;
	sub_82355DE8(ctx, base);
	// clrlwi r9,r27,31
	ctx.r9.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222428c
	if (ctx.cr6.eq) goto loc_8222428C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357128
	ctx.lr = 0x8222428C;
	sub_82357128(ctx, base);
loc_8222428C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82224298"))) PPC_WEAK_FUNC(sub_82224298);
PPC_FUNC_IMPL(__imp__sub_82224298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822242A0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224314
	if (ctx.cr6.eq) goto loc_82224314;
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// addi r28,r3,-8
	ctx.r28.s64 = ctx.r3.s64 + -8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x822242f4
	if (ctx.cr0.lt) goto loc_822242F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,-2460
	ctx.r29.s64 = ctx.r11.s64 + -2460;
loc_822242E0:
	// stwu r29,-96(r30)
	ea = -96 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823574a0
	ctx.lr = 0x822242EC;
	sub_823574A0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x822242e0
	if (!ctx.cr0.lt) goto loc_822242E0;
loc_822242F4:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224308
	if (ctx.cr6.eq) goto loc_82224308;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357128
	ctx.lr = 0x82224308;
	sub_82357128(ctx, base);
loc_82224308:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82224314:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,-2460
	ctx.r10.s64 = ctx.r11.s64 + -2460;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x823574a0
	ctx.lr = 0x82224328;
	sub_823574A0(ctx, base);
	// clrlwi r9,r27,31
	ctx.r9.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8222433c
	if (ctx.cr6.eq) goto loc_8222433C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357128
	ctx.lr = 0x8222433C;
	sub_82357128(ctx, base);
loc_8222433C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82224348"))) PPC_WEAK_FUNC(sub_82224348);
PPC_FUNC_IMPL(__imp__sub_82224348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82224350;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82224368
	if (!ctx.cr6.eq) goto loc_82224368;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_82224368:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82224380
	if (!ctx.cr0.eq) goto loc_82224380;
loc_82224374:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82224380:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x82224388;
	sub_823570E0(ctx, base);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x82224398;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x822243A4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82224374
	if (ctx.cr6.eq) goto loc_82224374;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x822243B8;
	sub_823585A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822243ec
	if (ctx.cr6.eq) goto loc_822243EC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358508
	ctx.lr = 0x822243D4;
	sub_82358508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822243ec
	if (ctx.cr6.eq) goto loc_822243EC;
	// bl 0x82357240
	ctx.lr = 0x822243E4;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822243EC:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82224400"))) PPC_WEAK_FUNC(sub_82224400);
PPC_FUNC_IMPL(__imp__sub_82224400) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x82224434
	if (ctx.cr6.eq) goto loc_82224434;
	// bl 0x82357240
	ctx.lr = 0x82224430;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82224434:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82224454"))) PPC_WEAK_FUNC(sub_82224454);
PPC_FUNC_IMPL(__imp__sub_82224454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82224458"))) PPC_WEAK_FUNC(sub_82224458);
PPC_FUNC_IMPL(__imp__sub_82224458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82224460;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822244b0
	if (!ctx.cr6.gt) goto loc_822244B0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82224480:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222449C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82224480
	if (ctx.cr6.lt) goto loc_82224480;
loc_822244B0:
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822244BC"))) PPC_WEAK_FUNC(sub_822244BC);
PPC_FUNC_IMPL(__imp__sub_822244BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822244C0"))) PPC_WEAK_FUNC(sub_822244C0);
PPC_FUNC_IMPL(__imp__sub_822244C0) {
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
	ctx.lr = 0x822244D0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x822244e8
	if (ctx.cr6.eq) goto loc_822244E8;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x82183448
	ctx.lr = 0x822244E4;
	sub_82183448(ctx, base);
	// b 0x822244f0
	goto loc_822244F0;
loc_822244E8:
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x821845a0
	ctx.lr = 0x822244F0;
	sub_821845A0(ctx, base);
loc_822244F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224514
	if (ctx.cr6.eq) goto loc_82224514;
	// bl 0x82222408
	ctx.lr = 0x822244FC;
	sub_82222408(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-744(r11)
	PPC_STORE_U32(ctx.r11.u32 + -744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82224514:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-744(r10)
	PPC_STORE_U32(ctx.r10.u32 + -744, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82224530"))) PPC_WEAK_FUNC(sub_82224530);
PPC_FUNC_IMPL(__imp__sub_82224530) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82224588
	if (!ctx.cr6.eq) goto loc_82224588;
	// bl 0x82183078
	ctx.lr = 0x8222455C;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821837d0
	ctx.lr = 0x82224568;
	sub_821837D0(ctx, base);
	// bl 0x8222a528
	ctx.lr = 0x8222456C;
	sub_8222A528(ctx, base);
	// bl 0x822244c0
	ctx.lr = 0x82224570;
	sub_822244C0(ctx, base);
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// bl 0x82223ff0
	ctx.lr = 0x82224578;
	sub_82223FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82224584;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82224588:
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

__attribute__((alias("__imp__sub_822245A0"))) PPC_WEAK_FUNC(sub_822245A0);
PPC_FUNC_IMPL(__imp__sub_822245A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822245A8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82223820
	ctx.lr = 0x822245B8;
	sub_82223820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82224604
	if (!ctx.cr6.eq) goto loc_82224604;
	// bl 0x82354838
	ctx.lr = 0x822245C4;
	sub_82354838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224604
	if (ctx.cr6.eq) goto loc_82224604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229528
	ctx.lr = 0x822245D8;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82355078
	ctx.lr = 0x822245E4;
	sub_82355078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82224604
	if (ctx.cr6.eq) goto loc_82224604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822295c0
	ctx.lr = 0x822245F8;
	sub_822295C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82224604:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229600
	ctx.lr = 0x8222460C;
	sub_82229600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82224618"))) PPC_WEAK_FUNC(sub_82224618);
PPC_FUNC_IMPL(__imp__sub_82224618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82224620;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x82224634;
	sub_82354838(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822247c4
	if (ctx.cr6.eq) goto loc_822247C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229528
	ctx.lr = 0x82224648;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823550e8
	ctx.lr = 0x82224654;
	sub_823550E8(ctx, base);
	// addi r11,r3,-13
	ctx.r11.s64 = ctx.r3.s64 + -13;
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// bgt cr6,0x822247c4
	if (ctx.cr6.gt) goto loc_822247C4;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,18040
	ctx.r12.s64 = ctx.r12.s64 + 18040;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,18212(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18212);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18236(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18236);
	// lwz r17,18236(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18236);
	// lwz r17,18260(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18260);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18284(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18284);
	// lwz r17,18284(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18284);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18308(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18308);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18308(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18308);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18332(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18332);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18372(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18372);
	// lwz r17,18356(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18356);
	// lwz r17,18356(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18356);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82223a70
	ctx.lr = 0x82224730;
	sub_82223A70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82223b18
	ctx.lr = 0x82224748;
	sub_82223B18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82223c00
	ctx.lr = 0x82224760;
	sub_82223C00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82223e68
	ctx.lr = 0x82224778;
	sub_82223E68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82223f10
	ctx.lr = 0x82224790;
	sub_82223F10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82223d48
	ctx.lr = 0x822247A8;
	sub_82223D48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82223de0
	ctx.lr = 0x822247C0;
	sub_82223DE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822247C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822247D0"))) PPC_WEAK_FUNC(sub_822247D0);
PPC_FUNC_IMPL(__imp__sub_822247D0) {
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
	// bl 0x82354838
	ctx.lr = 0x822247EC;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222480c
	if (ctx.cr6.eq) goto loc_8222480C;
	// bl 0x82354ef8
	ctx.lr = 0x822247FC;
	sub_82354EF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222480c
	if (ctx.cr6.eq) goto loc_8222480C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82354f20
	ctx.lr = 0x8222480C;
	sub_82354F20(ctx, base);
loc_8222480C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8222482c
	if (ctx.cr6.eq) goto loc_8222482C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82224840
	if (!ctx.cr6.eq) goto loc_82224840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224060
	ctx.lr = 0x82224828;
	sub_82224060(ctx, base);
	// b 0x82224840
	goto loc_82224840;
loc_8222482C:
	// bl 0x822d6420
	ctx.lr = 0x82224830;
	sub_822D6420(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224840
	if (ctx.cr6.eq) goto loc_82224840;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_82224840:
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

__attribute__((alias("__imp__sub_82224858"))) PPC_WEAK_FUNC(sub_82224858);
PPC_FUNC_IMPL(__imp__sub_82224858) {
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
	// bl 0x82354838
	ctx.lr = 0x82224874;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222489c
	if (ctx.cr6.eq) goto loc_8222489C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229528
	ctx.lr = 0x82224888;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355040
	ctx.lr = 0x82224894;
	sub_82355040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822248b8
	if (!ctx.cr6.eq) goto loc_822248B8;
loc_8222489C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822245a0
	ctx.lr = 0x822248A8;
	sub_822245A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822248b8
	if (ctx.cr6.eq) goto loc_822248B8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_822248B8:
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

__attribute__((alias("__imp__sub_822248D0"))) PPC_WEAK_FUNC(sub_822248D0);
PPC_FUNC_IMPL(__imp__sub_822248D0) {
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
	// bl 0x82354838
	ctx.lr = 0x822248EC;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224914
	if (ctx.cr6.eq) goto loc_82224914;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229528
	ctx.lr = 0x82224900;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355040
	ctx.lr = 0x8222490C;
	sub_82355040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82224930
	if (!ctx.cr6.eq) goto loc_82224930;
loc_82224914:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822245a0
	ctx.lr = 0x82224920;
	sub_822245A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82224930
	if (ctx.cr6.eq) goto loc_82224930;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_82224930:
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

__attribute__((alias("__imp__sub_82224948"))) PPC_WEAK_FUNC(sub_82224948);
PPC_FUNC_IMPL(__imp__sub_82224948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82224950;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8222498c
	if (ctx.cr6.gt) goto loc_8222498C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82224348
	ctx.lr = 0x82224978;
	sub_82224348(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222498c
	if (!ctx.cr6.eq) goto loc_8222498C;
loc_82224980:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8222498C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224980
	if (ctx.cr6.eq) goto loc_82224980;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822249BC"))) PPC_WEAK_FUNC(sub_822249BC);
PPC_FUNC_IMPL(__imp__sub_822249BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822249C0"))) PPC_WEAK_FUNC(sub_822249C0);
PPC_FUNC_IMPL(__imp__sub_822249C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x822249C8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822249e0
	if (!ctx.cr6.eq) goto loc_822249E0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_822249E0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x822249f8
	if (!ctx.cr0.eq) goto loc_822249F8;
loc_822249EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_822249F8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x82224A00;
	sub_823570E0(ctx, base);
	// rlwinm r30,r26,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357208
	ctx.lr = 0x82224A10;
	sub_82357208(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82224A1C;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822249ec
	if (ctx.cr6.eq) goto loc_822249EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823585a0
	ctx.lr = 0x82224A30;
	sub_823585A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224ac4
	if (ctx.cr6.eq) goto loc_82224AC4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82224aac
	if (!ctx.cr6.gt) goto loc_82224AAC;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82224A54:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82224a68
	if (ctx.cr6.eq) goto loc_82224A68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357068
	ctx.lr = 0x82224A68;
	sub_82357068(ctx, base);
loc_82224A68:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82357038
	ctx.lr = 0x82224A78;
	sub_82357038(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82224A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82224a54
	if (ctx.cr6.lt) goto loc_82224A54;
loc_82224AAC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224ac4
	if (ctx.cr6.eq) goto loc_82224AC4;
	// bl 0x82357240
	ctx.lr = 0x82224ABC;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82224AC4:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82224AD8"))) PPC_WEAK_FUNC(sub_82224AD8);
PPC_FUNC_IMPL(__imp__sub_82224AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82224AE0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82223820
	ctx.lr = 0x82224AF4;
	sub_82223820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82224b08
	if (ctx.cr6.eq) goto loc_82224B08;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// b 0x82224c6c
	goto loc_82224C6C;
loc_82224B08:
	// bl 0x82354838
	ctx.lr = 0x82224B0C;
	sub_82354838(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224b30
	if (ctx.cr6.eq) goto loc_82224B30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229528
	ctx.lr = 0x82224B20;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823550b0
	ctx.lr = 0x82224B2C;
	sub_823550B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82224B30:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// ori r9,r11,9
	ctx.r9.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82224c58
	if (ctx.cr6.gt) goto loc_82224C58;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r10,r11,7
	ctx.r10.u64 = ctx.r11.u64 | 7;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82224c9c
	if (!ctx.cr6.lt) goto loc_82224C9C;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82224b98
	if (ctx.cr6.gt) goto loc_82224B98;
	// beq cr6,0x82224bd8
	if (ctx.cr6.eq) goto loc_82224BD8;
	// addis r11,r31,-4096
	ctx.r11.s64 = ctx.r31.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82224bd8
	if (ctx.cr6.gt) goto loc_82224BD8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82224bd8
	if (ctx.cr6.eq) goto loc_82224BD8;
	// bdz 0x82224bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82224BD8;
	// bdz 0x82224bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82224BD8;
	// bdz 0x82224c9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82224C9C;
	// bdz 0x82224bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82224BD8;
	// b 0x82224c50
	goto loc_82224C50;
loc_82224B98:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r10,r11,11
	ctx.r10.u64 = ctx.r11.u64 | 11;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82224c30
	if (ctx.cr6.gt) goto loc_82224C30;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r10,r11,10
	ctx.r10.u64 = ctx.r11.u64 | 10;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82224bd8
	if (!ctx.cr6.lt) goto loc_82224BD8;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82224bd8
	if (ctx.cr6.lt) goto loc_82224BD8;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r10,r11,9
	ctx.r10.u64 = ctx.r11.u64 | 9;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82224c9c
	if (!ctx.cr6.gt) goto loc_82224C9C;
loc_82224BD8:
	// li r31,6
	ctx.r31.s64 = 6;
loc_82224BDC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822238a8
	ctx.lr = 0x82224BE8;
	sub_822238A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82224618
	ctx.lr = 0x82224BF4;
	sub_82224618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82224c00
	if (ctx.cr6.eq) goto loc_82224C00;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82224C00:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addic r10,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subfe r9,r10,r31
	temp.u8 = (~ctx.r10.u32 + ctx.r31.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// bne cr6,0x82224c28
	if (!ctx.cr6.eq) goto loc_82224C28;
	// li r10,30201
	ctx.r10.s64 = 30201;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_82224C28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82224C30:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82224bd8
	if (ctx.cr6.lt) goto loc_82224BD8;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82224bd8
	if (ctx.cr6.gt) goto loc_82224BD8;
loc_82224C50:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82224bdc
	goto loc_82224BDC;
loc_82224C58:
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82224ca4
	if (ctx.cr6.gt) goto loc_82224CA4;
	// beq cr6,0x82224c9c
	if (ctx.cr6.eq) goto loc_82224C9C;
loc_82224C6C:
	// addis r11,r10,-8192
	ctx.r11.s64 = ctx.r10.s64 + -536870912;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82224bd8
	if (ctx.cr6.gt) goto loc_82224BD8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82224c50
	if (ctx.cr6.eq) goto loc_82224C50;
	// bdz 0x82224c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82224C50;
	// bdz 0x82224bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82224BD8;
	// bdz 0x82224bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82224BD8;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82224bdc
	goto loc_82224BDC;
loc_82224C9C:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82224bdc
	goto loc_82224BDC;
loc_82224CA4:
	// addis r11,r31,-16384
	ctx.r11.s64 = ctx.r31.s64 + -1073741824;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82224bd8
	if (ctx.cr6.gt) goto loc_82224BD8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82224bd8
	if (ctx.cr6.eq) goto loc_82224BD8;
	// bdz 0x82224c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82224C50;
	// bdz 0x82224c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82224C50;
	// bdz 0x82224c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82224C50;
	// bdz 0x82224c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82224C50;
	// bdz 0x82224c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82224C50;
	// bdz 0x82224c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82224C50;
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x82224bdc
	goto loc_82224BDC;
}

__attribute__((alias("__imp__sub_82224CE0"))) PPC_WEAK_FUNC(sub_82224CE0);
PPC_FUNC_IMPL(__imp__sub_82224CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82224CE8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82354838
	ctx.lr = 0x82224CF4;
	sub_82354838(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224d30
	if (ctx.cr6.eq) goto loc_82224D30;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// li r4,204
	ctx.r4.s64 = 204;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,21572(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21572);
	// lbz r29,-5972(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + -5972);
	// bl 0x82182ea0
	ctx.lr = 0x82224D1C;
	sub_82182EA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355358
	ctx.lr = 0x82224D24;
	sub_82355358(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82182ea0
	ctx.lr = 0x82224D30;
	sub_82182EA0(ctx, base);
loc_82224D30:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82224d7c
	if (ctx.cr6.gt) goto loc_82224D7C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82224d7c
	// bdzf 4*cr6+eq,0x82224d64
	// bne cr6,0x82224d74
	if (!ctx.cr6.eq) goto loc_82224D74;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82224858
	ctx.lr = 0x82224D5C;
	sub_82224858(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82224D64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82224180
	ctx.lr = 0x82224D6C;
	sub_82224180(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82224D74:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822248d0
	ctx.lr = 0x82224D7C;
	sub_822248D0(ctx, base);
loc_82224D7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82224D84"))) PPC_WEAK_FUNC(sub_82224D84);
PPC_FUNC_IMPL(__imp__sub_82224D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82224D88"))) PPC_WEAK_FUNC(sub_82224D88);
PPC_FUNC_IMPL(__imp__sub_82224D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82224D90;
	sub_82248764(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// beq cr6,0x82224e5c
	if (ctx.cr6.eq) goto loc_82224E5C;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
loc_82224DC4:
	// addi r23,r29,1
	ctx.r23.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x82224e38
	if (ctx.cr6.gt) goto loc_82224E38;
	// addic. r27,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r27.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82224e90
	if (ctx.cr0.eq) goto loc_82224E90;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823570e0
	ctx.lr = 0x82224DE0;
	sub_823570E0(ctx, base);
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357208
	ctx.lr = 0x82224DF0;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82224DFC;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82224e90
	if (ctx.cr6.eq) goto loc_82224E90;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x82224E10;
	sub_823585A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82224e30
	if (ctx.cr6.eq) goto loc_82224E30;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82358508
	ctx.lr = 0x82224E28;
	sub_82358508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357240
	ctx.lr = 0x82224E30;
	sub_82357240(ctx, base);
loc_82224E30:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82224E38:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82224e90
	if (ctx.cr6.eq) goto loc_82224E90;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// stwx r25,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r25.u32);
	// addi r25,r25,96
	ctx.r25.s64 = ctx.r25.s64 + 96;
	// blt cr6,0x82224dc4
	if (ctx.cr6.lt) goto loc_82224DC4;
loc_82224E5C:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82354ce8
	ctx.lr = 0x82224E74;
	sub_82354CE8(ctx, base);
loc_82224E74:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82224e84
	if (ctx.cr6.eq) goto loc_82224E84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357240
	ctx.lr = 0x82224E84;
	sub_82357240(ctx, base);
loc_82224E84:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487b4
	// ERROR 822487B4
	return;
loc_82224E90:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,36
	ctx.r7.s64 = 36;
	// ori r6,r9,1
	ctx.r6.u64 = ctx.r9.u64 | 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r10,r22,-4
	ctx.r10.s64 = ctx.r22.s64 + -4;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
loc_82224EC8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82224ec8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82224EC8;
	// b 0x82224e74
	goto loc_82224E74;
}

__attribute__((alias("__imp__sub_82224ED8"))) PPC_WEAK_FUNC(sub_82224ED8);
PPC_FUNC_IMPL(__imp__sub_82224ED8) {
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
	// bl 0x82224458
	ctx.lr = 0x82224EF4;
	sub_82224458(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82224f0c
	if (ctx.cr6.eq) goto loc_82224F0C;
	// bl 0x82357240
	ctx.lr = 0x82224F08;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82224F0C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82224F2C"))) PPC_WEAK_FUNC(sub_82224F2C);
PPC_FUNC_IMPL(__imp__sub_82224F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82224F30"))) PPC_WEAK_FUNC(sub_82224F30);
PPC_FUNC_IMPL(__imp__sub_82224F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82224F38;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82224f74
	if (ctx.cr6.gt) goto loc_82224F74;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822249c0
	ctx.lr = 0x82224F60;
	sub_822249C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82224f74
	if (!ctx.cr6.eq) goto loc_82224F74;
loc_82224F68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82224F74:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224f68
	if (ctx.cr6.eq) goto loc_82224F68;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82224f98
	if (ctx.cr0.eq) goto loc_82224F98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357068
	ctx.lr = 0x82224F98;
	sub_82357068(ctx, base);
loc_82224F98:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357038
	ctx.lr = 0x82224FA4;
	sub_82357038(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82224FBC"))) PPC_WEAK_FUNC(sub_82224FBC);
PPC_FUNC_IMPL(__imp__sub_82224FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82224FC0"))) PPC_WEAK_FUNC(sub_82224FC0);
PPC_FUNC_IMPL(__imp__sub_82224FC0) {
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
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82224ff8
	if (!ctx.cr6.eq) goto loc_82224FF8;
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
loc_82224FF8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82225008
	if (ctx.cr6.eq) goto loc_82225008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82224ce0
	ctx.lr = 0x82225008;
	sub_82224CE0(ctx, base);
loc_82225008:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82225028"))) PPC_WEAK_FUNC(sub_82225028);
PPC_FUNC_IMPL(__imp__sub_82225028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82225030;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82354838
	ctx.lr = 0x82225044;
	sub_82354838(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222506c
	if (ctx.cr6.eq) goto loc_8222506C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229528
	ctx.lr = 0x82225058;
	sub_82229528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355040
	ctx.lr = 0x82225064;
	sub_82355040(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822250a8
	if (!ctx.cr6.eq) goto loc_822250A8;
loc_8222506C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822245a0
	ctx.lr = 0x82225078;
	sub_822245A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222508c
	if (ctx.cr6.eq) goto loc_8222508C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8222508C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x82224ad8
	ctx.lr = 0x8222509C;
	sub_82224AD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_822250A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822250B4"))) PPC_WEAK_FUNC(sub_822250B4);
PPC_FUNC_IMPL(__imp__sub_822250B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822250B8"))) PPC_WEAK_FUNC(sub_822250B8);
PPC_FUNC_IMPL(__imp__sub_822250B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x822250C0;
	sub_8224877C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x822250ec
	if (!ctx.cr6.lt) goto loc_822250EC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x822250ec
	if (ctx.cr6.lt) goto loc_822250EC;
loc_822250E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_822250EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x822250F4;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822250e0
	if (!ctx.cr6.eq) goto loc_822250E0;
	// bl 0x82354838
	ctx.lr = 0x82225100;
	sub_82354838(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822250e0
	if (ctx.cr6.eq) goto loc_822250E0;
	// bl 0x822298a8
	ctx.lr = 0x82225110;
	sub_822298A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82225140
	if (ctx.cr6.eq) goto loc_82225140;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82225124:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222aa40
	ctx.lr = 0x82225130;
	sub_8222AA40(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// addi r29,r29,96
	ctx.r29.s64 = ctx.r29.s64 + 96;
	// bne 0x82225124
	if (!ctx.cr0.eq) goto loc_82225124;
loc_82225140:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x82225158
	if (!ctx.cr6.lt) goto loc_82225158;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// blt cr6,0x82225158
	if (ctx.cr6.lt) goto loc_82225158;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82225168
	goto loc_82225168;
loc_82225158:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,9644
	ctx.r9.s64 = ctx.r11.s64 + 9644;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82225168:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82224d88
	ctx.lr = 0x8222517C;
	sub_82224D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82225188;
	sub_82229558(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82225190"))) PPC_WEAK_FUNC(sub_82225190);
PPC_FUNC_IMPL(__imp__sub_82225190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82225198;
	sub_82248788(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x822251bc
	if (!ctx.cr6.lt) goto loc_822251BC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x822251bc
	if (ctx.cr6.lt) goto loc_822251BC;
loc_822251B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_822251BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229640
	ctx.lr = 0x822251C4;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822251b0
	if (!ctx.cr6.eq) goto loc_822251B0;
	// bl 0x82354838
	ctx.lr = 0x822251D0;
	sub_82354838(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822251b0
	if (ctx.cr6.eq) goto loc_822251B0;
	// bl 0x822298c8
	ctx.lr = 0x822251E0;
	sub_822298C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82229888
	ctx.lr = 0x822251E8;
	sub_82229888(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822251FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82225214
	if (!ctx.cr6.lt) goto loc_82225214;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82225214
	if (ctx.cr6.lt) goto loc_82225214;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82225224
	goto loc_82225224;
loc_82225214:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,9644
	ctx.r9.s64 = ctx.r11.s64 + 9644;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82225224:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356c70
	ctx.lr = 0x82225230;
	sub_82356C70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82357fe0
	ctx.lr = 0x8222523C;
	sub_82357FE0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82354d28
	ctx.lr = 0x82225254;
	sub_82354D28(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82358098
	ctx.lr = 0x8222525C;
	sub_82358098(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82224ed8
	ctx.lr = 0x82225264;
	sub_82224ED8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x82225270;
	sub_82229558(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82225278"))) PPC_WEAK_FUNC(sub_82225278);
PPC_FUNC_IMPL(__imp__sub_82225278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82225280;
	sub_82248780(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82229640
	ctx.lr = 0x82225294;
	sub_82229640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822252a8
	if (ctx.cr6.eq) goto loc_822252A8;
loc_8222529C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_822252A8:
	// bl 0x82354838
	ctx.lr = 0x822252AC;
	sub_82354838(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222529c
	if (ctx.cr6.eq) goto loc_8222529C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r28,r11,-2436
	ctx.r28.s64 = ctx.r11.s64 + -2436;
loc_822252C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357438
	ctx.lr = 0x822252D0;
	sub_82357438(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// bge 0x822252c8
	if (!ctx.cr0.lt) goto loc_822252C8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82225358
	if (ctx.cr6.eq) goto loc_82225358;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_822252F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// bl 0x8222b558
	ctx.lr = 0x82225310;
	sub_8222B558(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229288
	ctx.lr = 0x8222531C;
	sub_82229288(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222b4f0
	ctx.lr = 0x8222532C;
	sub_8222B4F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229288
	ctx.lr = 0x82225338;
	sub_82229288(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222b4f0
	ctx.lr = 0x82225348;
	sub_8222B4F0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x822252f0
	if (!ctx.cr0.eq) goto loc_822252F0;
loc_82225358:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82224d88
	ctx.lr = 0x82225370;
	sub_82224D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229558
	ctx.lr = 0x8222537C;
	sub_82229558(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r1,304
	ctx.r31.s64 = ctx.r1.s64 + 304;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82225388:
	// stwu r28,-96(r31)
	ea = -96 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823574a0
	ctx.lr = 0x82225394;
	sub_823574A0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82225388
	if (!ctx.cr0.lt) goto loc_82225388;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822253A8"))) PPC_WEAK_FUNC(sub_822253A8);
PPC_FUNC_IMPL(__imp__sub_822253A8) {
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
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82225414
	if (ctx.cr6.eq) goto loc_82225414;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82225414
	if (!ctx.cr6.eq) goto loc_82225414;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82225414
	if (ctx.cr6.eq) goto loc_82225414;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82221350
	ctx.lr = 0x822253E4;
	sub_82221350(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222542c
	if (ctx.cr6.eq) goto loc_8222542C;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82225478
	if (ctx.cr6.eq) goto loc_82225478;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225028
	ctx.lr = 0x82225404;
	sub_82225028(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82225478
	if (ctx.cr6.eq) goto loc_82225478;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
loc_82225414:
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
loc_8222542C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82221b38
	ctx.lr = 0x82225434;
	sub_82221B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82225414
	if (ctx.cr6.eq) goto loc_82225414;
	// bl 0x8215bd60
	ctx.lr = 0x82225440;
	sub_8215BD60(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82225470
	if (ctx.cr6.eq) goto loc_82225470;
	// bl 0x82221a48
	ctx.lr = 0x82225454;
	sub_82221A48(ctx, base);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
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
loc_82225470:
	// bl 0x82221ac0
	ctx.lr = 0x82225474;
	sub_82221AC0(ctx, base);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
loc_82225478:
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

__attribute__((alias("__imp__sub_82225490"))) PPC_WEAK_FUNC(sub_82225490);
PPC_FUNC_IMPL(__imp__sub_82225490) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x822aa648
	sub_822AA648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822254B8"))) PPC_WEAK_FUNC(sub_822254B8);
PPC_FUNC_IMPL(__imp__sub_822254B8) {
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
	// bl 0x82229508
	ctx.lr = 0x822254C8;
	sub_82229508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822254ec
	if (ctx.cr6.eq) goto loc_822254EC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// lwz r3,756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 756);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822254EC:
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

__attribute__((alias("__imp__sub_82225500"))) PPC_WEAK_FUNC(sub_82225500);
PPC_FUNC_IMPL(__imp__sub_82225500) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1824
	ctx.r3.s64 = ctx.r3.s64 + 1824;
	// b 0x82229088
	sub_82229088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82225508"))) PPC_WEAK_FUNC(sub_82225508);
PPC_FUNC_IMPL(__imp__sub_82225508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -740);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82225524"))) PPC_WEAK_FUNC(sub_82225524);
PPC_FUNC_IMPL(__imp__sub_82225524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82225528"))) PPC_WEAK_FUNC(sub_82225528);
PPC_FUNC_IMPL(__imp__sub_82225528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82225530;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,2
	ctx.r24.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r27,r3,184
	ctx.r27.s64 = ctx.r3.s64 + 184;
	// addi r28,r3,152
	ctx.r28.s64 = ctx.r3.s64 + 152;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82225554:
	// stw r24,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r24.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r25,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r25.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bl 0x822aa648
	ctx.lr = 0x82225570;
	sub_822AA648(ctx, base);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// stw r31,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r31.u32);
	// stw r31,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r31.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// stw r31,-16(r28)
	PPC_STORE_U32(ctx.r28.u32 + -16, ctx.r31.u32);
	// stw r31,-12(r28)
	PPC_STORE_U32(ctx.r28.u32 + -12, ctx.r31.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// stw r31,-8(r28)
	PPC_STORE_U32(ctx.r28.u32 + -8, ctx.r31.u32);
	// stw r31,-4(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4, ctx.r31.u32);
	// stw r31,-8(r27)
	PPC_STORE_U32(ctx.r27.u32 + -8, ctx.r31.u32);
	// stw r31,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r31.u32);
	// bl 0x822aa648
	ctx.lr = 0x822255BC;
	sub_822AA648(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// addi r27,r27,264
	ctx.r27.s64 = ctx.r27.s64 + 264;
	// bne 0x82225554
	if (!ctx.cr0.eq) goto loc_82225554;
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r25,704(r29)
	PPC_STORE_U32(ctx.r29.u32 + 704, ctx.r25.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r31,708(r29)
	PPC_STORE_U32(ctx.r29.u32 + 708, ctx.r31.u32);
	// stw r31,712(r29)
	PPC_STORE_U32(ctx.r29.u32 + 712, ctx.r31.u32);
	// addi r11,r29,767
	ctx.r11.s64 = ctx.r29.s64 + 767;
	// stw r31,716(r29)
	PPC_STORE_U32(ctx.r29.u32 + 716, ctx.r31.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r31,720(r29)
	PPC_STORE_U32(ctx.r29.u32 + 720, ctx.r31.u32);
	// stw r31,724(r29)
	PPC_STORE_U32(ctx.r29.u32 + 724, ctx.r31.u32);
	// stw r31,728(r29)
	PPC_STORE_U32(ctx.r29.u32 + 728, ctx.r31.u32);
	// stw r8,732(r29)
	PPC_STORE_U32(ctx.r29.u32 + 732, ctx.r8.u32);
	// stw r31,736(r29)
	PPC_STORE_U32(ctx.r29.u32 + 736, ctx.r31.u32);
	// stw r31,740(r29)
	PPC_STORE_U32(ctx.r29.u32 + 740, ctx.r31.u32);
	// stw r31,744(r29)
	PPC_STORE_U32(ctx.r29.u32 + 744, ctx.r31.u32);
	// stw r31,748(r29)
	PPC_STORE_U32(ctx.r29.u32 + 748, ctx.r31.u32);
	// stw r31,752(r29)
	PPC_STORE_U32(ctx.r29.u32 + 752, ctx.r31.u32);
	// stw r31,756(r29)
	PPC_STORE_U32(ctx.r29.u32 + 756, ctx.r31.u32);
loc_82225618:
	// sth r31,-7(r11)
	PPC_STORE_U16(ctx.r11.u32 + -7, ctx.r31.u16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r31,-5(r11)
	PPC_STORE_U16(ctx.r11.u32 + -5, ctx.r31.u16);
	// sth r31,-3(r11)
	PPC_STORE_U16(ctx.r11.u32 + -3, ctx.r31.u16);
	// stb r9,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82225618
	if (!ctx.cr0.eq) goto loc_82225618;
	// stw r31,1784(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1784, ctx.r31.u32);
	// stw r31,1788(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1788, ctx.r31.u32);
	// stw r31,1792(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1792, ctx.r31.u32);
	// stw r31,1796(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1796, ctx.r31.u32);
	// stw r31,1800(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1800, ctx.r31.u32);
	// stw r31,1804(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1804, ctx.r31.u32);
	// stw r31,1808(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1808, ctx.r31.u32);
	// stw r31,1812(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1812, ctx.r31.u32);
	// stw r31,1816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1816, ctx.r31.u32);
	// stw r31,1820(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1820, ctx.r31.u32);
	// stw r31,1868(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1868, ctx.r31.u32);
	// stw r31,1872(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1872, ctx.r31.u32);
	// stw r31,1876(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1876, ctx.r31.u32);
	// stw r31,1880(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1880, ctx.r31.u32);
	// stw r31,1884(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1884, ctx.r31.u32);
	// stw r31,1888(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1888, ctx.r31.u32);
	// stw r31,1892(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1892, ctx.r31.u32);
	// stw r31,1896(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1896, ctx.r31.u32);
	// stw r31,1900(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1900, ctx.r31.u32);
	// stw r31,1904(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1904, ctx.r31.u32);
	// stw r31,1908(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1908, ctx.r31.u32);
	// stw r31,1912(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1912, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82225698"))) PPC_WEAK_FUNC(sub_82225698);
PPC_FUNC_IMPL(__imp__sub_82225698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x822256A0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bge cr6,0x822257b8
	if (!ctx.cr6.lt) goto loc_822257B8;
	// lwz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r10,708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822257b8
	if (!ctx.cr6.lt) goto loc_822257B8;
	// mulli r11,r4,68
	ctx.r11.s64 = ctx.r4.s64 * 68;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,6200
	ctx.r4.s64 = 6200;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822256ec
	if (ctx.cr6.eq) goto loc_822256EC;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822256ec
	if (ctx.cr6.eq) goto loc_822256EC;
	// li r4,6201
	ctx.r4.s64 = 6201;
loc_822256EC:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82225704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,720(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// mulli r11,r8,264
	ctx.r11.s64 = ctx.r8.s64 * 264;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// bl 0x8218a5f0
	ctx.lr = 0x82225724;
	sub_8218A5F0(ctx, base);
	// addi r7,r28,36
	ctx.r7.s64 = ctx.r28.s64 + 36;
	// lwz r5,720(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,2
	ctx.r6.s64 = 2;
	// add r26,r11,r31
	ctx.r26.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r11,r5,264
	ctx.r11.s64 = ctx.r5.s64 * 264;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r25,r31,136
	ctx.r25.s64 = ctx.r31.s64 + 136;
	// stw r29,176(r4)
	PPC_STORE_U32(ctx.r4.u32 + 176, ctx.r29.u32);
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r6,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r6.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
loc_82225770:
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822257a0
	if (!ctx.cr6.lt) goto loc_822257A0;
	// bl 0x8215bd40
	ctx.lr = 0x82225784;
	sub_8215BD40(ctx, base);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822257a0
	if (!ctx.cr6.eq) goto loc_822257A0;
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
loc_822257A0:
	// addi r28,r28,60
	ctx.r28.s64 = ctx.r28.s64 + 60;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,20
	ctx.r26.s64 = ctx.r26.s64 + 20;
	// addi r25,r25,20
	ctx.r25.s64 = ctx.r25.s64 + 20;
	// cmplwi cr6,r28,120
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 120, ctx.xer);
	// blt cr6,0x82225770
	if (ctx.cr6.lt) goto loc_82225770;
loc_822257B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_822257C0"))) PPC_WEAK_FUNC(sub_822257C0);
PPC_FUNC_IMPL(__imp__sub_822257C0) {
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
	// lwz r30,724(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// bl 0x82225028
	ctx.lr = 0x822257E8;
	sub_82225028(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82225814
	if (ctx.cr6.eq) goto loc_82225814;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8222580c
	if (!ctx.cr6.eq) goto loc_8222580C;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// bl 0x82221c80
	ctx.lr = 0x82225800;
	sub_82221C80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222580c
	if (ctx.cr6.eq) goto loc_8222580C;
	// li r30,6
	ctx.r30.s64 = 6;
loc_8222580C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82225818
	goto loc_82225818;
loc_82225814:
	// li r3,7
	ctx.r3.s64 = 7;
loc_82225818:
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

__attribute__((alias("__imp__sub_82225830"))) PPC_WEAK_FUNC(sub_82225830);
PPC_FUNC_IMPL(__imp__sub_82225830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82225838;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// lwz r29,724(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// bl 0x82225028
	ctx.lr = 0x82225854;
	sub_82225028(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82225864
	if (ctx.cr6.eq) goto loc_82225864;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82225890
	if (!ctx.cr6.eq) goto loc_82225890;
loc_82225864:
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// bl 0x82221c80
	ctx.lr = 0x8222586C;
	sub_82221C80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82225890
	if (!ctx.cr6.eq) goto loc_82225890;
	// lwz r11,1872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1872);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8222588c
	if (!ctx.cr6.eq) goto loc_8222588C;
	// bl 0x8215bec8
	ctx.lr = 0x82225884;
	sub_8215BEC8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
loc_8222588C:
	// li r29,13
	ctx.r29.s64 = 13;
loc_82225890:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8222589C"))) PPC_WEAK_FUNC(sub_8222589C);
PPC_FUNC_IMPL(__imp__sub_8222589C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822258A0"))) PPC_WEAK_FUNC(sub_822258A0);
PPC_FUNC_IMPL(__imp__sub_822258A0) {
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
	// lwz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,748(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 748);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r11,752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 752, ctx.r11.u32);
	// bne cr6,0x822258ec
	if (!ctx.cr6.eq) goto loc_822258EC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 748, ctx.r10.u32);
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
loc_822258EC:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r3,-744(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -744);
	// bl 0x82221cd0
	ctx.lr = 0x822258F8;
	sub_82221CD0(ctx, base);
	// stw r3,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222591c
	if (!ctx.cr6.eq) goto loc_8222591C;
	// lwz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// blt cr6,0x8222591c
	if (ctx.cr6.lt) goto loc_8222591C;
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// stw r10,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r10.u32);
loc_8222591C:
	// lwz r11,756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8222593C"))) PPC_WEAK_FUNC(sub_8222593C);
PPC_FUNC_IMPL(__imp__sub_8222593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82225940"))) PPC_WEAK_FUNC(sub_82225940);
PPC_FUNC_IMPL(__imp__sub_82225940) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82225990
	if (ctx.cr6.lt) goto loc_82225990;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bge cr6,0x82225990
	if (!ctx.cr6.lt) goto loc_82225990;
	// lwz r11,708(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 708);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82225970:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82225980
	if (!ctx.cr6.eq) goto loc_82225980;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82225980:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 + 68;
	// bdnz 0x82225970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82225970;
	// blr 
	return;
loc_82225990:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82225998"))) PPC_WEAK_FUNC(sub_82225998);
PPC_FUNC_IMPL(__imp__sub_82225998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822259A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x822259AC;
	sub_8215BEC8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,704(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822259d0
	if (!ctx.cr6.eq) goto loc_822259D0;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822259D0:
	// bl 0x8215bec8
	ctx.lr = 0x822259D4;
	sub_8215BEC8(ctx, base);
	// stb r31,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r31.u8);
	// bl 0x8215bec8
	ctx.lr = 0x822259DC;
	sub_8215BEC8(ctx, base);
	// stb r30,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r30.u8);
	// bl 0x820cc090
	ctx.lr = 0x822259E4;
	sub_820CC090(ctx, base);
	// bl 0x8215bec8
	ctx.lr = 0x822259E8;
	sub_8215BEC8(ctx, base);
	// lwz r31,76(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x82163df0
	ctx.lr = 0x822259F0;
	sub_82163DF0(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// add. r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82225a04
	if (!ctx.cr0.lt) goto loc_82225A04;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82225a18
	goto loc_82225A18;
loc_82225A04:
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51612
	ctx.r10.u64 = ctx.r10.u64 | 51612;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82225a18
	if (!ctx.cr6.gt) goto loc_82225A18;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82225A18:
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// bl 0x82163df0
	ctx.lr = 0x82225A20;
	sub_82163DF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8215bec8
	ctx.lr = 0x82225A28;
	sub_8215BEC8(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// mulli r31,r10,52
	ctx.r31.s64 = ctx.r10.s64 * 52;
	// bl 0x8215bec8
	ctx.lr = 0x82225A38;
	sub_8215BEC8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82225A48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8212edb0
	ctx.lr = 0x82225A58;
	sub_8212EDB0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x82225a48
	if (ctx.cr6.lt) goto loc_82225A48;
	// bl 0x820cb338
	ctx.lr = 0x82225A68;
	sub_820CB338(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82225A70"))) PPC_WEAK_FUNC(sub_82225A70);
PPC_FUNC_IMPL(__imp__sub_82225A70) {
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
	// bl 0x82227aa0
	ctx.lr = 0x82225A90;
	sub_82227AA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225aa8
	if (ctx.cr6.eq) goto loc_82225AA8;
	// bl 0x82227aa0
	ctx.lr = 0x82225A9C;
	sub_82227AA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82228810
	ctx.lr = 0x82225AA4;
	sub_82228810(ctx, base);
	// b 0x82225aac
	goto loc_82225AAC;
loc_82225AA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82225AAC:
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

__attribute__((alias("__imp__sub_82225AC4"))) PPC_WEAK_FUNC(sub_82225AC4);
PPC_FUNC_IMPL(__imp__sub_82225AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82225AC8"))) PPC_WEAK_FUNC(sub_82225AC8);
PPC_FUNC_IMPL(__imp__sub_82225AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82225AD0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1796);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82225b80
	if (ctx.cr6.eq) goto loc_82225B80;
	// lwz r4,704(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// bl 0x82225940
	ctx.lr = 0x82225AEC;
	sub_82225940(ctx, base);
	// mulli r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 * 68;
	// lwz r10,708(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r26,8(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ble cr6,0x82225b80
	if (!ctx.cr6.gt) goto loc_82225B80;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
loc_82225B14:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82225b6c
	if (ctx.cr6.eq) goto loc_82225B6C;
	// lwz r11,1800(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1800);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82225b50
	if (ctx.cr6.eq) goto loc_82225B50;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82225b50
	if (ctx.cr6.eq) goto loc_82225B50;
	// bl 0x822211e0
	ctx.lr = 0x82225B40;
	sub_822211E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82225b6c
	if (!ctx.cr6.eq) goto loc_82225B6C;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82225b60
	goto loc_82225B60;
loc_82225B50:
	// bl 0x822211e0
	ctx.lr = 0x82225B54;
	sub_822211E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82225b6c
	if (ctx.cr6.eq) goto loc_82225B6C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82225B60:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,-744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// bl 0x82221198
	ctx.lr = 0x82225B6C;
	sub_82221198(ctx, base);
loc_82225B6C:
	// lwz r11,708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,68
	ctx.r28.s64 = ctx.r28.s64 + 68;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82225b14
	if (ctx.cr6.lt) goto loc_82225B14;
loc_82225B80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82225B88"))) PPC_WEAK_FUNC(sub_82225B88);
PPC_FUNC_IMPL(__imp__sub_82225B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mulli r10,r4,68
	ctx.r10.s64 = ctx.r4.s64 * 68;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82225BB4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82225bb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82225BB4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82225BC8"))) PPC_WEAK_FUNC(sub_82225BC8);
PPC_FUNC_IMPL(__imp__sub_82225BC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,708(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82225bf8
	if (ctx.cr6.eq) goto loc_82225BF8;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
loc_82225BDC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82225c00
	if (ctx.cr6.eq) goto loc_82225C00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 + 68;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82225bdc
	if (ctx.cr6.lt) goto loc_82225BDC;
loc_82225BF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82225C00:
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82225C10"))) PPC_WEAK_FUNC(sub_82225C10);
PPC_FUNC_IMPL(__imp__sub_82225C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82225C18;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,708(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82225d08
	if (!ctx.cr6.gt) goto loc_82225D08;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// lis r24,-32178
	ctx.r24.s64 = -2108817408;
	// addi r27,r11,-5052
	ctx.r27.s64 = ctx.r11.s64 + -5052;
loc_82225C44:
	// lwz r29,-44(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -44);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82225cf4
	if (ctx.cr6.eq) goto loc_82225CF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82225C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82225cf4
	if (!ctx.cr6.eq) goto loc_82225CF4;
	// lis r4,17231
	ctx.r4.s64 = 1129250816;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// ori r4,r4,20549
	ctx.r4.u64 = ctx.r4.u64 | 20549;
	// bl 0x821882d0
	ctx.lr = 0x82225C88;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82225cf4
	if (ctx.cr6.eq) goto loc_82225CF4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225cf4
	if (ctx.cr6.eq) goto loc_82225CF4;
	// lwz r10,1284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82225cf4
	if (!ctx.cr6.eq) goto loc_82225CF4;
	// lwz r11,720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 720);
	// lwz r10,708(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 708);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82225cd0
	if (ctx.cr6.eq) goto loc_82225CD0;
	// lwz r3,-744(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -744);
	// bl 0x82221568
	ctx.lr = 0x82225CC8;
	sub_82221568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82225ce8
	if (!ctx.cr6.eq) goto loc_82225CE8;
loc_82225CD0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,1820(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1820);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82225ce8
	if (ctx.cr6.eq) goto loc_82225CE8;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_82225CE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x820c66e8
	ctx.lr = 0x82225CF4;
	sub_820C66E8(ctx, base);
loc_82225CF4:
	// lwz r11,708(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 708);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82225c44
	if (ctx.cr6.lt) goto loc_82225C44;
loc_82225D08:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82225D10"))) PPC_WEAK_FUNC(sub_82225D10);
PPC_FUNC_IMPL(__imp__sub_82225D10) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,136
	ctx.r10.s64 = 136;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,-744(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -744);
	// bl 0x822213a8
	ctx.lr = 0x82225D4C;
	sub_822213A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82225D5C"))) PPC_WEAK_FUNC(sub_82225D5C);
PPC_FUNC_IMPL(__imp__sub_82225D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82225D60"))) PPC_WEAK_FUNC(sub_82225D60);
PPC_FUNC_IMPL(__imp__sub_82225D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r10,136
	ctx.r10.s64 = 136;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r3,-744(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -744);
	// bl 0x82221400
	ctx.lr = 0x82225DA4;
	sub_82221400(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82225DB4"))) PPC_WEAK_FUNC(sub_82225DB4);
PPC_FUNC_IMPL(__imp__sub_82225DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82225DB8"))) PPC_WEAK_FUNC(sub_82225DB8);
PPC_FUNC_IMPL(__imp__sub_82225DB8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -740);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82225df4
	if (ctx.cr6.eq) goto loc_82225DF4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82183e40
	ctx.lr = 0x82225DE8;
	sub_82183E40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-740(r31)
	PPC_STORE_U32(ctx.r31.u32 + -740, ctx.r11.u32);
loc_82225DF4:
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

__attribute__((alias("__imp__sub_82225E08"))) PPC_WEAK_FUNC(sub_82225E08);
PPC_FUNC_IMPL(__imp__sub_82225E08) {
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
	// lwz r4,704(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82225940
	ctx.lr = 0x82225E28;
	sub_82225940(ctx, base);
	// mulli r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 * 68;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82225e40
	if (!ctx.cr6.gt) goto loc_82225E40;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82225E40:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221b38
	ctx.lr = 0x82225E4C;
	sub_82221B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82225e5c
	if (ctx.cr6.eq) goto loc_82225E5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82225E5C:
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

__attribute__((alias("__imp__sub_82225E70"))) PPC_WEAK_FUNC(sub_82225E70);
PPC_FUNC_IMPL(__imp__sub_82225E70) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82225940
	ctx.lr = 0x82225E88;
	sub_82225940(ctx, base);
	// mulli r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 * 68;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x82225ea4
	if (ctx.cr6.gt) goto loc_82225EA4;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_82225EA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82225EB4"))) PPC_WEAK_FUNC(sub_82225EB4);
PPC_FUNC_IMPL(__imp__sub_82225EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82225EB8"))) PPC_WEAK_FUNC(sub_82225EB8);
PPC_FUNC_IMPL(__imp__sub_82225EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82225EC0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,704(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82225940
	ctx.lr = 0x82225ED8;
	sub_82225940(ctx, base);
	// mulli r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 * 68;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82225ef0
	if (!ctx.cr6.gt) goto loc_82225EF0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82225EF0:
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r3,-744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -744);
	// bl 0x82221b38
	ctx.lr = 0x82225EFC;
	sub_82221B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82225f0c
	if (ctx.cr6.eq) goto loc_82225F0C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82225f90
	if (ctx.cr6.eq) goto loc_82225F90;
loc_82225F0C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -748);
	// bl 0x82220d10
	ctx.lr = 0x82225F18;
	sub_82220D10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82225f2c
	if (ctx.cr6.eq) goto loc_82225F2C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82225F2C:
	// lwz r3,-744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -744);
	// bl 0x82221b38
	ctx.lr = 0x82225F34;
	sub_82221B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82225f48
	if (!ctx.cr6.eq) goto loc_82225F48;
loc_82225F3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82225F48:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82225f8c
	if (ctx.cr6.gt) goto loc_82225F8C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82225f80
	// bdzf 4*cr6+eq,0x82225f80
	// bdzf 4*cr6+eq,0x82225f80
	// bdzf 4*cr6+eq,0x82225f80
	// bdzf 4*cr6+eq,0x82225f8c
	// bdzf 4*cr6+eq,0x82225f3c
	// bdzf 4*cr6+eq,0x82225f3c
	// bne cr6,0x82225f3c
	if (!ctx.cr6.eq) goto loc_82225F3C;
loc_82225F80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82225F8C:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82225F90:
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r10,708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82225fb8
	if (!ctx.cr6.eq) goto loc_82225FB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225e08
	ctx.lr = 0x82225FAC;
	sub_82225E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x82225fbc
	if (ctx.cr6.eq) goto loc_82225FBC;
loc_82225FB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82225FBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82225FC4"))) PPC_WEAK_FUNC(sub_82225FC4);
PPC_FUNC_IMPL(__imp__sub_82225FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82225FC8"))) PPC_WEAK_FUNC(sub_82225FC8);
PPC_FUNC_IMPL(__imp__sub_82225FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82225FD0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,724(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163728
	ctx.lr = 0x82225FE0;
	sub_82163728(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82225ffc
	if (!ctx.cr6.eq) goto loc_82225FFC;
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82225ffc
	if (!ctx.cr6.eq) goto loc_82225FFC;
	// stw r26,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r26.u32);
loc_82225FFC:
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r9,708(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r29,r10,-7560
	ctx.r29.s64 = ctx.r10.s64 + -7560;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82226078
	if (!ctx.cr6.eq) goto loc_82226078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225e08
	ctx.lr = 0x82226024;
	sub_82225E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82226078
	if (!ctx.cr6.eq) goto loc_82226078;
	// lwz r11,1804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82226050
	if (!ctx.cr6.gt) goto loc_82226050;
	// stw r27,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r27.u32);
loc_82226050:
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82226078
	if (ctx.cr6.eq) goto loc_82226078;
	// stw r27,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r26.u32);
	// bl 0x82225998
	ctx.lr = 0x8222606C;
	sub_82225998(ctx, base);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82226078:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,704(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x82225940
	ctx.lr = 0x82226088;
	sub_82225940(ctx, base);
	// mulli r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 * 68;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822260a0
	if (!ctx.cr6.gt) goto loc_822260A0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_822260A0:
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r3,-744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	// bl 0x82221b38
	ctx.lr = 0x822260AC;
	sub_82221B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822260bc
	if (ctx.cr6.eq) goto loc_822260BC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82226110
	if (ctx.cr6.eq) goto loc_82226110;
loc_822260BC:
	// lwz r11,1804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822260e0
	if (!ctx.cr6.gt) goto loc_822260E0;
	// stw r27,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r27.u32);
loc_822260E0:
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82226110
	if (ctx.cr6.eq) goto loc_82226110;
	// lwz r3,-744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	// bl 0x82221b38
	ctx.lr = 0x822260F4;
	sub_82221B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82226110
	if (ctx.cr6.eq) goto loc_82226110;
	// stw r26,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r26.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r26,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82226110:
	// lwz r3,-744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	// bl 0x82221b38
	ctx.lr = 0x82226118;
	sub_82221B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82226144
	if (!ctx.cr6.eq) goto loc_82226144;
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82226144
	if (ctx.cr6.eq) goto loc_82226144;
loc_8222612C:
	// bl 0x8215bec8
	ctx.lr = 0x82226130;
	sub_8215BEC8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82226144:
	// lwz r3,-744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	// bl 0x82221c80
	ctx.lr = 0x8222614C;
	sub_82221C80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82226160
	if (!ctx.cr6.eq) goto loc_82226160;
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222612c
	if (!ctx.cr6.eq) goto loc_8222612C;
loc_82226160:
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822261a0
	if (!ctx.cr6.eq) goto loc_822261A0;
	// lwz r11,1876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822261a0
	if (ctx.cr6.eq) goto loc_822261A0;
	// lwz r11,1888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822261a0
	if (ctx.cr6.eq) goto loc_822261A0;
	// lwz r3,-744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	// bl 0x82221b38
	ctx.lr = 0x8222618C;
	sub_82221B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822261a0
	if (ctx.cr6.eq) goto loc_822261A0;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_822261A0:
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822261f4
	if (ctx.cr6.eq) goto loc_822261F4;
	// lwz r11,1904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822261f4
	if (ctx.cr6.eq) goto loc_822261F4;
	// lwz r3,-744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	// bl 0x82222250
	ctx.lr = 0x822261C0;
	sub_82222250(ctx, base);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,1908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1908);
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r9.u32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822261f4
	if (ctx.cr6.lt) goto loc_822261F4;
	// lwz r3,-744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	// bl 0x82221d20
	ctx.lr = 0x822261E8;
	sub_82221D20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822261f4
	if (ctx.cr6.eq) goto loc_822261F4;
	// li r25,12
	ctx.r25.s64 = 12;
loc_822261F4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82226200"))) PPC_WEAK_FUNC(sub_82226200);
PPC_FUNC_IMPL(__imp__sub_82226200) {
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
	// lwz r4,704(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// lwz r30,724(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// bl 0x82225940
	ctx.lr = 0x82226220;
	sub_82225940(ctx, base);
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// bl 0x822210f0
	ctx.lr = 0x82226230;
	sub_822210F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,-744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -744);
	// beq cr6,0x82226250
	if (ctx.cr6.eq) goto loc_82226250;
	// bl 0x82221a48
	ctx.lr = 0x82226240;
	sub_82221A48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82226260
	if (ctx.cr6.eq) goto loc_82226260;
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82226264
	goto loc_82226264;
loc_82226250:
	// bl 0x82221ac0
	ctx.lr = 0x82226254;
	sub_82221AC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,8
	ctx.r3.s64 = 8;
	// bne cr6,0x82226264
	if (!ctx.cr6.eq) goto loc_82226264;
loc_82226260:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82226264:
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

__attribute__((alias("__imp__sub_8222627C"))) PPC_WEAK_FUNC(sub_8222627C);
PPC_FUNC_IMPL(__imp__sub_8222627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82226280"))) PPC_WEAK_FUNC(sub_82226280);
PPC_FUNC_IMPL(__imp__sub_82226280) {
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
	// lwz r30,724(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82225028
	ctx.lr = 0x822262AC;
	sub_82225028(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822262c4
	if (ctx.cr6.eq) goto loc_822262C4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822262c4
	if (ctx.cr6.eq) goto loc_822262C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x822262e0
	goto loc_822262E0;
loc_822262C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,704(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// bl 0x82225940
	ctx.lr = 0x822262D0;
	sub_82225940(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225698
	ctx.lr = 0x822262DC;
	sub_82225698(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
loc_822262E0:
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

__attribute__((alias("__imp__sub_822262F8"))) PPC_WEAK_FUNC(sub_822262F8);
PPC_FUNC_IMPL(__imp__sub_822262F8) {
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
	// lwz r8,708(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// beq cr6,0x82226350
	if (ctx.cr6.eq) goto loc_82226350;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r10,r3,-32
	ctx.r10.s64 = ctx.r3.s64 + -32;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
loc_82226340:
	// lwzu r11,68(r10)
	ea = 68 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82226340
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82226340;
loc_82226350:
	// lwz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822263f0
	if (ctx.cr6.eq) goto loc_822263F0;
	// lwz r9,704(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x822263b4
	if (ctx.cr6.lt) goto loc_822263B4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x822263b4
	if (!ctx.cr6.lt) goto loc_822263B4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822263ac
	if (ctx.cr6.eq) goto loc_822263AC;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82226390:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822263a0
	if (!ctx.cr6.eq) goto loc_822263A0;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_822263A0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// bdnz 0x82226390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82226390;
loc_822263AC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x822263b8
	goto loc_822263B8;
loc_822263B4:
	// li r11,2
	ctx.r11.s64 = 2;
loc_822263B8:
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822263d0
	if (!ctx.cr6.gt) goto loc_822263D0;
	// li r31,1
	ctx.r31.s64 = 1;
loc_822263D0:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221b38
	ctx.lr = 0x822263DC;
	sub_82221B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822263f0
	if (ctx.cr6.eq) goto loc_822263F0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x822263f4
	if (ctx.cr6.eq) goto loc_822263F4;
loc_822263F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822263F4:
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

__attribute__((alias("__imp__sub_8222640C"))) PPC_WEAK_FUNC(sub_8222640C);
PPC_FUNC_IMPL(__imp__sub_8222640C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82226410"))) PPC_WEAK_FUNC(sub_82226410);
PPC_FUNC_IMPL(__imp__sub_82226410) {
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
	// lwz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82226474
	if (ctx.cr6.eq) goto loc_82226474;
	// bl 0x82225e08
	ctx.lr = 0x82226444;
	sub_82225E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82226474
	if (!ctx.cr6.eq) goto loc_82226474;
	// lwz r10,708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222646c
	if (ctx.cr6.eq) goto loc_8222646C;
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82226460:
	// lwzu r10,68(r11)
	ea = 68 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 & ctx.r30.u64;
	// bdnz 0x82226460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82226460;
loc_8222646C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82226478
	goto loc_82226478;
loc_82226474:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82226478:
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

__attribute__((alias("__imp__sub_82226490"))) PPC_WEAK_FUNC(sub_82226490);
PPC_FUNC_IMPL(__imp__sub_82226490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82226498;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8215bd60
	ctx.lr = 0x822264A4;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822265d4
	if (ctx.cr6.eq) goto loc_822265D4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822265d4
	if (!ctx.cr6.eq) goto loc_822265D4;
	// lwz r11,724(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 724);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822265d4
	if (!ctx.cr6.eq) goto loc_822265D4;
	// lwz r11,736(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822265d4
	if (!ctx.cr6.eq) goto loc_822265D4;
	// lwz r10,720(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 720);
	// lwz r11,708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r10,704(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822265d4
	if (ctx.cr6.eq) goto loc_822265D4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822265d4
	if (ctx.cr6.lt) goto loc_822265D4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822265d4
	if (!ctx.cr6.lt) goto loc_822265D4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5052
	ctx.r9.s64 = ctx.r11.s64 + -5052;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822265d4
	if (ctx.cr6.eq) goto loc_822265D4;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r3,-744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	// bl 0x82221148
	ctx.lr = 0x82226524;
	sub_82221148(ctx, base);
	// mulli r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 * 68;
	// add r31,r10,r29
	ctx.r31.u64 = ctx.r10.u64 + ctx.r29.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x820ba6f0
	ctx.lr = 0x82226544;
	sub_820BA6F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226584
	if (ctx.cr6.eq) goto loc_82226584;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82226560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82226584
	if (!ctx.cr6.eq) goto loc_82226584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c3aa8
	ctx.lr = 0x82226570;
	sub_820C3AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x820c4f20
	ctx.lr = 0x8222657C;
	sub_820C4F20(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82226584:
	// lwz r11,716(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82226598
	if (ctx.cr6.eq) goto loc_82226598;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x8222659c
	goto loc_8222659C;
loc_82226598:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8222659C:
	// lwz r10,1820(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1820);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,-744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	// addic r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// subfe r10,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x822213a8
	ctx.lr = 0x822265D4;
	sub_822213A8(ctx, base);
loc_822265D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822265DC"))) PPC_WEAK_FUNC(sub_822265DC);
PPC_FUNC_IMPL(__imp__sub_822265DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822265E0"))) PPC_WEAK_FUNC(sub_822265E0);
PPC_FUNC_IMPL(__imp__sub_822265E0) {
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
	// lwz r10,720(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,708(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r10,704(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222669c
	if (ctx.cr6.eq) goto loc_8222669C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8222669c
	if (ctx.cr6.lt) goto loc_8222669C;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8222669c
	if (!ctx.cr6.lt) goto loc_8222669C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-5052
	ctx.r9.s64 = ctx.r11.s64 + -5052;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8222669c
	if (ctx.cr6.eq) goto loc_8222669C;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// bl 0x82221148
	ctx.lr = 0x82226644;
	sub_82221148(ctx, base);
	// lwz r9,716(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// mulli r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 * 68;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82226664
	if (ctx.cr6.eq) goto loc_82226664;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
loc_82226664:
	// lwz r10,1820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1820);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,-744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// addic r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// subfe r10,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x822213a8
	ctx.lr = 0x8222669C;
	sub_822213A8(ctx, base);
loc_8222669C:
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

__attribute__((alias("__imp__sub_822266B4"))) PPC_WEAK_FUNC(sub_822266B4);
PPC_FUNC_IMPL(__imp__sub_822266B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822266B8"))) PPC_WEAK_FUNC(sub_822266B8);
PPC_FUNC_IMPL(__imp__sub_822266B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x822266C0;
	sub_82248768(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,708(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82226890
	if (!ctx.cr6.gt) goto loc_82226890;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r29,r3,52
	ctx.r29.s64 = ctx.r3.s64 + 52;
	// lis r25,-32178
	ctx.r25.s64 = -2108817408;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r23,16
	ctx.r23.s64 = 16;
	// li r24,4
	ctx.r24.s64 = 4;
	// li r20,2
	ctx.r20.s64 = 2;
	// addi r22,r11,-5052
	ctx.r22.s64 = ctx.r11.s64 + -5052;
loc_822266FC:
	// lwz r30,-48(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -48);
	// stw r27,-8(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8, ctx.r27.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82226878
	if (ctx.cr6.lt) goto loc_82226878;
	// lwz r11,708(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 708);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82226878
	if (!ctx.cr6.lt) goto loc_82226878;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r22
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222687c
	if (ctx.cr6.eq) goto loc_8222687C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82226740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222687c
	if (!ctx.cr6.eq) goto loc_8222687C;
	// lis r4,17231
	ctx.r4.s64 = 1129250816;
	// lwz r3,1964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1964);
	// ori r4,r4,20549
	ctx.r4.u64 = ctx.r4.u64 | 20549;
	// bl 0x821882d0
	ctx.lr = 0x82226758;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222687c
	if (ctx.cr6.eq) goto loc_8222687C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222687c
	if (ctx.cr6.eq) goto loc_8222687C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r11,1284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8222687c
	if (!ctx.cr6.eq) goto loc_8222687C;
	// lwz r11,720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 720);
	// lwz r10,708(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 708);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,-52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -52);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822267b0
	if (!ctx.cr6.eq) goto loc_822267B0;
	// lwz r10,704(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 704);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x822267b0
	if (!ctx.cr6.eq) goto loc_822267B0;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// stw r26,-8(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8, ctx.r26.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8222687c
	goto loc_8222687C;
loc_822267B0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// lwz r3,-744(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -744);
	// bl 0x82221400
	ctx.lr = 0x822267D4;
	sub_82221400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222687c
	if (ctx.cr6.eq) goto loc_8222687C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,-8(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8, ctx.r26.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x822267EC;
	sub_8215BD08(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823c2e70
	ctx.lr = 0x822267F4;
	sub_823C2E70(ctx, base);
	// lwz r10,704(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 704);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8222687c
	if (!ctx.cr6.eq) goto loc_8222687C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82226814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222687c
	if (ctx.cr6.eq) goto loc_8222687C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82226830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222687c
	if (ctx.cr6.eq) goto loc_8222687C;
	// lwz r11,1800(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1796(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1796);
	// beq cr6,0x82226860
	if (ctx.cr6.eq) goto loc_82226860;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222686c
	if (ctx.cr6.eq) goto loc_8222686C;
	// stw r27,1800(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1800, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82225ac8
	ctx.lr = 0x8222685C;
	sub_82225AC8(ctx, base);
	// b 0x8222687c
	goto loc_8222687C;
loc_82226860:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8222686c
	if (ctx.cr6.eq) goto loc_8222686C;
	// stw r26,1800(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1800, ctx.r26.u32);
loc_8222686C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82225ac8
	ctx.lr = 0x82226874;
	sub_82225AC8(ctx, base);
	// b 0x8222687c
	goto loc_8222687C;
loc_82226878:
	// stw r20,-8(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8, ctx.r20.u32);
loc_8222687C:
	// lwz r11,708(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 708);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r29,r29,68
	ctx.r29.s64 = ctx.r29.s64 + 68;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822266fc
	if (ctx.cr6.lt) goto loc_822266FC;
loc_82226890:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_82226898"))) PPC_WEAK_FUNC(sub_82226898);
PPC_FUNC_IMPL(__imp__sub_82226898) {
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
	// lwz r11,728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822268c8
	if (ctx.cr6.eq) goto loc_822268C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82226908
	goto loc_82226908;
loc_822268C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225e08
	ctx.lr = 0x822268D0;
	sub_82225E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822268f4
	if (!ctx.cr6.eq) goto loc_822268F4;
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r10,708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822268f4
	if (!ctx.cr6.eq) goto loc_822268F4;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82226908
	goto loc_82226908;
loc_822268F4:
	// lwz r11,1868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82226904
	if (ctx.cr6.eq) goto loc_82226904;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82226904:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82226908:
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

__attribute__((alias("__imp__sub_82226920"))) PPC_WEAK_FUNC(sub_82226920);
PPC_FUNC_IMPL(__imp__sub_82226920) {
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
	// lwz r11,728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82226998
	if (!ctx.cr6.eq) goto loc_82226998;
	// lwz r11,1816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82226998
	if (ctx.cr6.eq) goto loc_82226998;
	// lwz r11,1876(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82226998
	if (!ctx.cr6.eq) goto loc_82226998;
	// lwz r11,1872(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1872);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82226998
	if (!ctx.cr6.eq) goto loc_82226998;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,-744(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -744);
	// bl 0x822213a8
	ctx.lr = 0x82226994;
	sub_822213A8(ctx, base);
	// stw r3,1876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1876, ctx.r3.u32);
loc_82226998:
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

__attribute__((alias("__imp__sub_822269AC"))) PPC_WEAK_FUNC(sub_822269AC);
PPC_FUNC_IMPL(__imp__sub_822269AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822269B0"))) PPC_WEAK_FUNC(sub_822269B0);
PPC_FUNC_IMPL(__imp__sub_822269B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x822269B8;
	sub_82248778(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82226aa4
	if (!ctx.cr6.eq) goto loc_82226AA4;
	// lwz r11,708(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r24,4
	ctx.r24.s64 = 4;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82226a64
	if (!ctx.cr6.gt) goto loc_82226A64;
	// addi r28,r3,60
	ctx.r28.s64 = ctx.r3.s64 + 60;
	// li r25,128
	ctx.r25.s64 = 128;
	// li r26,1
	ctx.r26.s64 = 1;
loc_822269F4:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -744);
	// bl 0x82221518
	ctx.lr = 0x82226A04;
	sub_82221518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82226a50
	if (ctx.cr6.eq) goto loc_82226A50;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// lwz r3,-744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -744);
	// bl 0x82221400
	ctx.lr = 0x82226A30;
	sub_82221400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82226a50
	if (ctx.cr6.eq) goto loc_82226A50;
	// lwz r11,1880(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1880);
	// slw r10,r26,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r31.u8 & 0x3F));
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r26,1884(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1884, ctx.r26.u32);
	// stw r9,1880(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1880, ctx.r9.u32);
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
loc_82226A50:
	// lwz r11,708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,68
	ctx.r28.s64 = ctx.r28.s64 + 68;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822269f4
	if (ctx.cr6.lt) goto loc_822269F4;
loc_82226A64:
	// lwz r11,1884(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82226aa4
	if (ctx.cr6.eq) goto loc_82226AA4;
	// lwz r11,1880(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1880);
	// li r10,129
	ctx.r10.s64 = 129;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r3,-744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -744);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822213a8
	ctx.lr = 0x82226A98;
	sub_822213A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82226aa4
	if (ctx.cr6.eq) goto loc_82226AA4;
	// stw r27,1884(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1884, ctx.r27.u32);
loc_82226AA4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82226AAC"))) PPC_WEAK_FUNC(sub_82226AAC);
PPC_FUNC_IMPL(__imp__sub_82226AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82226AB0"))) PPC_WEAK_FUNC(sub_82226AB0);
PPC_FUNC_IMPL(__imp__sub_82226AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82226AB8;
	sub_82248774(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82226bcc
	if (!ctx.cr6.eq) goto loc_82226BCC;
	// lwz r11,1876(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82226bcc
	if (ctx.cr6.eq) goto loc_82226BCC;
	// lwz r11,708(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82226bcc
	if (!ctx.cr6.gt) goto loc_82226BCC;
	// li r25,1
	ctx.r25.s64 = 1;
	// lis r26,-32178
	ctx.r26.s64 = -2108817408;
	// li r23,129
	ctx.r23.s64 = 129;
	// li r24,4
	ctx.r24.s64 = 4;
loc_82226AFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,704(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// slw r27,r25,r30
	ctx.r27.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r30.u8 & 0x3F));
	// bl 0x82225940
	ctx.lr = 0x82226B10;
	sub_82225940(ctx, base);
	// lwz r11,-744(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -744);
	// slw r29,r25,r3
	ctx.r29.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r3.u8 & 0x3F));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82221518
	ctx.lr = 0x82226B24;
	sub_82221518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82226bd4
	if (ctx.cr6.eq) goto loc_82226BD4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lwz r3,-744(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -744);
	// bl 0x82221400
	ctx.lr = 0x82226B50;
	sub_82221400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82226bbc
	if (ctx.cr6.eq) goto loc_82226BBC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82226B5C:
	// and r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82226bbc
	if (!ctx.cr6.eq) goto loc_82226BBC;
	// lwz r11,1892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1892);
	// stw r28,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r28.u32);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r11,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82226b90
	if (ctx.cr6.eq) goto loc_82226B90;
	// rotlwi r10,r28,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r10.u32);
loc_82226B90:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82226ba8
	if (ctx.cr6.eq) goto loc_82226BA8;
	// lwz r11,1896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1896);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r11.u32);
loc_82226BA8:
	// lwz r11,1896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1896);
	// lwz r10,708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82226bbc
	if (!ctx.cr6.eq) goto loc_82226BBC;
	// stw r25,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r25.u32);
loc_82226BBC:
	// lwz r11,708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82226afc
	if (ctx.cr6.lt) goto loc_82226AFC;
loc_82226BCC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82226BD4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 | ctx.r11.u64;
	// b 0x82226b5c
	goto loc_82226B5C;
}

__attribute__((alias("__imp__sub_82226BE0"))) PPC_WEAK_FUNC(sub_82226BE0);
PPC_FUNC_IMPL(__imp__sub_82226BE0) {
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
	// lwz r11,728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82226c4c
	if (ctx.cr6.eq) goto loc_82226C4C;
	// lwz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r10,708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82226c34
	if (!ctx.cr6.eq) goto loc_82226C34;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1900(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1900, ctx.r11.u32);
	// stw r11,1904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1904, ctx.r11.u32);
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
loc_82226C34:
	// lwz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82226c4c
	if (!ctx.cr6.eq) goto loc_82226C4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225d10
	ctx.lr = 0x82226C48;
	sub_82225D10(ctx, base);
	// stw r3,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r3.u32);
loc_82226C4C:
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

__attribute__((alias("__imp__sub_82226C60"))) PPC_WEAK_FUNC(sub_82226C60);
PPC_FUNC_IMPL(__imp__sub_82226C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82226C68;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82226d58
	if (ctx.cr6.eq) goto loc_82226D58;
	// bl 0x82225e08
	ctx.lr = 0x82226C88;
	sub_82225E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82226d58
	if (!ctx.cr6.eq) goto loc_82226D58;
	// lwz r11,728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82226d58
	if (ctx.cr6.eq) goto loc_82226D58;
	// lwz r11,1904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82226d58
	if (!ctx.cr6.eq) goto loc_82226D58;
	// lwz r11,708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82226d10
	if (!ctx.cr6.gt) goto loc_82226D10;
	// addi r30,r29,64
	ctx.r30.s64 = ctx.r29.s64 + 64;
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
loc_82226CC4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82226cfc
	if (!ctx.cr6.eq) goto loc_82226CFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-744(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -744);
	// bl 0x82221518
	ctx.lr = 0x82226CDC;
	sub_82221518(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82226cec
	if (!ctx.cr6.eq) goto loc_82226CEC;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// b 0x82226cfc
	goto loc_82226CFC;
loc_82226CEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82225d60
	ctx.lr = 0x82226CF8;
	sub_82225D60(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82226CFC:
	// lwz r11,708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82226cc4
	if (ctx.cr6.lt) goto loc_82226CC4;
loc_82226D10:
	// lwz r7,708(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82226d4c
	if (ctx.cr6.eq) goto loc_82226D4C;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r29,64
	ctx.r10.s64 = ctx.r29.s64 + 64;
loc_82226D2C:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82226d3c
	if (ctx.cr6.eq) goto loc_82226D3C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82226D3C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 + 68;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82226d2c
	if (ctx.cr6.lt) goto loc_82226D2C;
loc_82226D4C:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82226d58
	if (!ctx.cr6.eq) goto loc_82226D58;
	// stw r27,1904(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1904, ctx.r27.u32);
loc_82226D58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82226D60"))) PPC_WEAK_FUNC(sub_82226D60);
PPC_FUNC_IMPL(__imp__sub_82226D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r10,708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82226dd0
	if (ctx.cr6.eq) goto loc_82226DD0;
	// bl 0x82225e08
	ctx.lr = 0x82226D84;
	sub_82225E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82226dd0
	if (!ctx.cr6.eq) goto loc_82226DD0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,8448
	ctx.r10.s64 = 8448;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-744(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -744);
	// bl 0x822215b8
	ctx.lr = 0x82226DC0;
	sub_822215B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82226DD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82226DE4"))) PPC_WEAK_FUNC(sub_82226DE4);
PPC_FUNC_IMPL(__imp__sub_82226DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82226DE8"))) PPC_WEAK_FUNC(sub_82226DE8);
PPC_FUNC_IMPL(__imp__sub_82226DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r10,708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82226e58
	if (ctx.cr6.eq) goto loc_82226E58;
	// bl 0x82225e08
	ctx.lr = 0x82226E0C;
	sub_82225E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82226e58
	if (!ctx.cr6.eq) goto loc_82226E58;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,8704
	ctx.r10.s64 = 8704;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32178
	ctx.r7.s64 = -2108817408;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,-744(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -744);
	// bl 0x822215b8
	ctx.lr = 0x82226E48;
	sub_822215B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82226E58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82226E6C"))) PPC_WEAK_FUNC(sub_82226E6C);
PPC_FUNC_IMPL(__imp__sub_82226E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82226E70"))) PPC_WEAK_FUNC(sub_82226E70);
PPC_FUNC_IMPL(__imp__sub_82226E70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,8448
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8448, ctx.xer);
	// bgt cr6,0x82226f24
	if (ctx.cr6.gt) goto loc_82226F24;
	// beq cr6,0x82226ef8
	if (ctx.cr6.eq) goto loc_82226EF8;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// beq cr6,0x82226ecc
	if (ctx.cr6.eq) goto loc_82226ECC;
	// cmpwi cr6,r11,8272
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8272, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// blr 
	return;
loc_82226ECC:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r3.u32);
	// blr 
	return;
loc_82226EF8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,708(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 708);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82226f50
	if (!ctx.cr6.lt) goto loc_82226F50;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// blr 
	return;
loc_82226F24:
	// cmpwi cr6,r11,8704
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8704, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,708(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 708);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82226f50
	if (!ctx.cr6.lt) goto loc_82226F50;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,40(r7)
	PPC_STORE_U32(ctx.r7.u32 + 40, ctx.r8.u32);
loc_82226F50:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82226F58"))) PPC_WEAK_FUNC(sub_82226F58);
PPC_FUNC_IMPL(__imp__sub_82226F58) {
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
	// bl 0x82183850
	ctx.lr = 0x82226F6C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82226f84
	if (ctx.cr6.eq) goto loc_82226F84;
	// li r3,1916
	ctx.r3.s64 = 1916;
	// bl 0x82183448
	ctx.lr = 0x82226F80;
	sub_82183448(ctx, base);
	// b 0x82226f8c
	goto loc_82226F8C;
loc_82226F84:
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x821845a0
	ctx.lr = 0x82226F8C;
	sub_821845A0(ctx, base);
loc_82226F8C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82226fc4
	if (ctx.cr6.eq) goto loc_82226FC4;
	// addi r3,r3,1824
	ctx.r3.s64 = ctx.r3.s64 + 1824;
	// bl 0x82229040
	ctx.lr = 0x82226FA0;
	sub_82229040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225528
	ctx.lr = 0x82226FA8;
	sub_82225528(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r31,-740(r11)
	PPC_STORE_U32(ctx.r11.u32 + -740, ctx.r31.u32);
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
loc_82226FC4:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -740, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82226FE4"))) PPC_WEAK_FUNC(sub_82226FE4);
PPC_FUNC_IMPL(__imp__sub_82226FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82226FE8"))) PPC_WEAK_FUNC(sub_82226FE8);
PPC_FUNC_IMPL(__imp__sub_82226FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82226FF0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -740);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82227038
	if (!ctx.cr6.eq) goto loc_82227038;
	// bl 0x82183078
	ctx.lr = 0x8222700C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821837d0
	ctx.lr = 0x82227018;
	sub_821837D0(ctx, base);
	// bl 0x82226f58
	ctx.lr = 0x8222701C;
	sub_82226F58(ctx, base);
	// lwz r3,-740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -740);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227030
	if (ctx.cr6.eq) goto loc_82227030;
	// bl 0x82225528
	ctx.lr = 0x8222702C;
	sub_82225528(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82227030:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82227038;
	sub_821837D0(ctx, base);
loc_82227038:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82227044"))) PPC_WEAK_FUNC(sub_82227044);
PPC_FUNC_IMPL(__imp__sub_82227044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227048"))) PPC_WEAK_FUNC(sub_82227048);
PPC_FUNC_IMPL(__imp__sub_82227048) {
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
	// lwz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822270e0
	if (!ctx.cr6.eq) goto loc_822270E0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221b38
	ctx.lr = 0x8222707C;
	sub_82221B38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822270e0
	if (ctx.cr6.eq) goto loc_822270E0;
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82227098
	if (ctx.cr6.eq) goto loc_82227098;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822270e4
	goto loc_822270E4;
loc_82227098:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r30.u32);
	// bl 0x82226898
	ctx.lr = 0x822270B0;
	sub_82226898(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822270d8
	if (ctx.cr6.eq) goto loc_822270D8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822270cc
	if (ctx.cr6.eq) goto loc_822270CC;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// b 0x822270e0
	goto loc_822270E0;
loc_822270CC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r30.u32);
	// b 0x822270dc
	goto loc_822270DC;
loc_822270D8:
	// li r11,2
	ctx.r11.s64 = 2;
loc_822270DC:
	// stw r11,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r11.u32);
loc_822270E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822270E4:
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

__attribute__((alias("__imp__sub_822270FC"))) PPC_WEAK_FUNC(sub_822270FC);
PPC_FUNC_IMPL(__imp__sub_822270FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227100"))) PPC_WEAK_FUNC(sub_82227100);
PPC_FUNC_IMPL(__imp__sub_82227100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82227108;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822271bc
	if (!ctx.cr6.eq) goto loc_822271BC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r30,-744(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822271ac
	if (ctx.cr6.eq) goto loc_822271AC;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,-19048(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19048);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222717c
	if (ctx.cr6.eq) goto loc_8222717C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lfs f13,-2296(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2296);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x821a2598
	ctx.lr = 0x82227170;
	sub_821A2598(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8222717c
	if (!ctx.cr6.gt) goto loc_8222717C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8222717C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82222250
	ctx.lr = 0x82227184;
	sub_82222250(ctx, base);
	// rlwinm r5,r3,31,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82221470
	ctx.lr = 0x82227194;
	sub_82221470(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82221568
	ctx.lr = 0x8222719C;
	sub_82221568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822271ac
	if (ctx.cr6.eq) goto loc_822271AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82226490
	ctx.lr = 0x822271AC;
	sub_82226490(ctx, base);
loc_822271AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_822271BC:
	// cmplwi cr6,r31,22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 22, ctx.xer);
	// bne cr6,0x822271d4
	if (!ctx.cr6.eq) goto loc_822271D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_822271D4:
	// cmplwi cr6,r31,28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 28, ctx.xer);
	// bne cr6,0x822271ec
	if (!ctx.cr6.eq) goto loc_822271EC;
loc_822271DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_822271EC:
	// lwz r11,724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 724);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82227298
	if (ctx.cr6.lt) goto loc_82227298;
	// lwz r11,744(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 744);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82227298
	if (ctx.cr6.lt) goto loc_82227298;
	// lwz r11,732(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 732);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82227240
	if (!ctx.cr6.eq) goto loc_82227240;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-18252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227228
	if (ctx.cr6.eq) goto loc_82227228;
	// stw r29,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r29.u32);
loc_82227228:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8984);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222723c
	if (ctx.cr6.eq) goto loc_8222723C;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
loc_8222723C:
	// stw r29,732(r28)
	PPC_STORE_U32(ctx.r28.u32 + 732, ctx.r29.u32);
loc_82227240:
	// lwz r11,736(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82227268
	if (ctx.cr6.eq) goto loc_82227268;
	// addi r11,r31,-3
	ctx.r11.s64 = ctx.r31.s64 + -3;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r27
	ctx.r3.u64 = ctx.r8.u64 & ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82227268:
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// bne cr6,0x82227278
	if (!ctx.cr6.eq) goto loc_82227278;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82225c10
	ctx.lr = 0x82227278;
	sub_82225C10(ctx, base);
loc_82227278:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822273a8
	if (ctx.cr6.eq) goto loc_822273A8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82227298:
	// lwz r11,720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 720);
	// lwz r10,708(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 708);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822271ac
	if (ctx.cr6.eq) goto loc_822271AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82225e08
	ctx.lr = 0x822272B4;
	sub_82225E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822271ac
	if (!ctx.cr6.eq) goto loc_822271AC;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 9, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 27, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 24, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 25, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// lis r11,-32185
	ctx.r11.s64 = -2109276160;
	// lwz r11,-18252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227320
	if (ctx.cr6.eq) goto loc_82227320;
	// stw r30,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r30.u32);
loc_82227320:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-8984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8984);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227334
	if (ctx.cr6.eq) goto loc_82227334;
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
loc_82227334:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// stw r30,732(r28)
	PPC_STORE_U32(ctx.r28.u32 + 732, ctx.r30.u32);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,14
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 19, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,13
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 13, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 18, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 17, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 20, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 21, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 23, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
	// cmplwi cr6,r31,30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 30, ctx.xer);
	// beq cr6,0x822271dc
	if (ctx.cr6.eq) goto loc_822271DC;
loc_822273A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_822273BC"))) PPC_WEAK_FUNC(sub_822273BC);
PPC_FUNC_IMPL(__imp__sub_822273BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822273C0"))) PPC_WEAK_FUNC(sub_822273C0);
PPC_FUNC_IMPL(__imp__sub_822273C0) {
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
	// lwz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82227464
	if (ctx.cr6.gt) goto loc_82227464;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82227440
	if (ctx.cr6.eq) goto loc_82227440;
	// bdz 0x82227414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82227414;
	// bdz 0x82227424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82227424;
	// bdz 0x82227434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82227434;
	// bdz 0x82227464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82227464;
	// bdz 0x82227464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82227464;
	// bdz 0x82227450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82227450;
	// b 0x82227460
	goto loc_82227460;
loc_82227414:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226200
	ctx.lr = 0x8222741C;
	sub_82226200(ctx, base);
	// stw r3,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r3.u32);
	// b 0x82227464
	goto loc_82227464;
loc_82227424:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226280
	ctx.lr = 0x8222742C;
	sub_82226280(ctx, base);
	// stw r3,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r3.u32);
	// b 0x82227464
	goto loc_82227464;
loc_82227434:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// b 0x82227464
	goto loc_82227464;
loc_82227440:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225fc8
	ctx.lr = 0x82227448;
	sub_82225FC8(ctx, base);
	// stw r3,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r3.u32);
	// b 0x82227464
	goto loc_82227464;
loc_82227450:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225830
	ctx.lr = 0x82227458;
	sub_82225830(ctx, base);
	// stw r3,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r3.u32);
	// b 0x82227464
	goto loc_82227464;
loc_82227460:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82227464:
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

__attribute__((alias("__imp__sub_82227480"))) PPC_WEAK_FUNC(sub_82227480);
PPC_FUNC_IMPL(__imp__sub_82227480) {
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
	// lwz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r10,708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r31,724(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822274c0
	if (!ctx.cr6.eq) goto loc_822274C0;
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_822274C0:
	// bl 0x82226d60
	ctx.lr = 0x822274C4;
	sub_82226D60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822274d0
	if (ctx.cr6.eq) goto loc_822274D0;
	// li r31,2
	ctx.r31.s64 = 2;
loc_822274D0:
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

__attribute__((alias("__imp__sub_822274E8"))) PPC_WEAK_FUNC(sub_822274E8);
PPC_FUNC_IMPL(__imp__sub_822274E8) {
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
	// lwz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// lwz r10,708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r31,724(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82227528
	if (!ctx.cr6.eq) goto loc_82227528;
	// li r3,4
	ctx.r3.s64 = 4;
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
loc_82227528:
	// bl 0x82226de8
	ctx.lr = 0x8222752C;
	sub_82226DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82227538
	if (ctx.cr6.eq) goto loc_82227538;
	// li r31,4
	ctx.r31.s64 = 4;
loc_82227538:
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

__attribute__((alias("__imp__sub_82227550"))) PPC_WEAK_FUNC(sub_82227550);
PPC_FUNC_IMPL(__imp__sub_82227550) {
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
	// lwz r31,724(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// bl 0x82226410
	ctx.lr = 0x82227568;
	sub_82226410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82227588
	if (ctx.cr6.eq) goto loc_82227588;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x82221c08
	ctx.lr = 0x8222757C;
	sub_82221C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,5
	ctx.r3.s64 = 5;
	// bne cr6,0x8222758c
	if (!ctx.cr6.eq) goto loc_8222758C;
loc_82227588:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8222758C:
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

__attribute__((alias("__imp__sub_822275A0"))) PPC_WEAK_FUNC(sub_822275A0);
PPC_FUNC_IMPL(__imp__sub_822275A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x822275A8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215bd60
	ctx.lr = 0x822275B4;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822276ec
	if (ctx.cr6.eq) goto loc_822276EC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822276ec
	if (!ctx.cr6.eq) goto loc_822276EC;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82227600
	if (ctx.cr6.eq) goto loc_82227600;
	// bgt cr6,0x82227638
	if (ctx.cr6.gt) goto loc_82227638;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225e08
	ctx.lr = 0x822275E8;
	sub_82225E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82227638
	if (!ctx.cr6.eq) goto loc_82227638;
loc_822275F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82227600:
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
	// lwz r10,708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82227648
	if (ctx.cr6.eq) goto loc_82227648;
	// lwz r3,-744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -744);
	// bl 0x822214b8
	ctx.lr = 0x82227620;
	sub_822214B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82227648
	if (ctx.cr6.eq) goto loc_82227648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82225e08
	ctx.lr = 0x82227630;
	sub_82225E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822275f0
	if (ctx.cr6.eq) goto loc_822275F0;
loc_82227638:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82227648:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
	// bl 0x82225e08
	ctx.lr = 0x82227658;
	sub_82225E08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822276ec
	if (!ctx.cr6.eq) goto loc_822276EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822258a0
	ctx.lr = 0x82227668;
	sub_822258A0(ctx, base);
	// lwz r10,740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r11.u32);
	// beq cr6,0x82227688
	if (ctx.cr6.eq) goto loc_82227688;
	// lwz r11,744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r11.u32);
loc_82227688:
	// lwz r11,744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82227698
	if (ctx.cr6.lt) goto loc_82227698;
	// stw r30,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r30.u32);
loc_82227698:
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822276ec
	if (!ctx.cr6.eq) goto loc_822276EC;
	// lwz r3,-744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -744);
	// bl 0x82221568
	ctx.lr = 0x822276AC;
	sub_82221568(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822276bc
	if (!ctx.cr6.eq) goto loc_822276BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822265e0
	ctx.lr = 0x822276BC;
	sub_822265E0(ctx, base);
loc_822276BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226be0
	ctx.lr = 0x822276C4;
	sub_82226BE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822266b8
	ctx.lr = 0x822276CC;
	sub_822266B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226c60
	ctx.lr = 0x822276D4;
	sub_82226C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226920
	ctx.lr = 0x822276DC;
	sub_82226920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822269b0
	ctx.lr = 0x822276E4;
	sub_822269B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226ab0
	ctx.lr = 0x822276EC;
	sub_82226AB0(ctx, base);
loc_822276EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822276F4"))) PPC_WEAK_FUNC(sub_822276F4);
PPC_FUNC_IMPL(__imp__sub_822276F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822276F8"))) PPC_WEAK_FUNC(sub_822276F8);
PPC_FUNC_IMPL(__imp__sub_822276F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82227700;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x8222783c
	if (ctx.cr6.gt) goto loc_8222783C;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30512
	ctx.r12.s64 = ctx.r12.s64 + 30512;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,30552(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30552);
	// lwz r17,30572(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30572);
	// lwz r17,30596(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30596);
	// lwz r17,30636(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30636);
	// lwz r17,30660(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30660);
	// lwz r17,30684(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30684);
	// lwz r17,30708(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30708);
	// lwz r17,30724(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30724);
	// lwz r17,30748(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30748);
	// lwz r17,30772(r2)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r2.u32 + 30772);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227480
	ctx.lr = 0x82227774;
	sub_82227480(ctx, base);
	// stw r3,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// bl 0x822262f8
	ctx.lr = 0x82227790;
	sub_822262F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222779c
	if (ctx.cr6.eq) goto loc_8222779C;
	// li r30,3
	ctx.r30.s64 = 3;
loc_8222779C:
	// stw r30,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822274e8
	ctx.lr = 0x822277B4;
	sub_822274E8(ctx, base);
	// stw r3,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227550
	ctx.lr = 0x822277CC;
	sub_82227550(ctx, base);
	// stw r3,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822257c0
	ctx.lr = 0x822277E4;
	sub_822257C0(ctx, base);
	// stw r3,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226200
	ctx.lr = 0x8222780C;
	sub_82226200(ctx, base);
	// stw r3,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82226280
	ctx.lr = 0x82227824;
	sub_82226280(ctx, base);
	// stw r3,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
loc_8222783C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82227848"))) PPC_WEAK_FUNC(sub_82227848);
PPC_FUNC_IMPL(__imp__sub_82227848) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222787c
	if (!ctx.cr6.eq) goto loc_8222787C;
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
loc_8222787C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82227890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_822278B0"))) PPC_WEAK_FUNC(sub_822278B0);
PPC_FUNC_IMPL(__imp__sub_822278B0) {
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
	ctx.lr = 0x822278C0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x822278d8
	if (ctx.cr6.eq) goto loc_822278D8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82183448
	ctx.lr = 0x822278D4;
	sub_82183448(ctx, base);
	// b 0x822278e0
	goto loc_822278E0;
loc_822278D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821845a0
	ctx.lr = 0x822278E0;
	sub_821845A0(ctx, base);
loc_822278E0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// beq cr6,0x82227914
	if (ctx.cr6.eq) goto loc_82227914;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,-14444
	ctx.r9.s64 = ctx.r11.s64 + -14444;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r3,-736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82227914:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -736, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222792C"))) PPC_WEAK_FUNC(sub_8222792C);
PPC_FUNC_IMPL(__imp__sub_8222792C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227930"))) PPC_WEAK_FUNC(sub_82227930);
PPC_FUNC_IMPL(__imp__sub_82227930) {
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
	// lis r31,-32178
	ctx.r31.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82227984
	if (!ctx.cr6.eq) goto loc_82227984;
	// bl 0x82183078
	ctx.lr = 0x8222795C;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821837d0
	ctx.lr = 0x82227968;
	sub_821837D0(ctx, base);
	// bl 0x822278b0
	ctx.lr = 0x8222796C;
	sub_822278B0(ctx, base);
	// lwz r11,-736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -736);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821837d0
	ctx.lr = 0x82227980;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82227984:
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

__attribute__((alias("__imp__sub_8222799C"))) PPC_WEAK_FUNC(sub_8222799C);
PPC_FUNC_IMPL(__imp__sub_8222799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822279A0"))) PPC_WEAK_FUNC(sub_822279A0);
PPC_FUNC_IMPL(__imp__sub_822279A0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822279f8
	if (ctx.cr6.eq) goto loc_822279F8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82227848
	ctx.lr = 0x822279CC;
	sub_82227848(ctx, base);
	// lwz r3,-736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822279ec
	if (ctx.cr6.eq) goto loc_822279EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822279EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822279EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -736, ctx.r11.u32);
loc_822279F8:
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

__attribute__((alias("__imp__sub_82227A0C"))) PPC_WEAK_FUNC(sub_82227A0C);
PPC_FUNC_IMPL(__imp__sub_82227A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227A10"))) PPC_WEAK_FUNC(sub_82227A10);
PPC_FUNC_IMPL(__imp__sub_82227A10) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82227a3c
	if (ctx.cr6.eq) goto loc_82227A3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82227a84
	goto loc_82227A84;
loc_82227A3C:
	// bl 0x82183078
	ctx.lr = 0x82227A40;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821837d0
	ctx.lr = 0x82227A4C;
	sub_821837D0(ctx, base);
	// li r3,6080
	ctx.r3.s64 = 6080;
	// bl 0x82080000
	ctx.lr = 0x82227A54;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82227a68
	if (ctx.cr6.eq) goto loc_82227A68;
	// bl 0x8222bac0
	ctx.lr = 0x82227A60;
	sub_8222BAC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82227a6c
	goto loc_82227A6C;
loc_82227A68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82227A6C:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821837d0
	ctx.lr = 0x82227A80;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82227A84:
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

__attribute__((alias("__imp__sub_82227A9C"))) PPC_WEAK_FUNC(sub_82227A9C);
PPC_FUNC_IMPL(__imp__sub_82227A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227AA0"))) PPC_WEAK_FUNC(sub_82227AA0);
PPC_FUNC_IMPL(__imp__sub_82227AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227ABC"))) PPC_WEAK_FUNC(sub_82227ABC);
PPC_FUNC_IMPL(__imp__sub_82227ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227AC0"))) PPC_WEAK_FUNC(sub_82227AC0);
PPC_FUNC_IMPL(__imp__sub_82227AC0) {
	PPC_FUNC_PROLOGUE();
	// li r11,512
	ctx.r11.s64 = 512;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227AD4"))) PPC_WEAK_FUNC(sub_82227AD4);
PPC_FUNC_IMPL(__imp__sub_82227AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227AD8"))) PPC_WEAK_FUNC(sub_82227AD8);
PPC_FUNC_IMPL(__imp__sub_82227AD8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x82227AF4;
	sub_822AA648(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x82227B00;
	sub_822AA648(ctx, base);
	// li r11,512
	ctx.r11.s64 = 512;
	// li r4,67
	ctx.r4.s64 = 67;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// addi r3,r31,14
	ctx.r3.s64 = ctx.r31.s64 + 14;
	// bl 0x822aa648
	ctx.lr = 0x82227B14;
	sub_822AA648(ctx, base);
	// li r4,193
	ctx.r4.s64 = 193;
	// addi r3,r31,81
	ctx.r3.s64 = ctx.r31.s64 + 81;
	// bl 0x822aa648
	ctx.lr = 0x82227B20;
	sub_822AA648(ctx, base);
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r3,r31,274
	ctx.r3.s64 = ctx.r31.s64 + 274;
	// bl 0x822aa648
	ctx.lr = 0x82227B2C;
	sub_822AA648(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,371(r31)
	PPC_STORE_U8(ctx.r31.u32 + 371, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82227B48"))) PPC_WEAK_FUNC(sub_82227B48);
PPC_FUNC_IMPL(__imp__sub_82227B48) {
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
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821847a8
	ctx.lr = 0x82227B6C;
	sub_821847A8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x821847a8
	ctx.lr = 0x82227B7C;
	sub_821847A8(ctx, base);
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// li r5,67
	ctx.r5.s64 = 67;
	// addi r4,r31,30
	ctx.r4.s64 = ctx.r31.s64 + 30;
	// addi r3,r30,14
	ctx.r3.s64 = ctx.r30.s64 + 14;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
	// bl 0x821847a8
	ctx.lr = 0x82227B94;
	sub_821847A8(ctx, base);
	// li r5,193
	ctx.r5.s64 = 193;
	// addi r4,r31,98
	ctx.r4.s64 = ctx.r31.s64 + 98;
	// addi r3,r30,81
	ctx.r3.s64 = ctx.r30.s64 + 81;
	// bl 0x821847a8
	ctx.lr = 0x82227BA4;
	sub_821847A8(ctx, base);
	// li r5,97
	ctx.r5.s64 = 97;
	// addi r4,r31,292
	ctx.r4.s64 = ctx.r31.s64 + 292;
	// addi r3,r30,274
	ctx.r3.s64 = ctx.r30.s64 + 274;
	// bl 0x821847a8
	ctx.lr = 0x82227BB4;
	sub_821847A8(ctx, base);
	// lbz r10,391(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 391);
	// stb r10,371(r30)
	PPC_STORE_U8(ctx.r30.u32 + 371, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82227BD4"))) PPC_WEAK_FUNC(sub_82227BD4);
PPC_FUNC_IMPL(__imp__sub_82227BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227BD8"))) PPC_WEAK_FUNC(sub_82227BD8);
PPC_FUNC_IMPL(__imp__sub_82227BD8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x82227C04;
	sub_821847A8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x821847a8
	ctx.lr = 0x82227C14;
	sub_821847A8(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// li r5,67
	ctx.r5.s64 = 67;
	// addi r4,r31,14
	ctx.r4.s64 = ctx.r31.s64 + 14;
	// addi r3,r30,30
	ctx.r3.s64 = ctx.r30.s64 + 30;
	// sth r11,28(r30)
	PPC_STORE_U16(ctx.r30.u32 + 28, ctx.r11.u16);
	// bl 0x821847a8
	ctx.lr = 0x82227C2C;
	sub_821847A8(ctx, base);
	// li r5,193
	ctx.r5.s64 = 193;
	// addi r4,r31,81
	ctx.r4.s64 = ctx.r31.s64 + 81;
	// addi r3,r30,98
	ctx.r3.s64 = ctx.r30.s64 + 98;
	// bl 0x821847a8
	ctx.lr = 0x82227C3C;
	sub_821847A8(ctx, base);
	// li r5,97
	ctx.r5.s64 = 97;
	// addi r4,r31,274
	ctx.r4.s64 = ctx.r31.s64 + 274;
	// addi r3,r30,292
	ctx.r3.s64 = ctx.r30.s64 + 292;
	// bl 0x821847a8
	ctx.lr = 0x82227C4C;
	sub_821847A8(ctx, base);
	// lbz r10,371(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 371);
	// stb r10,391(r30)
	PPC_STORE_U8(ctx.r30.u32 + 391, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82227C6C"))) PPC_WEAK_FUNC(sub_82227C6C);
PPC_FUNC_IMPL(__imp__sub_82227C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227C70"))) PPC_WEAK_FUNC(sub_82227C70);
PPC_FUNC_IMPL(__imp__sub_82227C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-2176
	ctx.r10.s64 = ctx.r11.s64 + -2176;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227C80"))) PPC_WEAK_FUNC(sub_82227C80);
PPC_FUNC_IMPL(__imp__sub_82227C80) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227C94"))) PPC_WEAK_FUNC(sub_82227C94);
PPC_FUNC_IMPL(__imp__sub_82227C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227C98"))) PPC_WEAK_FUNC(sub_82227C98);
PPC_FUNC_IMPL(__imp__sub_82227C98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227CA8"))) PPC_WEAK_FUNC(sub_82227CA8);
PPC_FUNC_IMPL(__imp__sub_82227CA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227CB8"))) PPC_WEAK_FUNC(sub_82227CB8);
PPC_FUNC_IMPL(__imp__sub_82227CB8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227CC8"))) PPC_WEAK_FUNC(sub_82227CC8);
PPC_FUNC_IMPL(__imp__sub_82227CC8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227CD8"))) PPC_WEAK_FUNC(sub_82227CD8);
PPC_FUNC_IMPL(__imp__sub_82227CD8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227CE8"))) PPC_WEAK_FUNC(sub_82227CE8);
PPC_FUNC_IMPL(__imp__sub_82227CE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82227d10
	if (!ctx.cr6.gt) goto loc_82227D10;
	// lwz r11,4792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4792);
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82227D10:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227D18"))) PPC_WEAK_FUNC(sub_82227D18);
PPC_FUNC_IMPL(__imp__sub_82227D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82227d40
	if (!ctx.cr6.gt) goto loc_82227D40;
	// lwz r11,4792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4792);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4804
	ctx.r3.s64 = ctx.r11.s64 + 4804;
	// blr 
	return;
loc_82227D40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227D48"))) PPC_WEAK_FUNC(sub_82227D48);
PPC_FUNC_IMPL(__imp__sub_82227D48) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227D58"))) PPC_WEAK_FUNC(sub_82227D58);
PPC_FUNC_IMPL(__imp__sub_82227D58) {
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
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x821847a8
	ctx.lr = 0x82227D84;
	sub_821847A8(ctx, base);
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82227d98
	if (ctx.cr6.lt) goto loc_82227D98;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82227D98:
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82227DB0"))) PPC_WEAK_FUNC(sub_82227DB0);
PPC_FUNC_IMPL(__imp__sub_82227DB0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227DC0"))) PPC_WEAK_FUNC(sub_82227DC0);
PPC_FUNC_IMPL(__imp__sub_82227DC0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82163ef8
	ctx.lr = 0x82227DE0;
	sub_82163EF8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82227DE4:
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// beq cr6,0x82227e10
	if (ctx.cr6.eq) goto loc_82227E10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82163f00
	ctx.lr = 0x82227DF8;
	sub_82163F00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// blt cr6,0x82227e0c
	if (ctx.cr6.lt) goto loc_82227E0C;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x82227e10
	if (!ctx.cr6.gt) goto loc_82227E10;
loc_82227E0C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82227E10:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x82227de4
	if (ctx.cr6.lt) goto loc_82227DE4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82227e4c
	if (!ctx.cr6.eq) goto loc_82227E4C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82227E28:
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// beq cr6,0x82227e40
	if (ctx.cr6.eq) goto loc_82227E40;
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82163f10
	ctx.lr = 0x82227E40;
	sub_82163F10(ctx, base);
loc_82227E40:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x82227e28
	if (ctx.cr6.lt) goto loc_82227E28;
loc_82227E4C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8209eda0
	ctx.lr = 0x82227E54;
	sub_8209EDA0(ctx, base);
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

__attribute__((alias("__imp__sub_82227E70"))) PPC_WEAK_FUNC(sub_82227E70);
PPC_FUNC_IMPL(__imp__sub_82227E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// li r11,3
	ctx.r11.s64 = 3;
	// xoris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
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

__attribute__((alias("__imp__sub_82227E98"))) PPC_WEAK_FUNC(sub_82227E98);
PPC_FUNC_IMPL(__imp__sub_82227E98) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227EA8"))) PPC_WEAK_FUNC(sub_82227EA8);
PPC_FUNC_IMPL(__imp__sub_82227EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// li r11,3
	ctx.r11.s64 = 3;
	// xoris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addc r7,r8,r9
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 & ctx.r10.u64;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82227f04
	// bdzf 4*cr6+eq,0x82227f1c
	// bdzf 4*cr6+eq,0x82227f34
	// bdzf 4*cr6+eq,0x82227f4c
	// bdzf 4*cr6+eq,0x82227f64
	// bne cr6,0x82227f7c
	if (!ctx.cr6.eq) goto loc_82227F7C;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82227F04:
	// li r10,4
	ctx.r10.s64 = 4;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82227F1C:
	// li r10,7
	ctx.r10.s64 = 7;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82227F34:
	// li r10,9
	ctx.r10.s64 = 9;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82227F4C:
	// li r10,13
	ctx.r10.s64 = 13;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82227F64:
	// li r10,16
	ctx.r10.s64 = 16;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82227F7C:
	// li r10,19
	ctx.r10.s64 = 19;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227F94"))) PPC_WEAK_FUNC(sub_82227F94);
PPC_FUNC_IMPL(__imp__sub_82227F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227F98"))) PPC_WEAK_FUNC(sub_82227F98);
PPC_FUNC_IMPL(__imp__sub_82227F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r9,160(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// li r11,3
	ctx.r11.s64 = 3;
	// xoris r8,r11,32768
	ctx.r8.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addc r5,r7,r8
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 & ctx.r9.u64;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r3,r6,r9
	temp.u8 = (ctx.r6.u32 + ctx.r9.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227FD4"))) PPC_WEAK_FUNC(sub_82227FD4);
PPC_FUNC_IMPL(__imp__sub_82227FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82227FD8"))) PPC_WEAK_FUNC(sub_82227FD8);
PPC_FUNC_IMPL(__imp__sub_82227FD8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82227FE8"))) PPC_WEAK_FUNC(sub_82227FE8);
PPC_FUNC_IMPL(__imp__sub_82227FE8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8222800c
	if (ctx.cr6.lt) goto loc_8222800C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8222800c
	if (ctx.cr6.lt) goto loc_8222800C;
	// addi r3,r10,172
	ctx.r3.s64 = ctx.r10.s64 + 172;
	// blr 
	return;
loc_8222800C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,4393
	ctx.r3.s64 = ctx.r11.s64 + 4393;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228018"))) PPC_WEAK_FUNC(sub_82228018);
PPC_FUNC_IMPL(__imp__sub_82228018) {
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
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8222805c
	if (ctx.cr6.lt) goto loc_8222805C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8222805c
	if (ctx.cr6.lt) goto loc_8222805C;
	// addi r11,r4,597
	ctx.r11.s64 = ctx.r4.s64 + 597;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8222805C:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x82228068;
	sub_822AA648(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222807C"))) PPC_WEAK_FUNC(sub_8222807C);
PPC_FUNC_IMPL(__imp__sub_8222807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228080"))) PPC_WEAK_FUNC(sub_82228080);
PPC_FUNC_IMPL(__imp__sub_82228080) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,512
	ctx.r3.s64 = 512;
	// lwz r11,160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r3,236(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822280A8"))) PPC_WEAK_FUNC(sub_822280A8);
PPC_FUNC_IMPL(__imp__sub_822280A8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r3,240(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822280D0"))) PPC_WEAK_FUNC(sub_822280D0);
PPC_FUNC_IMPL(__imp__sub_822280D0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822280E0"))) PPC_WEAK_FUNC(sub_822280E0);
PPC_FUNC_IMPL(__imp__sub_822280E0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,752
	ctx.r5.s64 = 752;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// b 0x821847a8
	sub_821847A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822280FC"))) PPC_WEAK_FUNC(sub_822280FC);
PPC_FUNC_IMPL(__imp__sub_822280FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228100"))) PPC_WEAK_FUNC(sub_82228100);
PPC_FUNC_IMPL(__imp__sub_82228100) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,2308
	ctx.r11.s64 = ctx.r4.s64 * 2308;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,1368
	ctx.r3.s64 = ctx.r11.s64 + 1368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82228110"))) PPC_WEAK_FUNC(sub_82228110);
PPC_FUNC_IMPL(__imp__sub_82228110) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x82228140;
	sub_822AA648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x82228158;
	sub_822AA648(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x822aa648
	ctx.lr = 0x82228164;
	sub_822AA648(ctx, base);
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

__attribute__((alias("__imp__sub_82228178"))) PPC_WEAK_FUNC(sub_82228178);
PPC_FUNC_IMPL(__imp__sub_82228178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82228180;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x822aa648
	ctx.lr = 0x822281B0;
	sub_822AA648(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x822aa648
	ctx.lr = 0x822281C4;
	sub_822AA648(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x822aa648
	ctx.lr = 0x822281D0;
	sub_822AA648(ctx, base);
	// li r10,512
	ctx.r10.s64 = 512;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// bl 0x82227ad8
	ctx.lr = 0x822281E4;
	sub_82227AD8(ctx, base);
	// li r4,752
	ctx.r4.s64 = 752;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// bl 0x822aa648
	ctx.lr = 0x822281F0;
	sub_822AA648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822281F8"))) PPC_WEAK_FUNC(sub_822281F8);
PPC_FUNC_IMPL(__imp__sub_822281F8) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-2176
	ctx.r9.s64 = ctx.r11.s64 + -2176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82228230
	if (ctx.cr6.eq) goto loc_82228230;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8222822C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82228230:
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

__attribute__((alias("__imp__sub_82228244"))) PPC_WEAK_FUNC(sub_82228244);
PPC_FUNC_IMPL(__imp__sub_82228244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82228248"))) PPC_WEAK_FUNC(sub_82228248);
PPC_FUNC_IMPL(__imp__sub_82228248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82228250;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,14
	ctx.r10.s64 = 14;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r25,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r25.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
loc_82228294:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82228294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82228294;
	// addi r31,r29,172
	ctx.r31.s64 = ctx.r29.s64 + 172;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r27,512
	ctx.r27.s64 = 512;
loc_822282B0:
	// stw r30,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r26,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r25.u32);
	// bl 0x822aa648
	ctx.lr = 0x822282C8;
	sub_822AA648(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x822aa648
	ctx.lr = 0x822282DC;
	sub_822AA648(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x822aa648
	ctx.lr = 0x822282E8;
	sub_822AA648(ctx, base);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stw r25,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r25.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x822aa648
	ctx.lr = 0x822282FC;
	sub_822AA648(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x82228308;
	sub_822AA648(ctx, base);
	// sth r27,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r27.u16);
	// li r4,67
	ctx.r4.s64 = 67;
	// addi r3,r31,86
	ctx.r3.s64 = ctx.r31.s64 + 86;
	// bl 0x822aa648
	ctx.lr = 0x82228318;
	sub_822AA648(ctx, base);
	// li r4,193
	ctx.r4.s64 = 193;
	// addi r3,r31,153
	ctx.r3.s64 = ctx.r31.s64 + 153;
	// bl 0x822aa648
	ctx.lr = 0x82228324;
	sub_822AA648(ctx, base);
	// li r4,97
	ctx.r4.s64 = 97;
	// addi r3,r31,346
	ctx.r3.s64 = ctx.r31.s64 + 346;
	// bl 0x822aa648
	ctx.lr = 0x82228330;
	sub_822AA648(ctx, base);
	// stb r30,443(r31)
	PPC_STORE_U8(ctx.r31.u32 + 443, ctx.r30.u8);
	// li r4,752
	ctx.r4.s64 = 752;
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// bl 0x822aa648
	ctx.lr = 0x82228340;
	sub_822AA648(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,2308
	ctx.r31.s64 = ctx.r31.s64 + 2308;
	// bne 0x822282b0
	if (!ctx.cr0.eq) goto loc_822282B0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r29,4776
	ctx.r3.s64 = ctx.r29.s64 + 4776;
	// bl 0x822aa648
	ctx.lr = 0x82228358;
	sub_822AA648(ctx, base);
	// stw r30,4792(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4792, ctx.r30.u32);
	// addi r31,r29,4800
	ctx.r31.s64 = ctx.r29.s64 + 4800;
	// stw r30,4796(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4796, ctx.r30.u32);
	// li r29,64
	ctx.r29.s64 = 64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8222836C:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822aa648
	ctx.lr = 0x8222837C;
	sub_822AA648(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x8222836c
	if (!ctx.cr0.eq) goto loc_8222836C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -728);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r30,744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 744, ctx.r30.u32);
	// stw r30,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r30.u32);
	// stw r30,752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 752, ctx.r30.u32);
	// stw r30,756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 756, ctx.r30.u32);
	// bl 0x8215bd60
	ctx.lr = 0x822283A8;
	sub_8215BD60(ctx, base);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_822283B4"))) PPC_WEAK_FUNC(sub_822283B4);
PPC_FUNC_IMPL(__imp__sub_822283B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

