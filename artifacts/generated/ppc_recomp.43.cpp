#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821FF410"))) PPC_WEAK_FUNC(sub_821FF410);
PPC_FUNC_IMPL(__imp__sub_821FF410) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-8104
	ctx.r9.s64 = ctx.r10.s64 + -8104;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FF430"))) PPC_WEAK_FUNC(sub_821FF430);
PPC_FUNC_IMPL(__imp__sub_821FF430) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-8104
	ctx.r10.s64 = ctx.r11.s64 + -8104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x821ff474
	if (ctx.cr6.eq) goto loc_821FF474;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FF474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FF474:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff49c
	if (ctx.cr6.eq) goto loc_821FF49C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FF49C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FF49C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_821FF4B8"))) PPC_WEAK_FUNC(sub_821FF4B8);
PPC_FUNC_IMPL(__imp__sub_821FF4B8) {
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
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822102c0
	ctx.lr = 0x821FF4D4;
	sub_822102C0(ctx, base);
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

__attribute__((alias("__imp__sub_821FF4EC"))) PPC_WEAK_FUNC(sub_821FF4EC);
PPC_FUNC_IMPL(__imp__sub_821FF4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FF4F0"))) PPC_WEAK_FUNC(sub_821FF4F0);
PPC_FUNC_IMPL(__imp__sub_821FF4F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82210150
	sub_82210150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FF4F8"))) PPC_WEAK_FUNC(sub_821FF4F8);
PPC_FUNC_IMPL(__imp__sub_821FF4F8) {
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
	// bl 0x821ff430
	ctx.lr = 0x821FF518;
	sub_821FF430(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ff534
	if (ctx.cr6.eq) goto loc_821FF534;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x821FF530;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821FF534:
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

__attribute__((alias("__imp__sub_821FF54C"))) PPC_WEAK_FUNC(sub_821FF54C);
PPC_FUNC_IMPL(__imp__sub_821FF54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FF550"))) PPC_WEAK_FUNC(sub_821FF550);
PPC_FUNC_IMPL(__imp__sub_821FF550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821FF558;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff584
	if (ctx.cr6.eq) goto loc_821FF584;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FF584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FF584:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff5ac
	if (ctx.cr6.eq) goto loc_821FF5AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FF5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FF5AC:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82183078
	ctx.lr = 0x821FF5B8;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FF5C4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821FF5C8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821ff5e0
	if (ctx.cr6.eq) goto loc_821FF5E0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82183448
	ctx.lr = 0x821FF5DC;
	sub_82183448(ctx, base);
	// b 0x821ff5e8
	goto loc_821FF5E8;
loc_821FF5E0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821845a0
	ctx.lr = 0x821FF5E8;
	sub_821845A0(ctx, base);
loc_821FF5E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff5fc
	if (ctx.cr6.eq) goto loc_821FF5FC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822101a8
	ctx.lr = 0x821FF5F8;
	sub_822101A8(ctx, base);
	// b 0x821ff600
	goto loc_821FF600;
loc_821FF5FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821FF600:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821FF608;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821ff620
	if (ctx.cr6.eq) goto loc_821FF620;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x821FF61C;
	sub_82183448(ctx, base);
	// b 0x821ff628
	goto loc_821FF628;
loc_821FF620:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x821FF628;
	sub_821845A0(ctx, base);
loc_821FF628:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff63c
	if (ctx.cr6.eq) goto loc_821FF63C;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822103d0
	ctx.lr = 0x821FF638;
	sub_822103D0(ctx, base);
	// b 0x821ff640
	goto loc_821FF640;
loc_821FF63C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821FF640:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822108e8
	ctx.lr = 0x821FF650;
	sub_822108E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FF658;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821FF660"))) PPC_WEAK_FUNC(sub_821FF660);
PPC_FUNC_IMPL(__imp__sub_821FF660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FF66C"))) PPC_WEAK_FUNC(sub_821FF66C);
PPC_FUNC_IMPL(__imp__sub_821FF66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FF670"))) PPC_WEAK_FUNC(sub_821FF670);
PPC_FUNC_IMPL(__imp__sub_821FF670) {
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
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82210720
	ctx.lr = 0x821FF68C;
	sub_82210720(ctx, base);
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

__attribute__((alias("__imp__sub_821FF6A4"))) PPC_WEAK_FUNC(sub_821FF6A4);
PPC_FUNC_IMPL(__imp__sub_821FF6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FF6A8"))) PPC_WEAK_FUNC(sub_821FF6A8);
PPC_FUNC_IMPL(__imp__sub_821FF6A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82210750
	sub_82210750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FF6B0"))) PPC_WEAK_FUNC(sub_821FF6B0);
PPC_FUNC_IMPL(__imp__sub_821FF6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x821FF6B8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff6e4
	if (ctx.cr6.eq) goto loc_821FF6E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FF6E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FF6E4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff70c
	if (ctx.cr6.eq) goto loc_821FF70C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FF70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FF70C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82183078
	ctx.lr = 0x821FF718;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FF724;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x821FF728;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821ff740
	if (ctx.cr6.eq) goto loc_821FF740;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82183448
	ctx.lr = 0x821FF73C;
	sub_82183448(ctx, base);
	// b 0x821ff748
	goto loc_821FF748;
loc_821FF740:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x821845a0
	ctx.lr = 0x821FF748;
	sub_821845A0(ctx, base);
loc_821FF748:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff75c
	if (ctx.cr6.eq) goto loc_821FF75C;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822105f8
	ctx.lr = 0x821FF758;
	sub_822105F8(ctx, base);
	// b 0x821ff760
	goto loc_821FF760;
loc_821FF75C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821FF760:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x82183850
	ctx.lr = 0x821FF768;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821ff780
	if (ctx.cr6.eq) goto loc_821FF780;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82183448
	ctx.lr = 0x821FF77C;
	sub_82183448(ctx, base);
	// b 0x821ff788
	goto loc_821FF788;
loc_821FF780:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x821FF788;
	sub_821845A0(ctx, base);
loc_821FF788:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff79c
	if (ctx.cr6.eq) goto loc_821FF79C;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82210890
	ctx.lr = 0x821FF798;
	sub_82210890(ctx, base);
	// b 0x821ff7a0
	goto loc_821FF7A0;
loc_821FF79C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821FF7A0:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822108e8
	ctx.lr = 0x821FF7B0;
	sub_822108E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821FF7B8;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_821FF7C0"))) PPC_WEAK_FUNC(sub_821FF7C0);
PPC_FUNC_IMPL(__imp__sub_821FF7C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FF7CC"))) PPC_WEAK_FUNC(sub_821FF7CC);
PPC_FUNC_IMPL(__imp__sub_821FF7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FF7D0"))) PPC_WEAK_FUNC(sub_821FF7D0);
PPC_FUNC_IMPL(__imp__sub_821FF7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r10.u32);
	// lfs f0,-8100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,548(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 548, temp.u32);
	// stfs f0,552(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 552, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FF7EC"))) PPC_WEAK_FUNC(sub_821FF7EC);
PPC_FUNC_IMPL(__imp__sub_821FF7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FF7F0"))) PPC_WEAK_FUNC(sub_821FF7F0);
PPC_FUNC_IMPL(__imp__sub_821FF7F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1332(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821ff828
	if (ctx.cr6.eq) goto loc_821FF828;
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821ff828
	if (ctx.cr6.eq) goto loc_821FF828;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x821ff820
	if (ctx.cr6.eq) goto loc_821FF820;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821ff820
	if (ctx.cr6.eq) goto loc_821FF820;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821FF820:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_821FF828:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FF830"))) PPC_WEAK_FUNC(sub_821FF830);
PPC_FUNC_IMPL(__imp__sub_821FF830) {
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
	ctx.lr = 0x821FF840;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821ff858
	if (ctx.cr6.eq) goto loc_821FF858;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82183448
	ctx.lr = 0x821FF854;
	sub_82183448(ctx, base);
	// b 0x821ff860
	goto loc_821FF860;
loc_821FF858:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x821FF860;
	sub_821845A0(ctx, base);
loc_821FF860:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ff884
	if (ctx.cr6.eq) goto loc_821FF884;
	// bl 0x82204400
	ctx.lr = 0x821FF86C;
	sub_82204400(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r3,-764(r11)
	PPC_STORE_U32(ctx.r11.u32 + -764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821FF884:
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -764, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FF8A0"))) PPC_WEAK_FUNC(sub_821FF8A0);
PPC_FUNC_IMPL(__imp__sub_821FF8A0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FF8A8"))) PPC_WEAK_FUNC(sub_821FF8A8);
PPC_FUNC_IMPL(__imp__sub_821FF8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821FF8B0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82185740
	ctx.lr = 0x821FF8D0;
	sub_82185740(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821859a0
	ctx.lr = 0x821FF8E4;
	sub_821859A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-8064
	ctx.r9.s64 = ctx.r11.s64 + -8064;
	// addi r8,r10,-8072
	ctx.r8.s64 = ctx.r10.s64 + -8072;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823c34c0
	ctx.lr = 0x821FF90C;
	sub_823C34C0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// lfs f0,-8100(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8100);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821FF948"))) PPC_WEAK_FUNC(sub_821FF948);
PPC_FUNC_IMPL(__imp__sub_821FF948) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82200ea8
	sub_82200EA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821FF950"))) PPC_WEAK_FUNC(sub_821FF950);
PPC_FUNC_IMPL(__imp__sub_821FF950) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FF958"))) PPC_WEAK_FUNC(sub_821FF958);
PPC_FUNC_IMPL(__imp__sub_821FF958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ff974
	if (!ctx.cr6.eq) goto loc_821FF974;
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821FF974:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FF97C"))) PPC_WEAK_FUNC(sub_821FF97C);
PPC_FUNC_IMPL(__imp__sub_821FF97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FF980"))) PPC_WEAK_FUNC(sub_821FF980);
PPC_FUNC_IMPL(__imp__sub_821FF980) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,544(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 544);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FF988"))) PPC_WEAK_FUNC(sub_821FF988);
PPC_FUNC_IMPL(__imp__sub_821FF988) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,524(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821FF990"))) PPC_WEAK_FUNC(sub_821FF990);
PPC_FUNC_IMPL(__imp__sub_821FF990) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,-8064
	ctx.r8.s64 = ctx.r10.s64 + -8064;
	// addi r7,r9,-8072
	ctx.r7.s64 = ctx.r9.s64 + -8072;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,-8100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,548(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 548, temp.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,552(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 552, temp.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r6,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// bl 0x823c30b8
	ctx.lr = 0x821FF9E4;
	sub_823C30B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82185a50
	ctx.lr = 0x821FF9EC;
	sub_82185A50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x821FF9F4;
	sub_821857F0(ctx, base);
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

__attribute__((alias("__imp__sub_821FFA0C"))) PPC_WEAK_FUNC(sub_821FFA0C);
PPC_FUNC_IMPL(__imp__sub_821FFA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FFA10"))) PPC_WEAK_FUNC(sub_821FFA10);
PPC_FUNC_IMPL(__imp__sub_821FFA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x821FFA18;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821ffa38
	if (!ctx.cr6.eq) goto loc_821FFA38;
loc_821FFA2C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_821FFA38:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821ffa2c
	if (ctx.cr6.eq) goto loc_821FFA2C;
	// lbz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r25,r10,-5920
	ctx.r25.s64 = ctx.r10.s64 + -5920;
	// beq cr6,0x821ffa8c
	if (ctx.cr6.eq) goto loc_821FFA8C;
loc_821FFA60:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x821ffa8c
	if (!ctx.cr6.lt) goto loc_821FFA8C;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r10,r9,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ffacc
	if (ctx.cr6.eq) goto loc_821FFACC;
	// lbzux r10,r30,r10
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ffa60
	if (!ctx.cr6.eq) goto loc_821FFA60;
loc_821FFA8C:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ffb14
	if (ctx.cr6.eq) goto loc_821FFB14;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// li r26,42
	ctx.r26.s64 = 42;
loc_821FFAA8:
	// lwzx r31,r11,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x821ffb28
	if (!ctx.cr6.lt) goto loc_821FFB28;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821ffad8
	if (!ctx.cr6.eq) goto loc_821FFAD8;
	// li r31,1
	ctx.r31.s64 = 1;
	// stb r26,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r26.u8);
	// b 0x821ffae8
	goto loc_821FFAE8;
loc_821FFACC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_821FFAD8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821847a8
	ctx.lr = 0x821FFAE8;
	sub_821847A8(ctx, base);
loc_821FFAE8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x821ffb14
	if (!ctx.cr6.lt) goto loc_821FFB14;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821ffaa8
	if (!ctx.cr6.eq) goto loc_821FFAA8;
loc_821FFB14:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 1;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_821FFB28:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_821FFB34"))) PPC_WEAK_FUNC(sub_821FFB34);
PPC_FUNC_IMPL(__imp__sub_821FFB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FFB38"))) PPC_WEAK_FUNC(sub_821FFB38);
PPC_FUNC_IMPL(__imp__sub_821FFB38) {
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
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821ffb88
	if (!ctx.cr6.eq) goto loc_821FFB88;
	// lwz r11,524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821ffb80
	if (ctx.cr6.eq) goto loc_821FFB80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FFB80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FFB80:
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// b 0x821ffc04
	goto loc_821FFC04;
loc_821FFB88:
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821ffc04
	if (ctx.cr6.eq) goto loc_821FFC04;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ffbc8
	if (!ctx.cr6.eq) goto loc_821FFBC8;
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FFBB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x821ffbfc
	goto loc_821FFBFC;
loc_821FFBC8:
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ffbe8
	if (ctx.cr6.eq) goto loc_821FFBE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FFBE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FFBE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821FFBFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x821FFC04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FFC04:
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

__attribute__((alias("__imp__sub_821FFC1C"))) PPC_WEAK_FUNC(sub_821FFC1C);
PPC_FUNC_IMPL(__imp__sub_821FFC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FFC20"))) PPC_WEAK_FUNC(sub_821FFC20);
PPC_FUNC_IMPL(__imp__sub_821FFC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821FFC28;
	sub_8224878C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,532(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,14876(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x821ffca4
	if (ctx.cr6.eq) goto loc_821FFCA4;
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// fsubs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_821FFCA4:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r10,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r10.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ble cr6,0x821ffcf8
	if (!ctx.cr6.gt) goto loc_821FFCF8;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
loc_821FFCD8:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c3558
	ctx.lr = 0x821FFCE8;
	sub_823C3558(ctx, base);
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ffcd8
	if (ctx.cr6.lt) goto loc_821FFCD8;
loc_821FFCF8:
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ffd50
	if (!ctx.cr6.gt) goto loc_821FFD50;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
loc_821FFD0C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c3558
	ctx.lr = 0x821FFD1C;
	sub_823C3558(ctx, base);
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// blt cr6,0x821ffd0c
	if (ctx.cr6.lt) goto loc_821FFD0C;
loc_821FFD50:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821FFD58"))) PPC_WEAK_FUNC(sub_821FFD58);
PPC_FUNC_IMPL(__imp__sub_821FFD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821FFD60;
	sub_8224878C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,532(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,14876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x821ffddc
	if (ctx.cr6.eq) goto loc_821FFDDC;
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// fsubs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_821FFDDC:
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// li r10,2
	ctx.r10.s64 = 2;
	// stfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r10,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r10.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ble cr6,0x821ffe30
	if (!ctx.cr6.gt) goto loc_821FFE30;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
loc_821FFE10:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c3558
	ctx.lr = 0x821FFE20;
	sub_823C3558(ctx, base);
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ffe10
	if (ctx.cr6.lt) goto loc_821FFE10;
loc_821FFE30:
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ffe64
	if (!ctx.cr6.gt) goto loc_821FFE64;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
loc_821FFE44:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c3558
	ctx.lr = 0x821FFE54;
	sub_823C3558(ctx, base);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ffe44
	if (ctx.cr6.lt) goto loc_821FFE44;
loc_821FFE64:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821FFE6C"))) PPC_WEAK_FUNC(sub_821FFE6C);
PPC_FUNC_IMPL(__imp__sub_821FFE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FFE70"))) PPC_WEAK_FUNC(sub_821FFE70);
PPC_FUNC_IMPL(__imp__sub_821FFE70) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x823c3160
	ctx.lr = 0x821FFE8C;
	sub_823C3160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fff00
	if (ctx.cr6.eq) goto loc_821FFF00;
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ffebc
	if (!ctx.cr6.eq) goto loc_821FFEBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
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
loc_821FFEBC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821fff00
	if (!ctx.cr6.eq) goto loc_821FFF00;
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821fff00
	if (!ctx.cr6.eq) goto loc_821FFF00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821FFEE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lfs f1,-8096(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8096);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821FFF00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FFF00:
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

__attribute__((alias("__imp__sub_821FFF14"))) PPC_WEAK_FUNC(sub_821FFF14);
PPC_FUNC_IMPL(__imp__sub_821FFF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821FFF18"))) PPC_WEAK_FUNC(sub_821FFF18);
PPC_FUNC_IMPL(__imp__sub_821FFF18) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,-1428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fff54
	if (ctx.cr6.eq) goto loc_821FFF54;
	// bl 0x82140420
	ctx.lr = 0x821FFF48;
	sub_82140420(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821fff54
	if (ctx.cr6.eq) goto loc_821FFF54;
	// li r30,1
	ctx.r30.s64 = 1;
loc_821FFF54:
	// lwz r11,1364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1364);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,548(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,11308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11308);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,548(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,552(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f11,1372(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1372, temp.u32);
	// lfs f13,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1392(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1392, temp.u32);
	// lfs f12,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// stfs f12,1376(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1376, temp.u32);
	// lfs f11,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1396(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1396, temp.u32);
	// lfs f10,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1380(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1380, temp.u32);
	// lfs f9,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1400(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1400, temp.u32);
	// lfs f8,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,1384(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1384, temp.u32);
	// lfs f7,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1404(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1404, temp.u32);
	// lfs f6,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1388(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1388, temp.u32);
	// lfs f5,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,1408(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
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

__attribute__((alias("__imp__sub_821FFFE0"))) PPC_WEAK_FUNC(sub_821FFFE0);
PPC_FUNC_IMPL(__imp__sub_821FFFE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// lwz r10,524(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r4.u32);
	// stw r11,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r11.u32);
	// stw r11,532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 532, ctx.r11.u32);
	// stw r11,1332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1332, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82200008"))) PPC_WEAK_FUNC(sub_82200008);
PPC_FUNC_IMPL(__imp__sub_82200008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,1332(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1332);
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r11,r11,-8096
	ctx.r11.s64 = ctx.r11.s64 + -8096;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x82200094
	if (ctx.cr6.eq) goto loc_82200094;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// lfs f13,14876(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_8220006C:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8220006c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220006C;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stw r10,1332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1332, ctx.r10.u32);
	// bne cr6,0x82200120
	if (!ctx.cr6.eq) goto loc_82200120;
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// beq cr6,0x822000dc
	if (ctx.cr6.eq) goto loc_822000DC;
	// b 0x82200120
	goto loc_82200120;
loc_82200094:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,14876(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14876);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// lfs f0,2148(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_822000C0:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822000c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822000C0;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// stw r10,1332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1332, ctx.r10.u32);
	// bne cr6,0x82200120
	if (!ctx.cr6.eq) goto loc_82200120;
loc_822000DC:
	// lfs f0,1320(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1320);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f10,1312(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1312);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f7,140(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82200120:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r3,1284
	ctx.r3.s64 = ctx.r3.s64 + 1284;
	// bl 0x823c3320
	ctx.lr = 0x8220012C;
	sub_823C3320(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220013C"))) PPC_WEAK_FUNC(sub_8220013C);
PPC_FUNC_IMPL(__imp__sub_8220013C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82200140"))) PPC_WEAK_FUNC(sub_82200140);
PPC_FUNC_IMPL(__imp__sub_82200140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82200148;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82200164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220030c
	if (ctx.cr6.eq) goto loc_8220030C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-8096(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8096);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x8220024c
	if (ctx.cr6.eq) goto loc_8220024C;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82200190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822001A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822001bc
	if (!ctx.cr6.eq) goto loc_822001BC;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822001c0
	if (ctx.cr6.eq) goto loc_822001C0;
loc_822001BC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_822001C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822001D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822001ec
	if (!ctx.cr6.eq) goto loc_822001EC;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822001f0
	if (!ctx.cr6.eq) goto loc_822001F0;
loc_822001EC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_822001F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82200204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220021c
	if (ctx.cr6.eq) goto loc_8220021C;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82200220
	if (!ctx.cr6.eq) goto loc_82200220;
loc_8220021C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82200220:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82200230
	if (ctx.cr6.eq) goto loc_82200230;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82200238
	if (!ctx.cr6.eq) goto loc_82200238;
loc_82200230:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220030c
	if (ctx.cr6.eq) goto loc_8220030C;
loc_82200238:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82200008
	ctx.lr = 0x82200244;
	sub_82200008(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8220024C:
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82200258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8220026C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82200284
	if (!ctx.cr6.eq) goto loc_82200284;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82200288
	if (!ctx.cr6.eq) goto loc_82200288;
loc_82200284:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82200288:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220029C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822002b4
	if (!ctx.cr6.eq) goto loc_822002B4;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822002b8
	if (ctx.cr6.eq) goto loc_822002B8;
loc_822002B4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_822002B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822002CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822002e4
	if (ctx.cr6.eq) goto loc_822002E4;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822002e8
	if (!ctx.cr6.eq) goto loc_822002E8;
loc_822002E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822002E8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822002f8
	if (ctx.cr6.eq) goto loc_822002F8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82200300
	if (!ctx.cr6.eq) goto loc_82200300;
loc_822002F8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220030c
	if (ctx.cr6.eq) goto loc_8220030C;
loc_82200300:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82200008
	ctx.lr = 0x8220030C;
	sub_82200008(ctx, base);
loc_8220030C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82200314"))) PPC_WEAK_FUNC(sub_82200314);
PPC_FUNC_IMPL(__imp__sub_82200314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82200318"))) PPC_WEAK_FUNC(sub_82200318);
PPC_FUNC_IMPL(__imp__sub_82200318) {
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
	// bl 0x821ffe70
	ctx.lr = 0x82200330;
	sub_821FFE70(ctx, base);
	// lwz r11,1324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82200404
	if (ctx.cr6.eq) goto loc_82200404;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823c3160
	ctx.lr = 0x82200344;
	sub_823C3160(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82200404
	if (ctx.cr6.eq) goto loc_82200404;
	// lwz r11,1332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8220038c
	if (!ctx.cr6.eq) goto loc_8220038C;
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822003fc
	if (ctx.cr6.eq) goto loc_822003FC;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82200404
	if (!ctx.cr6.eq) goto loc_82200404;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r10,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r10.u32);
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// b 0x82200400
	goto loc_82200400;
loc_8220038C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82200404
	if (!ctx.cr6.eq) goto loc_82200404;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822003A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822003d4
	if (ctx.cr6.eq) goto loc_822003D4;
	// lwz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82200404
	if (!ctx.cr6.eq) goto loc_82200404;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// b 0x82200400
	goto loc_82200400;
loc_822003D4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822003fc
	if (ctx.cr6.eq) goto loc_822003FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82200008
	ctx.lr = 0x822003E8;
	sub_82200008(ctx, base);
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
loc_822003FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82200400:
	// stw r11,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r11.u32);
loc_82200404:
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

__attribute__((alias("__imp__sub_82200418"))) PPC_WEAK_FUNC(sub_82200418);
PPC_FUNC_IMPL(__imp__sub_82200418) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// addi r9,r11,-7992
	ctx.r9.s64 = ctx.r11.s64 + -7992;
	// addi r8,r10,-8000
	ctx.r8.s64 = ctx.r10.s64 + -8000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r3,-760(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82200474
	if (ctx.cr6.eq) goto loc_82200474;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220046C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-760(r30)
	PPC_STORE_U32(ctx.r30.u32 + -760, ctx.r11.u32);
loc_82200474:
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// bl 0x823c3048
	ctx.lr = 0x8220047C;
	sub_823C3048(ctx, base);
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// bl 0x821b1d48
	ctx.lr = 0x82200484;
	sub_821B1D48(ctx, base);
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// bl 0x823c3048
	ctx.lr = 0x8220048C;
	sub_823C3048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ff990
	ctx.lr = 0x82200494;
	sub_821FF990(ctx, base);
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

__attribute__((alias("__imp__sub_822004AC"))) PPC_WEAK_FUNC(sub_822004AC);
PPC_FUNC_IMPL(__imp__sub_822004AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822004B0"))) PPC_WEAK_FUNC(sub_822004B0);
PPC_FUNC_IMPL(__imp__sub_822004B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82201928
	sub_82201928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822004B8"))) PPC_WEAK_FUNC(sub_822004B8);
PPC_FUNC_IMPL(__imp__sub_822004B8) {
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
	// bl 0x821ffb38
	ctx.lr = 0x822004D0;
	sub_821FFB38(ctx, base);
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822004EC"))) PPC_WEAK_FUNC(sub_822004EC);
PPC_FUNC_IMPL(__imp__sub_822004EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822004F0"))) PPC_WEAK_FUNC(sub_822004F0);
PPC_FUNC_IMPL(__imp__sub_822004F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822004F8;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r28,976(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 976);
	// lwz r11,604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// beq cr6,0x822005d8
	if (ctx.cr6.eq) goto loc_822005D8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-8096
	ctx.r31.s64 = ctx.r11.s64 + -8096;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bne cr6,0x822005a0
	if (!ctx.cr6.eq) goto loc_822005A0;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f13,-8100(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8220056C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8220056c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220056C;
	// lwz r11,608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// lwz r3,4892(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4892);
	// addi r11,r11,1256
	ctx.r11.s64 = ctx.r11.s64 + 1256;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x82106eb0
	ctx.lr = 0x82200590;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822005b8
	if (ctx.cr6.eq) goto loc_822005B8;
	// bl 0x821d38e8
	ctx.lr = 0x8220059C;
	sub_821D38E8(ctx, base);
	// b 0x822005b8
	goto loc_822005B8;
loc_822005A0:
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f13,-7928(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -7928);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_822005AC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822005ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822005AC;
loc_822005B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// stw r11,976(r30)
	PPC_STORE_U32(ctx.r30.u32 + 976, ctx.r11.u32);
	// stw r11,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
	// bne cr6,0x82200768
	if (!ctx.cr6.eq) goto loc_82200768;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// beq cr6,0x82200698
	if (ctx.cr6.eq) goto loc_82200698;
	// b 0x82200768
	goto loc_82200768;
loc_822005D8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r31,r11,-8096
	ctx.r31.s64 = ctx.r11.s64 + -8096;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,2148(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bne cr6,0x82200660
	if (!ctx.cr6.eq) goto loc_82200660;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f13,-8100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8100);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
loc_82200620:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82200620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82200620;
	// lwz r11,608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// lwz r3,4892(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4892);
	// addi r11,r11,1258
	ctx.r11.s64 = ctx.r11.s64 + 1258;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x82106eb0
	ctx.lr = 0x82200644;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82200684
	if (ctx.cr6.eq) goto loc_82200684;
	// bl 0x821d38e8
	ctx.lr = 0x82200650;
	sub_821D38E8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,976(r30)
	PPC_STORE_U32(ctx.r30.u32 + 976, ctx.r11.u32);
	// stw r11,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
	// b 0x82200690
	goto loc_82200690;
loc_82200660:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,-7928(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7928);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_82200678:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82200678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82200678;
loc_82200684:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,976(r30)
	PPC_STORE_U32(ctx.r30.u32 + 976, ctx.r11.u32);
	// stw r11,532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 532, ctx.r11.u32);
loc_82200690:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x82200768
	if (!ctx.cr6.eq) goto loc_82200768;
loc_82200698:
	// lfs f0,964(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 964);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 604);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f10,956(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,948(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 948);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bne cr6,0x82200768
	if (!ctx.cr6.eq) goto loc_82200768;
	// lwz r11,608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82200708
	if (!ctx.cr6.eq) goto loc_82200708;
	// addi r10,r11,1256
	ctx.r10.s64 = ctx.r11.s64 + 1256;
	// addi r11,r11,1258
	ctx.r11.s64 = ctx.r11.s64 + 1258;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// b 0x82200718
	goto loc_82200718;
loc_82200708:
	// addi r10,r11,1258
	ctx.r10.s64 = ctx.r11.s64 + 1258;
	// addi r11,r11,1256
	ctx.r11.s64 = ctx.r11.s64 + 1256;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
loc_82200718:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4892(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4892);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x82106eb0
	ctx.lr = 0x82200728;
	sub_82106EB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82200768
	if (ctx.cr6.eq) goto loc_82200768;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lfs f31,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bge cr6,0x82200768
	if (!ctx.cr6.lt) goto loc_82200768;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4892(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4892);
	// bl 0x82106eb0
	ctx.lr = 0x82200760;
	sub_82106EB0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821d2d38
	ctx.lr = 0x82200768;
	sub_821D2D38(ctx, base);
loc_82200768:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,928
	ctx.r3.s64 = ctx.r30.s64 + 928;
	// bl 0x823c3320
	ctx.lr = 0x82200774;
	sub_823C3320(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82200780"))) PPC_WEAK_FUNC(sub_82200780);
PPC_FUNC_IMPL(__imp__sub_82200780) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822007AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82200838
	if (ctx.cr6.eq) goto loc_82200838;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfs f1,-8096(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8096);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x822007e8
	if (ctx.cr6.eq) goto loc_822007E8;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822007D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822004f0
	ctx.lr = 0x822007E4;
	sub_822004F0(ctx, base);
	// b 0x82200844
	goto loc_82200844;
loc_822007E8:
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822007F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,520(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82200828
	if (ctx.cr6.eq) goto loc_82200828;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82200828
	if (ctx.cr6.eq) goto loc_82200828;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82200820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82200844
	if (ctx.cr6.eq) goto loc_82200844;
loc_82200828:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822004f0
	ctx.lr = 0x82200834;
	sub_822004F0(ctx, base);
	// b 0x82200844
	goto loc_82200844;
loc_82200838:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82200844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82200844:
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

__attribute__((alias("__imp__sub_8220085C"))) PPC_WEAK_FUNC(sub_8220085C);
PPC_FUNC_IMPL(__imp__sub_8220085C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82200860"))) PPC_WEAK_FUNC(sub_82200860);
PPC_FUNC_IMPL(__imp__sub_82200860) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 540, ctx.r4.u32);
	// stw r11,544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 544, ctx.r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82200888"))) PPC_WEAK_FUNC(sub_82200888);
PPC_FUNC_IMPL(__imp__sub_82200888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220088C"))) PPC_WEAK_FUNC(sub_8220088C);
PPC_FUNC_IMPL(__imp__sub_8220088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82200890"))) PPC_WEAK_FUNC(sub_82200890);
PPC_FUNC_IMPL(__imp__sub_82200890) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821ffc20
	ctx.lr = 0x822008B0;
	sub_821FFC20(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822008C0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822008c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822008C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x822008e8
	if (ctx.cr6.eq) goto loc_822008E8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x822008ec
	goto loc_822008EC;
loc_822008E8:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_822008EC:
	// lwz r11,4896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4896);
	// fdivs f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subfic r9,r11,596
	ctx.xer.ca = ctx.r11.u32 <= 596;
	ctx.r9.s64 = 596 - ctx.r11.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfs f13,7884(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7884);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82200928
	if (!ctx.cr6.lt) goto loc_82200928;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82200928:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// lfs f13,-7924(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7924);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f12,f13,f12,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x823c3320
	ctx.lr = 0x82200948;
	sub_823C3320(ctx, base);
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

__attribute__((alias("__imp__sub_82200960"))) PPC_WEAK_FUNC(sub_82200960);
PPC_FUNC_IMPL(__imp__sub_82200960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82200968;
	sub_82248788(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82249928
	ctx.lr = 0x82200970;
	sub_82249928(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x821ffd58
	ctx.lr = 0x82200980;
	sub_821FFD58(ctx, base);
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82200a58
	if (!ctx.cr6.gt) goto loc_82200A58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r28,r30,556
	ctx.r28.s64 = ctx.r30.s64 + 556;
	// addi r31,r30,60
	ctx.r31.s64 = ctx.r30.s64 + 60;
	// lfs f28,-7924(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7924);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,-8100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8100);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f29.f64 = double(temp.f32);
loc_822009B0:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822009C0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822009c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822009C0;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// beq cr6,0x822009e0
	if (ctx.cr6.eq) goto loc_822009E0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x822009e4
	goto loc_822009E4;
loc_822009E0:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_822009E4:
	// fdivs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lwz r11,4896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4896);
	// subfic r11,r11,596
	ctx.xer.ca = ctx.r11.u32 <= 596;
	ctx.r11.s64 = 596 - ctx.r11.s64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// bge cr6,0x82200a00
	if (!ctx.cr6.lt) goto loc_82200A00;
	// li r11,20
	ctx.r11.s64 = 20;
loc_82200A00:
	// subfic r10,r11,678
	ctx.xer.ca = ctx.r11.u32 <= 678;
	ctx.r10.s64 = 678 - ctx.r11.s64;
	// stfs f28,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmadds f7,f8,f0,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x823c3320
	ctx.lr = 0x82200A44;
	sub_823C3320(ctx, base);
	// lwz r7,528(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822009b0
	if (ctx.cr6.lt) goto loc_822009B0;
loc_82200A58:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82249974
	ctx.lr = 0x82200A64;
	sub_82249974(ctx, base);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82200A68"))) PPC_WEAK_FUNC(sub_82200A68);
PPC_FUNC_IMPL(__imp__sub_82200A68) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821ffc20
	ctx.lr = 0x82200A88;
	sub_821FFC20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4916(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4916);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// lfs f10,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,4920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4920);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fdivs f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x823c3320
	ctx.lr = 0x82200AD8;
	sub_823C3320(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82200AF0"))) PPC_WEAK_FUNC(sub_82200AF0);
PPC_FUNC_IMPL(__imp__sub_82200AF0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821ffd58
	ctx.lr = 0x82200B10;
	sub_821FFD58(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4916(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4916);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,4920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4920);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fdivs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x823c3320
	ctx.lr = 0x82200B58;
	sub_823C3320(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82200B70"))) PPC_WEAK_FUNC(sub_82200B70);
PPC_FUNC_IMPL(__imp__sub_82200B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82200B78;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821ff8a8
	ctx.lr = 0x82200B90;
	sub_821FF8A8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-7912
	ctx.r9.s64 = ctx.r11.s64 + -7912;
	// addi r8,r10,-7920
	ctx.r8.s64 = ctx.r10.s64 + -7920;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r31,r30,556
	ctx.r31.s64 = ctx.r30.s64 + 556;
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r27,-32254
	ctx.r27.s64 = -2113798144;
loc_82200BB8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c2ff0
	ctx.lr = 0x82200BC4;
	sub_823C2FF0(ctx, base);
	// lfs f0,-8096(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -8096);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// bge 0x82200bb8
	if (!ctx.cr0.lt) goto loc_82200BB8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f0,608(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 608, temp.u32);
	// li r10,58
	ctx.r10.s64 = 58;
	// li r9,59
	ctx.r9.s64 = 59;
	// stw r10,612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 612, ctx.r10.u32);
	// li r4,512
	ctx.r4.s64 = 512;
	// stw r9,672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 672, ctx.r9.u32);
	// addi r3,r30,676
	ctx.r3.s64 = ctx.r30.s64 + 676;
	// lfs f0,-8088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8088);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,668(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 668, temp.u32);
	// bl 0x822aa648
	ctx.lr = 0x82200C0C;
	sub_822AA648(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,1188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1188, ctx.r28.u32);
	// lfs f0,2148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1192(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1192, temp.u32);
	// stfs f0,1196(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1196, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82200C2C"))) PPC_WEAK_FUNC(sub_82200C2C);
PPC_FUNC_IMPL(__imp__sub_82200C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82200C30"))) PPC_WEAK_FUNC(sub_82200C30);
PPC_FUNC_IMPL(__imp__sub_82200C30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82201c28
	sub_82201C28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82200C38"))) PPC_WEAK_FUNC(sub_82200C38);
PPC_FUNC_IMPL(__imp__sub_82200C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82200C40;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-7912
	ctx.r9.s64 = ctx.r11.s64 + -7912;
	// addi r8,r10,-7920
	ctx.r8.s64 = ctx.r10.s64 + -7920;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,676
	ctx.r31.s64 = ctx.r3.s64 + 676;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82200C68:
	// addi r31,r31,-60
	ctx.r31.s64 = ctx.r31.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3048
	ctx.lr = 0x82200C74;
	sub_823C3048(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82200c68
	if (!ctx.cr0.lt) goto loc_82200C68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ff990
	ctx.lr = 0x82200C84;
	sub_821FF990(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82200C8C"))) PPC_WEAK_FUNC(sub_82200C8C);
PPC_FUNC_IMPL(__imp__sub_82200C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82200C90"))) PPC_WEAK_FUNC(sub_82200C90);
PPC_FUNC_IMPL(__imp__sub_82200C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82200C98;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82200CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82200df4
	if (ctx.cr6.eq) goto loc_82200DF4;
	// bl 0x82163728
	ctx.lr = 0x82200CC0;
	sub_82163728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82200df4
	if (ctx.cr6.eq) goto loc_82200DF4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82200df4
	if (ctx.cr6.eq) goto loc_82200DF4;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82200df4
	if (ctx.cr6.eq) goto loc_82200DF4;
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82200df4
	if (ctx.cr6.eq) goto loc_82200DF4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lfs f13,-8100(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// beq cr6,0x82200d20
	if (ctx.cr6.eq) goto loc_82200D20;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82200d28
	if (!ctx.cr6.eq) goto loc_82200D28;
loc_82200D20:
	// lfs f0,560(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_82200D28:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f11,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f11.f64 = double(temp.f32);
	// bne cr6,0x82200d3c
	if (!ctx.cr6.eq) goto loc_82200D3C;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_82200D3C:
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,212(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 212, temp.u32);
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82200d68
	if (ctx.cr6.eq) goto loc_82200D68;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82200d70
	if (!ctx.cr6.eq) goto loc_82200D70;
loc_82200D68:
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_82200D70:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82200d7c
	if (!ctx.cr6.eq) goto loc_82200D7C;
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_82200D7C:
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,212(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 212, temp.u32);
	// lwz r3,-7488(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -7488);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821addc0
	ctx.lr = 0x82200DA0;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x82200DAC;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x82200DBC;
	sub_821AD600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad498
	ctx.lr = 0x82200DC8;
	sub_821AD498(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,366
	ctx.r4.s64 = 366;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210a9b0
	ctx.lr = 0x82200DDC;
	sub_8210A9B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821ad600
	ctx.lr = 0x82200DE8;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82200DF4;
	sub_821AD498(ctx, base);
loc_82200DF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82200DFC"))) PPC_WEAK_FUNC(sub_82200DFC);
PPC_FUNC_IMPL(__imp__sub_82200DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82200E00"))) PPC_WEAK_FUNC(sub_82200E00);
PPC_FUNC_IMPL(__imp__sub_82200E00) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82200e8c
	if (ctx.cr6.eq) goto loc_82200E8C;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82200e8c
	if (ctx.cr6.eq) goto loc_82200E8C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r30,r11,15104
	ctx.xer.ca = ctx.r11.u32 > 4294952191;
	ctx.r30.s64 = ctx.r11.s64 + 15104;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82200e8c
	if (ctx.cr0.eq) goto loc_82200E8C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8210b698
	ctx.lr = 0x82200E48;
	sub_8210B698(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f1,1196(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1196, temp.u32);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,-8084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stw r8,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r8.u32);
	// lfs f13,1196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,9532(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9532);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// stfs f0,1192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1192, temp.u32);
	// blt cr6,0x82200e8c
	if (ctx.cr6.lt) goto loc_82200E8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r11.u32);
loc_82200E8C:
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

__attribute__((alias("__imp__sub_82200EA4"))) PPC_WEAK_FUNC(sub_82200EA4);
PPC_FUNC_IMPL(__imp__sub_82200EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82200EA8"))) PPC_WEAK_FUNC(sub_82200EA8);
PPC_FUNC_IMPL(__imp__sub_82200EA8) {
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
	// bl 0x821ff990
	ctx.lr = 0x82200EC8;
	sub_821FF990(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82200ee4
	if (ctx.cr6.eq) goto loc_82200EE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82200EE0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82200EE4:
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

__attribute__((alias("__imp__sub_82200EFC"))) PPC_WEAK_FUNC(sub_82200EFC);
PPC_FUNC_IMPL(__imp__sub_82200EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82200F00"))) PPC_WEAK_FUNC(sub_82200F00);
PPC_FUNC_IMPL(__imp__sub_82200F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82200F08;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,1048(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1048);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82200f3c
	if (!ctx.cr6.eq) goto loc_82200F3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82200F3C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// bne cr6,0x82200f54
	if (!ctx.cr6.eq) goto loc_82200F54;
	// lwz r26,400(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
loc_82200F54:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stw r4,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r4.u32);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// ori r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 | 32;
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r10,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r9,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r9.u32);
	// lwz r27,392(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// bl 0x821d9c10
	ctx.lr = 0x82200F80;
	sub_821D9C10(ctx, base);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,552(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 552);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,548(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 548);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,148(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// lfs f3,-8100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8100);
	ctx.f3.f64 = double(temp.f32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82200FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9508
	ctx.lr = 0x82200FB0;
	sub_821D9508(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82200fbc
	if (!ctx.cr6.eq) goto loc_82200FBC;
	// stw r26,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r26.u32);
loc_82200FBC:
	// stw r27,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82200FC8"))) PPC_WEAK_FUNC(sub_82200FC8);
PPC_FUNC_IMPL(__imp__sub_82200FC8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r30.u32);
	// lfs f0,-8100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,548(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 548, temp.u32);
	// stfs f0,552(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 552, temp.u32);
	// bl 0x821fff18
	ctx.lr = 0x82200FFC;
	sub_821FFF18(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,1336
	ctx.r3.s64 = ctx.r31.s64 + 1336;
	// bl 0x822aa648
	ctx.lr = 0x82201008;
	sub_822AA648(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r4,725
	ctx.r4.s64 = 725;
	// stw r9,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r9.u32);
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1360, temp.u32);
	// bl 0x822aa648
	ctx.lr = 0x82201028;
	sub_822AA648(ctx, base);
	// stw r30,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82201044"))) PPC_WEAK_FUNC(sub_82201044);
PPC_FUNC_IMPL(__imp__sub_82201044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82201048"))) PPC_WEAK_FUNC(sub_82201048);
PPC_FUNC_IMPL(__imp__sub_82201048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82201050;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82201618
	if (ctx.cr6.eq) goto loc_82201618;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82201618
	if (ctx.cr6.lt) goto loc_82201618;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bge cr6,0x82201618
	if (!ctx.cr6.lt) goto loc_82201618;
	// mulli r11,r5,145
	ctx.r11.s64 = ctx.r5.s64 * 145;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r26,r28,556
	ctx.r26.s64 = ctx.r28.s64 + 556;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8218c4b8
	ctx.lr = 0x82201090;
	sub_8218C4B8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8218c4b8
	ctx.lr = 0x82201098;
	sub_8218C4B8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x822010c8
	if (ctx.cr6.lt) goto loc_822010C8;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// bge cr6,0x822010c8
	if (!ctx.cr6.lt) goto loc_822010C8;
	// addi r11,r29,343
	ctx.r11.s64 = ctx.r29.s64 + 343;
	// lfs f0,548(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r29,348
	ctx.r10.s64 = ctx.r29.s64 + 348;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// lfs f13,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r8,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
loc_822010C8:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r27,r10,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82200f00
	ctx.lr = 0x822010E4;
	sub_82200F00(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// li r8,0
	ctx.r8.s64 = 0;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r8,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r8.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82201130
	if (ctx.cr6.eq) goto loc_82201130;
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82201130
	if (!ctx.cr6.gt) goto loc_82201130;
	// lwz r11,1356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1356);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
loc_82201130:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lfs f13,1360(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// fadds f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lwz r3,-1428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220115c
	if (ctx.cr6.eq) goto loc_8220115C;
	// bl 0x82140420
	ctx.lr = 0x82201150;
	sub_82140420(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8220115c
	if (ctx.cr6.eq) goto loc_8220115C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8220115C:
	// lwz r11,1364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1364);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82201470
	if (!ctx.cr6.eq) goto loc_82201470;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8220117c
	if (ctx.cr6.eq) goto loc_8220117C;
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// b 0x82201180
	goto loc_82201180;
loc_8220117C:
	// lwz r7,528(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
loc_82201180:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f0,-32376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8060);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x822013c4
	if (ctx.cr6.lt) goto loc_822013C4;
	// fnmsubs f11,f31,f13,f0
	ctx.f11.f64 = double(float(-(ctx.f31.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// addi r8,r7,-3
	ctx.r8.s64 = ctx.r7.s64 + -3;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,1332
	ctx.r11.s64 = ctx.r31.s64 + 1332;
loc_822011AC:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82201218
	if (!ctx.cr6.eq) goto loc_82201218;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82201218
	if (ctx.cr6.eq) goto loc_82201218;
	// lwz r6,528(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82201214
	if (!ctx.cr6.gt) goto loc_82201214;
	// lwz r6,1356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1356);
	// lfs f12,1360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	ctx.f12.f64 = double(temp.f32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f12,f13,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f4,96(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f12,f3
	ctx.f12.f64 = double(float(ctx.f3.f64));
	// b 0x82201218
	goto loc_82201218;
loc_82201214:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_82201218:
	// fsubs f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f9,1360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// fmadds f8,f9,f13,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fadds f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// bne cr6,0x8220129c
	if (!ctx.cr6.eq) goto loc_8220129C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8220129c
	if (ctx.cr6.eq) goto loc_8220129C;
	// lwz r6,528(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82201298
	if (!ctx.cr6.gt) goto loc_82201298;
	// lwz r6,1356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1356);
	// lfs f12,1360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	ctx.f12.f64 = double(temp.f32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f12,f13,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f4,112(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f12,f3
	ctx.f12.f64 = double(float(ctx.f3.f64));
	// b 0x8220129c
	goto loc_8220129C;
loc_82201298:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_8220129C:
	// fsubs f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f9,1360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// fmadds f8,f9,f13,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fadds f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// bne cr6,0x8220131c
	if (!ctx.cr6.eq) goto loc_8220131C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8220131c
	if (ctx.cr6.eq) goto loc_8220131C;
	// lwz r6,528(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82201318
	if (!ctx.cr6.gt) goto loc_82201318;
	// lwz r6,1356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1356);
	// lfs f12,1360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	ctx.f12.f64 = double(temp.f32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f10,120(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f12,f13,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f4,128(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f12,f3
	ctx.f12.f64 = double(float(ctx.f3.f64));
	// b 0x8220131c
	goto loc_8220131C;
loc_82201318:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_8220131C:
	// fsubs f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f9,1360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// fmadds f8,f9,f13,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fadds f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f7,12(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// bne cr6,0x822013a0
	if (!ctx.cr6.eq) goto loc_822013A0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x822013a0
	if (ctx.cr6.eq) goto loc_822013A0;
	// lwz r6,528(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8220139c
	if (!ctx.cr6.gt) goto loc_8220139C;
	// lwz r6,1356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1356);
	// lfs f12,1360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	ctx.f12.f64 = double(temp.f32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lfd f10,136(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f12,f13,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// lfd f4,144(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f12,f3
	ctx.f12.f64 = double(float(ctx.f3.f64));
	// b 0x822013a0
	goto loc_822013A0;
loc_8220139C:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_822013A0:
	// fsubs f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,1360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// fmadds f9,f10,f13,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfsu f8,16(r11)
	// blt cr6,0x822011ac
	if (ctx.cr6.lt) goto loc_822011AC;
loc_822013C4:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82201588
	if (!ctx.cr6.lt) goto loc_82201588;
	// addi r11,r9,333
	ctx.r11.s64 = ctx.r9.s64 + 333;
	// fnmsubs f11,f31,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(-(ctx.f31.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822013E4:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82201450
	if (!ctx.cr6.eq) goto loc_82201450;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82201450
	if (ctx.cr6.eq) goto loc_82201450;
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8220144c
	if (!ctx.cr6.gt) goto loc_8220144C;
	// lwz r10,1356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1356);
	// lfs f12,1360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	ctx.f12.f64 = double(temp.f32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f7,f12,f13,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f5.u64);
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f4,128(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f12,f3
	ctx.f12.f64 = double(float(ctx.f3.f64));
	// b 0x82201450
	goto loc_82201450;
loc_8220144C:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_82201450:
	// fsubs f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,1360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmadds f9,f10,f13,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfsu f8,4(r11)
	// bdnz 0x822013e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822013E4;
	// b 0x82201588
	goto loc_82201588;
loc_82201470:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x822014fc
	if (!ctx.cr6.eq) goto loc_822014FC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82201490
	if (!ctx.cr6.eq) goto loc_82201490;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-8084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1336, temp.u32);
	// b 0x82201588
	goto loc_82201588;
loc_82201490:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r11,r11,145
	ctx.r11.s64 = ctx.r11.s64 * 145;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r9,r10,556
	ctx.xer.ca = ctx.r10.u32 > 4294966739;
	ctx.r9.s64 = ctx.r10.s64 + 556;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822014b8
	if (ctx.cr0.eq) goto loc_822014B8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r28,411
	ctx.r4.s64 = ctx.r28.s64 + 411;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82200f00
	ctx.lr = 0x822014B8;
	sub_82200F00(ctx, base);
loc_822014B8:
	// lwz r10,1356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1356);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// addi r9,r29,333
	ctx.r9.s64 = ctx.r29.s64 + 333;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f12,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfsx f9,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// b 0x8220157c
	goto loc_8220157C;
loc_822014FC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82201514
	if (!ctx.cr6.eq) goto loc_82201514;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-8084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1336, temp.u32);
	// b 0x82201588
	goto loc_82201588;
loc_82201514:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r11,r11,145
	ctx.r11.s64 = ctx.r11.s64 * 145;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r9,r10,556
	ctx.xer.ca = ctx.r10.u32 > 4294966739;
	ctx.r9.s64 = ctx.r10.s64 + 556;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8220153c
	if (ctx.cr0.eq) goto loc_8220153C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r28,411
	ctx.r4.s64 = ctx.r28.s64 + 411;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82200f00
	ctx.lr = 0x8220153C;
	sub_82200F00(ctx, base);
loc_8220153C:
	// lwz r11,1356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1356);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// addi r9,r29,333
	ctx.r9.s64 = ctx.r29.s64 + 333;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// lfsx f9,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
loc_8220157C:
	// addi r6,r29,334
	ctx.r6.s64 = ctx.r29.s64 + 334;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f6,r5,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, temp.u32);
loc_82201588:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8220159c
	if (ctx.cr6.eq) goto loc_8220159C;
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
loc_8220159C:
	// stfs f31,1360(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1360, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8218c4b8
	ctx.lr = 0x822015A8;
	sub_8218C4B8(ctx, base);
	// subfic r9,r3,145
	ctx.xer.ca = ctx.r3.u32 <= 145;
	ctx.r9.s64 = 145 - ctx.r3.s64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822015f0
	if (ctx.cr6.eq) goto loc_822015F0;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822015f0
	if (ctx.cr6.eq) goto loc_822015F0;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// addi r10,r10,-5920
	ctx.r10.s64 = ctx.r10.s64 + -5920;
loc_822015D0:
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201608
	if (ctx.cr6.eq) goto loc_82201608;
	// lbzux r11,r4,r11
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822015d0
	if (!ctx.cr6.eq) goto loc_822015D0;
loc_822015F0:
	// addi r8,r9,-3
	ctx.r8.s64 = ctx.r9.s64 + -3;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,145
	ctx.r5.s64 = 145;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ffa10
	ctx.lr = 0x82201608;
	sub_821FFA10(ctx, base);
loc_82201608:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82201618:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82201628"))) PPC_WEAK_FUNC(sub_82201628);
PPC_FUNC_IMPL(__imp__sub_82201628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x82201630;
	sub_8224875C(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82249928
	ctx.lr = 0x82201638;
	sub_82249928(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82201654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82201918
	if (ctx.cr6.eq) goto loc_82201918;
	// lwz r11,504(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82201674
	if (!ctx.cr6.eq) goto loc_82201674;
	// lwz r11,1316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201918
	if (ctx.cr6.eq) goto loc_82201918;
loc_82201674:
	// bl 0x82163728
	ctx.lr = 0x82201678;
	sub_82163728(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82201918
	if (ctx.cr6.eq) goto loc_82201918;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82201918
	if (ctx.cr6.eq) goto loc_82201918;
	// lwz r10,1352(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1352);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,1072
	ctx.r10.s64 = ctx.r10.s64 * 1072;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,1048(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1048);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82201918
	if (ctx.cr6.eq) goto loc_82201918;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r19,400(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// stw r27,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r27.u32);
	// lwz r22,-7488(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821addc0
	ctx.lr = 0x822016CC;
	sub_821ADDC0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821add20
	ctx.lr = 0x822016D8;
	sub_821ADD20(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821ad600
	ctx.lr = 0x822016E8;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821ad498
	ctx.lr = 0x822016F4;
	sub_821AD498(ctx, base);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201918
	if (ctx.cr6.eq) goto loc_82201918;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82201918
	if (ctx.cr6.eq) goto loc_82201918;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// ori r8,r11,52692
	ctx.r8.u64 = ctx.r11.u64 | 52692;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,365
	ctx.r4.s64 = 365;
	// lfs f28,-8100(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8100);
	ctx.f28.f64 = double(temp.f32);
	// stfsx f28,r10,r8
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// bl 0x8210a9b0
	ctx.lr = 0x82201738;
	sub_8210A9B0(ctx, base);
	// lwz r7,512(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 512);
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ble cr6,0x822018fc
	if (!ctx.cr6.gt) goto loc_822018FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r23,r31,48
	ctx.r23.s64 = ctx.r31.s64 + 48;
	// addi r24,r31,420
	ctx.r24.s64 = ctx.r31.s64 + 420;
	// lfs f30,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r29,1320
	ctx.r30.s64 = ctx.r29.s64 + 1320;
	// lfs f31,-7848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7848);
	ctx.f31.f64 = double(temp.f32);
	// addi r28,r29,540
	ctx.r28.s64 = ctx.r29.s64 + 540;
	// lfs f29,8060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8060);
	ctx.f29.f64 = double(temp.f32);
	// addi r26,r29,36
	ctx.r26.s64 = ctx.r29.s64 + 36;
	// li r21,1024
	ctx.r21.s64 = 1024;
	// lis r20,-32182
	ctx.r20.s64 = -2109079552;
loc_82201790:
	// lwz r11,516(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x822017c8
	if (ctx.cr6.eq) goto loc_822017C8;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r9.u64);
	// std r8,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r8.u64);
	// b 0x822017d8
	goto loc_822017D8;
loc_822017C8:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r10.u64);
	// std r9,8(r23)
	PPC_STORE_U64(ctx.r23.u32 + 8, ctx.r9.u64);
loc_822017D8:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r28,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r28.u32);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r27,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r27.u32);
	// stw r27,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r27.u32);
	// stw r21,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r21.u32);
	// stw r27,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r27.u32);
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// bl 0x821d9c10
	ctx.lr = 0x82201800;
	sub_821D9C10(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// lwz r8,148(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82201820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,1348(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1348);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82201878
	if (!ctx.cr6.eq) goto loc_82201878;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9560
	ctx.lr = 0x82201834;
	sub_821D9560(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fnmsubs f2,f12,f29,f31
	ctx.f2.f64 = double(float(-(ctx.f12.f64 * ctx.f29.f64 - ctx.f31.f64)));
	// bctrl 
	ctx.lr = 0x82201868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// b 0x822018d8
	goto loc_822018D8;
loc_82201878:
	// lwz r3,-1428(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822018ac
	if (ctx.cr6.eq) goto loc_822018AC;
	// bl 0x821406a8
	ctx.lr = 0x82201888;
	sub_821406A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822018a4
	if (ctx.cr6.eq) goto loc_822018A4;
	// lwz r11,504(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822018a4
	if (ctx.cr6.eq) goto loc_822018A4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x822018ac
	if (!ctx.cr6.eq) goto loc_822018AC;
loc_822018A4:
	// lwz r3,-1428(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1428);
	// bl 0x82140400
	ctx.lr = 0x822018AC;
	sub_82140400(ctx, base);
loc_822018AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822018CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_822018D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x822018E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,512(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 512);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r26,r26,48
	ctx.r26.s64 = ctx.r26.s64 + 48;
	// addi r28,r28,145
	ctx.r28.s64 = ctx.r28.s64 + 145;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82201790
	if (ctx.cr6.lt) goto loc_82201790;
loc_822018FC:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821ad600
	ctx.lr = 0x82201908;
	sub_821AD600(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821ad498
	ctx.lr = 0x82201914;
	sub_821AD498(ctx, base);
	// stw r19,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r19.u32);
loc_82201918:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82249974
	ctx.lr = 0x82201924;
	sub_82249974(ctx, base);
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_82201928"))) PPC_WEAK_FUNC(sub_82201928);
PPC_FUNC_IMPL(__imp__sub_82201928) {
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
	// bl 0x82200418
	ctx.lr = 0x82201948;
	sub_82200418(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201964
	if (ctx.cr6.eq) goto loc_82201964;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82201960;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82201964:
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

__attribute__((alias("__imp__sub_8220197C"))) PPC_WEAK_FUNC(sub_8220197C);
PPC_FUNC_IMPL(__imp__sub_8220197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82201980"))) PPC_WEAK_FUNC(sub_82201980);
PPC_FUNC_IMPL(__imp__sub_82201980) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r9,r10,-8080
	ctx.r9.s64 = ctx.r10.s64 + -8080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lfs f0,-8100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8100);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r30.u32);
	// stfs f0,548(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 548, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f0,552(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 552, temp.u32);
	// stw r30,880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 880, ctx.r30.u32);
	// lfs f0,-8080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8080);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 888, ctx.r8.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stfs f0,832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 832, temp.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stfs f13,836(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// lwz r4,624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r3,r3,624
	ctx.r3.s64 = ctx.r3.s64 + 624;
	// lfs f3,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-28048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -28048);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-32376(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -32376);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82201A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,406
	ctx.r10.s64 = 406;
	// stw r30,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r30.u32);
	// li r4,1544
	ctx.r4.s64 = 1544;
	// stw r10,4896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4896, ctx.r10.u32);
	// addi r3,r31,988
	ctx.r3.s64 = ctx.r31.s64 + 988;
	// bl 0x822aa648
	ctx.lr = 0x82201A18;
	sub_822AA648(ctx, base);
	// li r4,392
	ctx.r4.s64 = 392;
	// addi r3,r31,2532
	ctx.r3.s64 = ctx.r31.s64 + 2532;
	// bl 0x822aa648
	ctx.lr = 0x82201A24;
	sub_822AA648(ctx, base);
	// li r4,1936
	ctx.r4.s64 = 1936;
	// addi r3,r31,2924
	ctx.r3.s64 = ctx.r31.s64 + 2924;
	// bl 0x822aa648
	ctx.lr = 0x82201A30;
	sub_822AA648(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,4860
	ctx.r3.s64 = ctx.r31.s64 + 4860;
	// bl 0x822aa648
	ctx.lr = 0x82201A3C;
	sub_822AA648(ctx, base);
	// stw r30,4900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4900, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82201A58"))) PPC_WEAK_FUNC(sub_82201A58);
PPC_FUNC_IMPL(__imp__sub_82201A58) {
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
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82201ae8
	if (!ctx.cr6.eq) goto loc_82201AE8;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,1048(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1048);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82201aec
	if (ctx.cr6.eq) goto loc_82201AEC;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// li r4,24999
	ctx.r4.s64 = 24999;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82201AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,348(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// stw r3,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r3.u32);
	// ori r6,r8,32
	ctx.r6.u64 = ctx.r8.u64 | 32;
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// stw r7,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r7.u32);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r6,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r6.u32);
	// bl 0x821d9c10
	ctx.lr = 0x82201ADC;
	sub_821D9C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9560
	ctx.lr = 0x82201AE4;
	sub_821D9560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82201AE8:
	// stw r4,984(r30)
	PPC_STORE_U32(ctx.r30.u32 + 984, ctx.r4.u32);
loc_82201AEC:
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

__attribute__((alias("__imp__sub_82201B04"))) PPC_WEAK_FUNC(sub_82201B04);
PPC_FUNC_IMPL(__imp__sub_82201B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82201B08"))) PPC_WEAK_FUNC(sub_82201B08);
PPC_FUNC_IMPL(__imp__sub_82201B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82201B10;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,524(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82201B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// beq cr6,0x82201be0
	if (ctx.cr6.eq) goto loc_82201BE0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82201be0
	if (ctx.cr6.eq) goto loc_82201BE0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-760(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82201be0
	if (ctx.cr6.eq) goto loc_82201BE0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82204698
	ctx.lr = 0x82201B60;
	sub_82204698(ctx, base);
	// lbz r11,114(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82201a58
	ctx.lr = 0x82201B70;
	sub_82201A58(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,115(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82201B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r1,82
	ctx.r30.s64 = ctx.r1.s64 + 82;
	// li r29,8
	ctx.r29.s64 = 8;
loc_82201B90:
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x82201bbc
	if (ctx.cr6.eq) goto loc_82201BBC;
	// lhz r5,-2(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + -2);
	// cmplwi cr6,r5,65535
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 65535, ctx.xer);
	// beq cr6,0x82201bbc
	if (ctx.cr6.eq) goto loc_82201BBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82201BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82201BBC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82201b90
	if (!ctx.cr0.eq) goto loc_82201B90;
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x82201bdc
	if (!ctx.cr6.gt) goto loc_82201BDC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82201BDC:
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
loc_82201BE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82201BE8"))) PPC_WEAK_FUNC(sub_82201BE8);
PPC_FUNC_IMPL(__imp__sub_82201BE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82201c00
	if (ctx.cr6.eq) goto loc_82201C00;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82200a68
	sub_82200A68(ctx, base);
	return;
loc_82201C00:
	// b 0x82200890
	sub_82200890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82201C04"))) PPC_WEAK_FUNC(sub_82201C04);
PPC_FUNC_IMPL(__imp__sub_82201C04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82201C08"))) PPC_WEAK_FUNC(sub_82201C08);
PPC_FUNC_IMPL(__imp__sub_82201C08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82201c20
	if (ctx.cr6.eq) goto loc_82201C20;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82200af0
	sub_82200AF0(ctx, base);
	return;
loc_82201C20:
	// b 0x82200960
	sub_82200960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82201C24"))) PPC_WEAK_FUNC(sub_82201C24);
PPC_FUNC_IMPL(__imp__sub_82201C24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82201C28"))) PPC_WEAK_FUNC(sub_82201C28);
PPC_FUNC_IMPL(__imp__sub_82201C28) {
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
	// bl 0x82200c38
	ctx.lr = 0x82201C48;
	sub_82200C38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201c64
	if (ctx.cr6.eq) goto loc_82201C64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82201C60;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82201C64:
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

__attribute__((alias("__imp__sub_82201C7C"))) PPC_WEAK_FUNC(sub_82201C7C);
PPC_FUNC_IMPL(__imp__sub_82201C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82201C80"))) PPC_WEAK_FUNC(sub_82201C80);
PPC_FUNC_IMPL(__imp__sub_82201C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82201C88;
	sub_82248774(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r26,r3,604
	ctx.r26.s64 = ctx.r3.s64 + 604;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// lfs f31,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lfs f30,14876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14876);
	ctx.f30.f64 = double(temp.f32);
	// li r23,5
	ctx.r23.s64 = 5;
	// li r24,3
	ctx.r24.s64 = 3;
	// li r25,4
	ctx.r25.s64 = 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r29,-32178
	ctx.r29.s64 = -2108817408;
loc_82201CC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82201d84
	if (ctx.cr6.eq) goto loc_82201D84;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82201e4c
	if (!ctx.cr6.eq) goto loc_82201E4C;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// beq cr6,0x82201d08
	if (ctx.cr6.eq) goto loc_82201D08;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82201d48
	if (!ctx.cr6.eq) goto loc_82201D48;
loc_82201D08:
	// lfs f13,-12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f9,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// lfs f7,-28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsubs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_82201D48:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82201d70
	if (!ctx.cr6.eq) goto loc_82201D70;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r30,568
	ctx.r11.s64 = ctx.r30.s64 + 568;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82201D64:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82201d64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82201D64;
loc_82201D70:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// bl 0x823c3320
	ctx.lr = 0x82201D7C;
	sub_823C3320(ctx, base);
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// b 0x82201e4c
	goto loc_82201E4C;
loc_82201D84:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bne cr6,0x82201db0
	if (!ctx.cr6.eq) goto loc_82201DB0;
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// b 0x82201df4
	goto loc_82201DF4;
loc_82201DB0:
	// lfs f13,-12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f9,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// lfs f7,-28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsubs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_82201DF4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82201e1c
	if (!ctx.cr6.eq) goto loc_82201E1C;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r30,568
	ctx.r11.s64 = ctx.r30.s64 + 568;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82201E10:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82201e10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82201E10;
loc_82201E1C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// bl 0x823c3320
	ctx.lr = 0x82201E28;
	sub_823C3320(ctx, base);
	// lwz r11,-792(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -792);
	// addi r10,r30,676
	ctx.r10.s64 = ctx.r30.s64 + 676;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,15320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15320, ctx.r10.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r28,15340(r7)
	PPC_STORE_U32(ctx.r7.u32 + 15340, ctx.r28.u32);
	// bl 0x82200e00
	ctx.lr = 0x82201E4C;
	sub_82200E00(ctx, base);
loc_82201E4C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// bne 0x82201cc8
	if (!ctx.cr0.eq) goto loc_82201CC8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82201E68"))) PPC_WEAK_FUNC(sub_82201E68);
PPC_FUNC_IMPL(__imp__sub_82201E68) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82201eb4
	if (ctx.cr6.eq) goto loc_82201EB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201eb4
	if (ctx.cr6.eq) goto loc_82201EB4;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// addi r10,r10,-5920
	ctx.r10.s64 = ctx.r10.s64 + -5920;
loc_82201E94:
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82201ebc
	if (ctx.cr6.eq) goto loc_82201EBC;
	// lbzux r11,r4,r11
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82201e94
	if (!ctx.cr6.eq) goto loc_82201E94;
loc_82201EB4:
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x821ffa10
	sub_821FFA10(ctx, base);
	return;
loc_82201EBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82201EC4"))) PPC_WEAK_FUNC(sub_82201EC4);
PPC_FUNC_IMPL(__imp__sub_82201EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82201EC8"))) PPC_WEAK_FUNC(sub_82201EC8);
PPC_FUNC_IMPL(__imp__sub_82201EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82201ED0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821ff8a8
	ctx.lr = 0x82201EE8;
	sub_821FF8A8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-7832
	ctx.r9.s64 = ctx.r11.s64 + -7832;
	// addi r8,r10,-7844
	ctx.r8.s64 = ctx.r10.s64 + -7844;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r3,r31,1284
	ctx.r3.s64 = ctx.r31.s64 + 1284;
	// bl 0x823c2ff0
	ctx.lr = 0x82201F0C;
	sub_823C2FF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r29.u32);
	// bl 0x82200fc8
	ctx.lr = 0x82201F24;
	sub_82200FC8(ctx, base);
	// lwz r7,520(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// lwz r6,524(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82201f44
	if (!ctx.cr6.eq) goto loc_82201F44;
	// stw r29,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r29.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stw r30,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r30.u32);
loc_82201F44:
	// bl 0x821ff830
	ctx.lr = 0x82201F48;
	sub_821FF830(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82201f5c
	if (ctx.cr6.eq) goto loc_82201F5C;
	// bl 0x822044b0
	ctx.lr = 0x82201F5C;
	sub_822044B0(ctx, base);
loc_82201F5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82201F68"))) PPC_WEAK_FUNC(sub_82201F68);
PPC_FUNC_IMPL(__imp__sub_82201F68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82202990
	sub_82202990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82201F70"))) PPC_WEAK_FUNC(sub_82201F70);
PPC_FUNC_IMPL(__imp__sub_82201F70) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-7832
	ctx.r9.s64 = ctx.r11.s64 + -7832;
	// addi r8,r10,-7844
	ctx.r8.s64 = ctx.r10.s64 + -7844;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// bl 0x82200fc8
	ctx.lr = 0x82201FA4;
	sub_82200FC8(ctx, base);
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r3,-764(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82201fd0
	if (ctx.cr6.eq) goto loc_82201FD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82201FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-764(r30)
	PPC_STORE_U32(ctx.r30.u32 + -764, ctx.r11.u32);
loc_82201FD0:
	// addi r3,r31,1284
	ctx.r3.s64 = ctx.r31.s64 + 1284;
	// bl 0x823c3048
	ctx.lr = 0x82201FD8;
	sub_823C3048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ff990
	ctx.lr = 0x82201FE0;
	sub_821FF990(ctx, base);
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

__attribute__((alias("__imp__sub_82201FF8"))) PPC_WEAK_FUNC(sub_82201FF8);
PPC_FUNC_IMPL(__imp__sub_82201FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82202000;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,524(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220201C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// beq cr6,0x822020f0
	if (ctx.cr6.eq) goto loc_822020F0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x822020f0
	if (ctx.cr6.eq) goto loc_822020F0;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822020f0
	if (ctx.cr6.eq) goto loc_822020F0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82204580
	ctx.lr = 0x82202050;
	sub_82204580(ctx, base);
	// lbz r11,103(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lbz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stw r9,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r9.u32);
	// lwz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82202074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r1,82
	ctx.r28.s64 = ctx.r1.s64 + 82;
	// lis r29,-32182
	ctx.r29.s64 = -2109079552;
loc_82202080:
	// lhz r4,-2(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + -2);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x822020b0
	if (ctx.cr6.eq) goto loc_822020B0;
	// lwz r3,-4904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822020A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201048
	ctx.lr = 0x822020B0;
	sub_82201048(ctx, base);
loc_822020B0:
	// lhz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beq cr6,0x822020e0
	if (ctx.cr6.eq) goto loc_822020E0;
	// lwz r3,-4904(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822020D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201048
	ctx.lr = 0x822020E0;
	sub_82201048(ctx, base);
loc_822020E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x82202080
	if (ctx.cr6.lt) goto loc_82202080;
loc_822020F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822020F8"))) PPC_WEAK_FUNC(sub_822020F8);
PPC_FUNC_IMPL(__imp__sub_822020F8) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821ff8a8
	ctx.lr = 0x82202124;
	sub_821FF8A8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-7992
	ctx.r9.s64 = ctx.r11.s64 + -7992;
	// addi r8,r10,-8000
	ctx.r8.s64 = ctx.r10.s64 + -8000;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// addi r3,r31,556
	ctx.r3.s64 = ctx.r31.s64 + 556;
	// bl 0x823c2ff0
	ctx.lr = 0x82202148;
	sub_823C2FF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// bl 0x821b2118
	ctx.lr = 0x8220215C;
	sub_821B2118(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,928
	ctx.r3.s64 = ctx.r31.s64 + 928;
	// bl 0x823c2ff0
	ctx.lr = 0x82202168;
	sub_823C2FF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,4892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4892, ctx.r30.u32);
	// li r8,1240
	ctx.r8.s64 = 1240;
	// stw r30,4904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4904, ctx.r30.u32);
	// addi r10,r31,5032
	ctx.r10.s64 = ctx.r31.s64 + 5032;
	// stw r30,4908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4908, ctx.r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r30,4912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4912, ctx.r30.u32);
	// lfs f0,-29284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29284);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
loc_82202190:
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f0,-80(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -80, temp.u32);
	// stw r7,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r7.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r30,-88(r10)
	PPC_STORE_U32(ctx.r10.u32 + -88, ctx.r30.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822021B0:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// bdnz 0x822021b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822021B0;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r8,1256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1256, ctx.xer);
	// blt cr6,0x82202190
	if (ctx.cr6.lt) goto loc_82202190;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,4860
	ctx.r3.s64 = ctx.r31.s64 + 4860;
	// bl 0x822aa648
	ctx.lr = 0x822021E0;
	sub_822AA648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201980
	ctx.lr = 0x822021E8;
	sub_82201980(ctx, base);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// bl 0x82183850
	ctx.lr = 0x822021F8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82202210
	if (ctx.cr6.eq) goto loc_82202210;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82183448
	ctx.lr = 0x8220220C;
	sub_82183448(ctx, base);
	// b 0x82202218
	goto loc_82202218;
loc_82202210:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821845a0
	ctx.lr = 0x82202218;
	sub_821845A0(ctx, base);
loc_82202218:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82202228
	if (ctx.cr6.eq) goto loc_82202228;
	// bl 0x82204458
	ctx.lr = 0x82202224;
	sub_82204458(ctx, base);
	// b 0x8220222c
	goto loc_8220222C;
loc_82202228:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8220222C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-760
	ctx.r11.s64 = ctx.r11.s64 + -760;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82202244
	if (ctx.cr6.eq) goto loc_82202244;
	// bl 0x822044d0
	ctx.lr = 0x82202244;
	sub_822044D0(ctx, base);
loc_82202244:
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

__attribute__((alias("__imp__sub_82202260"))) PPC_WEAK_FUNC(sub_82202260);
PPC_FUNC_IMPL(__imp__sub_82202260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82202268;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x8220251c
	if (!ctx.cr6.lt) goto loc_8220251C;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// lwz r3,-4904(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822022A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8218c4b8
	ctx.lr = 0x822022A4;
	sub_8218C4B8(ctx, base);
	// lwz r3,-4904(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822022BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,528(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r7,64
	ctx.r7.s64 = 64;
	// mulli r11,r5,193
	ctx.r11.s64 = ctx.r5.s64 * 193;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,193
	ctx.r5.s64 = 193;
	// addi r4,r11,988
	ctx.r4.s64 = ctx.r11.s64 + 988;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201e68
	ctx.lr = 0x822022E0;
	sub_82201E68(ctx, base);
	// lwz r3,-4904(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822022F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8218c4b8
	ctx.lr = 0x822022FC;
	sub_8218C4B8(ctx, base);
	// lwz r3,-4904(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4904);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82202314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,528(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// mulli r11,r5,49
	ctx.r11.s64 = ctx.r5.s64 * 49;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,49
	ctx.r5.s64 = 49;
	// addi r4,r11,2532
	ctx.r4.s64 = ctx.r11.s64 + 2532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201e68
	ctx.lr = 0x82202338;
	sub_82201E68(ctx, base);
	// lis r28,-32178
	ctx.r28.s64 = -2108817408;
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// li r27,1024
	ctx.r27.s64 = 1024;
	// mulli r10,r10,49
	ctx.r10.s64 = ctx.r10.s64 * 49;
	// lwz r11,-780(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -780);
	// lfs f31,-8100(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -8100);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r10,2532
	ctx.r10.s64 = ctx.r10.s64 + 2532;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,1048(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1048);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8220237c
	if (!ctx.cr6.eq) goto loc_8220237C;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x822023e8
	goto loc_822023E8;
loc_8220237C:
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// addi r3,r30,420
	ctx.r3.s64 = ctx.r30.s64 + 420;
	// lwz r26,400(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// ori r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 | 32;
	// stw r29,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r29.u32);
	// stw r10,376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 376, ctx.r10.u32);
	// stw r29,380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 380, ctx.r29.u32);
	// stw r27,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r27.u32);
	// stw r29,388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 388, ctx.r29.u32);
	// stw r9,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r9.u32);
	// lwz r25,392(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// bl 0x821d9c10
	ctx.lr = 0x822023AC;
	sub_821D9C10(ctx, base);
	// stw r29,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r29.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,552(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f1,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,148(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822023D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d9508
	ctx.lr = 0x822023D8;
	sub_821D9508(ctx, base);
	// stw r26,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r26.u32);
	// stw r25,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r25.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,-780(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -780);
loc_822023E8:
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r9,528(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// mulli r11,r9,193
	ctx.r11.s64 = ctx.r9.s64 * 193;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,1048(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1048);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,988
	ctx.r11.s64 = ctx.r11.s64 + 988;
	// bne cr6,0x82202414
	if (!ctx.cr6.eq) goto loc_82202414;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82202478
	goto loc_82202478;
loc_82202414:
	// lwz r10,348(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// addi r3,r30,420
	ctx.r3.s64 = ctx.r30.s64 + 420;
	// lwz r28,400(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stw r27,384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 384, ctx.r27.u32);
	// stw r29,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r29.u32);
	// stw r11,376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 376, ctx.r11.u32);
	// stw r29,380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 380, ctx.r29.u32);
	// stw r29,388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 388, ctx.r29.u32);
	// stw r9,348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 348, ctx.r9.u32);
	// lwz r27,392(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// bl 0x821d9c10
	ctx.lr = 0x82202444;
	sub_821D9C10(ctx, base);
	// stw r29,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r29.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,552(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f1,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,148(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82202468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d9508
	ctx.lr = 0x82202470;
	sub_821D9508(ctx, base);
	// stw r28,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r28.u32);
	// stw r27,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r27.u32);
loc_82202478:
	// add r30,r3,r26
	ctx.r30.u64 = ctx.r3.u64 + ctx.r26.u64;
	// cmpwi cr6,r30,468
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 468, ctx.xer);
	// ble cr6,0x82202500
	if (!ctx.cr6.gt) goto loc_82202500;
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r11,1215
	ctx.r8.s64 = ctx.r11.s64 + 1215;
	// li r7,190
	ctx.r7.s64 = 190;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,193
	ctx.r5.s64 = 193;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,-468
	ctx.r30.s64 = ctx.r30.s64 + -468;
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r4,r11,1216
	ctx.r4.s64 = ctx.r11.s64 + 1216;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// mulli r11,r11,193
	ctx.r11.s64 = ctx.r11.s64 * 193;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r6,r11,795
	ctx.r6.s64 = ctx.r11.s64 + 795;
	// addi r4,r11,988
	ctx.r4.s64 = ctx.r11.s64 + 988;
	// bl 0x82201e68
	ctx.lr = 0x822024DC;
	sub_82201E68(ctx, base);
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// li r7,16
	ctx.r7.s64 = 16;
	// mulli r11,r10,49
	ctx.r11.s64 = ctx.r10.s64 * 49;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,49
	ctx.r5.s64 = 49;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,2483
	ctx.r6.s64 = ctx.r11.s64 + 2483;
	// addi r4,r11,2532
	ctx.r4.s64 = ctx.r11.s64 + 2532;
	// bl 0x82201e68
	ctx.lr = 0x82202500;
	sub_82201E68(ctx, base);
loc_82202500:
	// lwz r11,4896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4896);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82202510
	if (!ctx.cr6.lt) goto loc_82202510;
	// stw r30,4896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4896, ctx.r30.u32);
loc_82202510:
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
loc_8220251C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82202528"))) PPC_WEAK_FUNC(sub_82202528);
PPC_FUNC_IMPL(__imp__sub_82202528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82202530;
	sub_8224877C(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82202574
	if (!ctx.cr6.eq) goto loc_82202574;
	// lbz r11,676(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 676);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// addi r29,r3,676
	ctx.r29.s64 = ctx.r3.s64 + 676;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82202598
	goto loc_82202598;
loc_82202574:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r29,r31,676
	ctx.r29.s64 = ctx.r31.s64 + 676;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfe r26,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r26.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8218a360
	ctx.lr = 0x82202590;
	sub_8218A360(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82202598:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822025bc
	if (ctx.cr6.eq) goto loc_822025BC;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,932
	ctx.r3.s64 = ctx.r31.s64 + 932;
	// bl 0x822aa648
	ctx.lr = 0x822025AC;
	sub_822AA648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_822025BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822025D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822025e8
	if (!ctx.cr6.eq) goto loc_822025E8;
	// stw r28,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r28.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
loc_822025E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,556
	ctx.r30.s64 = ctx.r31.s64 + 556;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8220264c
	if (ctx.cr6.eq) goto loc_8220264C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8220262c
	if (ctx.cr6.eq) goto loc_8220262C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f30,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3058
	ctx.lr = 0x82202614;
	sub_823C3058(ctx, base);
	// stfs f31,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201c80
	ctx.lr = 0x82202624;
	sub_82201C80(ctx, base);
	// stfs f30,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// b 0x8220264c
	goto loc_8220264C;
loc_8220262C:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82202640
	if (ctx.cr6.eq) goto loc_82202640;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8220264c
	if (!ctx.cr6.eq) goto loc_8220264C;
loc_82202640:
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201c80
	ctx.lr = 0x8220264C;
	sub_82201C80(ctx, base);
loc_8220264C:
	// addi r30,r31,616
	ctx.r30.s64 = ctx.r31.s64 + 616;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82202744
	if (ctx.cr6.eq) goto loc_82202744;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x822026c0
	if (ctx.cr6.eq) goto loc_822026C0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8220267c
	if (ctx.cr6.eq) goto loc_8220267C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8218a128
	ctx.lr = 0x82202678;
	sub_8218A128(ctx, base);
	// b 0x82202680
	goto loc_82202680;
loc_8220267C:
	// bl 0x822aa648
	ctx.lr = 0x82202680;
	sub_822AA648(ctx, base);
loc_82202680:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,932
	ctx.r3.s64 = ctx.r31.s64 + 932;
	// bl 0x822aa648
	ctx.lr = 0x8220268C;
	sub_822AA648(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f30,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x823c3058
	ctx.lr = 0x8220269C;
	sub_823C3058(ctx, base);
	// stfs f31,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201c80
	ctx.lr = 0x822026AC;
	sub_82201C80(ctx, base);
	// stfs f30,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_822026C0:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82202700
	if (ctx.cr6.eq) goto loc_82202700;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82202768
	if (!ctx.cr6.gt) goto loc_82202768;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x82202768
	if (ctx.cr6.gt) goto loc_82202768;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,932
	ctx.r3.s64 = ctx.r31.s64 + 932;
	// beq cr6,0x822026f8
	if (ctx.cr6.eq) goto loc_822026F8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8218a128
	ctx.lr = 0x822026F4;
	sub_8218A128(ctx, base);
	// b 0x82202758
	goto loc_82202758;
loc_822026F8:
	// bl 0x822aa648
	ctx.lr = 0x822026FC;
	sub_822AA648(ctx, base);
	// b 0x82202758
	goto loc_82202758;
loc_82202700:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8220272c
	if (ctx.cr6.eq) goto loc_8220272C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8218a128
	ctx.lr = 0x82202718;
	sub_8218A128(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,932
	ctx.r3.s64 = ctx.r31.s64 + 932;
	// bl 0x822aa648
	ctx.lr = 0x82202724;
	sub_822AA648(ctx, base);
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
	// b 0x82202760
	goto loc_82202760;
loc_8220272C:
	// bl 0x822aa648
	ctx.lr = 0x82202730;
	sub_822AA648(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,932
	ctx.r3.s64 = ctx.r31.s64 + 932;
	// bl 0x822aa648
	ctx.lr = 0x8220273C;
	sub_822AA648(ctx, base);
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
	// b 0x82202760
	goto loc_82202760;
loc_82202744:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82202768
	if (ctx.cr6.lt) goto loc_82202768;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x82202768
	if (ctx.cr6.gt) goto loc_82202768;
loc_82202758:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_82202760:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201c80
	ctx.lr = 0x82202768;
	sub_82201C80(ctx, base);
loc_82202768:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82202778"))) PPC_WEAK_FUNC(sub_82202778);
PPC_FUNC_IMPL(__imp__sub_82202778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82202780;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82202798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822027dc
	if (ctx.cr6.eq) goto loc_822027DC;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r30,932
	ctx.r3.s64 = ctx.r30.s64 + 932;
	// bl 0x822aa648
	ctx.lr = 0x822027AC;
	sub_822AA648(ctx, base);
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r31,r30,604
	ctx.r31.s64 = ctx.r30.s64 + 604;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_822027B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822027d0
	if (ctx.cr6.eq) goto loc_822027D0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82201c80
	ctx.lr = 0x822027D0;
	sub_82201C80(ctx, base);
loc_822027D0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// bne 0x822027b8
	if (!ctx.cr0.eq) goto loc_822027B8;
loc_822027DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822027E4"))) PPC_WEAK_FUNC(sub_822027E4);
PPC_FUNC_IMPL(__imp__sub_822027E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822027E8"))) PPC_WEAK_FUNC(sub_822027E8);
PPC_FUNC_IMPL(__imp__sub_822027E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x822027F0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82202808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82202984
	if (ctx.cr6.eq) goto loc_82202984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ffe70
	ctx.lr = 0x82202818;
	sub_821FFE70(ctx, base);
	// addi r31,r30,604
	ctx.r31.s64 = ctx.r30.s64 + 604;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r27,3
	ctx.r27.s64 = 3;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82202828:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822028a0
	if (ctx.cr6.eq) goto loc_822028A0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822028a0
	if (ctx.cr6.eq) goto loc_822028A0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822028a0
	if (ctx.cr6.eq) goto loc_822028A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822028a0
	if (ctx.cr6.eq) goto loc_822028A0;
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822028a0
	if (ctx.cr6.eq) goto loc_822028A0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82202868
	if (!ctx.cr6.eq) goto loc_82202868;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x822028a0
	goto loc_822028A0;
loc_82202868:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822028a0
	if (!ctx.cr6.eq) goto loc_822028A0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r4,r30,932
	ctx.r4.s64 = ctx.r30.s64 + 932;
	// lbz r11,932(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82202894
	if (ctx.cr6.eq) goto loc_82202894;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82202528
	ctx.lr = 0x82202890;
	sub_82202528(ctx, base);
	// b 0x822028a0
	goto loc_822028A0;
loc_82202894:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r30,676
	ctx.r3.s64 = ctx.r30.s64 + 676;
	// bl 0x822aa648
	ctx.lr = 0x822028A0;
	sub_822AA648(ctx, base);
loc_822028A0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// bne 0x82202828
	if (!ctx.cr0.eq) goto loc_82202828;
	// lwz r11,1188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1188);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82202984
	if (ctx.cr6.lt) goto loc_82202984;
	// beq cr6,0x82202944
	if (ctx.cr6.eq) goto loc_82202944;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82202984
	if (!ctx.cr6.lt) goto loc_82202984;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82202984
	if (ctx.cr6.eq) goto loc_82202984;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82202984
	if (ctx.cr6.eq) goto loc_82202984;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r11,r11,15104
	ctx.xer.ca = ctx.r11.u32 > 4294952191;
	ctx.r11.s64 = ctx.r11.s64 + 15104;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82202984
	if (ctx.cr0.eq) goto loc_82202984;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r8,r10,-7560
	ctx.r8.s64 = ctx.r10.s64 + -7560;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,9528(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9528);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,1196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x82202984
	if (!ctx.cr6.lt) goto loc_82202984;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,-8084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r9,1188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1188, ctx.r9.u32);
	// stfs f0,1192(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1192, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82202944:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lfs f13,1192(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1192);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// addi r8,r10,9528
	ctx.r8.s64 = ctx.r10.s64 + 9528;
	// lfs f0,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,1192(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1192, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82202984
	if (ctx.cr6.lt) goto loc_82202984;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,1188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1188, ctx.r10.u32);
	// lfs f0,2148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1192(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1192, temp.u32);
loc_82202984:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8220298C"))) PPC_WEAK_FUNC(sub_8220298C);
PPC_FUNC_IMPL(__imp__sub_8220298C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82202990"))) PPC_WEAK_FUNC(sub_82202990);
PPC_FUNC_IMPL(__imp__sub_82202990) {
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
	// bl 0x82201f70
	ctx.lr = 0x822029B0;
	sub_82201F70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822029cc
	if (ctx.cr6.eq) goto loc_822029CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x822029C8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822029CC:
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

__attribute__((alias("__imp__sub_822029E4"))) PPC_WEAK_FUNC(sub_822029E4);
PPC_FUNC_IMPL(__imp__sub_822029E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822029E8"))) PPC_WEAK_FUNC(sub_822029E8);
PPC_FUNC_IMPL(__imp__sub_822029E8) {
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
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82202a14
	if (!ctx.cr6.eq) goto loc_82202A14;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82202a30
	goto loc_82202A30;
loc_82202A14:
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
	ctx.lr = 0x82202A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82202A30:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82202528
	ctx.lr = 0x82202A3C;
	sub_82202528(ctx, base);
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

__attribute__((alias("__imp__sub_82202A54"))) PPC_WEAK_FUNC(sub_82202A54);
PPC_FUNC_IMPL(__imp__sub_82202A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82202A58"))) PPC_WEAK_FUNC(sub_82202A58);
PPC_FUNC_IMPL(__imp__sub_82202A58) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82202528
	sub_82202528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82202A64"))) PPC_WEAK_FUNC(sub_82202A64);
PPC_FUNC_IMPL(__imp__sub_82202A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82202A68"))) PPC_WEAK_FUNC(sub_82202A68);
PPC_FUNC_IMPL(__imp__sub_82202A68) {
	PPC_FUNC_PROLOGUE();
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82202A70"))) PPC_WEAK_FUNC(sub_82202A70);
PPC_FUNC_IMPL(__imp__sub_82202A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82202A78"))) PPC_WEAK_FUNC(sub_82202A78);
PPC_FUNC_IMPL(__imp__sub_82202A78) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82202AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x823c3468
	ctx.lr = 0x82202AA8;
	sub_823C3468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3ca8
	ctx.lr = 0x82202AB0;
	sub_823C3CA8(ctx, base);
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

__attribute__((alias("__imp__sub_82202AC4"))) PPC_WEAK_FUNC(sub_82202AC4);
PPC_FUNC_IMPL(__imp__sub_82202AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82202AC8"))) PPC_WEAK_FUNC(sub_82202AC8);
PPC_FUNC_IMPL(__imp__sub_82202AC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,588(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// bge 0x82202ae4
	if (!ctx.cr0.lt) goto loc_82202AE4;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// blr 
	return;
loc_82202AE4:
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// blt cr6,0x82202af0
	if (ctx.cr6.lt) goto loc_82202AF0;
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
loc_82202AF0:
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82202AF8"))) PPC_WEAK_FUNC(sub_82202AF8);
PPC_FUNC_IMPL(__imp__sub_82202AF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,588(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// bge 0x82202b14
	if (!ctx.cr0.lt) goto loc_82202B14;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// blr 
	return;
loc_82202B14:
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// blt cr6,0x82202b20
	if (ctx.cr6.lt) goto loc_82202B20;
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
loc_82202B20:
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82202B28"))) PPC_WEAK_FUNC(sub_82202B28);
PPC_FUNC_IMPL(__imp__sub_82202B28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82202ba0
	sub_82202BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82202B30"))) PPC_WEAK_FUNC(sub_82202B30);
PPC_FUNC_IMPL(__imp__sub_82202B30) {
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
	// bl 0x82210fc0
	ctx.lr = 0x82202B48;
	sub_82210FC0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-7632
	ctx.r9.s64 = ctx.r11.s64 + -7632;
	// addi r8,r10,-7768
	ctx.r8.s64 = ctx.r10.s64 + -7768;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,800
	ctx.r6.s64 = 800;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r7,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r7.u32);
	// addi r3,r31,620
	ctx.r3.s64 = ctx.r31.s64 + 620;
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// li r4,4352
	ctx.r4.s64 = 4352;
	// bl 0x822aa648
	ctx.lr = 0x82202B7C;
	sub_822AA648(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821ebaa8
	ctx.lr = 0x82202B84;
	sub_821EBAA8(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x82202B88;
	sub_821EB3E8(ctx, base);
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

__attribute__((alias("__imp__sub_82202BA0"))) PPC_WEAK_FUNC(sub_82202BA0);
PPC_FUNC_IMPL(__imp__sub_82202BA0) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-7632
	ctx.r9.s64 = ctx.r11.s64 + -7632;
	// addi r8,r10,-7768
	ctx.r8.s64 = ctx.r10.s64 + -7768;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82210b00
	ctx.lr = 0x82202BD8;
	sub_82210B00(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82202bf4
	if (ctx.cr6.eq) goto loc_82202BF4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82202BF0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82202BF4:
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

__attribute__((alias("__imp__sub_82202C0C"))) PPC_WEAK_FUNC(sub_82202C0C);
PPC_FUNC_IMPL(__imp__sub_82202C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82202C10"))) PPC_WEAK_FUNC(sub_82202C10);
PPC_FUNC_IMPL(__imp__sub_82202C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82202C18;
	sub_82248770(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r7,r9,19396
	ctx.r7.u64 = ctx.r9.u64 | 19396;
	// lis r8,5
	ctx.r8.s64 = 327680;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ori r6,r8,19652
	ctx.r6.u64 = ctx.r8.u64 | 19652;
	// li r5,20039
	ctx.r5.s64 = 20039;
	// li r4,1333
	ctx.r4.s64 = 1333;
	// stwx r11,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r10,256(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x82106f58
	ctx.lr = 0x82202C60;
	sub_82106F58(ctx, base);
	// li r5,20039
	ctx.r5.s64 = 20039;
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// li r4,1334
	ctx.r4.s64 = 1334;
	// bl 0x82106f58
	ctx.lr = 0x82202C70;
	sub_82106F58(ctx, base);
	// lwz r11,616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 616);
	// li r4,1337
	ctx.r4.s64 = 1337;
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// addi r5,r11,22000
	ctx.r5.s64 = ctx.r11.s64 + 22000;
	// bl 0x82106f58
	ctx.lr = 0x82202C84;
	sub_82106F58(ctx, base);
	// lwz r11,616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 616);
	// lis r31,5
	ctx.r31.s64 = 327680;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r26,r30,-5
	ctx.r26.s64 = ctx.r30.s64 + -327680;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,22020
	ctx.r11.s64 = ctx.r11.s64 + 22020;
	// li r28,1338
	ctx.r28.s64 = 1338;
	// addi r25,r11,-1338
	ctx.r25.s64 = ctx.r11.s64 + -1338;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,11300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// ori r31,r31,14848
	ctx.r31.u64 = ctx.r31.u64 | 14848;
	// addi r26,r26,-14228
	ctx.r26.s64 = ctx.r26.s64 + -14228;
	// li r22,17
	ctx.r22.s64 = 17;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r23,-32182
	ctx.r23.s64 = -2109079552;
	// addi r24,r11,3708
	ctx.r24.s64 = ctx.r11.s64 + 3708;
loc_82202CC8:
	// lwz r3,-4904(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4904);
	// add r4,r25,r28
	ctx.r4.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r29,r26,r31
	ctx.r29.u64 = ctx.r26.u64 + ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82202CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8218a5f0
	ctx.lr = 0x82202CF8;
	sub_8218A5F0(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82210b98
	ctx.lr = 0x82202D0C;
	sub_82210B98(ctx, base);
	// lwz r9,256(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r8.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r27,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r27.u32);
	// lwz r5,256(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f6,104(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// blt cr6,0x82202dc0
	if (ctx.cr6.lt) goto loc_82202DC0;
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r27,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r27.u32);
loc_82202DC0:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne 0x82202cc8
	if (!ctx.cr0.eq) goto loc_82202CC8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82202DDC"))) PPC_WEAK_FUNC(sub_82202DDC);
PPC_FUNC_IMPL(__imp__sub_82202DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82202DE0"))) PPC_WEAK_FUNC(sub_82202DE0);
PPC_FUNC_IMPL(__imp__sub_82202DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82202DE8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82202ea0
	if (ctx.cr6.eq) goto loc_82202EA0;
	// bl 0x82202c10
	ctx.lr = 0x82202E00;
	sub_82202C10(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82202ea0
	if (ctx.cr6.eq) goto loc_82202EA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x82202E18;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x82202E24;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x82202E34;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82202E40;
	sub_821AD498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82202e88
	if (!ctx.cr6.gt) goto loc_82202E88;
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r10,58740
	ctx.r9.u64 = ctx.r10.u64 | 58740;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,407
	ctx.r4.s64 = 407;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfsx f0,r8,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x8210a9b0
	ctx.lr = 0x82202E88;
	sub_8210A9B0(ctx, base);
loc_82202E88:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x82202E94;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82202EA0;
	sub_821AD498(ctx, base);
loc_82202EA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82202EA8"))) PPC_WEAK_FUNC(sub_82202EA8);
PPC_FUNC_IMPL(__imp__sub_82202EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,588(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// bge 0x82202ec4
	if (!ctx.cr0.lt) goto loc_82202EC4;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// blr 
	return;
loc_82202EC4:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// blt cr6,0x82202ed0
	if (ctx.cr6.lt) goto loc_82202ED0;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
loc_82202ED0:
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82202ED8"))) PPC_WEAK_FUNC(sub_82202ED8);
PPC_FUNC_IMPL(__imp__sub_82202ED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,588(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// bge 0x82202ef4
	if (!ctx.cr0.lt) goto loc_82202EF4;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// blr 
	return;
loc_82202EF4:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// blt cr6,0x82202f00
	if (ctx.cr6.lt) goto loc_82202F00;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
loc_82202F00:
	// stw r11,588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82202F08"))) PPC_WEAK_FUNC(sub_82202F08);
PPC_FUNC_IMPL(__imp__sub_82202F08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82202f80
	sub_82202F80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82202F10"))) PPC_WEAK_FUNC(sub_82202F10);
PPC_FUNC_IMPL(__imp__sub_82202F10) {
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
	// bl 0x82210fc0
	ctx.lr = 0x82202F28;
	sub_82210FC0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-7392
	ctx.r9.s64 = ctx.r11.s64 + -7392;
	// addi r8,r10,-7528
	ctx.r8.s64 = ctx.r10.s64 + -7528;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r6,800
	ctx.r6.s64 = 800;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r7,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r7.u32);
	// addi r3,r31,620
	ctx.r3.s64 = ctx.r31.s64 + 620;
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// li r4,4352
	ctx.r4.s64 = 4352;
	// bl 0x822aa648
	ctx.lr = 0x82202F5C;
	sub_822AA648(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821ebaa8
	ctx.lr = 0x82202F64;
	sub_821EBAA8(ctx, base);
	// bl 0x821eb3e8
	ctx.lr = 0x82202F68;
	sub_821EB3E8(ctx, base);
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

__attribute__((alias("__imp__sub_82202F80"))) PPC_WEAK_FUNC(sub_82202F80);
PPC_FUNC_IMPL(__imp__sub_82202F80) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-7392
	ctx.r9.s64 = ctx.r11.s64 + -7392;
	// addi r8,r10,-7528
	ctx.r8.s64 = ctx.r10.s64 + -7528;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82210b00
	ctx.lr = 0x82202FB8;
	sub_82210B00(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82202fd4
	if (ctx.cr6.eq) goto loc_82202FD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82202FD0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82202FD4:
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

__attribute__((alias("__imp__sub_82202FEC"))) PPC_WEAK_FUNC(sub_82202FEC);
PPC_FUNC_IMPL(__imp__sub_82202FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82202FF0"))) PPC_WEAK_FUNC(sub_82202FF0);
PPC_FUNC_IMPL(__imp__sub_82202FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82202FF8;
	sub_82248770(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lis r9,5
	ctx.r9.s64 = 327680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r7,r9,19396
	ctx.r7.u64 = ctx.r9.u64 | 19396;
	// lis r8,5
	ctx.r8.s64 = 327680;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ori r6,r8,19652
	ctx.r6.u64 = ctx.r8.u64 | 19652;
	// li r5,20040
	ctx.r5.s64 = 20040;
	// li r4,1333
	ctx.r4.s64 = 1333;
	// stwx r11,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r10,256(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x82106f58
	ctx.lr = 0x82203040;
	sub_82106F58(ctx, base);
	// li r5,20040
	ctx.r5.s64 = 20040;
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// li r4,1334
	ctx.r4.s64 = 1334;
	// bl 0x82106f58
	ctx.lr = 0x82203050;
	sub_82106F58(ctx, base);
	// lwz r11,616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 616);
	// li r4,1337
	ctx.r4.s64 = 1337;
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// addi r5,r11,23000
	ctx.r5.s64 = ctx.r11.s64 + 23000;
	// bl 0x82106f58
	ctx.lr = 0x82203064;
	sub_82106F58(ctx, base);
	// lwz r11,616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 616);
	// lis r31,5
	ctx.r31.s64 = 327680;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r26,r30,-5
	ctx.r26.s64 = ctx.r30.s64 + -327680;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,23020
	ctx.r11.s64 = ctx.r11.s64 + 23020;
	// li r28,1338
	ctx.r28.s64 = 1338;
	// addi r25,r11,-1338
	ctx.r25.s64 = ctx.r11.s64 + -1338;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,11300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// ori r31,r31,14848
	ctx.r31.u64 = ctx.r31.u64 | 14848;
	// addi r26,r26,-14228
	ctx.r26.s64 = ctx.r26.s64 + -14228;
	// li r22,17
	ctx.r22.s64 = 17;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r23,-32182
	ctx.r23.s64 = -2109079552;
	// addi r24,r11,3708
	ctx.r24.s64 = ctx.r11.s64 + 3708;
loc_822030A8:
	// lwz r3,-4904(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4904);
	// add r4,r25,r28
	ctx.r4.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r29,r26,r31
	ctx.r29.u64 = ctx.r26.u64 + ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822030C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8218a5f0
	ctx.lr = 0x822030D8;
	sub_8218A5F0(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82210b98
	ctx.lr = 0x822030EC;
	sub_82210B98(ctx, base);
	// lwz r9,256(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r8.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r27,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r27.u32);
	// lwz r5,256(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f6,104(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// blt cr6,0x822031a0
	if (ctx.cr6.lt) goto loc_822031A0;
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r27,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r27.u32);
loc_822031A0:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne 0x822030a8
	if (!ctx.cr0.eq) goto loc_822030A8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_822031BC"))) PPC_WEAK_FUNC(sub_822031BC);
PPC_FUNC_IMPL(__imp__sub_822031BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822031C0"))) PPC_WEAK_FUNC(sub_822031C0);
PPC_FUNC_IMPL(__imp__sub_822031C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822031C8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82203280
	if (ctx.cr6.eq) goto loc_82203280;
	// bl 0x82202ff0
	ctx.lr = 0x822031E0;
	sub_82202FF0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82203280
	if (ctx.cr6.eq) goto loc_82203280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x822031F8;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x82203204;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x82203214;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82203220;
	sub_821AD498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82203268
	if (!ctx.cr6.gt) goto loc_82203268;
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r10,58740
	ctx.r9.u64 = ctx.r10.u64 | 58740;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,407
	ctx.r4.s64 = 407;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfsx f0,r8,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x8210a9b0
	ctx.lr = 0x82203268;
	sub_8210A9B0(ctx, base);
loc_82203268:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x82203274;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82203280;
	sub_821AD498(ctx, base);
loc_82203280:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82203288"))) PPC_WEAK_FUNC(sub_82203288);
PPC_FUNC_IMPL(__imp__sub_82203288) {
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
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822032AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r9,r9,9540
	ctx.r9.s64 = ctx.r9.s64 + 9540;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r6,692(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 692);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822032e0
	if (ctx.cr6.eq) goto loc_822032E0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822032e4
	goto loc_822032E4;
loc_822032E0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822032E4:
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bgt cr6,0x82203350
	if (ctx.cr6.gt) goto loc_82203350;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82203310
	// bdzf 4*cr6+eq,0x82203318
	// bdzf 4*cr6+eq,0x82203320
	// bdzf 4*cr6+eq,0x82203328
	// bne cr6,0x82203330
	if (!ctx.cr6.eq) goto loc_82203330;
	// lbz r9,1170(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1170);
	// b 0x82203334
	goto loc_82203334;
loc_82203310:
	// lbz r9,1171(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1171);
	// b 0x82203334
	goto loc_82203334;
loc_82203318:
	// lbz r9,1168(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1168);
	// b 0x82203334
	goto loc_82203334;
loc_82203320:
	// lbz r9,1143(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1143);
	// b 0x82203334
	goto loc_82203334;
loc_82203328:
	// lbz r9,1145(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1145);
	// b 0x82203334
	goto loc_82203334;
loc_82203330:
	// lbz r9,1147(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1147);
loc_82203334:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,100(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82203350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82203350:
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

__attribute__((alias("__imp__sub_82203364"))) PPC_WEAK_FUNC(sub_82203364);
PPC_FUNC_IMPL(__imp__sub_82203364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82203368"))) PPC_WEAK_FUNC(sub_82203368);
PPC_FUNC_IMPL(__imp__sub_82203368) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,20057
	ctx.r10.s64 = 20057;
	// li r9,20058
	ctx.r9.s64 = 20058;
	// li r8,20059
	ctx.r8.s64 = 20059;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r7,20060
	ctx.r7.s64 = 20060;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// li r6,20061
	ctx.r6.s64 = 20061;
	// li r4,20062
	ctx.r4.s64 = 20062;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822033BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// bl 0x821eb290
	ctx.lr = 0x822033D0;
	sub_821EB290(ctx, base);
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

__attribute__((alias("__imp__sub_822033E4"))) PPC_WEAK_FUNC(sub_822033E4);
PPC_FUNC_IMPL(__imp__sub_822033E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822033E8"))) PPC_WEAK_FUNC(sub_822033E8);
PPC_FUNC_IMPL(__imp__sub_822033E8) {
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
	// bl 0x82163ee8
	ctx.lr = 0x82203404;
	sub_82163EE8(ctx, base);
	// addi r30,r31,1096
	ctx.r30.s64 = ctx.r31.s64 + 1096;
	// addi r4,r3,2296
	ctx.r4.s64 = ctx.r3.s64 + 2296;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821847c0
	ctx.lr = 0x82203418;
	sub_821847C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82203434
	if (ctx.cr6.eq) goto loc_82203434;
	// bl 0x82163ee8
	ctx.lr = 0x82203424;
	sub_82163EE8(ctx, base);
	// addi r3,r3,2296
	ctx.r3.s64 = ctx.r3.s64 + 2296;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821847a8
	ctx.lr = 0x82203434;
	sub_821847A8(ctx, base);
loc_82203434:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82203448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x823c3468
	ctx.lr = 0x82203450;
	sub_823C3468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3ca8
	ctx.lr = 0x82203458;
	sub_823C3CA8(ctx, base);
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

__attribute__((alias("__imp__sub_82203470"))) PPC_WEAK_FUNC(sub_82203470);
PPC_FUNC_IMPL(__imp__sub_82203470) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82203498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x823c3468
	ctx.lr = 0x822034A0;
	sub_823C3468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3cd8
	ctx.lr = 0x822034A8;
	sub_823C3CD8(ctx, base);
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

__attribute__((alias("__imp__sub_822034BC"))) PPC_WEAK_FUNC(sub_822034BC);
PPC_FUNC_IMPL(__imp__sub_822034BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822034C0"))) PPC_WEAK_FUNC(sub_822034C0);
PPC_FUNC_IMPL(__imp__sub_822034C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x822034c8
	sub_822034C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822034C8"))) PPC_WEAK_FUNC(sub_822034C8);
PPC_FUNC_IMPL(__imp__sub_822034C8) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-7152
	ctx.r9.s64 = ctx.r11.s64 + -7152;
	// addi r8,r10,-7288
	ctx.r8.s64 = ctx.r10.s64 + -7288;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82163ee8
	ctx.lr = 0x82203500;
	sub_82163EE8(ctx, base);
	// addi r4,r3,2296
	ctx.r4.s64 = ctx.r3.s64 + 2296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82210e70
	ctx.lr = 0x8220350C;
	sub_82210E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82210b00
	ctx.lr = 0x82203514;
	sub_82210B00(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82203530
	if (ctx.cr6.eq) goto loc_82203530;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8220352C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82203530:
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

__attribute__((alias("__imp__sub_82203548"))) PPC_WEAK_FUNC(sub_82203548);
PPC_FUNC_IMPL(__imp__sub_82203548) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,316
	ctx.r3.s64 = ctx.r3.s64 + 316;
	// bl 0x823c3280
	ctx.lr = 0x8220356C;
	sub_823C3280(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x822035A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r6,r3,1272
	ctx.r6.s64 = ctx.r3.s64 + 1272;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,200(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,204(r4)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,208(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822035E8"))) PPC_WEAK_FUNC(sub_822035E8);
PPC_FUNC_IMPL(__imp__sub_822035E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822035F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r9,1170(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1170);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,20099
	ctx.r11.s64 = 20099;
	// li r10,20098
	ctx.r10.s64 = 20098;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82203614
	if (!ctx.cr6.eq) goto loc_82203614;
	// stw r10,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r10.u32);
	// b 0x82203618
	goto loc_82203618;
loc_82203614:
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
loc_82203618:
	// lbz r9,1171(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1171);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8220362c
	if (!ctx.cr6.eq) goto loc_8220362C;
	// stw r10,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r10.u32);
	// b 0x82203630
	goto loc_82203630;
loc_8220362C:
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
loc_82203630:
	// lbz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1168);
	// li r30,-1
	ctx.r30.s64 = -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// stw r30,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// addi r28,r10,26232
	ctx.r28.s64 = ctx.r10.s64 + 26232;
	// stw r6,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r6.u32);
	// addi r3,r31,776
	ctx.r3.s64 = ctx.r31.s64 + 776;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x8218a5f0
	ctx.lr = 0x8220365C;
	sub_8218A5F0(ctx, base);
	// lbz r9,1143(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1143);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// stw r29,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r29.u32);
	// addi r3,r31,856
	ctx.r3.s64 = ctx.r31.s64 + 856;
	// stw r30,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r30.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r6,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r6.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x8218a5f0
	ctx.lr = 0x82203684;
	sub_8218A5F0(ctx, base);
	// lbz r8,1145(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1145);
	// stw r30,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r30.u32);
	// addi r3,r31,936
	ctx.r3.s64 = ctx.r31.s64 + 936;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r6,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r6.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x8218a5f0
	ctx.lr = 0x822036A4;
	sub_8218A5F0(ctx, base);
	// lbz r7,1147(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1147);
	// stw r30,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r30.u32);
	// addi r3,r31,1016
	ctx.r3.s64 = ctx.r31.s64 + 1016;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r6,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r6.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x8218a5f0
	ctx.lr = 0x822036C4;
	sub_8218A5F0(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x822036C8;
	sub_8215BD60(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822036ec
	if (ctx.cr6.eq) goto loc_822036EC;
	// stw r29,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r29.u32);
	// stw r29,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r29.u32);
	// stw r29,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r29.u32);
	// stw r29,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r29.u32);
	// stw r29,1012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1012, ctx.r29.u32);
	// stw r29,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r29.u32);
loc_822036EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_822036F4"))) PPC_WEAK_FUNC(sub_822036F4);
PPC_FUNC_IMPL(__imp__sub_822036F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822036F8"))) PPC_WEAK_FUNC(sub_822036F8);
PPC_FUNC_IMPL(__imp__sub_822036F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x82203700;
	sub_82248770(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r22,r3,692
	ctx.r22.s64 = ctx.r3.s64 + 692;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,7424
	ctx.r27.s64 = 7424;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r23,r11,9540
	ctx.r23.s64 = ctx.r11.s64 + 9540;
loc_82203728:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220373C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r25
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82203894
	if (!ctx.cr6.eq) goto loc_82203894;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82203894
	if (ctx.cr6.eq) goto loc_82203894;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220376C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r23,4
	ctx.r8.s64 = ctx.r23.s64 + 4;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822037a4
	if (!ctx.cr6.eq) goto loc_822037A4;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82203790
	if (!ctx.cr6.eq) goto loc_82203790;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82203790:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822037a4
	if (!ctx.cr6.eq) goto loc_822037A4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_822037A4:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,227
	ctx.r4.s64 = 227;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,2728(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2728);
	// stw r30,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r30.u32);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,2728(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2728);
	// stw r30,452(r6)
	PPC_STORE_U32(ctx.r6.u32 + 452, ctx.r30.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,2728(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2728);
	// stw r30,708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 708, ctx.r30.u32);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,2728(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2728);
	// stw r30,964(r7)
	PPC_STORE_U32(ctx.r7.u32 + 964, ctx.r30.u32);
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r11,2728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2728);
	// stw r30,1220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1220, ctx.r30.u32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,2728(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2728);
	// stw r30,1476(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1476, ctx.r30.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,2728(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2728);
	// stw r30,708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 708, ctx.r30.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,2728(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2728);
	// stw r30,1732(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1732, ctx.r30.u32);
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,2728(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2728);
	// stw r30,1988(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1988, ctx.r30.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,2728(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2728);
	// stw r28,708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 708, ctx.r28.u32);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r7,2728(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2728);
	// stw r29,1732(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1732, ctx.r29.u32);
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r3,12(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r11,2716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2716);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r26,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r26.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// bl 0x82106ec0
	ctx.lr = 0x82203878;
	sub_82106EC0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x8220387C;
	sub_821D38E8(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,227
	ctx.r4.s64 = 227;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// bl 0x82106ec0
	ctx.lr = 0x8220388C;
	sub_82106EC0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82203890;
	sub_821D38E8(ctx, base);
	// b 0x822038a8
	goto loc_822038A8;
loc_82203894:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,2716(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2716);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r30,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r30.u32);
loc_822038A8:
	// addi r27,r27,256
	ctx.r27.s64 = ctx.r27.s64 + 256;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,80
	ctx.r24.s64 = ctx.r24.s64 + 80;
	// cmpwi cr6,r27,8960
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8960, ctx.xer);
	// blt cr6,0x82203728
	if (ctx.cr6.lt) goto loc_82203728;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x822038C4;
	sub_8218B408(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x822038D0;
	sub_8218B408(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,-7048
	ctx.r10.s64 = ctx.r11.s64 + -7048;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lfs f0,11300(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
loc_822038F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82203904
	if (!ctx.cr6.eq) goto loc_82203904;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82203904:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// std r6,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r6.u64);
	// lfd f13,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r8,r5,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,200(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,204(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// lfd f5,160(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,208(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8220399c
	if (!ctx.cr6.eq) goto loc_8220399C;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8220399C:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// rlwinm r8,r5,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,200(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// std r4,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r4.u64);
	// lfd f9,192(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,204(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f5,128(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,208(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 208, temp.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82203a34
	if (!ctx.cr6.eq) goto loc_82203A34;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82203A34:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// lfd f13,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r8,r5,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,200(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lfd f9,144(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,204(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,208(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 208, temp.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82203acc
	if (!ctx.cr6.eq) goto loc_82203ACC;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82203ACC:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r8,r5,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,200(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,204(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lfd f5,120(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,208(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 208, temp.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82203b64
	if (!ctx.cr6.eq) goto loc_82203B64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82203B64:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// rlwinm r8,r5,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lfd f13,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,200(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// lfd f9,152(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,204(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// lfd f5,168(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,208(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82203bfc
	if (!ctx.cr6.eq) goto loc_82203BFC;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82203BFC:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwzu r9,24(r10)
	ea = 24 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lfd f13,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,200(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r5.u64);
	// lfd f9,200(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,204(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// lfd f5,216(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,208(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// bdnz 0x822038f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822038F0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_82203C90"))) PPC_WEAK_FUNC(sub_82203C90);
PPC_FUNC_IMPL(__imp__sub_82203C90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82203CAC"))) PPC_WEAK_FUNC(sub_82203CAC);
PPC_FUNC_IMPL(__imp__sub_82203CAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82203CB0"))) PPC_WEAK_FUNC(sub_82203CB0);
PPC_FUNC_IMPL(__imp__sub_82203CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82203CB8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82204000
	if (!ctx.cr6.eq) goto loc_82204000;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82204000
	if (!ctx.cr6.eq) goto loc_82204000;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,664(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 664);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82204048
	if (ctx.cr6.eq) goto loc_82204048;
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82203e24
	if (ctx.cr6.eq) goto loc_82203E24;
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82203D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,9540
	ctx.r10.s64 = ctx.r9.s64 + 9540;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82203d68
	if (!ctx.cr6.eq) goto loc_82203D68;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82203d54
	if (!ctx.cr6.eq) goto loc_82203D54;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82203D54:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82203d68
	if (!ctx.cr6.eq) goto loc_82203D68;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82203D68:
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,227
	ctx.r4.s64 = 227;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,2728(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2728);
	// stw r11,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r11.u32);
	// lwz r7,228(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,2728(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2728);
	// stw r11,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r11.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,2728(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2728);
	// stw r11,708(r8)
	PPC_STORE_U32(ctx.r8.u32 + 708, ctx.r11.u32);
	// lwz r7,228(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,2728(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2728);
	// stw r11,964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 964, ctx.r11.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,2728(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2728);
	// stw r11,1220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1220, ctx.r11.u32);
	// lwz r7,228(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,2728(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2728);
	// stw r11,1476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1476, ctx.r11.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,2728(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2728);
	// stw r11,1732(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1732, ctx.r11.u32);
	// lwz r7,228(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,2728(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2728);
	// stw r11,1988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1988, ctx.r11.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,2728(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2728);
	// stw r29,964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 964, ctx.r29.u32);
	// lwz r8,228(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,2728(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2728);
	// stw r30,1732(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1732, ctx.r30.u32);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82106ec0
	ctx.lr = 0x82203E18;
	sub_82106EC0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82203E1C;
	sub_821D38E8(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x82203f48
	goto loc_82203F48;
loc_82203E24:
	// rlwinm r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82203f58
	if (ctx.cr6.eq) goto loc_82203F58;
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82203E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,9540
	ctx.r10.s64 = ctx.r9.s64 + 9540;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82203e90
	if (!ctx.cr6.eq) goto loc_82203E90;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82203e7c
	if (!ctx.cr6.eq) goto loc_82203E7C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82203E7C:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82203e90
	if (!ctx.cr6.eq) goto loc_82203E90;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82203E90:
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,227
	ctx.r4.s64 = 227;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,2728(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2728);
	// stw r11,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r11.u32);
	// lwz r7,228(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,2728(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2728);
	// stw r11,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r11.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,2728(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2728);
	// stw r11,708(r8)
	PPC_STORE_U32(ctx.r8.u32 + 708, ctx.r11.u32);
	// lwz r7,228(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,2728(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2728);
	// stw r11,964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 964, ctx.r11.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,2728(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2728);
	// stw r11,1220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1220, ctx.r11.u32);
	// lwz r7,228(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,2728(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2728);
	// stw r11,1476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1476, ctx.r11.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,2728(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2728);
	// stw r11,1732(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1732, ctx.r11.u32);
	// lwz r7,228(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,2728(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2728);
	// stw r11,1988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1988, ctx.r11.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,2728(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2728);
	// stw r30,1988(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1988, ctx.r30.u32);
	// lwz r8,228(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,2728(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2728);
	// stw r29,708(r6)
	PPC_STORE_U32(ctx.r6.u32 + 708, ctx.r29.u32);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82106ec0
	ctx.lr = 0x82203F40;
	sub_82106EC0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82203F44;
	sub_821D38E8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
loc_82203F48:
	// li r4,227
	ctx.r4.s64 = 227;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82106ec0
	ctx.lr = 0x82203F54;
	sub_82106EC0(ctx, base);
	// bl 0x821d38e8
	ctx.lr = 0x82203F58;
	sub_821D38E8(ctx, base);
loc_82203F58:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82203f74
	if (!ctx.cr6.eq) goto loc_82203F74;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82204048
	if (ctx.cr6.eq) goto loc_82204048;
loc_82203F74:
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r30,r31,-28
	ctx.r30.s64 = ctx.r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82203F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// bgt cr6,0x82203fec
	if (ctx.cr6.gt) goto loc_82203FEC;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82203fc0
	// bdzf 4*cr6+eq,0x82203fc8
	// bdzf 4*cr6+eq,0x82203fd0
	// bdzf 4*cr6+eq,0x82203fd8
	// bne cr6,0x82203fe0
	if (!ctx.cr6.eq) goto loc_82203FE0;
	// stb r11,1142(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1142, ctx.r11.u8);
	// b 0x82203fe4
	goto loc_82203FE4;
loc_82203FC0:
	// stb r11,1143(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1143, ctx.r11.u8);
	// b 0x82203fe4
	goto loc_82203FE4;
loc_82203FC8:
	// stb r11,1140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1140, ctx.r11.u8);
	// b 0x82203fe4
	goto loc_82203FE4;
loc_82203FD0:
	// stb r11,1115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1115, ctx.r11.u8);
	// b 0x82203fe4
	goto loc_82203FE4;
loc_82203FD8:
	// stb r11,1117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1117, ctx.r11.u8);
	// b 0x82203fe4
	goto loc_82203FE4;
loc_82203FE0:
	// stb r11,1119(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1119, ctx.r11.u8);
loc_82203FE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822035e8
	ctx.lr = 0x82203FEC;
	sub_822035E8(ctx, base);
loc_82203FEC:
	// addi r4,r31,1068
	ctx.r4.s64 = ctx.r31.s64 + 1068;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82210e70
	ctx.lr = 0x82203FF8;
	sub_82210E70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82204000:
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r30,r31,-28
	ctx.r30.s64 = ctx.r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82204018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82203288
	ctx.lr = 0x82204020;
	sub_82203288(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822035e8
	ctx.lr = 0x82204028;
	sub_822035E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822036f8
	ctx.lr = 0x82204030;
	sub_822036F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82203368
	ctx.lr = 0x8220403C;
	sub_82203368(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// bl 0x823c3240
	ctx.lr = 0x82204048;
	sub_823C3240(ctx, base);
loc_82204048:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82204050"))) PPC_WEAK_FUNC(sub_82204050);
PPC_FUNC_IMPL(__imp__sub_82204050) {
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
	// bl 0x82163ee8
	ctx.lr = 0x8220406C;
	sub_82163EE8(ctx, base);
	// addi r30,r31,1068
	ctx.r30.s64 = ctx.r31.s64 + 1068;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822331c8
	ctx.lr = 0x8220407C;
	sub_822331C8(ctx, base);
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203288
	ctx.lr = 0x82204088;
	sub_82203288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822035e8
	ctx.lr = 0x82204090;
	sub_822035E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822036f8
	ctx.lr = 0x82204098;
	sub_822036F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82210e70
	ctx.lr = 0x822040A4;
	sub_82210E70(ctx, base);
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

__attribute__((alias("__imp__sub_822040BC"))) PPC_WEAK_FUNC(sub_822040BC);
PPC_FUNC_IMPL(__imp__sub_822040BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822040C0"))) PPC_WEAK_FUNC(sub_822040C0);
PPC_FUNC_IMPL(__imp__sub_822040C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mulli r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 * 80;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,664(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 664);
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

__attribute__((alias("__imp__sub_822040DC"))) PPC_WEAK_FUNC(sub_822040DC);
PPC_FUNC_IMPL(__imp__sub_822040DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822040E0"))) PPC_WEAK_FUNC(sub_822040E0);
PPC_FUNC_IMPL(__imp__sub_822040E0) {
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
	// bl 0x8215bd60
	ctx.lr = 0x822040F0;
	sub_8215BD60(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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
}

__attribute__((alias("__imp__sub_8220410C"))) PPC_WEAK_FUNC(sub_8220410C);
PPC_FUNC_IMPL(__imp__sub_8220410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204110"))) PPC_WEAK_FUNC(sub_82204110);
PPC_FUNC_IMPL(__imp__sub_82204110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82204118;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82204314
	if (ctx.cr6.eq) goto loc_82204314;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r27,-7488(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82204314
	if (ctx.cr6.eq) goto loc_82204314;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821addc0
	ctx.lr = 0x82204144;
	sub_821ADDC0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821add20
	ctx.lr = 0x82204150;
	sub_821ADD20(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad600
	ctx.lr = 0x82204160;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad498
	ctx.lr = 0x8220416C;
	sub_821AD498(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r31,680
	ctx.r28.s64 = ctx.r31.s64 + 680;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lis r25,-32182
	ctx.r25.s64 = -2109079552;
loc_82204180:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82204194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// subf r8,r3,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r3.s64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r10,2716(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2716);
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r4,1476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1476, ctx.r4.u32);
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,2716(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2716);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,3012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3012, ctx.r11.u32);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822041f8
	if (ctx.cr6.lt) goto loc_822041F8;
	// lwz r3,-4904(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822041F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82204234
	goto loc_82204234;
loc_822041F8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82204230
	if (ctx.cr6.eq) goto loc_82204230;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82204230
	if (!ctx.cr6.eq) goto loc_82204230;
	// lwz r3,-4904(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4904);
	// li r4,20099
	ctx.r4.s64 = 20099;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82204228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82204234
	goto loc_82204234;
loc_82204230:
	// addi r10,r28,-64
	ctx.r10.s64 = ctx.r28.s64 + -64;
loc_82204234:
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r11,r30,5888
	ctx.r11.s64 = ctx.r30.s64 + 5888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,2716(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2716);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r10.u32);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,2716(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2716);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,236(r4)
	PPC_STORE_U32(ctx.r4.u32 + 236, ctx.r26.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82204270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82204288
	if (!ctx.cr6.eq) goto loc_82204288;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8220428c
	if (!ctx.cr6.eq) goto loc_8220428C;
loc_82204288:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8220428C:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,2716(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2716);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// cmpwi cr6,r30,1536
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1536, ctx.xer);
	// stw r10,7620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7620, ctx.r10.u32);
	// blt cr6,0x82204180
	if (ctx.cr6.lt) goto loc_82204180;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
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
	// ble cr6,0x822042fc
	if (!ctx.cr6.gt) goto loc_822042FC;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r10,58164
	ctx.r9.u64 = ctx.r10.u64 | 58164;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,403
	ctx.r4.s64 = 403;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfsx f0,r8,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// bl 0x8210a9b0
	ctx.lr = 0x822042FC;
	sub_8210A9B0(ctx, base);
loc_822042FC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad600
	ctx.lr = 0x82204308;
	sub_821AD600(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821ad498
	ctx.lr = 0x82204314;
	sub_821AD498(ctx, base);
loc_82204314:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8220431C"))) PPC_WEAK_FUNC(sub_8220431C);
PPC_FUNC_IMPL(__imp__sub_8220431C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204320"))) PPC_WEAK_FUNC(sub_82204320);
PPC_FUNC_IMPL(__imp__sub_82204320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82204328;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x82210fc0
	ctx.lr = 0x82204338;
	sub_82210FC0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-7152
	ctx.r9.s64 = ctx.r11.s64 + -7152;
	// addi r8,r10,-7288
	ctx.r8.s64 = ctx.r10.s64 + -7288;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r31,r29,616
	ctx.r31.s64 = ctx.r29.s64 + 616;
	// stw r8,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r8.u32);
	// li r30,5
	ctx.r30.s64 = 5;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82204364:
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x82204370;
	sub_822AA648(ctx, base);
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// bge 0x82204364
	if (!ctx.cr0.lt) goto loc_82204364;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r10.u32);
	// bl 0x82210df0
	ctx.lr = 0x822043A8;
	sub_82210DF0(ctx, base);
	// stw r25,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r25.u32);
	// bl 0x82163ee8
	ctx.lr = 0x822043B0;
	sub_82163EE8(ctx, base);
	// addi r4,r3,2296
	ctx.r4.s64 = ctx.r3.s64 + 2296;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r3,r29,1096
	ctx.r3.s64 = ctx.r29.s64 + 1096;
	// bl 0x821847a8
	ctx.lr = 0x822043C0;
	sub_821847A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822035e8
	ctx.lr = 0x822043C8;
	sub_822035E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82203288
	ctx.lr = 0x822043D0;
	sub_82203288(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822036f8
	ctx.lr = 0x822043D8;
	sub_822036F8(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x821ebaa8
	ctx.lr = 0x822043E0;
	sub_821EBAA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82203368
	ctx.lr = 0x822043EC;
	sub_82203368(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82203548
	ctx.lr = 0x822043F4;
	sub_82203548(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82204400"))) PPC_WEAK_FUNC(sub_82204400);
PPC_FUNC_IMPL(__imp__sub_82204400) {
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
	ctx.lr = 0x82204418;
	sub_8218B1E8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6976
	ctx.r9.s64 = ctx.r10.s64 + -6976;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwsync 
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-764(r8)
	PPC_STORE_U32(ctx.r8.u32 + -764, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82204458"))) PPC_WEAK_FUNC(sub_82204458);
PPC_FUNC_IMPL(__imp__sub_82204458) {
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
	ctx.lr = 0x82204470;
	sub_8218B1E8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6956
	ctx.r9.s64 = ctx.r10.s64 + -6956;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwsync 
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-760(r8)
	PPC_STORE_U32(ctx.r8.u32 + -760, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_822044B0"))) PPC_WEAK_FUNC(sub_822044B0);
PPC_FUNC_IMPL(__imp__sub_822044B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-7000
	ctx.r4.s64 = ctx.r11.s64 + -7000;
	// b 0x8218b2d0
	sub_8218B2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822044CC"))) PPC_WEAK_FUNC(sub_822044CC);
PPC_FUNC_IMPL(__imp__sub_822044CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822044D0"))) PPC_WEAK_FUNC(sub_822044D0);
PPC_FUNC_IMPL(__imp__sub_822044D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-6988
	ctx.r4.s64 = ctx.r11.s64 + -6988;
	// b 0x8218b2d0
	sub_8218B2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822044EC"))) PPC_WEAK_FUNC(sub_822044EC);
PPC_FUNC_IMPL(__imp__sub_822044EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822044F0"))) PPC_WEAK_FUNC(sub_822044F0);
PPC_FUNC_IMPL(__imp__sub_822044F0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-6976
	ctx.r10.s64 = ctx.r11.s64 + -6976;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8220452c
	if (ctx.cr6.eq) goto loc_8220452C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x8220452C;
	sub_82183E40(ctx, base);
loc_8220452C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwsync 
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -764, ctx.r11.u32);
	// bl 0x8218b208
	ctx.lr = 0x82204548;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82204564
	if (ctx.cr6.eq) goto loc_82204564;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82204560;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82204564:
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

__attribute__((alias("__imp__sub_8220457C"))) PPC_WEAK_FUNC(sub_8220457C);
PPC_FUNC_IMPL(__imp__sub_8220457C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204580"))) PPC_WEAK_FUNC(sub_82204580);
PPC_FUNC_IMPL(__imp__sub_82204580) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822045c4
	if (!ctx.cr6.gt) goto loc_822045C4;
loc_822045A8:
	// lhz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822045c4
	if (ctx.cr6.eq) goto loc_822045C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822045a8
	if (ctx.cr6.lt) goto loc_822045A8;
loc_822045C4:
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822045e4
	if (ctx.cr6.eq) goto loc_822045E4;
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
loc_822045E4:
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82248a40
	ctx.lr = 0x822045F0;
	sub_82248A40(ctx, base);
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

__attribute__((alias("__imp__sub_82204604"))) PPC_WEAK_FUNC(sub_82204604);
PPC_FUNC_IMPL(__imp__sub_82204604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204608"))) PPC_WEAK_FUNC(sub_82204608);
PPC_FUNC_IMPL(__imp__sub_82204608) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-6956
	ctx.r10.s64 = ctx.r11.s64 + -6956;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82204644
	if (ctx.cr6.eq) goto loc_82204644;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82204644;
	sub_82183E40(ctx, base);
loc_82204644:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwsync 
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -760, ctx.r11.u32);
	// bl 0x8218b208
	ctx.lr = 0x82204660;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8220467c
	if (ctx.cr6.eq) goto loc_8220467C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82204678;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8220467C:
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

__attribute__((alias("__imp__sub_82204694"))) PPC_WEAK_FUNC(sub_82204694);
PPC_FUNC_IMPL(__imp__sub_82204694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204698"))) PPC_WEAK_FUNC(sub_82204698);
PPC_FUNC_IMPL(__imp__sub_82204698) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822046dc
	if (!ctx.cr6.gt) goto loc_822046DC;
loc_822046C0:
	// lhz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822046dc
	if (ctx.cr6.eq) goto loc_822046DC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822046c0
	if (ctx.cr6.lt) goto loc_822046C0;
loc_822046DC:
	// lhz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822046fc
	if (ctx.cr6.eq) goto loc_822046FC;
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
loc_822046FC:
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82248a40
	ctx.lr = 0x82204708;
	sub_82248A40(ctx, base);
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

__attribute__((alias("__imp__sub_8220471C"))) PPC_WEAK_FUNC(sub_8220471C);
PPC_FUNC_IMPL(__imp__sub_8220471C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204720"))) PPC_WEAK_FUNC(sub_82204720);
PPC_FUNC_IMPL(__imp__sub_82204720) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// lbz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r6,3(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// lhz r9,-14(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r9,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// lbz r8,5(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// lbz r5,6(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r6,7(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// lhz r4,-14(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r4,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r4.u16);
	// lbz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r7.u16);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// lhz r4,-14(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r4,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r4.u16);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lbz r9,13(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r7.u16);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// lhz r4,-14(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r4,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r4.u16);
	// lbz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r10,17(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r8,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r8.u16);
	// lbz r6,18(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// lbz r7,19(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// stb r7,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r7.u8);
	// stb r6,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r6.u8);
	// lhz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r5,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r5.u16);
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r4,21(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// stb r4,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r4.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// lhz r9,-14(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r9,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82204850"))) PPC_WEAK_FUNC(sub_82204850);
PPC_FUNC_IMPL(__imp__sub_82204850) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// lbz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r6,3(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// lhz r9,-14(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r9,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// lbz r8,5(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r5,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// stb r8,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r8.u8);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// lbz r5,6(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r6,7(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// lhz r4,-14(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r4,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r4.u16);
	// lbz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r7.u16);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// lhz r4,-14(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r4,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r4.u16);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lbz r9,13(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r7.u16);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// lhz r4,-14(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r4,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r4.u16);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lbz r9,17(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r8.u8);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r7,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r7.u16);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// lhz r4,-14(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r4,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r4.u16);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stb r9,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r8,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r8.u16);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,23(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// lhz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r5,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r5.u16);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lbz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// lbz r9,25(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// stb r4,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r4.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// lhz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r8,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r8.u16);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r7,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// stb r6,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r6.u8);
	// lhz r5,-14(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r5,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r5.u16);
	// lbz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// lbz r10,29(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r4,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r4.u8);
	// lhz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// sth r9,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r9.u16);
	// lbz r7,31(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 31);
	// lbz r8,30(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 30);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// stb r7,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r7.u8);
	// lhz r6,-14(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r6,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r6.u16);
	// lbz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// lbz r5,33(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// stb r5,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r5.u8);
	// stb r4,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r4.u8);
	// lhz r10,-14(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -14);
	// sth r10,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82204A28"))) PPC_WEAK_FUNC(sub_82204A28);
PPC_FUNC_IMPL(__imp__sub_82204A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82204A30;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x82204A44;
	sub_8218AA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82204A50;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x82204A5C;
	sub_8218AC78(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// divwu r6,r3,r11
	ctx.r6.u32 = ctx.r3.u32 / ctx.r11.u32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mulli r9,r6,28
	ctx.r9.s64 = ctx.r6.s64 * 28;
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// addi r4,r10,-6904
	ctx.r4.s64 = ctx.r10.s64 + -6904;
	// cntlzw r3,r8
	ctx.r3.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// bl 0x8209eda0
	ctx.lr = 0x82204A90;
	sub_8209EDA0(ctx, base);
	// bl 0x8215c0c0
	ctx.lr = 0x82204A94;
	sub_8215C0C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82204A9C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82204AA8;
	sub_821837D0(ctx, base);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r4,r11,-6936
	ctx.r4.s64 = ctx.r11.s64 + -6936;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x8209eda0
	ctx.lr = 0x82204AC0;
	sub_8209EDA0(ctx, base);
	// lwz r30,56(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82183850
	ctx.lr = 0x82204AC8;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82204ae0
	if (ctx.cr6.eq) goto loc_82204AE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82204ADC;
	sub_82183448(ctx, base);
	// b 0x82204aec
	goto loc_82204AEC;
loc_82204AE0:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82204AEC;
	sub_821845A0(ctx, base);
loc_82204AEC:
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82204AF8;
	sub_821837D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82204B04;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8218ad90
	ctx.lr = 0x82204B18;
	sub_8218AD90(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82204b4c
	if (!ctx.cr6.gt) goto loc_82204B4C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82204B2C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82204720
	ctx.lr = 0x82204B38;
	sub_82204720(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82204b2c
	if (ctx.cr6.lt) goto loc_82204B2C;
loc_82204B4C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x82204B54;
	sub_8218A7F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82204B60"))) PPC_WEAK_FUNC(sub_82204B60);
PPC_FUNC_IMPL(__imp__sub_82204B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82204B68;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218aa18
	ctx.lr = 0x82204B7C;
	sub_8218AA18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82204B88;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x82204B94;
	sub_8218AC78(ctx, base);
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// divwu r6,r3,r11
	ctx.r6.u32 = ctx.r3.u32 / ctx.r11.u32;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r10,-6776
	ctx.r4.s64 = ctx.r10.s64 + -6776;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8209eda0
	ctx.lr = 0x82204BD0;
	sub_8209EDA0(ctx, base);
	// bl 0x8215c0c0
	ctx.lr = 0x82204BD4;
	sub_8215C0C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82204BDC;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82204BE8;
	sub_821837D0(ctx, base);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// cntlzw r9,r5
	ctx.r9.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r4,r10,-6804
	ctx.r4.s64 = ctx.r10.s64 + -6804;
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x8209eda0
	ctx.lr = 0x82204C00;
	sub_8209EDA0(ctx, base);
	// lwz r30,56(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82183850
	ctx.lr = 0x82204C08;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82204c20
	if (ctx.cr6.eq) goto loc_82204C20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82204C1C;
	sub_82183448(ctx, base);
	// b 0x82204c2c
	goto loc_82204C2C;
loc_82204C20:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82204C2C;
	sub_821845A0(ctx, base);
loc_82204C2C:
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82204C38;
	sub_821837D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82204C44;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8218ad90
	ctx.lr = 0x82204C58;
	sub_8218AD90(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82204c8c
	if (!ctx.cr6.gt) goto loc_82204C8C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82204C6C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82204850
	ctx.lr = 0x82204C78;
	sub_82204850(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82204c6c
	if (ctx.cr6.lt) goto loc_82204C6C;
loc_82204C8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x82204C94;
	sub_8218A7F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82204CA0"))) PPC_WEAK_FUNC(sub_82204CA0);
PPC_FUNC_IMPL(__imp__sub_82204CA0) {
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
	// bl 0x821efba0
	ctx.lr = 0x82204CB8;
	sub_821EFBA0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-6664
	ctx.r9.s64 = ctx.r11.s64 + -6664;
	// addi r8,r10,-6676
	ctx.r8.s64 = ctx.r10.s64 + -6676;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82204CE8"))) PPC_WEAK_FUNC(sub_82204CE8);
PPC_FUNC_IMPL(__imp__sub_82204CE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82204cf0
	sub_82204CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82204CF0"))) PPC_WEAK_FUNC(sub_82204CF0);
PPC_FUNC_IMPL(__imp__sub_82204CF0) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-6664
	ctx.r9.s64 = ctx.r11.s64 + -6664;
	// addi r8,r10,-6676
	ctx.r8.s64 = ctx.r10.s64 + -6676;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821ef228
	ctx.lr = 0x82204D28;
	sub_821EF228(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82204d44
	if (ctx.cr6.eq) goto loc_82204D44;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82204D40;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82204D44:
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

__attribute__((alias("__imp__sub_82204D5C"))) PPC_WEAK_FUNC(sub_82204D5C);
PPC_FUNC_IMPL(__imp__sub_82204D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204D60"))) PPC_WEAK_FUNC(sub_82204D60);
PPC_FUNC_IMPL(__imp__sub_82204D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82204D68;
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
	// bl 0x8218b1e8
	ctx.lr = 0x82204D7C;
	sub_8218B1E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r9,r11,-6436
	ctx.r9.s64 = ctx.r11.s64 + -6436;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r30,-444(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -444);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82204db4
	if (ctx.cr6.eq) goto loc_82204DB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821617f0
	ctx.lr = 0x82204DAC;
	sub_821617F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82161750
	ctx.lr = 0x82204DB4;
	sub_82161750(ctx, base);
loc_82204DB4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-6448
	ctx.r4.s64 = ctx.r11.s64 + -6448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b2d0
	ctx.lr = 0x82204DC8;
	sub_8218B2D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82204DD4"))) PPC_WEAK_FUNC(sub_82204DD4);
PPC_FUNC_IMPL(__imp__sub_82204DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82204DD8"))) PPC_WEAK_FUNC(sub_82204DD8);
PPC_FUNC_IMPL(__imp__sub_82204DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82204DE0;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x82204DF4;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82204E00;
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
	ctx.lr = 0x82204E14;
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
	ctx.lr = 0x82204E28;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82204e44
	if (ctx.cr6.eq) goto loc_82204E44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ac78
	ctx.lr = 0x82204E3C;
	sub_8218AC78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82204e48
	goto loc_82204E48;
loc_82204E44:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82204E48:
	// bl 0x82183850
	ctx.lr = 0x82204E4C;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x82204e64
	if (ctx.cr6.eq) goto loc_82204E64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82204E60;
	sub_82183448(ctx, base);
	// b 0x82204e70
	goto loc_82204E70;
loc_82204E64:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82204E70;
	sub_821845A0(ctx, base);
loc_82204E70:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x82204E7C;
	sub_822AA648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a810
	ctx.lr = 0x82204E88;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82204ea4
	if (ctx.cr6.eq) goto loc_82204EA4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ad90
	ctx.lr = 0x82204EA4;
	sub_8218AD90(ctx, base);
loc_82204EA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f07a0
	ctx.lr = 0x82204EAC;
	sub_820F07A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82161688
	ctx.lr = 0x82204EB8;
	sub_82161688(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821617f0
	ctx.lr = 0x82204EC4;
	sub_821617F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218a7f0
	ctx.lr = 0x82204ECC;
	sub_8218A7F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82204ED4;
	sub_821837D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82204EE0"))) PPC_WEAK_FUNC(sub_82204EE0);
PPC_FUNC_IMPL(__imp__sub_82204EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82204ef4
	if (!ctx.cr6.eq) goto loc_82204EF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82204EF4:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r11,-444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -444);
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

__attribute__((alias("__imp__sub_82204F08"))) PPC_WEAK_FUNC(sub_82204F08);
PPC_FUNC_IMPL(__imp__sub_82204F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82204F34"))) PPC_WEAK_FUNC(sub_82204F34);
PPC_FUNC_IMPL(__imp__sub_82204F34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82204F38"))) PPC_WEAK_FUNC(sub_82204F38);
PPC_FUNC_IMPL(__imp__sub_82204F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82204F40;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// addi r9,r11,-6436
	ctx.r9.s64 = ctx.r11.s64 + -6436;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,-444(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -444);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82204f7c
	if (ctx.cr6.eq) goto loc_82204F7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821617f0
	ctx.lr = 0x82204F74;
	sub_821617F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82161750
	ctx.lr = 0x82204F7C;
	sub_82161750(ctx, base);
loc_82204F7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b208
	ctx.lr = 0x82204F84;
	sub_8218B208(ctx, base);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82204fa0
	if (ctx.cr6.eq) goto loc_82204FA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82204F9C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82204FA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82204FA8"))) PPC_WEAK_FUNC(sub_82204FA8);
PPC_FUNC_IMPL(__imp__sub_82204FA8) {
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
	// bl 0x8218b1e8
	ctx.lr = 0x82204FC8;
	sub_8218B1E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-6404
	ctx.r9.s64 = ctx.r11.s64 + -6404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r10,-6416
	ctx.r4.s64 = ctx.r10.s64 + -6416;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8218b2d0
	ctx.lr = 0x82204FEC;
	sub_8218B2D0(ctx, base);
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

__attribute__((alias("__imp__sub_82205008"))) PPC_WEAK_FUNC(sub_82205008);
PPC_FUNC_IMPL(__imp__sub_82205008) {
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
	// addi r10,r11,-6404
	ctx.r10.s64 = ctx.r11.s64 + -6404;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8218b208
	ctx.lr = 0x82205034;
	sub_8218B208(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82205050
	if (ctx.cr6.eq) goto loc_82205050;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x8220504C;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82205050:
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

__attribute__((alias("__imp__sub_82205068"))) PPC_WEAK_FUNC(sub_82205068);
PPC_FUNC_IMPL(__imp__sub_82205068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82205070;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218aa18
	ctx.lr = 0x82205084;
	sub_8218AA18(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a810
	ctx.lr = 0x82205090;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822050ac
	if (ctx.cr6.eq) goto loc_822050AC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ac78
	ctx.lr = 0x822050A4;
	sub_8218AC78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822050b0
	goto loc_822050B0;
loc_822050AC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_822050B0:
	// bl 0x82182e90
	ctx.lr = 0x822050B4;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x822050BC;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x822050C8;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x822050CC;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x822050D8;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x822050E0;
	sub_821830F8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x822050E4;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x822050fc
	if (ctx.cr6.eq) goto loc_822050FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x822050F8;
	sub_82183448(ctx, base);
	// b 0x82205108
	goto loc_82205108;
loc_822050FC:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82205108;
	sub_821845A0(ctx, base);
loc_82205108:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x82205120
	if (ctx.cr6.lt) goto loc_82205120;
	// bne cr6,0x82205128
	if (!ctx.cr6.eq) goto loc_82205128;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82205124
	goto loc_82205124;
loc_82205120:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82205124:
	// bl 0x821830f8
	ctx.lr = 0x82205128;
	sub_821830F8(ctx, base);
loc_82205128:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82205130;
	sub_821837D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x8220513C;
	sub_822AA648(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a810
	ctx.lr = 0x82205148;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82205164
	if (ctx.cr6.eq) goto loc_82205164;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ad90
	ctx.lr = 0x82205164;
	sub_8218AD90(ctx, base);
loc_82205164:
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// cmplwi cr6,r6,77
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 77, ctx.xer);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// bne cr6,0x822051d8
	if (!ctx.cr6.eq) goto loc_822051D8;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,77
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// bne cr6,0x822051d8
	if (!ctx.cr6.eq) goto loc_822051D8;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,77
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// bne cr6,0x822051d8
	if (!ctx.cr6.eq) goto loc_822051D8;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,78
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 78, ctx.xer);
	// bne cr6,0x822051d8
	if (!ctx.cr6.eq) goto loc_822051D8;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822051d8
	if (ctx.cr6.eq) goto loc_822051D8;
	// addi r6,r30,-8
	ctx.r6.s64 = ctx.r30.s64 + -8;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// bl 0x821f34e0
	ctx.lr = 0x822051D8;
	sub_821F34E0(ctx, base);
loc_822051D8:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x822051E4;
	sub_82183E40(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a7f0
	ctx.lr = 0x822051EC;
	sub_8218A7F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_822051F4"))) PPC_WEAK_FUNC(sub_822051F4);
PPC_FUNC_IMPL(__imp__sub_822051F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822051F8"))) PPC_WEAK_FUNC(sub_822051F8);
PPC_FUNC_IMPL(__imp__sub_822051F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82205200;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218aa18
	ctx.lr = 0x82205214;
	sub_8218AA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a810
	ctx.lr = 0x82205220;
	sub_8218A810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8220523c
	if (ctx.cr6.eq) goto loc_8220523C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ac78
	ctx.lr = 0x82205234;
	sub_8218AC78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82205240
	goto loc_82205240;
loc_8220523C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82205240:
	// bl 0x82182e90
	ctx.lr = 0x82205244;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x8220524C;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82205258;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x8220525C;
	sub_82183850(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82183078
	ctx.lr = 0x82205268;
	sub_82183078(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821830f8
	ctx.lr = 0x82205270;
	sub_821830F8(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82205274;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x8220528c
	if (ctx.cr6.eq) goto loc_8220528C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183448
	ctx.lr = 0x82205288;
	sub_82183448(ctx, base);
	// b 0x82205298
	goto loc_82205298;
loc_8220528C:
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82205298;
	sub_821845A0(ctx, base);
loc_82205298:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x822052b0
	if (ctx.cr6.lt) goto loc_822052B0;
	// bne cr6,0x822052b8
	if (!ctx.cr6.eq) goto loc_822052B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822052b4
	goto loc_822052B4;
loc_822052B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822052B4:
	// bl 0x821830f8
	ctx.lr = 0x822052B8;
	sub_821830F8(ctx, base);
loc_822052B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x822052C0;
	sub_821837D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x822052CC;
	sub_822AA648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a810
	ctx.lr = 0x822052D8;
	sub_8218A810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822052f4
	if (ctx.cr6.eq) goto loc_822052F4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218ad90
	ctx.lr = 0x822052F4;
	sub_8218AD90(ctx, base);
loc_822052F4:
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// cmplwi cr6,r6,77
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 77, ctx.xer);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// bne cr6,0x82205368
	if (!ctx.cr6.eq) goto loc_82205368;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,77
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// bne cr6,0x82205368
	if (!ctx.cr6.eq) goto loc_82205368;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// bne cr6,0x82205368
	if (!ctx.cr6.eq) goto loc_82205368;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// bne cr6,0x82205368
	if (!ctx.cr6.eq) goto loc_82205368;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82205368
	if (ctx.cr6.eq) goto loc_82205368;
	// addi r6,r30,-8
	ctx.r6.s64 = ctx.r30.s64 + -8;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// bl 0x821f3318
	ctx.lr = 0x82205368;
	sub_821F3318(ctx, base);
loc_82205368:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82205374;
	sub_82183E40(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8218a7f0
	ctx.lr = 0x8220537C;
	sub_8218A7F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82205384"))) PPC_WEAK_FUNC(sub_82205384);
PPC_FUNC_IMPL(__imp__sub_82205384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82205388"))) PPC_WEAK_FUNC(sub_82205388);
PPC_FUNC_IMPL(__imp__sub_82205388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82205390;
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
	// bl 0x822051f8
	ctx.lr = 0x822053A4;
	sub_822051F8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82205068
	ctx.lr = 0x822053B4;
	sub_82205068(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_822053C0"))) PPC_WEAK_FUNC(sub_822053C0);
PPC_FUNC_IMPL(__imp__sub_822053C0) {
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
	// addi r10,r11,-6384
	ctx.r10.s64 = ctx.r11.s64 + -6384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x821a9520
	ctx.lr = 0x822053EC;
	sub_821A9520(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82205408
	if (ctx.cr6.eq) goto loc_82205408;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82205404;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82205408:
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

__attribute__((alias("__imp__sub_82205420"))) PPC_WEAK_FUNC(sub_82205420);
PPC_FUNC_IMPL(__imp__sub_82205420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f12,656(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 656);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,660(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,664(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,672(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f8,676(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,2144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,680(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82187920
	ctx.lr = 0x82205498;
	sub_82187920(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82187c20
	ctx.lr = 0x822054A8;
	sub_82187C20(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82289c50
	ctx.lr = 0x822054B8;
	sub_82289C50(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82096f18
	ctx.lr = 0x822054C4;
	sub_82096F18(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-6324(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -6324);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a9678
	ctx.lr = 0x822054D4;
	sub_821A9678(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r11,r31,240
	ctx.r11.s64 = ctx.r31.s64 + 240;
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r10,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r10.u64);
	// std r9,256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 256, ctx.r9.u64);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// ld r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r11,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r11.u64);
	// std r8,264(r31)
	PPC_STORE_U64(ctx.r31.u32 + 264, ctx.r8.u64);
	// std r7,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r7.u64);
	// std r6,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.r6.u64);
	// std r4,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r4.u64);
	// std r5,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r5.u64);
	// bl 0x821a9b20
	ctx.lr = 0x82205534;
	sub_821A9B20(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82205548"))) PPC_WEAK_FUNC(sub_82205548);
PPC_FUNC_IMPL(__imp__sub_82205548) {
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
	// bl 0x821a9990
	ctx.lr = 0x82205568;
	sub_821A9990(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-6384
	ctx.r9.s64 = ctx.r11.s64 + -6384;
	// stw r10,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
	// lis r8,-32178
	ctx.r8.s64 = -2108817408;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r3,-19048(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19048);
	// bl 0x821a2a60
	ctx.lr = 0x82205588;
	sub_821A2A60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82205618
	if (ctx.cr6.eq) goto loc_82205618;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,2144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82187400
	ctx.lr = 0x822055C4;
	sub_82187400(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f2,f12
	ctx.f2.f64 = double(float(sqrt(ctx.f12.f64)));
	// bl 0x82249c38
	ctx.lr = 0x822055E0;
	sub_82249C38(ctx, base);
	// lfs f2,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,672(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// bl 0x82249c38
	ctx.lr = 0x822055F8;
	sub_82249C38(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,676(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// stfs f31,680(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// ld r9,144(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 144);
	// std r9,656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 656, ctx.r9.u64);
	// ld r8,152(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 152);
	// std r8,664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 664, ctx.r8.u64);
	// b 0x82205648
	goto loc_82205648;
loc_82205618:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,676(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// stfs f0,680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// stfs f0,684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// stfs f0,660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 660, temp.u32);
	// stfs f0,664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 664, temp.u32);
	// stfs f0,672(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// stfs f0,656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 656, temp.u32);
	// stfs f13,668(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
loc_82205648:
	// addi r11,r31,656
	ctx.r11.s64 = ctx.r31.s64 + 656;
	// ld r7,672(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 672);
	// ld r6,680(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 680);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r31,688
	ctx.r8.s64 = ctx.r31.s64 + 688;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,704(r31)
	PPC_STORE_U64(ctx.r31.u32 + 704, ctx.r7.u64);
	// std r6,712(r31)
	PPC_STORE_U64(ctx.r31.u32 + 712, ctx.r6.u64);
	// std r10,688(r31)
	PPC_STORE_U64(ctx.r31.u32 + 688, ctx.r10.u64);
	// std r9,696(r31)
	PPC_STORE_U64(ctx.r31.u32 + 696, ctx.r9.u64);
	// bl 0x82205420
	ctx.lr = 0x82205678;
	sub_82205420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82205698"))) PPC_WEAK_FUNC(sub_82205698);
PPC_FUNC_IMPL(__imp__sub_82205698) {
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
	// addi r3,r3,284
	ctx.r3.s64 = ctx.r3.s64 + 284;
	// bl 0x823c3468
	ctx.lr = 0x822056B4;
	sub_823C3468(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822056C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3ca8
	ctx.lr = 0x822056D0;
	sub_823C3CA8(ctx, base);
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

__attribute__((alias("__imp__sub_822056E4"))) PPC_WEAK_FUNC(sub_822056E4);
PPC_FUNC_IMPL(__imp__sub_822056E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822056E8"))) PPC_WEAK_FUNC(sub_822056E8);
PPC_FUNC_IMPL(__imp__sub_822056E8) {
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
	// addi r3,r3,284
	ctx.r3.s64 = ctx.r3.s64 + 284;
	// bl 0x823c3468
	ctx.lr = 0x82205704;
	sub_823C3468(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82205718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3cd8
	ctx.lr = 0x82205720;
	sub_823C3CD8(ctx, base);
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

__attribute__((alias("__imp__sub_82205734"))) PPC_WEAK_FUNC(sub_82205734);
PPC_FUNC_IMPL(__imp__sub_82205734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82205738"))) PPC_WEAK_FUNC(sub_82205738);
PPC_FUNC_IMPL(__imp__sub_82205738) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// b 0x82211170
	sub_82211170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82205740"))) PPC_WEAK_FUNC(sub_82205740);
PPC_FUNC_IMPL(__imp__sub_82205740) {
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
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82205768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,215
	ctx.r9.s64 = ctx.r3.s64 + 215;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwz r3,40(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
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

__attribute__((alias("__imp__sub_8220578C"))) PPC_WEAK_FUNC(sub_8220578C);
PPC_FUNC_IMPL(__imp__sub_8220578C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82205790"))) PPC_WEAK_FUNC(sub_82205790);
PPC_FUNC_IMPL(__imp__sub_82205790) {
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
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822057B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,215
	ctx.r9.s64 = ctx.r3.s64 + 215;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
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

__attribute__((alias("__imp__sub_822057DC"))) PPC_WEAK_FUNC(sub_822057DC);
PPC_FUNC_IMPL(__imp__sub_822057DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822057E0"))) PPC_WEAK_FUNC(sub_822057E0);
PPC_FUNC_IMPL(__imp__sub_822057E0) {
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
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82205808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,215
	ctx.r9.s64 = ctx.r3.s64 + 215;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwz r3,20(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
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

__attribute__((alias("__imp__sub_8220582C"))) PPC_WEAK_FUNC(sub_8220582C);
PPC_FUNC_IMPL(__imp__sub_8220582C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82205830"))) PPC_WEAK_FUNC(sub_82205830);
PPC_FUNC_IMPL(__imp__sub_82205830) {
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
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82205858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,215
	ctx.r9.s64 = ctx.r3.s64 + 215;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwz r3,12(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
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

__attribute__((alias("__imp__sub_8220587C"))) PPC_WEAK_FUNC(sub_8220587C);
PPC_FUNC_IMPL(__imp__sub_8220587C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82205880"))) PPC_WEAK_FUNC(sub_82205880);
PPC_FUNC_IMPL(__imp__sub_82205880) {
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
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822058A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,215
	ctx.r9.s64 = ctx.r3.s64 + 215;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwz r3,16(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
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

__attribute__((alias("__imp__sub_822058CC"))) PPC_WEAK_FUNC(sub_822058CC);
PPC_FUNC_IMPL(__imp__sub_822058CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822058D0"))) PPC_WEAK_FUNC(sub_822058D0);
PPC_FUNC_IMPL(__imp__sub_822058D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r3,604(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822058DC"))) PPC_WEAK_FUNC(sub_822058DC);
PPC_FUNC_IMPL(__imp__sub_822058DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822058E0"))) PPC_WEAK_FUNC(sub_822058E0);
PPC_FUNC_IMPL(__imp__sub_822058E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_822058F4"))) PPC_WEAK_FUNC(sub_822058F4);
PPC_FUNC_IMPL(__imp__sub_822058F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822058F8"))) PPC_WEAK_FUNC(sub_822058F8);
PPC_FUNC_IMPL(__imp__sub_822058F8) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r5,44(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// li r11,12
	ctx.r11.s64 = 12;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x822059A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,596(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// beq cr6,0x822059bc
	if (ctx.cr6.eq) goto loc_822059BC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_822059BC:
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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

__attribute__((alias("__imp__sub_822059D4"))) PPC_WEAK_FUNC(sub_822059D4);
PPC_FUNC_IMPL(__imp__sub_822059D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822059D8"))) PPC_WEAK_FUNC(sub_822059D8);
PPC_FUNC_IMPL(__imp__sub_822059D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r3,332
	ctx.r8.s64 = ctx.r3.s64 + 332;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82205a0c
	if (!ctx.cr6.gt) goto loc_82205A0C;
	// addi r10,r8,188
	ctx.r10.s64 = ctx.r8.s64 + 188;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822059F4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82205a04
	if (ctx.cr6.eq) goto loc_82205A04;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82205A04:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822059f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822059F4;
loc_82205A0C:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r7,368
	ctx.r7.s64 = 368;
	// li r6,369
	ctx.r6.s64 = 369;
	// stw r9,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r9.u32);
	// li r5,370
	ctx.r5.s64 = 370;
	// stw r7,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// stw r6,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
	// stw r5,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r5.u32);
	// li r4,371
	ctx.r4.s64 = 371;
	// li r3,372
	ctx.r3.s64 = 372;
	// li r9,373
	ctx.r9.s64 = 373;
	// stw r4,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r4.u32);
	// li r7,374
	ctx.r7.s64 = 374;
	// stw r3,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r3.u32);
	// li r6,375
	ctx.r6.s64 = 375;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// li r5,376
	ctx.r5.s64 = 376;
	// stw r7,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r7.u32);
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// stw r5,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82205A70"))) PPC_WEAK_FUNC(sub_82205A70);
PPC_FUNC_IMPL(__imp__sub_82205A70) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r8,78
	ctx.r8.s64 = 78;
	// ori r11,r9,34463
	ctx.r11.u64 = ctx.r9.u64 | 34463;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,79
	ctx.r7.s64 = 79;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r5,44(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// li r6,80
	ctx.r6.s64 = 80;
	// li r4,81
	ctx.r4.s64 = 81;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r10,84
	ctx.r10.s64 = 84;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r9,85
	ctx.r9.s64 = 85;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r8,86
	ctx.r8.s64 = 86;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r3,82
	ctx.r3.s64 = 82;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r7,87
	ctx.r7.s64 = 87;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r6,88
	ctx.r6.s64 = 88;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,89
	ctx.r4.s64 = 89;
	// li r11,90
	ctx.r11.s64 = 90;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r10,91
	ctx.r10.s64 = 91;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// li r9,92
	ctx.r9.s64 = 92;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// li r8,93
	ctx.r8.s64 = 93;
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x82205B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,596(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x82205b38
	if (ctx.cr6.eq) goto loc_82205B38;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_82205B38:
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82211880
	ctx.lr = 0x82205B44;
	sub_82211880(ctx, base);
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

__attribute__((alias("__imp__sub_82205B58"))) PPC_WEAK_FUNC(sub_82205B58);
PPC_FUNC_IMPL(__imp__sub_82205B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82205B60;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,-7488(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82205c50
	if (ctx.cr6.eq) goto loc_82205C50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821addc0
	ctx.lr = 0x82205B84;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821add20
	ctx.lr = 0x82205B90;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad600
	ctx.lr = 0x82205BA0;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad498
	ctx.lr = 0x82205BAC;
	sub_821AD498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// ble cr6,0x82205c38
	if (!ctx.cr6.gt) goto loc_82205C38;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,132(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 132, temp.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8210a9b0
	ctx.lr = 0x82205BFC;
	sub_8210A9B0(ctx, base);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8210a9b0
	ctx.lr = 0x82205C2C;
	sub_8210A9B0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82211440
	ctx.lr = 0x82205C38;
	sub_82211440(ctx, base);
loc_82205C38:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad600
	ctx.lr = 0x82205C44;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ad498
	ctx.lr = 0x82205C50;
	sub_821AD498(ctx, base);
loc_82205C50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82205C5C"))) PPC_WEAK_FUNC(sub_82205C5C);
PPC_FUNC_IMPL(__imp__sub_82205C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82205C60"))) PPC_WEAK_FUNC(sub_82205C60);
PPC_FUNC_IMPL(__imp__sub_82205C60) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// b 0x823c3c98
	sub_823C3C98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82205C6C"))) PPC_WEAK_FUNC(sub_82205C6C);
PPC_FUNC_IMPL(__imp__sub_82205C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82205C70"))) PPC_WEAK_FUNC(sub_82205C70);
PPC_FUNC_IMPL(__imp__sub_82205C70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82205C8C"))) PPC_WEAK_FUNC(sub_82205C8C);
PPC_FUNC_IMPL(__imp__sub_82205C8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82205C90"))) PPC_WEAK_FUNC(sub_82205C90);
PPC_FUNC_IMPL(__imp__sub_82205C90) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82205df8
	if (ctx.cr6.eq) goto loc_82205DF8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82205df8
	if (ctx.cr6.eq) goto loc_82205DF8;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r30,r11,-23400
	ctx.r30.s64 = ctx.r11.s64 + -23400;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82205d48
	if (ctx.cr6.eq) goto loc_82205D48;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r3,-28
	ctx.r10.s64 = ctx.r3.s64 + -28;
	// addi r9,r10,332
	ctx.r9.s64 = ctx.r10.s64 + 332;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82205CF4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82205d04
	if (!ctx.cr0.lt) goto loc_82205D04;
	// lwz r11,596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 596);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82205D04:
	// addi r7,r11,47
	ctx.r7.s64 = ctx.r11.s64 + 47;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82205cf4
	if (ctx.cr6.eq) goto loc_82205CF4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82205d48
	if (ctx.cr6.eq) goto loc_82205D48;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82205D3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_82205D48:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82205dd8
	if (ctx.cr6.eq) goto loc_82205DD8;
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r9,r11,332
	ctx.r9.s64 = ctx.r11.s64 + 332;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82205D7C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r4,r5,r7
	temp.u8 = (~ctx.r5.u32 + ctx.r7.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// addi r3,r11,47
	ctx.r3.s64 = ctx.r11.s64 + 47;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82205d7c
	if (ctx.cr6.eq) goto loc_82205D7C;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82205dd8
	if (ctx.cr6.eq) goto loc_82205DD8;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82205DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_82205DD8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82205df8
	if (ctx.cr6.eq) goto loc_82205DF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82205DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82205DF8:
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

__attribute__((alias("__imp__sub_82205E10"))) PPC_WEAK_FUNC(sub_82205E10);
PPC_FUNC_IMPL(__imp__sub_82205E10) {
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
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82205E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82205e60
	if (ctx.cr6.eq) goto loc_82205E60;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82205E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82205E60:
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

__attribute__((alias("__imp__sub_82205E74"))) PPC_WEAK_FUNC(sub_82205E74);
PPC_FUNC_IMPL(__imp__sub_82205E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82205E78"))) PPC_WEAK_FUNC(sub_82205E78);
PPC_FUNC_IMPL(__imp__sub_82205E78) {
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
	// lwz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// addi r9,r3,332
	ctx.r9.s64 = ctx.r3.s64 + 332;
	// addi r10,r11,47
	ctx.r10.s64 = ctx.r11.s64 + 47;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x82205ed0
	if (!ctx.cr6.eq) goto loc_82205ED0;
	// lwz r10,596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
loc_82205EA4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r5,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// addi r4,r11,47
	ctx.r4.s64 = ctx.r11.s64 + 47;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82205ea4
	if (ctx.cr6.eq) goto loc_82205EA4;
loc_82205ED0:
	// lwz r8,596(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r11,38
	ctx.r6.s64 = ctx.r11.s64 + 38;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r8,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// lwzx r3,r5,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// bl 0x821eb290
	ctx.lr = 0x82205F20;
	sub_821EB290(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82205F30"))) PPC_WEAK_FUNC(sub_82205F30);
PPC_FUNC_IMPL(__imp__sub_82205F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,596(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r3,332
	ctx.r7.s64 = ctx.r3.s64 + 332;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82205f78
	if (!ctx.cr6.gt) goto loc_82205F78;
	// addi r10,r7,220
	ctx.r10.s64 = ctx.r7.s64 + 220;
loc_82205F4C:
	// lwz r8,272(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,-212(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -212);
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	// lwz r9,596(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82205f4c
	if (ctx.cr6.lt) goto loc_82205F4C;
loc_82205F78:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r8,r7,220
	ctx.r8.s64 = ctx.r7.s64 + 220;
	// addi r9,r7,8
	ctx.r9.s64 = ctx.r7.s64 + 8;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82205F90:
	// lwz r11,180(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bne cr6,0x82205fe0
	if (!ctx.cr6.eq) goto loc_82205FE0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82205fbc
	if (ctx.cr6.lt) goto loc_82205FBC;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 196, ctx.r7.u32);
loc_82205FBC:
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82206054
	if (ctx.cr6.lt) goto loc_82206054;
	// lwz r4,272(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r7.u32);
	// b 0x82206054
	goto loc_82206054;
loc_82205FE0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82205ffc
	if (ctx.cr6.lt) goto loc_82205FFC;
	// lwz r4,272(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r5.u32);
loc_82205FFC:
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8220601c
	if (ctx.cr6.lt) goto loc_8220601C;
	// lwz r4,272(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r5.u32);
loc_8220601C:
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r10,36(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfsu f0,4(r8)
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
loc_82206054:
	// lwz r11,596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82205f90
	if (ctx.cr6.lt) goto loc_82205F90;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8220606C"))) PPC_WEAK_FUNC(sub_8220606C);
PPC_FUNC_IMPL(__imp__sub_8220606C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82206070"))) PPC_WEAK_FUNC(sub_82206070);
PPC_FUNC_IMPL(__imp__sub_82206070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82206078;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,332
	ctx.r29.s64 = ctx.r3.s64 + 332;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82206110
	if (!ctx.cr6.gt) goto loc_82206110;
	// addi r8,r29,76
	ctx.r8.s64 = ctx.r29.s64 + 76;
	// li r10,1
	ctx.r10.s64 = 1;
loc_822060A0:
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r10,452(r5)
	PPC_STORE_U32(ctx.r5.u32 + 452, ctx.r10.u32);
	// lwz r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,708(r7)
	PPC_STORE_U32(ctx.r7.u32 + 708, ctx.r10.u32);
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,964(r4)
	PPC_STORE_U32(ctx.r4.u32 + 964, ctx.r10.u32);
	// lwz r3,596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822060a0
	if (ctx.cr6.lt) goto loc_822060A0;
loc_82206110:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82206124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r8,r3,20
	ctx.r8.s64 = ctx.r3.s64 + 20;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwzx r11,r7,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r30,196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 196, ctx.r30.u32);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r30.u32);
	// lwz r8,272(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r30,708(r6)
	PPC_STORE_U32(ctx.r6.u32 + 708, ctx.r30.u32);
	// lwz r5,272(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r30,964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 964, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82206194"))) PPC_WEAK_FUNC(sub_82206194);
PPC_FUNC_IMPL(__imp__sub_82206194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82206198"))) PPC_WEAK_FUNC(sub_82206198);
PPC_FUNC_IMPL(__imp__sub_82206198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x822061A0;
	sub_82248780(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249928
	ctx.lr = 0x822061A8;
	sub_82249928(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,332
	ctx.r11.s64 = ctx.r3.s64 + 332;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822062fc
	if (!ctx.cr6.gt) goto loc_822062FC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r28,r11,116
	ctx.r28.s64 = ctx.r11.s64 + 116;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,9052(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9052);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,10388(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10388);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,11308(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11308);
	ctx.f30.f64 = double(temp.f32);
	// addi r27,r11,30956
	ctx.r27.s64 = ctx.r11.s64 + 30956;
	// lfs f31,-31244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31244);
	ctx.f31.f64 = double(temp.f32);
loc_822061F0:
	// lwz r11,-36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -36);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r3,984(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	// bl 0x8224a7b8
	ctx.lr = 0x82206220;
	sub_8224A7B8(ctx, base);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// beq cr6,0x82206298
	if (ctx.cr6.eq) goto loc_82206298;
	// stfs f31,780(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 780, temp.u32);
	// stfs f31,784(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 784, temp.u32);
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stfs f31,524(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// stfs f31,528(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// lwz r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f30,524(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// stfs f30,528(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f30,268(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// stfs f30,272(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// b 0x822062e8
	goto loc_822062E8;
loc_82206298:
	// stfs f29,780(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 780, temp.u32);
	// stfs f29,784(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 784, temp.u32);
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stfs f29,524(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// stfs f29,528(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// lwz r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f28,524(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// stfs f28,528(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 528, temp.u32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f28,268(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// stfs f28,272(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
loc_822062E8:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822061f0
	if (ctx.cr6.lt) goto loc_822061F0;
loc_822062FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82249974
	ctx.lr = 0x82206308;
	sub_82249974(ctx, base);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8220630C"))) PPC_WEAK_FUNC(sub_8220630C);
PPC_FUNC_IMPL(__imp__sub_8220630C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82206310"))) PPC_WEAK_FUNC(sub_82206310);
PPC_FUNC_IMPL(__imp__sub_82206310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r9,596(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// addi r11,r3,332
	ctx.r11.s64 = ctx.r3.s64 + 332;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
loc_82206328:
	// lwz r9,272(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lfs f0,184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,-32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r6,272(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lfs f13,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r4,596(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82206328
	if (ctx.cr6.lt) goto loc_82206328;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82206374"))) PPC_WEAK_FUNC(sub_82206374);
PPC_FUNC_IMPL(__imp__sub_82206374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82206378"))) PPC_WEAK_FUNC(sub_82206378);
PPC_FUNC_IMPL(__imp__sub_82206378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82206380;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x822063d0
	if (!ctx.cr6.eq) goto loc_822063D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822063A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// blt cr6,0x822063c8
	if (ctx.cr6.lt) goto loc_822063C8;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bgt cr6,0x822063c8
	if (ctx.cr6.gt) goto loc_822063C8;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r10.u32);
	// b 0x822063d0
	goto loc_822063D0;
loc_822063C8:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r30,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r30.u32);
loc_822063D0:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822063e4
	if (!ctx.cr6.eq) goto loc_822063E4;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r30,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r30.u32);
loc_822063E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822058f8
	ctx.lr = 0x822063EC;
	sub_822058F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x822063F4;
	sub_82163DF0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r30,r31,600
	ctx.r30.s64 = ctx.r31.s64 + 600;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r11,1628
	ctx.r3.s64 = ctx.r11.s64 + 1628;
	// bl 0x820d8178
	ctx.lr = 0x8220641C;
	sub_820D8178(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82211d70
	ctx.lr = 0x82206428;
	sub_82211D70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82206430"))) PPC_WEAK_FUNC(sub_82206430);
PPC_FUNC_IMPL(__imp__sub_82206430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82206438;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,332
	ctx.r11.s64 = ctx.r3.s64 + 332;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822065fc
	if (!ctx.cr6.gt) goto loc_822065FC;
	// addi r30,r11,112
	ctx.r30.s64 = ctx.r11.s64 + 112;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_82206464:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x8220646C;
	sub_8218B408(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// bne cr6,0x822064a8
	if (!ctx.cr6.eq) goto loc_822064A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x82206494;
	sub_8218B408(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_822064A8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f7,712(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 712, temp.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f6,716(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 716, temp.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,720(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 720, temp.u32);
	// lwz r5,272(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfs f7,968(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 968, temp.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f6,972(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 972, temp.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stfs f3,976(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 976, temp.u32);
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfs f7,456(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f6,460(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 460, temp.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stfs f3,464(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 464, temp.u32);
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stfs f7,712(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 712, temp.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f6,716(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 716, temp.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f3,720(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 720, temp.u32);
	// lwz r7,596(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82206464
	if (ctx.cr6.lt) goto loc_82206464;
loc_822065FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82206608"))) PPC_WEAK_FUNC(sub_82206608);
PPC_FUNC_IMPL(__imp__sub_82206608) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220662C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,130
	ctx.r9.s64 = ctx.r3.s64 + 130;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x822066c4
	if (!ctx.cr6.eq) goto loc_822066C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x82206648;
	sub_821EBB58(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82206658;
	sub_8215BD08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x8215bd08
	ctx.lr = 0x82206668;
	sub_8215BD08(ctx, base);
	// bl 0x8216cdf0
	ctx.lr = 0x8220666C;
	sub_8216CDF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220667c
	if (!ctx.cr6.eq) goto loc_8220667C;
	// li r11,30228
	ctx.r11.s64 = 30228;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8220667C:
	// bl 0x8222e080
	ctx.lr = 0x82206680;
	sub_8222E080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82206690
	if (!ctx.cr6.eq) goto loc_82206690;
	// li r11,30522
	ctx.r11.s64 = 30522;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82206690:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-784(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822066AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_822066C4:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_822066DC"))) PPC_WEAK_FUNC(sub_822066DC);
PPC_FUNC_IMPL(__imp__sub_822066DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822066E0"))) PPC_WEAK_FUNC(sub_822066E0);
PPC_FUNC_IMPL(__imp__sub_822066E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x822066E8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,280(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-6176
	ctx.r8.s64 = ctx.r11.s64 + -6176;
	// addi r7,r10,-6312
	ctx.r7.s64 = ctx.r10.s64 + -6312;
	// addi r6,r9,-6320
	ctx.r6.s64 = ctx.r9.s64 + -6320;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// addi r29,r31,256
	ctx.r29.s64 = ctx.r31.s64 + 256;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220673c
	if (ctx.cr6.eq) goto loc_8220673C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220673C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220673C:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82206764
	if (ctx.cr6.eq) goto loc_82206764;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82206764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82206764:
	// stw r28,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206310
	ctx.lr = 0x82206770;
	sub_82206310(ctx, base);
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x823c3048
	ctx.lr = 0x82206778;
	sub_823C3048(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x82206780;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x82206788;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82206790;
	sub_823C3BC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82206798"))) PPC_WEAK_FUNC(sub_82206798);
PPC_FUNC_IMPL(__imp__sub_82206798) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82206ee8
	sub_82206EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822067A0"))) PPC_WEAK_FUNC(sub_822067A0);
PPC_FUNC_IMPL(__imp__sub_822067A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x82206ee8
	sub_82206EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822067A8"))) PPC_WEAK_FUNC(sub_822067A8);
PPC_FUNC_IMPL(__imp__sub_822067A8) {
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
	// addi r3,r3,284
	ctx.r3.s64 = ctx.r3.s64 + 284;
	// bl 0x823c3410
	ctx.lr = 0x822067C8;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x822067D0;
	sub_823C3C70(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821ebaa8
	ctx.lr = 0x822067D8;
	sub_821EBAA8(ctx, base);
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82206854
	if (!ctx.cr6.eq) goto loc_82206854;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822067F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// blt cr6,0x8220681c
	if (ctx.cr6.lt) goto loc_8220681C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82206814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// ble cr6,0x82206854
	if (!ctx.cr6.gt) goto loc_82206854;
loc_8220681C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82206834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,130
	ctx.r9.s64 = ctx.r3.s64 + 130;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8220684c
	if (!ctx.cr6.eq) goto loc_8220684C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8220684C:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r30,612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 612, ctx.r30.u32);
loc_82206854:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82205e78
	ctx.lr = 0x8220685C;
	sub_82205E78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82205f30
	ctx.lr = 0x82206864;
	sub_82205F30(ctx, base);
	// bl 0x822059d8
	ctx.lr = 0x82206868;
	sub_822059D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206070
	ctx.lr = 0x82206870;
	sub_82206070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206198
	ctx.lr = 0x82206878;
	sub_82206198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206378
	ctx.lr = 0x82206880;
	sub_82206378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82205a70
	ctx.lr = 0x82206888;
	sub_82205A70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206430
	ctx.lr = 0x82206890;
	sub_82206430(ctx, base);
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

__attribute__((alias("__imp__sub_822068A8"))) PPC_WEAK_FUNC(sub_822068A8);
PPC_FUNC_IMPL(__imp__sub_822068A8) {
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
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82206940
	if (!ctx.cr6.eq) goto loc_82206940;
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r31,r3,-28
	ctx.r31.s64 = ctx.r3.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822068E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// blt cr6,0x82206908
	if (ctx.cr6.lt) goto loc_82206908;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82206900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// ble cr6,0x82206940
	if (!ctx.cr6.gt) goto loc_82206940;
loc_82206908:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82206920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,123
	ctx.r9.s64 = ctx.r3.s64 + 123;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82206938
	if (!ctx.cr6.eq) goto loc_82206938;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82206938:
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// stw r31,612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 612, ctx.r31.u32);
loc_82206940:
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206070
	ctx.lr = 0x8220694C;
	sub_82206070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206378
	ctx.lr = 0x82206954;
	sub_82206378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82205a70
	ctx.lr = 0x8220695C;
	sub_82205A70(ctx, base);
	// lwz r11,-28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82206970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,114
	ctx.r9.s64 = ctx.r3.s64 + 114;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// bl 0x821eb290
	ctx.lr = 0x82206984;
	sub_821EB290(ctx, base);
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

__attribute__((alias("__imp__sub_8220699C"))) PPC_WEAK_FUNC(sub_8220699C);
PPC_FUNC_IMPL(__imp__sub_8220699C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822069A0"))) PPC_WEAK_FUNC(sub_822069A0);
PPC_FUNC_IMPL(__imp__sub_822069A0) {
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
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r30,r3,-28
	ctx.r30.s64 = ctx.r3.s64 + -28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822069D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,123
	ctx.r9.s64 = ctx.r3.s64 + 123;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x822069ec
	if (!ctx.cr6.eq) goto loc_822069EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82206a18
	goto loc_82206A18;
loc_822069EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82206608
	ctx.lr = 0x822069F4;
	sub_82206608(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82206a14
	if (ctx.cr6.eq) goto loc_82206A14;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r10.u32);
	// b 0x82206a18
	goto loc_82206A18;
loc_82206A14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82206A18:
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

__attribute__((alias("__imp__sub_82206A30"))) PPC_WEAK_FUNC(sub_82206A30);
PPC_FUNC_IMPL(__imp__sub_82206A30) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r30,r31,332
	ctx.r30.s64 = ctx.r31.s64 + 332;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// bl 0x8218b408
	ctx.lr = 0x82206A5C;
	sub_8218B408(ctx, base);
	// ld r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,596(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// ble cr6,0x82206b68
	if (!ctx.cr6.gt) goto loc_82206B68;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r30,112
	ctx.r9.s64 = ctx.r30.s64 + 112;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,11300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
loc_82206AE0:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stfs f13,456(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 456, temp.u32);
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f12,460(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 460, temp.u32);
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stfs f0,464(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 464, temp.u32);
	// lwz r5,272(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfs f13,712(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 712, temp.u32);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stfs f12,716(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 716, temp.u32);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stfs f0,720(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 720, temp.u32);
	// lwz r4,596(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82206ae0
	if (ctx.cr6.lt) goto loc_82206AE0;
loc_82206B68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206070
	ctx.lr = 0x82206B70;
	sub_82206070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206430
	ctx.lr = 0x82206B78;
	sub_82206430(ctx, base);
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

__attribute__((alias("__imp__sub_82206B90"))) PPC_WEAK_FUNC(sub_82206B90);
PPC_FUNC_IMPL(__imp__sub_82206B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82206B98;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r30.u32);
	// bl 0x82206430
	ctx.lr = 0x82206BB0;
	sub_82206430(ctx, base);
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r11,r31,332
	ctx.r11.s64 = ctx.r31.s64 + 332;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82206d68
	if (!ctx.cr6.gt) goto loc_82206D68;
	// addi r29,r11,116
	ctx.r29.s64 = ctx.r11.s64 + 116;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
loc_82206BD0:
	// lwz r11,-36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -36);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r27,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r27.u32);
	// lwz r5,272(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r27,452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 452, ctx.r27.u32);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r27,708(r7)
	PPC_STORE_U32(ctx.r7.u32 + 708, ctx.r27.u32);
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r27,964(r4)
	PPC_STORE_U32(ctx.r4.u32 + 964, ctx.r27.u32);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8218b408
	ctx.lr = 0x82206C3C;
	sub_8218B408(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82206C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82206c8c
	if (!ctx.cr6.eq) goto loc_82206C8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x82206C78;
	sub_8218B408(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_82206C8C:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f8,456(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 456, temp.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f6,460(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 460, temp.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,464(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 464, temp.u32);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f8,712(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 712, temp.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stfs f6,716(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 716, temp.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stfs f3,720(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 720, temp.u32);
	// lwz r4,596(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82206bd0
	if (ctx.cr6.lt) goto loc_82206BD0;
loc_82206D68:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82206D74"))) PPC_WEAK_FUNC(sub_82206D74);
PPC_FUNC_IMPL(__imp__sub_82206D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82206D78"))) PPC_WEAK_FUNC(sub_82206D78);
PPC_FUNC_IMPL(__imp__sub_82206D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82206D80;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82206D94;
	sub_823C3B68(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x82206D98;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823c58b0
	ctx.lr = 0x82206DAC;
	sub_823C58B0(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// bl 0x821859a0
	ctx.lr = 0x82206DC0;
	sub_821859A0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r7,r10,-6176
	ctx.r7.s64 = ctx.r10.s64 + -6176;
	// addi r6,r9,-6312
	ctx.r6.s64 = ctx.r9.s64 + -6312;
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// addi r5,r8,-6320
	ctx.r5.s64 = ctx.r8.s64 + -6320;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r29,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
	// bl 0x823c2ff0
	ctx.lr = 0x82206E00;
	sub_823C2FF0(ctx, base);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// li r5,268
	ctx.r5.s64 = 268;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x82206E10;
	sub_82248A40(ctx, base);
	// stw r29,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r29.u32);
	// addi r30,r31,600
	ctx.r30.s64 = ctx.r31.s64 + 600;
	// li r4,516
	ctx.r4.s64 = 516;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x82206E24;
	sub_822AA648(ctx, base);
	// lis r4,-32178
	ctx.r4.s64 = -2108817408;
	// lwz r11,-792(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -792);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822058f8
	ctx.lr = 0x82206E3C;
	sub_822058F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x82206E44;
	sub_82163DF0(ctx, base);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// addi r3,r11,1628
	ctx.r3.s64 = ctx.r11.s64 + 1628;
	// bl 0x820d8178
	ctx.lr = 0x82206E68;
	sub_820D8178(ctx, base);
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ctx.r30.u64;
	// bl 0x82182e90
	ctx.lr = 0x82206E78;
	sub_82182E90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82206E80;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82206E8C;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82206E90;
	sub_82183850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82206ea8
	if (ctx.cr6.eq) goto loc_82206EA8;
	// li r3,616
	ctx.r3.s64 = 616;
	// bl 0x82183448
	ctx.lr = 0x82206EA4;
	sub_82183448(ctx, base);
	// b 0x82206eb0
	goto loc_82206EB0;
loc_82206EA8:
	// li r3,39
	ctx.r3.s64 = 39;
	// bl 0x821845a0
	ctx.lr = 0x82206EB0;
	sub_821845A0(ctx, base);
loc_82206EB0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82206ec4
	if (ctx.cr6.eq) goto loc_82206EC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82211df8
	ctx.lr = 0x82206EC0;
	sub_82211DF8(ctx, base);
	// b 0x82206ec8
	goto loc_82206EC8;
loc_82206EC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82206EC8:
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822067a8
	ctx.lr = 0x82206ED4;
	sub_822067A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82206EDC;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82206EE8"))) PPC_WEAK_FUNC(sub_82206EE8);
PPC_FUNC_IMPL(__imp__sub_82206EE8) {
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
	// bl 0x822066e0
	ctx.lr = 0x82206F08;
	sub_822066E0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82206f24
	if (ctx.cr6.eq) goto loc_82206F24;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82206F20;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82206F24:
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

__attribute__((alias("__imp__sub_82206F3C"))) PPC_WEAK_FUNC(sub_82206F3C);
PPC_FUNC_IMPL(__imp__sub_82206F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82206F40"))) PPC_WEAK_FUNC(sub_82206F40);
PPC_FUNC_IMPL(__imp__sub_82206F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82206F48;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82207014
	if (!ctx.cr6.eq) goto loc_82207014;
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// addi r31,r3,-28
	ctx.r31.s64 = ctx.r3.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82206F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 7, ctx.xer);
	// bgt cr6,0x82207024
	if (ctx.cr6.gt) goto loc_82207024;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82207014
	if (ctx.cr6.eq) goto loc_82207014;
	// bdz 0x82207014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82207014;
	// bdz 0x82207014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82207014;
	// bdz 0x82207014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82207014;
	// bdz 0x82207014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82207014;
	// bdz 0x82206fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82206FA0;
	// bdnz 0x82206fbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82206FBC;
loc_82206FA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82206FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82206FBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206b90
	ctx.lr = 0x82206FC4;
	sub_82206B90(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x82206FC8;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82206FD0;
	sub_82183078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82206FDC;
	sub_821837D0(ctx, base);
	// li r3,404
	ctx.r3.s64 = 404;
	// bl 0x82080000
	ctx.lr = 0x82206FE4;
	sub_82080000(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82206ff4
	if (ctx.cr6.eq) goto loc_82206FF4;
	// bl 0x82157e08
	ctx.lr = 0x82206FF0;
	sub_82157E08(ctx, base);
	// b 0x82206ff8
	goto loc_82206FF8;
loc_82206FF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82206FF8:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1088, ctx.r11.u32);
	// bl 0x821837d0
	ctx.lr = 0x8220700C;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82207014:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1088, ctx.r10.u32);
	// stw r11,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r11.u32);
loc_82207024:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8220702C"))) PPC_WEAK_FUNC(sub_8220702C);
PPC_FUNC_IMPL(__imp__sub_8220702C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82207030"))) PPC_WEAK_FUNC(sub_82207030);
PPC_FUNC_IMPL(__imp__sub_82207030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82207038;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x82207044;
	sub_82163DF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82165b50
	ctx.lr = 0x82207050;
	sub_82165B50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82164e00
	ctx.lr = 0x8220705C;
	sub_82164E00(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// bge cr6,0x82207094
	if (!ctx.cr6.lt) goto loc_82207094;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,9999
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9999, ctx.xer);
	// bge cr6,0x82207094
	if (!ctx.cr6.lt) goto loc_82207094;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// bl 0x82206b90
	ctx.lr = 0x82207084;
	sub_82206B90(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82211bb0
	ctx.lr = 0x8220708C;
	sub_82211BB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82207094:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x8220709C;
	sub_821EBB58(ctx, base);
	// li r11,30186
	ctx.r11.s64 = 30186;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x8215bd08
	ctx.lr = 0x822070B8;
	sub_8215BD08(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r3,-784(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -784);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822070E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

