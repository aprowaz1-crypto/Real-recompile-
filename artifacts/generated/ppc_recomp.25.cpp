#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821561C8"))) PPC_WEAK_FUNC(sub_821561C8);
PPC_FUNC_IMPL(__imp__sub_821561C8) {
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
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x821561f8
	if (!ctx.cr0.eq) goto loc_821561F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82156214
	goto loc_82156214;
loc_821561F8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82156118
	ctx.lr = 0x82156200;
	sub_82156118(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223418
	ctx.lr = 0x82156214;
	sub_82223418(ctx, base);
loc_82156214:
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

__attribute__((alias("__imp__sub_8215622C"))) PPC_WEAK_FUNC(sub_8215622C);
PPC_FUNC_IMPL(__imp__sub_8215622C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156230"))) PPC_WEAK_FUNC(sub_82156230);
PPC_FUNC_IMPL(__imp__sub_82156230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8215624c
	if (!ctx.cr0.eq) goto loc_8215624C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8215624C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,45
	ctx.r6.s64 = 45;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82223688
	sub_82223688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215625C"))) PPC_WEAK_FUNC(sub_8215625C);
PPC_FUNC_IMPL(__imp__sub_8215625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156260"))) PPC_WEAK_FUNC(sub_82156260);
PPC_FUNC_IMPL(__imp__sub_82156260) {
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
	// lwz r31,-744(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x82156290
	if (!ctx.cr0.eq) goto loc_82156290;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821562ac
	goto loc_821562AC;
loc_82156290:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82156118
	ctx.lr = 0x82156298;
	sub_82156118(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223418
	ctx.lr = 0x821562AC;
	sub_82223418(ctx, base);
loc_821562AC:
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

__attribute__((alias("__imp__sub_821562C4"))) PPC_WEAK_FUNC(sub_821562C4);
PPC_FUNC_IMPL(__imp__sub_821562C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821562C8"))) PPC_WEAK_FUNC(sub_821562C8);
PPC_FUNC_IMPL(__imp__sub_821562C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821562e4
	if (!ctx.cr0.eq) goto loc_821562E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821562E4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82225190
	sub_82225190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821562EC"))) PPC_WEAK_FUNC(sub_821562EC);
PPC_FUNC_IMPL(__imp__sub_821562EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821562F0"))) PPC_WEAK_FUNC(sub_821562F0);
PPC_FUNC_IMPL(__imp__sub_821562F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8215630c
	if (!ctx.cr0.eq) goto loc_8215630C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8215630C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x822235a8
	sub_822235A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215631C"))) PPC_WEAK_FUNC(sub_8215631C);
PPC_FUNC_IMPL(__imp__sub_8215631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156320"))) PPC_WEAK_FUNC(sub_82156320);
PPC_FUNC_IMPL(__imp__sub_82156320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8215633c
	if (!ctx.cr0.eq) goto loc_8215633C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8215633C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82221f08
	sub_82221F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215634C"))) PPC_WEAK_FUNC(sub_8215634C);
PPC_FUNC_IMPL(__imp__sub_8215634C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156350"))) PPC_WEAK_FUNC(sub_82156350);
PPC_FUNC_IMPL(__imp__sub_82156350) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82228b00
	ctx.lr = 0x8215636C;
	sub_82228B00(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821563a4
	if (ctx.cr0.eq) goto loc_821563A4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822235a8
	ctx.lr = 0x8215638C;
	sub_822235A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821563a4
	if (ctx.cr0.eq) goto loc_821563A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82229288
	ctx.lr = 0x821563A0;
	sub_82229288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821563A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_821563BC"))) PPC_WEAK_FUNC(sub_821563BC);
PPC_FUNC_IMPL(__imp__sub_821563BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821563C0"))) PPC_WEAK_FUNC(sub_821563C0);
PPC_FUNC_IMPL(__imp__sub_821563C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821563d4
	if (!ctx.cr0.eq) goto loc_821563D4;
	// blr 
	return;
loc_821563D4:
	// b 0x82221f90
	sub_82221F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821563D8"))) PPC_WEAK_FUNC(sub_821563D8);
PPC_FUNC_IMPL(__imp__sub_821563D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821563ec
	if (!ctx.cr0.eq) goto loc_821563EC;
	// blr 
	return;
loc_821563EC:
	// b 0x82221fe8
	sub_82221FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821563F0"))) PPC_WEAK_FUNC(sub_821563F0);
PPC_FUNC_IMPL(__imp__sub_821563F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8215640c
	if (!ctx.cr0.eq) goto loc_8215640C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8215640C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82223760
	sub_82223760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82156418"))) PPC_WEAK_FUNC(sub_82156418);
PPC_FUNC_IMPL(__imp__sub_82156418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82156434
	if (!ctx.cr0.eq) goto loc_82156434;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82156434:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x822235a8
	sub_822235A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82156444"))) PPC_WEAK_FUNC(sub_82156444);
PPC_FUNC_IMPL(__imp__sub_82156444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156448"))) PPC_WEAK_FUNC(sub_82156448);
PPC_FUNC_IMPL(__imp__sub_82156448) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82229288
	ctx.lr = 0x82156464;
	sub_82229288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82156474
	if (!ctx.cr0.lt) goto loc_82156474;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82156488
	goto loc_82156488;
loc_82156474:
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// ori r5,r11,38527
	ctx.r5.u64 = ctx.r11.u64 | 38527;
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x82156488
	if (ctx.cr6.gt) goto loc_82156488;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82156488:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229278
	ctx.lr = 0x82156494;
	sub_82229278(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229288
	ctx.lr = 0x821564A0;
	sub_82229288(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_821564BC"))) PPC_WEAK_FUNC(sub_821564BC);
PPC_FUNC_IMPL(__imp__sub_821564BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821564C0"))) PPC_WEAK_FUNC(sub_821564C0);
PPC_FUNC_IMPL(__imp__sub_821564C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82228b00
	ctx.lr = 0x821564E4;
	sub_82228B00(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-744(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215651c
	if (ctx.cr0.eq) goto loc_8215651C;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822235a8
	ctx.lr = 0x82156504;
	sub_822235A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215651c
	if (ctx.cr0.eq) goto loc_8215651C;
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8215651c
	if (ctx.cr6.eq) goto loc_8215651C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8215651C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82156538"))) PPC_WEAK_FUNC(sub_82156538);
PPC_FUNC_IMPL(__imp__sub_82156538) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156548"))) PPC_WEAK_FUNC(sub_82156548);
PPC_FUNC_IMPL(__imp__sub_82156548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82156550;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-25304
	ctx.r11.s64 = ctx.r11.s64 + -25304;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82183078
	ctx.lr = 0x82156570;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215657C;
	sub_821837D0(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82156594
	if (!ctx.cr6.gt) goto loc_82156594;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82156594:
	// bl 0x82080d68
	ctx.lr = 0x82156598;
	sub_82080D68(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821565c4
	if (!ctx.cr6.gt) goto loc_821565C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821565B0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821565b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821565B0;
loc_821565C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x821565CC;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821565D8"))) PPC_WEAK_FUNC(sub_821565D8);
PPC_FUNC_IMPL(__imp__sub_821565D8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821565E0"))) PPC_WEAK_FUNC(sub_821565E0);
PPC_FUNC_IMPL(__imp__sub_821565E0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-25304
	ctx.r11.s64 = ctx.r11.s64 + -25304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82156614
	if (ctx.cr6.eq) goto loc_82156614;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82156614;
	sub_82183E40(ctx, base);
loc_82156614:
	// li r11,0
	ctx.r11.s64 = 0;
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

__attribute__((alias("__imp__sub_82156630"))) PPC_WEAK_FUNC(sub_82156630);
PPC_FUNC_IMPL(__imp__sub_82156630) {
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
	// bl 0x82156548
	ctx.lr = 0x82156648;
	sub_82156548(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25284
	ctx.r11.s64 = ctx.r11.s64 + -25284;
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

__attribute__((alias("__imp__sub_8215666C"))) PPC_WEAK_FUNC(sub_8215666C);
PPC_FUNC_IMPL(__imp__sub_8215666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156670"))) PPC_WEAK_FUNC(sub_82156670);
PPC_FUNC_IMPL(__imp__sub_82156670) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82156678:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82156688
	if (!ctx.cr0.lt) goto loc_82156688;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82156688:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x82156678
	if (ctx.cr6.eq) goto loc_82156678;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821566A0"))) PPC_WEAK_FUNC(sub_821566A0);
PPC_FUNC_IMPL(__imp__sub_821566A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_821566B0:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r8,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821566b0
	if (ctx.cr6.eq) goto loc_821566B0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821566DC"))) PPC_WEAK_FUNC(sub_821566DC);
PPC_FUNC_IMPL(__imp__sub_821566DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821566E0"))) PPC_WEAK_FUNC(sub_821566E0);
PPC_FUNC_IMPL(__imp__sub_821566E0) {
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
	// addi r11,r11,-25284
	ctx.r11.s64 = ctx.r11.s64 + -25284;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821565e0
	ctx.lr = 0x8215670C;
	sub_821565E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82156720
	if (ctx.cr0.eq) goto loc_82156720;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82156720;
	sub_82183E40(ctx, base);
loc_82156720:
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

__attribute__((alias("__imp__sub_8215673C"))) PPC_WEAK_FUNC(sub_8215673C);
PPC_FUNC_IMPL(__imp__sub_8215673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156740"))) PPC_WEAK_FUNC(sub_82156740);
PPC_FUNC_IMPL(__imp__sub_82156740) {
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
	// bl 0x821565e0
	ctx.lr = 0x82156760;
	sub_821565E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82156774
	if (ctx.cr0.eq) goto loc_82156774;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82156774;
	sub_82183E40(ctx, base);
loc_82156774:
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

__attribute__((alias("__imp__sub_82156790"))) PPC_WEAK_FUNC(sub_82156790);
PPC_FUNC_IMPL(__imp__sub_82156790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82156798;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156818
	if (ctx.cr6.eq) goto loc_82156818;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82156818
	if (ctx.cr0.eq) goto loc_82156818;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x821567C4;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x821567D0;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x821567E0;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x821567EC;
	sub_821AD498(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,398
	ctx.r4.s64 = 398;
	// bl 0x8210a9b0
	ctx.lr = 0x82156800;
	sub_8210A9B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x8215680C;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82156818;
	sub_821AD498(ctx, base);
loc_82156818:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82156820"))) PPC_WEAK_FUNC(sub_82156820);
PPC_FUNC_IMPL(__imp__sub_82156820) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addis r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 327680;
	// addic. r11,r11,-25856
	ctx.xer.ca = ctx.r11.u32 > 25855;
	ctx.r11.s64 = ctx.r11.s64 + -25856;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82156854
	if (ctx.cr0.eq) goto loc_82156854;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82156880
	if (ctx.cr6.eq) goto loc_82156880;
loc_82156854:
	// li r4,1179
	ctx.r4.s64 = 1179;
	// bl 0x82106eb0
	ctx.lr = 0x8215685C;
	sub_82106EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82156868
	if (ctx.cr0.eq) goto loc_82156868;
	// bl 0x821d38e8
	ctx.lr = 0x82156868;
	sub_821D38E8(ctx, base);
loc_82156868:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,39876
	ctx.r10.u64 = ctx.r10.u64 | 39876;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82156880:
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

__attribute__((alias("__imp__sub_82156894"))) PPC_WEAK_FUNC(sub_82156894);
PPC_FUNC_IMPL(__imp__sub_82156894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156898"))) PPC_WEAK_FUNC(sub_82156898);
PPC_FUNC_IMPL(__imp__sub_82156898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,39876
	ctx.r10.u64 = ctx.r10.u64 | 39876;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821568B4"))) PPC_WEAK_FUNC(sub_821568B4);
PPC_FUNC_IMPL(__imp__sub_821568B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821568B8"))) PPC_WEAK_FUNC(sub_821568B8);
PPC_FUNC_IMPL(__imp__sub_821568B8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821859a0
	ctx.lr = 0x821568DC;
	sub_821859A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// addi r11,r11,-25264
	ctx.r11.s64 = ctx.r11.s64 + -25264;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,39876
	ctx.r9.u64 = ctx.r9.u64 | 39876;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8215692C"))) PPC_WEAK_FUNC(sub_8215692C);
PPC_FUNC_IMPL(__imp__sub_8215692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156930"))) PPC_WEAK_FUNC(sub_82156930);
PPC_FUNC_IMPL(__imp__sub_82156930) {
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
	// addi r11,r11,-25264
	ctx.r11.s64 = ctx.r11.s64 + -25264;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82185a50
	ctx.lr = 0x8215695C;
	sub_82185A50(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82156970
	if (ctx.cr0.eq) goto loc_82156970;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82156970;
	sub_82183E40(ctx, base);
loc_82156970:
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

__attribute__((alias("__imp__sub_8215698C"))) PPC_WEAK_FUNC(sub_8215698C);
PPC_FUNC_IMPL(__imp__sub_8215698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156990"))) PPC_WEAK_FUNC(sub_82156990);
PPC_FUNC_IMPL(__imp__sub_82156990) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-25256
	ctx.r11.s64 = ctx.r11.s64 + -25256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821569c4
	if (ctx.cr6.eq) goto loc_821569C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x821569C4;
	sub_82183E40(ctx, base);
loc_821569C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x821857f0
	ctx.lr = 0x821569D4;
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

__attribute__((alias("__imp__sub_821569E8"))) PPC_WEAK_FUNC(sub_821569E8);
PPC_FUNC_IMPL(__imp__sub_821569E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82156a04
	if (!ctx.cr6.eq) goto loc_82156A04;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82156A04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156A0C"))) PPC_WEAK_FUNC(sub_82156A0C);
PPC_FUNC_IMPL(__imp__sub_82156A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156A10"))) PPC_WEAK_FUNC(sub_82156A10);
PPC_FUNC_IMPL(__imp__sub_82156A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156A18"))) PPC_WEAK_FUNC(sub_82156A18);
PPC_FUNC_IMPL(__imp__sub_82156A18) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x82156A50;
	sub_822AA648(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x822aa648
	ctx.lr = 0x82156A64;
	sub_822AA648(ctx, base);
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x822aa648
	ctx.lr = 0x82156A70;
	sub_822AA648(ctx, base);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82156A90"))) PPC_WEAK_FUNC(sub_82156A90);
PPC_FUNC_IMPL(__imp__sub_82156A90) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x82156AB4;
	sub_82185740(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-25256
	ctx.r11.s64 = ctx.r11.s64 + -25256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82156a18
	ctx.lr = 0x82156ACC;
	sub_82156A18(ctx, base);
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

__attribute__((alias("__imp__sub_82156AE8"))) PPC_WEAK_FUNC(sub_82156AE8);
PPC_FUNC_IMPL(__imp__sub_82156AE8) {
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
	// bl 0x82156990
	ctx.lr = 0x82156B08;
	sub_82156990(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82156b1c
	if (ctx.cr0.eq) goto loc_82156B1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82156B1C;
	sub_82183E40(ctx, base);
loc_82156B1C:
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

__attribute__((alias("__imp__sub_82156B38"))) PPC_WEAK_FUNC(sub_82156B38);
PPC_FUNC_IMPL(__imp__sub_82156B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82156B40;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82156c4c
	if (ctx.cr6.eq) goto loc_82156C4C;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82156c4c
	if (!ctx.cr6.lt) goto loc_82156C4C;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r30,r3,80
	ctx.r30.s64 = ctx.r3.s64 + 80;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,256
	ctx.r8.s64 = 256;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x82156B88;
	sub_82256BE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224a830
	ctx.lr = 0x82156B90;
	sub_8224A830(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// stw r30,38(r31)
	PPC_STORE_U32(ctx.r31.u32 + 38, ctx.r30.u32);
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// beq 0x82156c4c
	if (ctx.cr0.eq) goto loc_82156C4C;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82183078
	ctx.lr = 0x82156BB8;
	sub_82183078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82156BC4;
	sub_821837D0(ctx, base);
	// bl 0x82183850
	ctx.lr = 0x82156BC8;
	sub_82183850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x82156be0
	if (ctx.cr0.eq) goto loc_82156BE0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82183448
	ctx.lr = 0x82156BDC;
	sub_82183448(ctx, base);
	// b 0x82156bf0
	goto loc_82156BF0;
loc_82156BE0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// bl 0x821845a0
	ctx.lr = 0x82156BF0;
	sub_821845A0(ctx, base);
loc_82156BF0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// bl 0x82248f70
	ctx.lr = 0x82156C00;
	sub_82248F70(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r11,-25248
	ctx.r4.s64 = ctx.r11.s64 + -25248;
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8234f538
	ctx.lr = 0x82156C24;
	sub_8234F538(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82156c3c
	if (!ctx.cr6.lt) goto loc_82156C3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82156C3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82156C44;
	sub_821837D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82156c50
	goto loc_82156C50;
loc_82156C4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82156C50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82156C58"))) PPC_WEAK_FUNC(sub_82156C58);
PPC_FUNC_IMPL(__imp__sub_82156C58) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82156c7c
	if (!ctx.cr6.eq) goto loc_82156C7C;
	// bl 0x82156a18
	ctx.lr = 0x82156C74;
	sub_82156A18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82156c80
	goto loc_82156C80;
loc_82156C7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82156C80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156C90"))) PPC_WEAK_FUNC(sub_82156C90);
PPC_FUNC_IMPL(__imp__sub_82156C90) {
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
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// bl 0x82256cc0
	ctx.lr = 0x82156CB0;
	sub_82256CC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82156cf8
	if (!ctx.cr0.eq) goto loc_82156CF8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r10,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
	// bge cr6,0x82156ce0
	if (!ctx.cr6.lt) goto loc_82156CE0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82156CE0:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82156cf4
	if (ctx.cr6.eq) goto loc_82156CF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82156CF4;
	sub_82183E40(ctx, base);
loc_82156CF4:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82156CF8:
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

__attribute__((alias("__imp__sub_82156D10"))) PPC_WEAK_FUNC(sub_82156D10);
PPC_FUNC_IMPL(__imp__sub_82156D10) {
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
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82156d94
	if (ctx.cr6.eq) goto loc_82156D94;
	// bl 0x82256ce8
	ctx.lr = 0x82156D3C;
	sub_82256CE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82156d68
	if (ctx.cr0.eq) goto loc_82156D68;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// beq cr6,0x82156d90
	if (ctx.cr6.eq) goto loc_82156D90;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82156D64;
	sub_82183E40(ctx, base);
	// b 0x82156d90
	goto loc_82156D90;
loc_82156D68:
	// lwz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x82156d88
	if (ctx.cr6.eq) goto loc_82156D88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82183e40
	ctx.lr = 0x82156D88;
	sub_82183E40(ctx, base);
loc_82156D88:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_82156D90:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82156D94:
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

__attribute__((alias("__imp__sub_82156DAC"))) PPC_WEAK_FUNC(sub_82156DAC);
PPC_FUNC_IMPL(__imp__sub_82156DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156DB0"))) PPC_WEAK_FUNC(sub_82156DB0);
PPC_FUNC_IMPL(__imp__sub_82156DB0) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82156e20
	if (ctx.cr6.eq) goto loc_82156E20;
	// lwz r11,592(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 592, ctx.r11.u32);
	// cmplwi cr6,r11,600
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 600, ctx.xer);
	// ble cr6,0x82156df8
	if (!ctx.cr6.gt) goto loc_82156DF8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82156e20
	if (!ctx.cr6.lt) goto loc_82156E20;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82156e1c
	goto loc_82156E1C;
loc_82156DF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82156d10
	ctx.lr = 0x82156E00;
	sub_82156D10(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82156e20
	if (!ctx.cr6.eq) goto loc_82156E20;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82156e20
	if (!ctx.cr6.lt) goto loc_82156E20;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82156E1C:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82156E20:
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

__attribute__((alias("__imp__sub_82156E34"))) PPC_WEAK_FUNC(sub_82156E34);
PPC_FUNC_IMPL(__imp__sub_82156E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156E38"))) PPC_WEAK_FUNC(sub_82156E38);
PPC_FUNC_IMPL(__imp__sub_82156E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82156e58
	if (ctx.cr6.eq) goto loc_82156E58;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82156c90
	sub_82156C90(ctx, base);
	return;
loc_82156E58:
	// b 0x82156db0
	sub_82156DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82156E5C"))) PPC_WEAK_FUNC(sub_82156E5C);
PPC_FUNC_IMPL(__imp__sub_82156E5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156E60"))) PPC_WEAK_FUNC(sub_82156E60);
PPC_FUNC_IMPL(__imp__sub_82156E60) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r30,r3,40
	ctx.r30.s64 = ctx.r3.s64 + 40;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x822aa648
	ctx.lr = 0x82156EC4;
	sub_822AA648(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,26232
	ctx.r5.s64 = ctx.r11.s64 + 26232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x82156EDC;
	sub_8218A5F0(ctx, base);
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

__attribute__((alias("__imp__sub_82156EF4"))) PPC_WEAK_FUNC(sub_82156EF4);
PPC_FUNC_IMPL(__imp__sub_82156EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156EF8"))) PPC_WEAK_FUNC(sub_82156EF8);
PPC_FUNC_IMPL(__imp__sub_82156EF8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156F00"))) PPC_WEAK_FUNC(sub_82156F00);
PPC_FUNC_IMPL(__imp__sub_82156F00) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156F08"))) PPC_WEAK_FUNC(sub_82156F08);
PPC_FUNC_IMPL(__imp__sub_82156F08) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156F10"))) PPC_WEAK_FUNC(sub_82156F10);
PPC_FUNC_IMPL(__imp__sub_82156F10) {
	PPC_FUNC_PROLOGUE();
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82156F18"))) PPC_WEAK_FUNC(sub_82156F18);
PPC_FUNC_IMPL(__imp__sub_82156F18) {
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
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r30,r3,40
	ctx.r30.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822aa648
	ctx.lr = 0x82156F44;
	sub_822AA648(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,26232
	ctx.r5.s64 = ctx.r11.s64 + 26232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x82156F5C;
	sub_8218A5F0(ctx, base);
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

__attribute__((alias("__imp__sub_82156F74"))) PPC_WEAK_FUNC(sub_82156F74);
PPC_FUNC_IMPL(__imp__sub_82156F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82156F78"))) PPC_WEAK_FUNC(sub_82156F78);
PPC_FUNC_IMPL(__imp__sub_82156F78) {
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
	// bl 0x82154c88
	ctx.lr = 0x82156F90;
	sub_82154C88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82156f18
	ctx.lr = 0x82156F9C;
	sub_82156F18(ctx, base);
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

__attribute__((alias("__imp__sub_82156FB0"))) PPC_WEAK_FUNC(sub_82156FB0);
PPC_FUNC_IMPL(__imp__sub_82156FB0) {
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
	// bl 0x82156e60
	ctx.lr = 0x82156FC8;
	sub_82156E60(ctx, base);
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

__attribute__((alias("__imp__sub_82156FE0"))) PPC_WEAK_FUNC(sub_82156FE0);
PPC_FUNC_IMPL(__imp__sub_82156FE0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8215bd60
	ctx.lr = 0x82157000;
	sub_8215BD60(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82157024"))) PPC_WEAK_FUNC(sub_82157024);
PPC_FUNC_IMPL(__imp__sub_82157024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157028"))) PPC_WEAK_FUNC(sub_82157028);
PPC_FUNC_IMPL(__imp__sub_82157028) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215703c
	if (ctx.cr6.eq) goto loc_8215703C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
loc_8215703C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157044"))) PPC_WEAK_FUNC(sub_82157044);
PPC_FUNC_IMPL(__imp__sub_82157044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157048"))) PPC_WEAK_FUNC(sub_82157048);
PPC_FUNC_IMPL(__imp__sub_82157048) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215705c
	if (ctx.cr6.eq) goto loc_8215705C;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
loc_8215705C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157064"))) PPC_WEAK_FUNC(sub_82157064);
PPC_FUNC_IMPL(__imp__sub_82157064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157068"))) PPC_WEAK_FUNC(sub_82157068);
PPC_FUNC_IMPL(__imp__sub_82157068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215707c
	if (ctx.cr6.eq) goto loc_8215707C;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
loc_8215707C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157084"))) PPC_WEAK_FUNC(sub_82157084);
PPC_FUNC_IMPL(__imp__sub_82157084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157088"))) PPC_WEAK_FUNC(sub_82157088);
PPC_FUNC_IMPL(__imp__sub_82157088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215709c
	if (ctx.cr6.eq) goto loc_8215709C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
loc_8215709C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821570A4"))) PPC_WEAK_FUNC(sub_821570A4);
PPC_FUNC_IMPL(__imp__sub_821570A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821570A8"))) PPC_WEAK_FUNC(sub_821570A8);
PPC_FUNC_IMPL(__imp__sub_821570A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821570bc
	if (ctx.cr6.eq) goto loc_821570BC;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
loc_821570BC:
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821570C4"))) PPC_WEAK_FUNC(sub_821570C4);
PPC_FUNC_IMPL(__imp__sub_821570C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821570C8"))) PPC_WEAK_FUNC(sub_821570C8);
PPC_FUNC_IMPL(__imp__sub_821570C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821570dc
	if (ctx.cr6.eq) goto loc_821570DC;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
loc_821570DC:
	// li r3,135
	ctx.r3.s64 = 135;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821570E4"))) PPC_WEAK_FUNC(sub_821570E4);
PPC_FUNC_IMPL(__imp__sub_821570E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821570E8"))) PPC_WEAK_FUNC(sub_821570E8);
PPC_FUNC_IMPL(__imp__sub_821570E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821570fc
	if (ctx.cr6.eq) goto loc_821570FC;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blr 
	return;
loc_821570FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157104"))) PPC_WEAK_FUNC(sub_82157104);
PPC_FUNC_IMPL(__imp__sub_82157104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157108"))) PPC_WEAK_FUNC(sub_82157108);
PPC_FUNC_IMPL(__imp__sub_82157108) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8214a8d0
	ctx.lr = 0x82157128;
	sub_8214A8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82157144
	if (ctx.cr0.eq) goto loc_82157144;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214aae0
	ctx.lr = 0x82157140;
	sub_8214AAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82157144:
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

__attribute__((alias("__imp__sub_82157160"))) PPC_WEAK_FUNC(sub_82157160);
PPC_FUNC_IMPL(__imp__sub_82157160) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8214a8d0
	ctx.lr = 0x82157180;
	sub_8214A8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215719c
	if (ctx.cr0.eq) goto loc_8215719C;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214ad80
	ctx.lr = 0x82157198;
	sub_8214AD80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8215719C:
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

__attribute__((alias("__imp__sub_821571B8"))) PPC_WEAK_FUNC(sub_821571B8);
PPC_FUNC_IMPL(__imp__sub_821571B8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823c34c0
	ctx.lr = 0x821571D8;
	sub_823C34C0(ctx, base);
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

__attribute__((alias("__imp__sub_821571F0"))) PPC_WEAK_FUNC(sub_821571F0);
PPC_FUNC_IMPL(__imp__sub_821571F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c30b8
	sub_823C30B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821571F4"))) PPC_WEAK_FUNC(sub_821571F4);
PPC_FUNC_IMPL(__imp__sub_821571F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821571F8"))) PPC_WEAK_FUNC(sub_821571F8);
PPC_FUNC_IMPL(__imp__sub_821571F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-25236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25236);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157218"))) PPC_WEAK_FUNC(sub_82157218);
PPC_FUNC_IMPL(__imp__sub_82157218) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3410
	sub_823C3410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215721C"))) PPC_WEAK_FUNC(sub_8215721C);
PPC_FUNC_IMPL(__imp__sub_8215721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157220"))) PPC_WEAK_FUNC(sub_82157220);
PPC_FUNC_IMPL(__imp__sub_82157220) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3468
	sub_823C3468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157224"))) PPC_WEAK_FUNC(sub_82157224);
PPC_FUNC_IMPL(__imp__sub_82157224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157228"))) PPC_WEAK_FUNC(sub_82157228);
PPC_FUNC_IMPL(__imp__sub_82157228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157238"))) PPC_WEAK_FUNC(sub_82157238);
PPC_FUNC_IMPL(__imp__sub_82157238) {
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
	// bl 0x821f0050
	ctx.lr = 0x82157248;
	sub_821F0050(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_82157260"))) PPC_WEAK_FUNC(sub_82157260);
PPC_FUNC_IMPL(__imp__sub_82157260) {
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
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215729c
	if (ctx.cr0.eq) goto loc_8215729C;
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x821572a0
	if (ctx.cr6.gt) goto loc_821572A0;
loc_8215729C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821572A0:
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

__attribute__((alias("__imp__sub_821572B4"))) PPC_WEAK_FUNC(sub_821572B4);
PPC_FUNC_IMPL(__imp__sub_821572B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821572B8"))) PPC_WEAK_FUNC(sub_821572B8);
PPC_FUNC_IMPL(__imp__sub_821572B8) {
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
	// add. r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// beq 0x8215730c
	if (ctx.cr0.eq) goto loc_8215730C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,10376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8215730C:
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,-28828
	ctx.r5.s64 = ctx.r11.s64 + -28828;
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// bl 0x8218a5f0
	ctx.lr = 0x82157328;
	sub_8218A5F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157338"))) PPC_WEAK_FUNC(sub_82157338);
PPC_FUNC_IMPL(__imp__sub_82157338) {
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
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// bl 0x82155dc0
	ctx.lr = 0x82157354;
	sub_82155DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82157380
	if (!ctx.cr0.eq) goto loc_82157380;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215736c
	if (ctx.cr6.eq) goto loc_8215736C;
	// bl 0x82156898
	ctx.lr = 0x8215736C;
	sub_82156898(ctx, base);
loc_8215736C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82157380:
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

__attribute__((alias("__imp__sub_82157394"))) PPC_WEAK_FUNC(sub_82157394);
PPC_FUNC_IMPL(__imp__sub_82157394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157398"))) PPC_WEAK_FUNC(sub_82157398);
PPC_FUNC_IMPL(__imp__sub_82157398) {
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
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,501
	ctx.r9.s64 = 501;
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,502
	ctx.r8.s64 = 502;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r4,1200
	ctx.r4.s64 = 1200;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82106f58
	ctx.lr = 0x821573D0;
	sub_82106F58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821573E0"))) PPC_WEAK_FUNC(sub_821573E0);
PPC_FUNC_IMPL(__imp__sub_821573E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821573E8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-25088
	ctx.r11.s64 = ctx.r11.s64 + -25088;
	// addi r10,r10,-25224
	ctx.r10.s64 = ctx.r10.s64 + -25224;
	// addi r9,r9,-25232
	ctx.r9.s64 = ctx.r9.s64 + -25232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r9.u32);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// addi r29,r3,256
	ctx.r29.s64 = ctx.r3.s64 + 256;
	// bl 0x8215bd60
	ctx.lr = 0x82157420;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82157438
	if (!ctx.cr6.eq) goto loc_82157438;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82221280
	ctx.lr = 0x82157438;
	sub_82221280(ctx, base);
loc_82157438:
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x821ebaa8
	ctx.lr = 0x82157440;
	sub_821EBAA8(ctx, base);
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157450
	if (ctx.cr6.eq) goto loc_82157450;
	// bl 0x82145890
	ctx.lr = 0x82157450;
	sub_82145890(ctx, base);
loc_82157450:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82157470
	if (ctx.cr6.eq) goto loc_82157470;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82157470:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// bl 0x823c3048
	ctx.lr = 0x82157480;
	sub_823C3048(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82185a50
	ctx.lr = 0x82157488;
	sub_82185A50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c52a0
	ctx.lr = 0x82157490;
	sub_823C52A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc0
	ctx.lr = 0x82157498;
	sub_823C3BC0(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x8209eda0
	ctx.lr = 0x821574A0;
	sub_8209EDA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821574A8"))) PPC_WEAK_FUNC(sub_821574A8);
PPC_FUNC_IMPL(__imp__sub_821574A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82157928
	sub_82157928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821574B0"))) PPC_WEAK_FUNC(sub_821574B0);
PPC_FUNC_IMPL(__imp__sub_821574B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x82157928
	sub_82157928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821574B8"))) PPC_WEAK_FUNC(sub_821574B8);
PPC_FUNC_IMPL(__imp__sub_821574B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821574C0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,-7488(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7488);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82157568
	if (ctx.cr0.eq) goto loc_82157568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821addc0
	ctx.lr = 0x821574E0;
	sub_821ADDC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821add20
	ctx.lr = 0x821574EC;
	sub_821ADD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x821574FC;
	sub_821AD600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82157508;
	sub_821AD498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
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
	// ble cr6,0x82157550
	if (!ctx.cr6.gt) goto loc_82157550;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r10,r10,57588
	ctx.r10.u64 = ctx.r10.u64 | 57588;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,399
	ctx.r4.s64 = 399;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8210a9b0
	ctx.lr = 0x82157550;
	sub_8210A9B0(ctx, base);
loc_82157550:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad600
	ctx.lr = 0x8215755C;
	sub_821AD600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ad498
	ctx.lr = 0x82157568;
	sub_821AD498(ctx, base);
loc_82157568:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82157570"))) PPC_WEAK_FUNC(sub_82157570);
PPC_FUNC_IMPL(__imp__sub_82157570) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,280
	ctx.r3.s64 = ctx.r3.s64 + 280;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// bl 0x823c3468
	ctx.lr = 0x82157594;
	sub_823C3468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3cd8
	ctx.lr = 0x8215759C;
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

__attribute__((alias("__imp__sub_821575B0"))) PPC_WEAK_FUNC(sub_821575B0);
PPC_FUNC_IMPL(__imp__sub_821575B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821575CC"))) PPC_WEAK_FUNC(sub_821575CC);
PPC_FUNC_IMPL(__imp__sub_821575CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821575D0"))) PPC_WEAK_FUNC(sub_821575D0);
PPC_FUNC_IMPL(__imp__sub_821575D0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82221e50
	ctx.lr = 0x821575EC;
	sub_82221E50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215760c
	if (ctx.cr0.eq) goto loc_8215760C;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82157604
	if (ctx.cr6.eq) goto loc_82157604;
	// bl 0x82156898
	ctx.lr = 0x82157604;
	sub_82156898(ctx, base);
loc_82157604:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8215763c
	goto loc_8215763C;
loc_8215760C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// bl 0x821561c8
	ctx.lr = 0x8215761C;
	sub_821561C8(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215762c
	if (ctx.cr6.eq) goto loc_8215762C;
	// bl 0x82156820
	ctx.lr = 0x8215762C;
	sub_82156820(ctx, base);
loc_8215762C:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r3,-1388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// bl 0x8214a7e0
	ctx.lr = 0x82157638;
	sub_8214A7E0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8215763C:
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82157654"))) PPC_WEAK_FUNC(sub_82157654);
PPC_FUNC_IMPL(__imp__sub_82157654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157658"))) PPC_WEAK_FUNC(sub_82157658);
PPC_FUNC_IMPL(__imp__sub_82157658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82157660;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,-744(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214a978
	ctx.lr = 0x8215767C;
	sub_8214A978(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821576b4
	if (ctx.cr6.eq) goto loc_821576B4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82157694
	if (ctx.cr6.eq) goto loc_82157694;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x821576ec
	if (!ctx.cr6.eq) goto loc_821576EC;
loc_82157694:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821576a4
	if (ctx.cr6.eq) goto loc_821576A4;
	// bl 0x82156898
	ctx.lr = 0x821576A4;
	sub_82156898(ctx, base);
loc_821576A4:
	// lwz r3,-1388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1388);
	// bl 0x8214aa28
	ctx.lr = 0x821576AC;
	sub_8214AA28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821576c8
	goto loc_821576C8;
loc_821576B4:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821576c4
	if (ctx.cr6.eq) goto loc_821576C4;
	// bl 0x82156898
	ctx.lr = 0x821576C4;
	sub_82156898(ctx, base);
loc_821576C4:
	// li r4,30200
	ctx.r4.s64 = 30200;
loc_821576C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x82155bd0
	ctx.lr = 0x821576D4;
	sub_82155BD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// bl 0x82221e10
	ctx.lr = 0x821576EC;
	sub_82221E10(ctx, base);
loc_821576EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821576F4"))) PPC_WEAK_FUNC(sub_821576F4);
PPC_FUNC_IMPL(__imp__sub_821576F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821576F8"))) PPC_WEAK_FUNC(sub_821576F8);
PPC_FUNC_IMPL(__imp__sub_821576F8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x821f0050
	ctx.lr = 0x82157718;
	sub_821F0050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82157724
	if (!ctx.cr0.eq) goto loc_82157724;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82157724:
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r10,r10,44740
	ctx.r10.u64 = ctx.r10.u64 | 44740;
	// ori r9,r9,44996
	ctx.r9.u64 = ctx.r9.u64 | 44996;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r31,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82157764"))) PPC_WEAK_FUNC(sub_82157764);
PPC_FUNC_IMPL(__imp__sub_82157764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157768"))) PPC_WEAK_FUNC(sub_82157768);
PPC_FUNC_IMPL(__imp__sub_82157768) {
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
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// addi r31,r3,336
	ctx.r31.s64 = ctx.r3.s64 + 336;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-8460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8460);
	// bl 0x820e55a0
	ctx.lr = 0x82157794;
	sub_820E55A0(ctx, base);
	// lwz r8,272(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,45528
	ctx.r11.u64 = ctx.r11.u64 | 45528;
	// ori r10,r10,45548
	ctx.r10.u64 = ctx.r10.u64 | 45548;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r31,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_821577D4"))) PPC_WEAK_FUNC(sub_821577D4);
PPC_FUNC_IMPL(__imp__sub_821577D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821577D8"))) PPC_WEAK_FUNC(sub_821577D8);
PPC_FUNC_IMPL(__imp__sub_821577D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x821577E0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,360
	ctx.r31.s64 = ctx.r3.s64 + 360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aa648
	ctx.lr = 0x821577FC;
	sub_822AA648(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r29
	ctx.r5.s64 = ctx.r29.s32;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82084038
	ctx.lr = 0x82157814;
	sub_82084038(ctx, base);
	// lwz r8,272(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,49624
	ctx.r11.u64 = ctx.r11.u64 | 49624;
	// ori r10,r10,49644
	ctx.r10.u64 = ctx.r10.u64 | 49644;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r31,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r31.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82157844"))) PPC_WEAK_FUNC(sub_82157844);
PPC_FUNC_IMPL(__imp__sub_82157844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157848"))) PPC_WEAK_FUNC(sub_82157848);
PPC_FUNC_IMPL(__imp__sub_82157848) {
	PPC_FUNC_PROLOGUE();
	// li r10,1211
	ctx.r10.s64 = 1211;
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r10,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r10.u32);
	// li r9,1212
	ctx.r9.s64 = 1212;
	// li r8,1213
	ctx.r8.s64 = 1213;
	// li r10,1214
	ctx.r10.s64 = 1214;
	// stw r9,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r9.u32);
	// stw r8,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r8.u32);
	// li r9,1217
	ctx.r9.s64 = 1217;
	// stw r10,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r8,1220
	ctx.r8.s64 = 1220;
	// stw r9,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r9.u32);
	// li r10,1229
	ctx.r10.s64 = 1229;
	// li r11,1243
	ctx.r11.s64 = 1243;
	// stw r8,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r8.u32);
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// li r9,1236
	ctx.r9.s64 = 1236;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// li r8,1250
	ctx.r8.s64 = 1250;
	// li r10,1257
	ctx.r10.s64 = 1257;
	// stw r9,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r9.u32);
	// li r11,1237
	ctx.r11.s64 = 1237;
	// stw r8,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r8.u32);
	// li r9,1230
	ctx.r9.s64 = 1230;
	// stw r10,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r10.u32);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// li r8,1244
	ctx.r8.s64 = 1244;
	// li r10,1251
	ctx.r10.s64 = 1251;
	// stw r9,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r9.u32);
	// li r11,1232
	ctx.r11.s64 = 1232;
	// stw r8,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r8.u32);
	// li r9,1258
	ctx.r9.s64 = 1258;
	// stw r10,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// li r8,1239
	ctx.r8.s64 = 1239;
	// li r10,1246
	ctx.r10.s64 = 1246;
	// stw r9,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r9.u32);
	// li r7,1253
	ctx.r7.s64 = 1253;
	// stw r8,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r8.u32);
	// li r11,1260
	ctx.r11.s64 = 1260;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// stw r7,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r7.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
loc_821578FC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8215791c
	if (ctx.cr6.lt) goto loc_8215791C;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r4.u32);
loc_8215791C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x821578fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821578FC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82157928"))) PPC_WEAK_FUNC(sub_82157928);
PPC_FUNC_IMPL(__imp__sub_82157928) {
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
	// bl 0x821573e0
	ctx.lr = 0x82157948;
	sub_821573E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215795c
	if (ctx.cr0.eq) goto loc_8215795C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215795C;
	sub_82183E40(ctx, base);
loc_8215795C:
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

__attribute__((alias("__imp__sub_82157978"))) PPC_WEAK_FUNC(sub_82157978);
PPC_FUNC_IMPL(__imp__sub_82157978) {
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
	// lwz r4,332(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82157398
	ctx.lr = 0x82157994;
	sub_82157398(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821579ac
	if (!ctx.cr6.eq) goto loc_821579AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821575d0
	ctx.lr = 0x821579A8;
	sub_821575D0(ctx, base);
	// b 0x821579b4
	goto loc_821579B4;
loc_821579AC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
loc_821579B4:
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

__attribute__((alias("__imp__sub_821579C8"))) PPC_WEAK_FUNC(sub_821579C8);
PPC_FUNC_IMPL(__imp__sub_821579C8) {
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
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82157a14
	if (ctx.cr6.eq) goto loc_82157A14;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82157a1c
	if (!ctx.cr6.eq) goto loc_82157A1C;
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82157a08
	if (ctx.cr6.eq) goto loc_82157A08;
	// bl 0x82156898
	ctx.lr = 0x82157A08;
	sub_82156898(ctx, base);
loc_82157A08:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// b 0x82157a1c
	goto loc_82157A1C;
loc_82157A14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157658
	ctx.lr = 0x82157A1C;
	sub_82157658(ctx, base);
loc_82157A1C:
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

__attribute__((alias("__imp__sub_82157A30"))) PPC_WEAK_FUNC(sub_82157A30);
PPC_FUNC_IMPL(__imp__sub_82157A30) {
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
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157a68
	if (ctx.cr6.eq) goto loc_82157A68;
	// bl 0x82157978
	ctx.lr = 0x82157A54;
	sub_82157978(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82157A68:
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

__attribute__((alias("__imp__sub_82157A7C"))) PPC_WEAK_FUNC(sub_82157A7C);
PPC_FUNC_IMPL(__imp__sub_82157A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157A80"))) PPC_WEAK_FUNC(sub_82157A80);
PPC_FUNC_IMPL(__imp__sub_82157A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82157a94
	if (!ctx.cr0.lt) goto loc_82157A94;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x82157aa0
	goto loc_82157AA0;
loc_82157A94:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82157aa0
	if (ctx.cr6.lt) goto loc_82157AA0;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
loc_82157AA0:
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82157978
	sub_82157978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157AAC"))) PPC_WEAK_FUNC(sub_82157AAC);
PPC_FUNC_IMPL(__imp__sub_82157AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157AB0"))) PPC_WEAK_FUNC(sub_82157AB0);
PPC_FUNC_IMPL(__imp__sub_82157AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// addic. r10,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r10.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82157ac4
	if (!ctx.cr0.lt) goto loc_82157AC4;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// b 0x82157ad0
	goto loc_82157AD0;
loc_82157AC4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82157ad0
	if (ctx.cr6.lt) goto loc_82157AD0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_82157AD0:
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82157978
	sub_82157978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82157ADC"))) PPC_WEAK_FUNC(sub_82157ADC);
PPC_FUNC_IMPL(__imp__sub_82157ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157AE0"))) PPC_WEAK_FUNC(sub_82157AE0);
PPC_FUNC_IMPL(__imp__sub_82157AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82157AE8;
	sub_8224877C(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x82157AF4;
	sub_82163DF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82165b50
	ctx.lr = 0x82157B00;
	sub_82165B50(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x822aa648
	ctx.lr = 0x82157B1C;
	sub_822AA648(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822aa648
	ctx.lr = 0x82157B28;
	sub_822AA648(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82157b80
	if (ctx.cr6.lt) goto loc_82157B80;
	// bne cr6,0x82157b8c
	if (!ctx.cr6.eq) goto loc_82157B8C;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82228b00
	ctx.lr = 0x82157B40;
	sub_82228B00(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821562f0
	ctx.lr = 0x82157B4C;
	sub_821562F0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82155ee8
	ctx.lr = 0x82157B54;
	sub_82155EE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82155ef0
	ctx.lr = 0x82157B60;
	sub_82155EF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82155ef8
	ctx.lr = 0x82157B6C;
	sub_82155EF8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,-14444
	ctx.r11.s64 = ctx.r11.s64 + -14444;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// b 0x82157b8c
	goto loc_82157B8C;
loc_82157B80:
	// lwz r28,72(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r27,76(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// lwz r26,80(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
loc_82157B8C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821572b8
	ctx.lr = 0x82157B9C;
	sub_821572B8(ctx, base);
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r4,92(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,48856
	ctx.r11.u64 = ctx.r11.u64 | 48856;
	// ori r10,r10,48876
	ctx.r10.u64 = ctx.r10.u64 | 48876;
	// addi r9,r31,352
	ctx.r9.s64 = ctx.r31.s64 + 352;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lhz r25,2(r25)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r25.u32 + 2);
	// addis r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 327680;
	// addi r7,r7,-17664
	ctx.r7.s64 = ctx.r7.s64 + -17664;
	// stw r28,240(r7)
	PPC_STORE_U32(ctx.r7.u32 + 240, ctx.r28.u32);
	// stw r30,236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 236, ctx.r30.u32);
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addis r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 327680;
	// addi r7,r7,-17408
	ctx.r7.s64 = ctx.r7.s64 + -17408;
	// stw r27,240(r7)
	PPC_STORE_U32(ctx.r7.u32 + 240, ctx.r27.u32);
	// stw r30,236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 236, ctx.r30.u32);
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addis r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 327680;
	// addi r7,r7,-17152
	ctx.r7.s64 = ctx.r7.s64 + -17152;
	// stw r26,240(r7)
	PPC_STORE_U32(ctx.r7.u32 + 240, ctx.r26.u32);
	// stw r30,236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 236, ctx.r30.u32);
	// lwz r7,272(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r9,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// bl 0x821577d8
	ctx.lr = 0x82157C24;
	sub_821577D8(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r29,8508
	ctx.r10.s64 = ctx.r29.s64 + 8508;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f0,11484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11484);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,272(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addis r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 327680;
	// addi r9,r9,-15360
	ctx.r9.s64 = ctx.r9.s64 + -15360;
	// stw r25,240(r9)
	PPC_STORE_U32(ctx.r9.u32 + 240, ctx.r25.u32);
	// stw r30,236(r9)
	PPC_STORE_U32(ctx.r9.u32 + 236, ctx.r30.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,-25004(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25004);
	ctx.f13.f64 = double(temp.f32);
loc_82157C5C:
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lwz r8,272(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r5,1239
	ctx.r5.s64 = 1239;
	// li r7,1232
	ctx.r7.s64 = 1232;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// li r5,1236
	ctx.r5.s64 = 1236;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r4,1260
	ctx.r4.s64 = 1260;
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r9,1229
	ctx.r9.s64 = 1229;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// li r5,1257
	ctx.r5.s64 = 1257;
	// stw r4,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// li r4,1243
	ctx.r4.s64 = 1243;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// li r3,1250
	ctx.r3.s64 = 1250;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r9,1246
	ctx.r9.s64 = 1246;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// li r5,1253
	ctx.r5.s64 = 1253;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// li r3,1244
	ctx.r3.s64 = 1244;
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r29,1251
	ctx.r29.s64 = 1251;
	// li r27,1258
	ctx.r27.s64 = 1258;
	// li r26,1230
	ctx.r26.s64 = 1230;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lwzx r7,r11,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// li r4,1237
	ctx.r4.s64 = 1237;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r30,236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 236, ctx.r30.u32);
	// stw r6,240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 240, ctx.r6.u32);
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r28,272(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwzu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r8,240(r7)
	PPC_STORE_U32(ctx.r7.u32 + 240, ctx.r8.u32);
	// stw r30,236(r7)
	PPC_STORE_U32(ctx.r7.u32 + 236, ctx.r30.u32);
	// lwzx r7,r11,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,272(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwa r6,0(r9)
	ctx.r6.s64 = int32_t(PPC_LOAD_U32(ctx.r9.u32 + 0));
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// lfd f12,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,20(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// bdnz 0x82157c5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82157C5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157848
	ctx.lr = 0x82157D7C;
	sub_82157848(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82157D84"))) PPC_WEAK_FUNC(sub_82157D84);
PPC_FUNC_IMPL(__imp__sub_82157D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82157D88"))) PPC_WEAK_FUNC(sub_82157D88);
PPC_FUNC_IMPL(__imp__sub_82157D88) {
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
	// addi r3,r3,280
	ctx.r3.s64 = ctx.r3.s64 + 280;
	// bl 0x823c3410
	ctx.lr = 0x82157DA4;
	sub_823C3410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3c70
	ctx.lr = 0x82157DAC;
	sub_823C3C70(ctx, base);
	// bl 0x821eb440
	ctx.lr = 0x82157DB0;
	sub_821EB440(ctx, base);
	// stw r3,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r3.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821ebaa8
	ctx.lr = 0x82157DBC;
	sub_821EBAA8(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x82157DC0;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157ddc
	if (ctx.cr6.eq) goto loc_82157DDC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82221e50
	ctx.lr = 0x82157DD4;
	sub_82221E50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82157dec
	if (!ctx.cr0.eq) goto loc_82157DEC;
loc_82157DDC:
	// bl 0x8215bd60
	ctx.lr = 0x82157DE0;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82157df4
	if (!ctx.cr6.eq) goto loc_82157DF4;
loc_82157DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157ae0
	ctx.lr = 0x82157DF4;
	sub_82157AE0(ctx, base);
loc_82157DF4:
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

__attribute__((alias("__imp__sub_82157E08"))) PPC_WEAK_FUNC(sub_82157E08);
PPC_FUNC_IMPL(__imp__sub_82157E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82157E10;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// bl 0x8209eda0
	ctx.lr = 0x82157E20;
	sub_8209EDA0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3b68
	ctx.lr = 0x82157E2C;
	sub_823C3B68(ctx, base);
	// bl 0x8215bd08
	ctx.lr = 0x82157E30;
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
	ctx.lr = 0x82157E44;
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
	ctx.lr = 0x82157E58;
	sub_821859A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-25088
	ctx.r11.s64 = ctx.r11.s64 + -25088;
	// addi r10,r10,-25224
	ctx.r10.s64 = ctx.r10.s64 + -25224;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// addi r9,r9,-25232
	ctx.r9.s64 = ctx.r9.s64 + -25232;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// bl 0x823c2ff0
	ctx.lr = 0x82157E94;
	sub_823C2FF0(ctx, base);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// bl 0x822aa648
	ctx.lr = 0x82157EB4;
	sub_822AA648(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x822aa648
	ctx.lr = 0x82157EC0;
	sub_822AA648(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x822aa648
	ctx.lr = 0x82157ECC;
	sub_822AA648(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// bl 0x82182e90
	ctx.lr = 0x82157EE0;
	sub_82182E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82157EE8;
	sub_82183078(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82157EF4;
	sub_821837D0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82080000
	ctx.lr = 0x82157EFC;
	sub_82080000(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82157f0c
	if (ctx.cr0.eq) goto loc_82157F0C;
	// bl 0x821568b8
	ctx.lr = 0x82157F08;
	sub_821568B8(ctx, base);
	// b 0x82157f10
	goto loc_82157F10;
loc_82157F0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82157F10:
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,-1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82157f30
	if (!ctx.cr6.eq) goto loc_82157F30;
	// bl 0x82145848
	ctx.lr = 0x82157F2C;
	sub_82145848(ctx, base);
	// stw r29,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r29.u32);
loc_82157F30:
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// lwz r11,-744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82157f54
	if (ctx.cr6.eq) goto loc_82157F54;
	// bl 0x8215bd08
	ctx.lr = 0x82157F44;
	sub_8215BD08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-744(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -744);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82221060
	ctx.lr = 0x82157F54;
	sub_82221060(ctx, base);
loc_82157F54:
	// bl 0x82220c70
	ctx.lr = 0x82157F58;
	sub_82220C70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82221280
	ctx.lr = 0x82157F64;
	sub_82221280(ctx, base);
	// bl 0x8215bd60
	ctx.lr = 0x82157F68;
	sub_8215BD60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157f78
	if (ctx.cr6.eq) goto loc_82157F78;
	// stw r29,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r29.u32);
loc_82157F78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// bl 0x82157398
	ctx.lr = 0x82157F84;
	sub_82157398(ctx, base);
	// li r11,800
	ctx.r11.s64 = 800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82157768
	ctx.lr = 0x82157F94;
	sub_82157768(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157848
	ctx.lr = 0x82157FA0;
	sub_82157848(ctx, base);
	// bl 0x82157d88
	ctx.lr = 0x82157FA4;
	sub_82157D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821576f8
	ctx.lr = 0x82157FAC;
	sub_821576F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821837d0
	ctx.lr = 0x82157FB4;
	sub_821837D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82157FC0"))) PPC_WEAK_FUNC(sub_82157FC0);
PPC_FUNC_IMPL(__imp__sub_82157FC0) {
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
	// bl 0x821576f8
	ctx.lr = 0x82157FD8;
	sub_821576F8(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215802c
	if (ctx.cr6.eq) goto loc_8215802C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82158024
	if (ctx.cr6.eq) goto loc_82158024;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82158008
	if (ctx.cr6.eq) goto loc_82158008;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8215802c
	if (!ctx.cr6.eq) goto loc_8215802C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82157338
	ctx.lr = 0x82158004;
	sub_82157338(ctx, base);
	// b 0x8215802c
	goto loc_8215802C;
loc_82158008:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// bl 0x82157ae0
	ctx.lr = 0x82158018;
	sub_82157AE0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// b 0x8215802c
	goto loc_8215802C;
loc_82158024:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821579c8
	ctx.lr = 0x8215802C;
	sub_821579C8(ctx, base);
loc_8215802C:
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

__attribute__((alias("__imp__sub_82158040"))) PPC_WEAK_FUNC(sub_82158040);
PPC_FUNC_IMPL(__imp__sub_82158040) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r10,r10,-24996
	ctx.r10.s64 = ctx.r10.s64 + -24996;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8209eda0
	sub_8209EDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82158058"))) PPC_WEAK_FUNC(sub_82158058);
PPC_FUNC_IMPL(__imp__sub_82158058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82158060;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82228be0
	ctx.lr = 0x82158080;
	sub_82228BE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82166180
	ctx.lr = 0x8215808C;
	sub_82166180(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82166180
	ctx.lr = 0x8215809C;
	sub_82166180(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822aa648
	ctx.lr = 0x821580B0;
	sub_822AA648(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,-24992
	ctx.r5.s64 = ctx.r11.s64 + -24992;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x821580CC;
	sub_8218A5F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821580D4"))) PPC_WEAK_FUNC(sub_821580D4);
PPC_FUNC_IMPL(__imp__sub_821580D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821580D8"))) PPC_WEAK_FUNC(sub_821580D8);
PPC_FUNC_IMPL(__imp__sub_821580D8) {
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x82248a40
	ctx.lr = 0x821580F8;
	sub_82248A40(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
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

__attribute__((alias("__imp__sub_82158114"))) PPC_WEAK_FUNC(sub_82158114);
PPC_FUNC_IMPL(__imp__sub_82158114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158118"))) PPC_WEAK_FUNC(sub_82158118);
PPC_FUNC_IMPL(__imp__sub_82158118) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158160
	if (ctx.cr6.eq) goto loc_82158160;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158148;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158160
	if (ctx.cr0.eq) goto loc_82158160;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x8215815C;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82158160:
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

__attribute__((alias("__imp__sub_8215817C"))) PPC_WEAK_FUNC(sub_8215817C);
PPC_FUNC_IMPL(__imp__sub_8215817C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158180"))) PPC_WEAK_FUNC(sub_82158180);
PPC_FUNC_IMPL(__imp__sub_82158180) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,4
	ctx.r30.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821581c8
	if (ctx.cr6.eq) goto loc_821581C8;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x821581B0;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821581c8
	if (ctx.cr0.eq) goto loc_821581C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x821581C4;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821581C8:
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

__attribute__((alias("__imp__sub_821581E4"))) PPC_WEAK_FUNC(sub_821581E4);
PPC_FUNC_IMPL(__imp__sub_821581E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821581E8"))) PPC_WEAK_FUNC(sub_821581E8);
PPC_FUNC_IMPL(__imp__sub_821581E8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158230
	if (ctx.cr6.eq) goto loc_82158230;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158218;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158230
	if (ctx.cr0.eq) goto loc_82158230;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x8215822C;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82158230:
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

__attribute__((alias("__imp__sub_8215824C"))) PPC_WEAK_FUNC(sub_8215824C);
PPC_FUNC_IMPL(__imp__sub_8215824C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158250"))) PPC_WEAK_FUNC(sub_82158250);
PPC_FUNC_IMPL(__imp__sub_82158250) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158298
	if (ctx.cr6.eq) goto loc_82158298;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158280;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158298
	if (ctx.cr0.eq) goto loc_82158298;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82158294;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82158298:
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

__attribute__((alias("__imp__sub_821582B4"))) PPC_WEAK_FUNC(sub_821582B4);
PPC_FUNC_IMPL(__imp__sub_821582B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821582B8"))) PPC_WEAK_FUNC(sub_821582B8);
PPC_FUNC_IMPL(__imp__sub_821582B8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158300
	if (ctx.cr6.eq) goto loc_82158300;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x821582E8;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158300
	if (ctx.cr0.eq) goto loc_82158300;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x821582FC;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82158300:
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

__attribute__((alias("__imp__sub_8215831C"))) PPC_WEAK_FUNC(sub_8215831C);
PPC_FUNC_IMPL(__imp__sub_8215831C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158320"))) PPC_WEAK_FUNC(sub_82158320);
PPC_FUNC_IMPL(__imp__sub_82158320) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158368
	if (ctx.cr6.eq) goto loc_82158368;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158350;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158368
	if (ctx.cr0.eq) goto loc_82158368;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82158364;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82158368:
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

__attribute__((alias("__imp__sub_82158384"))) PPC_WEAK_FUNC(sub_82158384);
PPC_FUNC_IMPL(__imp__sub_82158384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158388"))) PPC_WEAK_FUNC(sub_82158388);
PPC_FUNC_IMPL(__imp__sub_82158388) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821583d0
	if (ctx.cr6.eq) goto loc_821583D0;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x821583B8;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821583d0
	if (ctx.cr0.eq) goto loc_821583D0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x821583CC;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821583D0:
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

__attribute__((alias("__imp__sub_821583EC"))) PPC_WEAK_FUNC(sub_821583EC);
PPC_FUNC_IMPL(__imp__sub_821583EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821583F0"))) PPC_WEAK_FUNC(sub_821583F0);
PPC_FUNC_IMPL(__imp__sub_821583F0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158438
	if (ctx.cr6.eq) goto loc_82158438;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158420;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158438
	if (ctx.cr0.eq) goto loc_82158438;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82158434;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82158438:
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

__attribute__((alias("__imp__sub_82158454"))) PPC_WEAK_FUNC(sub_82158454);
PPC_FUNC_IMPL(__imp__sub_82158454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158458"))) PPC_WEAK_FUNC(sub_82158458);
PPC_FUNC_IMPL(__imp__sub_82158458) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158494
	if (ctx.cr6.eq) goto loc_82158494;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158480;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158494
	if (ctx.cr0.eq) goto loc_82158494;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228bd0
	ctx.lr = 0x82158490;
	sub_82228BD0(ctx, base);
	// b 0x8215849c
	goto loc_8215849C;
loc_82158494:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,4393
	ctx.r3.s64 = ctx.r11.s64 + 4393;
loc_8215849C:
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

__attribute__((alias("__imp__sub_821584B0"))) PPC_WEAK_FUNC(sub_821584B0);
PPC_FUNC_IMPL(__imp__sub_821584B0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158534
	if (ctx.cr6.eq) goto loc_82158534;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82228b68
	ctx.lr = 0x821584E0;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158534
	if (ctx.cr0.eq) goto loc_82158534;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156f78
	ctx.lr = 0x821584F0;
	sub_82156F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158180
	ctx.lr = 0x821584F8;
	sub_82158180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156ef8
	ctx.lr = 0x82158504;
	sub_82156EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821581e8
	ctx.lr = 0x8215850C;
	sub_821581E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156f00
	ctx.lr = 0x82158518;
	sub_82156F00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158118
	ctx.lr = 0x82158520;
	sub_82158118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156f10
	ctx.lr = 0x8215852C;
	sub_82156F10(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82158538
	goto loc_82158538;
loc_82158534:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82158538:
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

__attribute__((alias("__imp__sub_82158550"))) PPC_WEAK_FUNC(sub_82158550);
PPC_FUNC_IMPL(__imp__sub_82158550) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158598
	if (ctx.cr6.eq) goto loc_82158598;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158580;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158598
	if (ctx.cr0.eq) goto loc_82158598;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82166180
	ctx.lr = 0x82158594;
	sub_82166180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82158598:
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

__attribute__((alias("__imp__sub_821585B4"))) PPC_WEAK_FUNC(sub_821585B4);
PPC_FUNC_IMPL(__imp__sub_821585B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821585B8"))) PPC_WEAK_FUNC(sub_821585B8);
PPC_FUNC_IMPL(__imp__sub_821585B8) {
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82228c88
	ctx.lr = 0x821585D4;
	sub_82228C88(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24996
	ctx.r11.s64 = ctx.r11.s64 + -24996;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82158058
	ctx.lr = 0x821585E8;
	sub_82158058(ctx, base);
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

__attribute__((alias("__imp__sub_82158600"))) PPC_WEAK_FUNC(sub_82158600);
PPC_FUNC_IMPL(__imp__sub_82158600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82158608;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158654
	if (ctx.cr6.eq) goto loc_82158654;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228b68
	ctx.lr = 0x82158628;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158654
	if (ctx.cr0.eq) goto loc_82158654;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,-744(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -744);
	// bl 0x8218f0b0
	ctx.lr = 0x82158640;
	sub_8218F0B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82223140
	ctx.lr = 0x82158654;
	sub_82223140(ctx, base);
loc_82158654:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215865C"))) PPC_WEAK_FUNC(sub_8215865C);
PPC_FUNC_IMPL(__imp__sub_8215865C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158660"))) PPC_WEAK_FUNC(sub_82158660);
PPC_FUNC_IMPL(__imp__sub_82158660) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215869c
	if (ctx.cr6.eq) goto loc_8215869C;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82228b68
	ctx.lr = 0x82158690;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215869c
	if (ctx.cr0.eq) goto loc_8215869C;
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
loc_8215869C:
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

__attribute__((alias("__imp__sub_821586B8"))) PPC_WEAK_FUNC(sub_821586B8);
PPC_FUNC_IMPL(__imp__sub_821586B8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821586f4
	if (ctx.cr6.eq) goto loc_821586F4;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82228b68
	ctx.lr = 0x821586E8;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821586f4
	if (ctx.cr0.eq) goto loc_821586F4;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_821586F4:
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

__attribute__((alias("__imp__sub_82158710"))) PPC_WEAK_FUNC(sub_82158710);
PPC_FUNC_IMPL(__imp__sub_82158710) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,-25000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25000);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8215875c
	if (ctx.cr6.eq) goto loc_8215875C;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82228b68
	ctx.lr = 0x82158744;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215875c
	if (ctx.cr0.eq) goto loc_8215875C;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215875c
	if (ctx.cr6.eq) goto loc_8215875C;
	// lfs f31,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f31.f64 = double(temp.f32);
loc_8215875C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
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

__attribute__((alias("__imp__sub_82158778"))) PPC_WEAK_FUNC(sub_82158778);
PPC_FUNC_IMPL(__imp__sub_82158778) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158834
	if (ctx.cr6.eq) goto loc_82158834;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82228b68
	ctx.lr = 0x821587A8;
	sub_82228B68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158834
	if (ctx.cr0.eq) goto loc_82158834;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82158834
	if (ctx.cr6.eq) goto loc_82158834;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11312);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821587d8
	if (ctx.cr6.lt) goto loc_821587D8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82158834
	goto loc_82158834;
loc_821587D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8344);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821587f0
	if (ctx.cr6.lt) goto loc_821587F0;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82158834
	goto loc_82158834;
loc_821587F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82158808
	if (ctx.cr6.lt) goto loc_82158808;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82158834
	goto loc_82158834;
loc_82158808:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,9852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9852);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82158820
	if (ctx.cr6.lt) goto loc_82158820;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82158834
	goto loc_82158834;
loc_82158820:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82158834
	if (ctx.cr6.lt) goto loc_82158834;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82158834:
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

__attribute__((alias("__imp__sub_82158850"))) PPC_WEAK_FUNC(sub_82158850);
PPC_FUNC_IMPL(__imp__sub_82158850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ori r11,r11,34463
	ctx.r11.u64 = ctx.r11.u64 | 34463;
	// bge cr6,0x82158870
	if (!ctx.cr6.lt) goto loc_82158870;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8215887c
	goto loc_8215887C;
loc_82158870:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8215887c
	if (!ctx.cr6.gt) goto loc_8215887C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8215887C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x8215888c
	if (!ctx.cr6.lt) goto loc_8215888C;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82158898
	goto loc_82158898;
loc_8215888C:
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82158898
	if (!ctx.cr6.gt) goto loc_82158898;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82158898:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x821588a8
	if (!ctx.cr6.lt) goto loc_821588A8;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x821588b4
	goto loc_821588B4;
loc_821588A8:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821588b4
	if (!ctx.cr6.gt) goto loc_821588B4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_821588B4:
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r5,r9,-24952
	ctx.r5.s64 = ctx.r9.s64 + -24952;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,1668
	ctx.r3.s64 = ctx.r11.s64 + 1668;
	// b 0x8218a5f0
	sub_8218A5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821588D8"))) PPC_WEAK_FUNC(sub_821588D8);
PPC_FUNC_IMPL(__imp__sub_821588D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x821588E0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214b730
	ctx.lr = 0x82158904;
	sub_8214B730(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-24792
	ctx.r11.s64 = ctx.r11.s64 + -24792;
	// addi r10,r10,-24928
	ctx.r10.s64 = ctx.r10.s64 + -24928;
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// addi r9,r9,-24936
	ctx.r9.s64 = ctx.r9.s64 + -24936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// addi r3,r31,1160
	ctx.r3.s64 = ctx.r31.s64 + 1160;
	// bl 0x823c35b8
	ctx.lr = 0x82158944;
	sub_823C35B8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r30,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r30.u32);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// li r4,384
	ctx.r4.s64 = 384;
	// stw r30,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r30.u32);
	// addi r3,r31,1668
	ctx.r3.s64 = ctx.r31.s64 + 1668;
	// stw r10,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r10.u32);
	// bl 0x822aa648
	ctx.lr = 0x82158968;
	sub_822AA648(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82158980
	if (!ctx.cr6.eq) goto loc_82158980;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// stw r10,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r10.u32);
loc_82158980:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// stw r28,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r28.u32);
	// stw r29,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 | 191;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x8214b948
	ctx.lr = 0x821589A0;
	sub_8214B948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821589AC"))) PPC_WEAK_FUNC(sub_821589AC);
PPC_FUNC_IMPL(__imp__sub_821589AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821589B0"))) PPC_WEAK_FUNC(sub_821589B0);
PPC_FUNC_IMPL(__imp__sub_821589B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82159260
	sub_82159260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821589B8"))) PPC_WEAK_FUNC(sub_821589B8);
PPC_FUNC_IMPL(__imp__sub_821589B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x82159260
	sub_82159260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821589C0"))) PPC_WEAK_FUNC(sub_821589C0);
PPC_FUNC_IMPL(__imp__sub_821589C0) {
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
	// lwz r3,2052(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2052);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-24792
	ctx.r11.s64 = ctx.r11.s64 + -24792;
	// addi r10,r10,-24928
	ctx.r10.s64 = ctx.r10.s64 + -24928;
	// addi r9,r9,-24936
	ctx.r9.s64 = ctx.r9.s64 + -24936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// bl 0x821ebaa8
	ctx.lr = 0x82158A04;
	sub_821EBAA8(ctx, base);
	// lwz r3,756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82158a24
	if (ctx.cr6.eq) goto loc_82158A24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82158A24:
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82158a6c
	if (ctx.cr6.eq) goto loc_82158A6C;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82158a64
	if (ctx.cr6.eq) goto loc_82158A64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82158a6c
	goto loc_82158A6C;
loc_82158A64:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82158A6C;
	sub_82183E40(ctx, base);
loc_82158A6C:
	// lwz r3,1156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// stw r30,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82158a84
	if (ctx.cr6.eq) goto loc_82158A84;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82183e40
	ctx.lr = 0x82158A84;
	sub_82183E40(ctx, base);
loc_82158A84:
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// addi r3,r31,1160
	ctx.r3.s64 = ctx.r31.s64 + 1160;
	// bl 0x823c31a0
	ctx.lr = 0x82158A90;
	sub_823C31A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b2a8
	ctx.lr = 0x82158A98;
	sub_8214B2A8(ctx, base);
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

__attribute__((alias("__imp__sub_82158AB0"))) PPC_WEAK_FUNC(sub_82158AB0);
PPC_FUNC_IMPL(__imp__sub_82158AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82158AB8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82182e90
	ctx.lr = 0x82158ACC;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82158AD4;
	sub_82183078(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82158AE0;
	sub_821837D0(ctx, base);
	// lis r11,431
	ctx.r11.s64 = 28246016;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,10347
	ctx.r11.u64 = ctx.r11.u64 | 10347;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r30,152
	ctx.r11.s64 = ctx.r30.s64 * 152;
	// ble cr6,0x82158afc
	if (!ctx.cr6.gt) goto loc_82158AFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82158AFC:
	// li r10,-9
	ctx.r10.s64 = -9;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82158b0c
	if (ctx.cr6.gt) goto loc_82158B0C;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
loc_82158B0C:
	// bl 0x82080d68
	ctx.lr = 0x82158B10;
	sub_82080D68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82158b44
	if (ctx.cr0.eq) goto loc_82158B44;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r31,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r31.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// blt 0x82158b48
	if (ctx.cr0.lt) goto loc_82158B48;
loc_82158B2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821585b8
	ctx.lr = 0x82158B34;
	sub_821585B8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,152
	ctx.r29.s64 = ctx.r29.s64 + 152;
	// bge 0x82158b2c
	if (!ctx.cr0.lt) goto loc_82158B2C;
	// b 0x82158b48
	goto loc_82158B48;
loc_82158B44:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82158B48:
	// stw r30,1460(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1460, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,1152(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1152, ctx.r28.u32);
	// ble cr6,0x82158b98
	if (!ctx.cr6.gt) goto loc_82158B98;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82158B5C:
	// lwz r11,1152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1152);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82158058
	ctx.lr = 0x82158B68;
	sub_82158058(ctx, base);
	// lwz r10,1152(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1152);
	// add. r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bne 0x82158b80
	if (!ctx.cr0.eq) goto loc_82158B80;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82158B80:
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x82248a40
	ctx.lr = 0x82158B8C;
	sub_82248A40(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,152
	ctx.r31.s64 = ctx.r31.s64 + 152;
	// bne 0x82158b5c
	if (!ctx.cr0.eq) goto loc_82158B5C;
loc_82158B98:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821837d0
	ctx.lr = 0x82158BA0;
	sub_821837D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82158BA8"))) PPC_WEAK_FUNC(sub_82158BA8);
PPC_FUNC_IMPL(__imp__sub_82158BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82158BB0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158c0c
	if (ctx.cr0.eq) goto loc_82158C0C;
	// lwz r10,-8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
	// mulli r11,r10,152
	ctx.r11.s64 = ctx.r10.s64 * 152;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82158bf0
	if (ctx.cr0.lt) goto loc_82158BF0;
loc_82158BDC:
	// addi r30,r30,-152
	ctx.r30.s64 = ctx.r30.s64 + -152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158040
	ctx.lr = 0x82158BE8;
	sub_82158040(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82158bdc
	if (!ctx.cr0.lt) goto loc_82158BDC;
loc_82158BF0:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158c04
	if (ctx.cr0.eq) goto loc_82158C04;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82183e40
	ctx.lr = 0x82158C04;
	sub_82183E40(ctx, base);
loc_82158C04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82158c2c
	goto loc_82158C2C;
loc_82158C0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158040
	ctx.lr = 0x82158C14;
	sub_82158040(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82158c28
	if (ctx.cr0.eq) goto loc_82158C28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183e40
	ctx.lr = 0x82158C28;
	sub_82183E40(ctx, base);
loc_82158C28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82158C2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82158C34"))) PPC_WEAK_FUNC(sub_82158C34);
PPC_FUNC_IMPL(__imp__sub_82158C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158C38"))) PPC_WEAK_FUNC(sub_82158C38);
PPC_FUNC_IMPL(__imp__sub_82158C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82158C40;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82182e90
	ctx.lr = 0x82158C54;
	sub_82182E90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82158C5C;
	sub_82183078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821837d0
	ctx.lr = 0x82158C68;
	sub_821837D0(ctx, base);
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82158c80
	if (!ctx.cr6.gt) goto loc_82158C80;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82158C80:
	// bl 0x82080d68
	ctx.lr = 0x82158C84;
	sub_82080D68(ctx, base);
	// stw r3,1156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1156, ctx.r3.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82158cb4
	if (!ctx.cr6.gt) goto loc_82158CB4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82158C94:
	// lwz r11,1156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1156);
	// li r5,8
	ctx.r5.s64 = 8;
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821847a8
	ctx.lr = 0x82158CA8;
	sub_821847A8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82158c94
	if (!ctx.cr0.eq) goto loc_82158C94;
loc_82158CB4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821837d0
	ctx.lr = 0x82158CBC;
	sub_821837D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82158CC4"))) PPC_WEAK_FUNC(sub_82158CC4);
PPC_FUNC_IMPL(__imp__sub_82158CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158CC8"))) PPC_WEAK_FUNC(sub_82158CC8);
PPC_FUNC_IMPL(__imp__sub_82158CC8) {
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
	// lwz r11,-256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82158d90
	if (ctx.cr0.eq) goto loc_82158D90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82158d88
	if (!ctx.cr6.gt) goto loc_82158D88;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,6036(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6036, temp.u32);
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// bl 0x8210a9b0
	ctx.lr = 0x82158D3C;
	sub_8210A9B0(ctx, base);
	// lwz r11,876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82158d68
	if (ctx.cr6.eq) goto loc_82158D68;
	// ble cr6,0x82158d88
	if (!ctx.cr6.gt) goto loc_82158D88;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x82158d88
	if (ctx.cr6.gt) goto loc_82158D88;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r4,43
	ctx.r4.s64 = 43;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,6324(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6324, temp.u32);
	// b 0x82158d78
	goto loc_82158D78;
loc_82158D68:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r4,42
	ctx.r4.s64 = 42;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,6180(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6180, temp.u32);
loc_82158D78:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8210a9b0
	ctx.lr = 0x82158D88;
	sub_8210A9B0(ctx, base);
loc_82158D88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d630
	ctx.lr = 0x82158D90;
	sub_8214D630(ctx, base);
loc_82158D90:
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

__attribute__((alias("__imp__sub_82158DA8"))) PPC_WEAK_FUNC(sub_82158DA8);
PPC_FUNC_IMPL(__imp__sub_82158DA8) {
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
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c5728
	ctx.lr = 0x82158DE0;
	sub_823C5728(ctx, base);
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

__attribute__((alias("__imp__sub_82158DF4"))) PPC_WEAK_FUNC(sub_82158DF4);
PPC_FUNC_IMPL(__imp__sub_82158DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158DF8"))) PPC_WEAK_FUNC(sub_82158DF8);
PPC_FUNC_IMPL(__imp__sub_82158DF8) {
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
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c5728
	ctx.lr = 0x82158E30;
	sub_823C5728(ctx, base);
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

__attribute__((alias("__imp__sub_82158E44"))) PPC_WEAK_FUNC(sub_82158E44);
PPC_FUNC_IMPL(__imp__sub_82158E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82158E48"))) PPC_WEAK_FUNC(sub_82158E48);
PPC_FUNC_IMPL(__imp__sub_82158E48) {
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
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ldx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8214cfd8
	ctx.lr = 0x82158E8C;
	sub_8214CFD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82158ea0
	if (!ctx.cr0.eq) goto loc_82158EA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823c18f8
	ctx.lr = 0x82158EA0;
	sub_823C18F8(ctx, base);
loc_82158EA0:
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

__attribute__((alias("__imp__sub_82158EB8"))) PPC_WEAK_FUNC(sub_82158EB8);
PPC_FUNC_IMPL(__imp__sub_82158EB8) {
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
	// lwz r10,1464(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82158f10
	if (!ctx.cr6.gt) goto loc_82158F10;
loc_82158EDC:
	// lwz r10,1472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,764(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 452, ctx.r8.u32);
	// lwz r10,1464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82158edc
	if (ctx.cr6.lt) goto loc_82158EDC;
loc_82158F10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82158F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,1464(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// lwz r10,764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// twllei r6,0
	// divw r5,r9,r6
	ctx.r5.s32 = ctx.r9.s32 / ctx.r6.s32;
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r5,r5,r6
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// andc r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twlgei r9,-1
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82158F88"))) PPC_WEAK_FUNC(sub_82158F88);
PPC_FUNC_IMPL(__imp__sub_82158F88) {
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
	// addi r3,r3,1160
	ctx.r3.s64 = ctx.r3.s64 + 1160;
	// bl 0x823c3280
	ctx.lr = 0x82158FAC;
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
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x82158FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// lwz r7,1464(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r8,1472(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// lwz r10,764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// twllei r7,0
	// divw r6,r9,r7
	ctx.r6.s32 = ctx.r9.s32 / ctx.r7.s32;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// andc r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// mulli r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twlgei r8,-1
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,468(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 468, temp.u32);
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

__attribute__((alias("__imp__sub_82159044"))) PPC_WEAK_FUNC(sub_82159044);
PPC_FUNC_IMPL(__imp__sub_82159044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159048"))) PPC_WEAK_FUNC(sub_82159048);
PPC_FUNC_IMPL(__imp__sub_82159048) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82159058:
	// lwz r11,1460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1460);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,1472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// bge cr6,0x821590c0
	if (!ctx.cr6.lt) goto loc_821590C0;
	// lwz r7,764(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// mulli r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 * 12;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8215910c
	if (!ctx.cr6.gt) goto loc_8215910C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82159090:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// stw r5,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r5.u32);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82159090
	if (ctx.cr6.lt) goto loc_82159090;
	// b 0x8215910c
	goto loc_8215910C;
loc_821590C0:
	// lwz r8,764(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// mulli r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 * 12;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8215910c
	if (!ctx.cr6.gt) goto loc_8215910C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_821590E0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
	// stw r5,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r5.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x821590e0
	if (ctx.cr6.lt) goto loc_821590E0;
loc_8215910C:
	// lwz r11,1464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82159058
	if (ctx.cr6.lt) goto loc_82159058;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82159120"))) PPC_WEAK_FUNC(sub_82159120);
PPC_FUNC_IMPL(__imp__sub_82159120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82159128;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r11,-24984
	ctx.r8.s64 = ctx.r11.s64 + -24984;
loc_82159148:
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82159174
	if (ctx.cr6.lt) goto loc_82159174;
	// lwz r6,764(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 764);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r4,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r4.u32);
loc_82159174:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x82159148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82159148;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r3,764(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 764);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82106eb0
	ctx.lr = 0x82159194;
	sub_82106EB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x821591c8
	if (ctx.cr0.eq) goto loc_821591C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d38e8
	ctx.lr = 0x821591A4;
	sub_821D38E8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821d2d38
	ctx.lr = 0x821591C8;
	sub_821D2D38(ctx, base);
loc_821591C8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x821591e8
	if (ctx.cr6.lt) goto loc_821591E8;
	// lwz r10,764(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 764);
	// rlwinm r11,r30,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r9.u32);
loc_821591E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_821591F0"))) PPC_WEAK_FUNC(sub_821591F0);
PPC_FUNC_IMPL(__imp__sub_821591F0) {
	PPC_FUNC_PROLOGUE();
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821591FC:
	// lwz r10,1472(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,764(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// stw r8,964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 964, ctx.r8.u32);
	// bdnz 0x821591fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821591FC;
	// lwz r11,1472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,764(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 964, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215925C"))) PPC_WEAK_FUNC(sub_8215925C);
PPC_FUNC_IMPL(__imp__sub_8215925C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159260"))) PPC_WEAK_FUNC(sub_82159260);
PPC_FUNC_IMPL(__imp__sub_82159260) {
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
	// bl 0x821589c0
	ctx.lr = 0x82159280;
	sub_821589C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82159294
	if (ctx.cr0.eq) goto loc_82159294;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82159294;
	sub_82183E40(ctx, base);
loc_82159294:
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

__attribute__((alias("__imp__sub_821592B0"))) PPC_WEAK_FUNC(sub_821592B0);
PPC_FUNC_IMPL(__imp__sub_821592B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x821592B8;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8215942c
	if (!ctx.cr6.gt) goto loc_8215942C;
	// addi r26,r3,1668
	ctx.r26.s64 = ctx.r3.s64 + 1668;
	// addi r27,r3,1476
	ctx.r27.s64 = ctx.r3.s64 + 1476;
loc_821592DC:
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8215942c
	if (!ctx.cr6.lt) goto loc_8215942C;
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// lwz r10,1152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158458
	ctx.lr = 0x82159304;
	sub_82158458(ctx, base);
	// lwz r9,764(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 728, ctx.r8.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r28,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r28.u32);
	// bl 0x82158778
	ctx.lr = 0x82159340;
	sub_82158778(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821591f0
	ctx.lr = 0x82159350;
	sub_821591F0(ctx, base);
	// lwz r11,1132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82159414
	if (!ctx.cr6.eq) goto loc_82159414;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158550
	ctx.lr = 0x82159364;
	sub_82158550(ctx, base);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82084038
	ctx.lr = 0x8215937C;
	sub_82084038(ctx, base);
	// lwz r9,764(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r27,2776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2776, ctx.r27.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r28,2796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2796, ctx.r28.u32);
	// bl 0x821583f0
	ctx.lr = 0x821593B4;
	sub_821583F0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158388
	ctx.lr = 0x821593C0;
	sub_82158388(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82158320
	ctx.lr = 0x821593CC;
	sub_82158320(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x82158850
	ctx.lr = 0x821593E4;
	sub_82158850(ctx, base);
	// lwz r9,764(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r26,3544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3544, ctx.r26.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r28,3564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3564, ctx.r28.u32);
loc_82159414:
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821592dc
	if (ctx.cr6.lt) goto loc_821592DC;
loc_8215942C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82159434"))) PPC_WEAK_FUNC(sub_82159434);
PPC_FUNC_IMPL(__imp__sub_82159434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159438"))) PPC_WEAK_FUNC(sub_82159438);
PPC_FUNC_IMPL(__imp__sub_82159438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82159440;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214be60
	ctx.lr = 0x8215944C;
	sub_8214BE60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82109e00
	ctx.lr = 0x8215945C;
	sub_82109E00(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x82159460;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82159468;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82159474;
	sub_821837D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x8215947C;
	sub_82080000(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8215949c
	if (ctx.cr0.eq) goto loc_8215949C;
	// bl 0x82182e90
	ctx.lr = 0x82159488;
	sub_82182E90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1460(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// bl 0x82156630
	ctx.lr = 0x82159498;
	sub_82156630(ctx, base);
	// b 0x821594a0
	goto loc_821594A0;
loc_8215949C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821594A0:
	// stw r3,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159048
	ctx.lr = 0x821594AC;
	sub_82159048(ctx, base);
	// bl 0x82158eb8
	ctx.lr = 0x821594B0;
	sub_82158EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821592b0
	ctx.lr = 0x821594B8;
	sub_821592B0(ctx, base);
	// addi r30,r31,1160
	ctx.r30.s64 = ctx.r31.s64 + 1160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3240
	ctx.lr = 0x821594C8;
	sub_823C3240(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x821594E8;
	sub_823C31B0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159120
	ctx.lr = 0x821594F8;
	sub_82159120(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159120
	ctx.lr = 0x82159508;
	sub_82159120(ctx, base);
	// bl 0x821eb440
	ctx.lr = 0x8215950C;
	sub_821EB440(ctx, base);
	// stw r3,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r3.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x821ebaa8
	ctx.lr = 0x82159518;
	sub_821EBAA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82159520;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82159528"))) PPC_WEAK_FUNC(sub_82159528);
PPC_FUNC_IMPL(__imp__sub_82159528) {
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
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215959c
	if (ctx.cr0.eq) goto loc_8215959C;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82159120
	ctx.lr = 0x8215955C;
	sub_82159120(ctx, base);
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lwz r10,1464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82159580
	if (ctx.cr6.lt) goto loc_82159580;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82159580
	if (!ctx.cr6.eq) goto loc_82159580;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
loc_82159580:
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8215959c
	if (!ctx.cr6.gt) goto loc_8215959C;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8215959c
	if (!ctx.cr6.gt) goto loc_8215959C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
loc_8215959C:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821595e4
	if (ctx.cr0.eq) goto loc_821595E4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159120
	ctx.lr = 0x821595B8;
	sub_82159120(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821595c8
	if (!ctx.cr6.eq) goto loc_821595C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
loc_821595C8:
	// lwz r10,1464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821595e4
	if (ctx.cr6.lt) goto loc_821595E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
loc_821595E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82158eb8
	ctx.lr = 0x821595EC;
	sub_82158EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821592b0
	ctx.lr = 0x821595F4;
	sub_821592B0(ctx, base);
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

__attribute__((alias("__imp__sub_8215960C"))) PPC_WEAK_FUNC(sub_8215960C);
PPC_FUNC_IMPL(__imp__sub_8215960C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159610"))) PPC_WEAK_FUNC(sub_82159610);
PPC_FUNC_IMPL(__imp__sub_82159610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82159618;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823c53c0
	ctx.lr = 0x82159624;
	sub_823C53C0(ctx, base);
	// lwz r11,728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821596a0
	if (ctx.cr6.eq) goto loc_821596A0;
	// lwz r11,-28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// addi r31,r29,-28
	ctx.r31.s64 = ctx.r29.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821596a0
	if (ctx.cr6.eq) goto loc_821596A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,1132
	ctx.r3.s64 = ctx.r29.s64 + 1132;
	// bl 0x823c3240
	ctx.lr = 0x82159694;
	sub_823C3240(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159528
	ctx.lr = 0x821596A0;
	sub_82159528(ctx, base);
loc_821596A0:
	// addi r3,r29,-28
	ctx.r3.s64 = ctx.r29.s64 + -28;
	// bl 0x82158f88
	ctx.lr = 0x821596A8;
	sub_82158F88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_821596B0"))) PPC_WEAK_FUNC(sub_821596B0);
PPC_FUNC_IMPL(__imp__sub_821596B0) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822aa648
	ctx.lr = 0x821596CC;
	sub_822AA648(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822aa648
	ctx.lr = 0x821596D8;
	sub_822AA648(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x822aa648
	ctx.lr = 0x821596E4;
	sub_822AA648(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82159710"))) PPC_WEAK_FUNC(sub_82159710);
PPC_FUNC_IMPL(__imp__sub_82159710) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x8218a128
	sub_8218A128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8215971C"))) PPC_WEAK_FUNC(sub_8215971C);
PPC_FUNC_IMPL(__imp__sub_8215971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159720"))) PPC_WEAK_FUNC(sub_82159720);
PPC_FUNC_IMPL(__imp__sub_82159720) {
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
	// add. r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f1,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// beq 0x82159774
	if (ctx.cr0.eq) goto loc_82159774;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,10376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10376);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_82159774:
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,-28828
	ctx.r5.s64 = ctx.r11.s64 + -28828;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x8218a5f0
	ctx.lr = 0x82159790;
	sub_8218A5F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821597A0"))) PPC_WEAK_FUNC(sub_821597A0);
PPC_FUNC_IMPL(__imp__sub_821597A0) {
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
	// lwz r3,756(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-24352
	ctx.r11.s64 = ctx.r11.s64 + -24352;
	// addi r10,r10,-24488
	ctx.r10.s64 = ctx.r10.s64 + -24488;
	// addi r9,r9,-24496
	ctx.r9.s64 = ctx.r9.s64 + -24496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// beq cr6,0x821597f8
	if (ctx.cr6.eq) goto loc_821597F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821597F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821597F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,1208
	ctx.r3.s64 = ctx.r31.s64 + 1208;
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// bl 0x823c31a0
	ctx.lr = 0x82159808;
	sub_823C31A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214b2a8
	ctx.lr = 0x82159810;
	sub_8214B2A8(ctx, base);
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

__attribute__((alias("__imp__sub_82159824"))) PPC_WEAK_FUNC(sub_82159824);
PPC_FUNC_IMPL(__imp__sub_82159824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159828"))) PPC_WEAK_FUNC(sub_82159828);
PPC_FUNC_IMPL(__imp__sub_82159828) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82159900
	sub_82159900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159830"))) PPC_WEAK_FUNC(sub_82159830);
PPC_FUNC_IMPL(__imp__sub_82159830) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x82159900
	sub_82159900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159838"))) PPC_WEAK_FUNC(sub_82159838);
PPC_FUNC_IMPL(__imp__sub_82159838) {
	PPC_FUNC_PROLOGUE();
	// extsw r5,r4
	ctx.r5.s64 = ctx.r4.s32;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// b 0x82084038
	sub_82084038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82159850"))) PPC_WEAK_FUNC(sub_82159850);
PPC_FUNC_IMPL(__imp__sub_82159850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82159858;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214b730
	ctx.lr = 0x82159880;
	sub_8214B730(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-24352
	ctx.r11.s64 = ctx.r11.s64 + -24352;
	// addi r10,r10,-24488
	ctx.r10.s64 = ctx.r10.s64 + -24488;
	// addi r9,r9,-24496
	ctx.r9.s64 = ctx.r9.s64 + -24496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// addi r3,r31,1152
	ctx.r3.s64 = ctx.r31.s64 + 1152;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// bl 0x82248a40
	ctx.lr = 0x821598B8;
	sub_82248A40(ctx, base);
	// addi r3,r31,1208
	ctx.r3.s64 = ctx.r31.s64 + 1208;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c35b8
	ctx.lr = 0x821598C8;
	sub_823C35B8(ctx, base);
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// stw r28,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,63
	ctx.r11.u64 = ctx.r11.u64 | 63;
	// stw r29,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x8214b948
	ctx.lr = 0x821598F4;
	sub_8214B948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82159900"))) PPC_WEAK_FUNC(sub_82159900);
PPC_FUNC_IMPL(__imp__sub_82159900) {
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
	// bl 0x821597a0
	ctx.lr = 0x82159920;
	sub_821597A0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82159934
	if (ctx.cr0.eq) goto loc_82159934;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x82159934;
	sub_82183E40(ctx, base);
loc_82159934:
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

__attribute__((alias("__imp__sub_82159950"))) PPC_WEAK_FUNC(sub_82159950);
PPC_FUNC_IMPL(__imp__sub_82159950) {
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
	// lwz r11,-256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215997C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82159a18
	if (ctx.cr0.eq) goto loc_82159A18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82159a10
	if (!ctx.cr6.gt) goto loc_82159A10;
	// lwz r11,876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821599d0
	if (ctx.cr6.eq) goto loc_821599D0;
	// ble cr6,0x821599f0
	if (!ctx.cr6.gt) goto loc_821599F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x821599f0
	if (ctx.cr6.gt) goto loc_821599F0;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,5748(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5748, temp.u32);
	// b 0x821599e0
	goto loc_821599E0;
loc_821599D0:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,5604(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5604, temp.u32);
loc_821599E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8210a9b0
	ctx.lr = 0x821599F0;
	sub_8210A9B0(ctx, base);
loc_821599F0:
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,5892(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5892, temp.u32);
	// lwz r3,508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// bl 0x8210a9b0
	ctx.lr = 0x82159A10;
	sub_8210A9B0(ctx, base);
loc_82159A10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214d630
	ctx.lr = 0x82159A18;
	sub_8214D630(ctx, base);
loc_82159A18:
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

__attribute__((alias("__imp__sub_82159A30"))) PPC_WEAK_FUNC(sub_82159A30);
PPC_FUNC_IMPL(__imp__sub_82159A30) {
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
	// addi r31,r3,-28
	ctx.r31.s64 = ctx.r3.s64 + -28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82159a78
	if (ctx.cr6.lt) goto loc_82159A78;
	// bne cr6,0x82159a8c
	if (!ctx.cr6.eq) goto loc_82159A8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82159a80
	goto loc_82159A80;
loc_82159A78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82159A80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82159A8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c5728
	ctx.lr = 0x82159A9C;
	sub_823C5728(ctx, base);
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

__attribute__((alias("__imp__sub_82159AB4"))) PPC_WEAK_FUNC(sub_82159AB4);
PPC_FUNC_IMPL(__imp__sub_82159AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159AB8"))) PPC_WEAK_FUNC(sub_82159AB8);
PPC_FUNC_IMPL(__imp__sub_82159AB8) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82159AD8:
	// lwz r10,764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 452, ctx.r9.u32);
	// bdnz 0x82159ad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82159AD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82159B40"))) PPC_WEAK_FUNC(sub_82159B40);
PPC_FUNC_IMPL(__imp__sub_82159B40) {
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
	// addi r3,r3,1208
	ctx.r3.s64 = ctx.r3.s64 + 1208;
	// bl 0x823c3280
	ctx.lr = 0x82159B64;
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
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lfs f0,11300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x82159B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f31,468(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 468, temp.u32);
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

__attribute__((alias("__imp__sub_82159BCC"))) PPC_WEAK_FUNC(sub_82159BCC);
PPC_FUNC_IMPL(__imp__sub_82159BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159BD0"))) PPC_WEAK_FUNC(sub_82159BD0);
PPC_FUNC_IMPL(__imp__sub_82159BD0) {
	PPC_FUNC_PROLOGUE();
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82159BE0:
	// addic. r10,r9,8
	ctx.xer.ca = ctx.r9.u32 > 4294967287;
	ctx.r10.s64 = ctx.r9.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82159bfc
	if (ctx.cr0.lt) goto loc_82159BFC;
	// lwz r10,764(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r8.u32);
loc_82159BFC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// bdnz 0x82159be0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82159BE0;
	// addic. r11,r4,8
	ctx.xer.ca = ctx.r4.u32 > 4294967287;
	ctx.r11.s64 = ctx.r4.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// lwz r9,764(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82159C2C"))) PPC_WEAK_FUNC(sub_82159C2C);
PPC_FUNC_IMPL(__imp__sub_82159C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159C30"))) PPC_WEAK_FUNC(sub_82159C30);
PPC_FUNC_IMPL(__imp__sub_82159C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82159C38;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823c53c0
	ctx.lr = 0x82159C44;
	sub_823C53C0(ctx, base);
	// lwz r11,728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82159cb8
	if (ctx.cr6.eq) goto loc_82159CB8;
	// lwz r11,-28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82159cb8
	if (ctx.cr6.eq) goto loc_82159CB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,1180
	ctx.r3.s64 = ctx.r30.s64 + 1180;
	// bl 0x823c3240
	ctx.lr = 0x82159CB0;
	sub_823C3240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159ab8
	ctx.lr = 0x82159CB8;
	sub_82159AB8(ctx, base);
loc_82159CB8:
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// bl 0x82159b40
	ctx.lr = 0x82159CC0;
	sub_82159B40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82159CC8"))) PPC_WEAK_FUNC(sub_82159CC8);
PPC_FUNC_IMPL(__imp__sub_82159CC8) {
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
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,2008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2008, ctx.r4.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,2028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2028, ctx.r6.u32);
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// bl 0x82159bd0
	ctx.lr = 0x82159CF8;
	sub_82159BD0(ctx, base);
	// lwz r11,1132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82159d74
	if (!ctx.cr6.eq) goto loc_82159D74;
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// addi r9,r7,20
	ctx.r9.s64 = ctx.r7.s64 + 20;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r7,48
	ctx.r8.s64 = ctx.r7.s64 + 48;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,5848(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5848, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,5868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5868, ctx.r6.u32);
	// lwz r9,36(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8176, ctx.r9.u32);
	// stw r10,8172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8172, ctx.r10.u32);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,40(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// stw r9,8432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8432, ctx.r9.u32);
	// stw r10,8428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8428, ctx.r10.u32);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,44(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// stw r9,8688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8688, ctx.r9.u32);
	// stw r10,8684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8684, ctx.r10.u32);
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8920, ctx.r8.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8940, ctx.r6.u32);
loc_82159D74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82159D84"))) PPC_WEAK_FUNC(sub_82159D84);
PPC_FUNC_IMPL(__imp__sub_82159D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159D88"))) PPC_WEAK_FUNC(sub_82159D88);
PPC_FUNC_IMPL(__imp__sub_82159D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82159D90;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8214be60
	ctx.lr = 0x82159D9C;
	sub_8214BE60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82109e00
	ctx.lr = 0x82159DAC;
	sub_82109E00(ctx, base);
	// bl 0x82182e90
	ctx.lr = 0x82159DB0;
	sub_82182E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82183078
	ctx.lr = 0x82159DB8;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82159DC4;
	sub_821837D0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82080000
	ctx.lr = 0x82159DCC;
	sub_82080000(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82159dec
	if (ctx.cr0.eq) goto loc_82159DEC;
	// bl 0x82182e90
	ctx.lr = 0x82159DD8;
	sub_82182E90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82156630
	ctx.lr = 0x82159DE8;
	sub_82156630(ctx, base);
	// b 0x82159df0
	goto loc_82159DF0;
loc_82159DEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82159DF0:
	// stw r3,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r3.u32);
	// addi r30,r31,1208
	ctx.r30.s64 = ctx.r31.s64 + 1208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3240
	ctx.lr = 0x82159E04;
	sub_823C3240(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x82159E24;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159ab8
	ctx.lr = 0x82159E2C;
	sub_82159AB8(ctx, base);
	// addi r4,r31,1152
	ctx.r4.s64 = ctx.r31.s64 + 1152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82159cc8
	ctx.lr = 0x82159E38;
	sub_82159CC8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821ebaa8
	ctx.lr = 0x82159E40;
	sub_821EBAA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82159E48;
	sub_821837D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82159E50"))) PPC_WEAK_FUNC(sub_82159E50);
PPC_FUNC_IMPL(__imp__sub_82159E50) {
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
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82159e80
	if (ctx.cr6.eq) goto loc_82159E80;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823c3468
	ctx.lr = 0x82159E78;
	sub_823C3468(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82159E80:
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

__attribute__((alias("__imp__sub_82159E94"))) PPC_WEAK_FUNC(sub_82159E94);
PPC_FUNC_IMPL(__imp__sub_82159E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159E98"))) PPC_WEAK_FUNC(sub_82159E98);
PPC_FUNC_IMPL(__imp__sub_82159E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82159EA0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-24028
	ctx.r11.s64 = ctx.r11.s64 + -24028;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823c2ff0
	ctx.lr = 0x82159EC8;
	sub_823C2FF0(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,-792(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e8f10
	ctx.lr = 0x82159EE0;
	sub_821E8F10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82159f08
	if (!ctx.cr0.eq) goto loc_82159F08;
	// bl 0x82183078
	ctx.lr = 0x82159EEC;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x821837d0
	ctx.lr = 0x82159EF8;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e9348
	ctx.lr = 0x82159F00;
	sub_821E9348(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x82159F08;
	sub_821837D0(ctx, base);
loc_82159F08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82159F14"))) PPC_WEAK_FUNC(sub_82159F14);
PPC_FUNC_IMPL(__imp__sub_82159F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159F18"))) PPC_WEAK_FUNC(sub_82159F18);
PPC_FUNC_IMPL(__imp__sub_82159F18) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x82159F34;
	sub_821E90A8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
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

__attribute__((alias("__imp__sub_82159F4C"))) PPC_WEAK_FUNC(sub_82159F4C);
PPC_FUNC_IMPL(__imp__sub_82159F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82159F50"))) PPC_WEAK_FUNC(sub_82159F50);
PPC_FUNC_IMPL(__imp__sub_82159F50) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x82159F74;
	sub_821E90A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82159fbc
	if (ctx.cr0.eq) goto loc_82159FBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
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
	// ble cr6,0x82159fbc
	if (!ctx.cr6.gt) goto loc_82159FBC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,74
	ctx.r4.s64 = 74;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f0,10788(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10788, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8210a9b0
	ctx.lr = 0x82159FBC;
	sub_8210A9B0(ctx, base);
loc_82159FBC:
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

__attribute__((alias("__imp__sub_82159FD0"))) PPC_WEAK_FUNC(sub_82159FD0);
PPC_FUNC_IMPL(__imp__sub_82159FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82159FD8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32178
	ctx.r30.s64 = -2108817408;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x82159FF4;
	sub_821E90A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215a004
	if (!ctx.cr0.eq) goto loc_8215A004;
loc_82159FFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215a04c
	goto loc_8215A04C;
loc_8215A004:
	// lwz r11,-792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -792);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x82109e00
	ctx.lr = 0x8215A01C;
	sub_82109E00(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,221
	ctx.r4.s64 = 221;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82106f58
	ctx.lr = 0x8215A02C;
	sub_82106F58(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82159ffc
	if (ctx.cr6.eq) goto loc_82159FFC;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x823c3410
	ctx.lr = 0x8215A040;
	sub_823C3410(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8215A04C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215A054"))) PPC_WEAK_FUNC(sub_8215A054);
PPC_FUNC_IMPL(__imp__sub_8215A054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A058"))) PPC_WEAK_FUNC(sub_8215A058);
PPC_FUNC_IMPL(__imp__sub_8215A058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215A060;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x8215A074;
	sub_82185740(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24044
	ctx.r10.s64 = ctx.r10.s64 + -24044;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32178
	ctx.r10.s64 = -2108817408;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r30,-792(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -792);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e8f10
	ctx.lr = 0x8215A0B0;
	sub_821E8F10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215a0d8
	if (!ctx.cr0.eq) goto loc_8215A0D8;
	// bl 0x82183078
	ctx.lr = 0x8215A0BC;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x821837d0
	ctx.lr = 0x8215A0C8;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e9348
	ctx.lr = 0x8215A0D0;
	sub_821E9348(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215A0D8;
	sub_821837D0(ctx, base);
loc_8215A0D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215A0E4"))) PPC_WEAK_FUNC(sub_8215A0E4);
PPC_FUNC_IMPL(__imp__sub_8215A0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A0E8"))) PPC_WEAK_FUNC(sub_8215A0E8);
PPC_FUNC_IMPL(__imp__sub_8215A0E8) {
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
	// addi r11,r11,-24044
	ctx.r11.s64 = ctx.r11.s64 + -24044;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821857f0
	ctx.lr = 0x8215A114;
	sub_821857F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215a128
	if (ctx.cr0.eq) goto loc_8215A128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215A128;
	sub_82183E40(ctx, base);
loc_8215A128:
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

__attribute__((alias("__imp__sub_8215A144"))) PPC_WEAK_FUNC(sub_8215A144);
PPC_FUNC_IMPL(__imp__sub_8215A144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A148"))) PPC_WEAK_FUNC(sub_8215A148);
PPC_FUNC_IMPL(__imp__sub_8215A148) {
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
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215a19c
	if (ctx.cr0.eq) goto loc_8215A19C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821e90a8
	ctx.lr = 0x8215A174;
	sub_821E90A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215a19c
	if (ctx.cr0.eq) goto loc_8215A19C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a19c
	if (ctx.cr6.eq) goto loc_8215A19C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,75
	ctx.r4.s64 = 75;
	// bl 0x8210a9b0
	ctx.lr = 0x8215A19C;
	sub_8210A9B0(ctx, base);
loc_8215A19C:
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

__attribute__((alias("__imp__sub_8215A1B0"))) PPC_WEAK_FUNC(sub_8215A1B0);
PPC_FUNC_IMPL(__imp__sub_8215A1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8215A1B8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r10,-24056
	ctx.r30.s64 = ctx.r10.s64 + -24056;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8215A1D8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8215a1fc
	if (ctx.cr6.lt) goto loc_8215A1FC;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r7.u32);
loc_8215A1FC:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8215a1d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215A1D8;
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82106eb0
	ctx.lr = 0x8215A214;
	sub_82106EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215a220
	if (ctx.cr0.eq) goto loc_8215A220;
	// bl 0x821d38e8
	ctx.lr = 0x8215A220;
	sub_821D38E8(ctx, base);
loc_8215A220:
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8215a244
	if (ctx.cr6.lt) goto loc_8215A244;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r8.u32);
loc_8215A244:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8215A250"))) PPC_WEAK_FUNC(sub_8215A250);
PPC_FUNC_IMPL(__imp__sub_8215A250) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,-24056
	ctx.r10.s64 = ctx.r10.s64 + -24056;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82106eb0
	ctx.lr = 0x8215A278;
	sub_82106EB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215a290
	if (ctx.cr0.eq) goto loc_8215A290;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8215a294
	if (!ctx.cr6.eq) goto loc_8215A294;
loc_8215A290:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215A294:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8215A2A4"))) PPC_WEAK_FUNC(sub_8215A2A4);
PPC_FUNC_IMPL(__imp__sub_8215A2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A2A8"))) PPC_WEAK_FUNC(sub_8215A2A8);
PPC_FUNC_IMPL(__imp__sub_8215A2A8) {
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
	// bl 0x8215a250
	ctx.lr = 0x8215A2C0;
	sub_8215A250(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215a2e4
	if (ctx.cr0.eq) goto loc_8215A2E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a1b0
	ctx.lr = 0x8215A2DC;
	sub_8215A1B0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8215A2E4:
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

__attribute__((alias("__imp__sub_8215A2F8"))) PPC_WEAK_FUNC(sub_8215A2F8);
PPC_FUNC_IMPL(__imp__sub_8215A2F8) {
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
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8215a34c
	if (ctx.cr6.gt) goto loc_8215A34C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r10,r10,57796
	ctx.r10.u64 = ctx.r10.u64 | 57796;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// bl 0x8215a1b0
	ctx.lr = 0x8215A33C;
	sub_8215A1B0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x8215a3bc
	goto loc_8215A3BC;
loc_8215A34C:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r9,r11,-7560
	ctx.r9.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// divwu r8,r10,r11
	ctx.r8.u32 = ctx.r10.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8215a3b0
	if (!ctx.cr0.eq) goto loc_8215A3B0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,57796
	ctx.r10.u64 = ctx.r10.u64 | 57796;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// twllei r11,0
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-7936
	ctx.r10.s64 = ctx.r10.s64 + -7936;
	// divwu r11,r9,r11
	ctx.r11.u32 = ctx.r9.u32 / ctx.r11.u32;
	// stw r11,240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 240, ctx.r11.u32);
	// stw r7,236(r10)
	PPC_STORE_U32(ctx.r10.u32 + 236, ctx.r7.u32);
loc_8215A3B0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8215A3BC:
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

__attribute__((alias("__imp__sub_8215A3D4"))) PPC_WEAK_FUNC(sub_8215A3D4);
PPC_FUNC_IMPL(__imp__sub_8215A3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A3D8"))) PPC_WEAK_FUNC(sub_8215A3D8);
PPC_FUNC_IMPL(__imp__sub_8215A3D8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x8215A3FC;
	sub_821E90A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215a458
	if (ctx.cr0.eq) goto loc_8215A458;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a458
	if (ctx.cr6.eq) goto loc_8215A458;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215a450
	if (ctx.cr6.eq) goto loc_8215A450;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8215a444
	if (ctx.cr6.eq) goto loc_8215A444;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8215a458
	if (!ctx.cr6.eq) goto loc_8215A458;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a250
	ctx.lr = 0x8215A430;
	sub_8215A250(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215a458
	if (ctx.cr0.eq) goto loc_8215A458;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x8215a458
	goto loc_8215A458;
loc_8215A444:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a2f8
	ctx.lr = 0x8215A44C;
	sub_8215A2F8(ctx, base);
	// b 0x8215a458
	goto loc_8215A458;
loc_8215A450:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a2a8
	ctx.lr = 0x8215A458;
	sub_8215A2A8(ctx, base);
loc_8215A458:
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

__attribute__((alias("__imp__sub_8215A46C"))) PPC_WEAK_FUNC(sub_8215A46C);
PPC_FUNC_IMPL(__imp__sub_8215A46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A470"))) PPC_WEAK_FUNC(sub_8215A470);
PPC_FUNC_IMPL(__imp__sub_8215A470) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x8215a1b0
	ctx.lr = 0x8215A4A4;
	sub_8215A1B0(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r10,r10,57796
	ctx.r10.u64 = ctx.r10.u64 | 57796;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8215A4D4"))) PPC_WEAK_FUNC(sub_8215A4D4);
PPC_FUNC_IMPL(__imp__sub_8215A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A4D8"))) PPC_WEAK_FUNC(sub_8215A4D8);
PPC_FUNC_IMPL(__imp__sub_8215A4D8) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a520
	if (ctx.cr6.eq) goto loc_8215A520;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8215a1b0
	ctx.lr = 0x8215A500;
	sub_8215A1B0(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,57796
	ctx.r11.u64 = ctx.r11.u64 | 57796;
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
loc_8215A520:
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

__attribute__((alias("__imp__sub_8215A534"))) PPC_WEAK_FUNC(sub_8215A534);
PPC_FUNC_IMPL(__imp__sub_8215A534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A538"))) PPC_WEAK_FUNC(sub_8215A538);
PPC_FUNC_IMPL(__imp__sub_8215A538) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r11,r11,-24036
	ctx.r11.s64 = ctx.r11.s64 + -24036;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823c3048
	ctx.lr = 0x8215A560;
	sub_823C3048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821857f0
	ctx.lr = 0x8215A568;
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

__attribute__((alias("__imp__sub_8215A57C"))) PPC_WEAK_FUNC(sub_8215A57C);
PPC_FUNC_IMPL(__imp__sub_8215A57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A580"))) PPC_WEAK_FUNC(sub_8215A580);
PPC_FUNC_IMPL(__imp__sub_8215A580) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8215a5b0
	if (ctx.cr6.gt) goto loc_8215A5B0;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x823c3468
	ctx.lr = 0x8215A5A8;
	sub_823C3468(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8215A5B0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8215A5D0"))) PPC_WEAK_FUNC(sub_8215A5D0);
PPC_FUNC_IMPL(__imp__sub_8215A5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8215A5D8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82185740
	ctx.lr = 0x8215A5EC;
	sub_82185740(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-24036
	ctx.r11.s64 = ctx.r11.s64 + -24036;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x823c2ff0
	ctx.lr = 0x8215A60C;
	sub_823C2FF0(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x822aa648
	ctx.lr = 0x8215A620;
	sub_822AA648(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,-792(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e8f10
	ctx.lr = 0x8215A634;
	sub_821E8F10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215a65c
	if (!ctx.cr0.eq) goto loc_8215A65C;
	// bl 0x82183078
	ctx.lr = 0x8215A640;
	sub_82183078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x821837d0
	ctx.lr = 0x8215A64C;
	sub_821837D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e9348
	ctx.lr = 0x8215A654;
	sub_821E9348(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821837d0
	ctx.lr = 0x8215A65C;
	sub_821837D0(ctx, base);
loc_8215A65C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8215A668"))) PPC_WEAK_FUNC(sub_8215A668);
PPC_FUNC_IMPL(__imp__sub_8215A668) {
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
	// bl 0x8215a538
	ctx.lr = 0x8215A688;
	sub_8215A538(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215a69c
	if (ctx.cr0.eq) goto loc_8215A69C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183e40
	ctx.lr = 0x8215A69C;
	sub_82183E40(ctx, base);
loc_8215A69C:
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

__attribute__((alias("__imp__sub_8215A6B8"))) PPC_WEAK_FUNC(sub_8215A6B8);
PPC_FUNC_IMPL(__imp__sub_8215A6B8) {
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
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x8215A6DC;
	sub_821E90A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215a730
	if (ctx.cr0.eq) goto loc_8215A730;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a730
	if (ctx.cr6.eq) goto loc_8215A730;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
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
	// ble cr6,0x8215a730
	if (!ctx.cr6.gt) goto loc_8215A730;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,73
	ctx.r4.s64 = 73;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f0,10644(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10644, temp.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8210a9b0
	ctx.lr = 0x8215A730;
	sub_8210A9B0(ctx, base);
loc_8215A730:
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

__attribute__((alias("__imp__sub_8215A744"))) PPC_WEAK_FUNC(sub_8215A744);
PPC_FUNC_IMPL(__imp__sub_8215A744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8215A748"))) PPC_WEAK_FUNC(sub_8215A748);
PPC_FUNC_IMPL(__imp__sub_8215A748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8215A750;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32182
	ctx.r30.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,16208
	ctx.r4.s64 = 16208;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A77C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8215a7a4
	if (ctx.cr6.eq) goto loc_8215A7A4;
	// lwz r3,-4904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4904);
	// li r4,16207
	ctx.r4.s64 = 16207;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215A7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8215A7A4:
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x8215A7B4;
	sub_822AA648(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,3700
	ctx.r5.s64 = ctx.r11.s64 + 3700;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x8215A7D0;
	sub_8218A5F0(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,56280
	ctx.r10.u64 = ctx.r10.u64 | 56280;
	// ori r9,r9,56300
	ctx.r9.u64 = ctx.r9.u64 | 56300;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r11,-792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// bl 0x823c3410
	ctx.lr = 0x8215A80C;
	sub_823C3410(ctx, base);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-7560
	ctx.r11.s64 = ctx.r11.s64 + -7560;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8215A830"))) PPC_WEAK_FUNC(sub_8215A830);
PPC_FUNC_IMPL(__imp__sub_8215A830) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -792);
	// bl 0x821e90a8
	ctx.lr = 0x8215A854;
	sub_821E90A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215a8b4
	if (ctx.cr0.eq) goto loc_8215A8B4;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a8b4
	if (ctx.cr6.eq) goto loc_8215A8B4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215a8a0
	if (ctx.cr6.eq) goto loc_8215A8A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8215a894
	if (ctx.cr6.eq) goto loc_8215A894;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8215a8b4
	if (!ctx.cr6.eq) goto loc_8215A8B4;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a8b4
	if (ctx.cr6.eq) goto loc_8215A8B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8215a8b0
	goto loc_8215A8B0;
loc_8215A894:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a580
	ctx.lr = 0x8215A89C;
	sub_8215A580(ctx, base);
	// b 0x8215a8b4
	goto loc_8215A8B4;
loc_8215A8A0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215a8b4
	if (ctx.cr6.eq) goto loc_8215A8B4;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8215A8B0:
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8215A8B4:
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

