#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82394740"))) PPC_WEAK_FUNC(sub_82394740);
PPC_FUNC_IMPL(__imp__sub_82394740) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-30312
	ctx.r8.s64 = ctx.r11.s64 + -30312;
	// addi r7,r10,-30328
	ctx.r7.s64 = ctx.r10.s64 + -30328;
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x82394784;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8239479c
	if (ctx.cr6.eq) goto loc_8239479C;
	// bl 0x82357128
	ctx.lr = 0x82394798;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239479C:
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

__attribute__((alias("__imp__sub_823947B4"))) PPC_WEAK_FUNC(sub_823947B4);
PPC_FUNC_IMPL(__imp__sub_823947B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823947B8"))) PPC_WEAK_FUNC(sub_823947B8);
PPC_FUNC_IMPL(__imp__sub_823947B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823947C0;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394864
	if (ctx.cr6.eq) goto loc_82394864;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x82394864
	if (!ctx.cr6.eq) goto loc_82394864;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82394868
	if (ctx.cr6.eq) goto loc_82394868;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r9,38
	ctx.r9.s64 = 38;
	// addi r8,r10,-30340
	ctx.r8.s64 = ctx.r10.s64 + -30340;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x82394818;
	sub_823AB0F8(ctx, base);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82394834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82394864:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82394868:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x823ab100
	ctx.lr = 0x82394878;
	sub_823AB100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82394884"))) PPC_WEAK_FUNC(sub_82394884);
PPC_FUNC_IMPL(__imp__sub_82394884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394888"))) PPC_WEAK_FUNC(sub_82394888);
PPC_FUNC_IMPL(__imp__sub_82394888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823948fc
	if (ctx.cr6.gt) {
		sub_823948FC(ctx, base);
		return;
	}
	// beq cr6,0x823948ec
	if (ctx.cr6.eq) {
		// ERROR 823948EC
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x8239497c
	if (ctx.cr6.gt) {
		// ERROR 8239497C
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,18628
	ctx.r12.s64 = ctx.r12.s64 + 18628;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823948C4"))) PPC_WEAK_FUNC(sub_823948C4);
PPC_FUNC_IMPL(__imp__sub_823948C4) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,18820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18820);
	// lwz r17,18820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18820);
	// lwz r17,18820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18820);
	// lwz r17,18820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18820);
	// lwz r17,18820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18820);
	// lwz r17,18820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18820);
	// lwz r17,18820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18820);
	// lwz r17,18820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18820);
	// lwz r17,18820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18820);
	// lwz r17,18820(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 18820);
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823948FC"))) PPC_WEAK_FUNC(sub_823948FC);
PPC_FUNC_IMPL(__imp__sub_823948FC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82394948
	if (ctx.cr6.gt) goto loc_82394948;
	// beq cr6,0x82394984
	if (ctx.cr6.eq) goto loc_82394984;
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8239497c
	if (ctx.cr6.gt) goto loc_8239497C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823948ec
	if (ctx.cr6.eq) {
		// ERROR 823948EC
		return;
	}
	// bdz 0x823948ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823948EC;
	// bdz 0x8239497c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239497C;
	// bdz 0x823948ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823948EC;
	// bdz 0x823948ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823948EC;
	// bdz 0x82394984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82394984;
	// bdz 0x8239497c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239497C;
	// b 0x82394984
	goto loc_82394984;
loc_82394948:
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8239497c
	if (ctx.cr6.gt) goto loc_8239497C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82394984
	if (ctx.cr6.eq) goto loc_82394984;
	// bdz 0x82394984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82394984;
	// bdz 0x82394984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82394984;
	// bdz 0x82394984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82394984;
	// bdz 0x82394984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82394984;
	// bdz 0x82394984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82394984;
	// b 0x82394984
	goto loc_82394984;
loc_8239497C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_82394984:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
    loc_823948EC:
        ;
}

__attribute__((alias("__imp__sub_8239498C"))) PPC_WEAK_FUNC(sub_8239498C);
PPC_FUNC_IMPL(__imp__sub_8239498C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394990"))) PPC_WEAK_FUNC(sub_82394990);
PPC_FUNC_IMPL(__imp__sub_82394990) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ab790
	ctx.lr = 0x823949B4;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-30160
	ctx.r8.s64 = ctx.r11.s64 + -30160;
	// addi r7,r10,-30176
	ctx.r7.s64 = ctx.r10.s64 + -30176;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82394A0C"))) PPC_WEAK_FUNC(sub_82394A0C);
PPC_FUNC_IMPL(__imp__sub_82394A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394A10"))) PPC_WEAK_FUNC(sub_82394A10);
PPC_FUNC_IMPL(__imp__sub_82394A10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82394b00
	sub_82394B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82394A18"))) PPC_WEAK_FUNC(sub_82394A18);
PPC_FUNC_IMPL(__imp__sub_82394A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82394A20;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82394A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82394a5c
	if (ctx.cr6.eq) goto loc_82394A5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82394A5C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,37
	ctx.r10.s64 = 37;
	// addi r9,r11,-31544
	ctx.r9.s64 = ctx.r11.s64 + -31544;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82394A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82394af0
	if (!ctx.cr6.eq) goto loc_82394AF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82394AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82394ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82394AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x82394AF0;
	sub_823AB100(ctx, base);
loc_82394AF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82394AFC"))) PPC_WEAK_FUNC(sub_82394AFC);
PPC_FUNC_IMPL(__imp__sub_82394AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394B00"))) PPC_WEAK_FUNC(sub_82394B00);
PPC_FUNC_IMPL(__imp__sub_82394B00) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-30160
	ctx.r8.s64 = ctx.r11.s64 + -30160;
	// addi r7,r10,-30176
	ctx.r7.s64 = ctx.r10.s64 + -30176;
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x82394B44;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82394b5c
	if (ctx.cr6.eq) goto loc_82394B5C;
	// bl 0x82357128
	ctx.lr = 0x82394B58;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82394B5C:
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

__attribute__((alias("__imp__sub_82394B74"))) PPC_WEAK_FUNC(sub_82394B74);
PPC_FUNC_IMPL(__imp__sub_82394B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394B78"))) PPC_WEAK_FUNC(sub_82394B78);
PPC_FUNC_IMPL(__imp__sub_82394B78) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// std r30,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r30.u64);
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82394BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82394BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393458
	ctx.lr = 0x82394BDC;
	sub_82393458(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82394bf0
	if (ctx.cr6.eq) goto loc_82394BF0;
	// bl 0x82357240
	ctx.lr = 0x82394BEC;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82394BF0:
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

__attribute__((alias("__imp__sub_82394C10"))) PPC_WEAK_FUNC(sub_82394C10);
PPC_FUNC_IMPL(__imp__sub_82394C10) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82380750
	ctx.lr = 0x82394C40;
	sub_82380750(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82394c54
	if (ctx.cr6.eq) goto loc_82394C54;
	// bl 0x82357240
	ctx.lr = 0x82394C50;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82394C54:
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

__attribute__((alias("__imp__sub_82394C74"))) PPC_WEAK_FUNC(sub_82394C74);
PPC_FUNC_IMPL(__imp__sub_82394C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394C78"))) PPC_WEAK_FUNC(sub_82394C78);
PPC_FUNC_IMPL(__imp__sub_82394C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82394C80;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82380750
	ctx.lr = 0x82394CA4;
	sub_82380750(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82394cbc
	if (ctx.cr6.eq) goto loc_82394CBC;
	// bl 0x82357240
	ctx.lr = 0x82394CB8;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82394CBC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r9,r11,31824
	ctx.r9.s64 = ctx.r11.s64 + 31824;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82394ce8
	if (ctx.cr6.eq) goto loc_82394CE8;
	// bl 0x82357128
	ctx.lr = 0x82394CE4;
	sub_82357128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82394CE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82394CF0"))) PPC_WEAK_FUNC(sub_82394CF0);
PPC_FUNC_IMPL(__imp__sub_82394CF0) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r7,r10,-30012
	ctx.r7.s64 = ctx.r10.s64 + -30012;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x82356e70
	ctx.lr = 0x82394D38;
	sub_82356E70(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8235a518
	ctx.lr = 0x82394D44;
	sub_8235A518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82394b78
	ctx.lr = 0x82394D4C;
	sub_82394B78(ctx, base);
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

__attribute__((alias("__imp__sub_82394D64"))) PPC_WEAK_FUNC(sub_82394D64);
PPC_FUNC_IMPL(__imp__sub_82394D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394D68"))) PPC_WEAK_FUNC(sub_82394D68);
PPC_FUNC_IMPL(__imp__sub_82394D68) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r10,r11,-30012
	ctx.r10.s64 = ctx.r11.s64 + -30012;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8235a538
	ctx.lr = 0x82394D94;
	sub_8235A538(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82356eb8
	ctx.lr = 0x82394D9C;
	sub_82356EB8(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,-30368
	ctx.r8.s64 = ctx.r9.s64 + -30368;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82393458
	ctx.lr = 0x82394DB4;
	sub_82393458(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82394dcc
	if (ctx.cr6.eq) goto loc_82394DCC;
	// bl 0x82357240
	ctx.lr = 0x82394DC8;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82394DCC:
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

__attribute__((alias("__imp__sub_82394DEC"))) PPC_WEAK_FUNC(sub_82394DEC);
PPC_FUNC_IMPL(__imp__sub_82394DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394DF0"))) PPC_WEAK_FUNC(sub_82394DF0);
PPC_FUNC_IMPL(__imp__sub_82394DF0) {
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
	// ld r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,40
	ctx.r4.s64 = ctx.r4.s64 + 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r11.u64);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// std r10,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r10.u64);
	// bl 0x82357068
	ctx.lr = 0x82394E28;
	sub_82357068(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82357038
	ctx.lr = 0x82394E34;
	sub_82357038(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x82394E3C;
	sub_82356EB8(ctx, base);
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8235a760
	ctx.lr = 0x82394E48;
	sub_8235A760(ctx, base);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lbz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r9,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r9.u32);
	// stb r8,72(r30)
	PPC_STORE_U8(ctx.r30.u32 + 72, ctx.r8.u8);
	// bl 0x82393c50
	ctx.lr = 0x82394E64;
	sub_82393C50(ctx, base);
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

__attribute__((alias("__imp__sub_82394E7C"))) PPC_WEAK_FUNC(sub_82394E7C);
PPC_FUNC_IMPL(__imp__sub_82394E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82394E80"))) PPC_WEAK_FUNC(sub_82394E80);
PPC_FUNC_IMPL(__imp__sub_82394E80) {
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
	// bl 0x82394d68
	ctx.lr = 0x82394EA0;
	sub_82394D68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394eb8
	if (ctx.cr6.eq) goto loc_82394EB8;
	// bl 0x82357128
	ctx.lr = 0x82394EB4;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82394EB8:
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

__attribute__((alias("__imp__sub_82394ED0"))) PPC_WEAK_FUNC(sub_82394ED0);
PPC_FUNC_IMPL(__imp__sub_82394ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82394EF0"))) PPC_WEAK_FUNC(sub_82394EF0);
PPC_FUNC_IMPL(__imp__sub_82394EF0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,-30004
	ctx.r10.s64 = ctx.r11.s64 + -30004;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82394d68
	ctx.lr = 0x82394F20;
	sub_82394D68(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82394f38
	if (ctx.cr6.eq) goto loc_82394F38;
	// bl 0x82357128
	ctx.lr = 0x82394F34;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82394F38:
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

__attribute__((alias("__imp__sub_82394F50"))) PPC_WEAK_FUNC(sub_82394F50);
PPC_FUNC_IMPL(__imp__sub_82394F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82394F58;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82394f70
	if (!ctx.cr6.eq) goto loc_82394F70;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_82394F70:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add. r23,r11,r10
	ctx.r23.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x82394f88
	if (!ctx.cr0.eq) goto loc_82394F88;
loc_82394F7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82394F88:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x82394F90;
	sub_823570E0(ctx, base);
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// rlwinm r31,r11,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357208
	ctx.lr = 0x82394FA8;
	sub_82357208(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82394FB4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82394f7c
	if (ctx.cr6.eq) goto loc_82394F7C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823585a0
	ctx.lr = 0x82394FC8;
	sub_823585A0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82395080
	if (ctx.cr6.eq) goto loc_82395080;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8239506c
	if (!ctx.cr6.gt) goto loc_8239506C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r25,16
	ctx.r31.s64 = ctx.r25.s64 + 16;
	// subfic r27,r25,-16
	ctx.xer.ca = ctx.r25.u32 <= 4294967280;
	ctx.r27.s64 = -16 - ctx.r25.s64;
	// addi r26,r11,-30004
	ctx.r26.s64 = ctx.r11.s64 + -30004;
loc_82394FF8:
	// addic. r11,r31,-16
	ctx.xer.ca = ctx.r31.u32 > 15;
	ctx.r11.s64 = ctx.r31.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8239501c
	if (ctx.cr0.eq) goto loc_8239501C;
	// stw r26,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r24.u32);
	// bl 0x82394cf0
	ctx.lr = 0x82395010;
	sub_82394CF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82394df0
	ctx.lr = 0x8239501C;
	sub_82394DF0(ctx, base);
loc_8239501C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r29,r27,r31
	ctx.r29.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// bl 0x82394df0
	ctx.lr = 0x8239503C;
	sub_82394DF0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82395058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82394ff8
	if (ctx.cr6.lt) goto loc_82394FF8;
loc_8239506C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82395080
	if (ctx.cr6.eq) goto loc_82395080;
	// bl 0x82357240
	ctx.lr = 0x8239507C;
	sub_82357240(ctx, base);
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
loc_82395080:
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r23.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82395094"))) PPC_WEAK_FUNC(sub_82395094);
PPC_FUNC_IMPL(__imp__sub_82395094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82395098"))) PPC_WEAK_FUNC(sub_82395098);
PPC_FUNC_IMPL(__imp__sub_82395098) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82395108
	if (!ctx.cr6.lt) goto loc_82395108;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x823950f4
	if (!ctx.cr6.lt) goto loc_823950F4;
	// divwu r10,r4,r11
	ctx.r10.u32 = ctx.r4.u32 / ctx.r11.u32;
	// divwu r9,r4,r11
	ctx.r9.u32 = ctx.r4.u32 / ctx.r11.u32;
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r10,r8,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r8.s64;
	// twllei r11,0
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// twllei r11,0
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823950F4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82394f50
	ctx.lr = 0x823950FC;
	sub_82394F50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8239510c
	if (ctx.cr6.eq) goto loc_8239510C;
loc_82395108:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8239510C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239511C"))) PPC_WEAK_FUNC(sub_8239511C);
PPC_FUNC_IMPL(__imp__sub_8239511C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82395120"))) PPC_WEAK_FUNC(sub_82395120);
PPC_FUNC_IMPL(__imp__sub_82395120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82395128;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82395164
	if (ctx.cr6.gt) goto loc_82395164;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82394f50
	ctx.lr = 0x82395150;
	sub_82394F50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82395164
	if (!ctx.cr6.eq) goto loc_82395164;
loc_82395158:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82395164:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82395158
	if (ctx.cr6.eq) goto loc_82395158;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823951b0
	if (ctx.cr0.eq) goto loc_823951B0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-30004
	ctx.r9.s64 = ctx.r11.s64 + -30004;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82394cf0
	ctx.lr = 0x823951A4;
	sub_82394CF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82394df0
	ctx.lr = 0x823951B0;
	sub_82394DF0(ctx, base);
loc_823951B0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82394df0
	ctx.lr = 0x823951C4;
	sub_82394DF0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823951DC"))) PPC_WEAK_FUNC(sub_823951DC);
PPC_FUNC_IMPL(__imp__sub_823951DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823951E0"))) PPC_WEAK_FUNC(sub_823951E0);
PPC_FUNC_IMPL(__imp__sub_823951E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823951E8;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823952dc
	if (ctx.cr6.eq) goto loc_823952DC;
	// bl 0x82380750
	ctx.lr = 0x82395200;
	sub_82380750(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82395218
	if (ctx.cr6.eq) goto loc_82395218;
	// bl 0x82357240
	ctx.lr = 0x82395214;
	sub_82357240(ctx, base);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
loc_82395218:
	// stw r25,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r25.u32);
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82395238
	if (!ctx.cr6.eq) goto loc_82395238;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82395238:
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823952dc
	if (ctx.cr6.eq) goto loc_823952DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82395098
	ctx.lr = 0x82395250;
	sub_82395098(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82395260
	if (!ctx.cr6.eq) goto loc_82395260;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82395260:
	// lwz r24,8(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x823952d8
	if (ctx.cr6.eq) goto loc_823952D8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r26,r11,-30004
	ctx.r26.s64 = ctx.r11.s64 + -30004;
loc_8239527C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add. r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823952a8
	if (ctx.cr0.eq) goto loc_823952A8;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82394cf0
	ctx.lr = 0x8239529C;
	sub_82394CF0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82394df0
	ctx.lr = 0x823952A8;
	sub_82394DF0(ctx, base);
loc_823952A8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x82394df0
	ctx.lr = 0x823952CC;
	sub_82394DF0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// bne 0x8239527c
	if (!ctx.cr0.eq) goto loc_8239527C;
loc_823952D8:
	// stw r24,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r24.u32);
loc_823952DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823952E8"))) PPC_WEAK_FUNC(sub_823952E8);
PPC_FUNC_IMPL(__imp__sub_823952E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823952F0;
	sub_82248750(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r19,12(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8239573c
	if (ctx.cr6.eq) goto loc_8239573C;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8239573c
	if (!ctx.cr6.eq) goto loc_8239573C;
	// lwz r16,48(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8239573c
	if (ctx.cr6.eq) goto loc_8239573C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r18,r11,-30024
	ctx.r18.s64 = ctx.r11.s64 + -30024;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r9,37
	ctx.r9.s64 = 37;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r21,2
	ctx.r21.s64 = 2;
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// li r22,16
	ctx.r22.s64 = 16;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// lbz r6,8(r19)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r19.u32 + 8);
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// bl 0x82380748
	ctx.lr = 0x82395380;
	sub_82380748(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82395678
	if (ctx.cr6.eq) goto loc_82395678;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r23,r11,-30368
	ctx.r23.s64 = ctx.r11.s64 + -30368;
	// addi r26,r10,-30012
	ctx.r26.s64 = ctx.r10.s64 + -30012;
	// addi r25,r9,-30004
	ctx.r25.s64 = ctx.r9.s64 + -30004;
loc_823953A8:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82394cf0
	ctx.lr = 0x823953B0;
	sub_82394CF0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82380930
	ctx.lr = 0x823953BC;
	sub_82380930(ctx, base);
	// lwz r11,76(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82395400
	if (!ctx.cr6.eq) goto loc_82395400;
	// bl 0x82357600
	ctx.lr = 0x823953D0;
	sub_82357600(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82357068
	ctx.lr = 0x823953DC;
	sub_82357068(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82357038
	ctx.lr = 0x823953EC;
	sub_82357038(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82356eb8
	ctx.lr = 0x823953F4;
	sub_82356EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357608
	ctx.lr = 0x823953FC;
	sub_82357608(ctx, base);
	// b 0x82395424
	goto loc_82395424;
loc_82395400:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x823622c8
	ctx.lr = 0x82395408;
	sub_823622C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82357038
	ctx.lr = 0x82395418;
	sub_82357038(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82356eb8
	ctx.lr = 0x82395420;
	sub_82356EB8(ctx, base);
	// bl 0x82362250
	ctx.lr = 0x82395424;
	sub_82362250(ctx, base);
loc_82395424:
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x8235a760
	ctx.lr = 0x82395434;
	sub_8235A760(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823575e8
	ctx.lr = 0x8239543C;
	sub_823575E8(ctx, base);
	// std r3,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823575e8
	ctx.lr = 0x82395448;
	sub_823575E8(ctx, base);
	// std r3,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357638
	ctx.lr = 0x82395454;
	sub_82357638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357630
	ctx.lr = 0x82395460;
	sub_82357630(ctx, base);
	// stb r3,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, ctx.r3.u8);
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359918
	ctx.lr = 0x82395470;
	sub_82359918(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82395534
	if (ctx.cr6.eq) goto loc_82395534;
loc_82395480:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359c98
	ctx.lr = 0x8239548C;
	sub_82359C98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357638
	ctx.lr = 0x82395498;
	sub_82357638(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82395528
	if (ctx.cr6.eq) goto loc_82395528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359990
	ctx.lr = 0x823954AC;
	sub_82359990(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x823954bc
	if (!ctx.cr6.eq) goto loc_823954BC;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_823954BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359d58
	ctx.lr = 0x823954C8;
	sub_82359D58(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359c98
	ctx.lr = 0x823954D8;
	sub_82359C98(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82372d50
	ctx.lr = 0x823954E8;
	sub_82372D50(ctx, base);
	// stw r14,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r14.u32);
	// stb r15,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, ctx.r15.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82373228
	ctx.lr = 0x82395500;
	sub_82373228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x823732a8
	ctx.lr = 0x8239550C;
	sub_823732A8(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82373298
	ctx.lr = 0x82395514;
	sub_82373298(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82393558
	ctx.lr = 0x82395520;
	sub_82393558(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82373298
	ctx.lr = 0x82395528;
	sub_82373298(ctx, base);
loc_82395528:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82395480
	if (ctx.cr6.lt) goto loc_82395480;
loc_82395534:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357618
	ctx.lr = 0x8239553C;
	sub_82357618(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// bl 0x82356e70
	ctx.lr = 0x82395568;
	sub_82356E70(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8235a518
	ctx.lr = 0x82395574;
	sub_8235A518(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82394b78
	ctx.lr = 0x8239557C;
	sub_82394B78(ctx, base);
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// ld r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// bl 0x82357068
	ctx.lr = 0x8239559C;
	sub_82357068(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82357038
	ctx.lr = 0x823955A8;
	sub_82357038(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82356eb8
	ctx.lr = 0x823955B0;
	sub_82356EB8(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x8235a760
	ctx.lr = 0x823955BC;
	sub_8235A760(ctx, base);
	// lbz r9,296(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 296);
	// lwz r8,300(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stb r9,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r9.u8);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// bl 0x82393c50
	ctx.lr = 0x823955D8;
	sub_82393C50(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82395120
	ctx.lr = 0x823955E4;
	sub_82395120(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8235a538
	ctx.lr = 0x823955F8;
	sub_8235A538(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82356eb8
	ctx.lr = 0x82395600;
	sub_82356EB8(ctx, base);
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8239563c
	if (ctx.cr6.eq) goto loc_8239563C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82395618:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82373298
	ctx.lr = 0x82395628;
	sub_82373298(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82395618
	if (ctx.cr6.lt) goto loc_82395618;
loc_8239563C:
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82395654
	if (ctx.cr6.eq) goto loc_82395654;
	// bl 0x82357240
	ctx.lr = 0x82395650;
	sub_82357240(ctx, base);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
loc_82395654:
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// beq cr6,0x823956f8
	if (ctx.cr6.eq) goto loc_823956F8;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82394d68
	ctx.lr = 0x8239566C;
	sub_82394D68(ctx, base);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplw cr6,r20,r17
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x823953a8
	if (ctx.cr6.lt) goto loc_823953A8;
loc_82395678:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r31,0(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x82395684;
	sub_823AB0F8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823956A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r8,r9,32288
	ctx.r8.s64 = ctx.r9.s64 + 32288;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,60(r24)
	PPC_STORE_U32(ctx.r24.u32 + 60, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,64(r24)
	PPC_STORE_U32(ctx.r24.u32 + 64, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,68(r24)
	PPC_STORE_U32(ctx.r24.u32 + 68, ctx.r5.u32);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r8,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r8.u32);
	// stw r4,72(r24)
	PPC_STORE_U32(ctx.r24.u32 + 72, ctx.r4.u32);
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// bl 0x82380750
	ctx.lr = 0x823956DC;
	sub_82380750(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823956ec
	if (ctx.cr6.eq) goto loc_823956EC;
	// bl 0x82357240
	ctx.lr = 0x823956EC;
	sub_82357240(ctx, base);
loc_823956EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_823956F8:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239570C;
	sub_823AB100(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82394d68
	ctx.lr = 0x82395714;
	sub_82394D68(ctx, base);
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82380750
	ctx.lr = 0x82395720;
	sub_82380750(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82395750
	if (ctx.cr6.eq) goto loc_82395750;
	// bl 0x82357240
	ctx.lr = 0x82395730;
	sub_82357240(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
loc_8239573C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823ab100
	ctx.lr = 0x82395750;
	sub_823AB100(ctx, base);
loc_82395750:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239575C"))) PPC_WEAK_FUNC(sub_8239575C);
PPC_FUNC_IMPL(__imp__sub_8239575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82395760"))) PPC_WEAK_FUNC(sub_82395760);
PPC_FUNC_IMPL(__imp__sub_82395760) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x82395780;
	sub_823570E0(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x823570f0
	ctx.lr = 0x82395788;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823957d8
	if (ctx.cr6.eq) goto loc_823957D8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,37
	ctx.r10.s64 = 37;
	// addi r9,r11,-30024
	ctx.r9.s64 = ctx.r11.s64 + -30024;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x823957dc
	goto loc_823957DC;
loc_823957D8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823957DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823957E4;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823957f4
	if (!ctx.cr6.eq) goto loc_823957F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239581c
	goto loc_8239581C;
loc_823957F4:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// bl 0x823951e0
	ctx.lr = 0x82395808;
	sub_823951E0(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8239581C:
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

__attribute__((alias("__imp__sub_82395834"))) PPC_WEAK_FUNC(sub_82395834);
PPC_FUNC_IMPL(__imp__sub_82395834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82395838"))) PPC_WEAK_FUNC(sub_82395838);
PPC_FUNC_IMPL(__imp__sub_82395838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823958a0
	if (ctx.cr6.gt) {
		// ERROR 823958A0
		return;
	}
	// beq cr6,0x8239594c
	if (ctx.cr6.eq) {
		// ERROR 8239594C
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8239594c
	if (ctx.cr6.gt) {
		// ERROR 8239594C
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22644
	ctx.r12.s64 = ctx.r12.s64 + 22644;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82395874"))) PPC_WEAK_FUNC(sub_82395874);
PPC_FUNC_IMPL(__imp__sub_82395874) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,22868(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22868);
	// lwz r17,22868(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22868);
	// lwz r17,22868(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22868);
	// lwz r17,22868(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22868);
	// lwz r17,22868(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22868);
	// lwz r17,22868(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22868);
	// lwz r17,22868(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22868);
	// lwz r17,22868(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22868);
	// lwz r17,22868(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22868);
	// lwz r17,22868(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22868);
	// lwz r17,22860(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22860);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82395908
	if (ctx.cr6.gt) {
		// ERROR 82395908
		return;
	}
	// beq cr6,0x82395954
	if (ctx.cr6.eq) {
		// ERROR 82395954
		return;
	}
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8239594c
	if (ctx.cr6.gt) {
		// ERROR 8239594C
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22748
	ctx.r12.s64 = ctx.r12.s64 + 22748;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823958DC"))) PPC_WEAK_FUNC(sub_823958DC);
PPC_FUNC_IMPL(__imp__sub_823958DC) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,22860(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22860);
	// lwz r17,22860(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22860);
	// lwz r17,22860(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22860);
	// lwz r17,22860(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22860);
	// lwz r17,22860(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22860);
	// lwz r17,22860(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22860);
	// lwz r17,22860(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22860);
	// lwz r17,22860(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22860);
	// lwz r17,22860(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22860);
	// lwz r17,22860(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22860);
	// lwz r17,22868(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22868);
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8239594c
	if (ctx.cr6.gt) goto loc_8239594C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82395954
	if (ctx.cr6.eq) goto loc_82395954;
	// bdz 0x82395954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82395954;
	// bdz 0x82395940
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82395940;
	// bdz 0x8239594c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239594C;
	// bdz 0x8239594c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239594C;
	// bdz 0x82395954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82395954;
	// bdz 0x8239594c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239594C;
	// b 0x82395954
	goto loc_82395954;
loc_82395940:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8239594C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_82395954:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239595C"))) PPC_WEAK_FUNC(sub_8239595C);
PPC_FUNC_IMPL(__imp__sub_8239595C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82395960"))) PPC_WEAK_FUNC(sub_82395960);
PPC_FUNC_IMPL(__imp__sub_82395960) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,44
	ctx.r9.s64 = 44;
	// addi r8,r10,-29996
	ctx.r8.s64 = ctx.r10.s64 + -29996;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82358348
	ctx.lr = 0x823959A0;
	sub_82358348(ctx, base);
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

__attribute__((alias("__imp__sub_823959B8"))) PPC_WEAK_FUNC(sub_823959B8);
PPC_FUNC_IMPL(__imp__sub_823959B8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-29996
	ctx.r10.s64 = ctx.r11.s64 + -29996;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82358390
	ctx.lr = 0x823959E0;
	sub_82358390(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r9,31824
	ctx.r8.s64 = ctx.r9.s64 + 31824;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82395A00"))) PPC_WEAK_FUNC(sub_82395A00);
PPC_FUNC_IMPL(__imp__sub_82395A00) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82395A28"))) PPC_WEAK_FUNC(sub_82395A28);
PPC_FUNC_IMPL(__imp__sub_82395A28) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-29996
	ctx.r10.s64 = ctx.r11.s64 + -29996;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82358390
	ctx.lr = 0x82395A58;
	sub_82358390(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,31824
	ctx.r7.s64 = ctx.r9.s64 + 31824;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82395a7c
	if (ctx.cr6.eq) goto loc_82395A7C;
	// bl 0x82357128
	ctx.lr = 0x82395A78;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82395A7C:
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

__attribute__((alias("__imp__sub_82395A94"))) PPC_WEAK_FUNC(sub_82395A94);
PPC_FUNC_IMPL(__imp__sub_82395A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82395A98"))) PPC_WEAK_FUNC(sub_82395A98);
PPC_FUNC_IMPL(__imp__sub_82395A98) {
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
	// bl 0x823ab790
	ctx.lr = 0x82395AB0;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-29968
	ctx.r8.s64 = ctx.r11.s64 + -29968;
	// addi r7,r10,-29984
	ctx.r7.s64 = ctx.r10.s64 + -29984;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82395B00"))) PPC_WEAK_FUNC(sub_82395B00);
PPC_FUNC_IMPL(__imp__sub_82395B00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82395bd0
	sub_82395BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82395B08"))) PPC_WEAK_FUNC(sub_82395B08);
PPC_FUNC_IMPL(__imp__sub_82395B08) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x82395B28;
	sub_823570E0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x823570f0
	ctx.lr = 0x82395B30;
	sub_823570F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82395b6c
	if (ctx.cr6.eq) goto loc_82395B6C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,44
	ctx.r9.s64 = 44;
	// addi r8,r10,-29996
	ctx.r8.s64 = ctx.r10.s64 + -29996;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82358348
	ctx.lr = 0x82395B68;
	sub_82358348(ctx, base);
	// b 0x82395b70
	goto loc_82395B70;
loc_82395B6C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82395B70:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82395B78;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82395b88
	if (!ctx.cr6.eq) goto loc_82395B88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82395bb8
	goto loc_82395BB8;
loc_82395B88:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x823584e0
	ctx.lr = 0x82395BAC;
	sub_823584E0(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82395BB8:
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

__attribute__((alias("__imp__sub_82395BD0"))) PPC_WEAK_FUNC(sub_82395BD0);
PPC_FUNC_IMPL(__imp__sub_82395BD0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-29968
	ctx.r8.s64 = ctx.r11.s64 + -29968;
	// addi r7,r10,-29984
	ctx.r7.s64 = ctx.r10.s64 + -29984;
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x82395C14;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82395c2c
	if (ctx.cr6.eq) goto loc_82395C2C;
	// bl 0x82357128
	ctx.lr = 0x82395C28;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82395C2C:
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

__attribute__((alias("__imp__sub_82395C44"))) PPC_WEAK_FUNC(sub_82395C44);
PPC_FUNC_IMPL(__imp__sub_82395C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82395C48"))) PPC_WEAK_FUNC(sub_82395C48);
PPC_FUNC_IMPL(__imp__sub_82395C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82395C50;
	sub_8224878C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82395d14
	if (ctx.cr6.eq) goto loc_82395D14;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x82395d14
	if (!ctx.cr6.eq) goto loc_82395D14;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82395d14
	if (ctx.cr6.eq) goto loc_82395D14;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82395960
	ctx.lr = 0x82395C84;
	sub_82395960(ctx, base);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bl 0x823584e0
	ctx.lr = 0x82395CA8;
	sub_823584E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x82395CB4;
	sub_823AB0F8(ctx, base);
	// lwz r8,84(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82395CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r6,32288
	ctx.r5.s64 = ctx.r6.s64 + 32288;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// bl 0x823959b8
	ctx.lr = 0x82395D08;
	sub_823959B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82395D14:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x82395D28;
	sub_823AB100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82395D34"))) PPC_WEAK_FUNC(sub_82395D34);
PPC_FUNC_IMPL(__imp__sub_82395D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82395D38"))) PPC_WEAK_FUNC(sub_82395D38);
PPC_FUNC_IMPL(__imp__sub_82395D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82395D40;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82356770
	ctx.lr = 0x82395D54;
	sub_82356770(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82395d6c
	if (ctx.cr6.eq) goto loc_82395D6C;
	// bl 0x82357240
	ctx.lr = 0x82395D68;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82395D6C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82395D80"))) PPC_WEAK_FUNC(sub_82395D80);
PPC_FUNC_IMPL(__imp__sub_82395D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82395D88;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-29832
	ctx.r10.s64 = ctx.r11.s64 + -29832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82356770
	ctx.lr = 0x82395DA8;
	sub_82356770(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82395dc0
	if (ctx.cr6.eq) goto loc_82395DC0;
	// bl 0x82357240
	ctx.lr = 0x82395DBC;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82395DC0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r10,r11,-31544
	ctx.r10.s64 = ctx.r11.s64 + -31544;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82395DDC"))) PPC_WEAK_FUNC(sub_82395DDC);
PPC_FUNC_IMPL(__imp__sub_82395DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82395DE0"))) PPC_WEAK_FUNC(sub_82395DE0);
PPC_FUNC_IMPL(__imp__sub_82395DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82395DE8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-29832
	ctx.r10.s64 = ctx.r11.s64 + -29832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82356770
	ctx.lr = 0x82395E0C;
	sub_82356770(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82395e24
	if (ctx.cr6.eq) goto loc_82395E24;
	// bl 0x82357240
	ctx.lr = 0x82395E20;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82395E24:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r9,r11,-31544
	ctx.r9.s64 = ctx.r11.s64 + -31544;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82395e50
	if (ctx.cr6.eq) goto loc_82395E50;
	// bl 0x82357128
	ctx.lr = 0x82395E4C;
	sub_82357128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82395E50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82395E58"))) PPC_WEAK_FUNC(sub_82395E58);
PPC_FUNC_IMPL(__imp__sub_82395E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82395E60;
	sub_8224877C(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82395E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82395ea0
	if (ctx.cr6.eq) goto loc_82395EA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82395EA0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r11,-29832
	ctx.r25.s64 = ctx.r11.s64 + -29832;
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82395EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82395f68
	if (!ctx.cr6.eq) goto loc_82395F68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82395F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82395F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82395F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x823ab100
	ctx.lr = 0x82395F54;
	sub_823AB100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395d80
	ctx.lr = 0x82395F5C;
	sub_82395D80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82395F68:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r28,28(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239600c
	if (ctx.cr6.eq) goto loc_8239600C;
loc_82395F80:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x823563c8
	ctx.lr = 0x82395F90;
	sub_823563C8(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82356680
	ctx.lr = 0x82395F9C;
	sub_82356680(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82356688
	ctx.lr = 0x82395FA8;
	sub_82356688(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82356610
	ctx.lr = 0x82395FB4;
	sub_82356610(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x823ab0e8
	ctx.lr = 0x82395FC0;
	sub_823AB0E8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82356c68
	ctx.lr = 0x82395FCC;
	sub_82356C68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82395ff0
	if (ctx.cr6.eq) goto loc_82395FF0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82356420
	ctx.lr = 0x82395FDC;
	sub_82356420(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82395f80
	if (ctx.cr6.lt) goto loc_82395F80;
	// b 0x8239600c
	goto loc_8239600C;
loc_82395FF0:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x82396004;
	sub_823AB100(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82356420
	ctx.lr = 0x8239600C;
	sub_82356420(ctx, base);
loc_8239600C:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82356770
	ctx.lr = 0x82396018;
	sub_82356770(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396028
	if (ctx.cr6.eq) goto loc_82396028;
	// bl 0x82357240
	ctx.lr = 0x82396028;
	sub_82357240(ctx, base);
loc_82396028:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82396034"))) PPC_WEAK_FUNC(sub_82396034);
PPC_FUNC_IMPL(__imp__sub_82396034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396038"))) PPC_WEAK_FUNC(sub_82396038);
PPC_FUNC_IMPL(__imp__sub_82396038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823960a0
	if (ctx.cr6.gt) {
		// ERROR 823960A0
		return;
	}
	// beq cr6,0x8239613c
	if (ctx.cr6.eq) {
		// ERROR 8239613C
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8239613c
	if (ctx.cr6.gt) {
		// ERROR 8239613C
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,24692
	ctx.r12.s64 = ctx.r12.s64 + 24692;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82396074"))) PPC_WEAK_FUNC(sub_82396074);
PPC_FUNC_IMPL(__imp__sub_82396074) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,24900(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24900);
	// lwz r17,24900(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24900);
	// lwz r17,24900(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24900);
	// lwz r17,24900(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24900);
	// lwz r17,24900(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24900);
	// lwz r17,24900(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24900);
	// lwz r17,24900(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24900);
	// lwz r17,24900(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24900);
	// lwz r17,24900(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24900);
	// lwz r17,24900(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24900);
	// lwz r17,24892(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24892);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82396108
	if (ctx.cr6.gt) {
		// ERROR 82396108
		return;
	}
	// beq cr6,0x82396144
	if (ctx.cr6.eq) {
		// ERROR 82396144
		return;
	}
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8239613c
	if (ctx.cr6.gt) {
		// ERROR 8239613C
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,24796
	ctx.r12.s64 = ctx.r12.s64 + 24796;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823960DC"))) PPC_WEAK_FUNC(sub_823960DC);
PPC_FUNC_IMPL(__imp__sub_823960DC) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,24892(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24892);
	// lwz r17,24892(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24892);
	// lwz r17,24892(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24892);
	// lwz r17,24892(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24892);
	// lwz r17,24892(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24892);
	// lwz r17,24892(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24892);
	// lwz r17,24892(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24892);
	// lwz r17,24892(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24892);
	// lwz r17,24892(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24892);
	// lwz r17,24892(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24892);
	// lwz r17,24900(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24900);
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8239613c
	if (ctx.cr6.gt) goto loc_8239613C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82396144
	if (ctx.cr6.eq) goto loc_82396144;
	// bdz 0x82396144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82396144;
	// bdz 0x8239613c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239613C;
	// bdz 0x8239613c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239613C;
	// bdz 0x8239613c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239613C;
	// bdz 0x82396144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82396144;
	// bdnz 0x82396144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82396144;
loc_8239613C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_82396144:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239614C"))) PPC_WEAK_FUNC(sub_8239614C);
PPC_FUNC_IMPL(__imp__sub_8239614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396150"))) PPC_WEAK_FUNC(sub_82396150);
PPC_FUNC_IMPL(__imp__sub_82396150) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239615C"))) PPC_WEAK_FUNC(sub_8239615C);
PPC_FUNC_IMPL(__imp__sub_8239615C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396160"))) PPC_WEAK_FUNC(sub_82396160);
PPC_FUNC_IMPL(__imp__sub_82396160) {
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
	// bl 0x823ab790
	ctx.lr = 0x82396178;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-29792
	ctx.r8.s64 = ctx.r11.s64 + -29792;
	// addi r7,r10,-29804
	ctx.r7.s64 = ctx.r10.s64 + -29804;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823961C8"))) PPC_WEAK_FUNC(sub_823961C8);
PPC_FUNC_IMPL(__imp__sub_823961C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x823963a0
	sub_823963A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823961D0"))) PPC_WEAK_FUNC(sub_823961D0);
PPC_FUNC_IMPL(__imp__sub_823961D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823961D8;
	sub_82248784(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82396214
	if (ctx.cr6.eq) goto loc_82396214;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82396214:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r9,r11,-29812
	ctx.r9.s64 = ctx.r11.s64 + -29812;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,84
	ctx.r4.s64 = 84;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823585a0
	ctx.lr = 0x82396234;
	sub_823585A0(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82396250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823962b4
	if (!ctx.cr6.eq) goto loc_823962B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82396290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823962A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x823962B4;
	sub_823AB100(ctx, base);
loc_823962B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823962C0"))) PPC_WEAK_FUNC(sub_823962C0);
PPC_FUNC_IMPL(__imp__sub_823962C0) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823962E0;
	sub_823570E0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823570f0
	ctx.lr = 0x823962E8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396314
	if (ctx.cr6.eq) goto loc_82396314;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r9,r11,-29824
	ctx.r9.s64 = ctx.r11.s64 + -29824;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// b 0x82396318
	goto loc_82396318;
loc_82396314:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82396318:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82396320;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82396330
	if (!ctx.cr6.eq) goto loc_82396330;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82396344
	goto loc_82396344;
loc_82396330:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82396344:
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

__attribute__((alias("__imp__sub_8239635C"))) PPC_WEAK_FUNC(sub_8239635C);
PPC_FUNC_IMPL(__imp__sub_8239635C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396360"))) PPC_WEAK_FUNC(sub_82396360);
PPC_FUNC_IMPL(__imp__sub_82396360) {
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
	// li r4,84
	ctx.r4.s64 = 84;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823585a0
	ctx.lr = 0x82396380;
	sub_823585A0(ctx, base);
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

__attribute__((alias("__imp__sub_8239639C"))) PPC_WEAK_FUNC(sub_8239639C);
PPC_FUNC_IMPL(__imp__sub_8239639C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823963A0"))) PPC_WEAK_FUNC(sub_823963A0);
PPC_FUNC_IMPL(__imp__sub_823963A0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-29792
	ctx.r8.s64 = ctx.r11.s64 + -29792;
	// addi r7,r10,-29804
	ctx.r7.s64 = ctx.r10.s64 + -29804;
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x823963E4;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823963fc
	if (ctx.cr6.eq) goto loc_823963FC;
	// bl 0x82357128
	ctx.lr = 0x823963F8;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823963FC:
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

__attribute__((alias("__imp__sub_82396414"))) PPC_WEAK_FUNC(sub_82396414);
PPC_FUNC_IMPL(__imp__sub_82396414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396418"))) PPC_WEAK_FUNC(sub_82396418);
PPC_FUNC_IMPL(__imp__sub_82396418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82396420;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823964c8
	if (ctx.cr6.eq) goto loc_823964C8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x823964c8
	if (!ctx.cr6.eq) goto loc_823964C8;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823964c8
	if (ctx.cr6.eq) goto loc_823964C8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r9,r11,-29824
	ctx.r9.s64 = ctx.r11.s64 + -29824;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// bl 0x8235acb0
	ctx.lr = 0x8239646C;
	sub_8235ACB0(ctx, base);
	// stb r3,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x8239647C;
	sub_823AB0F8(ctx, base);
	// lwz r7,84(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82396498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823964C8:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x823964DC;
	sub_823AB100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823964E8"))) PPC_WEAK_FUNC(sub_823964E8);
PPC_FUNC_IMPL(__imp__sub_823964E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82396550
	if (ctx.cr6.gt) {
		// ERROR 82396550
		return;
	}
	// beq cr6,0x823965f0
	if (ctx.cr6.eq) {
		// ERROR 823965F0
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x823965f0
	if (ctx.cr6.gt) {
		// ERROR 823965F0
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25892
	ctx.r12.s64 = ctx.r12.s64 + 25892;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82396524"))) PPC_WEAK_FUNC(sub_82396524);
PPC_FUNC_IMPL(__imp__sub_82396524) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,26104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26104);
	// lwz r17,26104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26104);
	// lwz r17,26104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26104);
	// lwz r17,26104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26104);
	// lwz r17,26104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26104);
	// lwz r17,26104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26104);
	// lwz r17,26104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26104);
	// lwz r17,26104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26104);
	// lwz r17,26104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26104);
	// lwz r17,26104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26104);
	// lwz r17,26096(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26096);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823965b8
	if (ctx.cr6.gt) {
		// ERROR 823965B8
		return;
	}
	// beq cr6,0x823965f8
	if (ctx.cr6.eq) {
		// ERROR 823965F8
		return;
	}
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x823965f0
	if (ctx.cr6.gt) {
		// ERROR 823965F0
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25996
	ctx.r12.s64 = ctx.r12.s64 + 25996;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8239658C"))) PPC_WEAK_FUNC(sub_8239658C);
PPC_FUNC_IMPL(__imp__sub_8239658C) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,26104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26104);
	// lwz r17,26096(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26096);
	// lwz r17,26096(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26096);
	// lwz r17,26096(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26096);
	// lwz r17,26096(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26096);
	// lwz r17,26096(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26096);
	// lwz r17,26096(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26096);
	// lwz r17,26096(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26096);
	// lwz r17,26096(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26096);
	// lwz r17,26096(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26096);
	// lwz r17,26104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 26104);
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x823965f0
	if (ctx.cr6.gt) goto loc_823965F0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823965f8
	if (ctx.cr6.eq) goto loc_823965F8;
	// bdz 0x823965f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823965F8;
	// bdz 0x823965f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823965F8;
	// bdz 0x823965f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823965F0;
	// bdz 0x823965f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823965F8;
	// bdz 0x823965f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823965F8;
	// bdz 0x823965f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823965F8;
	// b 0x823965f8
	goto loc_823965F8;
loc_823965F0:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_823965F8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82396600"))) PPC_WEAK_FUNC(sub_82396600);
PPC_FUNC_IMPL(__imp__sub_82396600) {
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
	// bl 0x823ab790
	ctx.lr = 0x82396618;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-29640
	ctx.r8.s64 = ctx.r11.s64 + -29640;
	// addi r7,r10,-29656
	ctx.r7.s64 = ctx.r10.s64 + -29656;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82396668"))) PPC_WEAK_FUNC(sub_82396668);
PPC_FUNC_IMPL(__imp__sub_82396668) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82396758
	sub_82396758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82396670"))) PPC_WEAK_FUNC(sub_82396670);
PPC_FUNC_IMPL(__imp__sub_82396670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82396678;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823966A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823966b4
	if (ctx.cr6.eq) goto loc_823966B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823966B4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,23
	ctx.r10.s64 = 23;
	// addi r9,r11,-31544
	ctx.r9.s64 = ctx.r11.s64 + -31544;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823966E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82396748
	if (!ctx.cr6.eq) goto loc_82396748;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82396724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82396738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x82396748;
	sub_823AB100(ctx, base);
loc_82396748:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82396754"))) PPC_WEAK_FUNC(sub_82396754);
PPC_FUNC_IMPL(__imp__sub_82396754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396758"))) PPC_WEAK_FUNC(sub_82396758);
PPC_FUNC_IMPL(__imp__sub_82396758) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-29640
	ctx.r8.s64 = ctx.r11.s64 + -29640;
	// addi r7,r10,-29656
	ctx.r7.s64 = ctx.r10.s64 + -29656;
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x8239679C;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823967b4
	if (ctx.cr6.eq) goto loc_823967B4;
	// bl 0x82357128
	ctx.lr = 0x823967B0;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823967B4:
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

__attribute__((alias("__imp__sub_823967CC"))) PPC_WEAK_FUNC(sub_823967CC);
PPC_FUNC_IMPL(__imp__sub_823967CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823967D0"))) PPC_WEAK_FUNC(sub_823967D0);
PPC_FUNC_IMPL(__imp__sub_823967D0) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r8,r10,-29504
	ctx.r8.s64 = ctx.r10.s64 + -29504;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x8235a518
	ctx.lr = 0x82396830;
	sub_8235A518(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8235a518
	ctx.lr = 0x8239683C;
	sub_8235A518(ctx, base);
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

__attribute__((alias("__imp__sub_82396854"))) PPC_WEAK_FUNC(sub_82396854);
PPC_FUNC_IMPL(__imp__sub_82396854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396858"))) PPC_WEAK_FUNC(sub_82396858);
PPC_FUNC_IMPL(__imp__sub_82396858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82396860;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// stb r29,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r29.u8);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// bl 0x82224458
	ctx.lr = 0x82396884;
	sub_82224458(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396898
	if (ctx.cr6.eq) goto loc_82396898;
	// bl 0x82357240
	ctx.lr = 0x82396894;
	sub_82357240(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82396898:
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823968B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823968C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823968D0"))) PPC_WEAK_FUNC(sub_823968D0);
PPC_FUNC_IMPL(__imp__sub_823968D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823968D8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r10,r11,-29504
	ctx.r10.s64 = ctx.r11.s64 + -29504;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x8235a538
	ctx.lr = 0x823968F4;
	sub_8235A538(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x8235a538
	ctx.lr = 0x823968FC;
	sub_8235A538(ctx, base);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82224458
	ctx.lr = 0x82396908;
	sub_82224458(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396920
	if (ctx.cr6.eq) goto loc_82396920;
	// bl 0x82357240
	ctx.lr = 0x8239691C;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82396920:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r10,r11,31824
	ctx.r10.s64 = ctx.r11.s64 + 31824;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239693C"))) PPC_WEAK_FUNC(sub_8239693C);
PPC_FUNC_IMPL(__imp__sub_8239693C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396940"))) PPC_WEAK_FUNC(sub_82396940);
PPC_FUNC_IMPL(__imp__sub_82396940) {
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
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// bl 0x82356980
	ctx.lr = 0x82396970;
	sub_82356980(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r9,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
	// bl 0x8235a878
	ctx.lr = 0x8239698C;
	sub_8235A878(ctx, base);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x8235a878
	ctx.lr = 0x82396998;
	sub_8235A878(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_823969B8"))) PPC_WEAK_FUNC(sub_823969B8);
PPC_FUNC_IMPL(__imp__sub_823969B8) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823969D8;
	sub_823570E0(ctx, base);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x823570f0
	ctx.lr = 0x823969E0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823969f4
	if (ctx.cr6.eq) goto loc_823969F4;
	// bl 0x823967d0
	ctx.lr = 0x823969EC;
	sub_823967D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823969f8
	goto loc_823969F8;
loc_823969F4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823969F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82396A00;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82396a10
	if (!ctx.cr6.eq) goto loc_82396A10;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82396a20
	goto loc_82396A20;
loc_82396A10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396940
	ctx.lr = 0x82396A1C;
	sub_82396940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82396A20:
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

__attribute__((alias("__imp__sub_82396A38"))) PPC_WEAK_FUNC(sub_82396A38);
PPC_FUNC_IMPL(__imp__sub_82396A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82396A40;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r10,r11,-29504
	ctx.r10.s64 = ctx.r11.s64 + -29504;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8235a538
	ctx.lr = 0x82396A60;
	sub_8235A538(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8235a538
	ctx.lr = 0x82396A68;
	sub_8235A538(ctx, base);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224458
	ctx.lr = 0x82396A74;
	sub_82224458(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396a8c
	if (ctx.cr6.eq) goto loc_82396A8C;
	// bl 0x82357240
	ctx.lr = 0x82396A88;
	sub_82357240(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82396A8C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r9,r11,31824
	ctx.r9.s64 = ctx.r11.s64 + 31824;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82396ab8
	if (ctx.cr6.eq) goto loc_82396AB8;
	// bl 0x82357128
	ctx.lr = 0x82396AB4;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82396AB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82396AC0"))) PPC_WEAK_FUNC(sub_82396AC0);
PPC_FUNC_IMPL(__imp__sub_82396AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82396AC8;
	sub_82248784(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82396c34
	if (ctx.cr6.eq) goto loc_82396C34;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82396c34
	if (!ctx.cr6.eq) goto loc_82396C34;
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82396c34
	if (ctx.cr6.eq) goto loc_82396C34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237fbb8
	ctx.lr = 0x82396AFC;
	sub_8237FBB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823967d0
	ctx.lr = 0x82396B08;
	sub_823967D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235acb0
	ctx.lr = 0x82396B10;
	sub_8235ACB0(ctx, base);
	// stb r3,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r3.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac640
	ctx.lr = 0x82396B1C;
	sub_823AC640(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a7388
	ctx.lr = 0x82396B28;
	sub_823A7388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8235a760
	ctx.lr = 0x82396B38;
	sub_8235A760(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a7390
	ctx.lr = 0x82396B40;
	sub_823A7390(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8235a760
	ctx.lr = 0x82396B50;
	sub_8235A760(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237fbc0
	ctx.lr = 0x82396B58;
	sub_8237FBC0(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x82396B64;
	sub_823AC6B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396ba0
	if (ctx.cr6.eq) goto loc_82396BA0;
loc_82396B74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82380dd0
	ctx.lr = 0x82396B80;
	sub_82380DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82224f30
	ctx.lr = 0x82396B8C;
	sub_82224F30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82396c0c
	if (ctx.cr6.eq) goto loc_82396C0C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82396b74
	if (ctx.cr6.lt) goto loc_82396B74;
loc_82396BA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x82396BAC;
	sub_823AB0F8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82396BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r8,r9,32288
	ctx.r8.s64 = ctx.r9.s64 + 32288;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r5.u32);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r4,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r4.u32);
	// bl 0x823968d0
	ctx.lr = 0x82396C00;
	sub_823968D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82396C0C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ab100
	ctx.lr = 0x82396C20;
	sub_823AB100(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823968d0
	ctx.lr = 0x82396C28;
	sub_823968D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82396C34:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ab100
	ctx.lr = 0x82396C48;
	sub_823AB100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82396C54"))) PPC_WEAK_FUNC(sub_82396C54);
PPC_FUNC_IMPL(__imp__sub_82396C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396C58"))) PPC_WEAK_FUNC(sub_82396C58);
PPC_FUNC_IMPL(__imp__sub_82396C58) {
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
	// bl 0x823ab790
	ctx.lr = 0x82396C70;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-29480
	ctx.r8.s64 = ctx.r11.s64 + -29480;
	// addi r7,r10,-29492
	ctx.r7.s64 = ctx.r10.s64 + -29492;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82396CC0"))) PPC_WEAK_FUNC(sub_82396CC0);
PPC_FUNC_IMPL(__imp__sub_82396CC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82396d40
	sub_82396D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82396CC8"))) PPC_WEAK_FUNC(sub_82396CC8);
PPC_FUNC_IMPL(__imp__sub_82396CC8) {
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
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82357038
	ctx.lr = 0x82396CF0;
	sub_82357038(ctx, base);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82370360
	ctx.lr = 0x82396CFC;
	sub_82370360(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,75
	ctx.r11.s64 = ctx.r30.s64 + 75;
	// addi r10,r31,75
	ctx.r10.s64 = ctx.r31.s64 + 75;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82396D0C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82396d0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82396D0C;
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x82396D28;
	sub_82248A40(ctx, base);
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

__attribute__((alias("__imp__sub_82396D40"))) PPC_WEAK_FUNC(sub_82396D40);
PPC_FUNC_IMPL(__imp__sub_82396D40) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-29480
	ctx.r8.s64 = ctx.r11.s64 + -29480;
	// addi r7,r10,-29492
	ctx.r7.s64 = ctx.r10.s64 + -29492;
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x82396D84;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82396d9c
	if (ctx.cr6.eq) goto loc_82396D9C;
	// bl 0x82357128
	ctx.lr = 0x82396D98;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82396D9C:
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

__attribute__((alias("__imp__sub_82396DB4"))) PPC_WEAK_FUNC(sub_82396DB4);
PPC_FUNC_IMPL(__imp__sub_82396DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82396DB8"))) PPC_WEAK_FUNC(sub_82396DB8);
PPC_FUNC_IMPL(__imp__sub_82396DB8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,31892
	ctx.r10.s64 = ctx.r11.s64 + 31892;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82356e70
	ctx.lr = 0x82396DE8;
	sub_82356E70(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// addi r8,r9,30604
	ctx.r8.s64 = ctx.r9.s64 + 30604;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bl 0x82370088
	ctx.lr = 0x82396E00;
	sub_82370088(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// addi r6,r7,30588
	ctx.r6.s64 = ctx.r7.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x82396E1C;
	sub_823585A0(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// addi r3,r5,30596
	ctx.r3.s64 = ctx.r5.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x82396E38;
	sub_823585A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82372460
	ctx.lr = 0x82396E40;
	sub_82372460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82396cc8
	ctx.lr = 0x82396E4C;
	sub_82396CC8(ctx, base);
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

__attribute__((alias("__imp__sub_82396E68"))) PPC_WEAK_FUNC(sub_82396E68);
PPC_FUNC_IMPL(__imp__sub_82396E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82396E70;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224458
	ctx.lr = 0x82396E84;
	sub_82224458(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396e9c
	if (ctx.cr6.eq) goto loc_82396E9C;
	// bl 0x82357240
	ctx.lr = 0x82396E98;
	sub_82357240(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82396E9C:
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82396EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82396ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82396EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stb r5,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r5.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82396EF0"))) PPC_WEAK_FUNC(sub_82396EF0);
PPC_FUNC_IMPL(__imp__sub_82396EF0) {
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
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82224458
	ctx.lr = 0x82396F10;
	sub_82224458(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396f28
	if (ctx.cr6.eq) goto loc_82396F28;
	// bl 0x82357240
	ctx.lr = 0x82396F24;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82396F28:
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

__attribute__((alias("__imp__sub_82396F48"))) PPC_WEAK_FUNC(sub_82396F48);
PPC_FUNC_IMPL(__imp__sub_82396F48) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-29344
	ctx.r8.s64 = ctx.r11.s64 + -29344;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r6,r9,30604
	ctx.r6.s64 = ctx.r9.s64 + 30604;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// bl 0x82370088
	ctx.lr = 0x82396FA4;
	sub_82370088(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// addi r3,r5,30588
	ctx.r3.s64 = ctx.r5.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x82396FC0;
	sub_823585A0(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// addi r9,r10,30596
	ctx.r9.s64 = ctx.r10.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x82396FDC;
	sub_823585A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82396e68
	ctx.lr = 0x82396FE4;
	sub_82396E68(ctx, base);
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

__attribute__((alias("__imp__sub_82396FFC"))) PPC_WEAK_FUNC(sub_82396FFC);
PPC_FUNC_IMPL(__imp__sub_82396FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397000"))) PPC_WEAK_FUNC(sub_82397000);
PPC_FUNC_IMPL(__imp__sub_82397000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82397008;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r11,-29344
	ctx.r7.s64 = ctx.r11.s64 + -29344;
	// addi r6,r10,30596
	ctx.r6.s64 = ctx.r10.s64 + 30596;
	// addi r5,r9,30588
	ctx.r5.s64 = ctx.r9.s64 + 30588;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,30604
	ctx.r4.s64 = ctx.r8.s64 + 30604;
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// stw r5,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x8239704C;
	sub_823700D8(ctx, base);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82224458
	ctx.lr = 0x82397058;
	sub_82224458(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82397070
	if (ctx.cr6.eq) goto loc_82397070;
	// bl 0x82357240
	ctx.lr = 0x8239706C;
	sub_82357240(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82397070:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r10,r11,31824
	ctx.r10.s64 = ctx.r11.s64 + 31824;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239708C"))) PPC_WEAK_FUNC(sub_8239708C);
PPC_FUNC_IMPL(__imp__sub_8239708C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397090"))) PPC_WEAK_FUNC(sub_82397090);
PPC_FUNC_IMPL(__imp__sub_82397090) {
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
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82356980
	ctx.lr = 0x823970B8;
	sub_82356980(ctx, base);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82370360
	ctx.lr = 0x823970C4;
	sub_82370360(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,79
	ctx.r11.s64 = ctx.r30.s64 + 79;
	// addi r10,r31,79
	ctx.r10.s64 = ctx.r31.s64 + 79;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823970D4:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823970d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823970D4;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x823970F0;
	sub_82248A40(ctx, base);
	// lbz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 108);
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82397118"))) PPC_WEAK_FUNC(sub_82397118);
PPC_FUNC_IMPL(__imp__sub_82397118) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x82397138;
	sub_823570E0(ctx, base);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x823570f0
	ctx.lr = 0x82397140;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82397154
	if (ctx.cr6.eq) goto loc_82397154;
	// bl 0x82396f48
	ctx.lr = 0x8239714C;
	sub_82396F48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82397158
	goto loc_82397158;
loc_82397154:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82397158:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82397160;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82397170
	if (!ctx.cr6.eq) goto loc_82397170;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82397180
	goto loc_82397180;
loc_82397170:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82397090
	ctx.lr = 0x8239717C;
	sub_82397090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82397180:
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

__attribute__((alias("__imp__sub_82397198"))) PPC_WEAK_FUNC(sub_82397198);
PPC_FUNC_IMPL(__imp__sub_82397198) {
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
	// bl 0x82397000
	ctx.lr = 0x823971B8;
	sub_82397000(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823971d0
	if (ctx.cr6.eq) goto loc_823971D0;
	// bl 0x82357128
	ctx.lr = 0x823971CC;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823971D0:
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

__attribute__((alias("__imp__sub_823971E8"))) PPC_WEAK_FUNC(sub_823971E8);
PPC_FUNC_IMPL(__imp__sub_823971E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823971F0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236f758
	ctx.lr = 0x82397204;
	sub_8236F758(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239721c
	if (ctx.cr6.eq) goto loc_8239721C;
	// bl 0x82357240
	ctx.lr = 0x82397218;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8239721C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82397230"))) PPC_WEAK_FUNC(sub_82397230);
PPC_FUNC_IMPL(__imp__sub_82397230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82397238;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-29332
	ctx.r10.s64 = ctx.r11.s64 + -29332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x8236f758
	ctx.lr = 0x82397258;
	sub_8236F758(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82397270
	if (ctx.cr6.eq) goto loc_82397270;
	// bl 0x82357240
	ctx.lr = 0x8239726C;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82397270:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r10,r11,-31544
	ctx.r10.s64 = ctx.r11.s64 + -31544;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239728C"))) PPC_WEAK_FUNC(sub_8239728C);
PPC_FUNC_IMPL(__imp__sub_8239728C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397290"))) PPC_WEAK_FUNC(sub_82397290);
PPC_FUNC_IMPL(__imp__sub_82397290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82397298;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-29332
	ctx.r10.s64 = ctx.r11.s64 + -29332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8236f758
	ctx.lr = 0x823972BC;
	sub_8236F758(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823972d4
	if (ctx.cr6.eq) goto loc_823972D4;
	// bl 0x82357240
	ctx.lr = 0x823972D0;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_823972D4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r9,r11,-31544
	ctx.r9.s64 = ctx.r11.s64 + -31544;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82397300
	if (ctx.cr6.eq) goto loc_82397300;
	// bl 0x82357128
	ctx.lr = 0x823972FC;
	sub_82357128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82397300:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82397308"))) PPC_WEAK_FUNC(sub_82397308);
PPC_FUNC_IMPL(__imp__sub_82397308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82397310;
	sub_82248780(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82397330
	if (ctx.cr6.eq) goto loc_82397330;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// b 0x82397500
	goto loc_82397500;
loc_82397330:
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823974f8
	if (ctx.cr6.eq) goto loc_823974F8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x823974f8
	if (!ctx.cr6.eq) goto loc_823974F8;
	// lwz r27,48(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823974f8
	if (ctx.cr6.eq) goto loc_823974F8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82396f48
	ctx.lr = 0x8239735C;
	sub_82396F48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82396ef0
	ctx.lr = 0x82397364;
	sub_82396EF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357d60
	ctx.lr = 0x8239736C;
	sub_82357D60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823973a0
	if (!ctx.cr6.eq) goto loc_823973A0;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239738C;
	sub_823AB100(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82397000
	ctx.lr = 0x82397394;
	sub_82397000(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823973A0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823973fc
	if (ctx.cr6.eq) goto loc_823973FC;
loc_823973AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237f778
	ctx.lr = 0x823973B8;
	sub_8237F778(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82357068
	ctx.lr = 0x823973C4;
	sub_82357068(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82357068
	ctx.lr = 0x823973D0;
	sub_82357068(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82224f30
	ctx.lr = 0x823973E0;
	sub_82224F30(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82356eb8
	ctx.lr = 0x823973E8;
	sub_82356EB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x823973F0;
	sub_82356EB8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x823973ac
	if (ctx.cr6.lt) goto loc_823973AC;
loc_823973FC:
	// bl 0x8235bf58
	ctx.lr = 0x82397400;
	sub_8235BF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bfa8
	ctx.lr = 0x82397408;
	sub_8235BFA8(ctx, base);
	// stb r3,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r3.u8);
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82397428
	if (ctx.cr6.eq) goto loc_82397428;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82397428
	if (ctx.cr6.eq) goto loc_82397428;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8239748c
	if (!ctx.cr6.eq) goto loc_8239748C;
loc_82397428:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c0d8
	ctx.lr = 0x82397430;
	sub_8235C0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82356318
	ctx.lr = 0x8239743C;
	sub_82356318(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82355a80
	ctx.lr = 0x82397444;
	sub_82355A80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82370360
	ctx.lr = 0x82397454;
	sub_82370360(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82355a88
	ctx.lr = 0x8239745C;
	sub_82355A88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// ld r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// bl 0x82355a90
	ctx.lr = 0x82397470;
	sub_82355A90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x82397484;
	sub_82248A40(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82355de8
	ctx.lr = 0x8239748C;
	sub_82355DE8(ctx, base);
loc_8239748C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x82397498;
	sub_823AB0F8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823974B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r8,r9,32288
	ctx.r8.s64 = ctx.r9.s64 + 32288;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r5.u32);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r4,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r4.u32);
	// bl 0x82397000
	ctx.lr = 0x823974EC;
	sub_82397000(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823974F8:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
loc_82397500:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239750C;
	sub_823AB100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82397518"))) PPC_WEAK_FUNC(sub_82397518);
PPC_FUNC_IMPL(__imp__sub_82397518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82397520;
	sub_82248778(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r28,r3,56
	ctx.r28.s64 = ctx.r3.s64 + 56;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239754C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82397560
	if (ctx.cr6.eq) goto loc_82397560;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82397560:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r24,r11,-29332
	ctx.r24.s64 = ctx.r11.s64 + -29332;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823975AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82397624
	if (!ctx.cr6.eq) goto loc_82397624;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823975D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823975EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82397600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x82397610;
	sub_823AB100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82397230
	ctx.lr = 0x82397618;
	sub_82397230(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82397624:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ac648
	ctx.lr = 0x8239762C;
	sub_823AC648(ctx, base);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823976e4
	if (ctx.cr6.eq) goto loc_823976E4;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r8,30604
	ctx.r29.s64 = ctx.r8.s64 + 30604;
	// addi r28,r9,30588
	ctx.r28.s64 = ctx.r9.s64 + 30588;
	// addi r27,r10,30596
	ctx.r27.s64 = ctx.r10.s64 + 30596;
	// addi r26,r11,31892
	ctx.r26.s64 = ctx.r11.s64 + 31892;
loc_8239765C:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823724d8
	ctx.lr = 0x82397664;
	sub_823724D8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82396db8
	ctx.lr = 0x82397674;
	sub_82396DB8(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82372670
	ctx.lr = 0x82397680;
	sub_82372670(ctx, base);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82372680
	ctx.lr = 0x8239768C;
	sub_82372680(ctx, base);
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823726a0
	ctx.lr = 0x82397698;
	sub_823726A0(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82356680
	ctx.lr = 0x823976A4;
	sub_82356680(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823abbf0
	ctx.lr = 0x823976B0;
	sub_823ABBF0(ctx, base);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// bl 0x823700d8
	ctx.lr = 0x823976C8;
	sub_823700D8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82356eb8
	ctx.lr = 0x823976D0;
	sub_82356EB8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82372570
	ctx.lr = 0x823976D8;
	sub_82372570(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,104
	ctx.r30.s64 = ctx.r30.s64 + 104;
	// bne 0x8239765c
	if (!ctx.cr0.eq) goto loc_8239765C;
loc_823976E4:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8236f758
	ctx.lr = 0x823976F0;
	sub_8236F758(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82397700
	if (ctx.cr6.eq) goto loc_82397700;
	// bl 0x82357240
	ctx.lr = 0x82397700;
	sub_82357240(ctx, base);
loc_82397700:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8239770C"))) PPC_WEAK_FUNC(sub_8239770C);
PPC_FUNC_IMPL(__imp__sub_8239770C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397710"))) PPC_WEAK_FUNC(sub_82397710);
PPC_FUNC_IMPL(__imp__sub_82397710) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82397724"))) PPC_WEAK_FUNC(sub_82397724);
PPC_FUNC_IMPL(__imp__sub_82397724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397728"))) PPC_WEAK_FUNC(sub_82397728);
PPC_FUNC_IMPL(__imp__sub_82397728) {
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
	// bl 0x823ab790
	ctx.lr = 0x82397740;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-29296
	ctx.r8.s64 = ctx.r11.s64 + -29296;
	// addi r7,r10,-29312
	ctx.r7.s64 = ctx.r10.s64 + -29312;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82397794"))) PPC_WEAK_FUNC(sub_82397794);
PPC_FUNC_IMPL(__imp__sub_82397794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397798"))) PPC_WEAK_FUNC(sub_82397798);
PPC_FUNC_IMPL(__imp__sub_82397798) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82397930
	sub_82397930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823977A0"))) PPC_WEAK_FUNC(sub_823977A0);
PPC_FUNC_IMPL(__imp__sub_823977A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823977A8;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823977D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82397884
	if (!ctx.cr6.eq) goto loc_82397884;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,19
	ctx.r10.s64 = 19;
	// addi r9,r11,-31544
	ctx.r9.s64 = ctx.r11.s64 + -31544;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82397808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239787c
	if (!ctx.cr6.eq) goto loc_8239787C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239782C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82397848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239785C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239786C;
	sub_823AB100(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r6,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8239787C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
loc_82397884:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8239788C"))) PPC_WEAK_FUNC(sub_8239788C);
PPC_FUNC_IMPL(__imp__sub_8239788C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397890"))) PPC_WEAK_FUNC(sub_82397890);
PPC_FUNC_IMPL(__imp__sub_82397890) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823978B0;
	sub_823570E0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823570f0
	ctx.lr = 0x823978B8;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823978e4
	if (ctx.cr6.eq) goto loc_823978E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,17
	ctx.r10.s64 = 17;
	// addi r9,r11,-29324
	ctx.r9.s64 = ctx.r11.s64 + -29324;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// b 0x823978e8
	goto loc_823978E8;
loc_823978E4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823978E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823978F0;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82397900
	if (!ctx.cr6.eq) goto loc_82397900;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82397914
	goto loc_82397914;
loc_82397900:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82397914:
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

__attribute__((alias("__imp__sub_8239792C"))) PPC_WEAK_FUNC(sub_8239792C);
PPC_FUNC_IMPL(__imp__sub_8239792C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397930"))) PPC_WEAK_FUNC(sub_82397930);
PPC_FUNC_IMPL(__imp__sub_82397930) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-29296
	ctx.r8.s64 = ctx.r11.s64 + -29296;
	// addi r7,r10,-29312
	ctx.r7.s64 = ctx.r10.s64 + -29312;
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x82397974;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8239798c
	if (ctx.cr6.eq) goto loc_8239798C;
	// bl 0x82357128
	ctx.lr = 0x82397988;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239798C:
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

__attribute__((alias("__imp__sub_823979A4"))) PPC_WEAK_FUNC(sub_823979A4);
PPC_FUNC_IMPL(__imp__sub_823979A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823979A8"))) PPC_WEAK_FUNC(sub_823979A8);
PPC_FUNC_IMPL(__imp__sub_823979A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823979B0;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,17
	ctx.r9.s64 = 17;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r8,r11,-29324
	ctx.r8.s64 = ctx.r11.s64 + -29324;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lwz r6,228(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x823979EC;
	sub_823AB0F8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82397A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r8.u32);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r7,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r7.u32);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r6,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r6.u32);
	// stw r10,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82397A38"))) PPC_WEAK_FUNC(sub_82397A38);
PPC_FUNC_IMPL(__imp__sub_82397A38) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82397a88
	if (ctx.cr6.eq) goto loc_82397A88;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82397a80
	if (ctx.cr6.eq) goto loc_82397A80;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82397a8c
	if (!ctx.cr6.eq) goto loc_82397A8C;
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
loc_82397A80:
	// bl 0x823977a0
	ctx.lr = 0x82397A84;
	sub_823977A0(ctx, base);
	// b 0x82397a8c
	goto loc_82397A8C;
loc_82397A88:
	// bl 0x823979a8
	ctx.lr = 0x82397A8C;
	sub_823979A8(ctx, base);
loc_82397A8C:
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

__attribute__((alias("__imp__sub_82397AA4"))) PPC_WEAK_FUNC(sub_82397AA4);
PPC_FUNC_IMPL(__imp__sub_82397AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397AA8"))) PPC_WEAK_FUNC(sub_82397AA8);
PPC_FUNC_IMPL(__imp__sub_82397AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82397b10
	if (ctx.cr6.gt) {
		// ERROR 82397B10
		return;
	}
	// beq cr6,0x82397ba4
	if (ctx.cr6.eq) {
		// ERROR 82397BA4
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82397ba4
	if (ctx.cr6.gt) {
		// ERROR 82397BA4
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,31460
	ctx.r12.s64 = ctx.r12.s64 + 31460;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82397AE4"))) PPC_WEAK_FUNC(sub_82397AE4);
PPC_FUNC_IMPL(__imp__sub_82397AE4) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,31660(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31660);
	// lwz r17,31660(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31660);
	// lwz r17,31660(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31660);
	// lwz r17,31660(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31660);
	// lwz r17,31660(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31660);
	// lwz r17,31660(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31660);
	// lwz r17,31660(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31660);
	// lwz r17,31660(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31660);
	// lwz r17,31660(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31660);
	// lwz r17,31660(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31660);
	// lwz r17,31652(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31652);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82397bcc
	if (ctx.cr6.gt) goto loc_82397BCC;
	// beq cr6,0x82397ba4
	if (ctx.cr6.eq) goto loc_82397BA4;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r10,r11,10
	ctx.r10.u64 = ctx.r11.u64 | 10;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82397b70
	if (ctx.cr6.gt) goto loc_82397B70;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r10,r11,7
	ctx.r10.u64 = ctx.r11.u64 | 7;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82397ba4
	if (!ctx.cr6.lt) goto loc_82397BA4;
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82397ba4
	if (ctx.cr6.gt) goto loc_82397BA4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82397ba4
	if (ctx.cr6.eq) goto loc_82397BA4;
	// bdz 0x82397ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82397BA4;
	// bdz 0x82397ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82397BA4;
	// bdz 0x82397ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82397BA4;
	// b 0x82397ba4
	goto loc_82397BA4;
loc_82397B70:
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82397bb4
	if (ctx.cr6.gt) goto loc_82397BB4;
	// beq cr6,0x82397bac
	if (ctx.cr6.eq) goto loc_82397BAC;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r10,r11,11
	ctx.r10.u64 = ctx.r11.u64 | 11;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82397ba4
	if (ctx.cr6.lt) goto loc_82397BA4;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r10,r11,12
	ctx.r10.u64 = ctx.r11.u64 | 12;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82397bac
	if (!ctx.cr6.gt) goto loc_82397BAC;
loc_82397BA4:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_82397BAC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_82397BB4:
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82397ba4
	if (!ctx.cr6.eq) goto loc_82397BA4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_82397BCC:
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82397ba4
	if (ctx.cr6.gt) goto loc_82397BA4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82397ba4
	if (ctx.cr6.eq) goto loc_82397BA4;
	// bdz 0x82397ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82397BA4;
	// bdz 0x82397ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82397BA4;
	// bdz 0x82397bac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82397BAC;
	// bdz 0x82397bac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82397BAC;
	// b 0x82397ba4
	goto loc_82397BA4;
}

__attribute__((alias("__imp__sub_82397BFC"))) PPC_WEAK_FUNC(sub_82397BFC);
PPC_FUNC_IMPL(__imp__sub_82397BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397C00"))) PPC_WEAK_FUNC(sub_82397C00);
PPC_FUNC_IMPL(__imp__sub_82397C00) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r11,-29160
	ctx.r9.s64 = ctx.r11.s64 + -29160;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82356e70
	ctx.lr = 0x82397C30;
	sub_82356E70(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82356e70
	ctx.lr = 0x82397C38;
	sub_82356E70(ctx, base);
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

__attribute__((alias("__imp__sub_82397C50"))) PPC_WEAK_FUNC(sub_82397C50);
PPC_FUNC_IMPL(__imp__sub_82397C50) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r10,r11,-29160
	ctx.r10.s64 = ctx.r11.s64 + -29160;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82356eb8
	ctx.lr = 0x82397C78;
	sub_82356EB8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82356eb8
	ctx.lr = 0x82397C80;
	sub_82356EB8(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r9,31824
	ctx.r8.s64 = ctx.r9.s64 + 31824;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82397CA0"))) PPC_WEAK_FUNC(sub_82397CA0);
PPC_FUNC_IMPL(__imp__sub_82397CA0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82397CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82397CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82397CF0"))) PPC_WEAK_FUNC(sub_82397CF0);
PPC_FUNC_IMPL(__imp__sub_82397CF0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r10,r11,-29160
	ctx.r10.s64 = ctx.r11.s64 + -29160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82356eb8
	ctx.lr = 0x82397D20;
	sub_82356EB8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82356eb8
	ctx.lr = 0x82397D28;
	sub_82356EB8(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,31824
	ctx.r7.s64 = ctx.r9.s64 + 31824;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82397d4c
	if (ctx.cr6.eq) goto loc_82397D4C;
	// bl 0x82357128
	ctx.lr = 0x82397D48;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82397D4C:
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

__attribute__((alias("__imp__sub_82397D64"))) PPC_WEAK_FUNC(sub_82397D64);
PPC_FUNC_IMPL(__imp__sub_82397D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397D68"))) PPC_WEAK_FUNC(sub_82397D68);
PPC_FUNC_IMPL(__imp__sub_82397D68) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-29148
	ctx.r9.s64 = ctx.r11.s64 + -29148;
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r7,r10,30604
	ctx.r7.s64 = ctx.r10.s64 + 30604;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x82397DA8;
	sub_82370088(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r5,r6,30588
	ctx.r5.s64 = ctx.r6.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x82397DC4;
	sub_823585A0(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// addi r3,r4,30596
	ctx.r3.s64 = ctx.r4.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x82397DE0;
	sub_823585A0(ctx, base);
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

__attribute__((alias("__imp__sub_82397DF8"))) PPC_WEAK_FUNC(sub_82397DF8);
PPC_FUNC_IMPL(__imp__sub_82397DF8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r11,-29148
	ctx.r7.s64 = ctx.r11.s64 + -29148;
	// addi r6,r10,30596
	ctx.r6.s64 = ctx.r10.s64 + 30596;
	// addi r5,r9,30588
	ctx.r5.s64 = ctx.r9.s64 + 30588;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,30604
	ctx.r4.s64 = ctx.r8.s64 + 30604;
	// stw r6,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r6.u32);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x82397E48;
	sub_823700D8(ctx, base);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// addi r11,r3,-31544
	ctx.r11.s64 = ctx.r3.s64 + -31544;
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

__attribute__((alias("__imp__sub_82397E68"))) PPC_WEAK_FUNC(sub_82397E68);
PPC_FUNC_IMPL(__imp__sub_82397E68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82397E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82397EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82397EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82397ECC"))) PPC_WEAK_FUNC(sub_82397ECC);
PPC_FUNC_IMPL(__imp__sub_82397ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82397ED0"))) PPC_WEAK_FUNC(sub_82397ED0);
PPC_FUNC_IMPL(__imp__sub_82397ED0) {
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
	// bl 0x82397df8
	ctx.lr = 0x82397EF0;
	sub_82397DF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397f08
	if (ctx.cr6.eq) goto loc_82397F08;
	// bl 0x82357128
	ctx.lr = 0x82397F04;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82397F08:
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

__attribute__((alias("__imp__sub_82397F20"))) PPC_WEAK_FUNC(sub_82397F20);
PPC_FUNC_IMPL(__imp__sub_82397F20) {
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
	// bl 0x823ab790
	ctx.lr = 0x82397F3C;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-29128
	ctx.r8.s64 = ctx.r11.s64 + -29128;
	// addi r7,r10,-29140
	ctx.r7.s64 = ctx.r10.s64 + -29140;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// bl 0x823a86f8
	ctx.lr = 0x82397F80;
	sub_823A86F8(ctx, base);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82397FA0"))) PPC_WEAK_FUNC(sub_82397FA0);
PPC_FUNC_IMPL(__imp__sub_82397FA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82398f80
	sub_82398F80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82397FA8"))) PPC_WEAK_FUNC(sub_82397FA8);
PPC_FUNC_IMPL(__imp__sub_82397FA8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8237c490
	ctx.lr = 0x82397FCC;
	sub_8237C490(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ad0
	ctx.lr = 0x82397FD8;
	sub_82355AD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355ac8
	ctx.lr = 0x82397FE4;
	sub_82355AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ae0
	ctx.lr = 0x82397FEC;
	sub_82355AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355ad8
	ctx.lr = 0x82397FF8;
	sub_82355AD8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237c248
	ctx.lr = 0x82398004;
	sub_8237C248(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// bl 0x8237c1d0
	ctx.lr = 0x82398014;
	sub_8237C1D0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239802C"))) PPC_WEAK_FUNC(sub_8239802C);
PPC_FUNC_IMPL(__imp__sub_8239802C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82398030"))) PPC_WEAK_FUNC(sub_82398030);
PPC_FUNC_IMPL(__imp__sub_82398030) {
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
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82398058
	if (!ctx.cr6.eq) goto loc_82398058;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823980c4
	goto loc_823980C4;
loc_82398058:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82398074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823980c0
	if (ctx.cr6.eq) goto loc_823980C0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32360
	ctx.r9.s64 = ctx.r11.s64 + -32360;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823980B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x823980c4
	if (ctx.cr6.eq) goto loc_823980C4;
loc_823980C0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823980C4:
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

__attribute__((alias("__imp__sub_823980DC"))) PPC_WEAK_FUNC(sub_823980DC);
PPC_FUNC_IMPL(__imp__sub_823980DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823980E0"))) PPC_WEAK_FUNC(sub_823980E0);
PPC_FUNC_IMPL(__imp__sub_823980E0) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82398110
	if (ctx.cr6.eq) goto loc_82398110;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// b 0x823981ac
	goto loc_823981AC;
loc_82398110:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823981a4
	if (ctx.cr6.eq) goto loc_823981A4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823981a4
	if (!ctx.cr6.eq) goto loc_823981A4;
	// bl 0x82362380
	ctx.lr = 0x8239812C;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823981a4
	if (ctx.cr6.eq) goto loc_823981A4;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823981a4
	if (ctx.cr6.eq) goto loc_823981A4;
	// bl 0x8235bf58
	ctx.lr = 0x82398144;
	sub_8235BF58(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82398164
	if (!ctx.cr6.eq) goto loc_82398164;
	// bl 0x8235c048
	ctx.lr = 0x82398154;
	sub_8235C048(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10184);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x82398174
	goto loc_82398174;
loc_82398164:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2972(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2972);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10184);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_82398174:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab0f0
	ctx.lr = 0x8239817C;
	sub_823AB0F0(ctx, base);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82398190
	if (!ctx.cr6.eq) goto loc_82398190;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82398190:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8237d130
	ctx.lr = 0x8239819C;
	sub_8237D130(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823981bc
	goto loc_823981BC;
loc_823981A4:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
loc_823981AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x823981B8;
	sub_823AB100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823981BC:
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

__attribute__((alias("__imp__sub_823981D4"))) PPC_WEAK_FUNC(sub_823981D4);
PPC_FUNC_IMPL(__imp__sub_823981D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823981D8"))) PPC_WEAK_FUNC(sub_823981D8);
PPC_FUNC_IMPL(__imp__sub_823981D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823981E0;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82398208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823982bc
	if (!ctx.cr6.eq) goto loc_823982BC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r11,-28428
	ctx.r9.s64 = ctx.r11.s64 + -28428;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82398240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823982b4
	if (!ctx.cr6.eq) goto loc_823982B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82398264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82398280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82398294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x823982A4;
	sub_823AB100(ctx, base);
	// li r6,22
	ctx.r6.s64 = 22;
	// stw r6,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823982B4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
loc_823982BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823982C4"))) PPC_WEAK_FUNC(sub_823982C4);
PPC_FUNC_IMPL(__imp__sub_823982C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823982C8"))) PPC_WEAK_FUNC(sub_823982C8);
PPC_FUNC_IMPL(__imp__sub_823982C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823982D0;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x823982E4;
	sub_82362380(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82398320
	if (ctx.cr6.eq) goto loc_82398320;
	// bl 0x82362a20
	ctx.lr = 0x823982F8;
	sub_82362A20(ctx, base);
loc_823982F8:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239830C;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82398320:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// bl 0x823ab0f8
	ctx.lr = 0x8239832C;
	sub_823AB0F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x82398338;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x82398370
	if (!ctx.cr6.lt) goto loc_82398370;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362a20
	ctx.lr = 0x82398348;
	sub_82362A20(ctx, base);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239835C;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82398370:
	// lwz r28,12(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82370538
	ctx.lr = 0x82398378;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8239837C;
	sub_82370538(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823707c8
	ctx.lr = 0x82398384;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823982f8
	if (ctx.cr6.eq) goto loc_823982F8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823983c8
	if (ctx.cr6.eq) goto loc_823983C8;
	// bl 0x82362a20
	ctx.lr = 0x823983A0;
	sub_82362A20(ctx, base);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x823983B4;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823983C8:
	// bl 0x82362930
	ctx.lr = 0x823983CC;
	sub_82362930(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823983e4
	if (ctx.cr6.eq) goto loc_823983E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d130
	ctx.lr = 0x823983DC;
	sub_8237D130(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_823983E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823983F0"))) PPC_WEAK_FUNC(sub_823983F0);
PPC_FUNC_IMPL(__imp__sub_823983F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823983F8;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8239840C;
	sub_82362380(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82398448
	if (ctx.cr6.eq) goto loc_82398448;
	// bl 0x82362a20
	ctx.lr = 0x82398420;
	sub_82362A20(ctx, base);
loc_82398420:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x82398434;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82398448:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab0f8
	ctx.lr = 0x82398450;
	sub_823AB0F8(ctx, base);
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8239845C;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x82398494
	if (!ctx.cr6.lt) goto loc_82398494;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362a20
	ctx.lr = 0x8239846C;
	sub_82362A20(ctx, base);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x82398480;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82398494:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82370538
	ctx.lr = 0x8239849C;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x823984A0;
	sub_82370538(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823707c8
	ctx.lr = 0x823984A8;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82398420
	if (ctx.cr6.eq) goto loc_82398420;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823984ec
	if (ctx.cr6.eq) goto loc_823984EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362a20
	ctx.lr = 0x823984C4;
	sub_82362A20(ctx, base);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x823984D8;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823984EC:
	// lwz r28,56(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82398534
	if (ctx.cr6.eq) goto loc_82398534;
loc_823984FC:
	// bl 0x82370538
	ctx.lr = 0x82398500;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82398504;
	sub_82370538(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823707c8
	ctx.lr = 0x8239850C;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82398528
	if (ctx.cr6.eq) goto loc_82398528;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823629b8
	ctx.lr = 0x82398520;
	sub_823629B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82398544
	if (ctx.cr6.eq) goto loc_82398544;
loc_82398528:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823984fc
	if (ctx.cr6.lt) goto loc_823984FC;
loc_82398534:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362a20
	ctx.lr = 0x8239853C;
	sub_82362A20(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
loc_82398544:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82398550"))) PPC_WEAK_FUNC(sub_82398550);
PPC_FUNC_IMPL(__imp__sub_82398550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82398558;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82398580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82398634
	if (!ctx.cr6.eq) goto loc_82398634;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,47
	ctx.r10.s64 = 47;
	// addi r9,r11,-31544
	ctx.r9.s64 = ctx.r11.s64 + -31544;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823985B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239862c
	if (!ctx.cr6.eq) goto loc_8239862C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823985DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823985F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239860C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239861C;
	sub_823AB100(ctx, base);
	// li r6,22
	ctx.r6.s64 = 22;
	// stw r6,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8239862C:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
loc_82398634:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8239863C"))) PPC_WEAK_FUNC(sub_8239863C);
PPC_FUNC_IMPL(__imp__sub_8239863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82398640"))) PPC_WEAK_FUNC(sub_82398640);
PPC_FUNC_IMPL(__imp__sub_82398640) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82398674
	if (ctx.cr6.eq) goto loc_82398674;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82397fa8
	ctx.lr = 0x8239866C;
	sub_82397FA8(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82398678
	goto loc_82398678;
loc_82398674:
	// li r11,10
	ctx.r11.s64 = 10;
loc_82398678:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82398690"))) PPC_WEAK_FUNC(sub_82398690);
PPC_FUNC_IMPL(__imp__sub_82398690) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823986c8
	if (ctx.cr6.eq) goto loc_823986C8;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x823986C0;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x823986d4
	goto loc_823986D4;
loc_823986C8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8237d130
	ctx.lr = 0x823986D0;
	sub_8237D130(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
loc_823986D4:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823986EC"))) PPC_WEAK_FUNC(sub_823986EC);
PPC_FUNC_IMPL(__imp__sub_823986EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823986F0"))) PPC_WEAK_FUNC(sub_823986F0);
PPC_FUNC_IMPL(__imp__sub_823986F0) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82398734
	if (ctx.cr6.eq) goto loc_82398734;
loc_82398718:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239872C;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x823987a0
	goto loc_823987A0;
loc_82398734:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82362380
	ctx.lr = 0x8239873C;
	sub_82362380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab0f8
	ctx.lr = 0x82398744;
	sub_823AB0F8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x82398750;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x82398774
	if (!ctx.cr6.lt) goto loc_82398774;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239876C;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x823987a0
	goto loc_823987A0;
loc_82398774:
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82370538
	ctx.lr = 0x8239877C;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82398780;
	sub_82370538(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823707c8
	ctx.lr = 0x82398788;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82398718
	if (ctx.cr6.eq) goto loc_82398718;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823987a4
	if (ctx.cr6.eq) goto loc_823987A4;
	// li r11,12
	ctx.r11.s64 = 12;
loc_823987A0:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_823987A4:
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

__attribute__((alias("__imp__sub_823987C0"))) PPC_WEAK_FUNC(sub_823987C0);
PPC_FUNC_IMPL(__imp__sub_823987C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823987C8;
	sub_82248784(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823987F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82398934
	if (!ctx.cr6.eq) goto loc_82398934;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82397d68
	ctx.lr = 0x82398804;
	sub_82397D68(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82398820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239889c
	if (!ctx.cr6.eq) goto loc_8239889C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82398844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82398860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82398874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x82398884;
	sub_823AB100(ctx, base);
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r6,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r6.u32);
	// bl 0x82397df8
	ctx.lr = 0x82398894;
	sub_82397DF8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8239889C:
	// addi r31,r28,32
	ctx.r31.s64 = ctx.r28.s64 + 32;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823561e0
	ctx.lr = 0x823988AC;
	sub_823561E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// bl 0x823561f0
	ctx.lr = 0x823988B8;
	sub_823561F0(ctx, base);
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82356210
	ctx.lr = 0x823988C4;
	sub_82356210(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372d50
	ctx.lr = 0x823988D0;
	sub_82372D50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x823732f8
	ctx.lr = 0x823988DC;
	sub_823732F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82398900
	if (ctx.cr6.eq) goto loc_82398900;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// ori r4,r4,33033
	ctx.r4.u64 = ctx.r4.u64 | 33033;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235a2a0
	ctx.lr = 0x823988F8;
	sub_8235A2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239891c
	if (!ctx.cr6.eq) goto loc_8239891C;
loc_82398900:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x82398914;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82398920
	goto loc_82398920;
loc_8239891C:
	// li r11,15
	ctx.r11.s64 = 15;
loc_82398920:
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82373298
	ctx.lr = 0x8239892C;
	sub_82373298(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82397df8
	ctx.lr = 0x82398934;
	sub_82397DF8(ctx, base);
loc_82398934:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8239893C"))) PPC_WEAK_FUNC(sub_8239893C);
PPC_FUNC_IMPL(__imp__sub_8239893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82398940"))) PPC_WEAK_FUNC(sub_82398940);
PPC_FUNC_IMPL(__imp__sub_82398940) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8239896c
	if (ctx.cr6.eq) goto loc_8239896C;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82398978
	goto loc_82398978;
loc_8239896C:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8237d130
	ctx.lr = 0x82398974;
	sub_8237D130(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
loc_82398978:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82398990"))) PPC_WEAK_FUNC(sub_82398990);
PPC_FUNC_IMPL(__imp__sub_82398990) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823989c8
	if (ctx.cr6.eq) goto loc_823989C8;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x823989C0;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x823989d4
	goto loc_823989D4;
loc_823989C8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8237d130
	ctx.lr = 0x823989D0;
	sub_8237D130(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
loc_823989D4:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_823989EC"))) PPC_WEAK_FUNC(sub_823989EC);
PPC_FUNC_IMPL(__imp__sub_823989EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823989F0"))) PPC_WEAK_FUNC(sub_823989F0);
PPC_FUNC_IMPL(__imp__sub_823989F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823989F8;
	sub_82248788(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82398a34
	if (ctx.cr6.eq) goto loc_82398A34;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x82398A20;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82398A34:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82362380
	ctx.lr = 0x82398A3C;
	sub_82362380(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab0f8
	ctx.lr = 0x82398A48;
	sub_823AB0F8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x82398A54;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x82398a84
	if (!ctx.cr6.lt) goto loc_82398A84;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x82398A70;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82398A84:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82398ab8
	if (ctx.cr6.eq) goto loc_82398AB8;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x82398AA4;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82398AB8:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// bl 0x82370c48
	ctx.lr = 0x82398AC8;
	sub_82370C48(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82398AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82398b04
	if (!ctx.cr6.eq) goto loc_82398B04;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x82398AFC;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82398b28
	goto loc_82398B28;
loc_82398B04:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82367000
	ctx.lr = 0x82398B1C;
	sub_82367000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82398b2c
	if (ctx.cr6.eq) goto loc_82398B2C;
	// li r11,18
	ctx.r11.s64 = 18;
loc_82398B28:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82398B2C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x82398B34;
	sub_82372340(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82398B40"))) PPC_WEAK_FUNC(sub_82398B40);
PPC_FUNC_IMPL(__imp__sub_82398B40) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82398b78
	if (ctx.cr6.eq) goto loc_82398B78;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x82398B70;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82398b84
	goto loc_82398B84;
loc_82398B78:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8237d130
	ctx.lr = 0x82398B80;
	sub_8237D130(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
loc_82398B84:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82398B9C"))) PPC_WEAK_FUNC(sub_82398B9C);
PPC_FUNC_IMPL(__imp__sub_82398B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82398BA0"))) PPC_WEAK_FUNC(sub_82398BA0);
PPC_FUNC_IMPL(__imp__sub_82398BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82398BA8;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82398be8
	if (ctx.cr6.eq) goto loc_82398BE8;
loc_82398BC0:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x82398BD4;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82398BE8:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82362380
	ctx.lr = 0x82398BF0;
	sub_82362380(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// bl 0x823ab0f8
	ctx.lr = 0x82398C00;
	sub_823AB0F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x82398C0C;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x82398c3c
	if (!ctx.cr6.lt) goto loc_82398C3C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x82398C28;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82398C3C:
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82370538
	ctx.lr = 0x82398C44;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82398C48;
	sub_82370538(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823707c8
	ctx.lr = 0x82398C50;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82398bc0
	if (ctx.cr6.eq) goto loc_82398BC0;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82398c8c
	if (ctx.cr6.eq) goto loc_82398C8C;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x82398C78;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82398C8C:
	// lwz r11,200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82398cd0
	if (ctx.cr6.eq) goto loc_82398CD0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82362cc0
	ctx.lr = 0x82398CA0;
	sub_82362CC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82398cd0
	if (!ctx.cr6.eq) goto loc_82398CD0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x82398CBC;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82398CD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x82398CD8;
	sub_8237D130(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82398CEC"))) PPC_WEAK_FUNC(sub_82398CEC);
PPC_FUNC_IMPL(__imp__sub_82398CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82398CF0"))) PPC_WEAK_FUNC(sub_82398CF0);
PPC_FUNC_IMPL(__imp__sub_82398CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82398CF8;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82398d34
	if (ctx.cr6.eq) goto loc_82398D34;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x82398D20;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82398D34:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82362380
	ctx.lr = 0x82398D3C;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab0f8
	ctx.lr = 0x82398D48;
	sub_823AB0F8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x82398D54;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x82398d84
	if (!ctx.cr6.lt) goto loc_82398D84;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x82398D70;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82398D84:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82398db8
	if (ctx.cr6.eq) goto loc_82398DB8;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x82398DA4;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82398DB8:
	// bl 0x82370538
	ctx.lr = 0x82398DBC;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82398DC0;
	sub_82370538(ctx, base);
	// bl 0x82370898
	ctx.lr = 0x82398DC4;
	sub_82370898(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82398dd8
	if (!ctx.cr6.eq) goto loc_82398DD8;
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82398DD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82398DE4"))) PPC_WEAK_FUNC(sub_82398DE4);
PPC_FUNC_IMPL(__imp__sub_82398DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82398DE8"))) PPC_WEAK_FUNC(sub_82398DE8);
PPC_FUNC_IMPL(__imp__sub_82398DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82398DF0;
	sub_8224878C(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// bne cr6,0x82398e48
	if (!ctx.cr6.eq) goto loc_82398E48;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x82398E14;
	sub_82370C48(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372388
	ctx.lr = 0x82398E24;
	sub_82372388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82398e54
	if (!ctx.cr6.eq) goto loc_82398E54;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// addi r3,r29,-4
	ctx.r3.s64 = ctx.r29.s64 + -4;
	// bl 0x823ab100
	ctx.lr = 0x82398E40;
	sub_823AB100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x82398E48;
	sub_82372340(ctx, base);
loc_82398E48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82398E54:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8237c190
	ctx.lr = 0x82398E5C;
	sub_8237C190(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82355fd8
	ctx.lr = 0x82398E68;
	sub_82355FD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r29,-4
	ctx.r3.s64 = ctx.r29.s64 + -4;
	// bne cr6,0x82398ea0
	if (!ctx.cr6.eq) goto loc_82398EA0;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x823ab100
	ctx.lr = 0x82398E84;
	sub_823AB100(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8237c1d0
	ctx.lr = 0x82398E8C;
	sub_8237C1D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x82398E94;
	sub_82372340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82398EA0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82397fa8
	ctx.lr = 0x82398EA8;
	sub_82397FA8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8237c1d0
	ctx.lr = 0x82398EB0;
	sub_8237C1D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x82398EB8;
	sub_82372340(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82398EC4"))) PPC_WEAK_FUNC(sub_82398EC4);
PPC_FUNC_IMPL(__imp__sub_82398EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82398EC8"))) PPC_WEAK_FUNC(sub_82398EC8);
PPC_FUNC_IMPL(__imp__sub_82398EC8) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x82398EE8;
	sub_823570E0(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x823570f0
	ctx.lr = 0x82398EF0;
	sub_823570F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82398f24
	if (ctx.cr6.eq) goto loc_82398F24;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r9,r11,-29160
	ctx.r9.s64 = ctx.r11.s64 + -29160;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82356e70
	ctx.lr = 0x82398F18;
	sub_82356E70(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82356e70
	ctx.lr = 0x82398F20;
	sub_82356E70(ctx, base);
	// b 0x82398f28
	goto loc_82398F28;
loc_82398F24:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82398F28:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82398F30;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82398f40
	if (!ctx.cr6.eq) goto loc_82398F40;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82398f64
	goto loc_82398F64;
loc_82398F40:
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82357038
	ctx.lr = 0x82398F4C;
	sub_82357038(ctx, base);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82357038
	ctx.lr = 0x82398F58;
	sub_82357038(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82398F64:
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

__attribute__((alias("__imp__sub_82398F7C"))) PPC_WEAK_FUNC(sub_82398F7C);
PPC_FUNC_IMPL(__imp__sub_82398F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82398F80"))) PPC_WEAK_FUNC(sub_82398F80);
PPC_FUNC_IMPL(__imp__sub_82398F80) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-29128
	ctx.r9.s64 = ctx.r11.s64 + -29128;
	// addi r8,r10,-29140
	ctx.r8.s64 = ctx.r10.s64 + -29140;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab568
	ctx.lr = 0x82398FBC;
	sub_823AB568(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,32288
	ctx.r6.s64 = ctx.r7.s64 + 32288;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// bl 0x823ab4e8
	ctx.lr = 0x82398FD0;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82398fe8
	if (ctx.cr6.eq) goto loc_82398FE8;
	// bl 0x82357128
	ctx.lr = 0x82398FE4;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82398FE8:
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

__attribute__((alias("__imp__sub_82399000"))) PPC_WEAK_FUNC(sub_82399000);
PPC_FUNC_IMPL(__imp__sub_82399000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82399008;
	sub_82248788(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239903c
	if (ctx.cr6.eq) goto loc_8239903C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8239902C;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8239903C:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82362380
	ctx.lr = 0x82399048;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82399078
	if (!ctx.cr6.eq) goto loc_82399078;
loc_82399054:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x82399068;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82399078:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82399054
	if (ctx.cr6.eq) goto loc_82399054;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823579a0
	ctx.lr = 0x8239908C;
	sub_823579A0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823579a0
	ctx.lr = 0x82399094;
	sub_823579A0(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82399098;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8239909C;
	sub_82370538(ctx, base);
	// bl 0x82370898
	ctx.lr = 0x823990A0;
	sub_82370898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362660
	ctx.lr = 0x823990B0;
	sub_82362660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82399174
	if (ctx.cr6.eq) goto loc_82399174;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362660
	ctx.lr = 0x823990C8;
	sub_82362660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82399174
	if (ctx.cr6.eq) goto loc_82399174;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82397c00
	ctx.lr = 0x823990D8;
	sub_82397C00(ctx, base);
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// bl 0x82357bb8
	ctx.lr = 0x823990E8;
	sub_82357BB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82357038
	ctx.lr = 0x823990F4;
	sub_82357038(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82357bb8
	ctx.lr = 0x823990FC;
	sub_82357BB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82357038
	ctx.lr = 0x82399108;
	sub_82357038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x82399114;
	sub_823AB0F8(ctx, base);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82399130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r8,32288
	ctx.r6.s64 = ctx.r8.s64 + 32288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r6,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// bl 0x82397c50
	ctx.lr = 0x82399170;
	sub_82397C50(ctx, base);
	// b 0x82399190
	goto loc_82399190;
loc_82399174:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x82399188;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82399190:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823579f8
	ctx.lr = 0x82399198;
	sub_823579F8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823579f8
	ctx.lr = 0x823991A0;
	sub_823579F8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823991A8"))) PPC_WEAK_FUNC(sub_823991A8);
PPC_FUNC_IMPL(__imp__sub_823991A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823991B0;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823991e4
	if (ctx.cr6.eq) goto loc_823991E4;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x823991D4;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823991E4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,47
	ctx.r9.s64 = 47;
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r8,r11,-31560
	ctx.r8.s64 = ctx.r11.s64 + -31560;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// lbz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x82399218;
	sub_823AB0F8(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82399234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82399264"))) PPC_WEAK_FUNC(sub_82399264);
PPC_FUNC_IMPL(__imp__sub_82399264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82399268"))) PPC_WEAK_FUNC(sub_82399268);
PPC_FUNC_IMPL(__imp__sub_82399268) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r7,r11,-30368
	ctx.r7.s64 = ctx.r11.s64 + -30368;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r3,r9,-28984
	ctx.r3.s64 = ctx.r9.s64 + -28984;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r9,r8,-28992
	ctx.r9.s64 = ctx.r8.s64 + -28992;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// addi r8,r6,30604
	ctx.r8.s64 = ctx.r6.s64 + 30604;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// bl 0x82370088
	ctx.lr = 0x823992F0;
	sub_82370088(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// addi r6,r7,30588
	ctx.r6.s64 = ctx.r7.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8239930C;
	sub_823585A0(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// addi r3,r5,30596
	ctx.r3.s64 = ctx.r5.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x82399328;
	sub_823585A0(ctx, base);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82399358"))) PPC_WEAK_FUNC(sub_82399358);
PPC_FUNC_IMPL(__imp__sub_82399358) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x823995f8
	sub_823995F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82399360"))) PPC_WEAK_FUNC(sub_82399360);
PPC_FUNC_IMPL(__imp__sub_82399360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82399368;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82393458
	ctx.lr = 0x8239937C;
	sub_82393458(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82399394
	if (ctx.cr6.eq) goto loc_82399394;
	// bl 0x82357240
	ctx.lr = 0x82399390;
	sub_82357240(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82399394:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823993CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823993E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823993F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823993FC"))) PPC_WEAK_FUNC(sub_823993FC);
PPC_FUNC_IMPL(__imp__sub_823993FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82399400"))) PPC_WEAK_FUNC(sub_82399400);
PPC_FUNC_IMPL(__imp__sub_82399400) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82399360
	sub_82399360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82399408"))) PPC_WEAK_FUNC(sub_82399408);
PPC_FUNC_IMPL(__imp__sub_82399408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82399410;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,-28984
	ctx.r6.s64 = ctx.r11.s64 + -28984;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r5,r10,-28992
	ctx.r5.s64 = ctx.r10.s64 + -28992;
	// addi r3,r8,30588
	ctx.r3.s64 = ctx.r8.s64 + 30588;
	// addi r4,r9,30596
	ctx.r4.s64 = ctx.r9.s64 + 30596;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r10,r7,30604
	ctx.r10.s64 = ctx.r7.s64 + 30604;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// stw r4,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r4.u32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823700d8
	ctx.lr = 0x82399464;
	sub_823700D8(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r8,r9,-30368
	ctx.r8.s64 = ctx.r9.s64 + -30368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82393458
	ctx.lr = 0x8239947C;
	sub_82393458(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82399494
	if (ctx.cr6.eq) goto loc_82399494;
	// bl 0x82357240
	ctx.lr = 0x82399490;
	sub_82357240(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82399494:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r10,r11,31824
	ctx.r10.s64 = ctx.r11.s64 + 31824;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823994B0"))) PPC_WEAK_FUNC(sub_823994B0);
PPC_FUNC_IMPL(__imp__sub_823994B0) {
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
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// bne cr6,0x823994dc
	if (!ctx.cr6.eq) goto loc_823994DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823994DC:
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82393c50
	ctx.lr = 0x823994E8;
	sub_82393C50(ctx, base);
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bl 0x82370360
	ctx.lr = 0x82399504;
	sub_82370360(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,91
	ctx.r11.s64 = ctx.r30.s64 + 91;
	// addi r10,r31,91
	ctx.r10.s64 = ctx.r31.s64 + 91;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82399514:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82399514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82399514;
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x82399530;
	sub_82248A40(ctx, base);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r10,124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// lwz r9,128(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// lwz r8,136(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r7,132(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82399578"))) PPC_WEAK_FUNC(sub_82399578);
PPC_FUNC_IMPL(__imp__sub_82399578) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x82399598;
	sub_823570E0(ctx, base);
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x823570f0
	ctx.lr = 0x823995A0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823995b4
	if (ctx.cr6.eq) goto loc_823995B4;
	// bl 0x82399268
	ctx.lr = 0x823995AC;
	sub_82399268(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823995b8
	goto loc_823995B8;
loc_823995B4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823995B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823995C0;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823995d0
	if (!ctx.cr6.eq) goto loc_823995D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823995e0
	goto loc_823995E0;
loc_823995D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823994b0
	ctx.lr = 0x823995DC;
	sub_823994B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823995E0:
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

__attribute__((alias("__imp__sub_823995F8"))) PPC_WEAK_FUNC(sub_823995F8);
PPC_FUNC_IMPL(__imp__sub_823995F8) {
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
	// bl 0x82399408
	ctx.lr = 0x82399618;
	sub_82399408(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82399630
	if (ctx.cr6.eq) goto loc_82399630;
	// bl 0x82357128
	ctx.lr = 0x8239962C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82399630:
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

__attribute__((alias("__imp__sub_82399648"))) PPC_WEAK_FUNC(sub_82399648);
PPC_FUNC_IMPL(__imp__sub_82399648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82399650;
	sub_82248778(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82399684
	if (ctx.cr6.eq) goto loc_82399684;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x82399674;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r11.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_82399684:
	// lwz r30,12(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x8235cf68
	ctx.lr = 0x8239968C;
	sub_8235CF68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x82399694;
	sub_8235BF58(ctx, base);
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823996c0
	if (ctx.cr6.eq) goto loc_823996C0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823996C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823996C0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r24,48(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82399268
	ctx.lr = 0x823996CC;
	sub_82399268(ctx, base);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// bl 0x82355a80
	ctx.lr = 0x823996E4;
	sub_82355A80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82370360
	ctx.lr = 0x823996F4;
	sub_82370360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355a88
	ctx.lr = 0x823996FC;
	sub_82355A88(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 4);
	// std r8,220(r1)
	PPC_STORE_U64(ctx.r1.u32 + 220, ctx.r8.u64);
	// bl 0x82355a90
	ctx.lr = 0x82399710;
	sub_82355A90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x82399724;
	sub_82248A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8239972C;
	sub_82355AB0(ctx, base);
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// lwz r11,788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 788);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r5,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
	// bl 0x82355ac0
	ctx.lr = 0x8239974C;
	sub_82355AC0(ctx, base);
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// addi r30,r30,208
	ctx.r30.s64 = ctx.r30.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x8239975C;
	sub_823AC6B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237f1e0
	ctx.lr = 0x8239976C;
	sub_8237F1E0(ctx, base);
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// stw r29,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359918
	ctx.lr = 0x8239977C;
	sub_82359918(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239982c
	if (ctx.cr6.eq) goto loc_8239982C;
loc_8239978C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359d58
	ctx.lr = 0x82399798;
	sub_82359D58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359c98
	ctx.lr = 0x823997A8;
	sub_82359C98(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359990
	ctx.lr = 0x823997B8;
	sub_82359990(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x823997c8
	if (!ctx.cr6.eq) goto loc_823997C8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823997C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82372d50
	ctx.lr = 0x823997D4;
	sub_82372D50(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82373228
	ctx.lr = 0x823997EC;
	sub_82373228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823732a8
	ctx.lr = 0x823997F8;
	sub_823732A8(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82373298
	ctx.lr = 0x82399800;
	sub_82373298(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82393558
	ctx.lr = 0x8239980C;
	sub_82393558(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82373298
	ctx.lr = 0x82399818;
	sub_82373298(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8239989c
	if (ctx.cr6.eq) goto loc_8239989C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8239978c
	if (ctx.cr6.lt) goto loc_8239978C;
loc_8239982C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x82399838;
	sub_823AB0F8(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82399854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r8,14
	ctx.r8.s64 = 14;
	// addi r7,r9,32288
	ctx.r7.s64 = ctx.r9.s64 + 32288;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r6,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r6.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r5.u32);
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r4.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r11.u32);
	// stw r7,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r7.u32);
	// stw r8,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r8.u32);
	// bl 0x82399408
	ctx.lr = 0x82399894;
	sub_82399408(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8239989C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ab100
	ctx.lr = 0x823998B0;
	sub_823AB100(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r11.u32);
	// bl 0x82399408
	ctx.lr = 0x823998C0;
	sub_82399408(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823998C8"))) PPC_WEAK_FUNC(sub_823998C8);
PPC_FUNC_IMPL(__imp__sub_823998C8) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x82399a74
	if (ctx.cr6.gt) goto loc_82399A74;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-26356
	ctx.r12.s64 = ctx.r12.s64 + -26356;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-26268(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26268);
	// lwz r17,-26256(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26256);
	// lwz r17,-26244(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26244);
	// lwz r17,-26224(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26224);
	// lwz r17,-26212(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26212);
	// lwz r17,-26200(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26200);
	// lwz r17,-26188(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26188);
	// lwz r17,-26176(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26176);
	// lwz r17,-26164(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26164);
	// lwz r17,-26152(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26152);
	// lwz r17,-26140(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26140);
	// lwz r17,-26128(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26128);
	// lwz r17,-26116(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26116);
	// lwz r17,-26104(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26104);
	// lwz r17,-26092(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26092);
	// lwz r17,-26080(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26080);
	// lwz r17,-26068(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26068);
	// lwz r17,-26056(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26056);
	// lwz r17,-26036(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26036);
	// lwz r17,-26024(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26024);
	// lwz r17,-26012(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26012);
	// lwz r17,-26000(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26000);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82399000
	ctx.lr = 0x8239996C;
	sub_82399000(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823981d8
	ctx.lr = 0x82399978;
	sub_823981D8(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x8237d130
	ctx.lr = 0x8239998C;
	sub_8237D130(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823982c8
	ctx.lr = 0x82399998;
	sub_823982C8(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823983f0
	ctx.lr = 0x823999A4;
	sub_823983F0(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823991a8
	ctx.lr = 0x823999BC;
	sub_823991A8(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82398550
	ctx.lr = 0x823999C8;
	sub_82398550(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82398640
	ctx.lr = 0x823999D4;
	sub_82398640(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82398690
	ctx.lr = 0x823999E0;
	sub_82398690(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823986f0
	ctx.lr = 0x823999EC;
	sub_823986F0(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82399648
	ctx.lr = 0x82399A04;
	sub_82399648(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823987c0
	ctx.lr = 0x82399A10;
	sub_823987C0(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82398940
	ctx.lr = 0x82399A1C;
	sub_82398940(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82398990
	ctx.lr = 0x82399A28;
	sub_82398990(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823989f0
	ctx.lr = 0x82399A34;
	sub_823989F0(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8237d130
	ctx.lr = 0x82399A40;
	sub_8237D130(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82398b40
	ctx.lr = 0x82399A54;
	sub_82398B40(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82398ba0
	ctx.lr = 0x82399A60;
	sub_82398BA0(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82398cf0
	ctx.lr = 0x82399A6C;
	sub_82398CF0(ctx, base);
	// b 0x82399a74
	goto loc_82399A74;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82399A74:
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

__attribute__((alias("__imp__sub_82399A90"))) PPC_WEAK_FUNC(sub_82399A90);
PPC_FUNC_IMPL(__imp__sub_82399A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82399b04
	if (ctx.cr6.gt) {
		sub_82399B04(ctx, base);
		return;
	}
	// beq cr6,0x82399af4
	if (ctx.cr6.eq) {
		// ERROR 82399AF4
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x82399b94
	if (ctx.cr6.gt) {
		// ERROR 82399B94
		return;
	}
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-25908
	ctx.r12.s64 = ctx.r12.s64 + -25908;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82399ACC"))) PPC_WEAK_FUNC(sub_82399ACC);
PPC_FUNC_IMPL(__imp__sub_82399ACC) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-25700(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25700);
	// lwz r17,-25700(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25700);
	// lwz r17,-25700(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25700);
	// lwz r17,-25700(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25700);
	// lwz r17,-25700(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25700);
	// lwz r17,-25700(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25700);
	// lwz r17,-25700(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25700);
	// lwz r17,-25700(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25700);
	// lwz r17,-25700(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25700);
	// lwz r17,-25700(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -25700);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82399B04"))) PPC_WEAK_FUNC(sub_82399B04);
PPC_FUNC_IMPL(__imp__sub_82399B04) {
	PPC_FUNC_PROLOGUE();
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82399b5c
	if (ctx.cr6.gt) goto loc_82399B5C;
	// beq cr6,0x82399b9c
	if (ctx.cr6.eq) goto loc_82399B9C;
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82399b94
	if (ctx.cr6.gt) goto loc_82399B94;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82399b4c
	// bdzf 4*cr6+eq,0x82399b94
	// bdzf 4*cr6+eq,0x82399b4c
	// bdzf 4*cr6+eq,0x82399b4c
	// bdzf 4*cr6+eq,0x82399b9c
	// bdzf 4*cr6+eq,0x82399b94
	// bne cr6,0x82399b9c
	if (!ctx.cr6.eq) goto loc_82399B9C;
loc_82399B4C:
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_82399B5C:
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82399b94
	if (ctx.cr6.gt) goto loc_82399B94;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82399b9c
	if (ctx.cr6.eq) goto loc_82399B9C;
	// bdz 0x82399b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82399B9C;
	// bdz 0x82399b4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82399B4C;
	// bdz 0x82399b94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82399B94;
	// bdz 0x82399af4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82399AF4;
	// bdz 0x82399af4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82399AF4;
	// bdz 0x82399b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82399B9C;
	// b 0x82399b9c
	goto loc_82399B9C;
loc_82399B94:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_82399B9C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
    loc_82399AF4:
        ;
}

__attribute__((alias("__imp__sub_82399BA4"))) PPC_WEAK_FUNC(sub_82399BA4);
PPC_FUNC_IMPL(__imp__sub_82399BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82399BA8"))) PPC_WEAK_FUNC(sub_82399BA8);
PPC_FUNC_IMPL(__imp__sub_82399BA8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r9,r11,-28972
	ctx.r9.s64 = ctx.r11.s64 + -28972;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// bl 0x82356e70
	ctx.lr = 0x82399BE0;
	sub_82356E70(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// addi r6,r7,30588
	ctx.r6.s64 = ctx.r7.s64 + 30588;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x82399BFC;
	sub_823585A0(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// addi r3,r5,30596
	ctx.r3.s64 = ctx.r5.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x82399C18;
	sub_823585A0(ctx, base);
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

__attribute__((alias("__imp__sub_82399C30"))) PPC_WEAK_FUNC(sub_82399C30);
PPC_FUNC_IMPL(__imp__sub_82399C30) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-28972
	ctx.r8.s64 = ctx.r11.s64 + -28972;
	// addi r7,r10,30596
	ctx.r7.s64 = ctx.r10.s64 + 30596;
	// addi r6,r9,30588
	ctx.r6.s64 = ctx.r9.s64 + 30588;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// bl 0x82356eb8
	ctx.lr = 0x82399C70;
	sub_82356EB8(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r4,r5,31824
	ctx.r4.s64 = ctx.r5.s64 + 31824;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82399C90"))) PPC_WEAK_FUNC(sub_82399C90);
PPC_FUNC_IMPL(__imp__sub_82399C90) {
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
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82399CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82399CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82399CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82399CFC"))) PPC_WEAK_FUNC(sub_82399CFC);
PPC_FUNC_IMPL(__imp__sub_82399CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82399D00"))) PPC_WEAK_FUNC(sub_82399D00);
PPC_FUNC_IMPL(__imp__sub_82399D00) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-28972
	ctx.r8.s64 = ctx.r11.s64 + -28972;
	// addi r7,r10,30596
	ctx.r7.s64 = ctx.r10.s64 + 30596;
	// addi r6,r9,30588
	ctx.r6.s64 = ctx.r9.s64 + 30588;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82356eb8
	ctx.lr = 0x82399D48;
	sub_82356EB8(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// clrlwi r4,r30,31
	ctx.r4.u64 = ctx.r30.u32 & 0x1;
	// addi r3,r5,31824
	ctx.r3.s64 = ctx.r5.s64 + 31824;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82399d6c
	if (ctx.cr6.eq) goto loc_82399D6C;
	// bl 0x82357128
	ctx.lr = 0x82399D68;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82399D6C:
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

__attribute__((alias("__imp__sub_82399D84"))) PPC_WEAK_FUNC(sub_82399D84);
PPC_FUNC_IMPL(__imp__sub_82399D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82399D88"))) PPC_WEAK_FUNC(sub_82399D88);
PPC_FUNC_IMPL(__imp__sub_82399D88) {
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
	// bl 0x823ab790
	ctx.lr = 0x82399DA0;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-28944
	ctx.r8.s64 = ctx.r11.s64 + -28944;
	// addi r7,r10,-28960
	ctx.r7.s64 = ctx.r10.s64 + -28960;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82399DF0"))) PPC_WEAK_FUNC(sub_82399DF0);
PPC_FUNC_IMPL(__imp__sub_82399DF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82399f50
	sub_82399F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82399DF8"))) PPC_WEAK_FUNC(sub_82399DF8);
PPC_FUNC_IMPL(__imp__sub_82399DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82399E00;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82399E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82399e3c
	if (ctx.cr6.eq) goto loc_82399E3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82399E3C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,-28428
	ctx.r9.s64 = ctx.r11.s64 + -28428;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82399E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82399ed0
	if (!ctx.cr6.eq) goto loc_82399ED0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82399E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82399EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82399EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x82399ED0;
	sub_823AB100(ctx, base);
loc_82399ED0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82399EDC"))) PPC_WEAK_FUNC(sub_82399EDC);
PPC_FUNC_IMPL(__imp__sub_82399EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82399EE0"))) PPC_WEAK_FUNC(sub_82399EE0);
PPC_FUNC_IMPL(__imp__sub_82399EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82399EE8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82362380
	ctx.lr = 0x82399EFC;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82399f40
	if (ctx.cr6.eq) goto loc_82399F40;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82399f40
	if (ctx.cr6.eq) goto loc_82399F40;
	// bl 0x82370538
	ctx.lr = 0x82399F18;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x82399F1C;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x82399F20;
	sub_823708C0(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82399f40
	if (!ctx.cr6.eq) goto loc_82399F40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82399F40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82399F40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82399F4C"))) PPC_WEAK_FUNC(sub_82399F4C);
PPC_FUNC_IMPL(__imp__sub_82399F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82399F50"))) PPC_WEAK_FUNC(sub_82399F50);
PPC_FUNC_IMPL(__imp__sub_82399F50) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-28944
	ctx.r8.s64 = ctx.r11.s64 + -28944;
	// addi r7,r10,-28960
	ctx.r7.s64 = ctx.r10.s64 + -28960;
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x82399F94;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82399fac
	if (ctx.cr6.eq) goto loc_82399FAC;
	// bl 0x82357128
	ctx.lr = 0x82399FA8;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82399FAC:
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

__attribute__((alias("__imp__sub_82399FC4"))) PPC_WEAK_FUNC(sub_82399FC4);
PPC_FUNC_IMPL(__imp__sub_82399FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82399FC8"))) PPC_WEAK_FUNC(sub_82399FC8);
PPC_FUNC_IMPL(__imp__sub_82399FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82399FD0;
	sub_82248788(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82399ff0
	if (ctx.cr6.eq) goto loc_82399FF0;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// b 0x8239a0ec
	goto loc_8239A0EC;
loc_82399FF0:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8239a0e4
	if (ctx.cr6.eq) goto loc_8239A0E4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8239a0e4
	if (!ctx.cr6.eq) goto loc_8239A0E4;
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8239a0e4
	if (ctx.cr6.eq) goto loc_8239A0E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357600
	ctx.lr = 0x8239A01C;
	sub_82357600(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82399ba8
	ctx.lr = 0x8239A028;
	sub_82399BA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235acb0
	ctx.lr = 0x8239A030;
	sub_8235ACB0(ctx, base);
	// stb r3,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r3.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357bb8
	ctx.lr = 0x8239A03C;
	sub_82357BB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82357038
	ctx.lr = 0x8239A048;
	sub_82357038(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82355a88
	ctx.lr = 0x8239A050;
	sub_82355A88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// std r10,148(r1)
	PPC_STORE_U64(ctx.r1.u32 + 148, ctx.r10.u64);
	// bl 0x82355a90
	ctx.lr = 0x8239A064;
	sub_82355A90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x8239A078;
	sub_82248A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x8239A084;
	sub_823AB0F8(ctx, base);
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8239A0A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r6,r7,32288
	ctx.r6.s64 = ctx.r7.s64 + 32288;
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// bl 0x82399c30
	ctx.lr = 0x8239A0D8;
	sub_82399C30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8239A0E4:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
loc_8239A0EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239A0F8;
	sub_823AB100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239A104"))) PPC_WEAK_FUNC(sub_8239A104);
PPC_FUNC_IMPL(__imp__sub_8239A104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239A108"))) PPC_WEAK_FUNC(sub_8239A108);
PPC_FUNC_IMPL(__imp__sub_8239A108) {
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
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// bl 0x82357038
	ctx.lr = 0x8239A138;
	sub_82357038(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 35;
	// addi r10,r31,35
	ctx.r10.s64 = ctx.r31.s64 + 35;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8239A148:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8239a148
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239A148;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x8239A164;
	sub_82248A40(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8239A184"))) PPC_WEAK_FUNC(sub_8239A184);
PPC_FUNC_IMPL(__imp__sub_8239A184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239A188"))) PPC_WEAK_FUNC(sub_8239A188);
PPC_FUNC_IMPL(__imp__sub_8239A188) {
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
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x8239A1A8;
	sub_823570E0(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x823570f0
	ctx.lr = 0x8239A1B0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239a1c4
	if (ctx.cr6.eq) goto loc_8239A1C4;
	// bl 0x82399ba8
	ctx.lr = 0x8239A1BC;
	sub_82399BA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8239a1c8
	goto loc_8239A1C8;
loc_8239A1C4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8239A1C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8239A1D0;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8239a1e0
	if (!ctx.cr6.eq) goto loc_8239A1E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239a1f0
	goto loc_8239A1F0;
loc_8239A1E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239a108
	ctx.lr = 0x8239A1EC;
	sub_8239A108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239A1F0:
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

__attribute__((alias("__imp__sub_8239A208"))) PPC_WEAK_FUNC(sub_8239A208);
PPC_FUNC_IMPL(__imp__sub_8239A208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239a270
	if (ctx.cr6.gt) {
		// ERROR 8239A270
		return;
	}
	// beq cr6,0x8239a314
	if (ctx.cr6.eq) {
		// ERROR 8239A314
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8239a30c
	if (ctx.cr6.gt) {
		// ERROR 8239A30C
		return;
	}
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-23996
	ctx.r12.s64 = ctx.r12.s64 + -23996;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8239A244"))) PPC_WEAK_FUNC(sub_8239A244);
PPC_FUNC_IMPL(__imp__sub_8239A244) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-23788(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23788);
	// lwz r17,-23788(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23788);
	// lwz r17,-23788(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23788);
	// lwz r17,-23788(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23788);
	// lwz r17,-23788(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23788);
	// lwz r17,-23788(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23788);
	// lwz r17,-23788(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23788);
	// lwz r17,-23788(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23788);
	// lwz r17,-23788(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23788);
	// lwz r17,-23788(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23788);
	// lwz r17,-23796(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23796);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8239a2d8
	if (ctx.cr6.gt) {
		// ERROR 8239A2D8
		return;
	}
	// beq cr6,0x8239a314
	if (ctx.cr6.eq) {
		// ERROR 8239A314
		return;
	}
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8239a30c
	if (ctx.cr6.gt) {
		// ERROR 8239A30C
		return;
	}
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-23892
	ctx.r12.s64 = ctx.r12.s64 + -23892;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8239A2AC"))) PPC_WEAK_FUNC(sub_8239A2AC);
PPC_FUNC_IMPL(__imp__sub_8239A2AC) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-23788(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23788);
	// lwz r17,-23796(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23796);
	// lwz r17,-23796(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23796);
	// lwz r17,-23796(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23796);
	// lwz r17,-23796(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23796);
	// lwz r17,-23796(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23796);
	// lwz r17,-23796(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23796);
	// lwz r17,-23796(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23796);
	// lwz r17,-23796(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23796);
	// lwz r17,-23796(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23796);
	// lwz r17,-23788(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23788);
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8239a30c
	if (ctx.cr6.gt) goto loc_8239A30C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239a314
	if (ctx.cr6.eq) goto loc_8239A314;
	// bdz 0x8239a30c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239A30C;
	// bdz 0x8239a30c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239A30C;
	// bdz 0x8239a30c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239A30C;
	// bdz 0x8239a30c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239A30C;
	// bdz 0x8239a314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239A314;
	// bdz 0x8239a314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8239A314;
loc_8239A30C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_8239A314:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239A31C"))) PPC_WEAK_FUNC(sub_8239A31C);
PPC_FUNC_IMPL(__imp__sub_8239A31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239A320"))) PPC_WEAK_FUNC(sub_8239A320);
PPC_FUNC_IMPL(__imp__sub_8239A320) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8239a368
	// bdzf 4*cr6+eq,0x8239a37c
	// bdzf 4*cr6+eq,0x8239a390
	// bdzf 4*cr6+eq,0x8239a3a4
	// bdzf 4*cr6+eq,0x8239a3b8
	// bne cr6,0x8239a3cc
	if (!ctx.cr6.eq) goto loc_8239A3CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,136(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8239A368:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,140(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8239A37C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,144(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8239A390:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8239A3A4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,160(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8239A3B8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,152(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8239A3CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,156(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8239A3E0"))) PPC_WEAK_FUNC(sub_8239A3E0);
PPC_FUNC_IMPL(__imp__sub_8239A3E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239A3E4"))) PPC_WEAK_FUNC(sub_8239A3E4);
PPC_FUNC_IMPL(__imp__sub_8239A3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239A3E8"))) PPC_WEAK_FUNC(sub_8239A3E8);
PPC_FUNC_IMPL(__imp__sub_8239A3E8) {
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
	// addi r31,r3,76
	ctx.r31.s64 = ctx.r3.s64 + 76;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d170
	ctx.lr = 0x8239A40C;
	sub_8237D170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8239A414;
	sub_823A86F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d130
	ctx.lr = 0x8239A41C;
	sub_8237D130(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8239A440"))) PPC_WEAK_FUNC(sub_8239A440);
PPC_FUNC_IMPL(__imp__sub_8239A440) {
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
	// addi r31,r3,76
	ctx.r31.s64 = ctx.r3.s64 + 76;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d170
	ctx.lr = 0x8239A464;
	sub_8237D170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8239A46C;
	sub_823A86F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d130
	ctx.lr = 0x8239A474;
	sub_8237D130(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8239A498"))) PPC_WEAK_FUNC(sub_8239A498);
PPC_FUNC_IMPL(__imp__sub_8239A498) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239A4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239A4D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8239A4F0"))) PPC_WEAK_FUNC(sub_8239A4F0);
PPC_FUNC_IMPL(__imp__sub_8239A4F0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-28808
	ctx.r9.s64 = ctx.r11.s64 + -28808;
	// addi r8,r10,30604
	ctx.r8.s64 = ctx.r10.s64 + 30604;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823700d8
	ctx.lr = 0x8239A530;
	sub_823700D8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82356eb8
	ctx.lr = 0x8239A538;
	sub_82356EB8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8239a550
	if (ctx.cr6.eq) goto loc_8239A550;
	// bl 0x82357128
	ctx.lr = 0x8239A54C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239A550:
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

__attribute__((alias("__imp__sub_8239A568"))) PPC_WEAK_FUNC(sub_8239A568);
PPC_FUNC_IMPL(__imp__sub_8239A568) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-31544
	ctx.r9.s64 = ctx.r11.s64 + -31544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8239a59c
	if (ctx.cr6.eq) goto loc_8239A59C;
	// bl 0x82357128
	ctx.lr = 0x8239A598;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239A59C:
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

__attribute__((alias("__imp__sub_8239A5B0"))) PPC_WEAK_FUNC(sub_8239A5B0);
PPC_FUNC_IMPL(__imp__sub_8239A5B0) {
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
	// bl 0x823ab790
	ctx.lr = 0x8239A5C8;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-28784
	ctx.r8.s64 = ctx.r11.s64 + -28784;
	// addi r7,r10,-28800
	ctx.r7.s64 = ctx.r10.s64 + -28800;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x823a86f8
	ctx.lr = 0x8239A608;
	sub_823A86F8(ctx, base);
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

__attribute__((alias("__imp__sub_8239A620"))) PPC_WEAK_FUNC(sub_8239A620);
PPC_FUNC_IMPL(__imp__sub_8239A620) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8239acb0
	sub_8239ACB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239A628"))) PPC_WEAK_FUNC(sub_8239A628);
PPC_FUNC_IMPL(__imp__sub_8239A628) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8239a6c4
	if (!ctx.cr6.eq) goto loc_8239A6C4;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8239a65c
	if (!ctx.cr6.eq) goto loc_8239A65C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239a6c8
	goto loc_8239A6C8;
loc_8239A65C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239A678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239a6c4
	if (ctx.cr6.eq) goto loc_8239A6C4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32360
	ctx.r9.s64 = ctx.r11.s64 + -32360;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8239A6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8239a6c8
	if (ctx.cr6.eq) goto loc_8239A6C8;
loc_8239A6C4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8239A6C8:
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

__attribute__((alias("__imp__sub_8239A6E0"))) PPC_WEAK_FUNC(sub_8239A6E0);
PPC_FUNC_IMPL(__imp__sub_8239A6E0) {
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
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8239a758
	if (ctx.cr6.eq) goto loc_8239A758;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8239a758
	if (!ctx.cr6.eq) goto loc_8239A758;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237fd78
	ctx.lr = 0x8239A718;
	sub_8237FD78(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239a748
	if (ctx.cr6.eq) goto loc_8239A748;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// bl 0x8237fd78
	ctx.lr = 0x8239A734;
	sub_8237FD78(ctx, base);
	// rlwinm r10,r3,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8239a750
	if (!ctx.cr6.eq) goto loc_8239A750;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8239a770
	goto loc_8239A770;
loc_8239A748:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
loc_8239A750:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8239a770
	goto loc_8239A770;
loc_8239A758:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239A76C;
	sub_823AB100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239A770:
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

__attribute__((alias("__imp__sub_8239A788"))) PPC_WEAK_FUNC(sub_8239A788);
PPC_FUNC_IMPL(__imp__sub_8239A788) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ab0f8
	ctx.lr = 0x8239A7A8;
	sub_823AB0F8(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8239A7B4;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8239a7c8
	if (!ctx.cr6.lt) goto loc_8239A7C8;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// b 0x8239a850
	goto loc_8239A850;
loc_8239A7C8:
	// bl 0x8235bf58
	ctx.lr = 0x8239A7CC;
	sub_8235BF58(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239a848
	if (ctx.cr6.eq) goto loc_8239A848;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8239a848
	if (!ctx.cr6.eq) goto loc_8239A848;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8237fd78
	ctx.lr = 0x8239A7F0;
	sub_8237FD78(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239a810
	if (ctx.cr6.eq) goto loc_8239A810;
	// lwz r11,1936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1936);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239a810
	if (ctx.cr6.eq) goto loc_8239A810;
loc_8239A808:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239a860
	goto loc_8239A860;
loc_8239A810:
	// bl 0x8235e108
	ctx.lr = 0x8239A814;
	sub_8235E108(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8239A820;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a808
	if (!ctx.cr6.eq) goto loc_8239A808;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8239A834;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a808
	if (!ctx.cr6.eq) goto loc_8239A808;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x8239a860
	goto loc_8239A860;
loc_8239A848:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
loc_8239A850:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239A85C;
	sub_823AB100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8239A860:
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

__attribute__((alias("__imp__sub_8239A87C"))) PPC_WEAK_FUNC(sub_8239A87C);
PPC_FUNC_IMPL(__imp__sub_8239A87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239A880"))) PPC_WEAK_FUNC(sub_8239A880);
PPC_FUNC_IMPL(__imp__sub_8239A880) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823ab0f8
	ctx.lr = 0x8239A8A0;
	sub_823AB0F8(ctx, base);
	// addi r3,r30,76
	ctx.r3.s64 = ctx.r30.s64 + 76;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8239A8AC;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8239a8c0
	if (!ctx.cr6.lt) goto loc_8239A8C0;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// b 0x8239a948
	goto loc_8239A948;
loc_8239A8C0:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8239a940
	if (ctx.cr6.eq) goto loc_8239A940;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8239a940
	if (!ctx.cr6.eq) goto loc_8239A940;
	// bl 0x82362380
	ctx.lr = 0x8239A8DC;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8239A8E4;
	sub_8235BF58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237fd78
	ctx.lr = 0x8239A8EC;
	sub_8237FD78(ctx, base);
	// rlwinm r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239a938
	if (ctx.cr6.eq) goto loc_8239A938;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237fd78
	ctx.lr = 0x8239A900;
	sub_8237FD78(ctx, base);
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// bne cr6,0x8239a92c
	if (!ctx.cr6.eq) goto loc_8239A92C;
	// li r4,23
	ctx.r4.s64 = 23;
loc_8239A92C:
	// bl 0x82367000
	ctx.lr = 0x8239A930;
	sub_82367000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239a954
	if (!ctx.cr6.eq) goto loc_8239A954;
loc_8239A938:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239a958
	goto loc_8239A958;
loc_8239A940:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
loc_8239A948:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239A954;
	sub_823AB100(ctx, base);
loc_8239A954:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8239A958:
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

__attribute__((alias("__imp__sub_8239A974"))) PPC_WEAK_FUNC(sub_8239A974);
PPC_FUNC_IMPL(__imp__sub_8239A974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239A978"))) PPC_WEAK_FUNC(sub_8239A978);
PPC_FUNC_IMPL(__imp__sub_8239A978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8239A980;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239A9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239a9bc
	if (ctx.cr6.eq) goto loc_8239A9BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8239A9BC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r9,r11,-31544
	ctx.r9.s64 = ctx.r11.s64 + -31544;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239A9EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239aa5c
	if (!ctx.cr6.eq) goto loc_8239AA5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239AA10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,100(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239AA2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8239AA40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239AA50;
	sub_823AB100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8239AA5C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239aa98
	if (ctx.cr6.eq) goto loc_8239AA98;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8239aa98
	if (!ctx.cr6.eq) goto loc_8239AA98;
	// bl 0x8237fd78
	ctx.lr = 0x8239AA78;
	sub_8237FD78(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239aaac
	if (ctx.cr6.eq) goto loc_8239AAAC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8239AA98:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239AAAC;
	sub_823AB100(ctx, base);
loc_8239AAAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8239AAB8"))) PPC_WEAK_FUNC(sub_8239AAB8);
PPC_FUNC_IMPL(__imp__sub_8239AAB8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239ab30
	if (ctx.cr6.eq) goto loc_8239AB30;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8239ab30
	if (!ctx.cr6.eq) goto loc_8239AB30;
	// bl 0x8237fd78
	ctx.lr = 0x8239AAE8;
	sub_8237FD78(ctx, base);
	// rlwinm r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239ab44
	if (ctx.cr6.eq) goto loc_8239AB44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239AB08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239ab44
	if (ctx.cr6.eq) goto loc_8239AB44;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
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
loc_8239AB30:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239AB44;
	sub_823AB100(ctx, base);
loc_8239AB44:
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

__attribute__((alias("__imp__sub_8239AB5C"))) PPC_WEAK_FUNC(sub_8239AB5C);
PPC_FUNC_IMPL(__imp__sub_8239AB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239AB60"))) PPC_WEAK_FUNC(sub_8239AB60);
PPC_FUNC_IMPL(__imp__sub_8239AB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8239AB68;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8239AB74;
	sub_8235BF58(ctx, base);
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8239ac24
	if (ctx.cr6.eq) goto loc_8239AC24;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8239ac24
	if (!ctx.cr6.eq) goto loc_8239AC24;
	// bl 0x8235cf68
	ctx.lr = 0x8239AB94;
	sub_8235CF68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237fd78
	ctx.lr = 0x8239ABA0;
	sub_8237FD78(ctx, base);
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239abec
	if (ctx.cr6.eq) goto loc_8239ABEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r10.u32);
	// bl 0x82355b28
	ctx.lr = 0x8239ABC8;
	sub_82355B28(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8239ABE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8239ABEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// bl 0x82355b28
	ctx.lr = 0x8239AC00;
	sub_82355B28(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239AC18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8239AC24:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x8239AC38;
	sub_823AB100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239AC44"))) PPC_WEAK_FUNC(sub_8239AC44);
PPC_FUNC_IMPL(__imp__sub_8239AC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239AC48"))) PPC_WEAK_FUNC(sub_8239AC48);
PPC_FUNC_IMPL(__imp__sub_8239AC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239AC50;
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
	// ble cr6,0x8239aca0
	if (!ctx.cr6.gt) goto loc_8239ACA0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8239AC70:
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
	ctx.lr = 0x8239AC8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8239ac70
	if (ctx.cr6.lt) goto loc_8239AC70;
loc_8239ACA0:
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239ACAC"))) PPC_WEAK_FUNC(sub_8239ACAC);
PPC_FUNC_IMPL(__imp__sub_8239ACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239ACB0"))) PPC_WEAK_FUNC(sub_8239ACB0);
PPC_FUNC_IMPL(__imp__sub_8239ACB0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-28784
	ctx.r9.s64 = ctx.r11.s64 + -28784;
	// addi r8,r10,-28800
	ctx.r8.s64 = ctx.r10.s64 + -28800;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab568
	ctx.lr = 0x8239ACEC;
	sub_823AB568(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,32288
	ctx.r6.s64 = ctx.r7.s64 + 32288;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// bl 0x823ab4e8
	ctx.lr = 0x8239AD00;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8239ad18
	if (ctx.cr6.eq) goto loc_8239AD18;
	// bl 0x82357128
	ctx.lr = 0x8239AD14;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239AD18:
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

__attribute__((alias("__imp__sub_8239AD30"))) PPC_WEAK_FUNC(sub_8239AD30);
PPC_FUNC_IMPL(__imp__sub_8239AD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8239AD38;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-28808
	ctx.r10.s64 = ctx.r11.s64 + -28808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82356e70
	ctx.lr = 0x8239AD64;
	sub_82356E70(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// addi r8,r9,30604
	ctx.r8.s64 = ctx.r9.s64 + 30604;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bl 0x82370088
	ctx.lr = 0x8239AD7C;
	sub_82370088(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357038
	ctx.lr = 0x8239AD90;
	sub_82357038(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// bl 0x82370360
	ctx.lr = 0x8239AD9C;
	sub_82370360(ctx, base);
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8239ADAC"))) PPC_WEAK_FUNC(sub_8239ADAC);
PPC_FUNC_IMPL(__imp__sub_8239ADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239ADB0"))) PPC_WEAK_FUNC(sub_8239ADB0);
PPC_FUNC_IMPL(__imp__sub_8239ADB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8239ADB8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-28808
	ctx.r10.s64 = ctx.r11.s64 + -28808;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82356e70
	ctx.lr = 0x8239ADDC;
	sub_82356E70(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// addi r8,r9,30604
	ctx.r8.s64 = ctx.r9.s64 + 30604;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bl 0x82370088
	ctx.lr = 0x8239ADF4;
	sub_82370088(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357038
	ctx.lr = 0x8239AE08;
	sub_82357038(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// bl 0x82370360
	ctx.lr = 0x8239AE14;
	sub_82370360(ctx, base);
	// lwz r6,72(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8239AE28"))) PPC_WEAK_FUNC(sub_8239AE28);
PPC_FUNC_IMPL(__imp__sub_8239AE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8239AE30;
	sub_82248770(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8239AE3C;
	sub_8235BF58(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8239AE44;
	sub_82362380(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823579a0
	ctx.lr = 0x8239AE50;
	sub_823579A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r23,r11,30604
	ctx.r23.s64 = ctx.r11.s64 + 30604;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// bl 0x82370088
	ctx.lr = 0x8239AE64;
	sub_82370088(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r26,56(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// bl 0x8237ff18
	ctx.lr = 0x8239AE70;
	sub_8237FF18(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lwz r28,800(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 800);
	// beq cr6,0x8239af1c
	if (ctx.cr6.eq) goto loc_8239AF1C;
loc_8239AE80:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82362660
	ctx.lr = 0x8239AE90;
	sub_82362660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239af10
	if (ctx.cr6.eq) goto loc_8239AF10;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82362748
	ctx.lr = 0x8239AEA8;
	sub_82362748(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8239aef4
	if (ctx.cr6.eq) goto loc_8239AEF4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8239AEB8:
	// lwz r11,796(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 796);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82357bb8
	ctx.lr = 0x8239AEC8;
	sub_82357BB8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82357bb8
	ctx.lr = 0x8239AED4;
	sub_82357BB8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82357048
	ctx.lr = 0x8239AEDC;
	sub_82357048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239af10
	if (!ctx.cr6.eq) goto loc_8239AF10;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,120
	ctx.r31.s64 = ctx.r31.s64 + 120;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8239aeb8
	if (ctx.cr6.lt) goto loc_8239AEB8;
loc_8239AEF4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82380198
	ctx.lr = 0x8239AF08;
	sub_82380198(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239afb4
	if (ctx.cr6.eq) goto loc_8239AFB4;
loc_8239AF10:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8239ae80
	if (ctx.cr6.lt) goto loc_8239AE80;
loc_8239AF1C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8237fea8
	ctx.lr = 0x8239AF24;
	sub_8237FEA8(ctx, base);
	// lwz r11,820(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 820);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8239af94
	if (ctx.cr0.lt) goto loc_8239AF94;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_8239AF34:
	// lwz r8,800(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 800);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8239af78
	if (ctx.cr6.eq) goto loc_8239AF78;
	// lwz r6,816(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 816);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,796(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 796);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r4,r6,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
loc_8239AF58:
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8239afd4
	if (ctx.cr6.eq) goto loc_8239AFD4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x8239af58
	if (ctx.cr6.lt) goto loc_8239AF58;
loc_8239AF78:
	// lwz r11,816(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 816);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8236b2c8
	ctx.lr = 0x8239AF88;
	sub_8236B2C8(ctx, base);
loc_8239AF88:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bge 0x8239af34
	if (!ctx.cr0.lt) goto loc_8239AF34;
loc_8239AF94:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823700d8
	ctx.lr = 0x8239AFA0;
	sub_823700D8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823579f8
	ctx.lr = 0x8239AFA8;
	sub_823579F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8239AFB4:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823700d8
	ctx.lr = 0x8239AFC0;
	sub_823700D8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823579f8
	ctx.lr = 0x8239AFC8;
	sub_823579F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_8239AFD4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8239b008
	if (ctx.cr6.eq) goto loc_8239B008;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8239AFE8:
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8239b008
	if (ctx.cr6.eq) goto loc_8239B008;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x8239afe8
	if (ctx.cr6.lt) goto loc_8239AFE8;
loc_8239B008:
	// mulli r10,r9,120
	ctx.r10.s64 = ctx.r9.s64 * 120;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r6,r10,64
	ctx.r6.s64 = ctx.r10.s64 + 64;
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8239b048
	if (ctx.cr6.eq) goto loc_8239B048;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8239B028:
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8239b048
	if (ctx.cr6.eq) goto loc_8239B048;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,120
	ctx.r9.s64 = ctx.r9.s64 + 120;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blt cr6,0x8239b028
	if (ctx.cr6.lt) goto loc_8239B028;
loc_8239B048:
	// mulli r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 * 120;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x82380120
	ctx.lr = 0x8239B05C;
	sub_82380120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239afb4
	if (ctx.cr6.eq) goto loc_8239AFB4;
	// b 0x8239af88
	goto loc_8239AF88;
}

__attribute__((alias("__imp__sub_8239B068"))) PPC_WEAK_FUNC(sub_8239B068);
PPC_FUNC_IMPL(__imp__sub_8239B068) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r8,r10,-28616
	ctx.r8.s64 = ctx.r10.s64 + -28616;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r6,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239B0E8"))) PPC_WEAK_FUNC(sub_8239B0E8);
PPC_FUNC_IMPL(__imp__sub_8239B0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239B0F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r31,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r31.u32);
	// bl 0x8239ac48
	ctx.lr = 0x8239B120;
	sub_8239AC48(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239b134
	if (ctx.cr6.eq) goto loc_8239B134;
	// bl 0x82357240
	ctx.lr = 0x8239B130;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_8239B134:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r28,r30,44
	ctx.r28.s64 = ctx.r30.s64 + 44;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8239ac48
	ctx.lr = 0x8239B148;
	sub_8239AC48(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239b15c
	if (ctx.cr6.eq) goto loc_8239B15C;
	// bl 0x82357240
	ctx.lr = 0x8239B158;
	sub_82357240(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_8239B15C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// stw r31,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
	// stw r31,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239B18C"))) PPC_WEAK_FUNC(sub_8239B18C);
PPC_FUNC_IMPL(__imp__sub_8239B18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B190"))) PPC_WEAK_FUNC(sub_8239B190);
PPC_FUNC_IMPL(__imp__sub_8239B190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8239B198;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r3,44
	ctx.r31.s64 = ctx.r3.s64 + 44;
	// addi r10,r11,-28616
	ctx.r10.s64 = ctx.r11.s64 + -28616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x8239ac48
	ctx.lr = 0x8239B1B8;
	sub_8239AC48(ctx, base);
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239b1d0
	if (ctx.cr6.eq) goto loc_8239B1D0;
	// bl 0x82357240
	ctx.lr = 0x8239B1CC;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8239B1D0:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r30,r28,24
	ctx.r30.s64 = ctx.r28.s64 + 24;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239ac48
	ctx.lr = 0x8239B1E4;
	sub_8239AC48(ctx, base);
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239b1f8
	if (ctx.cr6.eq) goto loc_8239B1F8;
	// bl 0x82357240
	ctx.lr = 0x8239B1F4;
	sub_82357240(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_8239B1F8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r10,r11,31824
	ctx.r10.s64 = ctx.r11.s64 + 31824;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8239B214"))) PPC_WEAK_FUNC(sub_8239B214);
PPC_FUNC_IMPL(__imp__sub_8239B214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8239B218"))) PPC_WEAK_FUNC(sub_8239B218);
PPC_FUNC_IMPL(__imp__sub_8239B218) {
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
	// bl 0x8239b190
	ctx.lr = 0x8239B238;
	sub_8239B190(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239b250
	if (ctx.cr6.eq) goto loc_8239B250;
	// bl 0x82357128
	ctx.lr = 0x8239B24C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8239B250:
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

__attribute__((alias("__imp__sub_8239B268"))) PPC_WEAK_FUNC(sub_8239B268);
PPC_FUNC_IMPL(__imp__sub_8239B268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8239B270;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8239b288
	if (!ctx.cr6.eq) goto loc_8239B288;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_8239B288:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add. r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x8239b2a0
	if (!ctx.cr0.eq) goto loc_8239B2A0;
loc_8239B294:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8239B2A0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x8239B2A8;
	sub_823570E0(ctx, base);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// rlwinm r31,r11,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357208
	ctx.lr = 0x8239B2C0;
	sub_82357208(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8239B2CC;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8239b294
	if (ctx.cr6.eq) goto loc_8239B294;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823585a0
	ctx.lr = 0x8239B2E0;
	sub_823585A0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239b390
	if (ctx.cr6.eq) goto loc_8239B390;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8239b378
	if (!ctx.cr6.gt) goto loc_8239B378;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8239B304:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8239b318
	if (ctx.cr6.eq) goto loc_8239B318;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239adb0
	ctx.lr = 0x8239B318;
	sub_8239ADB0(ctx, base);
loc_8239B318:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r27,r31,28
	ctx.r27.s64 = ctx.r31.s64 + 28;
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r3,r27,-20
	ctx.r3.s64 = ctx.r27.s64 + -20;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// bl 0x82357038
	ctx.lr = 0x8239B330;
	sub_82357038(ctx, base);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82370360
	ctx.lr = 0x8239B33C;
	sub_82370360(ctx, base);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8239B360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8239b304
	if (ctx.cr6.lt) goto loc_8239B304;
loc_8239B378:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239b390
	if (ctx.cr6.eq) goto loc_8239B390;
	// bl 0x82357240
	ctx.lr = 0x8239B388;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8239B390:
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r24,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

