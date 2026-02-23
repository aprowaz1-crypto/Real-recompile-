#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8217EB48"))) PPC_WEAK_FUNC(sub_8217EB48);
PPC_FUNC_IMPL(__imp__sub_8217EB48) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217EB68"))) PPC_WEAK_FUNC(sub_8217EB68);
PPC_FUNC_IMPL(__imp__sub_8217EB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8217EB70;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8217ebec
	if (ctx.cr6.eq) goto loc_8217EBEC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8217ebb4
	if (ctx.cr6.eq) goto loc_8217EBB4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8217ec70
	if (!ctx.cr6.eq) goto loc_8217EC70;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8217EBB4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217EBC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217ec70
	if (!ctx.cr6.eq) goto loc_8217EC70;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8217EBEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217EC04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8217ec68
	if (!ctx.cr6.lt) goto loc_8217EC68;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8217ec40
	if (!ctx.cr6.eq) goto loc_8217EC40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82170df8
	ctx.lr = 0x8217EC24;
	sub_82170DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217ec40
	if (ctx.cr6.eq) goto loc_8217EC40;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8217EC40:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217EC58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8217EC68:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8217EC70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8217EC78"))) PPC_WEAK_FUNC(sub_8217EC78);
PPC_FUNC_IMPL(__imp__sub_8217EC78) {
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
	// bl 0x82179ba0
	ctx.lr = 0x8217EC90;
	sub_82179BA0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,-16772
	ctx.r8.s64 = ctx.r10.s64 + -16772;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8217ECC8"))) PPC_WEAK_FUNC(sub_8217ECC8);
PPC_FUNC_IMPL(__imp__sub_8217ECC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-16772
	ctx.r10.s64 = ctx.r11.s64 + -16772;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82179bb8
	sub_82179BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217ECD8"))) PPC_WEAK_FUNC(sub_8217ECD8);
PPC_FUNC_IMPL(__imp__sub_8217ECD8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217ECF4"))) PPC_WEAK_FUNC(sub_8217ECF4);
PPC_FUNC_IMPL(__imp__sub_8217ECF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217ECF8"))) PPC_WEAK_FUNC(sub_8217ECF8);
PPC_FUNC_IMPL(__imp__sub_8217ECF8) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8217ed84
	if (ctx.cr6.eq) goto loc_8217ED84;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8217ed50
	if (ctx.cr6.eq) goto loc_8217ED50;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8217eda8
	if (!ctx.cr6.eq) goto loc_8217EDA8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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
loc_8217ED50:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217ED60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217eda8
	if (!ctx.cr6.eq) goto loc_8217EDA8;
loc_8217ED68:
	// li r11,3
	ctx.r11.s64 = 3;
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
loc_8217ED84:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8217ed68
	if (ctx.cr6.lt) goto loc_8217ED68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217EDA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_8217EDA8:
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

__attribute__((alias("__imp__sub_8217EDBC"))) PPC_WEAK_FUNC(sub_8217EDBC);
PPC_FUNC_IMPL(__imp__sub_8217EDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217EDC0"))) PPC_WEAK_FUNC(sub_8217EDC0);
PPC_FUNC_IMPL(__imp__sub_8217EDC0) {
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
	// addi r10,r11,-16804
	ctx.r10.s64 = ctx.r11.s64 + -16804;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82179bb8
	ctx.lr = 0x8217EDEC;
	sub_82179BB8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217ee08
	if (ctx.cr6.eq) goto loc_8217EE08;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8217EE04;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8217EE08:
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

__attribute__((alias("__imp__sub_8217EE20"))) PPC_WEAK_FUNC(sub_8217EE20);
PPC_FUNC_IMPL(__imp__sub_8217EE20) {
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
	// addi r10,r11,-16788
	ctx.r10.s64 = ctx.r11.s64 + -16788;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82179bb8
	ctx.lr = 0x8217EE4C;
	sub_82179BB8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217ee68
	if (ctx.cr6.eq) goto loc_8217EE68;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8217EE64;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8217EE68:
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

__attribute__((alias("__imp__sub_8217EE80"))) PPC_WEAK_FUNC(sub_8217EE80);
PPC_FUNC_IMPL(__imp__sub_8217EE80) {
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
	// addi r10,r11,-16772
	ctx.r10.s64 = ctx.r11.s64 + -16772;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82179bb8
	ctx.lr = 0x8217EEAC;
	sub_82179BB8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217eec8
	if (ctx.cr6.eq) goto loc_8217EEC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8217EEC4;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8217EEC8:
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

__attribute__((alias("__imp__sub_8217EEE0"))) PPC_WEAK_FUNC(sub_8217EEE0);
PPC_FUNC_IMPL(__imp__sub_8217EEE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217EEF4"))) PPC_WEAK_FUNC(sub_8217EEF4);
PPC_FUNC_IMPL(__imp__sub_8217EEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217EEF8"))) PPC_WEAK_FUNC(sub_8217EEF8);
PPC_FUNC_IMPL(__imp__sub_8217EEF8) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8217ef2c
	if (!ctx.cr6.gt) goto loc_8217EF2C;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8217EF2C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8217ef54
	if (!ctx.cr6.gt) goto loc_8217EF54;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821847a8
	ctx.lr = 0x8217EF48;
	sub_821847A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8217EF54:
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

__attribute__((alias("__imp__sub_8217EF70"))) PPC_WEAK_FUNC(sub_8217EF70);
PPC_FUNC_IMPL(__imp__sub_8217EF70) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8217ef9c
	if (ctx.cr6.lt) goto loc_8217EF9C;
	// beq cr6,0x8217ef94
	if (ctx.cr6.eq) goto loc_8217EF94;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bge cr6,0x8217efb8
	if (!ctx.cr6.lt) goto loc_8217EFB8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8217efa0
	goto loc_8217EFA0;
loc_8217EF94:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8217efa4
	goto loc_8217EFA4;
loc_8217EF9C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8217EFA0:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_8217EFA4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8217efb8
	if (!ctx.cr6.lt) goto loc_8217EFB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// blr 
	return;
loc_8217EFB8:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8217efd0
	if (!ctx.cr6.gt) goto loc_8217EFD0;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_8217EFD0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217EFDC"))) PPC_WEAK_FUNC(sub_8217EFDC);
PPC_FUNC_IMPL(__imp__sub_8217EFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217EFE0"))) PPC_WEAK_FUNC(sub_8217EFE0);
PPC_FUNC_IMPL(__imp__sub_8217EFE0) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8217eef8
	sub_8217EEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217EFE8"))) PPC_WEAK_FUNC(sub_8217EFE8);
PPC_FUNC_IMPL(__imp__sub_8217EFE8) {
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
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8217eef8
	ctx.lr = 0x8217F004;
	sub_8217EEF8(ctx, base);
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r9,5(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r5,1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
	// stb r5,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r5.u8);
	// stb r4,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
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

__attribute__((alias("__imp__sub_8217F060"))) PPC_WEAK_FUNC(sub_8217F060);
PPC_FUNC_IMPL(__imp__sub_8217F060) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8217eef8
	ctx.lr = 0x8217F07C;
	sub_8217EEF8(ctx, base);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8217F0B8"))) PPC_WEAK_FUNC(sub_8217F0B8);
PPC_FUNC_IMPL(__imp__sub_8217F0B8) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8217eef8
	ctx.lr = 0x8217F0D4;
	sub_8217EEF8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
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

__attribute__((alias("__imp__sub_8217F100"))) PPC_WEAK_FUNC(sub_8217F100);
PPC_FUNC_IMPL(__imp__sub_8217F100) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// blt cr6,0x8217f114
	if (ctx.cr6.lt) goto loc_8217F114;
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8217F114:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217F11C"))) PPC_WEAK_FUNC(sub_8217F11C);
PPC_FUNC_IMPL(__imp__sub_8217F11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F120"))) PPC_WEAK_FUNC(sub_8217F120);
PPC_FUNC_IMPL(__imp__sub_8217F120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-16752
	ctx.r10.s64 = ctx.r11.s64 + -16752;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217F130"))) PPC_WEAK_FUNC(sub_8217F130);
PPC_FUNC_IMPL(__imp__sub_8217F130) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217F154"))) PPC_WEAK_FUNC(sub_8217F154);
PPC_FUNC_IMPL(__imp__sub_8217F154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F158"))) PPC_WEAK_FUNC(sub_8217F158);
PPC_FUNC_IMPL(__imp__sub_8217F158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8217F160;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217F184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8217F198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217F1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8217F1C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F1E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217F1F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8217F20C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217F224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,40(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8217F23C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217F26C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8217F280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217F298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8217F2AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217F2C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217F2D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217F2F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8217F304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,80(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217F31C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217F348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8217F35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,96(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217F374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8217F388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,104(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217F3A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217F3B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217F3CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8217F3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8217F3EC"))) PPC_WEAK_FUNC(sub_8217F3EC);
PPC_FUNC_IMPL(__imp__sub_8217F3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F3F0"))) PPC_WEAK_FUNC(sub_8217F3F0);
PPC_FUNC_IMPL(__imp__sub_8217F3F0) {
	PPC_FUNC_PROLOGUE();
	// std r4,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217F3F8"))) PPC_WEAK_FUNC(sub_8217F3F8);
PPC_FUNC_IMPL(__imp__sub_8217F3F8) {
	PPC_FUNC_PROLOGUE();
	// ld r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217F400"))) PPC_WEAK_FUNC(sub_8217F400);
PPC_FUNC_IMPL(__imp__sub_8217F400) {
	PPC_FUNC_PROLOGUE();
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217F408"))) PPC_WEAK_FUNC(sub_8217F408);
PPC_FUNC_IMPL(__imp__sub_8217F408) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,47
	ctx.r9.s64 = 47;
	// addi r8,r10,-16636
	ctx.r8.s64 = ctx.r10.s64 + -16636;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217F42C"))) PPC_WEAK_FUNC(sub_8217F42C);
PPC_FUNC_IMPL(__imp__sub_8217F42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F430"))) PPC_WEAK_FUNC(sub_8217F430);
PPC_FUNC_IMPL(__imp__sub_8217F430) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8217F460"))) PPC_WEAK_FUNC(sub_8217F460);
PPC_FUNC_IMPL(__imp__sub_8217F460) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217F464"))) PPC_WEAK_FUNC(sub_8217F464);
PPC_FUNC_IMPL(__imp__sub_8217F464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F468"))) PPC_WEAK_FUNC(sub_8217F468);
PPC_FUNC_IMPL(__imp__sub_8217F468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217f47c
	if (!ctx.cr6.eq) goto loc_8217F47C;
loc_8217F474:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8217F47C:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x8217f474
	if (!ctx.cr6.gt) goto loc_8217F474;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217F494"))) PPC_WEAK_FUNC(sub_8217F494);
PPC_FUNC_IMPL(__imp__sub_8217F494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F498"))) PPC_WEAK_FUNC(sub_8217F498);
PPC_FUNC_IMPL(__imp__sub_8217F498) {
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
	ctx.lr = 0x8217F4B0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8217f4c8
	if (ctx.cr6.eq) goto loc_8217F4C8;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x8217F4C4;
	sub_82183448(ctx, base);
	// b 0x8217f4d0
	goto loc_8217F4D0;
loc_8217F4C8:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x8217F4D0;
	sub_821845A0(ctx, base);
loc_8217F4D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217f4f4
	if (ctx.cr6.eq) goto loc_8217F4F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82180f60
	ctx.lr = 0x8217F4E0;
	sub_82180F60(ctx, base);
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
loc_8217F4F4:
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

__attribute__((alias("__imp__sub_8217F50C"))) PPC_WEAK_FUNC(sub_8217F50C);
PPC_FUNC_IMPL(__imp__sub_8217F50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F510"))) PPC_WEAK_FUNC(sub_8217F510);
PPC_FUNC_IMPL(__imp__sub_8217F510) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r8,r10,-16752
	ctx.r8.s64 = ctx.r10.s64 + -16752;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8217F544"))) PPC_WEAK_FUNC(sub_8217F544);
PPC_FUNC_IMPL(__imp__sub_8217F544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F548"))) PPC_WEAK_FUNC(sub_8217F548);
PPC_FUNC_IMPL(__imp__sub_8217F548) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-16752
	ctx.r9.s64 = ctx.r11.s64 + -16752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8217f580
	if (ctx.cr6.eq) goto loc_8217F580;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8217F57C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8217F580:
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

__attribute__((alias("__imp__sub_8217F594"))) PPC_WEAK_FUNC(sub_8217F594);
PPC_FUNC_IMPL(__imp__sub_8217F594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F598"))) PPC_WEAK_FUNC(sub_8217F598);
PPC_FUNC_IMPL(__imp__sub_8217F598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8217F5A0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8217f60c
	if (!ctx.cr6.gt) goto loc_8217F60C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8217F5C0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217f5f0
	if (ctx.cr6.eq) goto loc_8217F5F0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217f5f0
	if (ctx.cr6.eq) goto loc_8217F5F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217F5F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8217F5F0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8217f5c0
	if (ctx.cr6.lt) goto loc_8217F5C0;
loc_8217F60C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217f620
	if (ctx.cr6.eq) goto loc_8217F620;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8217F620;
	sub_82183E40(ctx, base);
loc_8217F620:
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8217F630"))) PPC_WEAK_FUNC(sub_8217F630);
PPC_FUNC_IMPL(__imp__sub_8217F630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8217F638;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8217f6d0
	if (!ctx.cr6.lt) goto loc_8217F6D0;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8217f674
	if (!ctx.cr6.gt) goto loc_8217F674;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8217F674:
	// bl 0x82080d68
	ctx.lr = 0x8217F678;
	sub_82080D68(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8217f6a4
	if (ctx.cr6.eq) goto loc_8217F6A4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_8217F690:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bne cr6,0x8217f690
	if (!ctx.cr6.eq) goto loc_8217F690;
loc_8217F6A4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217f6c0
	if (ctx.cr6.eq) goto loc_8217F6C0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8217F6B8;
	sub_82183E40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8217F6C0:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8217F6D0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8217F6E8"))) PPC_WEAK_FUNC(sub_8217F6E8);
PPC_FUNC_IMPL(__imp__sub_8217F6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-16636
	ctx.r10.s64 = ctx.r11.s64 + -16636;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8217f598
	sub_8217F598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8217F6F8"))) PPC_WEAK_FUNC(sub_8217F6F8);
PPC_FUNC_IMPL(__imp__sub_8217F6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8217F700;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217f724
	if (ctx.cr6.eq) goto loc_8217F724;
loc_8217F718:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8217F724:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8217f718
	if (ctx.cr6.eq) goto loc_8217F718;
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82183078
	ctx.lr = 0x8217F734;
	sub_82183078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x8217F740;
	sub_821837D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217f598
	ctx.lr = 0x8217F748;
	sub_8217F598(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8217f760
	if (!ctx.cr6.gt) goto loc_8217F760;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8217F760:
	// bl 0x82080d68
	ctx.lr = 0x8217F764;
	sub_82080D68(ctx, base);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8217f7cc
	if (ctx.cr6.eq) goto loc_8217F7CC;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8217F778:
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82183850
	ctx.lr = 0x8217F780;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8217f798
	if (ctx.cr6.eq) goto loc_8217F798;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x8217F794;
	sub_82183448(ctx, base);
	// b 0x8217f7a0
	goto loc_8217F7A0;
loc_8217F798:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x8217F7A0;
	sub_821845A0(ctx, base);
loc_8217F7A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217f7b4
	if (ctx.cr6.eq) goto loc_8217F7B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82180f60
	ctx.lr = 0x8217F7B0;
	sub_82180F60(ctx, base);
	// b 0x8217f7b8
	goto loc_8217F7B8;
loc_8217F7B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217F7B8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8217f778
	if (!ctx.cr0.eq) goto loc_8217F778;
loc_8217F7CC:
	// stw r27,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821837d0
	ctx.lr = 0x8217F7D8;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8217F7E4"))) PPC_WEAK_FUNC(sub_8217F7E4);
PPC_FUNC_IMPL(__imp__sub_8217F7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F7E8"))) PPC_WEAK_FUNC(sub_8217F7E8);
PPC_FUNC_IMPL(__imp__sub_8217F7E8) {
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
	// addi r10,r11,-16636
	ctx.r10.s64 = ctx.r11.s64 + -16636;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8217f598
	ctx.lr = 0x8217F814;
	sub_8217F598(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217f830
	if (ctx.cr6.eq) goto loc_8217F830;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8217F82C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8217F830:
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

__attribute__((alias("__imp__sub_8217F848"))) PPC_WEAK_FUNC(sub_8217F848);
PPC_FUNC_IMPL(__imp__sub_8217F848) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8217e680
	ctx.lr = 0x8217F868;
	sub_8217E680(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16632
	ctx.r9.s64 = ctx.r10.s64 + -16632;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// bl 0x822aa648
	ctx.lr = 0x8217F8A0;
	sub_822AA648(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x822aa648
	ctx.lr = 0x8217F8AC;
	sub_822AA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820ef488
	ctx.lr = 0x8217F8B8;
	sub_820EF488(ctx, base);
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

__attribute__((alias("__imp__sub_8217F8D4"))) PPC_WEAK_FUNC(sub_8217F8D4);
PPC_FUNC_IMPL(__imp__sub_8217F8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F8D8"))) PPC_WEAK_FUNC(sub_8217F8D8);
PPC_FUNC_IMPL(__imp__sub_8217F8D8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-16632
	ctx.r10.s64 = ctx.r11.s64 + -16632;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x820ef488
	ctx.lr = 0x8217F900;
	sub_820EF488(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8217f918
	if (ctx.cr6.eq) goto loc_8217F918;
	// bl 0x82256f70
	ctx.lr = 0x8217F910;
	sub_82256F70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8217F918:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217f92c
	if (ctx.cr6.eq) goto loc_8217F92C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8217F92C;
	sub_82183E40(ctx, base);
loc_8217F92C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x8217e6b8
	ctx.lr = 0x8217F93C;
	sub_8217E6B8(ctx, base);
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

__attribute__((alias("__imp__sub_8217F950"))) PPC_WEAK_FUNC(sub_8217F950);
PPC_FUNC_IMPL(__imp__sub_8217F950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8217F958;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217F974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217f988
	if (ctx.cr6.eq) goto loc_8217F988;
loc_8217F97C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8217F988:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217f97c
	if (ctx.cr6.eq) goto loc_8217F97C;
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82183078
	ctx.lr = 0x8217F998;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8217F9A4;
	sub_821837D0(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217F9E8;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8217F9F4"))) PPC_WEAK_FUNC(sub_8217F9F4);
PPC_FUNC_IMPL(__imp__sub_8217F9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217F9F8"))) PPC_WEAK_FUNC(sub_8217F9F8);
PPC_FUNC_IMPL(__imp__sub_8217F9F8) {
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
	// bl 0x8217f8d8
	ctx.lr = 0x8217FA18;
	sub_8217F8D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217fa34
	if (ctx.cr6.eq) goto loc_8217FA34;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8217FA30;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8217FA34:
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

__attribute__((alias("__imp__sub_8217FA4C"))) PPC_WEAK_FUNC(sub_8217FA4C);
PPC_FUNC_IMPL(__imp__sub_8217FA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8217FA50"))) PPC_WEAK_FUNC(sub_8217FA50);
PPC_FUNC_IMPL(__imp__sub_8217FA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8217FA58;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217FA70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821801f8
	if (ctx.cr6.eq) goto loc_821801F8;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82183078
	ctx.lr = 0x8217FA80;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8217FA8C;
	sub_821837D0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x821801f0
	if (ctx.cr6.gt) goto loc_821801F0;
	// lis r12,-32232
	ctx.r12.s64 = -2112356352;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1360
	ctx.r12.s64 = ctx.r12.s64 + -1360;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,-1316(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -1316);
	// lwz r16,-1272(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -1272);
	// lwz r16,-1196(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -1196);
	// lwz r16,-1108(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -1108);
	// lwz r16,-1000(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -1000);
	// lwz r16,-816(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -816);
	// lwz r16,-648(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -648);
	// lwz r16,-556(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -556);
	// lwz r16,-256(r23)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r23.u32 + -256);
	// lwz r16,100(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// lwz r16,372(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 372);
loc_8217FADC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217FB00;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,-8460(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5670
	ctx.lr = 0x8217FB1C;
	sub_820E5670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217fadc
	if (!ctx.cr6.eq) goto loc_8217FADC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5460
	ctx.lr = 0x8217FB34;
	sub_820E5460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217fb80
	if (ctx.cr6.eq) goto loc_8217FB80;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217FB4C;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r30,-8460(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5218
	ctx.lr = 0x8217FB64;
	sub_820E5218(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821801f0
	if (!ctx.cr6.eq) goto loc_821801F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x820e5670
	ctx.lr = 0x8217FB78;
	sub_820E5670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217fadc
	if (!ctx.cr6.eq) goto loc_8217FADC;
loc_8217FB80:
	// li r4,1
	ctx.r4.s64 = 1;
loc_8217FB84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217e6e0
	ctx.lr = 0x8217FB8C;
	sub_8217E6E0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217FBA4;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r30,-8460(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5218
	ctx.lr = 0x8217FBBC;
	sub_820E5218(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217fb80
	if (!ctx.cr6.eq) goto loc_8217FB80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x820e5670
	ctx.lr = 0x8217FBD0;
	sub_820E5670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217fb80
	if (ctx.cr6.eq) goto loc_8217FB80;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82256608
	ctx.lr = 0x8217FBE0;
	sub_82256608(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x8217fb84
	if (!ctx.cr6.eq) goto loc_8217FB84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e51f8
	ctx.lr = 0x8217FBF4;
	sub_820E51F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef488
	ctx.lr = 0x8217FC00;
	sub_820EF488(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217FC10;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r30,-8460(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5218
	ctx.lr = 0x8217FC28;
	sub_820E5218(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217fb80
	if (!ctx.cr6.eq) goto loc_8217FB80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x820e5670
	ctx.lr = 0x8217FC3C;
	sub_820E5670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217fb80
	if (ctx.cr6.eq) goto loc_8217FB80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217FC5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r3.u64);
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1001
	ctx.r4.s64 = 1001;
	// bl 0x82257040
	ctx.lr = 0x8217FC7C;
	sub_82257040(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8217fcb0
	if (ctx.cr6.eq) goto loc_8217FCB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8217e6e0
	ctx.lr = 0x8217FC90;
	sub_8217E6E0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217FCA8;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8217FCB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820ef488
	ctx.lr = 0x8217FCB8;
	sub_820EF488(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217FCC8;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821801f0
	if (ctx.cr6.eq) goto loc_821801F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8208a480
	ctx.lr = 0x8217FCF4;
	sub_8208A480(ctx, base);
	// cmplwi cr6,r3,1223
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1223, ctx.xer);
	// bne cr6,0x8217fd20
	if (!ctx.cr6.eq) goto loc_8217FD20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82156ef8
	ctx.lr = 0x8217FD08;
	sub_82156EF8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217FD18;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8217FD20:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8217fd4c
	if (ctx.cr6.eq) goto loc_8217FD4C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8217e6e0
	ctx.lr = 0x8217FD34;
	sub_8217E6E0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217FD44;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8217FD4C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820ef488
	ctx.lr = 0x8217FD54;
	sub_820EF488(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82156ef8
	ctx.lr = 0x8217FD60;
	sub_82156EF8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217FD70;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e5218
	ctx.lr = 0x8217FD84;
	sub_820E5218(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217fd98
	if (!ctx.cr6.eq) goto loc_8217FD98;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef488
	ctx.lr = 0x8217FD98;
	sub_820EF488(ctx, base);
loc_8217FD98:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bge cr6,0x8217fdbc
	if (!ctx.cr6.lt) goto loc_8217FDBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217FDB4;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8217FDBC:
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217FDCC;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217FDEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// std r3,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r3.u64);
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8234ff20
	ctx.lr = 0x8217FE14;
	sub_8234FF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217fe48
	if (ctx.cr6.eq) goto loc_8217FE48;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217e6e0
	ctx.lr = 0x8217FE28;
	sub_8217E6E0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217FE40;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8217FE48:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820824b8
	ctx.lr = 0x8217FE50;
	sub_820824B8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82080d68
	ctx.lr = 0x8217FE58;
	sub_82080D68(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r31,68
	ctx.r7.s64 = ctx.r31.s64 + 68;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82256f58
	ctx.lr = 0x8217FE74;
	sub_82256F58(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8217fed0
	if (ctx.cr6.eq) goto loc_8217FED0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217e6e0
	ctx.lr = 0x8217FE88;
	sub_8217E6E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,10
	ctx.r10.s64 = 10;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// blt cr6,0x8217feb8
	if (ctx.cr6.lt) goto loc_8217FEB8;
	// bne cr6,0x821801f0
	if (!ctx.cr6.eq) goto loc_821801F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8217FEA8;
	sub_821830F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8217FEB0;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8217FEB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821830f8
	ctx.lr = 0x8217FEC0;
	sub_821830F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8217FEC8;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8217FED0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8217feb8
	if (ctx.cr6.lt) goto loc_8217FEB8;
	// bne cr6,0x821801f0
	if (!ctx.cr6.eq) goto loc_821801F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x8217FEF0;
	sub_821830F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8217FEF8;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e5218
	ctx.lr = 0x8217FF0C;
	sub_820E5218(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217ff20
	if (!ctx.cr6.eq) goto loc_8217FF20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef488
	ctx.lr = 0x8217FF20;
	sub_820EF488(ctx, base);
loc_8217FF20:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821801f0
	if (ctx.cr6.eq) goto loc_821801F0;
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82183078
	ctx.lr = 0x8217FF38;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8217FF44;
	sub_821837D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208a480
	ctx.lr = 0x8217FF5C;
	sub_8208A480(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217ff90
	if (ctx.cr6.eq) goto loc_8217FF90;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217e6e0
	ctx.lr = 0x8217FF70;
	sub_8217E6E0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8217FF80;
	sub_821837D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x8217FF88;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8217FF90:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820824b8
	ctx.lr = 0x8217FF98;
	sub_820824B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217ffe0
	if (ctx.cr6.eq) goto loc_8217FFE0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r30,56(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217FFBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// cmpld cr6,r3,r9
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x8217ffe0
	if (!ctx.cr6.eq) goto loc_8217FFE0;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217ffe0
	if (ctx.cr6.eq) goto loc_8217FFE0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82156ef8
	ctx.lr = 0x8217FFE0;
	sub_82156EF8(ctx, base);
loc_8217FFE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229078
	ctx.lr = 0x8217FFE8;
	sub_82229078(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82180048
	if (!ctx.cr6.eq) goto loc_82180048;
	// li r10,10
	ctx.r10.s64 = 10;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// blt cr6,0x82180028
	if (ctx.cr6.lt) goto loc_82180028;
	// bne cr6,0x82180030
	if (!ctx.cr6.eq) goto loc_82180030;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82180010;
	sub_821830F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82180018;
	sub_821837D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82180020;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82180028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8218002C:
	// bl 0x821830f8
	ctx.lr = 0x82180030;
	sub_821830F8(ctx, base);
loc_82180030:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82180038;
	sub_821837D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82180040;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82180048:
	// li r10,9
	ctx.r10.s64 = 9;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// blt cr6,0x82180028
	if (ctx.cr6.lt) goto loc_82180028;
	// bne cr6,0x82180030
	if (!ctx.cr6.eq) goto loc_82180030;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8218002c
	goto loc_8218002C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e5218
	ctx.lr = 0x82180070;
	sub_820E5218(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82180084
	if (!ctx.cr6.eq) goto loc_82180084;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ef488
	ctx.lr = 0x82180084;
	sub_820EF488(ctx, base);
loc_82180084:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82180098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82256f78
	ctx.lr = 0x821800A8;
	sub_82256F78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82180150
	if (!ctx.cr6.eq) goto loc_82180150;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x821800d8
	if (!ctx.cr6.eq) goto loc_821800D8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82156ef8
	ctx.lr = 0x821800C8;
	sub_82156EF8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821800D0;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821800D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82180100
	if (!ctx.cr6.eq) goto loc_82180100;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82156ef8
	ctx.lr = 0x821800E8;
	sub_82156EF8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x821800F8;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82180100:
	// cmplwi cr6,r11,1168
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1168, ctx.xer);
	// bne cr6,0x82180138
	if (!ctx.cr6.eq) goto loc_82180138;
	// bl 0x82229078
	ctx.lr = 0x8218010C;
	sub_82229078(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8218015c
	if (ctx.cr6.eq) goto loc_8218015C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82156ef8
	ctx.lr = 0x82180120;
	sub_82156EF8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x82180130;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82180138:
	// bl 0x82229078
	ctx.lr = 0x8218013C;
	sub_82229078(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82180150
	if (ctx.cr6.eq) goto loc_82180150;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82156ef8
	ctx.lr = 0x82180150;
	sub_82156EF8(ctx, base);
loc_82180150:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217e6e0
	ctx.lr = 0x8218015C;
	sub_8217E6E0(ctx, base);
loc_8218015C:
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8218016C;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229078
	ctx.lr = 0x8218017C;
	sub_82229078(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x821801b4
	if (ctx.cr6.lt) goto loc_821801B4;
	// beq cr6,0x821801a4
	if (ctx.cr6.eq) goto loc_821801A4;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x821801bc
	if (!ctx.cr6.lt) goto loc_821801BC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821801bc
	goto loc_821801BC;
loc_821801A4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821801bc
	goto loc_821801BC;
loc_821801B4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_821801BC:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821801d4
	if (ctx.cr6.eq) goto loc_821801D4;
	// bl 0x82256f70
	ctx.lr = 0x821801CC;
	sub_82256F70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821801D4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821801e8
	if (ctx.cr6.eq) goto loc_821801E8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x821801E8;
	sub_82183E40(ctx, base);
loc_821801E8:
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_821801F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821801F8;
	sub_821837D0(ctx, base);
loc_821801F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82180200"))) PPC_WEAK_FUNC(sub_82180200);
PPC_FUNC_IMPL(__imp__sub_82180200) {
	PPC_FUNC_PROLOGUE();
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bgt cr6,0x8218030c
	if (ctx.cr6.gt) {
		sub_8218030C(ctx, base);
		return;
	}
	// beq cr6,0x82180304
	if (ctx.cr6.eq) {
		sub_82180304(ctx, base);
		return;
	}
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x821802b0
	if (ctx.cr6.gt) {
		sub_821802B0(ctx, base);
		return;
	}
	// beq cr6,0x821802a8
	if (ctx.cr6.eq) {
		sub_821802A8(ctx, base);
		return;
	}
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x821803d4
	if (ctx.cr6.gt) {
		// ERROR 821803D4
		return;
	}
	// lis r12,-32232
	ctx.r12.s64 = -2112356352;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,576
	ctx.r12.s64 = ctx.r12.s64 + 576;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82180240"))) PPC_WEAK_FUNC(sub_82180240);
PPC_FUNC_IMPL(__imp__sub_82180240) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,640(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 640);
	// lwz r16,648(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 648);
	// lwz r16,980(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 980);
	// lwz r16,656(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 656);
	// lwz r16,980(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 980);
	// lwz r16,980(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 980);
	// lwz r16,980(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 980);
	// lwz r16,664(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 664);
	// lwz r16,980(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 980);
	// lwz r16,980(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 980);
	// lwz r16,980(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 980);
	// lwz r16,980(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 980);
	// lwz r16,980(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 980);
	// lwz r16,980(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 980);
	// lwz r16,980(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 980);
	// lwz r16,672(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 672);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82180288"))) PPC_WEAK_FUNC(sub_82180288);
PPC_FUNC_IMPL(__imp__sub_82180288) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82180290"))) PPC_WEAK_FUNC(sub_82180290);
PPC_FUNC_IMPL(__imp__sub_82180290) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82180298"))) PPC_WEAK_FUNC(sub_82180298);
PPC_FUNC_IMPL(__imp__sub_82180298) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821802A0"))) PPC_WEAK_FUNC(sub_821802A0);
PPC_FUNC_IMPL(__imp__sub_821802A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821802A8"))) PPC_WEAK_FUNC(sub_821802A8);
PPC_FUNC_IMPL(__imp__sub_821802A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821802B0"))) PPC_WEAK_FUNC(sub_821802B0);
PPC_FUNC_IMPL(__imp__sub_821802B0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bgt cr6,0x821802e4
	if (ctx.cr6.gt) goto loc_821802E4;
	// beq cr6,0x821802dc
	if (ctx.cr6.eq) goto loc_821802DC;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x821802d4
	if (ctx.cr6.eq) goto loc_821802D4;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x821803d4
	if (!ctx.cr6.eq) {
		// ERROR 821803D4
		return;
	}
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_821802D4:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_821802DC:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_821802E4:
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x821802fc
	if (ctx.cr6.eq) goto loc_821802FC;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// bne cr6,0x821803d4
	if (!ctx.cr6.eq) {
		// ERROR 821803D4
		return;
	}
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_821802FC:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82180304"))) PPC_WEAK_FUNC(sub_82180304);
PPC_FUNC_IMPL(__imp__sub_82180304) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218030C"))) PPC_WEAK_FUNC(sub_8218030C);
PPC_FUNC_IMPL(__imp__sub_8218030C) {
	PPC_FUNC_PROLOGUE();
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8218037c
	if (ctx.cr6.gt) goto loc_8218037C;
	// beq cr6,0x82180374
	if (ctx.cr6.eq) goto loc_82180374;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bgt cr6,0x82180350
	if (ctx.cr6.gt) goto loc_82180350;
	// beq cr6,0x82180348
	if (ctx.cr6.eq) goto loc_82180348;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x82180340
	if (ctx.cr6.eq) goto loc_82180340;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// bne cr6,0x821803d4
	if (!ctx.cr6.eq) goto loc_821803D4;
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_82180340:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_82180348:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_82180350:
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// beq cr6,0x8218036c
	if (ctx.cr6.eq) goto loc_8218036C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821803d4
	if (!ctx.cr6.eq) goto loc_821803D4;
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_8218036C:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_82180374:
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
loc_8218037C:
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821803bc
	if (ctx.cr6.gt) goto loc_821803BC;
	// beq cr6,0x821803b4
	if (ctx.cr6.eq) goto loc_821803B4;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821803ac
	if (ctx.cr6.eq) goto loc_821803AC;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821803d4
	if (!ctx.cr6.eq) goto loc_821803D4;
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
loc_821803AC:
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
loc_821803B4:
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
loc_821803BC:
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821803e4
	if (ctx.cr6.eq) goto loc_821803E4;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821803dc
	if (ctx.cr6.eq) goto loc_821803DC;
loc_821803D4:
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
loc_821803DC:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
loc_821803E4:
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821803EC"))) PPC_WEAK_FUNC(sub_821803EC);
PPC_FUNC_IMPL(__imp__sub_821803EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821803F0"))) PPC_WEAK_FUNC(sub_821803F0);
PPC_FUNC_IMPL(__imp__sub_821803F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821803F8;
	sub_82248778(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r28,60(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ld r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82180424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82180200
	ctx.lr = 0x82180434;
	sub_82180200(ctx, base);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82180448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// lwz r10,60(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// subfze r4,r7
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218046C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82180484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// lwz r5,76(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r4,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821804A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r24,r4,65001
	ctx.r24.u64 = ctx.r4.u64 | 65001;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r26,20(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r25,16(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x82257058
	ctx.lr = 0x821804DC;
	sub_82257058(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// bl 0x82183850
	ctx.lr = 0x821804E8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82180500
	if (ctx.cr6.eq) goto loc_82180500;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183448
	ctx.lr = 0x821804FC;
	sub_82183448(ctx, base);
	// b 0x8218050c
	goto loc_8218050C;
loc_82180500:
	// addi r11,r28,15
	ctx.r11.s64 = ctx.r28.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x8218050C;
	sub_821845A0(ctx, base);
loc_8218050C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x82180518;
	sub_822AA648(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82257058
	ctx.lr = 0x8218053C;
	sub_82257058(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stbx r25,r29,r27
	PPC_STORE_U8(ctx.r29.u32 + ctx.r27.u32, ctx.r25.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82180560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82180578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8218058c
	if (ctx.cr6.eq) goto loc_8218058C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x8218058C;
	sub_82183E40(ctx, base);
loc_8218058C:
	// lwz r27,88(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r26,84(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82257058
	ctx.lr = 0x821805B8;
	sub_82257058(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// bl 0x82183850
	ctx.lr = 0x821805C4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821805dc
	if (ctx.cr6.eq) goto loc_821805DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183448
	ctx.lr = 0x821805D8;
	sub_82183448(ctx, base);
	// b 0x821805e8
	goto loc_821805E8;
loc_821805DC:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821805E8;
	sub_821845A0(ctx, base);
loc_821805E8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x821805F4;
	sub_822AA648(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82257058
	ctx.lr = 0x82180618;
	sub_82257058(ctx, base);
	// stbx r25,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r25.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82180638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82180650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82180664
	if (ctx.cr6.eq) goto loc_82180664;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82180664;
	sub_82183E40(ctx, base);
loc_82180664:
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x82180670;
	sub_822AA648(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82180684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,99
	ctx.r5.s64 = 99;
	// bl 0x821847a8
	ctx.lr = 0x82180694;
	sub_821847A8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8218069C"))) PPC_WEAK_FUNC(sub_8218069C);
PPC_FUNC_IMPL(__imp__sub_8218069C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821806A0"))) PPC_WEAK_FUNC(sub_821806A0);
PPC_FUNC_IMPL(__imp__sub_821806A0) {
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
	// bl 0x8217e7c0
	ctx.lr = 0x821806B8;
	sub_8217E7C0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16616
	ctx.r9.s64 = ctx.r10.s64 + -16616;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x821806F8;
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

__attribute__((alias("__imp__sub_82180710"))) PPC_WEAK_FUNC(sub_82180710);
PPC_FUNC_IMPL(__imp__sub_82180710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82180718;
	sub_82248784(ctx, base);
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82180734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821807b4
	if (!ctx.cr6.eq) goto loc_821807B4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821807b4
	if (ctx.cr6.eq) goto loc_821807B4;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82183078
	ctx.lr = 0x8218074C;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82180758;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82180b20
	ctx.lr = 0x82180760;
	sub_82180B20(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bl 0x8234ff20
	ctx.lr = 0x821807A4;
	sub_8234FF20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821807c0
	if (ctx.cr6.eq) goto loc_821807C0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_821807B0:
	// bl 0x821837d0
	ctx.lr = 0x821807B4;
	sub_821837D0(ctx, base);
loc_821807B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821807C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820824b8
	ctx.lr = 0x821807C8;
	sub_820824B8(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82080d68
	ctx.lr = 0x821807D0;
	sub_82080D68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821807ec
	if (ctx.cr6.lt) goto loc_821807EC;
	// bne cr6,0x821807f4
	if (!ctx.cr6.eq) goto loc_821807F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821807f0
	goto loc_821807F0;
loc_821807EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821807F0:
	// bl 0x821830f8
	ctx.lr = 0x821807F4;
	sub_821830F8(ctx, base);
loc_821807F4:
	// addi r7,r31,44
	ctx.r7.s64 = ctx.r31.s64 + 44;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82256f58
	ctx.lr = 0x8218080C;
	sub_82256F58(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x821807b0
	if (!ctx.cr6.eq) goto loc_821807B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x82180824;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82180830"))) PPC_WEAK_FUNC(sub_82180830);
PPC_FUNC_IMPL(__imp__sub_82180830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82180838;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82180850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82180a20
	if (ctx.cr6.eq) goto loc_82180A20;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r25,r31,44
	ctx.r25.s64 = ctx.r31.s64 + 44;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82180a20
	if (ctx.cr6.eq) goto loc_82180A20;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82183078
	ctx.lr = 0x82180870;
	sub_82183078(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x8218087C;
	sub_821837D0(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8208a480
	ctx.lr = 0x82180894;
	sub_8208A480(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82180988
	if (!ctx.cr6.eq) goto loc_82180988;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820824b8
	ctx.lr = 0x821808A4;
	sub_820824B8(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8217f630
	ctx.lr = 0x821808C8;
	sub_8217F630(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82180934
	if (ctx.cr6.eq) goto loc_82180934;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_821808DC:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r27,r6,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8217f498
	ctx.lr = 0x82180904;
	sub_8217F498(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r5,r27,r26
	PPC_STORE_U32(ctx.r27.u32 + ctx.r26.u32, ctx.r5.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x821803f0
	ctx.lr = 0x82180920;
	sub_821803F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,104
	ctx.r28.s64 = ctx.r28.s64 + 104;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821808dc
	if (ctx.cr6.lt) goto loc_821808DC;
loc_82180934:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8218094c
	if (ctx.cr6.lt) goto loc_8218094C;
	// bne cr6,0x82180954
	if (!ctx.cr6.eq) goto loc_82180954;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82180950
	goto loc_82180950;
loc_8218094C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82180950:
	// bl 0x821830f8
	ctx.lr = 0x82180954;
	sub_821830F8(ctx, base);
loc_82180954:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82256f58
	ctx.lr = 0x8218096C;
	sub_82256F58(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82180a18
	if (ctx.cr6.eq) goto loc_82180A18;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821837d0
	ctx.lr = 0x82180980;
	sub_821837D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82180988:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82256ce8
	ctx.lr = 0x82180990;
	sub_82256CE8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180a0c
	if (ctx.cr6.eq) goto loc_82180A0C;
	// bl 0x8217f598
	ctx.lr = 0x821809A0;
	sub_8217F598(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// bl 0x8217f6f8
	ctx.lr = 0x821809BC;
	sub_8217F6F8(ctx, base);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi. r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82180a0c
	if (ctx.cr0.eq) goto loc_82180A0C;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_821809D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r5,r28,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x8217f430
	ctx.lr = 0x821809EC;
	sub_8217F430(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821809d8
	if (ctx.cr6.lt) goto loc_821809D8;
loc_82180A0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82180b20
	ctx.lr = 0x82180A14;
	sub_82180B20(ctx, base);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
loc_82180A18:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821837d0
	ctx.lr = 0x82180A20;
	sub_821837D0(ctx, base);
loc_82180A20:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82180A28"))) PPC_WEAK_FUNC(sub_82180A28);
PPC_FUNC_IMPL(__imp__sub_82180A28) {
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
	// addi r10,r11,-16616
	ctx.r10.s64 = ctx.r11.s64 + -16616;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82180b20
	ctx.lr = 0x82180A54;
	sub_82180B20(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180a78
	if (ctx.cr6.eq) goto loc_82180A78;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82180A68;
	sub_82183E40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82180A78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217e7e8
	ctx.lr = 0x82180A80;
	sub_8217E7E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82180a9c
	if (ctx.cr6.eq) goto loc_82180A9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82180A98;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82180A9C:
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

__attribute__((alias("__imp__sub_82180AB4"))) PPC_WEAK_FUNC(sub_82180AB4);
PPC_FUNC_IMPL(__imp__sub_82180AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82180AB8"))) PPC_WEAK_FUNC(sub_82180AB8);
PPC_FUNC_IMPL(__imp__sub_82180AB8) {
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
	// bl 0x8217e7c0
	ctx.lr = 0x82180AD0;
	sub_8217E7C0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16600
	ctx.r9.s64 = ctx.r10.s64 + -16600;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// bl 0x822aa648
	ctx.lr = 0x82180B08;
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

__attribute__((alias("__imp__sub_82180B20"))) PPC_WEAK_FUNC(sub_82180B20);
PPC_FUNC_IMPL(__imp__sub_82180B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82180B28;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82180b48
	if (ctx.cr6.eq) goto loc_82180B48;
	// bl 0x82256f70
	ctx.lr = 0x82180B40;
	sub_82256F70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r11.u32);
loc_82180B48:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r31,r27,20
	ctx.r31.s64 = ctx.r27.s64 + 20;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82180bc4
	if (ctx.cr0.eq) goto loc_82180BC4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82180B6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82180b9c
	if (ctx.cr6.eq) goto loc_82180B9C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180b9c
	if (ctx.cr6.eq) goto loc_82180B9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82180B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82180B9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82180b6c
	if (ctx.cr6.lt) goto loc_82180B6C;
loc_82180BC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r3,32(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180be0
	if (ctx.cr6.eq) goto loc_82180BE0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82180BE0;
	sub_82183E40(ctx, base);
loc_82180BE0:
	// stw r28,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82180BEC"))) PPC_WEAK_FUNC(sub_82180BEC);
PPC_FUNC_IMPL(__imp__sub_82180BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82180BF0"))) PPC_WEAK_FUNC(sub_82180BF0);
PPC_FUNC_IMPL(__imp__sub_82180BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82180BF8;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82180C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82180c80
	if (!ctx.cr6.eq) goto loc_82180C80;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82180c80
	if (ctx.cr6.eq) goto loc_82180C80;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82183078
	ctx.lr = 0x82180C2C;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82180C38;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82180b20
	ctx.lr = 0x82180C40;
	sub_82180B20(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8234fd30
	ctx.lr = 0x82180C70;
	sub_8234FD30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180c8c
	if (ctx.cr6.eq) goto loc_82180C8C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82180C7C:
	// bl 0x821837d0
	ctx.lr = 0x82180C80;
	sub_821837D0(ctx, base);
loc_82180C80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82180C8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820824b8
	ctx.lr = 0x82180C94;
	sub_820824B8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82080d68
	ctx.lr = 0x82180C9C;
	sub_82080D68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82180cb8
	if (ctx.cr6.lt) goto loc_82180CB8;
	// bne cr6,0x82180cc0
	if (!ctx.cr6.eq) goto loc_82180CC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82180cbc
	goto loc_82180CBC;
loc_82180CB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82180CBC:
	// bl 0x821830f8
	ctx.lr = 0x82180CC0;
	sub_821830F8(ctx, base);
loc_82180CC0:
	// addi r7,r31,44
	ctx.r7.s64 = ctx.r31.s64 + 44;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82256f58
	ctx.lr = 0x82180CD8;
	sub_82256F58(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x82180c7c
	if (!ctx.cr6.eq) goto loc_82180C7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x82180CF0;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82180CFC"))) PPC_WEAK_FUNC(sub_82180CFC);
PPC_FUNC_IMPL(__imp__sub_82180CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82180D00"))) PPC_WEAK_FUNC(sub_82180D00);
PPC_FUNC_IMPL(__imp__sub_82180D00) {
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
	// addi r10,r11,-16600
	ctx.r10.s64 = ctx.r11.s64 + -16600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82180b20
	ctx.lr = 0x82180D2C;
	sub_82180B20(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180d50
	if (ctx.cr6.eq) goto loc_82180D50;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82180D40;
	sub_82183E40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82180D50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217e7e8
	ctx.lr = 0x82180D58;
	sub_8217E7E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82180d74
	if (ctx.cr6.eq) goto loc_82180D74;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82180D70;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82180D74:
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

__attribute__((alias("__imp__sub_82180D8C"))) PPC_WEAK_FUNC(sub_82180D8C);
PPC_FUNC_IMPL(__imp__sub_82180D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82180D90"))) PPC_WEAK_FUNC(sub_82180D90);
PPC_FUNC_IMPL(__imp__sub_82180D90) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-16584
	ctx.r10.s64 = ctx.r11.s64 + -16584;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82180dc8
	if (ctx.cr6.eq) goto loc_82180DC8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82180DC8;
	sub_82183E40(ctx, base);
loc_82180DC8:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180de4
	if (ctx.cr6.eq) goto loc_82180DE4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82180DE4;
	sub_82183E40(ctx, base);
loc_82180DE4:
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217f120
	ctx.lr = 0x82180DF0;
	sub_8217F120(ctx, base);
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

__attribute__((alias("__imp__sub_82180E08"))) PPC_WEAK_FUNC(sub_82180E08);
PPC_FUNC_IMPL(__imp__sub_82180E08) {
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
	// bl 0x8217f130
	ctx.lr = 0x82180E24;
	sub_8217F130(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180e38
	if (ctx.cr6.eq) goto loc_82180E38;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82180E38;
	sub_82183E40(ctx, base);
loc_82180E38:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180e54
	if (ctx.cr6.eq) goto loc_82180E54;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82180E54;
	sub_82183E40(ctx, base);
loc_82180E54:
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82180E70"))) PPC_WEAK_FUNC(sub_82180E70);
PPC_FUNC_IMPL(__imp__sub_82180E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82180E78;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x82180E90;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82180E9C;
	sub_821837D0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180eb0
	if (ctx.cr6.eq) goto loc_82180EB0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82180EB0;
	sub_82183E40(ctx, base);
loc_82180EB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq cr6,0x82180ed8
	if (ctx.cr6.eq) goto loc_82180ED8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82080d68
	ctx.lr = 0x82180EC8;
	sub_82080D68(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8218a128
	ctx.lr = 0x82180ED8;
	sub_8218A128(ctx, base);
loc_82180ED8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82180EE0;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82180EE8"))) PPC_WEAK_FUNC(sub_82180EE8);
PPC_FUNC_IMPL(__imp__sub_82180EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82180EF0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,8(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x82180F08;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82180F14;
	sub_821837D0(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180f28
	if (ctx.cr6.eq) goto loc_82180F28;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82180F28;
	sub_82183E40(ctx, base);
loc_82180F28:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// beq cr6,0x82180f50
	if (ctx.cr6.eq) goto loc_82180F50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82080d68
	ctx.lr = 0x82180F40;
	sub_82080D68(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8218a128
	ctx.lr = 0x82180F50;
	sub_8218A128(ctx, base);
loc_82180F50:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82180F58;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82180F60"))) PPC_WEAK_FUNC(sub_82180F60);
PPC_FUNC_IMPL(__imp__sub_82180F60) {
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
	// bl 0x8217f510
	ctx.lr = 0x82180F7C;
	sub_8217F510(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-16584
	ctx.r10.s64 = ctx.r11.s64 + -16584;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// bl 0x8217f130
	ctx.lr = 0x82180F9C;
	sub_8217F130(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180fb0
	if (ctx.cr6.eq) goto loc_82180FB0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82180FB0;
	sub_82183E40(ctx, base);
loc_82180FB0:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180fc8
	if (ctx.cr6.eq) goto loc_82180FC8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82180FC8;
	sub_82183E40(ctx, base);
loc_82180FC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82180FE8"))) PPC_WEAK_FUNC(sub_82180FE8);
PPC_FUNC_IMPL(__imp__sub_82180FE8) {
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
	// bl 0x82180d90
	ctx.lr = 0x82181008;
	sub_82180D90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181024
	if (ctx.cr6.eq) goto loc_82181024;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82181020;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82181024:
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

__attribute__((alias("__imp__sub_8218103C"))) PPC_WEAK_FUNC(sub_8218103C);
PPC_FUNC_IMPL(__imp__sub_8218103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82181040"))) PPC_WEAK_FUNC(sub_82181040);
PPC_FUNC_IMPL(__imp__sub_82181040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,16688(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16688);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218104C"))) PPC_WEAK_FUNC(sub_8218104C);
PPC_FUNC_IMPL(__imp__sub_8218104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82181050"))) PPC_WEAK_FUNC(sub_82181050);
PPC_FUNC_IMPL(__imp__sub_82181050) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82181060"))) PPC_WEAK_FUNC(sub_82181060);
PPC_FUNC_IMPL(__imp__sub_82181060) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82181078"))) PPC_WEAK_FUNC(sub_82181078);
PPC_FUNC_IMPL(__imp__sub_82181078) {
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
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821810a4
	if (ctx.cr6.eq) goto loc_821810A4;
loc_82181090:
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
loc_821810A4:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821810e4
	if (ctx.cr6.eq) goto loc_821810E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821810D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821810e4
	if (!ctx.cr6.eq) goto loc_821810E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82181090
	if (ctx.cr6.eq) goto loc_82181090;
loc_821810E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822e6048
	ctx.lr = 0x821810EC;
	sub_822E6048(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
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
}

__attribute__((alias("__imp__sub_82181108"))) PPC_WEAK_FUNC(sub_82181108);
PPC_FUNC_IMPL(__imp__sub_82181108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82181110;
	sub_8224878C(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,16688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181194
	if (ctx.cr6.eq) goto loc_82181194;
	// lwz r31,44(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82181194
	if (ctx.cr6.eq) goto loc_82181194;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821826f8
	ctx.lr = 0x82181148;
	sub_821826F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82181154
	if (ctx.cr6.eq) goto loc_82181154;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82181154:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r30,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r30.u64);
	// addi r9,r11,8008
	ctx.r9.s64 = ctx.r11.s64 + 8008;
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82182780
	ctx.lr = 0x8218117C;
	sub_82182780(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82181194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82181194:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218119C"))) PPC_WEAK_FUNC(sub_8218119C);
PPC_FUNC_IMPL(__imp__sub_8218119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821811A0"))) PPC_WEAK_FUNC(sub_821811A0);
PPC_FUNC_IMPL(__imp__sub_821811A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821811A8;
	sub_82248788(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,16688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181230
	if (ctx.cr6.eq) goto loc_82181230;
	// lwz r31,44(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82181230
	if (ctx.cr6.eq) goto loc_82181230;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x821826f8
	ctx.lr = 0x821811E0;
	sub_821826F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821811ec
	if (ctx.cr6.eq) goto loc_821811EC;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821811EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r30,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r30.u64);
	// addi r9,r11,8008
	ctx.r9.s64 = ctx.r11.s64 + 8008;
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82182780
	ctx.lr = 0x82181214;
	sub_82182780(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82181230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82181230:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82181238"))) PPC_WEAK_FUNC(sub_82181238);
PPC_FUNC_IMPL(__imp__sub_82181238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82181240;
	sub_8224878C(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,16688(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16688);
	// bl 0x821826f8
	ctx.lr = 0x82181264;
	sub_821826F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82181270
	if (ctx.cr6.eq) goto loc_82181270;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82181270:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82181368
	if (ctx.cr6.eq) goto loc_82181368;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181368
	if (ctx.cr6.eq) goto loc_82181368;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821812a8
	if (ctx.cr6.eq) goto loc_821812A8;
	// cmpwi cr6,r30,9000
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9000, ctx.xer);
	// blt cr6,0x821812e8
	if (ctx.cr6.lt) goto loc_821812E8;
	// cmpwi cr6,r30,9499
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9499, ctx.xer);
	// ble cr6,0x82181368
	if (!ctx.cr6.gt) goto loc_82181368;
	// b 0x821812e8
	goto loc_821812E8;
loc_821812A8:
	// bl 0x8215bec8
	ctx.lr = 0x821812AC;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821812c8
	if (ctx.cr6.eq) goto loc_821812C8;
	// bl 0x8215bec8
	ctx.lr = 0x821812BC;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821812d8
	if (!ctx.cr6.eq) goto loc_821812D8;
loc_821812C8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,34557
	ctx.r10.u64 = ctx.r11.u64 | 34557;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821812e8
	if (ctx.cr6.eq) goto loc_821812E8;
loc_821812D8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82181368
	if (!ctx.cr6.eq) goto loc_82181368;
loc_821812E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r29,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r29.u64);
	// addi r9,r11,8008
	ctx.r9.s64 = ctx.r11.s64 + 8008;
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82181368
	if (ctx.cr6.eq) goto loc_82181368;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82182690
	ctx.lr = 0x8218131C;
	sub_82182690(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82181368
	if (ctx.cr6.eq) goto loc_82181368;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821824d8
	ctx.lr = 0x82181350;
	sub_821824D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82181368:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82181370"))) PPC_WEAK_FUNC(sub_82181370);
PPC_FUNC_IMPL(__imp__sub_82181370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82181378;
	sub_82248788(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,66
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 66, ctx.xer);
	// beq cr6,0x821813ac
	if (ctx.cr6.eq) goto loc_821813AC;
	// cmpwi cr6,r4,75
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 75, ctx.xer);
	// beq cr6,0x821813ac
	if (ctx.cr6.eq) goto loc_821813AC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821813ac
	if (!ctx.cr6.eq) goto loc_821813AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_821813AC:
	// addi r11,r28,-5
	ctx.r11.s64 = ctx.r28.s64 + -5;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// cmplwi cr6,r11,76
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 76, ctx.xer);
	// bgt cr6,0x82181e34
	if (ctx.cr6.gt) goto loc_82181E34;
	// lis r12,-32232
	ctx.r12.s64 = -2112356352;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5076
	ctx.r12.s64 = ctx.r12.s64 + 5076;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,5440(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5440);
	// lwz r16,5484(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5484);
	// lwz r16,5856(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5856);
	// lwz r16,5872(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5872);
	// lwz r16,6060(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6060);
	// lwz r16,6256(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6256);
	// lwz r16,6320(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6320);
	// lwz r16,6756(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6756);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,5400(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5400);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,5464(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5464);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,5536(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5536);
	// lwz r16,5696(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5696);
	// lwz r16,6540(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6540);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,5384(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5384);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,6320(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6320);
	// lwz r16,6756(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6756);
	// lwz r16,6756(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6756);
	// lwz r16,7088(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7088);
	// lwz r16,7284(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7284);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7480(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7480);
	// lwz r16,7488(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7488);
	// lwz r16,6036(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6036);
	// lwz r16,7496(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7496);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7512(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7512);
	// lwz r16,7496(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7496);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7532(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7532);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,5856(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5856);
	// lwz r16,7496(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7496);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7556(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7556);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7620(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7620);
	// lwz r16,5440(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 5440);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7732(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7732);
	// lwz r16,7668(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7668);
	// lwz r16,7724(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7724);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x82181e34
	goto loc_82181E34;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// beq cr6,0x82181e34
	if (ctx.cr6.eq) goto loc_82181E34;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821822c0
	ctx.lr = 0x8218153C;
	sub_821822C0(ctx, base);
	// b 0x82181e34
	goto loc_82181E34;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,3,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwimi r11,r10,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82181e34
	goto loc_82181E34;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// ori r9,r10,40
	ctx.r9.u64 = ctx.r10.u64 | 40;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// b 0x82181e34
	goto loc_82181E34;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r12,-43
	ctx.r12.s64 = -43;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bne cr6,0x82181e34
	if (!ctx.cr6.eq) goto loc_82181E34;
	// bl 0x823521a0
	ctx.lr = 0x8218158C;
	sub_823521A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82181e34
	if (!ctx.cr6.eq) goto loc_82181E34;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// b 0x82181e34
	goto loc_82181E34;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218161c
	if (ctx.cr6.eq) goto loc_8218161C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,8008
	ctx.r29.s64 = ctx.r11.s64 + 8008;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// std r30,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r30.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// ori r4,r4,34553
	ctx.r4.u64 = ctx.r4.u64 | 34553;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x821826f8
	ctx.lr = 0x821815E0;
	sub_821826F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x821815f4
	if (ctx.cr6.eq) goto loc_821815F4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x821815fc
	goto loc_821815FC;
loc_821815F4:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,34553
	ctx.r4.u64 = ctx.r4.u64 | 34553;
loc_821815FC:
	// bl 0x82182690
	ctx.lr = 0x82181600;
	sub_82182690(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_8218161C:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181e34
	if (ctx.cr6.eq) goto loc_82181E34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218163C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82181e34
	goto loc_82181E34;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821816bc
	if (ctx.cr6.eq) goto loc_821816BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,8008
	ctx.r29.s64 = ctx.r11.s64 + 8008;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r30,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r30.u64);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// std r30,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r30.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r11.u32);
	// ori r4,r4,34555
	ctx.r4.u64 = ctx.r4.u64 | 34555;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x821826f8
	ctx.lr = 0x82181680;
	sub_821826F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// beq cr6,0x82181694
	if (ctx.cr6.eq) goto loc_82181694;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8218169c
	goto loc_8218169C;
loc_82181694:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,34555
	ctx.r4.u64 = ctx.r4.u64 | 34555;
loc_8218169C:
	// bl 0x82182690
	ctx.lr = 0x821816A0;
	sub_82182690(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821816B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
loc_821816BC:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181e34
	if (ctx.cr6.eq) goto loc_82181E34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821816DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82181e34
	goto loc_82181E34;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x82181e34
	goto loc_82181E34;
	// bl 0x8215bec8
	ctx.lr = 0x821816F4;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82181794
	if (ctx.cr6.eq) goto loc_82181794;
	// bl 0x8215bec8
	ctx.lr = 0x82181704;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82181794
	if (ctx.cr6.eq) goto loc_82181794;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82181794
	if (ctx.cr6.eq) goto loc_82181794;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181734
	if (ctx.cr6.eq) goto loc_82181734;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821829f8
	ctx.lr = 0x82181734;
	sub_821829F8(ctx, base);
loc_82181734:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r10,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r7,r7,0,29,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lwz r6,60(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8218177C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181e34
	if (ctx.cr6.eq) goto loc_82181E34;
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821829a0
	ctx.lr = 0x82181790;
	sub_821829A0(ctx, base);
	// b 0x82181e34
	goto loc_82181E34;
loc_82181794:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r10,r10,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// b 0x82181e34
	goto loc_82181E34;
	// bl 0x8215bec8
	ctx.lr = 0x821817B0;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82181794
	if (ctx.cr6.eq) goto loc_82181794;
	// bl 0x8215bec8
	ctx.lr = 0x821817C0;
	sub_8215BEC8(ctx, base);
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82181794
	if (ctx.cr6.eq) goto loc_82181794;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-4984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4984);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82181794
	if (ctx.cr6.eq) goto loc_82181794;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r12,-43
	ctx.r12.s64 = -43;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// beq cr6,0x8218180c
	if (ctx.cr6.eq) goto loc_8218180C;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82182188
	ctx.lr = 0x8218180C;
	sub_82182188(ctx, base);
loc_8218180C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181820
	if (ctx.cr6.eq) goto loc_82181820;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821829f8
	ctx.lr = 0x82181820;
	sub_821829F8(ctx, base);
loc_82181820:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82181858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181e34
	if (ctx.cr6.eq) goto loc_82181E34;
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821829a0
	ctx.lr = 0x8218186C;
	sub_821829A0(ctx, base);
	// b 0x82181e34
	goto loc_82181E34;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8208f890
	ctx.lr = 0x82181878;
	sub_8208F890(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181e34
	if (ctx.cr6.eq) goto loc_82181E34;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82182938
	ctx.lr = 0x8218188C;
	sub_82182938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82181e34
	if (ctx.cr6.eq) goto loc_82181E34;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821818AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82181e34
	goto loc_82181E34;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821818f0
	if (ctx.cr6.eq) goto loc_821818F0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82182460
	ctx.lr = 0x821818D8;
	sub_82182460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821818f0
	if (ctx.cr6.eq) goto loc_821818F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82182240
	ctx.lr = 0x821818F0;
	sub_82182240(ctx, base);
loc_821818F0:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181908
	if (ctx.cr6.eq) goto loc_82181908;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82182860
	ctx.lr = 0x82181908;
	sub_82182860(ctx, base);
loc_82181908:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181924
	if (ctx.cr6.eq) goto loc_82181924;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82181924:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82181958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218196c
	if (ctx.cr6.eq) goto loc_8218196C;
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821829a0
	ctx.lr = 0x8218196C;
	sub_821829A0(ctx, base);
loc_8218196C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181e34
	if (ctx.cr6.eq) goto loc_82181E34;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82182188
	ctx.lr = 0x82181988;
	sub_82182188(ctx, base);
	// b 0x82181e34
	goto loc_82181E34;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821819cc
	if (ctx.cr6.eq) goto loc_821819CC;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82182460
	ctx.lr = 0x821819B4;
	sub_82182460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821819cc
	if (ctx.cr6.eq) goto loc_821819CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82182240
	ctx.lr = 0x821819CC;
	sub_82182240(ctx, base);
loc_821819CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82181A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181a14
	if (ctx.cr6.eq) goto loc_82181A14;
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821829a0
	ctx.lr = 0x82181A14;
	sub_821829A0(ctx, base);
loc_82181A14:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181a2c
	if (ctx.cr6.eq) goto loc_82181A2C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82182860
	ctx.lr = 0x82181A2C;
	sub_82182860(ctx, base);
loc_82181A2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181e34
	if (ctx.cr6.eq) goto loc_82181E34;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82182188
	ctx.lr = 0x82181A60;
	sub_82182188(ctx, base);
	// b 0x82181e34
	goto loc_82181E34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82181AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181ab4
	if (ctx.cr6.eq) goto loc_82181AB4;
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821829a0
	ctx.lr = 0x82181AB4;
	sub_821829A0(ctx, base);
loc_82181AB4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181aec
	if (ctx.cr6.eq) goto loc_82181AEC;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82182460
	ctx.lr = 0x82181AD4;
	sub_82182460(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82181aec
	if (ctx.cr6.eq) goto loc_82181AEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82182240
	ctx.lr = 0x82181AEC;
	sub_82182240(ctx, base);
loc_82181AEC:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181b08
	if (ctx.cr6.eq) goto loc_82181B08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82181B08:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181b24
	if (ctx.cr6.eq) goto loc_82181B24;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82182188
	ctx.lr = 0x82181B24;
	sub_82182188(ctx, base);
loc_82181B24:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181b3c
	if (ctx.cr6.eq) goto loc_82181B3C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82182860
	ctx.lr = 0x82181B3C;
	sub_82182860(ctx, base);
loc_82181B3C:
	// bl 0x8215bec8
	ctx.lr = 0x82181B40;
	sub_8215BEC8(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82181b50
	if (ctx.cr6.eq) goto loc_82181B50;
	// bl 0x8215bec8
	ctx.lr = 0x82181B50;
	sub_8215BEC8(ctx, base);
loc_82181B50:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r29,r11,-5052
	ctx.r29.s64 = ctx.r11.s64 + -5052;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82181B5C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181b9c
	if (ctx.cr6.eq) goto loc_82181B9C;
	// lis r4,21318
	ctx.r4.s64 = 1397096448;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// ori r4,r4,22597
	ctx.r4.u64 = ctx.r4.u64 | 22597;
	// bl 0x821882d0
	ctx.lr = 0x82181B78;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181b9c
	if (ctx.cr6.eq) goto loc_82181B9C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181b9c
	if (ctx.cr6.eq) goto loc_82181B9C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82181B9C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,36
	ctx.r11.s64 = ctx.r29.s64 + 36;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82181b5c
	if (ctx.cr6.lt) goto loc_82181B5C;
	// b 0x82181e34
	goto loc_82181E34;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// lis r29,-32180
	ctx.r29.s64 = -2108948480;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181c2c
	if (ctx.cr6.eq) goto loc_82181C2C;
	// lwz r11,16688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181c60
	if (ctx.cr6.eq) goto loc_82181C60;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181c30
	if (ctx.cr6.eq) goto loc_82181C30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82181c2c
	if (ctx.cr6.eq) goto loc_82181C2C;
	// lwz r11,16688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181c24
	if (ctx.cr6.eq) goto loc_82181C24;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181c24
	if (ctx.cr6.eq) goto loc_82181C24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82181C24:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82181C2C:
	// lwz r11,16688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16688);
loc_82181C30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181c60
	if (ctx.cr6.eq) goto loc_82181C60;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181c60
	if (ctx.cr6.eq) goto loc_82181C60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82181e34
	if (!ctx.cr6.eq) goto loc_82181E34;
loc_82181C60:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// ori r4,r4,34550
	ctx.r4.u64 = ctx.r4.u64 | 34550;
	// bl 0x821811a0
	ctx.lr = 0x82181C70;
	sub_821811A0(ctx, base);
	// b 0x82181e34
	goto loc_82181E34;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
	// lis r29,-32180
	ctx.r29.s64 = -2108948480;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181cf0
	if (ctx.cr6.eq) goto loc_82181CF0;
	// lwz r11,16688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181d24
	if (ctx.cr6.eq) goto loc_82181D24;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181cf4
	if (ctx.cr6.eq) goto loc_82181CF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82181cf0
	if (ctx.cr6.eq) goto loc_82181CF0;
	// lwz r11,16688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181ce8
	if (ctx.cr6.eq) goto loc_82181CE8;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181ce8
	if (ctx.cr6.eq) goto loc_82181CE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82181CE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82181CF0:
	// lwz r11,16688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16688);
loc_82181CF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181d24
	if (ctx.cr6.eq) goto loc_82181D24;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181d24
	if (ctx.cr6.eq) goto loc_82181D24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82181e34
	if (!ctx.cr6.eq) goto loc_82181E34;
loc_82181D24:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// ori r4,r4,34552
	ctx.r4.u64 = ctx.r4.u64 | 34552;
	// bl 0x821811a0
	ctx.lr = 0x82181D34;
	sub_821811A0(ctx, base);
	// b 0x82181e34
	goto loc_82181E34;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82181e30
	goto loc_82181E30;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82181e30
	goto loc_82181E30;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r10,r11,10
	ctx.r10.u64 = ctx.r11.u64 | 10;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x82181e34
	goto loc_82181E34;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x82181e34
	goto loc_82181E34;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181e34
	if (ctx.cr6.eq) goto loc_82181E34;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821829f8
	ctx.lr = 0x82181D80;
	sub_821829F8(ctx, base);
	// b 0x82181e34
	goto loc_82181E34;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// bl 0x82182938
	ctx.lr = 0x82181DA0;
	sub_82182938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82181e34
	if (ctx.cr6.eq) goto loc_82181E34;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82181e34
	goto loc_82181E34;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82182938
	ctx.lr = 0x82181DD0;
	sub_82182938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82181e34
	if (ctx.cr6.eq) goto loc_82181E34;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82181e34
	goto loc_82181E34;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x82182938
	ctx.lr = 0x82181E08;
	sub_82182938(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82181e34
	if (ctx.cr6.eq) goto loc_82181E34;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82181e34
	goto loc_82181E34;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82181E30:
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_82181E34:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181e68
	if (ctx.cr6.eq) goto loc_82181E68;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82182c90
	ctx.lr = 0x82181E48;
	sub_82182C90(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82181E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82181e6c
	if (!ctx.cr6.eq) goto loc_82181E6C;
loc_82181E68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82181E6C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82181E74"))) PPC_WEAK_FUNC(sub_82181E74);
PPC_FUNC_IMPL(__imp__sub_82181E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82181E78"))) PPC_WEAK_FUNC(sub_82181E78);
PPC_FUNC_IMPL(__imp__sub_82181E78) {
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
	// bl 0x82181040
	ctx.lr = 0x82181E88;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82181ea4
	if (!ctx.cr6.eq) goto loc_82181EA4;
loc_82181E90:
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
loc_82181EA4:
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181e90
	if (ctx.cr6.eq) goto loc_82181E90;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82182bc0
	ctx.lr = 0x82181EC0;
	sub_82182BC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82181e90
	if (!ctx.cr6.eq) goto loc_82181E90;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181e90
	if (ctx.cr6.eq) goto loc_82181E90;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82181EE8"))) PPC_WEAK_FUNC(sub_82181EE8);
PPC_FUNC_IMPL(__imp__sub_82181EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82181EF0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215c090
	ctx.lr = 0x82181EFC;
	sub_8215C090(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82181F04;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82181F10;
	sub_821837D0(ctx, base);
	// bl 0x82181040
	ctx.lr = 0x82181F14;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82181f30
	if (!ctx.cr6.eq) goto loc_82181F30;
loc_82181F1C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82181F24;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82181F30:
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181f5c
	if (ctx.cr6.eq) goto loc_82181F5C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82182bc0
	ctx.lr = 0x82181F4C;
	sub_82182BC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82181f1c
	if (!ctx.cr6.eq) goto loc_82181F1C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82181F5C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-5052
	ctx.r10.s64 = ctx.r11.s64 + -5052;
	// lwz r11,-5052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5052);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181f88
	if (ctx.cr6.eq) goto loc_82181F88;
	// lwz r11,1956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82181f88
	if (!ctx.cr6.eq) goto loc_82181F88;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
loc_82181F88:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181fa4
	if (ctx.cr6.eq) goto loc_82181FA4;
	// lwz r11,1956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82181fa4
	if (!ctx.cr6.eq) goto loc_82181FA4;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
loc_82181FA4:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181fc0
	if (ctx.cr6.eq) goto loc_82181FC0;
	// lwz r11,1956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82181fc0
	if (!ctx.cr6.eq) goto loc_82181FC0;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
loc_82181FC0:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181fdc
	if (ctx.cr6.eq) goto loc_82181FDC;
	// lwz r11,1956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82181fdc
	if (!ctx.cr6.eq) goto loc_82181FDC;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
loc_82181FDC:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181ff8
	if (ctx.cr6.eq) goto loc_82181FF8;
	// lwz r11,1956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82181ff8
	if (!ctx.cr6.eq) goto loc_82181FF8;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
loc_82181FF8:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82182014
	if (ctx.cr6.eq) goto loc_82182014;
	// lwz r11,1956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82182014
	if (!ctx.cr6.eq) goto loc_82182014;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
loc_82182014:
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82182030
	if (ctx.cr6.eq) goto loc_82182030;
	// lwz r11,1956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82182030
	if (!ctx.cr6.eq) goto loc_82182030;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
loc_82182030:
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218204c
	if (ctx.cr6.eq) goto loc_8218204C;
	// lwz r11,1956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8218204c
	if (!ctx.cr6.eq) goto loc_8218204C;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
loc_8218204C:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82182068
	if (ctx.cr6.eq) goto loc_82182068;
	// lwz r11,1956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82182068
	if (!ctx.cr6.eq) goto loc_82182068;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
loc_82182068:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,14608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14608);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lhz r29,58(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 58);
	// bne cr6,0x821820d0
	if (!ctx.cr6.eq) goto loc_821820D0;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// rlwinm r30,r29,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8218209c
	if (!ctx.cr6.gt) goto loc_8218209C;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8218209C:
	// bl 0x82183850
	ctx.lr = 0x821820A0;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x821820b8
	if (ctx.cr6.eq) goto loc_821820B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x821820B4;
	sub_82183448(ctx, base);
	// b 0x821820c4
	goto loc_821820C4;
loc_821820B8:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x821820C4;
	sub_821845A0(ctx, base);
loc_821820C4:
	// stw r3,14608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14608, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821820d8
	if (ctx.cr6.eq) goto loc_821820D8;
loc_821820D0:
	// rlwinm r4,r29,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822aa648
	ctx.lr = 0x821820D8;
	sub_822AA648(ctx, base);
loc_821820D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x821820E0;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821820EC"))) PPC_WEAK_FUNC(sub_821820EC);
PPC_FUNC_IMPL(__imp__sub_821820EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821820F0"))) PPC_WEAK_FUNC(sub_821820F0);
PPC_FUNC_IMPL(__imp__sub_821820F0) {
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// li r4,164
	ctx.r4.s64 = 164;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x8218211C;
	sub_822AA648(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// li r4,1836
	ctx.r4.s64 = 1836;
	// bl 0x822aa648
	ctx.lr = 0x82182128;
	sub_822AA648(ctx, base);
	// addi r3,r31,2012
	ctx.r3.s64 = ctx.r31.s64 + 2012;
	// li r4,1836
	ctx.r4.s64 = 1836;
	// bl 0x822aa648
	ctx.lr = 0x82182134;
	sub_822AA648(ctx, base);
	// addi r3,r31,3848
	ctx.r3.s64 = ctx.r31.s64 + 3848;
	// li r4,10752
	ctx.r4.s64 = 10752;
	// bl 0x822aa648
	ctx.lr = 0x82182140;
	sub_822AA648(ctx, base);
	// addi r3,r31,14616
	ctx.r3.s64 = ctx.r31.s64 + 14616;
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x822aa648
	ctx.lr = 0x8218214C;
	sub_822AA648(ctx, base);
	// addi r3,r31,14784
	ctx.r3.s64 = ctx.r31.s64 + 14784;
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x822aa648
	ctx.lr = 0x82182158;
	sub_822AA648(ctx, base);
	// stw r30,14600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14600, ctx.r30.u32);
	// stw r30,14604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14604, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,14612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14612, ctx.r30.u32);
	// bl 0x82181ee8
	ctx.lr = 0x8218216C;
	sub_82181EE8(ctx, base);
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

__attribute__((alias("__imp__sub_82182184"))) PPC_WEAK_FUNC(sub_82182184);
PPC_FUNC_IMPL(__imp__sub_82182184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82182188"))) PPC_WEAK_FUNC(sub_82182188);
PPC_FUNC_IMPL(__imp__sub_82182188) {
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
	// bl 0x82181e78
	ctx.lr = 0x821821A8;
	sub_82181E78(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821821c4
	if (ctx.cr6.eq) goto loc_821821C4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82182224
	if (!ctx.cr6.eq) goto loc_82182224;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82182224
	goto loc_82182224;
loc_821821C4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821821f0
	if (ctx.cr6.eq) goto loc_821821F0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82182224
	if (ctx.cr6.eq) goto loc_82182224;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x821820f0
	ctx.lr = 0x821821E8;
	sub_821820F0(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// b 0x82182224
	goto loc_82182224;
loc_821821F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82182204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,14608(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14608);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8218221c
	if (ctx.cr6.eq) goto loc_8218221C;
	// stw r10,14952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14952, ctx.r10.u32);
loc_8218221C:
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_82182224:
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

__attribute__((alias("__imp__sub_8218223C"))) PPC_WEAK_FUNC(sub_8218223C);
PPC_FUNC_IMPL(__imp__sub_8218223C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82182240"))) PPC_WEAK_FUNC(sub_82182240);
PPC_FUNC_IMPL(__imp__sub_82182240) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8218226c
	if (ctx.cr6.eq) goto loc_8218226C;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82182274
	if (!ctx.cr6.eq) goto loc_82182274;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// b 0x82182274
	goto loc_82182274;
loc_8218226C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
loc_82182274:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821822ac
	if (ctx.cr6.eq) goto loc_821822AC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821822A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x821822b0
	if (ctx.cr6.eq) goto loc_821822B0;
loc_821822AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821822B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821822C0"))) PPC_WEAK_FUNC(sub_821822C0);
PPC_FUNC_IMPL(__imp__sub_821822C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x821822C8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82181040
	ctx.lr = 0x821822DC;
	sub_82181040(ctx, base);
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// lwz r29,40(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82182348
	if (ctx.cr6.eq) goto loc_82182348;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82182334
	if (!ctx.cr6.eq) goto loc_82182334;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82182ba0
	ctx.lr = 0x8218230C;
	sub_82182BA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82182350
	if (ctx.cr6.eq) goto loc_82182350;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8060(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r28.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,208(r9)
	PPC_STORE_U32(ctx.r9.u32 + 208, ctx.r3.u32);
	// b 0x82182350
	goto loc_82182350;
loc_82182334:
	// stw r28,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r28.u32);
	// li r4,25
	ctx.r4.s64 = 25;
	// bl 0x82182ba0
	ctx.lr = 0x82182340;
	sub_82182BA0(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// stw r3,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r3.u32);
loc_82182348:
	// cmplwi cr6,r27,5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 5, ctx.xer);
	// bgt cr6,0x82182404
	if (ctx.cr6.gt) goto loc_82182404;
loc_82182350:
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82182404
	// bdzf 4*cr6+eq,0x82182394
	// bdzf 4*cr6+eq,0x82182404
	// bdzf 4*cr6+eq,0x821823bc
	// bne cr6,0x8218237c
	if (!ctx.cr6.eq) goto loc_8218237C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8218237C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82182394:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82182404
	if (ctx.cr6.eq) goto loc_82182404;
	// stw r28,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r28.u32);
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82182ba0
	ctx.lr = 0x821823B0;
	sub_82182BA0(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// stw r3,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r3.u32);
	// b 0x82182404
	goto loc_82182404;
loc_821823BC:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82182404
	if (ctx.cr6.eq) goto loc_82182404;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82182ba0
	ctx.lr = 0x821823D4;
	sub_82182BA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821823f0
	if (ctx.cr6.eq) goto loc_821823F0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82182ba0
	ctx.lr = 0x821823EC;
	sub_82182BA0(ctx, base);
	// stw r3,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r3.u32);
loc_821823F0:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// lwzx r9,r30,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// stw r28,208(r9)
	PPC_STORE_U32(ctx.r9.u32 + 208, ctx.r28.u32);
loc_82182404:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82182450
	if (ctx.cr6.eq) goto loc_82182450;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82182430
	if (ctx.cr6.eq) goto loc_82182430;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82182430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82182430:
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82182444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82182454
	if (ctx.cr6.eq) goto loc_82182454;
loc_82182450:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82182454:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8218245C"))) PPC_WEAK_FUNC(sub_8218245C);
PPC_FUNC_IMPL(__imp__sub_8218245C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82182460"))) PPC_WEAK_FUNC(sub_82182460);
PPC_FUNC_IMPL(__imp__sub_82182460) {
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
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821824a8
	if (ctx.cr6.eq) goto loc_821824A8;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821824A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821824bc
	if (ctx.cr6.eq) goto loc_821824BC;
loc_821824A8:
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
loc_821824BC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821824D4"))) PPC_WEAK_FUNC(sub_821824D4);
PPC_FUNC_IMPL(__imp__sub_821824D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821824D8"))) PPC_WEAK_FUNC(sub_821824D8);
PPC_FUNC_IMPL(__imp__sub_821824D8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,24368
	ctx.r9.s64 = 1596981248;
	// addi r8,r10,-13624
	ctx.r8.s64 = ctx.r10.s64 + -13624;
	// lis r7,12336
	ctx.r7.s64 = 808452096;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r3,r9,24368
	ctx.r3.u64 = ctx.r9.u64 | 24368;
	// ori r9,r7,12336
	ctx.r9.u64 = ctx.r7.u64 | 12336;
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// cmplwi cr6,r4,10000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10000, ctx.xer);
	// rldimi r3,r9,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// bge cr6,0x8218259c
	if (!ctx.cr6.lt) goto loc_8218259C;
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// lis r9,4194
	ctx.r9.s64 = 274857984;
	// ori r8,r10,52429
	ctx.r8.u64 = ctx.r10.u64 | 52429;
	// lis r7,20971
	ctx.r7.s64 = 1374355456;
	// mulhwu r8,r4,r8
	ctx.r8.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// ori r3,r9,19923
	ctx.r3.u64 = ctx.r9.u64 | 19923;
	// ori r9,r7,34079
	ctx.r9.u64 = ctx.r7.u64 | 34079;
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mulhwu r7,r4,r3
	ctx.r7.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r3.u32)) >> 32;
	// mulhwu r3,r4,r9
	ctx.r3.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r7,r3,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r10,r8,1000
	ctx.r10.s64 = ctx.r8.s64 * 1000;
	// mulli r9,r7,100
	ctx.r9.s64 = ctx.r7.s64 * 100;
	// li r8,1000
	ctx.r8.s64 = 1000;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// li r31,100
	ctx.r31.s64 = 100;
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r30,10
	ctx.r30.s64 = 10;
	// divwu r7,r4,r8
	ctx.r7.u32 = ctx.r4.u32 / ctx.r8.u32;
	// divwu r8,r10,r31
	ctx.r8.u32 = ctx.r10.u32 / ctx.r31.u32;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divwu r9,r9,r30
	ctx.r9.u32 = ctx.r9.u32 / ctx.r30.u32;
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// addi r4,r8,48
	ctx.r4.s64 = ctx.r8.s64 + 48;
	// addi r3,r9,48
	ctx.r3.s64 = ctx.r9.s64 + 48;
	// stb r7,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r7.u8);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stb r4,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r4.u8);
	// stb r3,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r3.u8);
	// stb r10,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r10.u8);
loc_8218259C:
	// cmplwi cr6,r5,10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 10, ctx.xer);
	// bge cr6,0x821825ac
	if (!ctx.cr6.lt) goto loc_821825AC;
	// addi r10,r5,48
	ctx.r10.s64 = ctx.r5.s64 + 48;
	// stb r10,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r10.u8);
loc_821825AC:
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bge cr6,0x821825c0
	if (!ctx.cr6.lt) goto loc_821825C0;
	// addi r10,r6,48
	ctx.r10.s64 = ctx.r6.s64 + 48;
	// stb r10,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r10.u8);
loc_821825C0:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821825CC"))) PPC_WEAK_FUNC(sub_821825CC);
PPC_FUNC_IMPL(__imp__sub_821825CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821825D0"))) PPC_WEAK_FUNC(sub_821825D0);
PPC_FUNC_IMPL(__imp__sub_821825D0) {
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
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218264c
	if (ctx.cr6.eq) goto loc_8218264C;
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt 0x8218262c
	if (ctx.cr0.lt) goto loc_8218262C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,8008
	ctx.r10.s64 = ctx.r10.s64 + 8008;
loc_82182624:
	// stwu r10,-144(r11)
	ea = -144 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82182624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82182624;
loc_8218262C:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82182644
	if (ctx.cr6.eq) goto loc_82182644;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82182644;
	sub_82183E40(ctx, base);
loc_82182644:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82182674
	goto loc_82182674;
loc_8218264C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,8008
	ctx.r9.s64 = ctx.r11.s64 + 8008;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82182670
	if (ctx.cr6.eq) goto loc_82182670;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82182670;
	sub_82183E40(ctx, base);
loc_82182670:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82182674:
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

__attribute__((alias("__imp__sub_8218268C"))) PPC_WEAK_FUNC(sub_8218268C);
PPC_FUNC_IMPL(__imp__sub_8218268C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82182690"))) PPC_WEAK_FUNC(sub_82182690);
PPC_FUNC_IMPL(__imp__sub_82182690) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8215bed8
	ctx.lr = 0x821826B4;
	sub_8215BED8(ctx, base);
	// cmpwi cr6,r31,9000
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9000, ctx.xer);
	// blt cr6,0x821826c8
	if (ctx.cr6.lt) goto loc_821826C8;
	// cmpwi cr6,r31,9100
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9100, ctx.xer);
	// li r6,2
	ctx.r6.s64 = 2;
	// blt cr6,0x821826cc
	if (ctx.cr6.lt) goto loc_821826CC;
loc_821826C8:
	// li r6,0
	ctx.r6.s64 = 0;
loc_821826CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821824d8
	ctx.lr = 0x821826DC;
	sub_821824D8(ctx, base);
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

__attribute__((alias("__imp__sub_821826F8"))) PPC_WEAK_FUNC(sub_821826F8);
PPC_FUNC_IMPL(__imp__sub_821826F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82182700;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82182770
	if (ctx.cr6.eq) goto loc_82182770;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r31,r11,34464
	ctx.r31.u64 = ctx.r11.u64 | 34464;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82182770
	if (!ctx.cr6.gt) goto loc_82182770;
	// bl 0x82181040
	ctx.lr = 0x82182728;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82182770
	if (ctx.cr6.eq) goto loc_82182770;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82182770
	if (ctx.cr6.eq) goto loc_82182770;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82182be0
	ctx.lr = 0x8218274C;
	sub_82182BE0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82182770
	if (ctx.cr6.eq) goto loc_82182770;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,1400(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1400);
	// subf r5,r31,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x82182d88
	ctx.lr = 0x82182768;
	sub_82182D88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82182770:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218277C"))) PPC_WEAK_FUNC(sub_8218277C);
PPC_FUNC_IMPL(__imp__sub_8218277C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82182780"))) PPC_WEAK_FUNC(sub_82182780);
PPC_FUNC_IMPL(__imp__sub_82182780) {
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
	// bl 0x82181040
	ctx.lr = 0x821827A0;
	sub_82181040(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821827e0
	if (ctx.cr6.eq) goto loc_821827E0;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821827e0
	if (!ctx.cr6.eq) goto loc_821827E0;
	// li r11,9120
	ctx.r11.s64 = 9120;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,34640
	ctx.r4.u64 = ctx.r4.u64 | 34640;
	// bl 0x821826f8
	ctx.lr = 0x821827CC;
	sub_821826F8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821827e0
	if (!ctx.cr6.eq) goto loc_821827E0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82182830
	goto loc_82182830;
loc_821827E0:
	// cmpwi cr6,r31,10000
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10000, ctx.xer);
	// blt cr6,0x8218282c
	if (ctx.cr6.lt) goto loc_8218282C;
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// li r9,10
	ctx.r9.s64 = 10;
	// ori r8,r11,34079
	ctx.r8.u64 = ctx.r11.u64 | 34079;
	// li r7,100
	ctx.r7.s64 = 100;
	// mulhw r6,r31,r8
	ctx.r6.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 5;
	// divw r4,r31,r7
	ctx.r4.s32 = ctx.r31.s32 / ctx.r7.s32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r5,100
	ctx.r11.s64 = ctx.r5.s64 * 100;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// divw r5,r10,r9
	ctx.r5.s32 = ctx.r10.s32 / ctx.r9.s32;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// b 0x82182838
	goto loc_82182838;
loc_8218282C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82182830:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82182838:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821824d8
	ctx.lr = 0x82182840;
	sub_821824D8(ctx, base);
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

__attribute__((alias("__imp__sub_8218285C"))) PPC_WEAK_FUNC(sub_8218285C);
PPC_FUNC_IMPL(__imp__sub_8218285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82182860"))) PPC_WEAK_FUNC(sub_82182860);
PPC_FUNC_IMPL(__imp__sub_82182860) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f13,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stfs f13,212(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// beq cr6,0x821828f4
	if (ctx.cr6.eq) goto loc_821828F4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821828CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r8,r9,0,28,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821828f4
	if (ctx.cr6.eq) goto loc_821828F4;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821828F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821828F4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8218291c
	if (ctx.cr6.eq) goto loc_8218291C;
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218291c
	if (ctx.cr6.eq) goto loc_8218291C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218291C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218291C:
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

__attribute__((alias("__imp__sub_82182934"))) PPC_WEAK_FUNC(sub_82182934);
PPC_FUNC_IMPL(__imp__sub_82182934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82182938"))) PPC_WEAK_FUNC(sub_82182938);
PPC_FUNC_IMPL(__imp__sub_82182938) {
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
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82182954
	if (ctx.cr6.eq) goto loc_82182954;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bne cr6,0x8218298c
	if (!ctx.cr6.eq) goto loc_8218298C;
loc_82182954:
	// bl 0x8215bec8
	ctx.lr = 0x82182958;
	sub_8215BEC8(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8218298c
	if (ctx.cr6.eq) goto loc_8218298C;
	// bl 0x8215bec8
	ctx.lr = 0x82182968;
	sub_8215BEC8(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8218298c
	if (ctx.cr6.eq) goto loc_8218298C;
	// bl 0x8215bec8
	ctx.lr = 0x8218298C;
	sub_8215BEC8(ctx, base);
loc_8218298C:
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

__attribute__((alias("__imp__sub_821829A0"))) PPC_WEAK_FUNC(sub_821829A0);
PPC_FUNC_IMPL(__imp__sub_821829A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821829d4
	if (ctx.cr6.eq) goto loc_821829D4;
	// cmpwi cr6,r11,254
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 254, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821829D4:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821829F4"))) PPC_WEAK_FUNC(sub_821829F4);
PPC_FUNC_IMPL(__imp__sub_821829F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821829F8"))) PPC_WEAK_FUNC(sub_821829F8);
PPC_FUNC_IMPL(__imp__sub_821829F8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// lfs f0,2144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f13,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stfs f0,200(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// stfs f13,212(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// beq cr6,0x82182a50
	if (ctx.cr6.eq) goto loc_82182A50;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bne cr6,0x82182a88
	if (!ctx.cr6.eq) goto loc_82182A88;
loc_82182A50:
	// bl 0x8215bec8
	ctx.lr = 0x82182A54;
	sub_8215BEC8(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82182a88
	if (ctx.cr6.eq) goto loc_82182A88;
	// bl 0x8215bec8
	ctx.lr = 0x82182A64;
	sub_8215BEC8(ctx, base);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// addi r8,r10,-5052
	ctx.r8.s64 = ctx.r10.s64 + -5052;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82182a88
	if (ctx.cr6.eq) goto loc_82182A88;
	// bl 0x8215bec8
	ctx.lr = 0x82182A88;
	sub_8215BEC8(ctx, base);
loc_82182A88:
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
	ctx.lr = 0x82182AA0;
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

__attribute__((alias("__imp__sub_82182AB8"))) PPC_WEAK_FUNC(sub_82182AB8);
PPC_FUNC_IMPL(__imp__sub_82182AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82182AC0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,976(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 976);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82182b98
	if (ctx.cr6.eq) goto loc_82182B98;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82182b98
	if (ctx.cr6.eq) goto loc_82182B98;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,344(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-13472
	ctx.r11.s64 = ctx.r11.s64 + -13472;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82182AF4:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82182b14
	if (ctx.cr6.eq) goto loc_82182B14;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,40
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 40, ctx.xer);
	// blt cr6,0x82182af4
	if (ctx.cr6.lt) goto loc_82182AF4;
	// b 0x82182b18
	goto loc_82182B18;
loc_82182B14:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82182B18:
	// bl 0x82181040
	ctx.lr = 0x82182B1C;
	sub_82181040(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82182b54
	if (!ctx.cr6.eq) goto loc_82182B54;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82182b54
	if (ctx.cr6.eq) goto loc_82182B54;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82182b54
	if (!ctx.cr6.eq) goto loc_82182B54;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-4964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4964);
	// stw r10,960(r30)
	PPC_STORE_U32(ctx.r30.u32 + 960, ctx.r10.u32);
	// stw r11,980(r30)
	PPC_STORE_U32(ctx.r30.u32 + 980, ctx.r11.u32);
loc_82182B54:
	// addi r31,r29,1248
	ctx.r31.s64 = ctx.r29.s64 + 1248;
	// lis r4,21337
	ctx.r4.s64 = 1398341632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,20035
	ctx.r4.u64 = ctx.r4.u64 | 20035;
	// bl 0x821882d0
	ctx.lr = 0x82182B68;
	sub_821882D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82182b78
	if (ctx.cr6.eq) goto loc_82182B78;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82182b7c
	goto loc_82182B7C;
loc_82182B78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82182B7C:
	// bl 0x820f15c0
	ctx.lr = 0x82182B80;
	sub_820F15C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82182b98
	if (ctx.cr6.eq) goto loc_82182B98;
	// lis r4,21337
	ctx.r4.s64 = 1398341632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,20035
	ctx.r4.u64 = ctx.r4.u64 | 20035;
	// bl 0x821882d0
	ctx.lr = 0x82182B98;
	sub_821882D0(ctx, base);
loc_82182B98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82182BA0"))) PPC_WEAK_FUNC(sub_82182BA0);
PPC_FUNC_IMPL(__imp__sub_82182BA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82182bb8
	if (!ctx.cr6.lt) goto loc_82182BB8;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82182BB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82182BC0"))) PPC_WEAK_FUNC(sub_82182BC0);
PPC_FUNC_IMPL(__imp__sub_82182BC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82182bd4
	if (!ctx.cr6.eq) goto loc_82182BD4;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82182BD4:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82182BE0"))) PPC_WEAK_FUNC(sub_82182BE0);
PPC_FUNC_IMPL(__imp__sub_82182BE0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82182bf0
	if (!ctx.cr6.eq) goto loc_82182BF0;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82182BF0:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82182C00"))) PPC_WEAK_FUNC(sub_82182C00);
PPC_FUNC_IMPL(__imp__sub_82182C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82182C08;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,44
	ctx.r31.s64 = ctx.r3.s64 + 44;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82182C1C:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82182c78
	if (ctx.cr6.eq) goto loc_82182C78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82182c78
	if (ctx.cr6.eq) goto loc_82182C78;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82182C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82182c70
	if (ctx.cr6.eq) goto loc_82182C70;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82182C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82182C70:
	// stw r28,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r28.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82182C78:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x82182c1c
	if (!ctx.cr0.eq) goto loc_82182C1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82182C90"))) PPC_WEAK_FUNC(sub_82182C90);
PPC_FUNC_IMPL(__imp__sub_82182C90) {
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
	// bl 0x8215c090
	ctx.lr = 0x82182CB0;
	sub_8215C090(ctx, base);
	// bl 0x8215c098
	ctx.lr = 0x82182CB4;
	sub_8215C098(ctx, base);
	// cmpwi cr6,r31,30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 30, ctx.xer);
	// bgt cr6,0x82182d24
	if (ctx.cr6.gt) goto loc_82182D24;
	// cmpwi cr6,r31,28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 28, ctx.xer);
	// bge cr6,0x82182d3c
	if (!ctx.cr6.lt) goto loc_82182D3C;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x82182d64
	if (ctx.cr6.gt) goto loc_82182D64;
	// lis r12,-32232
	ctx.r12.s64 = -2112356352;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11496
	ctx.r12.s64 = ctx.r12.s64 + 11496;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r16,11628(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11628);
	// lwz r16,11628(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11628);
	// lwz r16,11620(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11620);
	// lwz r16,11620(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11620);
	// lwz r16,11628(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11628);
	// lwz r16,11580(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11580);
	// lwz r16,11580(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11580);
	// lwz r16,11620(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11620);
	// lwz r16,11620(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11620);
	// lwz r16,11620(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11620);
	// lwz r16,11620(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11620);
	// lwz r16,11620(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11620);
	// lwz r16,11620(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11620);
	// lwz r16,11620(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11620);
	// lwz r16,11580(r24)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r24.u32 + 11580);
loc_82182D24:
	// cmpwi cr6,r31,66
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 66, ctx.xer);
	// bgt cr6,0x82182d5c
	if (ctx.cr6.gt) goto loc_82182D5C;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// bge cr6,0x82182d3c
	if (!ctx.cr6.lt) goto loc_82182D3C;
	// cmpwi cr6,r31,46
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 46, ctx.xer);
	// bne cr6,0x82182d64
	if (!ctx.cr6.eq) goto loc_82182D64;
loc_82182D3C:
	// bl 0x8215bec8
	ctx.lr = 0x82182D40;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82182d6c
	if (ctx.cr6.eq) goto loc_82182D6C;
	// bl 0x8215bec8
	ctx.lr = 0x82182D50;
	sub_8215BEC8(ctx, base);
	// lwz r11,680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// b 0x82182d60
	goto loc_82182D60;
loc_82182D5C:
	// cmpwi cr6,r31,76
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 76, ctx.xer);
loc_82182D60:
	// beq cr6,0x82182d6c
	if (ctx.cr6.eq) goto loc_82182D6C;
loc_82182D64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82182c00
	ctx.lr = 0x82182D6C;
	sub_82182C00(ctx, base);
loc_82182D6C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82182D88"))) PPC_WEAK_FUNC(sub_82182D88);
PPC_FUNC_IMPL(__imp__sub_82182D88) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82182dc0
	if (ctx.cr6.eq) goto loc_82182DC0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82182dc0
	if (ctx.cr6.lt) goto loc_82182DC0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82182dc0
	if (ctx.cr6.eq) goto loc_82182DC0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82182DC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82182DC8"))) PPC_WEAK_FUNC(sub_82182DC8);
PPC_FUNC_IMPL(__imp__sub_82182DC8) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r30,r11,19096
	ctx.r30.s64 = ctx.r11.s64 + 19096;
	// addi r3,r30,2420
	ctx.r3.s64 = ctx.r30.s64 + 2420;
	// bl 0x8241dd4c
	ctx.lr = 0x82182DF0;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82182DF4:
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd4c
	ctx.lr = 0x82182E00;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r11,r30,1792
	ctx.r11.s64 = ctx.r30.s64 + 1792;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82182df4
	if (ctx.cr6.lt) goto loc_82182DF4;
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

__attribute__((alias("__imp__sub_82182E28"))) PPC_WEAK_FUNC(sub_82182E28);
PPC_FUNC_IMPL(__imp__sub_82182E28) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r5,576
	ctx.r5.s64 = 576;
	// addi r31,r11,20936
	ctx.r31.s64 = ctx.r11.s64 + 20936;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248f70
	ctx.lr = 0x82182E50;
	sub_82248F70(ctx, base);
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82182E64:
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stwu r9,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82182e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82182E64;
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

__attribute__((alias("__imp__sub_82182E8C"))) PPC_WEAK_FUNC(sub_82182E8C);
PPC_FUNC_IMPL(__imp__sub_82182E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82182E90"))) PPC_WEAK_FUNC(sub_82182E90);
PPC_FUNC_IMPL(__imp__sub_82182E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-5968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5968);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82182EA0"))) PPC_WEAK_FUNC(sub_82182EA0);
PPC_FUNC_IMPL(__imp__sub_82182EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// stw r3,21572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21572, ctx.r3.u32);
	// stb r4,-5972(r10)
	PPC_STORE_U8(ctx.r10.u32 + -5972, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82182EB4"))) PPC_WEAK_FUNC(sub_82182EB4);
PPC_FUNC_IMPL(__imp__sub_82182EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82182EB8"))) PPC_WEAK_FUNC(sub_82182EB8);
PPC_FUNC_IMPL(__imp__sub_82182EB8) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r31,64
	ctx.r31.s64 = 64;
	// addi r30,r11,19096
	ctx.r30.s64 = ctx.r11.s64 + 19096;
loc_82182ED8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82182EE0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x82182ed8
	if (!ctx.cr0.eq) goto loc_82182ED8;
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

__attribute__((alias("__imp__sub_82182F04"))) PPC_WEAK_FUNC(sub_82182F04);
PPC_FUNC_IMPL(__imp__sub_82182F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82182F08"))) PPC_WEAK_FUNC(sub_82182F08);
PPC_FUNC_IMPL(__imp__sub_82182F08) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r31,64
	ctx.r31.s64 = 64;
	// addi r30,r11,19096
	ctx.r30.s64 = ctx.r11.s64 + 19096;
loc_82182F28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82182F30;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x82182f28
	if (!ctx.cr0.eq) goto loc_82182F28;
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

__attribute__((alias("__imp__sub_82182F54"))) PPC_WEAK_FUNC(sub_82182F54);
PPC_FUNC_IMPL(__imp__sub_82182F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82182F58"))) PPC_WEAK_FUNC(sub_82182F58);
PPC_FUNC_IMPL(__imp__sub_82182F58) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,21516
	ctx.r31.s64 = ctx.r11.s64 + 21516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82182F80;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,20936
	ctx.r9.s64 = ctx.r11.s64 + 20936;
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
loc_82182F90:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x82182fd4
	if (ctx.cr6.eq) goto loc_82182FD4;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r8,r9,576
	ctx.r8.s64 = ctx.r9.s64 + 576;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82182f90
	if (ctx.cr6.lt) goto loc_82182F90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82182FB8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82182FBC:
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
loc_82182FD4:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r30,r10,r9
	PPC_STORE_U64(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u64);
	// bl 0x8241dd3c
	ctx.lr = 0x82182FEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82182fbc
	goto loc_82182FBC;
}

__attribute__((alias("__imp__sub_82182FF4"))) PPC_WEAK_FUNC(sub_82182FF4);
PPC_FUNC_IMPL(__imp__sub_82182FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82182FF8"))) PPC_WEAK_FUNC(sub_82182FF8);
PPC_FUNC_IMPL(__imp__sub_82182FF8) {
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
	// bl 0x82088650
	ctx.lr = 0x82183010;
	sub_82088650(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r9,r11,20936
	ctx.r9.s64 = ctx.r11.s64 + 20936;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
loc_82183024:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82183060
	if (ctx.cr6.eq) goto loc_82183060;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r7,r9,576
	ctx.r7.s64 = ctx.r9.s64 + 576;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82183024
	if (ctx.cr6.lt) goto loc_82183024;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
loc_82183048:
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
loc_82183060:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r31,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r31.u32);
	// b 0x82183048
	goto loc_82183048;
}

__attribute__((alias("__imp__sub_82183078"))) PPC_WEAK_FUNC(sub_82183078);
PPC_FUNC_IMPL(__imp__sub_82183078) {
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
	// bl 0x82088650
	ctx.lr = 0x82183088;
	sub_82088650(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r9,r11,20936
	ctx.r9.s64 = ctx.r11.s64 + 20936;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8218309C:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x821830d0
	if (ctx.cr6.eq) goto loc_821830D0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r7,r9,576
	ctx.r7.s64 = ctx.r9.s64 + 576;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8218309c
	if (ctx.cr6.lt) goto loc_8218309C;
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821830D0:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821830F4"))) PPC_WEAK_FUNC(sub_821830F4);
PPC_FUNC_IMPL(__imp__sub_821830F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821830F8"))) PPC_WEAK_FUNC(sub_821830F8);
PPC_FUNC_IMPL(__imp__sub_821830F8) {
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
	// bl 0x82088650
	ctx.lr = 0x82183110;
	sub_82088650(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r9,r11,20936
	ctx.r9.s64 = ctx.r11.s64 + 20936;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
loc_82183124:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82183160
	if (ctx.cr6.eq) goto loc_82183160;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r7,r9,576
	ctx.r7.s64 = ctx.r9.s64 + 576;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82183124
	if (ctx.cr6.lt) goto loc_82183124;
	// stw r31,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r31.u32);
loc_82183148:
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
loc_82183160:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r31,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r31.u32);
	// b 0x82183148
	goto loc_82183148;
}

__attribute__((alias("__imp__sub_82183178"))) PPC_WEAK_FUNC(sub_82183178);
PPC_FUNC_IMPL(__imp__sub_82183178) {
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
	// bl 0x82088650
	ctx.lr = 0x82183188;
	sub_82088650(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r9,r11,20936
	ctx.r9.s64 = ctx.r11.s64 + 20936;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8218319C:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x821831d0
	if (ctx.cr6.eq) goto loc_821831D0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r7,r9,576
	ctx.r7.s64 = ctx.r9.s64 + 576;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8218319c
	if (ctx.cr6.lt) goto loc_8218319C;
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821831D0:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821831F4"))) PPC_WEAK_FUNC(sub_821831F4);
PPC_FUNC_IMPL(__imp__sub_821831F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821831F8"))) PPC_WEAK_FUNC(sub_821831F8);
PPC_FUNC_IMPL(__imp__sub_821831F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82183200;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,19096
	ctx.r11.s64 = ctx.r11.s64 + 19096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82183224;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,21552(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21552);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821832a4
	if (!ctx.cr6.lt) goto loc_821832A4;
loc_8218325C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r8,r8,4
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFFFFF;
	// rlwinm r10,r4,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x82183288
	if (!ctx.cr6.eq) goto loc_82183288;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// b 0x82183294
	goto loc_82183294;
loc_82183288:
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82183294
	if (!ctx.cr6.lt) goto loc_82183294;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_82183294:
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8218325c
	if (ctx.cr6.lt) goto loc_8218325C;
loc_821832A4:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x821832CC;
	sub_822AA648(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224a628
	ctx.lr = 0x821832DC;
	sub_8224A628(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821832E4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821832F0"))) PPC_WEAK_FUNC(sub_821832F0);
PPC_FUNC_IMPL(__imp__sub_821832F0) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,21516
	ctx.r31.s64 = ctx.r11.s64 + 21516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82183318;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82183330
	if (!ctx.cr6.eq) goto loc_82183330;
	// bl 0x8241dd3c
	ctx.lr = 0x82183328;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8218333c
	goto loc_8218333C;
loc_82183330:
	// lbz r31,-1(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// bl 0x8241dd3c
	ctx.lr = 0x82183338;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8218333C:
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

__attribute__((alias("__imp__sub_82183354"))) PPC_WEAK_FUNC(sub_82183354);
PPC_FUNC_IMPL(__imp__sub_82183354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82183358"))) PPC_WEAK_FUNC(sub_82183358);
PPC_FUNC_IMPL(__imp__sub_82183358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82183360;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x82183370;
	sub_82183078(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,19096
	ctx.r11.s64 = ctx.r11.s64 + 19096;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218338C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,21552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21552);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// beq cr6,0x82183434
	if (ctx.cr6.eq) goto loc_82183434;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// divwu r9,r30,r10
	ctx.r9.u32 = ctx.r30.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82183434
	if (ctx.cr6.eq) goto loc_82183434;
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// ld r8,-16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + -16);
	// twllei r10,0
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divwu r6,r7,r10
	ctx.r6.u32 = ctx.r7.u32 / ctx.r10.u32;
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// std r8,-16(r10)
	PPC_STORE_U64(ctx.r10.u32 + -16, ctx.r8.u64);
	// ld r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + -8);
	// lwz r4,-12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// addi r31,r10,-16
	ctx.r31.s64 = ctx.r10.s64 + -16;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// std r5,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r5.u64);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwimi r8,r9,28,4,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0xFFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFF0000000);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r6,r7,4
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFFFFF;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82183428;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82183434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218343C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82183448"))) PPC_WEAK_FUNC(sub_82183448);
PPC_FUNC_IMPL(__imp__sub_82183448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82183450;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x82183460;
	sub_82183078(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,19096
	ctx.r11.s64 = ctx.r11.s64 + 19096;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218347C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821834f8
	if (ctx.cr6.eq) goto loc_821834F8;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r7,r31,15
	ctx.r7.s64 = ctx.r31.s64 + 15;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r11,21552(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21552);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r6,r4,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x821834f8
	if (!ctx.cr6.lt) goto loc_821834F8;
loc_821834C8:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r7
	ctx.r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// clrlwi r9,r10,4
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFFFFF;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8218350c
	if (!ctx.cr6.lt) goto loc_8218350C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821834c8
	if (ctx.cr6.lt) goto loc_821834C8;
loc_821834F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82183500;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8218350C:
	// bne cr6,0x82183524
	if (!ctx.cr6.eq) goto loc_82183524;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82183570
	goto loc_82183570;
loc_82183524:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// subf r8,r7,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r7.s64;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// ld r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// beq cr6,0x82183570
	if (ctx.cr6.eq) goto loc_82183570;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82183570:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// rlwimi r11,r28,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82183588;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82183594"))) PPC_WEAK_FUNC(sub_82183594);
PPC_FUNC_IMPL(__imp__sub_82183594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82183598"))) PPC_WEAK_FUNC(sub_82183598);
PPC_FUNC_IMPL(__imp__sub_82183598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821835A0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,19096
	ctx.r30.s64 = ctx.r11.s64 + 19096;
	// addi r3,r30,2420
	ctx.r3.s64 = ctx.r30.s64 + 2420;
	// bl 0x8241dd2c
	ctx.lr = 0x821835B8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r3,r30,2420
	ctx.r3.s64 = ctx.r30.s64 + 2420;
	// bne cr6,0x821835d4
	if (!ctx.cr6.eq) goto loc_821835D4;
	// bl 0x8241dd3c
	ctx.lr = 0x821835C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821835D4:
	// lbz r31,-1(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + -1);
	// bl 0x8241dd3c
	ctx.lr = 0x821835DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x821835f0
	if (!ctx.cr6.eq) goto loc_821835F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821835F0:
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82183600;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r7,-16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r29,-16
	ctx.r11.s64 = ctx.r29.s64 + -16;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,21552(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21552);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// addi r31,r11,-16
	ctx.r31.s64 = ctx.r11.s64 + -16;
	// bl 0x8241dd3c
	ctx.lr = 0x82183638;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82183644"))) PPC_WEAK_FUNC(sub_82183644);
PPC_FUNC_IMPL(__imp__sub_82183644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82183648"))) PPC_WEAK_FUNC(sub_82183648);
PPC_FUNC_IMPL(__imp__sub_82183648) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821837b4
	if (ctx.cr6.eq) goto loc_821837B4;
	// bl 0x821832f0
	ctx.lr = 0x8218366C;
	sub_821832F0(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,19096
	ctx.r11.s64 = ctx.r11.s64 + 19096;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82183684;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// lwz r7,-12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,21552(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21552);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 + ctx.r10.u64;
	// subf r5,r10,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r10.s64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r5,r5,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r31,8(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8218371c
	if (ctx.cr6.eq) goto loc_8218371C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8218371c
	if (ctx.cr6.eq) goto loc_8218371C;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r7,r8,4
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFFFFF;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8218370c
	if (ctx.cr6.eq) goto loc_8218370C;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
loc_8218370C:
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// b 0x82183754
	goto loc_82183754;
loc_8218371C:
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// rlwinm r7,r7,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x8218374c
	if (ctx.cr6.gt) goto loc_8218374C;
loc_82183734:
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82183734
	if (!ctx.cr6.gt) goto loc_82183734;
loc_8218374C:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82183754:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r9,r11,4
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821837ac
	if (ctx.cr6.eq) goto loc_821837AC;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821837ac
	if (ctx.cr6.eq) goto loc_821837AC;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// clrlwi r11,r8,4
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFFFFF;
	// std r3,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r3.u64);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// std r3,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r3.u64);
	// beq cr6,0x821837ac
	if (ctx.cr6.eq) goto loc_821837AC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r9,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
loc_821837AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821837B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_821837B4:
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

__attribute__((alias("__imp__sub_821837CC"))) PPC_WEAK_FUNC(sub_821837CC);
PPC_FUNC_IMPL(__imp__sub_821837CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821837D0"))) PPC_WEAK_FUNC(sub_821837D0);
PPC_FUNC_IMPL(__imp__sub_821837D0) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,19096
	ctx.r11.s64 = ctx.r11.s64 + 19096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82183800;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r11,-5968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5968);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82183818
	if (!ctx.cr6.gt) goto loc_82183818;
	// bl 0x82088650
	ctx.lr = 0x82183818;
	sub_82088650(ctx, base);
loc_82183818:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182ff8
	ctx.lr = 0x82183820;
	sub_82182FF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82183828;
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

__attribute__((alias("__imp__sub_82183840"))) PPC_WEAK_FUNC(sub_82183840);
PPC_FUNC_IMPL(__imp__sub_82183840) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821830f8
	sub_821830F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82183848"))) PPC_WEAK_FUNC(sub_82183848);
PPC_FUNC_IMPL(__imp__sub_82183848) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821830f8
	sub_821830F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82183850"))) PPC_WEAK_FUNC(sub_82183850);
PPC_FUNC_IMPL(__imp__sub_82183850) {
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
	// bl 0x82183178
	ctx.lr = 0x82183860;
	sub_82183178(ctx, base);
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
}

__attribute__((alias("__imp__sub_82183878"))) PPC_WEAK_FUNC(sub_82183878);
PPC_FUNC_IMPL(__imp__sub_82183878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x82183880;
	sub_8224875C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82182dc8
	ctx.lr = 0x82183890;
	sub_82182DC8(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r27,r11,19096
	ctx.r27.s64 = ctx.r11.s64 + 19096;
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd2c
	ctx.lr = 0x821838A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x82088650
	ctx.lr = 0x821838A4;
	sub_82088650(ctx, base);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r26,-32180
	ctx.r26.s64 = -2108948480;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r19,1
	ctx.r19.s64 = 1;
	// li r22,0
	ctx.r22.s64 = 0;
	// std r11,21544(r10)
	PPC_STORE_U64(ctx.r10.u32 + 21544, ctx.r11.u64);
	// lis r18,-32180
	ctx.r18.s64 = -2108948480;
	// stw r31,21556(r26)
	PPC_STORE_U32(ctx.r26.u32 + 21556, ctx.r31.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stw r19,-5964(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5964, ctx.r19.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_821838D8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,21512(r18)
	PPC_STORE_U32(ctx.r18.u32 + 21512, ctx.r11.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x82183910
	if (!ctx.cr6.eq) goto loc_82183910;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x82183910
	if (!ctx.cr6.eq) goto loc_82183910;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82183918
	if (ctx.cr6.eq) goto loc_82183918;
loc_82183910:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x821838d8
	goto loc_821838D8;
loc_82183918:
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r25,r10,20888
	ctx.r25.s64 = ctx.r10.s64 + 20888;
	// ble cr6,0x82183984
	if (!ctx.cr6.gt) goto loc_82183984;
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// addi r30,r25,-8
	ctx.r30.s64 = ctx.r25.s64 + -8;
	// subf r28,r28,r25
	ctx.r28.s64 = ctx.r25.s64 - ctx.r28.s64;
loc_82183938:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lwzu r11,12(r30)
	ea = 12 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r7,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r7.u32);
	// subf r4,r3,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r3.s64;
	// bl 0x822aa648
	ctx.lr = 0x8218396C;
	sub_822AA648(ctx, base);
	// lwz r11,21512(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 21512);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82183938
	if (ctx.cr6.lt) goto loc_82183938;
	// lwz r9,21556(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21556);
loc_82183984:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r3,r10,16792
	ctx.r3.s64 = ctx.r10.s64 + 16792;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,21552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21552, ctx.r3.u32);
	// bl 0x82248f70
	ctx.lr = 0x821839AC;
	sub_82248F70(ctx, base);
	// lwz r11,21556(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21556);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82183a10
	if (ctx.cr6.eq) goto loc_82183A10;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_821839C4:
	// lwz r9,21552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r22,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r22.u32);
	// lwz r9,21552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r22,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r22.u32);
	// lwz r9,21552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r19,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r19.u32);
	// lwz r9,21552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r8.u32);
	// lwz r9,21552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r22,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r22.u32);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r9,21556(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21556);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821839c4
	if (ctx.cr6.lt) goto loc_821839C4;
loc_82183A10:
	// lis r30,-32187
	ctx.r30.s64 = -2109407232;
	// lwz r11,21512(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 21512);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r22,-5968(r30)
	PPC_STORE_U32(ctx.r30.u32 + -5968, ctx.r22.u32);
	// ble cr6,0x82183d38
	if (!ctx.cr6.gt) goto loc_82183D38;
	// addi r21,r25,4
	ctx.r21.s64 = ctx.r25.s64 + 4;
	// lis r20,-32187
	ctx.r20.s64 = -2109407232;
	// lis r17,-32180
	ctx.r17.s64 = -2108948480;
loc_82183A38:
	// lwz r24,4(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82183bcc
	if (ctx.cr6.eq) goto loc_82183BCC;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82183bcc
	if (ctx.cr6.eq) goto loc_82183BCC;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82183A5C:
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,21552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// add r7,r29,r9
	ctx.r7.u64 = ctx.r29.u64 + ctx.r9.u64;
	// rlwinm r5,r8,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r5,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r5.s64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r28,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r28.u32);
	// lwz r9,21552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// lwz r10,-5968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5968);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r28.u32);
	// lwz r9,21552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// lwz r10,-5968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5968);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lwz r10,-5968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5968);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,21552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r29,-5968(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5968);
	// mulli r26,r29,28
	ctx.r26.s64 = ctx.r29.s64 * 28;
	// add r3,r26,r27
	ctx.r3.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82183AE0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd2c
	ctx.lr = 0x82183AE8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,21552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82183b78
	if (ctx.cr6.eq) goto loc_82183B78;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x822aa648
	ctx.lr = 0x82183B14;
	sub_822AA648(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82183b78
	if (ctx.cr6.eq) goto loc_82183B78;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf. r5,r3,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82183b78
	if (ctx.cr0.eq) goto loc_82183B78;
	// lwz r11,21572(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 21572);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82183b44
	if (ctx.cr6.eq) goto loc_82183B44;
	// lbz r4,-5972(r20)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r20.u32 + -5972);
	// bl 0x82184800
	ctx.lr = 0x82183B44;
	sub_82184800(ctx, base);
loc_82183B44:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r19,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// stw r22,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r22.u32);
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r22,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r22.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
loc_82183B78:
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd3c
	ctx.lr = 0x82183B80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// add r3,r26,r27
	ctx.r3.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82183B88;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r10,-5968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5968);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r9,21552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r25,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r8,r24
	ctx.r10.u64 = ctx.r8.u64 + ctx.r24.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r23,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r23.u32);
	// lwz r9,-5968(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5968);
	// addi r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 1;
	// stw r29,-5968(r30)
	PPC_STORE_U32(ctx.r30.u32 + -5968, ctx.r29.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82183a5c
	if (!ctx.cr6.eq) goto loc_82183A5C;
loc_82183BCC:
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,21552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// lwz r8,-4(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4);
	// add r7,r29,r9
	ctx.r7.u64 = ctx.r29.u64 + ctx.r9.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// lwz r9,21552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// lwz r10,-5968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5968);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r10,-5968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5968);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r9,21552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,-5968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5968);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,21552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r29,-5968(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5968);
	// mulli r28,r29,28
	ctx.r28.s64 = ctx.r29.s64 * 28;
	// add r3,r28,r27
	ctx.r3.u64 = ctx.r28.u64 + ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82183C50;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd2c
	ctx.lr = 0x82183C58;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,21552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,20(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82183ce8
	if (ctx.cr6.eq) goto loc_82183CE8;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x822aa648
	ctx.lr = 0x82183C84;
	sub_822AA648(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82183ce8
	if (ctx.cr6.eq) goto loc_82183CE8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf. r5,r3,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82183ce8
	if (ctx.cr0.eq) goto loc_82183CE8;
	// lwz r11,21572(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 21572);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82183cb4
	if (ctx.cr6.eq) goto loc_82183CB4;
	// lbz r4,-5972(r20)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r20.u32 + -5972);
	// bl 0x82184800
	ctx.lr = 0x82183CB4;
	sub_82184800(ctx, base);
loc_82183CB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r19,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// stw r22,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r22.u32);
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// stw r22,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r22.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
loc_82183CE8:
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd3c
	ctx.lr = 0x82183CF0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// add r3,r28,r27
	ctx.r3.u64 = ctx.r28.u64 + ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82183CF8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,-5968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5968);
	// lwz r10,21552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21552);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r23.u32);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r22,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r22.u32);
	// addi r21,r21,12
	ctx.r21.s64 = ctx.r21.s64 + 12;
	// lwz r11,21512(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 21512);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,-5968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5968);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// stw r29,-5968(r30)
	PPC_STORE_U32(ctx.r30.u32 + -5968, ctx.r29.u32);
	// blt cr6,0x82183a38
	if (ctx.cr6.lt) goto loc_82183A38;
loc_82183D38:
	// bl 0x82182e28
	ctx.lr = 0x82183D3C;
	sub_82182E28(ctx, base);
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// addi r31,r29,-1
	ctx.r31.s64 = ctx.r29.s64 + -1;
	// bl 0x8241dd2c
	ctx.lr = 0x82183D48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r10,23
	ctx.r10.s64 = 23;
	// addi r11,r11,20936
	ctx.r11.s64 = ctx.r11.s64 + 20936;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82183D5C:
	// stwu r31,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82183d5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82183D5C;
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd3c
	ctx.lr = 0x82183D6C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x82088650
	ctx.lr = 0x82183D70;
	sub_82088650(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// bl 0x82182f58
	ctx.lr = 0x82183D78;
	sub_82182F58(ctx, base);
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd3c
	ctx.lr = 0x82183D80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_82183D88"))) PPC_WEAK_FUNC(sub_82183D88);
PPC_FUNC_IMPL(__imp__sub_82183D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82183D90;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82183db0
	if (!ctx.cr6.eq) goto loc_82183DB0;
loc_82183DA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82183DB0:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-5968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5968);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82183da4
	if (!ctx.cr6.lt) goto loc_82183DA4;
	// bl 0x82182eb8
	ctx.lr = 0x82183DC4;
	sub_82182EB8(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r29,r11,21516
	ctx.r29.s64 = ctx.r11.s64 + 21516;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82183DD4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r28,-32180
	ctx.r28.s64 = -2108948480;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,21552(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21552);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x822aa648
	ctx.lr = 0x82183DF8;
	sub_822AA648(ctx, base);
	// lwz r11,21552(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21552);
	// li r5,7
	ctx.r5.s64 = 7;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x8224a628
	ctx.lr = 0x82183E10;
	sub_8224A628(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82183E18;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x82182f08
	ctx.lr = 0x82183E1C;
	sub_82182F08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82183E28"))) PPC_WEAK_FUNC(sub_82183E28);
PPC_FUNC_IMPL(__imp__sub_82183E28) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82183e38
	if (!ctx.cr6.eq) goto loc_82183E38;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82183E38:
	// b 0x82183598
	sub_82183598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82183E3C"))) PPC_WEAK_FUNC(sub_82183E3C);
PPC_FUNC_IMPL(__imp__sub_82183E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82183E40"))) PPC_WEAK_FUNC(sub_82183E40);
PPC_FUNC_IMPL(__imp__sub_82183E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r4,r11,-11632
	ctx.r4.s64 = ctx.r11.s64 + -11632;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// b 0x82183648
	sub_82183648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82183E58"))) PPC_WEAK_FUNC(sub_82183E58);
PPC_FUNC_IMPL(__imp__sub_82183E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82183E60;
	sub_82248750(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82182eb8
	ctx.lr = 0x82183E78;
	sub_82182EB8(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r27,r11,19096
	ctx.r27.s64 = ctx.r11.s64 + 19096;
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd2c
	ctx.lr = 0x82183E88;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lis r31,-32187
	ctx.r31.s64 = -2109407232;
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r16,1
	ctx.r16.s64 = 1;
	// lis r14,-32187
	ctx.r14.s64 = -2109407232;
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82183fc8
	if (ctx.cr6.eq) goto loc_82183FC8;
	// lwz r11,-5968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82183fcc
	if (!ctx.cr6.lt) goto loc_82183FCC;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r18,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r9,r18,r10
	ctx.r9.u64 = ctx.r18.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r18,28
	ctx.r10.s64 = ctx.r18.s64 * 28;
	// add r21,r11,r22
	ctx.r21.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r26,r9,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// add r28,r10,r27
	ctx.r28.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_82183EE4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821831f8
	ctx.lr = 0x82183EF0;
	sub_821831F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82183EF8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd2c
	ctx.lr = 0x82183F00;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,21552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21552);
	// add r29,r26,r11
	ctx.r29.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82183f88
	if (ctx.cr6.eq) goto loc_82183F88;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x822aa648
	ctx.lr = 0x82183F20;
	sub_822AA648(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82183f88
	if (ctx.cr6.eq) goto loc_82183F88;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf. r5,r3,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82183f88
	if (ctx.cr0.eq) goto loc_82183F88;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,21572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21572);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82183f54
	if (ctx.cr6.eq) goto loc_82183F54;
	// lbz r4,-5972(r14)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r14.u32 + -5972);
	// bl 0x82184800
	ctx.lr = 0x82183F54;
	sub_82184800(ctx, base);
loc_82183F54:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r16,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r16.u32);
	// stw r16,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// stw r20,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r20.u32);
	// stw r20,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r20.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r20,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r20.u32);
	// stw r20,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r20.u32);
loc_82183F88:
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd3c
	ctx.lr = 0x82183F90;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82183F98;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwzx r10,r11,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82183fc8
	if (ctx.cr6.eq) goto loc_82183FC8;
	// lwz r11,-5968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r26,r26,36
	ctx.r26.s64 = ctx.r26.s64 + 36;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82183ee4
	if (ctx.cr6.lt) goto loc_82183EE4;
	// b 0x82183fcc
	goto loc_82183FCC;
loc_82183FC8:
	// lwz r11,-5968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
loc_82183FCC:
	// lis r19,-32180
	ctx.r19.s64 = -2108948480;
	// stw r18,-5968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5968, ctx.r18.u32);
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// lwz r10,21512(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21512);
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82184368
	if (!ctx.cr6.lt) goto loc_82184368;
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// add r8,r24,r10
	ctx.r8.u64 = ctx.r24.u64 + ctx.r10.u64;
	// addi r9,r9,20888
	ctx.r9.s64 = ctx.r9.s64 + 20888;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r17,r22,r9
	ctx.r17.s64 = ctx.r9.s64 - ctx.r22.s64;
	// add r8,r10,r22
	ctx.r8.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r22,r10,r9
	ctx.r22.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r21,r8,8
	ctx.r21.s64 = ctx.r8.s64 + 8;
loc_82184010:
	// lwz r24,0(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// lwz r7,21552(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21552);
	// bne cr6,0x82184038
	if (!ctx.cr6.eq) goto loc_82184038;
	// rlwinm r10,r18,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r18,r10
	ctx.r10.u64 = ctx.r18.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82184040
	goto loc_82184040;
loc_82184038:
	// add r10,r17,r21
	ctx.r10.u64 = ctx.r17.u64 + ctx.r21.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
loc_82184040:
	// lwz r9,-8(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + -8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82184060
	if (!ctx.cr6.eq) goto loc_82184060;
	// lwz r9,-4(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + -4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82184060
	if (!ctx.cr6.eq) goto loc_82184060;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82184360
	if (ctx.cr6.eq) goto loc_82184360;
loc_82184060:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821841f0
	if (ctx.cr6.eq) goto loc_821841F0;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821841f0
	if (ctx.cr6.eq) goto loc_821841F0;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_8218407C:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r5,r9,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r5,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r5.s64;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r28,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r28.u32);
	// lwz r9,21552(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21552);
	// lwz r11,-5968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u32);
	// lwz r9,21552(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21552);
	// lwz r11,-5968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lwz r9,21552(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21552);
	// lwz r11,-5968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r29,-5968(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
	// mulli r26,r29,28
	ctx.r26.s64 = ctx.r29.s64 * 28;
	// add r3,r26,r27
	ctx.r3.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821840FC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd2c
	ctx.lr = 0x82184104;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,21552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21552);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82184198
	if (ctx.cr6.eq) goto loc_82184198;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x822aa648
	ctx.lr = 0x82184130;
	sub_822AA648(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82184198
	if (ctx.cr6.eq) goto loc_82184198;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf. r5,r3,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82184198
	if (ctx.cr0.eq) goto loc_82184198;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,21572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21572);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82184164
	if (ctx.cr6.eq) goto loc_82184164;
	// lbz r4,-5972(r14)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r14.u32 + -5972);
	// bl 0x82184800
	ctx.lr = 0x82184164;
	sub_82184800(ctx, base);
loc_82184164:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r16,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// stw r16,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r16.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// stw r20,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r20.u32);
	// stw r20,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r20.u32);
	// stw r20,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r20.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r20,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r20.u32);
loc_82184198:
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd3c
	ctx.lr = 0x821841A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// add r3,r26,r27
	ctx.r3.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821841A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,-5968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
	// lwz r8,21552(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21552);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r23,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r23.u32);
	// lwz r11,-5968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-5968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5968, ctx.r11.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// lwz r7,21552(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21552);
	// bne cr6,0x8218407c
	if (!ctx.cr6.eq) goto loc_8218407C;
loc_821841F0:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// lwz r11,-5968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,21552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21552);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r9,21552(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21552);
	// lwz r11,-5968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r11,-5968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,21552(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21552);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r29,-5968(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
	// mulli r28,r29,28
	ctx.r28.s64 = ctx.r29.s64 * 28;
	// add r3,r28,r27
	ctx.r3.u64 = ctx.r28.u64 + ctx.r27.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82184270;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd2c
	ctx.lr = 0x82184278;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r29,r11
	ctx.r6.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,21552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21552);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8218430c
	if (ctx.cr6.eq) goto loc_8218430C;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r29,28
	ctx.r3.s64 = ctx.r29.s64 + 28;
	// bl 0x822aa648
	ctx.lr = 0x821842A4;
	sub_822AA648(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218430c
	if (ctx.cr6.eq) goto loc_8218430C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf. r5,r3,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8218430c
	if (ctx.cr0.eq) goto loc_8218430C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,21572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21572);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821842d8
	if (ctx.cr6.eq) goto loc_821842D8;
	// lbz r4,-5972(r14)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r14.u32 + -5972);
	// bl 0x82184800
	ctx.lr = 0x821842D8;
	sub_82184800(ctx, base);
loc_821842D8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r16,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r16.u32);
	// stw r16,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r20,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r20.u32);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r20,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r20.u32);
	// stw r20,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r20.u32);
	// rlwinm r7,r8,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// stw r20,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r20.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
loc_8218430C:
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd3c
	ctx.lr = 0x82184314;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// add r3,r28,r27
	ctx.r3.u64 = ctx.r28.u64 + ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x8218431C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,-5968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
	// lwz r10,21552(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21552);
	// addi r22,r22,12
	ctx.r22.s64 = ctx.r22.s64 + 12;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r21,r21,12
	ctx.r21.s64 = ctx.r21.s64 + 12;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r23.u32);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r11,21512(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21512);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,-5968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5968);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-5968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5968, ctx.r11.u32);
	// blt cr6,0x82184010
	if (ctx.cr6.lt) goto loc_82184010;
	// b 0x82184368
	goto loc_82184368;
loc_82184360:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// stw r15,-5968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5968, ctx.r15.u32);
loc_82184368:
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// bl 0x8241dd2c
	ctx.lr = 0x82184374;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r10,23
	ctx.r10.s64 = 23;
	// addi r11,r11,20936
	ctx.r11.s64 = ctx.r11.s64 + 20936;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82184388:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8218439c
	if (!ctx.cr6.eq) goto loc_8218439C;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8218439C:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bdnz 0x82184388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82184388;
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd3c
	ctx.lr = 0x821843AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r27,2420
	ctx.r3.s64 = ctx.r27.s64 + 2420;
	// bl 0x8241dd3c
	ctx.lr = 0x821843B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r31,64
	ctx.r31.s64 = 64;
loc_821843B8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821843C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// bne 0x821843b8
	if (!ctx.cr0.eq) goto loc_821843B8;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821843D4"))) PPC_WEAK_FUNC(sub_821843D4);
PPC_FUNC_IMPL(__imp__sub_821843D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821843D8"))) PPC_WEAK_FUNC(sub_821843D8);
PPC_FUNC_IMPL(__imp__sub_821843D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821843E0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x821843F0;
	sub_82183078(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,19096
	ctx.r11.s64 = ctx.r11.s64 + 19096;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8218440C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r11,21552(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21552);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r4,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82184464
	if (ctx.cr6.eq) goto loc_82184464;
loc_8218444C:
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8218444c
	if (!ctx.cr6.eq) goto loc_8218444C;
loc_82184464:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82184468:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r8
	ctx.r31.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r6,r10,4
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFFFFF;
	// subf r4,r6,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r6.s64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r7,r3,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x821844a4
	if (ctx.cr6.lt) goto loc_821844A4;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821844c4
	if (!ctx.cr6.eq) goto loc_821844C4;
loc_821844A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82184468
	if (!ctx.cr6.eq) goto loc_82184468;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821844B8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_821844C4:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82184530
	if (!ctx.cr6.eq) goto loc_82184530;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r8,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r8.s64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82184504
	if (ctx.cr6.eq) goto loc_82184504;
loc_821844EC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821844ec
	if (!ctx.cr6.eq) goto loc_821844EC;
loc_82184504:
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r27,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82184524;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82184530:
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r7,r9,4
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFFFFF;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8218457c
	if (!ctx.cr6.eq) goto loc_8218457C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r10,r8,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r8.s64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
loc_8218457C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwimi r11,r27,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82184590;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8218459C"))) PPC_WEAK_FUNC(sub_8218459C);
PPC_FUNC_IMPL(__imp__sub_8218459C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821845A0"))) PPC_WEAK_FUNC(sub_821845A0);
PPC_FUNC_IMPL(__imp__sub_821845A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821845A8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82183078
	ctx.lr = 0x821845B8;
	sub_82183078(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,19096
	ctx.r11.s64 = ctx.r11.s64 + 19096;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821845D4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x82183178
	ctx.lr = 0x821845D8;
	sub_82183178(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82184604
	if (!ctx.cr6.eq) goto loc_82184604;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821843d8
	ctx.lr = 0x821845EC;
	sub_821843D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821845F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82184604:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,21552(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21552);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r5,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82184670
	if (!ctx.cr6.lt) goto loc_82184670;
loc_82184640:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r7
	ctx.r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// clrlwi r9,r10,4
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFFFFF;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82184684
	if (!ctx.cr6.lt) goto loc_82184684;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82184640
	if (ctx.cr6.lt) goto loc_82184640;
loc_82184670:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82184678;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82184684:
	// bne cr6,0x8218469c
	if (!ctx.cr6.eq) goto loc_8218469C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x821846e8
	goto loc_821846E8;
loc_8218469C:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// subf r3,r7,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r7.s64;
	// rlwinm r8,r3,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// beq cr6,0x821846e8
	if (ctx.cr6.eq) goto loc_821846E8;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_821846E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// rlwimi r11,r27,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x82184700;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8218470C"))) PPC_WEAK_FUNC(sub_8218470C);
PPC_FUNC_IMPL(__imp__sub_8218470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82184710"))) PPC_WEAK_FUNC(sub_82184710);
PPC_FUNC_IMPL(__imp__sub_82184710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82184718;
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
	ctx.lr = 0x8218472C;
	sub_82183078(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,19096
	ctx.r11.s64 = ctx.r11.s64 + 19096;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82184744;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82184760
	if (!ctx.cr6.eq) goto loc_82184760;
loc_8218474C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82184754;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82184760:
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// addi r10,r30,15
	ctx.r10.s64 = ctx.r30.s64 + 15;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r31,r10,28,4,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821845a0
	ctx.lr = 0x8218477C;
	sub_821845A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218474c
	if (ctx.cr6.eq) goto loc_8218474C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82183358
	ctx.lr = 0x8218478C;
	sub_82183358(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82184798;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821847A4"))) PPC_WEAK_FUNC(sub_821847A4);
PPC_FUNC_IMPL(__imp__sub_821847A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821847A8"))) PPC_WEAK_FUNC(sub_821847A8);
PPC_FUNC_IMPL(__imp__sub_821847A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82248a40
	sub_82248A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821847AC"))) PPC_WEAK_FUNC(sub_821847AC);
PPC_FUNC_IMPL(__imp__sub_821847AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821847B0"))) PPC_WEAK_FUNC(sub_821847B0);
PPC_FUNC_IMPL(__imp__sub_821847B0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82248a40
	sub_82248A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821847BC"))) PPC_WEAK_FUNC(sub_821847BC);
PPC_FUNC_IMPL(__imp__sub_821847BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821847C0"))) PPC_WEAK_FUNC(sub_821847C0);
PPC_FUNC_IMPL(__imp__sub_821847C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_821847D8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821847d8
	if (!ctx.cr6.eq) goto loc_821847D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821847FC"))) PPC_WEAK_FUNC(sub_821847FC);
PPC_FUNC_IMPL(__imp__sub_821847FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82184800"))) PPC_WEAK_FUNC(sub_82184800);
PPC_FUNC_IMPL(__imp__sub_82184800) {
	PPC_FUNC_PROLOGUE();
	// b 0x82248f70
	sub_82248F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82184804"))) PPC_WEAK_FUNC(sub_82184804);
PPC_FUNC_IMPL(__imp__sub_82184804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82184808"))) PPC_WEAK_FUNC(sub_82184808);
PPC_FUNC_IMPL(__imp__sub_82184808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,21628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21628);
	// stw r3,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82184818"))) PPC_WEAK_FUNC(sub_82184818);
PPC_FUNC_IMPL(__imp__sub_82184818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,21592
	ctx.r9.s64 = ctx.r11.s64 + 21592;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82184828:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r3
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x82184850
	if (ctx.cr6.eq) goto loc_82184850;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82184828
	if (ctx.cr6.lt) goto loc_82184828;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82184850:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21616
	ctx.r9.s64 = ctx.r11.s64 + 21616;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82184864"))) PPC_WEAK_FUNC(sub_82184864);
PPC_FUNC_IMPL(__imp__sub_82184864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82184868"))) PPC_WEAK_FUNC(sub_82184868);
PPC_FUNC_IMPL(__imp__sub_82184868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82184870;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82184884;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x820882b0
	ctx.lr = 0x821848A0;
	sub_820882B0(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82257118
	ctx.lr = 0x821848A8;
	sub_82257118(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821848B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821848C4"))) PPC_WEAK_FUNC(sub_821848C4);
PPC_FUNC_IMPL(__imp__sub_821848C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821848C8"))) PPC_WEAK_FUNC(sub_821848C8);
PPC_FUNC_IMPL(__imp__sub_821848C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821848D0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// lwz r11,21628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21628);
	// lwz r31,56(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82184928
	if (!ctx.cr6.lt) goto loc_82184928;
	// li r29,0
	ctx.r29.s64 = 0;
loc_821848F0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82184910
	if (ctx.cr6.eq) goto loc_82184910;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82184910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82184910:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,21628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21628);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821848f0
	if (ctx.cr6.lt) goto loc_821848F0;
loc_82184928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82184930"))) PPC_WEAK_FUNC(sub_82184930);
PPC_FUNC_IMPL(__imp__sub_82184930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,21628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21628);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r3,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218494C"))) PPC_WEAK_FUNC(sub_8218494C);
PPC_FUNC_IMPL(__imp__sub_8218494C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82184950"))) PPC_WEAK_FUNC(sub_82184950);
PPC_FUNC_IMPL(__imp__sub_82184950) {
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
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// beq cr6,0x82184994
	if (ctx.cr6.eq) goto loc_82184994;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218498C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821849e4
	if (ctx.cr6.eq) goto loc_821849E4;
loc_82184994:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821849e4
	if (ctx.cr6.eq) goto loc_821849E4;
loc_821849B0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821849d8
	if (ctx.cr6.eq) goto loc_821849D8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821849d8
	if (ctx.cr6.eq) goto loc_821849D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821849D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821849D8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x821849b0
	if (!ctx.cr6.eq) goto loc_821849B0;
loc_821849E4:
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

__attribute__((alias("__imp__sub_821849FC"))) PPC_WEAK_FUNC(sub_821849FC);
PPC_FUNC_IMPL(__imp__sub_821849FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82184A00"))) PPC_WEAK_FUNC(sub_82184A00);
PPC_FUNC_IMPL(__imp__sub_82184A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82184A08;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r23,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r23.s64 = ctx.r9.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x82184b10
	if (ctx.cr0.eq) goto loc_82184B10;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r22,-32179
	ctx.r22.s64 = -2108882944;
loc_82184A38:
	// lwz r25,21780(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 21780);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218d768
	ctx.lr = 0x82184A4C;
	sub_8218D768(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82184aec
	if (ctx.cr6.eq) goto loc_82184AEC;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82184a74
	if (ctx.cr6.eq) goto loc_82184A74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82184A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82184A74:
	// lwz r3,68(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// lwz r5,84(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82184aa0
	if (ctx.cr6.eq) goto loc_82184AA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82184A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82184aec
	if (ctx.cr6.eq) goto loc_82184AEC;
loc_82184AA0:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82184aec
	if (ctx.cr6.eq) goto loc_82184AEC;
loc_82184AB8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82184ae0
	if (ctx.cr6.eq) goto loc_82184AE0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82184ae0
	if (ctx.cr6.eq) goto loc_82184AE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82184AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82184AE0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82184ab8
	if (!ctx.cr6.eq) goto loc_82184AB8;
loc_82184AEC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218d780
	ctx.lr = 0x82184AFC;
	sub_8218D780(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82184a38
	if (ctx.cr6.lt) goto loc_82184A38;
loc_82184B10:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82184B18"))) PPC_WEAK_FUNC(sub_82184B18);
PPC_FUNC_IMPL(__imp__sub_82184B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82184b58
	if (ctx.cr6.eq) goto loc_82184B58;
loc_82184B38:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82184b4c
	if (ctx.cr6.eq) goto loc_82184B4C;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_82184B4C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82184b38
	if (!ctx.cr6.eq) goto loc_82184B38;
loc_82184B58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82184B68"))) PPC_WEAK_FUNC(sub_82184B68);
PPC_FUNC_IMPL(__imp__sub_82184B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82184B70;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82184B80:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82184bac
	if (ctx.cr6.eq) goto loc_82184BAC;
loc_82184B94:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82184bbc
	if (!ctx.cr6.eq) goto loc_82184BBC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82184b94
	if (!ctx.cr6.eq) goto loc_82184B94;
loc_82184BAC:
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82184BBC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82184be0
	if (ctx.cr6.eq) goto loc_82184BE0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82184be0
	if (ctx.cr6.eq) goto loc_82184BE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82184BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82184BE0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82184b80
	if (ctx.cr6.eq) goto loc_82184B80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82184c20
	if (ctx.cr6.eq) goto loc_82184C20;
loc_82184C00:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82184c14
	if (ctx.cr6.eq) goto loc_82184C14;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_82184C14:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82184c00
	if (!ctx.cr6.eq) goto loc_82184C00;
loc_82184C20:
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x82184b80
	goto loc_82184B80;
}

__attribute__((alias("__imp__sub_82184C2C"))) PPC_WEAK_FUNC(sub_82184C2C);
PPC_FUNC_IMPL(__imp__sub_82184C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82184C30"))) PPC_WEAK_FUNC(sub_82184C30);
PPC_FUNC_IMPL(__imp__sub_82184C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82184C38;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,21628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21628);
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r29,40(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82184c98
	if (ctx.cr6.eq) goto loc_82184C98;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82184C58:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82184c84
	if (ctx.cr6.eq) goto loc_82184C84;
loc_82184C6C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82184ca0
	if (!ctx.cr6.eq) goto loc_82184CA0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82184c6c
	if (!ctx.cr6.eq) goto loc_82184C6C;
loc_82184C84:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82184c58
	if (!ctx.cr6.eq) goto loc_82184C58;
loc_82184C98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82184CA0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82184cbc
	if (ctx.cr6.eq) goto loc_82184CBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82184CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82184CBC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82184c58
	if (ctx.cr6.eq) goto loc_82184C58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82184cfc
	if (ctx.cr6.eq) goto loc_82184CFC;
loc_82184CDC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82184cf0
	if (ctx.cr6.eq) goto loc_82184CF0;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_82184CF0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82184cdc
	if (!ctx.cr6.eq) goto loc_82184CDC;
loc_82184CFC:
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x82184c58
	goto loc_82184C58;
}

__attribute__((alias("__imp__sub_82184D08"))) PPC_WEAK_FUNC(sub_82184D08);
PPC_FUNC_IMPL(__imp__sub_82184D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82184D10;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r11,21628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21628);
	// lwz r31,44(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r29,52(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82184d70
	if (ctx.cr6.eq) goto loc_82184D70;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82184D30:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82184d5c
	if (ctx.cr6.eq) goto loc_82184D5C;
loc_82184D44:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82184d78
	if (!ctx.cr6.eq) goto loc_82184D78;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82184d44
	if (!ctx.cr6.eq) goto loc_82184D44;
loc_82184D5C:
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82184d30
	if (!ctx.cr6.eq) goto loc_82184D30;
loc_82184D70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82184D78:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82184d94
	if (ctx.cr6.eq) goto loc_82184D94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82184D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82184D94:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82184d30
	if (ctx.cr6.eq) goto loc_82184D30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82184dd4
	if (ctx.cr6.eq) goto loc_82184DD4;
loc_82184DB4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82184dc8
	if (ctx.cr6.eq) goto loc_82184DC8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_82184DC8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82184db4
	if (!ctx.cr6.eq) goto loc_82184DB4;
loc_82184DD4:
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x82184d30
	goto loc_82184D30;
}

__attribute__((alias("__imp__sub_82184DE0"))) PPC_WEAK_FUNC(sub_82184DE0);
PPC_FUNC_IMPL(__imp__sub_82184DE0) {
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
	// bl 0x8218d888
	ctx.lr = 0x82184DF8;
	sub_8218D888(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r3,21628(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21628);
	// bl 0x82184950
	ctx.lr = 0x82184E10;
	sub_82184950(ctx, base);
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

__attribute__((alias("__imp__sub_82184E24"))) PPC_WEAK_FUNC(sub_82184E24);
PPC_FUNC_IMPL(__imp__sub_82184E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82184E28"))) PPC_WEAK_FUNC(sub_82184E28);
PPC_FUNC_IMPL(__imp__sub_82184E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82184E30;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32180
	ctx.r29.s64 = -2108948480;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,21628(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd2c
	ctx.lr = 0x82184E4C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82184e8c
	if (ctx.cr6.eq) goto loc_82184E8C;
loc_82184E64:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82184e80
	if (ctx.cr6.eq) goto loc_82184E80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82184e64
	if (!ctx.cr6.eq) goto loc_82184E64;
	// b 0x82184e8c
	goto loc_82184E8C;
loc_82184E80:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
loc_82184E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82184b18
	ctx.lr = 0x82184E94;
	sub_82184B18(ctx, base);
	// lwz r31,21628(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd3c
	ctx.lr = 0x82184EA0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82184EB0"))) PPC_WEAK_FUNC(sub_82184EB0);
PPC_FUNC_IMPL(__imp__sub_82184EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82184EB8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r31,21628(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd2c
	ctx.lr = 0x82184ED8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82184f14
	if (ctx.cr6.lt) goto loc_82184F14;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82184F14:
	// lwz r31,21628(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd3c
	ctx.lr = 0x82184F20;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82184F30"))) PPC_WEAK_FUNC(sub_82184F30);
PPC_FUNC_IMPL(__imp__sub_82184F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82184F38;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r31,21628(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd2c
	ctx.lr = 0x82184F58;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82184fa4
	if (ctx.cr6.eq) goto loc_82184FA4;
loc_82184F7C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82184f98
	if (ctx.cr6.eq) goto loc_82184F98;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82184f7c
	if (!ctx.cr6.eq) goto loc_82184F7C;
	// b 0x82184fa4
	goto loc_82184FA4;
loc_82184F98:
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
loc_82184FA4:
	// lwz r31,21628(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd3c
	ctx.lr = 0x82184FB0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82184FC0"))) PPC_WEAK_FUNC(sub_82184FC0);
PPC_FUNC_IMPL(__imp__sub_82184FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82184FC8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r31,21628(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd2c
	ctx.lr = 0x82184FE8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82185024
	if (ctx.cr6.lt) goto loc_82185024;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82185024:
	// lwz r31,21628(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd3c
	ctx.lr = 0x82185030;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82185040"))) PPC_WEAK_FUNC(sub_82185040);
PPC_FUNC_IMPL(__imp__sub_82185040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82185048;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32180
	ctx.r30.s64 = -2108948480;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r31,21628(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd2c
	ctx.lr = 0x82185068;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821850b4
	if (ctx.cr6.eq) goto loc_821850B4;
loc_8218508C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821850a8
	if (ctx.cr6.eq) goto loc_821850A8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8218508c
	if (!ctx.cr6.eq) goto loc_8218508C;
	// b 0x821850b4
	goto loc_821850B4;
loc_821850A8:
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
loc_821850B4:
	// lwz r31,21628(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd3c
	ctx.lr = 0x821850C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821850D0"))) PPC_WEAK_FUNC(sub_821850D0);
PPC_FUNC_IMPL(__imp__sub_821850D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821850D8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32180
	ctx.r28.s64 = -2108948480;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r29,21628(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21628);
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// bl 0x8241dd2c
	ctx.lr = 0x821850F8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82185134
	if (ctx.cr6.eq) goto loc_82185134;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82185134
	if (ctx.cr6.eq) goto loc_82185134;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82185134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82185134:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stwx r27,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r27.u32);
	// lwz r31,21628(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd3c
	ctx.lr = 0x82185154;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82185160"))) PPC_WEAK_FUNC(sub_82185160);
PPC_FUNC_IMPL(__imp__sub_82185160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82185168;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32180
	ctx.r28.s64 = -2108948480;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,21628(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd2c
	ctx.lr = 0x82185184;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// lwz r9,56(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r31,21628(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd3c
	ctx.lr = 0x821851A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821851B4"))) PPC_WEAK_FUNC(sub_821851B4);
PPC_FUNC_IMPL(__imp__sub_821851B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821851B8"))) PPC_WEAK_FUNC(sub_821851B8);
PPC_FUNC_IMPL(__imp__sub_821851B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
loc_821851CC:
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82185214
	if (ctx.cr6.eq) goto loc_82185214;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8218520c
	if (ctx.cr6.eq) goto loc_8218520C;
loc_821851EC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82185200
	if (ctx.cr6.eq) goto loc_82185200;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_82185200:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821851ec
	if (!ctx.cr6.eq) goto loc_821851EC;
loc_8218520C:
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// stw r6,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r6.u32);
loc_82185214:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x821851cc
	if (!ctx.cr6.eq) goto loc_821851CC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82185224"))) PPC_WEAK_FUNC(sub_82185224);
PPC_FUNC_IMPL(__imp__sub_82185224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82185228"))) PPC_WEAK_FUNC(sub_82185228);
PPC_FUNC_IMPL(__imp__sub_82185228) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8218523C:
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82185284
	if (ctx.cr6.eq) goto loc_82185284;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8218527c
	if (ctx.cr6.eq) goto loc_8218527C;
loc_8218525C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82185270
	if (ctx.cr6.eq) goto loc_82185270;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_82185270:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8218525c
	if (!ctx.cr6.eq) goto loc_8218525C;
loc_8218527C:
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// stw r6,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r6.u32);
loc_82185284:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8218523c
	if (!ctx.cr6.eq) goto loc_8218523C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82185294"))) PPC_WEAK_FUNC(sub_82185294);
PPC_FUNC_IMPL(__imp__sub_82185294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82185298"))) PPC_WEAK_FUNC(sub_82185298);
PPC_FUNC_IMPL(__imp__sub_82185298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x821852A0;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-32180
	ctx.r23.s64 = -2108948480;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,21628(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd2c
	ctx.lr = 0x821852B8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r25,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r25.u32);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821852f8
	if (ctx.cr6.eq) goto loc_821852F8;
loc_821852D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821852ec
	if (ctx.cr6.eq) goto loc_821852EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821852EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821852EC:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821852d0
	if (!ctx.cr6.eq) goto loc_821852D0;
loc_821852F8:
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82185314
	if (ctx.cr6.eq) goto loc_82185314;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82185314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82185314:
	// stw r25,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r25.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r26,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r9.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// beq 0x821853c0
	if (ctx.cr0.eq) goto loc_821853C0;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_82185338:
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r5,80(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82185364
	if (ctx.cr6.eq) goto loc_82185364;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8218535C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821853b0
	if (ctx.cr6.eq) goto loc_821853B0;
loc_82185364:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821853b0
	if (ctx.cr6.eq) goto loc_821853B0;
loc_8218537C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821853a4
	if (ctx.cr6.eq) goto loc_821853A4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821853a4
	if (ctx.cr6.eq) goto loc_821853A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821853A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821853A4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8218537c
	if (!ctx.cr6.eq) goto loc_8218537C;
loc_821853B0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82185338
	if (ctx.cr6.lt) goto loc_82185338;
loc_821853C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821851b8
	ctx.lr = 0x821853C8;
	sub_821851B8(ctx, base);
	// stw r24,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r24.u32);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82185404
	if (ctx.cr6.eq) goto loc_82185404;
loc_821853DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821853f8
	if (ctx.cr6.eq) goto loc_821853F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821853F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821853F8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821853dc
	if (!ctx.cr6.eq) goto loc_821853DC;
loc_82185404:
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82185420
	if (ctx.cr6.eq) goto loc_82185420;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82185420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82185420:
	// stw r25,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r25.u32);
	// lis r31,-32179
	ctx.r31.s64 = -2108882944;
	// lwz r3,21780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21780);
	// bl 0x8218d9c8
	ctx.lr = 0x82185430;
	sub_8218D9C8(ctx, base);
	// lwz r3,21780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21780);
	// bl 0x8218da30
	ctx.lr = 0x82185438;
	sub_8218DA30(ctx, base);
	// stw r24,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185228
	ctx.lr = 0x82185444;
	sub_82185228(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82185490
	if (ctx.cr6.eq) goto loc_82185490;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82185488
	if (ctx.cr6.eq) goto loc_82185488;
loc_82185468:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8218547c
	if (ctx.cr6.eq) goto loc_8218547C;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_8218547C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82185468
	if (!ctx.cr6.eq) goto loc_82185468;
loc_82185488:
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r24,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r24.u32);
loc_82185490:
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821854ac
	if (ctx.cr6.eq) goto loc_821854AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821854AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821854AC:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821854e4
	if (ctx.cr6.eq) goto loc_821854E4;
loc_821854BC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821854d8
	if (ctx.cr6.eq) goto loc_821854D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821854D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821854D8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x821854bc
	if (!ctx.cr6.eq) goto loc_821854BC;
loc_821854E4:
	// lwz r31,21628(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd3c
	ctx.lr = 0x821854F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r24,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_821854FC"))) PPC_WEAK_FUNC(sub_821854FC);
PPC_FUNC_IMPL(__imp__sub_821854FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82185500"))) PPC_WEAK_FUNC(sub_82185500);
PPC_FUNC_IMPL(__imp__sub_82185500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,21628(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21628);
	// b 0x82184a00
	sub_82184A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82185510"))) PPC_WEAK_FUNC(sub_82185510);
PPC_FUNC_IMPL(__imp__sub_82185510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,21628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21628);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82185538:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82185554
	if (ctx.cr6.eq) goto loc_82185554;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82185538
	if (!ctx.cr6.eq) goto loc_82185538;
	// blr 
	return;
loc_82185554:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r7,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 2;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82185570:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8218558c
	if (ctx.cr6.eq) goto loc_8218558C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82185570
	if (!ctx.cr6.eq) goto loc_82185570;
	// blr 
	return;
loc_8218558C:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r6,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_821855CC:
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bgt cr6,0x821855cc
	if (ctx.cr6.gt) goto loc_821855CC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821855F0"))) PPC_WEAK_FUNC(sub_821855F0);
PPC_FUNC_IMPL(__imp__sub_821855F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821855F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r29,-32180
	ctx.r29.s64 = -2108948480;
	// addi r10,r11,-11620
	ctx.r10.s64 = ctx.r11.s64 + -11620;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r31,21628(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd2c
	ctx.lr = 0x8218561C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r6,r7,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x8218564c
	if (ctx.cr6.lt) goto loc_8218564C;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8218564C:
	// lwz r31,21628(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd3c
	ctx.lr = 0x82185658;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218566C"))) PPC_WEAK_FUNC(sub_8218566C);
PPC_FUNC_IMPL(__imp__sub_8218566C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82185670"))) PPC_WEAK_FUNC(sub_82185670);
PPC_FUNC_IMPL(__imp__sub_82185670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r9,r11,-11620
	ctx.r9.s64 = ctx.r11.s64 + -11620;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,21628(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21628);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82184e28
	sub_82184E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82185694"))) PPC_WEAK_FUNC(sub_82185694);
PPC_FUNC_IMPL(__imp__sub_82185694) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82185698"))) PPC_WEAK_FUNC(sub_82185698);
PPC_FUNC_IMPL(__imp__sub_82185698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r9,r11,-11604
	ctx.r9.s64 = ctx.r11.s64 + -11604;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,21628(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21628);
	// ld r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x821856c8
	if (!ctx.cr6.eq) goto loc_821856C8;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r10,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
loc_821856C8:
	// ld r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821856D8"))) PPC_WEAK_FUNC(sub_821856D8);
PPC_FUNC_IMPL(__imp__sub_821856D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r9,21628(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21628);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82185730
	if (ctx.cr6.eq) goto loc_82185730;
loc_821856FC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82185720
	if (ctx.cr6.eq) goto loc_82185720;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821856fc
	if (!ctx.cr6.eq) goto loc_821856FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
loc_82185720:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r8.u32);
loc_82185730:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8218573C"))) PPC_WEAK_FUNC(sub_8218573C);
PPC_FUNC_IMPL(__imp__sub_8218573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82185740"))) PPC_WEAK_FUNC(sub_82185740);
PPC_FUNC_IMPL(__imp__sub_82185740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82185748;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// addi r9,r11,-11596
	ctx.r9.s64 = ctx.r11.s64 + -11596;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82088650
	ctx.lr = 0x82185778;
	sub_82088650(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// bl 0x82184818
	ctx.lr = 0x82185780;
	sub_82184818(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821857c8
	if (ctx.cr6.eq) goto loc_821857C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x821857e4
	if (ctx.cr6.lt) goto loc_821857E4;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_821857C8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821857e4
	if (ctx.cr6.eq) goto loc_821857E4;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,21628(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21628);
	// bl 0x82184eb0
	ctx.lr = 0x821857E4;
	sub_82184EB0(ctx, base);
loc_821857E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821857F0"))) PPC_WEAK_FUNC(sub_821857F0);
PPC_FUNC_IMPL(__imp__sub_821857F0) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-11596
	ctx.r9.s64 = ctx.r11.s64 + -11596;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82185844
	if (ctx.cr6.eq) goto loc_82185844;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,21628(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21628);
	// bl 0x82184f30
	ctx.lr = 0x82185830;
	sub_82184F30(ctx, base);
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
loc_82185844:
	// bl 0x82088650
	ctx.lr = 0x82185848;
	sub_82088650(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// ld r11,21584(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 21584);
	// cmpld cr6,r11,r3
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, ctx.xer);
	// bne cr6,0x821858d4
	if (!ctx.cr6.eq) goto loc_821858D4;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,21616
	ctx.r5.s64 = ctx.r11.s64 + 21616;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82185870:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821858b0
	if (ctx.cr6.eq) goto loc_821858B0;
	// lwz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// lwz r10,72(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821858b0
	if (ctx.cr6.eq) goto loc_821858B0;
loc_8218588C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821858a8
	if (ctx.cr6.eq) goto loc_821858A8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218588c
	if (!ctx.cr6.eq) goto loc_8218588C;
	// b 0x821858b0
	goto loc_821858B0;
loc_821858A8:
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r7,76(r9)
	PPC_STORE_U32(ctx.r9.u32 + 76, ctx.r7.u32);
loc_821858B0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 + 12;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82185870
	if (ctx.cr6.lt) goto loc_82185870;
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
loc_821858D4:
	// bl 0x82184818
	ctx.lr = 0x821858D8;
	sub_82184818(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218592c
	if (ctx.cr6.eq) goto loc_8218592C;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8218592c
	if (ctx.cr6.eq) goto loc_8218592C;
loc_821858F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8218591c
	if (ctx.cr6.eq) goto loc_8218591C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821858f0
	if (!ctx.cr6.eq) goto loc_821858F0;
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
loc_8218591C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
loc_8218592C:
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

__attribute__((alias("__imp__sub_82185940"))) PPC_WEAK_FUNC(sub_82185940);
PPC_FUNC_IMPL(__imp__sub_82185940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82185948;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82185990
	if (ctx.cr6.eq) goto loc_82185990;
	// lis r29,-32180
	ctx.r29.s64 = -2108948480;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,21628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21628);
	// bl 0x82184f30
	ctx.lr = 0x82185974;
	sub_82184F30(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,21628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21628);
	// bl 0x82184eb0
	ctx.lr = 0x82185988;
	sub_82184EB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82185990:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8218599C"))) PPC_WEAK_FUNC(sub_8218599C);
PPC_FUNC_IMPL(__imp__sub_8218599C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821859A0"))) PPC_WEAK_FUNC(sub_821859A0);
PPC_FUNC_IMPL(__imp__sub_821859A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821859A8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// addi r9,r11,-11588
	ctx.r9.s64 = ctx.r11.s64 + -11588;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82088650
	ctx.lr = 0x821859D8;
	sub_82088650(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// bl 0x82184818
	ctx.lr = 0x821859E0;
	sub_82184818(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82185a28
	if (ctx.cr6.eq) goto loc_82185A28;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82185a44
	if (ctx.cr6.lt) goto loc_82185A44;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82185A28:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82185a44
	if (ctx.cr6.eq) goto loc_82185A44;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,21628(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21628);
	// bl 0x82184fc0
	ctx.lr = 0x82185A44;
	sub_82184FC0(ctx, base);
loc_82185A44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82185A50"))) PPC_WEAK_FUNC(sub_82185A50);
PPC_FUNC_IMPL(__imp__sub_82185A50) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-11588
	ctx.r9.s64 = ctx.r11.s64 + -11588;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82185aa4
	if (ctx.cr6.eq) goto loc_82185AA4;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,21628(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21628);
	// bl 0x82185040
	ctx.lr = 0x82185A90;
	sub_82185040(ctx, base);
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
loc_82185AA4:
	// bl 0x82088650
	ctx.lr = 0x82185AA8;
	sub_82088650(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// ld r11,21584(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 21584);
	// cmpld cr6,r11,r3
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, ctx.xer);
	// bne cr6,0x82185b34
	if (!ctx.cr6.eq) goto loc_82185B34;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r11,21616
	ctx.r5.s64 = ctx.r11.s64 + 21616;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82185AD0:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82185b10
	if (ctx.cr6.eq) goto loc_82185B10;
	// lwz r11,48(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r10,56(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82185b10
	if (ctx.cr6.eq) goto loc_82185B10;
loc_82185AEC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82185b08
	if (ctx.cr6.eq) goto loc_82185B08;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82185aec
	if (!ctx.cr6.eq) goto loc_82185AEC;
	// b 0x82185b10
	goto loc_82185B10;
loc_82185B08:
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r7,60(r9)
	PPC_STORE_U32(ctx.r9.u32 + 60, ctx.r7.u32);
loc_82185B10:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 + 12;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82185ad0
	if (ctx.cr6.lt) goto loc_82185AD0;
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
loc_82185B34:
	// bl 0x82184818
	ctx.lr = 0x82185B38;
	sub_82184818(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82185b8c
	if (ctx.cr6.eq) goto loc_82185B8C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82185b8c
	if (ctx.cr6.eq) goto loc_82185B8C;
loc_82185B50:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82185b7c
	if (ctx.cr6.eq) goto loc_82185B7C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82185b50
	if (!ctx.cr6.eq) goto loc_82185B50;
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
loc_82185B7C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
loc_82185B8C:
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

__attribute__((alias("__imp__sub_82185BA0"))) PPC_WEAK_FUNC(sub_82185BA0);
PPC_FUNC_IMPL(__imp__sub_82185BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82185BA8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82185bf0
	if (ctx.cr6.eq) goto loc_82185BF0;
	// lis r29,-32180
	ctx.r29.s64 = -2108948480;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,21628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21628);
	// bl 0x82185040
	ctx.lr = 0x82185BD4;
	sub_82185040(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,21628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21628);
	// bl 0x82184fc0
	ctx.lr = 0x82185BE8;
	sub_82184FC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82185BF0:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82185BFC"))) PPC_WEAK_FUNC(sub_82185BFC);
PPC_FUNC_IMPL(__imp__sub_82185BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82185C00"))) PPC_WEAK_FUNC(sub_82185C00);
PPC_FUNC_IMPL(__imp__sub_82185C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82185C08;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82185c4c
	if (ctx.cr6.eq) goto loc_82185C4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82184b68
	ctx.lr = 0x82185C28;
	sub_82184B68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82185c3c
	if (ctx.cr6.eq) goto loc_82185C3C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82185C3C;
	sub_82183E40(ctx, base);
loc_82185C3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82185C4C:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82185c64
	if (!ctx.cr6.gt) goto loc_82185C64;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82185C64:
	// bl 0x82183850
	ctx.lr = 0x82185C68;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82185c80
	if (ctx.cr6.eq) goto loc_82185C80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82185C7C;
	sub_82183448(ctx, base);
	// b 0x82185c8c
	goto loc_82185C8C;
loc_82185C80:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82185C8C;
	sub_821845A0(ctx, base);
loc_82185C8C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82185CA8"))) PPC_WEAK_FUNC(sub_82185CA8);
PPC_FUNC_IMPL(__imp__sub_82185CA8) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82185cf4
	if (ctx.cr6.eq) goto loc_82185CF4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82184b68
	ctx.lr = 0x82185CD0;
	sub_82184B68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82185ce4
	if (ctx.cr6.eq) goto loc_82185CE4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82185CE4;
	sub_82183E40(ctx, base);
loc_82185CE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82185CF4:
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

__attribute__((alias("__imp__sub_82185D08"))) PPC_WEAK_FUNC(sub_82185D08);
PPC_FUNC_IMPL(__imp__sub_82185D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82185D10;
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
	// beq cr6,0x82185da8
	if (ctx.cr6.eq) goto loc_82185DA8;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r28,r3,-4
	ctx.r28.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt 0x82185d84
	if (ctx.cr0.lt) goto loc_82185D84;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82185D44:
	// lwzu r11,-16(r31)
	ea = -16 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82185d7c
	if (ctx.cr6.eq) goto loc_82185D7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82184b68
	ctx.lr = 0x82185D5C;
	sub_82184B68(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82185d70
	if (ctx.cr6.eq) goto loc_82185D70;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82185D70;
	sub_82183E40(ctx, base);
loc_82185D70:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82185D7C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82185d44
	if (!ctx.cr0.lt) goto loc_82185D44;
loc_82185D84:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82185d9c
	if (ctx.cr6.eq) goto loc_82185D9C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82183e40
	ctx.lr = 0x82185D9C;
	sub_82183E40(ctx, base);
loc_82185D9C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82185DA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82185ca8
	ctx.lr = 0x82185DB0;
	sub_82185CA8(ctx, base);
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82185dc8
	if (ctx.cr6.eq) goto loc_82185DC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82185DC8;
	sub_82183E40(ctx, base);
loc_82185DC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82185DD4"))) PPC_WEAK_FUNC(sub_82185DD4);
PPC_FUNC_IMPL(__imp__sub_82185DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82185DD8"))) PPC_WEAK_FUNC(sub_82185DD8);
PPC_FUNC_IMPL(__imp__sub_82185DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82185DE0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r3,80
	ctx.r30.s64 = ctx.r3.s64 + 80;
	// addi r10,r11,-11580
	ctx.r10.s64 = ctx.r11.s64 + -11580;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82184b68
	ctx.lr = 0x82185E04;
	sub_82184B68(ctx, base);
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82184b68
	ctx.lr = 0x82185E14;
	sub_82184B68(ctx, base);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82184b68
	ctx.lr = 0x82185E24;
	sub_82184B68(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82088268
	ctx.lr = 0x82185E2C;
	sub_82088268(ctx, base);
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// li r27,0
	ctx.r27.s64 = 0;
	// ld r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// addi r10,r11,21592
	ctx.r10.s64 = ctx.r11.s64 + 21592;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82185E44:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82185e68
	if (ctx.cr6.eq) goto loc_82185E68;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82185e44
	if (ctx.cr6.lt) goto loc_82185E44;
	// b 0x82185e80
	goto loc_82185E80;
loc_82185E68:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,21616
	ctx.r7.s64 = ctx.r11.s64 + 21616;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stdx r27,r8,r10
	PPC_STORE_U64(ctx.r8.u32 + ctx.r10.u32, ctx.r27.u64);
	// stwx r27,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r27.u32);
loc_82185E80:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82185eb8
	if (ctx.cr6.eq) goto loc_82185EB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82184b68
	ctx.lr = 0x82185E98;
	sub_82184B68(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82185eac
	if (ctx.cr6.eq) goto loc_82185EAC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82185EAC;
	sub_82183E40(ctx, base);
loc_82185EAC:
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82185EB8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82185ef0
	if (ctx.cr6.eq) goto loc_82185EF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82184b68
	ctx.lr = 0x82185ED0;
	sub_82184B68(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82185ee4
	if (ctx.cr6.eq) goto loc_82185EE4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82185EE4;
	sub_82183E40(ctx, base);
loc_82185EE4:
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_82185EF0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82185f28
	if (ctx.cr6.eq) goto loc_82185F28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82184b68
	ctx.lr = 0x82185F08;
	sub_82184B68(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82185f1c
	if (ctx.cr6.eq) goto loc_82185F1C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82185F1C;
	sub_82183E40(ctx, base);
loc_82185F1C:
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
loc_82185F28:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82185f44
	if (ctx.cr6.eq) goto loc_82185F44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82185F40;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
loc_82185F44:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82185f54
	if (ctx.cr6.eq) goto loc_82185F54;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
loc_82185F54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82185F5C"))) PPC_WEAK_FUNC(sub_82185F5C);
PPC_FUNC_IMPL(__imp__sub_82185F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82185F60"))) PPC_WEAK_FUNC(sub_82185F60);
PPC_FUNC_IMPL(__imp__sub_82185F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82185F68;
	sub_82248764(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r21,r3,12
	ctx.r21.s64 = ctx.r3.s64 + 12;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8241e39c
	ctx.lr = 0x82185F7C;
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821862cc
	if (ctx.cr6.eq) goto loc_821862CC;
	// lwz r6,88(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 88);
	// addi r7,r22,80
	ctx.r7.s64 = ctx.r22.s64 + 80;
	// lwz r8,80(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 80);
	// li r23,-1
	ctx.r23.s64 = -1;
	// lis r26,-32180
	ctx.r26.s64 = -2108948480;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82186034
	if (ctx.cr6.eq) goto loc_82186034;
loc_82185FA4:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82186028
	if (ctx.cr6.eq) goto loc_82186028;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82185ff0
	if (!ctx.cr6.eq) goto loc_82185FF0;
	// lwz r11,21628(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21628);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r4,r10,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r10.s64;
	// rlwinm r3,r4,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x82185ff0
	if (ctx.cr6.lt) goto loc_82185FF0;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82185FF0:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82186028
	if (ctx.cr6.eq) goto loc_82186028;
loc_82186004:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82186020
	if (ctx.cr6.eq) goto loc_82186020;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82186004
	if (!ctx.cr6.eq) goto loc_82186004;
	// b 0x82186028
	goto loc_82186028;
loc_82186020:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r25,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r25.u32);
loc_82186028:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82185fa4
	if (!ctx.cr6.eq) goto loc_82185FA4;
loc_82186034:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82186080
	if (ctx.cr6.eq) goto loc_82186080;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82186078
	if (ctx.cr6.eq) goto loc_82186078;
loc_82186058:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8218606c
	if (ctx.cr6.eq) goto loc_8218606C;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8218606C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82186058
	if (!ctx.cr6.eq) goto loc_82186058;
loc_82186078:
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r24,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r24.u32);
loc_82186080:
	// lwz r27,72(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + 72);
	// addi r29,r22,64
	ctx.r29.s64 = ctx.r22.s64 + 64;
	// lwz r28,64(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82186154
	if (ctx.cr6.eq) goto loc_82186154;
loc_82186094:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82186148
	if (ctx.cr6.eq) goto loc_82186148;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82186110
	if (!ctx.cr6.eq) goto loc_82186110;
	// lwz r11,21628(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21628);
	// lwz r20,4(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r11,108
	ctx.r31.s64 = ctx.r11.s64 + 108;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821860C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r20,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// lwz r10,32(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x821860fc
	if (ctx.cr6.lt) goto loc_821860FC;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_821860FC:
	// lwz r31,21628(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd3c
	ctx.lr = 0x82186108;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r24,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r24.u32);
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
loc_82186110:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82186148
	if (ctx.cr6.eq) goto loc_82186148;
loc_82186124:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82186140
	if (ctx.cr6.eq) goto loc_82186140;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82186124
	if (!ctx.cr6.eq) goto loc_82186124;
	// b 0x82186148
	goto loc_82186148;
loc_82186140:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r25,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r25.u32);
loc_82186148:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82186094
	if (!ctx.cr6.eq) goto loc_82186094;
loc_82186154:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218619c
	if (ctx.cr6.eq) goto loc_8218619C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82186194
	if (ctx.cr6.eq) goto loc_82186194;
loc_82186174:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82186188
	if (ctx.cr6.eq) goto loc_82186188;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_82186188:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82186174
	if (!ctx.cr6.eq) goto loc_82186174;
loc_82186194:
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// stw r24,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r24.u32);
loc_8218619C:
	// lwz r27,56(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + 56);
	// addi r29,r22,48
	ctx.r29.s64 = ctx.r22.s64 + 48;
	// lwz r28,48(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82186270
	if (ctx.cr6.eq) goto loc_82186270;
loc_821861B0:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82186264
	if (ctx.cr6.eq) goto loc_82186264;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218622c
	if (!ctx.cr6.eq) goto loc_8218622C;
	// lwz r11,21628(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21628);
	// lwz r20,4(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r11,108
	ctx.r31.s64 = ctx.r11.s64 + 108;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821861E0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r11,r20,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// lwz r10,44(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 44);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82186218
	if (ctx.cr6.lt) goto loc_82186218;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82186218:
	// lwz r31,21628(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21628);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8241dd3c
	ctx.lr = 0x82186224;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r24,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r24.u32);
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
loc_8218622C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82186264
	if (ctx.cr6.eq) goto loc_82186264;
loc_82186240:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8218625c
	if (ctx.cr6.eq) goto loc_8218625C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82186240
	if (!ctx.cr6.eq) goto loc_82186240;
	// b 0x82186264
	goto loc_82186264;
loc_8218625C:
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r25,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r25.u32);
loc_82186264:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821861b0
	if (!ctx.cr6.eq) goto loc_821861B0;
loc_82186270:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821862b8
	if (ctx.cr6.eq) goto loc_821862B8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821862b0
	if (ctx.cr6.eq) goto loc_821862B0;
loc_82186290:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x821862a4
	if (ctx.cr6.eq) goto loc_821862A4;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_821862A4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82186290
	if (!ctx.cr6.eq) goto loc_82186290;
loc_821862B0:
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// stw r24,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r24.u32);
loc_821862B8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x821862C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r24,28(r21)
	PPC_STORE_U32(ctx.r21.u32 + 28, ctx.r24.u32);
	// lwz r3,104(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 104);
	// bl 0x82088758
	ctx.lr = 0x821862CC;
	sub_82088758(ctx, base);
loc_821862CC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_821862D4"))) PPC_WEAK_FUNC(sub_821862D4);
PPC_FUNC_IMPL(__imp__sub_821862D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821862D8"))) PPC_WEAK_FUNC(sub_821862D8);
PPC_FUNC_IMPL(__imp__sub_821862D8) {
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
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// addi r30,r11,21616
	ctx.r30.s64 = ctx.r11.s64 + 21616;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821862F8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82186308
	if (ctx.cr6.eq) goto loc_82186308;
	// bl 0x82185f60
	ctx.lr = 0x82186308;
	sub_82185F60(ctx, base);
loc_82186308:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821862f8
	if (ctx.cr6.lt) goto loc_821862F8;
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,21628(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21628);
	// bl 0x82185298
	ctx.lr = 0x82186324;
	sub_82185298(ctx, base);
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

__attribute__((alias("__imp__sub_8218633C"))) PPC_WEAK_FUNC(sub_8218633C);
PPC_FUNC_IMPL(__imp__sub_8218633C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186340"))) PPC_WEAK_FUNC(sub_82186340);
PPC_FUNC_IMPL(__imp__sub_82186340) {
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
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// addi r9,r11,-11620
	ctx.r9.s64 = ctx.r11.s64 + -11620;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,21628(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21628);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82186380
	if (ctx.cr6.eq) goto loc_82186380;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82184e28
	ctx.lr = 0x82186380;
	sub_82184E28(ctx, base);
loc_82186380:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218639c
	if (ctx.cr6.eq) goto loc_8218639C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82186398;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8218639C:
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

__attribute__((alias("__imp__sub_821863B4"))) PPC_WEAK_FUNC(sub_821863B4);
PPC_FUNC_IMPL(__imp__sub_821863B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821863B8"))) PPC_WEAK_FUNC(sub_821863B8);
PPC_FUNC_IMPL(__imp__sub_821863B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,-11604
	ctx.r9.s64 = ctx.r11.s64 + -11604;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821856d8
	sub_821856D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821863D4"))) PPC_WEAK_FUNC(sub_821863D4);
PPC_FUNC_IMPL(__imp__sub_821863D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821863D8"))) PPC_WEAK_FUNC(sub_821863D8);
PPC_FUNC_IMPL(__imp__sub_821863D8) {
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
	// bl 0x821857f0
	ctx.lr = 0x821863F8;
	sub_821857F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82186414
	if (ctx.cr6.eq) goto loc_82186414;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82186410;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82186414:
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

__attribute__((alias("__imp__sub_8218642C"))) PPC_WEAK_FUNC(sub_8218642C);
PPC_FUNC_IMPL(__imp__sub_8218642C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186430"))) PPC_WEAK_FUNC(sub_82186430);
PPC_FUNC_IMPL(__imp__sub_82186430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82186438;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x821864fc
	if (!ctx.cr6.lt) goto loc_821864FC;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218647c
	if (ctx.cr6.eq) goto loc_8218647C;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82185d08
	ctx.lr = 0x82186470;
	sub_82185D08(ctx, base);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_8218647C:
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821864a0
	if (ctx.cr6.gt) goto loc_821864A0;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821864a4
	if (!ctx.cr6.gt) goto loc_821864A4;
loc_821864A0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821864A4:
	// bl 0x82080d68
	ctx.lr = 0x821864A8;
	sub_82080D68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821864e8
	if (ctx.cr6.eq) goto loc_821864E8;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x821864e0
	if (ctx.cr0.lt) goto loc_821864E0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821864CC:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stwu r31,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821864cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821864CC;
loc_821864E0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x821864ec
	goto loc_821864EC;
loc_821864E8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821864EC:
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_821864FC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82186514"))) PPC_WEAK_FUNC(sub_82186514);
PPC_FUNC_IMPL(__imp__sub_82186514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82186518"))) PPC_WEAK_FUNC(sub_82186518);
PPC_FUNC_IMPL(__imp__sub_82186518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82186520;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-11580
	ctx.r10.s64 = ctx.r11.s64 + -11580;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82081590
	ctx.lr = 0x82186550;
	sub_82081590(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// bl 0x82185c00
	ctx.lr = 0x8218656C;
	sub_82185C00(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// bl 0x82185c00
	ctx.lr = 0x82186588;
	sub_82185C00(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// bl 0x82185c00
	ctx.lr = 0x821865A4;
	sub_82185C00(ctx, base);
	// bl 0x82088650
	ctx.lr = 0x821865A8;
	sub_82088650(ctx, base);
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// std r9,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r9.u64);
	// bne cr6,0x821865c8
	if (!ctx.cr6.eq) goto loc_821865C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x821865C0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
loc_821865C8:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-11576
	ctx.r6.s64 = ctx.r11.s64 + -11576;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820882b8
	ctx.lr = 0x821865E4;
	sub_820882B8(ctx, base);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// ld r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// addi r7,r10,21592
	ctx.r7.s64 = ctx.r10.s64 + 21592;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// addi r6,r9,21616
	ctx.r6.s64 = ctx.r9.s64 + 21616;
	// rlwinm r5,r28,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stdx r8,r5,r7
	PPC_STORE_U64(ctx.r5.u32 + ctx.r7.u32, ctx.r8.u64);
	// stwx r31,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82186618"))) PPC_WEAK_FUNC(sub_82186618);
PPC_FUNC_IMPL(__imp__sub_82186618) {
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
	// bl 0x82185dd8
	ctx.lr = 0x82186638;
	sub_82185DD8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82186654
	if (ctx.cr6.eq) goto loc_82186654;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82186650;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82186654:
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

