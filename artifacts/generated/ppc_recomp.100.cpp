#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823F6380"))) PPC_WEAK_FUNC(sub_823F6380);
PPC_FUNC_IMPL(__imp__sub_823F6380) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,25520(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25520);
	// lwz r17,25524(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25524);
	// lwz r17,25528(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25528);
	// lwz r17,25532(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25532);
	// lwz r17,25536(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25536);
	// lwz r17,25540(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25540);
	// lwz r17,25544(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25544);
	// lwz r17,25564(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25564);
	// lwz r17,25548(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25548);
	// lwz r17,25552(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25552);
	// lwz r17,25556(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25556);
	// lwz r17,25560(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25560);
	// b 0x823f5430
	sub_823F5430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F63B4"))) PPC_WEAK_FUNC(sub_823F63B4);
PPC_FUNC_IMPL(__imp__sub_823F63B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f5480
	sub_823F5480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F63B8"))) PPC_WEAK_FUNC(sub_823F63B8);
PPC_FUNC_IMPL(__imp__sub_823F63B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f54d8
	sub_823F54D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F63BC"))) PPC_WEAK_FUNC(sub_823F63BC);
PPC_FUNC_IMPL(__imp__sub_823F63BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f5550
	sub_823F5550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F63C0"))) PPC_WEAK_FUNC(sub_823F63C0);
PPC_FUNC_IMPL(__imp__sub_823F63C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f55d8
	sub_823F55D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F63C4"))) PPC_WEAK_FUNC(sub_823F63C4);
PPC_FUNC_IMPL(__imp__sub_823F63C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f5638
	sub_823F5638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F63C8"))) PPC_WEAK_FUNC(sub_823F63C8);
PPC_FUNC_IMPL(__imp__sub_823F63C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f6278
	sub_823F6278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F63CC"))) PPC_WEAK_FUNC(sub_823F63CC);
PPC_FUNC_IMPL(__imp__sub_823F63CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f5698
	sub_823F5698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F63D0"))) PPC_WEAK_FUNC(sub_823F63D0);
PPC_FUNC_IMPL(__imp__sub_823F63D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f56e8
	sub_823F56E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F63D4"))) PPC_WEAK_FUNC(sub_823F63D4);
PPC_FUNC_IMPL(__imp__sub_823F63D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f5778
	sub_823F5778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F63D8"))) PPC_WEAK_FUNC(sub_823F63D8);
PPC_FUNC_IMPL(__imp__sub_823F63D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f57c8
	sub_823F57C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F63DC"))) PPC_WEAK_FUNC(sub_823F63DC);
PPC_FUNC_IMPL(__imp__sub_823F63DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F63E0"))) PPC_WEAK_FUNC(sub_823F63E0);
PPC_FUNC_IMPL(__imp__sub_823F63E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823F63E8;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,37308
	ctx.r10.u64 = ctx.r11.u64 | 37308;
	// li r29,11
	ctx.r29.s64 = 11;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823f661c
	if (ctx.cr6.gt) goto loc_823F661C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823f64fc
	// bdzf 4*cr6+eq,0x823f653c
	// bne cr6,0x823f657c
	if (!ctx.cr6.eq) goto loc_823F657C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r11,-4392
	ctx.r28.s64 = ctx.r11.s64 + -4392;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823F6440;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// bgt cr6,0x823f661c
	if (ctx.cr6.gt) goto loc_823F661C;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823f6478
	// bdzf 4*cr6+eq,0x823f6484
	// bdzf 4*cr6+eq,0x823f6490
	// bdzf 4*cr6+eq,0x823f64a8
	// bdzf 4*cr6+eq,0x823f64c0
	// bdzf 4*cr6+eq,0x823f64cc
	// bdzf 4*cr6+eq,0x823f64e4
	// bne cr6,0x823f64f0
	if (!ctx.cr6.eq) goto loc_823F64F0;
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x823f65cc
	goto loc_823F65CC;
loc_823F6478:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x823f65cc
	goto loc_823F65CC;
loc_823F6484:
	// li r11,30
	ctx.r11.s64 = 30;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x823f65cc
	goto loc_823F65CC;
loc_823F6490:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// bl 0x823f6128
	ctx.lr = 0x823F64A0;
	sub_823F6128(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823F64A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// bl 0x823f6128
	ctx.lr = 0x823F64B8;
	sub_823F6128(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823F64C0:
	// li r11,31
	ctx.r11.s64 = 31;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x823f65cc
	goto loc_823F65CC;
loc_823F64CC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// bl 0x823f6128
	ctx.lr = 0x823F64DC;
	sub_823F6128(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823F64E4:
	// li r11,39
	ctx.r11.s64 = 39;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x823f65cc
	goto loc_823F65CC;
loc_823F64F0:
	// li r11,40
	ctx.r11.s64 = 40;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x823f65cc
	goto loc_823F65CC;
loc_823F64FC:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,-4392
	ctx.r28.s64 = ctx.r11.s64 + -4392;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823F6518;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x823f6530
	if (ctx.cr6.lt) goto loc_823F6530;
	// bne cr6,0x823f661c
	if (!ctx.cr6.eq) goto loc_823F661C;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r29,4
	ctx.r29.s64 = 4;
	// b 0x823f65cc
	goto loc_823F65CC;
loc_823F6530:
	// li r11,33
	ctx.r11.s64 = 33;
	// li r29,5
	ctx.r29.s64 = 5;
	// b 0x823f65cc
	goto loc_823F65CC;
loc_823F653C:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r28,r11,-4392
	ctx.r28.s64 = ctx.r11.s64 + -4392;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823F6558;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x823f6570
	if (ctx.cr6.lt) goto loc_823F6570;
	// bne cr6,0x823f661c
	if (!ctx.cr6.eq) goto loc_823F661C;
	// li r11,34
	ctx.r11.s64 = 34;
	// li r29,6
	ctx.r29.s64 = 6;
	// b 0x823f65cc
	goto loc_823F65CC;
loc_823F6570:
	// li r11,35
	ctx.r11.s64 = 35;
	// li r29,7
	ctx.r29.s64 = 7;
	// b 0x823f65cc
	goto loc_823F65CC;
loc_823F657C:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r28,r11,-4392
	ctx.r28.s64 = ctx.r11.s64 + -4392;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823F6598;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x823f65c4
	if (ctx.cr6.lt) goto loc_823F65C4;
	// beq cr6,0x823f65b8
	if (ctx.cr6.eq) goto loc_823F65B8;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x823f661c
	if (!ctx.cr6.lt) goto loc_823F661C;
	// li r11,37
	ctx.r11.s64 = 37;
	// li r29,9
	ctx.r29.s64 = 9;
	// b 0x823f65cc
	goto loc_823F65CC;
loc_823F65B8:
	// li r11,38
	ctx.r11.s64 = 38;
	// li r29,10
	ctx.r29.s64 = 10;
	// b 0x823f65cc
	goto loc_823F65CC;
loc_823F65C4:
	// li r11,36
	ctx.r11.s64 = 36;
	// li r29,8
	ctx.r29.s64 = 8;
loc_823F65CC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 644, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 792, ctx.r10.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r11,2744
	ctx.r31.s64 = ctx.r11.s64 + 2744;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x823F65F0;
	sub_82248A40(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x823F6608;
	sub_82248A40(ctx, base);
	// lwz r9,-28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F661C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F661C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823F6624"))) PPC_WEAK_FUNC(sub_823F6624);
PPC_FUNC_IMPL(__imp__sub_823F6624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F6628"))) PPC_WEAK_FUNC(sub_823F6628);
PPC_FUNC_IMPL(__imp__sub_823F6628) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,37308
	ctx.r10.u64 = ctx.r11.u64 | 37308;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823f6724
	if (ctx.cr6.gt) goto loc_823F6724;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823f66f0
	// bdzf 4*cr6+eq,0x823f66f8
	// bne cr6,0x823f6700
	if (!ctx.cr6.eq) goto loc_823F6700;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4308);
	// lwz r10,12060(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12060);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823f66a0
	if (ctx.cr6.eq) goto loc_823F66A0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// ori r9,r11,37312
	ctx.r9.u64 = ctx.r11.u64 | 37312;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823F66A0:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r10,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r10.u32);
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bne cr6,0x823f66c8
	if (!ctx.cr6.eq) goto loc_823F66C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F66C8:
	// stw r11,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F66DC;
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
loc_823F66F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x823f6704
	goto loc_823F6704;
loc_823F66F8:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x823f6704
	goto loc_823F6704;
loc_823F6700:
	// li r5,3
	ctx.r5.s64 = 3;
loc_823F6704:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823F6714;
	sub_823E8918(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x823f6128
	ctx.lr = 0x823F6724;
	sub_823F6128(ctx, base);
loc_823F6724:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823F6738"))) PPC_WEAK_FUNC(sub_823F6738);
PPC_FUNC_IMPL(__imp__sub_823F6738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823F6740;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82404480
	ctx.lr = 0x823F6750;
	sub_82404480(ctx, base);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r8,-28272
	ctx.r8.s64 = ctx.r8.s64 + -28272;
	// ori r3,r4,37340
	ctx.r3.u64 = ctx.r4.u64 | 37340;
	// addi r28,r28,-28200
	ctx.r28.s64 = ctx.r28.s64 + -28200;
	// addi r5,r9,-10748
	ctx.r5.s64 = ctx.r9.s64 + -10748;
	// addi r7,r11,-10600
	ctx.r7.s64 = ctx.r11.s64 + -10600;
	// addi r6,r10,-10736
	ctx.r6.s64 = ctx.r10.s64 + -10736;
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// li r10,136
	ctx.r10.s64 = 136;
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r30,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r30.u32);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// stw r30,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r30.u32);
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// stw r30,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r30.u32);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// stw r30,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r30.u32);
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r30,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r30.u32);
	// stw r11,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r11.u32);
	// stw r30,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r30.u32);
	// stw r11,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r11.u32);
	// stw r30,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r30.u32);
	// stw r11,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r11.u32);
	// stw r30,68(r8)
	PPC_STORE_U32(ctx.r8.u32 + 68, ctx.r30.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stwx r30,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r30.u32);
	// stw r10,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r10.u32);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r3,-4392(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4392);
	// bl 0x823e8958
	ctx.lr = 0x823F6804;
	sub_823E8958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823f6128
	ctx.lr = 0x823F6814;
	sub_823F6128(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,14876(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823F6834;
	sub_823C31B0(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,168(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 168);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x823F6848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8e20
	ctx.lr = 0x823F6850;
	sub_823C8E20(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,17684(r7)
	PPC_STORE_U32(ctx.r7.u32 + 17684, ctx.r9.u32);
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subfe r11,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,17828(r5)
	PPC_STORE_U32(ctx.r5.u32 + 17828, ctx.r11.u32);
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subfe r7,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,17972(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17972, ctx.r7.u32);
	// bl 0x823f59a0
	ctx.lr = 0x823F68AC;
	sub_823F59A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed490
	ctx.lr = 0x823F68B4;
	sub_823ED490(ctx, base);
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r5,r6,512
	ctx.r5.u64 = ctx.r6.u64 | 512;
	// stw r5,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r5.u32);
	// bl 0x823e9980
	ctx.lr = 0x823F68C8;
	sub_823E9980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823F68D4"))) PPC_WEAK_FUNC(sub_823F68D4);
PPC_FUNC_IMPL(__imp__sub_823F68D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F68D8"))) PPC_WEAK_FUNC(sub_823F68D8);
PPC_FUNC_IMPL(__imp__sub_823F68D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ed4d8
	sub_823ED4D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F68DC"))) PPC_WEAK_FUNC(sub_823F68DC);
PPC_FUNC_IMPL(__imp__sub_823F68DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F68E0"))) PPC_WEAK_FUNC(sub_823F68E0);
PPC_FUNC_IMPL(__imp__sub_823F68E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823F6900;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f692c
	if (ctx.cr6.eq) goto loc_823F692C;
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// ori r9,r10,37280
	ctx.r9.u64 = ctx.r10.u64 | 37280;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F692C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F692C:
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823F6944;
	sub_823E8918(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// bl 0x823e8918
	ctx.lr = 0x823F6958;
	sub_823E8918(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r10,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r10.u32);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F697C;
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

__attribute__((alias("__imp__sub_823F6994"))) PPC_WEAK_FUNC(sub_823F6994);
PPC_FUNC_IMPL(__imp__sub_823F6994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F6998"))) PPC_WEAK_FUNC(sub_823F6998);
PPC_FUNC_IMPL(__imp__sub_823F6998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,45288
	ctx.r10.u64 = ctx.r11.u64 | 45288;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823f69b4
	if (!ctx.cr6.eq) goto loc_823F69B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823F69B4:
	// b 0x823ed5b0
	sub_823ED5B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F69B8"))) PPC_WEAK_FUNC(sub_823F69B8);
PPC_FUNC_IMPL(__imp__sub_823F69B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823F69C0;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r17,-32177
	ctx.r17.s64 = -2108751872;
	// addis r16,r3,1
	ctx.r16.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r16,r16,-28324
	ctx.r16.s64 = ctx.r16.s64 + -28324;
	// lwz r15,-4392(r17)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r17.u32 + -4392);
	// bl 0x82163df0
	ctx.lr = 0x823F69E0;
	sub_82163DF0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x823F69EC;
	sub_8218B408(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823F69F8;
	sub_8218B408(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x823c3280
	ctx.lr = 0x823F6A04;
	sub_823C3280(ctx, base);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r8,r8,-28308
	ctx.r8.s64 = ctx.r8.s64 + -28308;
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// ori r5,r7,37256
	ctx.r5.u64 = ctx.r7.u64 | 37256;
	// addi r22,r22,-28288
	ctx.r22.s64 = ctx.r22.s64 + -28288;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r6,37264
	ctx.r10.u64 = ctx.r6.u64 | 37264;
	// cntlzw r7,r4
	ctx.r7.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// ori r6,r9,37272
	ctx.r6.u64 = ctx.r9.u64 | 37272;
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r4,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r4.u32);
	// lis r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// ori r4,r9,37280
	ctx.r4.u64 = ctx.r9.u64 | 37280;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r26,r30,37304
	ctx.r26.u64 = ctx.r30.u64 | 37304;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// ori r27,r5,37296
	ctx.r27.u64 = ctx.r5.u64 | 37296;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// stwx r5,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r30,r9,-4304
	ctx.r30.s64 = ctx.r9.s64 + -4304;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// ori r7,r7,37288
	ctx.r7.u64 = ctx.r7.u64 | 37288;
	// stwx r5,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r29,r10,26232
	ctx.r29.s64 = ctx.r10.s64 + 26232;
	// stwx r6,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r11,-5
	ctx.r9.s64 = ctx.r11.s64 + -5;
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r28,r28,-20220
	ctx.r28.s64 = ctx.r28.s64 + -20220;
	// stwx r4,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r11,-6
	ctx.r3.s64 = ctx.r11.s64 + -6;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r10,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r11,-7
	ctx.r9.s64 = ctx.r11.s64 + -7;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stwx r7,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r7.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8218a5f0
	ctx.lr = 0x823F6B1C;
	sub_8218A5F0(ctx, base);
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r3,r5,59096
	ctx.r3.u64 = ctx.r5.u64 | 59096;
	// ori r11,r4,59116
	ctx.r11.u64 = ctx.r4.u64 | 59116;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// li r18,0
	ctx.r18.s64 = 0;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r18,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r18.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823f6b5c
	if (!ctx.cr6.eq) goto loc_823F6B5C;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// b 0x823f6b6c
	goto loc_823F6B6C;
loc_823F6B5C:
	// lwz r10,20(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r11,16(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
loc_823F6B6C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8218a5f0
	ctx.lr = 0x823F6B7C;
	sub_8218A5F0(ctx, base);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,58584
	ctx.r9.u64 = ctx.r11.u64 | 58584;
	// ori r6,r10,58604
	ctx.r6.u64 = ctx.r10.u64 | 58604;
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// addi r7,r10,9536
	ctx.r7.s64 = ctx.r10.s64 + 9536;
	// stwx r30,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// stwx r18,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r18.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_823F6BB8:
	// lwz r10,-8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6bd8
	if (ctx.cr6.lt) goto loc_823F6BD8;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F6BD8:
	// lwz r10,-4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6bf8
	if (ctx.cr6.lt) goto loc_823F6BF8;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F6BF8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6c18
	if (ctx.cr6.lt) goto loc_823F6C18;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F6C18:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6c38
	if (ctx.cr6.lt) goto loc_823F6C38;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F6C38:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6c58
	if (ctx.cr6.lt) goto loc_823F6C58;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F6C58:
	// lwz r10,44(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6c78
	if (ctx.cr6.lt) goto loc_823F6C78;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F6C78:
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6c98
	if (ctx.cr6.lt) goto loc_823F6C98;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F6C98:
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6cb8
	if (ctx.cr6.lt) goto loc_823F6CB8;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F6CB8:
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6cd8
	if (ctx.cr6.lt) goto loc_823F6CD8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6CD8:
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6cf8
	if (ctx.cr6.lt) goto loc_823F6CF8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6CF8:
	// lwz r10,64(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6d18
	if (ctx.cr6.lt) goto loc_823F6D18;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6D18:
	// lwz r10,68(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6d38
	if (ctx.cr6.lt) goto loc_823F6D38;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6D38:
	// lwz r10,72(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6d58
	if (ctx.cr6.lt) goto loc_823F6D58;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6D58:
	// lwz r10,108(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6d78
	if (ctx.cr6.lt) goto loc_823F6D78;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6D78:
	// lwz r10,112(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6d98
	if (ctx.cr6.lt) goto loc_823F6D98;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6D98:
	// lwz r10,116(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6db8
	if (ctx.cr6.lt) goto loc_823F6DB8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6DB8:
	// lwz r10,120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6dd8
	if (ctx.cr6.lt) goto loc_823F6DD8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6DD8:
	// lwz r10,124(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6df8
	if (ctx.cr6.lt) goto loc_823F6DF8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6DF8:
	// lwz r10,128(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6e18
	if (ctx.cr6.lt) goto loc_823F6E18;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6E18:
	// lwz r10,132(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6e38
	if (ctx.cr6.lt) goto loc_823F6E38;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6E38:
	// lwz r10,136(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 136);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6e58
	if (ctx.cr6.lt) goto loc_823F6E58;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6E58:
	// lwz r10,172(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 172);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6e78
	if (ctx.cr6.lt) goto loc_823F6E78;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6E78:
	// lwz r10,176(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6e98
	if (ctx.cr6.lt) goto loc_823F6E98;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6E98:
	// lwz r10,180(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6eb8
	if (ctx.cr6.lt) goto loc_823F6EB8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6EB8:
	// lwz r10,184(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 184);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6ed8
	if (ctx.cr6.lt) goto loc_823F6ED8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6ED8:
	// lwz r10,188(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6ef8
	if (ctx.cr6.lt) goto loc_823F6EF8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6EF8:
	// lwz r10,192(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6f18
	if (ctx.cr6.lt) goto loc_823F6F18;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6F18:
	// lwz r10,196(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 196);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6f38
	if (ctx.cr6.lt) goto loc_823F6F38;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6F38:
	// lwz r10,200(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6f58
	if (ctx.cr6.lt) goto loc_823F6F58;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6F58:
	// lwz r10,236(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 236);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6f78
	if (ctx.cr6.lt) goto loc_823F6F78;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6F78:
	// lwz r10,240(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6f98
	if (ctx.cr6.lt) goto loc_823F6F98;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6F98:
	// lwz r10,244(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f6fb8
	if (ctx.cr6.lt) goto loc_823F6FB8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F6FB8:
	// addi r8,r8,256
	ctx.r8.s64 = ctx.r8.s64 + 256;
	// bdnz 0x823f6bb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F6BB8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// blt cr6,0x823f6fdc
	if (ctx.cr6.lt) goto loc_823F6FDC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_823F6FDC:
	// lwz r20,0(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x823f7448
	if (ctx.cr6.eq) goto loc_823F7448;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r30,r7,8
	ctx.r30.s64 = ctx.r7.s64 + 8;
	// ori r21,r10,37316
	ctx.r21.u64 = ctx.r10.u64 | 37316;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// ori r24,r9,37308
	ctx.r24.u64 = ctx.r9.u64 | 37308;
loc_823F7008:
	// bl 0x8223a960
	ctx.lr = 0x823F700C;
	sub_8223A960(ctx, base);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r27,r11,r21
	ctx.r27.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x823F7030;
	sub_822368B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7434
	if (ctx.cr6.eq) goto loc_823F7434;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82236510
	ctx.lr = 0x823F704C;
	sub_82236510(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7434
	if (ctx.cr6.eq) goto loc_823F7434;
	// addi r11,r29,4665
	ctx.r11.s64 = ctx.r29.s64 + 4665;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82164fb0
	ctx.lr = 0x823F706C;
	sub_82164FB0(ctx, base);
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f7094
	if (ctx.cr6.lt) goto loc_823F7094;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r9.u32);
loc_823F7094:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f70c0
	if (ctx.cr6.lt) goto loc_823F70C0;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823F70C0:
	// extsw r11,r14
	ctx.r11.s64 = ctx.r14.s32;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,204(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,208(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f7128
	if (ctx.cr6.lt) goto loc_823F7128;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r18.u32);
loc_823F7128:
	// lwz r3,-4392(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -4392);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r4,r31,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// bl 0x823e8a90
	ctx.lr = 0x823F7138;
	sub_823E8A90(ctx, base);
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r3.u32);
	// lwz r5,0(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,4(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,8(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f71f4
	if (ctx.cr6.lt) goto loc_823F71F4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r18.u32);
loc_823F71F4:
	// lwz r5,52(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F7204;
	sub_82106F58(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,4(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f10,128(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,8(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f6,136(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f72a8
	if (ctx.cr6.lt) goto loc_823F72A8;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r18.u32);
loc_823F72A8:
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r28
	ctx.r5.s64 = ctx.r28.s32;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82084038
	ctx.lr = 0x823F72C4;
	sub_82084038(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r29.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r18.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r9,4(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f10,152(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r6,8(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lfd f6,160(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f738c
	if (ctx.cr6.lt) goto loc_823F738C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r18.u32);
loc_823F738C:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lbz r4,32(r25)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + 32);
	// bl 0x823e8d60
	ctx.lr = 0x823F7398;
	sub_823E8D60(ctx, base);
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r3.u32);
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r5,0(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lfd f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lwz r9,4(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// lfd f10,176(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,8(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r3.u64);
	// lfd f6,184(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
loc_823F7434:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplw cr6,r23,r20
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x823f7008
	if (ctx.cr6.lt) goto loc_823F7008;
loc_823F7448:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7454"))) PPC_WEAK_FUNC(sub_823F7454);
PPC_FUNC_IMPL(__imp__sub_823F7454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F7458"))) PPC_WEAK_FUNC(sub_823F7458);
PPC_FUNC_IMPL(__imp__sub_823F7458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823F7460;
	sub_82248788(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,-28224
	ctx.r29.s64 = ctx.r29.s64 + -28224;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// ori r10,r11,37308
	ctx.r10.u64 = ctx.r11.u64 | 37308;
	// addi r28,r28,-28220
	ctx.r28.s64 = ctx.r28.s64 + -28220;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,8000
	ctx.r5.s64 = 8000;
	// lwzx r6,r3,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ee370
	ctx.lr = 0x823F7498;
	sub_823EE370(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r8,-32193
	ctx.r8.s64 = -2109800448;
	// addi r30,r30,-20220
	ctx.r30.s64 = ctx.r30.s64 + -20220;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32193
	ctx.r7.s64 = -2109800448;
	// addi r9,r8,-5816
	ctx.r9.s64 = ctx.r8.s64 + -5816;
	// lis r6,-32193
	ctx.r6.s64 = -2109800448;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r5,-32193
	ctx.r5.s64 = -2109800448;
	// lis r4,-32193
	ctx.r4.s64 = -2109800448;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r8,r7,-5640
	ctx.r8.s64 = ctx.r7.s64 + -5640;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r7,r6,-9560
	ctx.r7.s64 = ctx.r6.s64 + -9560;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r6,r5,-5400
	ctx.r6.s64 = ctx.r5.s64 + -5400;
	// addi r9,r4,-5232
	ctx.r9.s64 = ctx.r4.s64 + -5232;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x823cebb0
	ctx.lr = 0x823F7500;
	sub_823CEBB0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823F7518:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823f7518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F7518;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x823ee538
	ctx.lr = 0x823F7538;
	sub_823EE538(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f8990
	ctx.lr = 0x823F7544;
	sub_823F8990(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823F754C"))) PPC_WEAK_FUNC(sub_823F754C);
PPC_FUNC_IMPL(__imp__sub_823F754C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F7550"))) PPC_WEAK_FUNC(sub_823F7550);
PPC_FUNC_IMPL(__imp__sub_823F7550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823F7558;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r28,r28,-28324
	ctx.r28.s64 = ctx.r28.s64 + -28324;
	// addi r8,r11,-10256
	ctx.r8.s64 = ctx.r11.s64 + -10256;
	// addi r7,r10,-10392
	ctx.r7.s64 = ctx.r10.s64 + -10392;
	// addi r6,r9,-10404
	ctx.r6.s64 = ctx.r9.s64 + -10404;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f75a4
	if (ctx.cr0.lt) goto loc_823F75A4;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f75b4
	if (ctx.cr6.lt) goto loc_823F75B4;
loc_823F75A4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,37316
	ctx.r29.u64 = ctx.r11.u64 | 37316;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x823f75c8
	goto loc_823F75C8;
loc_823F75B4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r29,r10,37316
	ctx.r29.u64 = ctx.r10.u64 | 37316;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_823F75C8:
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823F75E0;
	sub_823E8918(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f75f8
	if (ctx.cr0.lt) goto loc_823F75F8;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f7600
	if (ctx.cr6.lt) goto loc_823F7600;
loc_823F75F8:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x823f760c
	goto loc_823F760C;
loc_823F7600:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_823F760C:
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x823e8918
	ctx.lr = 0x823F7620;
	sub_823E8918(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r10,r11,45316
	ctx.r10.u64 = ctx.r11.u64 | 45316;
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F763C;
	sub_823E8918(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r8,r9,37228
	ctx.r8.u64 = ctx.r9.u64 | 37228;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F7658;
	sub_823E8918(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r6,r7,37232
	ctx.r6.u64 = ctx.r7.u64 | 37232;
	// lwzx r6,r31,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F7674;
	sub_823E8918(ctx, base);
	// lwz r11,-4392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r30,r11,2744
	ctx.r30.s64 = ctx.r11.s64 + 2744;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823F768C;
	sub_82248A40(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r5,37312
	ctx.r11.u64 = ctx.r5.u64 | 37312;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x82248a40
	ctx.lr = 0x823F76AC;
	sub_82248A40(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823F76B0;
	sub_823C8E50(ctx, base);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4384(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d80
	ctx.lr = 0x823F76C4;
	sub_823E9D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed3e0
	ctx.lr = 0x823F76CC;
	sub_823ED3E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823F76D4"))) PPC_WEAK_FUNC(sub_823F76D4);
PPC_FUNC_IMPL(__imp__sub_823F76D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F76D8"))) PPC_WEAK_FUNC(sub_823F76D8);
PPC_FUNC_IMPL(__imp__sub_823F76D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823f7810
	sub_823F7810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F76E0"))) PPC_WEAK_FUNC(sub_823F76E0);
PPC_FUNC_IMPL(__imp__sub_823F76E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823f7810
	sub_823F7810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F76E8"))) PPC_WEAK_FUNC(sub_823F76E8);
PPC_FUNC_IMPL(__imp__sub_823F76E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,37284
	ctx.r10.u64 = ctx.r11.u64 | 37284;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addic. r4,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r4.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x823f771c
	if (!ctx.cr0.lt) goto loc_823F771C;
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
	// b 0x823f7728
	goto loc_823F7728;
loc_823F771C:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// blt cr6,0x823f7728
	if (ctx.cr6.lt) goto loc_823F7728;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_823F7728:
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f7458
	ctx.lr = 0x823F7734;
	sub_823F7458(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823F773C;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f7768
	if (ctx.cr6.eq) goto loc_823F7768;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,37280
	ctx.r9.u64 = ctx.r10.u64 | 37280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F7768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F7768:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f8b68
	ctx.lr = 0x823F7774;
	sub_823F8B68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x823F777C;
	sub_8209EDA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7794"))) PPC_WEAK_FUNC(sub_823F7794);
PPC_FUNC_IMPL(__imp__sub_823F7794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F7798"))) PPC_WEAK_FUNC(sub_823F7798);
PPC_FUNC_IMPL(__imp__sub_823F7798) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823f69b8
	ctx.lr = 0x823F77B0;
	sub_823F69B8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// li r9,13653
	ctx.r9.s64 = 13653;
	// ori r11,r11,37312
	ctx.r11.u64 = ctx.r11.u64 | 37312;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,13654
	ctx.r8.s64 = 13654;
	// li r7,15009
	ctx.r7.s64 = 15009;
	// li r6,13655
	ctx.r6.s64 = 13655;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r5,13656
	ctx.r5.s64 = 13656;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r4,489
	ctx.r4.s64 = 489;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82106f58
	ctx.lr = 0x823F77FC;
	sub_82106F58(ctx, base);
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

__attribute__((alias("__imp__sub_823F7810"))) PPC_WEAK_FUNC(sub_823F7810);
PPC_FUNC_IMPL(__imp__sub_823F7810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f7550
	ctx.lr = 0x823F7830;
	sub_823F7550(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f784c
	if (ctx.cr6.eq) goto loc_823F784C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823F7848;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823F784C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7864"))) PPC_WEAK_FUNC(sub_823F7864);
PPC_FUNC_IMPL(__imp__sub_823F7864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F7868"))) PPC_WEAK_FUNC(sub_823F7868);
PPC_FUNC_IMPL(__imp__sub_823F7868) {
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
	// bl 0x823f7798
	ctx.lr = 0x823F7880;
	sub_823F7798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823F7888;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823F789C"))) PPC_WEAK_FUNC(sub_823F789C);
PPC_FUNC_IMPL(__imp__sub_823F789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F78A0"))) PPC_WEAK_FUNC(sub_823F78A0);
PPC_FUNC_IMPL(__imp__sub_823F78A0) {
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
	// bl 0x823f7798
	ctx.lr = 0x823F78B8;
	sub_823F7798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf48
	ctx.lr = 0x823F78C0;
	sub_823EDF48(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823F78D4"))) PPC_WEAK_FUNC(sub_823F78D4);
PPC_FUNC_IMPL(__imp__sub_823F78D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F78D8"))) PPC_WEAK_FUNC(sub_823F78D8);
PPC_FUNC_IMPL(__imp__sub_823F78D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823F78E0;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,-784(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ebb58
	ctx.lr = 0x823F78F8;
	sub_821EBB58(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823F790C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f79f0
	if (ctx.cr6.eq) goto loc_823F79F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r10,35888
	ctx.r9.u64 = ctx.r10.u64 | 35888;
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwzx r29,r31,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F7934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x823f79f0
	if (!ctx.cr6.eq) goto loc_823F79F0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F7950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f79f0
	if (ctx.cr6.eq) goto loc_823F79F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ec830
	ctx.lr = 0x823F7960;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823f79f0
	if (!ctx.cr6.eq) goto loc_823F79F0;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,45336
	ctx.r8.u64 = ctx.r9.u64 | 45336;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// stw r10,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r10.u32);
	// lwzx r30,r31,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x82163df0
	ctx.lr = 0x823F7988;
	sub_82163DF0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x823f7998
	if (!ctx.cr6.lt) goto loc_823F7998;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x823f79ac
	goto loc_823F79AC;
loc_823F7998:
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r11,r11,51612
	ctx.r11.u64 = ctx.r11.u64 | 51612;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823f79ac
	if (!ctx.cr6.gt) goto loc_823F79AC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_823F79AC:
	// stw r30,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r30.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,45328
	ctx.r10.u64 = ctx.r11.u64 | 45328;
	// lwzx r30,r31,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82163df0
	ctx.lr = 0x823F79C0;
	sub_82163DF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82165a18
	ctx.lr = 0x823F79C8;
	sub_82165A18(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r8,r9,37312
	ctx.r8.u64 = ctx.r9.u64 | 37312;
	// lwzx r4,r31,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823f7458
	ctx.lr = 0x823F79DC;
	sub_823F7458(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f8b68
	ctx.lr = 0x823F79E8;
	sub_823F8B68(ctx, base);
	// li r3,10009
	ctx.r3.s64 = 10009;
	// bl 0x8208f658
	ctx.lr = 0x823F79F0;
	sub_8208F658(ctx, base);
loc_823F79F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f7798
	ctx.lr = 0x823F79F8;
	sub_823F7798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf68
	ctx.lr = 0x823F7A00;
	sub_823EDF68(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823F7A08"))) PPC_WEAK_FUNC(sub_823F7A08);
PPC_FUNC_IMPL(__imp__sub_823F7A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,832(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// addi r30,r30,-28228
	ctx.r30.s64 = ctx.r30.s64 + -28228;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,19268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19268, ctx.r11.u32);
	// lwz r7,832(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,15524(r6)
	PPC_STORE_U32(ctx.r6.u32 + 15524, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,-4392(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4392);
	// bl 0x823e89a0
	ctx.lr = 0x823F7A54;
	sub_823E89A0(ctx, base);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r11,r4,57564
	ctx.r11.u64 = ctx.r4.u64 | 57564;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823e97f0
	ctx.lr = 0x823F7A70;
	sub_823E97F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,482
	ctx.r4.s64 = 482;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F7A84;
	sub_82106F58(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,481
	ctx.r4.s64 = 481;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F7A94;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f7798
	ctx.lr = 0x823F7A9C;
	sub_823F7798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F7AB4"))) PPC_WEAK_FUNC(sub_823F7AB4);
PPC_FUNC_IMPL(__imp__sub_823F7AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F7AB8"))) PPC_WEAK_FUNC(sub_823F7AB8);
PPC_FUNC_IMPL(__imp__sub_823F7AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823F7AC0;
	sub_82248768(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823edb98
	ctx.lr = 0x823F7ACC;
	sub_823EDB98(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// ori r20,r11,37316
	ctx.r20.u64 = ctx.r11.u64 | 37316;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// addi r5,r5,-28292
	ctx.r5.s64 = ctx.r5.s64 + -28292;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// ori r4,r9,37312
	ctx.r4.u64 = ctx.r9.u64 | 37312;
	// addi r3,r8,-10256
	ctx.r3.s64 = ctx.r8.s64 + -10256;
	// addi r10,r10,-28228
	ctx.r10.s64 = ctx.r10.s64 + -28228;
	// addi r9,r7,-10392
	ctx.r9.s64 = ctx.r7.s64 + -10392;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r8,r6,-10404
	ctx.r8.s64 = ctx.r6.s64 + -10404;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r8.u32);
	// li r22,5
	ctx.r22.s64 = 5;
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// add r21,r31,r20
	ctx.r21.u64 = ctx.r31.u64 + ctx.r20.u64;
	// stw r29,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r29.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r29.u32);
	// addi r9,r21,-8
	ctx.r9.s64 = ctx.r21.s64 + -8;
	// stw r30,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r30.u32);
	// stw r29,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r29.u32);
	// stw r30,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r30.u32);
	// stw r29,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r29.u32);
	// stw r30,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r30.u32);
	// stw r29,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r29.u32);
	// stw r30,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r30.u32);
	// stw r29,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r29.u32);
	// stw r30,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, ctx.r30.u32);
	// stw r29,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r29.u32);
	// stw r30,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r30.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stwx r22,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r22.u32);
loc_823F7B7C:
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stwu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823f7b7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F7B7C;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-20220
	ctx.r28.s64 = ctx.r28.s64 + -20220;
	// addi r9,r9,-20216
	ctx.r9.s64 = ctx.r9.s64 + -20216;
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
	// li r8,133
	ctx.r8.s64 = 133;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r30,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r30.u32);
	// stw r30,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r6,r7,128
	ctx.r6.u64 = ctx.r7.u64 | 128;
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// stw r8,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r8.u32);
	// lwz r11,-4392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// lwz r5,2744(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2744);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r11,-4392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// lwz r4,2780(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2780);
	// bl 0x823f7458
	ctx.lr = 0x823F7BE4;
	sub_823F7458(ctx, base);
	// lwz r3,-4392(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x823e8958
	ctx.lr = 0x823F7BF8;
	sub_823E8958(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x823e8958
	ctx.lr = 0x823F7C0C;
	sub_823E8958(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x823e8958
	ctx.lr = 0x823F7C20;
	sub_823E8958(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x823e8958
	ctx.lr = 0x823F7C34;
	sub_823E8958(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823e8958
	ctx.lr = 0x823F7C48;
	sub_823E8958(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x823f7c70
	if (ctx.cr6.eq) goto loc_823F7C70;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x823f7c70
	if (ctx.cr6.eq) goto loc_823F7C70;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823f7c78
	if (ctx.cr6.eq) goto loc_823F7C78;
loc_823F7C70:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_823F7C78:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// bl 0x823ee538
	ctx.lr = 0x823F7CB0;
	sub_823EE538(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_823F7CB8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823f7cd0
	if (!ctx.cr6.eq) goto loc_823F7CD0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823f7ce4
	if (ctx.cr6.eq) goto loc_823F7CE4;
loc_823F7CD0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r29,1000
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1000, ctx.xer);
	// blt cr6,0x823f7cb8
	if (ctx.cr6.lt) goto loc_823F7CB8;
	// b 0x823f7d30
	goto loc_823F7D30;
loc_823F7CE4:
	// add r11,r24,r25
	ctx.r11.u64 = ctx.r24.u64 + ctx.r25.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823f7d30
	if (ctx.cr6.eq) goto loc_823F7D30;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee538
	ctx.lr = 0x823F7D04;
	sub_823EE538(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x823f7d30
	if (!ctx.cr6.gt) goto loc_823F7D30;
loc_823F7D0C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee560
	ctx.lr = 0x823F7D28;
	sub_823EE560(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823f7d0c
	if (!ctx.cr0.eq) goto loc_823F7D0C;
loc_823F7D30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823F7D50;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f7a08
	ctx.lr = 0x823F7D58;
	sub_823F7A08(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823F7D60;
	sub_823C8DF0(ctx, base);
	// bl 0x8223a960
	ctx.lr = 0x823F7D64;
	sub_8223A960(ctx, base);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addi r9,r9,-28324
	ctx.r9.s64 = ctx.r9.s64 + -28324;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f7d84
	if (ctx.cr0.lt) goto loc_823F7D84;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f7d8c
	if (ctx.cr6.lt) goto loc_823F7D8C;
loc_823F7D84:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x823f7d98
	goto loc_823F7D98;
loc_823F7D8C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_823F7D98:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x823f7db0
	if (!ctx.cr6.eq) goto loc_823F7DB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb380
	ctx.lr = 0x823F7DAC;
	sub_821EB380(ctx, base);
	// b 0x823f7dc4
	goto loc_823F7DC4;
loc_823F7DB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822368b0
	ctx.lr = 0x823F7DB8;
	sub_822368B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x821eb290
	ctx.lr = 0x823F7DC4;
	sub_821EB290(ctx, base);
loc_823F7DC4:
	// li r4,480
	ctx.r4.s64 = 480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823F7DD0;
	sub_823CDF48(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r11,r11,9536
	ctx.r11.s64 = ctx.r11.s64 + 9536;
	// addi r30,r11,-12
	ctx.r30.s64 = ctx.r11.s64 + -12;
loc_823F7DE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x823cdf48
	ctx.lr = 0x823F7DEC;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,64(r30)
	ea = 64 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x823cdf48
	ctx.lr = 0x823F7DF8;
	sub_823CDF48(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823f7de0
	if (!ctx.cr0.eq) goto loc_823F7DE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823F7E0C"))) PPC_WEAK_FUNC(sub_823F7E0C);
PPC_FUNC_IMPL(__imp__sub_823F7E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F7E10"))) PPC_WEAK_FUNC(sub_823F7E10);
PPC_FUNC_IMPL(__imp__sub_823F7E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,45288
	ctx.r10.u64 = ctx.r11.u64 | 45288;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823f7e2c
	if (!ctx.cr6.eq) goto loc_823F7E2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823F7E2C:
	// b 0x823cd040
	sub_823CD040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7E30"))) PPC_WEAK_FUNC(sub_823F7E30);
PPC_FUNC_IMPL(__imp__sub_823F7E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823F7E38;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,-28
	ctx.r31.s64 = ctx.r3.s64 + -28;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r10,r10,-28324
	ctx.r10.s64 = ctx.r10.s64 + -28324;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f7e64
	if (ctx.cr0.lt) goto loc_823F7E64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f7e6c
	if (ctx.cr6.lt) goto loc_823F7E6C;
loc_823F7E64:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// b 0x823f7e78
	goto loc_823F7E78;
loc_823F7E6C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
loc_823F7E78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r29,-28256
	ctx.r29.s64 = ctx.r29.s64 + -28256;
	// addi r30,r30,-28220
	ctx.r30.s64 = ctx.r30.s64 + -28220;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F7E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823f7ee4
	if (ctx.cr6.eq) goto loc_823F7EE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F7EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,112(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F7EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F7EE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823F7EEC"))) PPC_WEAK_FUNC(sub_823F7EEC);
PPC_FUNC_IMPL(__imp__sub_823F7EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F7EF0"))) PPC_WEAK_FUNC(sub_823F7EF0);
PPC_FUNC_IMPL(__imp__sub_823F7EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823F7EF8;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r17,-32177
	ctx.r17.s64 = -2108751872;
	// addis r16,r3,1
	ctx.r16.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r16,r16,-28324
	ctx.r16.s64 = ctx.r16.s64 + -28324;
	// lwz r15,-4392(r17)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r17.u32 + -4392);
	// bl 0x82163df0
	ctx.lr = 0x823F7F18;
	sub_82163DF0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x823F7F24;
	sub_8218B408(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823F7F30;
	sub_8218B408(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x823c3280
	ctx.lr = 0x823F7F3C;
	sub_823C3280(ctx, base);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r8,r8,-28308
	ctx.r8.s64 = ctx.r8.s64 + -28308;
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// ori r5,r7,37256
	ctx.r5.u64 = ctx.r7.u64 | 37256;
	// addi r22,r22,-28288
	ctx.r22.s64 = ctx.r22.s64 + -28288;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r6,37264
	ctx.r10.u64 = ctx.r6.u64 | 37264;
	// cntlzw r7,r4
	ctx.r7.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// ori r6,r9,37272
	ctx.r6.u64 = ctx.r9.u64 | 37272;
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r4,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r4.u32);
	// lis r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// ori r4,r9,37280
	ctx.r4.u64 = ctx.r9.u64 | 37280;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r26,r30,37304
	ctx.r26.u64 = ctx.r30.u64 | 37304;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// ori r27,r5,37296
	ctx.r27.u64 = ctx.r5.u64 | 37296;
	// rlwinm r5,r9,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// stwx r5,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r5.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r30,r9,-4288
	ctx.r30.s64 = ctx.r9.s64 + -4288;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// ori r7,r7,37288
	ctx.r7.u64 = ctx.r7.u64 | 37288;
	// stwx r5,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r29,r10,26232
	ctx.r29.s64 = ctx.r10.s64 + 26232;
	// stwx r6,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r11,-5
	ctx.r9.s64 = ctx.r11.s64 + -5;
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r28,r28,-20220
	ctx.r28.s64 = ctx.r28.s64 + -20220;
	// stwx r4,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r11,-6
	ctx.r3.s64 = ctx.r11.s64 + -6;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r10,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r11,-7
	ctx.r9.s64 = ctx.r11.s64 + -7;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stwx r7,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r7.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8218a5f0
	ctx.lr = 0x823F8054;
	sub_8218A5F0(ctx, base);
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r3,r5,26840
	ctx.r3.u64 = ctx.r5.u64 | 26840;
	// ori r11,r4,26860
	ctx.r11.u64 = ctx.r4.u64 | 26860;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// li r18,0
	ctx.r18.s64 = 0;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r18,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r18.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823f8094
	if (!ctx.cr6.eq) goto loc_823F8094;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// b 0x823f80a4
	goto loc_823F80A4;
loc_823F8094:
	// lwz r10,20(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r11,16(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
loc_823F80A4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8218a5f0
	ctx.lr = 0x823F80B4;
	sub_8218A5F0(ctx, base);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,26328
	ctx.r9.u64 = ctx.r11.u64 | 26328;
	// ori r6,r10,26348
	ctx.r6.u64 = ctx.r10.u64 | 26348;
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// addi r7,r10,10048
	ctx.r7.s64 = ctx.r10.s64 + 10048;
	// stwx r30,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// stwx r18,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r18.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_823F80F0:
	// lwz r10,-8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8110
	if (ctx.cr6.lt) goto loc_823F8110;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F8110:
	// lwz r10,-4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8130
	if (ctx.cr6.lt) goto loc_823F8130;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F8130:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8150
	if (ctx.cr6.lt) goto loc_823F8150;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F8150:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8170
	if (ctx.cr6.lt) goto loc_823F8170;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F8170:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8190
	if (ctx.cr6.lt) goto loc_823F8190;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F8190:
	// lwz r10,44(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f81b0
	if (ctx.cr6.lt) goto loc_823F81B0;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F81B0:
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f81d0
	if (ctx.cr6.lt) goto loc_823F81D0;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F81D0:
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f81f0
	if (ctx.cr6.lt) goto loc_823F81F0;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823F81F0:
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8210
	if (ctx.cr6.lt) goto loc_823F8210;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8210:
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8230
	if (ctx.cr6.lt) goto loc_823F8230;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8230:
	// lwz r10,64(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8250
	if (ctx.cr6.lt) goto loc_823F8250;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8250:
	// lwz r10,68(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8270
	if (ctx.cr6.lt) goto loc_823F8270;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8270:
	// lwz r10,72(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8290
	if (ctx.cr6.lt) goto loc_823F8290;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8290:
	// lwz r10,108(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f82b0
	if (ctx.cr6.lt) goto loc_823F82B0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F82B0:
	// lwz r10,112(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f82d0
	if (ctx.cr6.lt) goto loc_823F82D0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F82D0:
	// lwz r10,116(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f82f0
	if (ctx.cr6.lt) goto loc_823F82F0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F82F0:
	// lwz r10,120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8310
	if (ctx.cr6.lt) goto loc_823F8310;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8310:
	// lwz r10,124(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8330
	if (ctx.cr6.lt) goto loc_823F8330;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8330:
	// lwz r10,128(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8350
	if (ctx.cr6.lt) goto loc_823F8350;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8350:
	// lwz r10,132(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8370
	if (ctx.cr6.lt) goto loc_823F8370;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8370:
	// lwz r10,136(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 136);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8390
	if (ctx.cr6.lt) goto loc_823F8390;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8390:
	// lwz r10,172(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 172);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f83b0
	if (ctx.cr6.lt) goto loc_823F83B0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F83B0:
	// lwz r10,176(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f83d0
	if (ctx.cr6.lt) goto loc_823F83D0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F83D0:
	// lwz r10,180(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f83f0
	if (ctx.cr6.lt) goto loc_823F83F0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F83F0:
	// lwz r10,184(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 184);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8410
	if (ctx.cr6.lt) goto loc_823F8410;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8410:
	// lwz r10,188(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8430
	if (ctx.cr6.lt) goto loc_823F8430;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8430:
	// lwz r10,192(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8450
	if (ctx.cr6.lt) goto loc_823F8450;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8450:
	// lwz r10,196(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 196);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8470
	if (ctx.cr6.lt) goto loc_823F8470;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8470:
	// lwz r10,200(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f8490
	if (ctx.cr6.lt) goto loc_823F8490;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F8490:
	// lwz r10,236(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 236);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f84b0
	if (ctx.cr6.lt) goto loc_823F84B0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F84B0:
	// lwz r10,240(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f84d0
	if (ctx.cr6.lt) goto loc_823F84D0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F84D0:
	// lwz r10,244(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f84f0
	if (ctx.cr6.lt) goto loc_823F84F0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823F84F0:
	// addi r8,r8,256
	ctx.r8.s64 = ctx.r8.s64 + 256;
	// bdnz 0x823f80f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F80F0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// blt cr6,0x823f8514
	if (ctx.cr6.lt) goto loc_823F8514;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_823F8514:
	// lwz r20,0(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x823f8980
	if (ctx.cr6.eq) goto loc_823F8980;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r30,r7,8
	ctx.r30.s64 = ctx.r7.s64 + 8;
	// ori r21,r10,37316
	ctx.r21.u64 = ctx.r10.u64 | 37316;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// ori r24,r9,37308
	ctx.r24.u64 = ctx.r9.u64 | 37308;
loc_823F8540:
	// bl 0x8223a960
	ctx.lr = 0x823F8544;
	sub_8223A960(ctx, base);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r27,r11,r21
	ctx.r27.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x823F8568;
	sub_822368B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f896c
	if (ctx.cr6.eq) goto loc_823F896C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82236510
	ctx.lr = 0x823F8584;
	sub_82236510(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f896c
	if (ctx.cr6.eq) goto loc_823F896C;
	// addi r11,r29,4665
	ctx.r11.s64 = ctx.r29.s64 + 4665;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82164fb0
	ctx.lr = 0x823F85A4;
	sub_82164FB0(ctx, base);
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f85cc
	if (ctx.cr6.lt) goto loc_823F85CC;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r9.u32);
loc_823F85CC:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f85f8
	if (ctx.cr6.lt) goto loc_823F85F8;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823F85F8:
	// extsw r11,r14
	ctx.r11.s64 = ctx.r14.s32;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,204(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,208(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f8660
	if (ctx.cr6.lt) goto loc_823F8660;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r18.u32);
loc_823F8660:
	// lwz r3,-4392(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + -4392);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r4,r31,r24
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// bl 0x823e8a90
	ctx.lr = 0x823F8670;
	sub_823E8A90(ctx, base);
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r3.u32);
	// lwz r5,0(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,4(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,8(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f872c
	if (ctx.cr6.lt) goto loc_823F872C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r18.u32);
loc_823F872C:
	// lwz r5,52(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F873C;
	sub_82106F58(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,4(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f10,128(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,8(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f6,136(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f87e0
	if (ctx.cr6.lt) goto loc_823F87E0;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r18.u32);
loc_823F87E0:
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r28
	ctx.r5.s64 = ctx.r28.s32;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82084038
	ctx.lr = 0x823F87FC;
	sub_82084038(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r29.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r18.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r9,4(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f10,152(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r6,8(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lfd f6,160(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f88c4
	if (ctx.cr6.lt) goto loc_823F88C4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r18.u32);
loc_823F88C4:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lbz r4,32(r25)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + 32);
	// bl 0x823e8d60
	ctx.lr = 0x823F88D0;
	sub_823E8D60(ctx, base);
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r3.u32);
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r5,0(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lfd f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lwz r9,4(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// lfd f10,176(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,8(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r3.u64);
	// lfd f6,184(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
loc_823F896C:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplw cr6,r23,r20
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x823f8540
	if (ctx.cr6.lt) goto loc_823F8540;
loc_823F8980:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F898C"))) PPC_WEAK_FUNC(sub_823F898C);
PPC_FUNC_IMPL(__imp__sub_823F898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8990"))) PPC_WEAK_FUNC(sub_823F8990);
PPC_FUNC_IMPL(__imp__sub_823F8990) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823f8a48
	if (ctx.cr6.eq) goto loc_823F8A48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ca688
	ctx.lr = 0x823F89B4;
	sub_823CA688(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,37308
	ctx.r10.u64 = ctx.r11.u64 | 37308;
	// lwz r8,132(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 132);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bctrl 
	ctx.lr = 0x823F89D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r7,r7,-28324
	ctx.r7.s64 = ctx.r7.s64 + -28324;
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f89fc
	if (ctx.cr0.lt) goto loc_823F89FC;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f8a04
	if (ctx.cr6.lt) goto loc_823F8A04;
loc_823F89FC:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// b 0x823f8a10
	goto loc_823F8A10;
loc_823F8A04:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
loc_823F8A10:
	// addi r11,r11,-28220
	ctx.r11.s64 = ctx.r11.s64 + -28220;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,-4384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d10
	ctx.lr = 0x823F8A34;
	sub_823E9D10(ctx, base);
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
loc_823F8A48:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d80
	ctx.lr = 0x823F8A5C;
	sub_823E9D80(ctx, base);
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

__attribute__((alias("__imp__sub_823F8A70"))) PPC_WEAK_FUNC(sub_823F8A70);
PPC_FUNC_IMPL(__imp__sub_823F8A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823F8A78;
	sub_82248788(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,-28224
	ctx.r29.s64 = ctx.r29.s64 + -28224;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// ori r10,r11,37308
	ctx.r10.u64 = ctx.r11.u64 | 37308;
	// addi r28,r28,-28220
	ctx.r28.s64 = ctx.r28.s64 + -28220;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,8000
	ctx.r5.s64 = 8000;
	// lwzx r6,r3,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ee228
	ctx.lr = 0x823F8AB0;
	sub_823EE228(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r8,-32193
	ctx.r8.s64 = -2109800448;
	// addi r30,r30,-20220
	ctx.r30.s64 = ctx.r30.s64 + -20220;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32193
	ctx.r7.s64 = -2109800448;
	// addi r9,r8,-5816
	ctx.r9.s64 = ctx.r8.s64 + -5816;
	// lis r6,-32193
	ctx.r6.s64 = -2109800448;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r5,-32193
	ctx.r5.s64 = -2109800448;
	// lis r4,-32193
	ctx.r4.s64 = -2109800448;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r8,r7,-5640
	ctx.r8.s64 = ctx.r7.s64 + -5640;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r7,r6,-9560
	ctx.r7.s64 = ctx.r6.s64 + -9560;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r6,r5,-5400
	ctx.r6.s64 = ctx.r5.s64 + -5400;
	// addi r9,r4,-5232
	ctx.r9.s64 = ctx.r4.s64 + -5232;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x823cebb0
	ctx.lr = 0x823F8B18;
	sub_823CEBB0(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823F8B30:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823f8b30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F8B30;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x823ee538
	ctx.lr = 0x823F8B50;
	sub_823EE538(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f8990
	ctx.lr = 0x823F8B5C;
	sub_823F8990(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823F8B64"))) PPC_WEAK_FUNC(sub_823F8B64);
PPC_FUNC_IMPL(__imp__sub_823F8B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8B68"))) PPC_WEAK_FUNC(sub_823F8B68);
PPC_FUNC_IMPL(__imp__sub_823F8B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8223a960
	ctx.lr = 0x823F8B88;
	sub_8223A960(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f8ba8
	if (ctx.cr0.lt) goto loc_823F8BA8;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f8bb0
	if (ctx.cr6.lt) goto loc_823F8BB0;
loc_823F8BA8:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// b 0x823f8bbc
	goto loc_823F8BBC;
loc_823F8BB0:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
loc_823F8BBC:
	// addi r11,r11,-28220
	ctx.r11.s64 = ctx.r11.s64 + -28220;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x823f8bd8
	if (!ctx.cr6.eq) goto loc_823F8BD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821eb380
	ctx.lr = 0x823F8BD4;
	sub_821EB380(ctx, base);
	// b 0x823f8bec
	goto loc_823F8BEC;
loc_823F8BD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822368b0
	ctx.lr = 0x823F8BE0;
	sub_822368B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x821eb290
	ctx.lr = 0x823F8BEC;
	sub_821EB290(ctx, base);
loc_823F8BEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8C04"))) PPC_WEAK_FUNC(sub_823F8C04);
PPC_FUNC_IMPL(__imp__sub_823F8C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8C08"))) PPC_WEAK_FUNC(sub_823F8C08);
PPC_FUNC_IMPL(__imp__sub_823F8C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823F8C10;
	sub_82248774(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163e58
	ctx.lr = 0x823F8C2C;
	sub_82163E58(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x823F8C30;
	sub_82163DF0(ctx, base);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r9,r9,-28324
	ctx.r9.s64 = ctx.r9.s64 + -28324;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f8c54
	if (ctx.cr0.lt) goto loc_823F8C54;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f8c5c
	if (ctx.cr6.lt) goto loc_823F8C5C;
loc_823F8C54:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// b 0x823f8c68
	goto loc_823F8C68;
loc_823F8C5C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
loc_823F8C68:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-28220
	ctx.r30.s64 = ctx.r30.s64 + -28220;
	// addi r28,r28,-28228
	ctx.r28.s64 = ctx.r28.s64 + -28228;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8223a960
	ctx.lr = 0x823F8C80;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x822368d8
	ctx.lr = 0x823F8C90;
	sub_822368D8(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r24,52(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r10,r10,-20216
	ctx.r10.s64 = ctx.r10.s64 + -20216;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r9,45324
	ctx.r7.u64 = ctx.r9.u64 | 45324;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// ori r6,r8,45328
	ctx.r6.u64 = ctx.r8.u64 | 45328;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r29,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r29.u32);
	// stw r29,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r29.u32);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwx r4,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82164fb0
	ctx.lr = 0x823F8CEC;
	sub_82164FB0(ctx, base);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addi r27,r27,-20204
	ctx.r27.s64 = ctx.r27.s64 + -20204;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// lwz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// add. r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823f8d0c
	if (!ctx.cr0.lt) goto loc_823F8D0C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x823f8d20
	goto loc_823F8D20;
loc_823F8D0C:
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51612
	ctx.r10.u64 = ctx.r10.u64 | 51612;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823f8d20
	if (!ctx.cr6.gt) goto loc_823F8D20;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823F8D20:
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r25,r25,-20200
	ctx.r25.s64 = ctx.r25.s64 + -20200;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bl 0x821ebb58
	ctx.lr = 0x823F8D34;
	sub_821EBB58(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x823f8e20
	if (!ctx.cr6.eq) goto loc_823F8E20;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// li r10,30233
	ctx.r10.s64 = 30233;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r8,-28364
	ctx.r8.s64 = ctx.r8.s64 + -28364;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823F8D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r4,3708
	ctx.r5.s64 = ctx.r4.s64 + 3708;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29644
	ctx.r3.s64 = ctx.r3.s64 + -29644;
	// bl 0x8218a5f0
	ctx.lr = 0x823F8D98;
	sub_8218A5F0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82164eb0
	ctx.lr = 0x823F8DA8;
	sub_82164EB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,26232
	ctx.r5.s64 = ctx.r11.s64 + 26232;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29516
	ctx.r3.s64 = ctx.r3.s64 + -29516;
	// bl 0x8218a5f0
	ctx.lr = 0x823F8DC4;
	sub_8218A5F0(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29388
	ctx.r3.s64 = ctx.r3.s64 + -29388;
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// bl 0x82084038
	ctx.lr = 0x823F8DE4;
	sub_82084038(ctx, base);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29260
	ctx.r3.s64 = ctx.r3.s64 + -29260;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// bl 0x82084038
	ctx.lr = 0x823F8E04;
	sub_82084038(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,148(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823F8E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F8E20:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823F8E28"))) PPC_WEAK_FUNC(sub_823F8E28);
PPC_FUNC_IMPL(__imp__sub_823F8E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823F8E30;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r28,r28,-28324
	ctx.r28.s64 = ctx.r28.s64 + -28324;
	// addi r8,r11,-9944
	ctx.r8.s64 = ctx.r11.s64 + -9944;
	// addi r7,r10,-10080
	ctx.r7.s64 = ctx.r10.s64 + -10080;
	// addi r6,r9,-10092
	ctx.r6.s64 = ctx.r9.s64 + -10092;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f8e7c
	if (ctx.cr0.lt) goto loc_823F8E7C;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f8e8c
	if (ctx.cr6.lt) goto loc_823F8E8C;
loc_823F8E7C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,37316
	ctx.r29.u64 = ctx.r11.u64 | 37316;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x823f8ea0
	goto loc_823F8EA0;
loc_823F8E8C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r29,r10,37316
	ctx.r29.u64 = ctx.r10.u64 | 37316;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_823F8EA0:
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823F8EB8;
	sub_823E8918(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f8ed0
	if (ctx.cr0.lt) goto loc_823F8ED0;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f8ed8
	if (ctx.cr6.lt) goto loc_823F8ED8;
loc_823F8ED0:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x823f8ee4
	goto loc_823F8EE4;
loc_823F8ED8:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_823F8EE4:
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x823e8918
	ctx.lr = 0x823F8EF8;
	sub_823E8918(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r10,r11,45316
	ctx.r10.u64 = ctx.r11.u64 | 45316;
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F8F14;
	sub_823E8918(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r8,r9,37228
	ctx.r8.u64 = ctx.r9.u64 | 37228;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F8F30;
	sub_823E8918(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r6,r7,37232
	ctx.r6.u64 = ctx.r7.u64 | 37232;
	// lwzx r6,r31,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F8F4C;
	sub_823E8918(ctx, base);
	// lwz r11,-4392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r30,r11,2744
	ctx.r30.s64 = ctx.r11.s64 + 2744;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823F8F64;
	sub_82248A40(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r5,37312
	ctx.r11.u64 = ctx.r5.u64 | 37312;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82248a40
	ctx.lr = 0x823F8F84;
	sub_82248A40(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823F8F88;
	sub_823C8E50(ctx, base);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4384(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d80
	ctx.lr = 0x823F8F9C;
	sub_823E9D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed3e0
	ctx.lr = 0x823F8FA4;
	sub_823ED3E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823F8FAC"))) PPC_WEAK_FUNC(sub_823F8FAC);
PPC_FUNC_IMPL(__imp__sub_823F8FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8FB0"))) PPC_WEAK_FUNC(sub_823F8FB0);
PPC_FUNC_IMPL(__imp__sub_823F8FB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823f9180
	sub_823F9180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8FB8"))) PPC_WEAK_FUNC(sub_823F8FB8);
PPC_FUNC_IMPL(__imp__sub_823F8FB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823f9180
	sub_823F9180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8FC0"))) PPC_WEAK_FUNC(sub_823F8FC0);
PPC_FUNC_IMPL(__imp__sub_823F8FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,37284
	ctx.r10.u64 = ctx.r11.u64 | 37284;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addic. r4,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r4.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x823f8ff4
	if (!ctx.cr0.lt) goto loc_823F8FF4;
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
	// b 0x823f9000
	goto loc_823F9000;
loc_823F8FF4:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// blt cr6,0x823f9000
	if (ctx.cr6.lt) goto loc_823F9000;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_823F9000:
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f8a70
	ctx.lr = 0x823F900C;
	sub_823F8A70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823F9014;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f9040
	if (ctx.cr6.eq) goto loc_823F9040;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,37280
	ctx.r9.u64 = ctx.r10.u64 | 37280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F9040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F9040:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f8b68
	ctx.lr = 0x823F904C;
	sub_823F8B68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x823F9054;
	sub_8209EDA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F906C"))) PPC_WEAK_FUNC(sub_823F906C);
PPC_FUNC_IMPL(__imp__sub_823F906C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9070"))) PPC_WEAK_FUNC(sub_823F9070);
PPC_FUNC_IMPL(__imp__sub_823F9070) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823f8c08
	sub_823F8C08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F907C"))) PPC_WEAK_FUNC(sub_823F907C);
PPC_FUNC_IMPL(__imp__sub_823F907C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9080"))) PPC_WEAK_FUNC(sub_823F9080);
PPC_FUNC_IMPL(__imp__sub_823F9080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ede10
	ctx.lr = 0x823F909C;
	sub_823EDE10(ctx, base);
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f8b68
	ctx.lr = 0x823F90AC;
	sub_823F8B68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f8990
	ctx.lr = 0x823F90B8;
	sub_823F8990(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823F90C0;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f90ec
	if (ctx.cr6.eq) goto loc_823F90EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,37280
	ctx.r9.u64 = ctx.r10.u64 | 37280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F90EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F90EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9104"))) PPC_WEAK_FUNC(sub_823F9104);
PPC_FUNC_IMPL(__imp__sub_823F9104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9108"))) PPC_WEAK_FUNC(sub_823F9108);
PPC_FUNC_IMPL(__imp__sub_823F9108) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823f7ef0
	ctx.lr = 0x823F9120;
	sub_823F7EF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// li r9,13653
	ctx.r9.s64 = 13653;
	// ori r11,r11,37312
	ctx.r11.u64 = ctx.r11.u64 | 37312;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,13654
	ctx.r8.s64 = 13654;
	// li r7,15009
	ctx.r7.s64 = 15009;
	// li r6,13655
	ctx.r6.s64 = 13655;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r5,13656
	ctx.r5.s64 = 13656;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r4,364
	ctx.r4.s64 = 364;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82106f58
	ctx.lr = 0x823F916C;
	sub_82106F58(ctx, base);
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

__attribute__((alias("__imp__sub_823F9180"))) PPC_WEAK_FUNC(sub_823F9180);
PPC_FUNC_IMPL(__imp__sub_823F9180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f8e28
	ctx.lr = 0x823F91A0;
	sub_823F8E28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f91bc
	if (ctx.cr6.eq) goto loc_823F91BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823F91B8;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823F91BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F91D4"))) PPC_WEAK_FUNC(sub_823F91D4);
PPC_FUNC_IMPL(__imp__sub_823F91D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F91D8"))) PPC_WEAK_FUNC(sub_823F91D8);
PPC_FUNC_IMPL(__imp__sub_823F91D8) {
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
	// bl 0x823f9108
	ctx.lr = 0x823F91F0;
	sub_823F9108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823F91F8;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823F920C"))) PPC_WEAK_FUNC(sub_823F920C);
PPC_FUNC_IMPL(__imp__sub_823F920C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9210"))) PPC_WEAK_FUNC(sub_823F9210);
PPC_FUNC_IMPL(__imp__sub_823F9210) {
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
	// bl 0x823f9108
	ctx.lr = 0x823F9228;
	sub_823F9108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf48
	ctx.lr = 0x823F9230;
	sub_823EDF48(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823F9244"))) PPC_WEAK_FUNC(sub_823F9244);
PPC_FUNC_IMPL(__imp__sub_823F9244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9248"))) PPC_WEAK_FUNC(sub_823F9248);
PPC_FUNC_IMPL(__imp__sub_823F9248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823F9250;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,-784(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ebb58
	ctx.lr = 0x823F9268;
	sub_821EBB58(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823F927C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f9394
	if (ctx.cr6.eq) goto loc_823F9394;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r10,35888
	ctx.r9.u64 = ctx.r10.u64 | 35888;
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwzx r29,r31,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F92A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x823f9394
	if (!ctx.cr6.eq) goto loc_823F9394;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F92C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f9394
	if (ctx.cr6.eq) goto loc_823F9394;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ec830
	ctx.lr = 0x823F92D0;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823f9394
	if (!ctx.cr6.eq) goto loc_823F9394;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,45336
	ctx.r8.u64 = ctx.r9.u64 | 45336;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// stw r10,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r10.u32);
	// lwzx r30,r31,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x82163df0
	ctx.lr = 0x823F92F8;
	sub_82163DF0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x823f9308
	if (!ctx.cr6.lt) goto loc_823F9308;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x823f931c
	goto loc_823F931C;
loc_823F9308:
	// lis r11,15258
	ctx.r11.s64 = 999948288;
	// ori r11,r11,51612
	ctx.r11.u64 = ctx.r11.u64 | 51612;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823f931c
	if (!ctx.cr6.gt) goto loc_823F931C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_823F931C:
	// stw r30,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r30.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,45328
	ctx.r10.u64 = ctx.r11.u64 | 45328;
	// lwzx r30,r31,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82163df0
	ctx.lr = 0x823F9330;
	sub_82163DF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82165a18
	ctx.lr = 0x823F9338;
	sub_82165A18(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r8,r9,37312
	ctx.r8.u64 = ctx.r9.u64 | 37312;
	// lwzx r4,r31,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823f8a70
	ctx.lr = 0x823F934C;
	sub_823F8A70(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f8b68
	ctx.lr = 0x823F9358;
	sub_823F8B68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823F9360;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823f938c
	if (ctx.cr6.eq) goto loc_823F938C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,37308
	ctx.r9.u64 = ctx.r10.u64 | 37308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823F938C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F938C:
	// li r3,10009
	ctx.r3.s64 = 10009;
	// bl 0x8208f658
	ctx.lr = 0x823F9394;
	sub_8208F658(ctx, base);
loc_823F9394:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f9108
	ctx.lr = 0x823F939C;
	sub_823F9108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf68
	ctx.lr = 0x823F93A4;
	sub_823EDF68(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823F93AC"))) PPC_WEAK_FUNC(sub_823F93AC);
PPC_FUNC_IMPL(__imp__sub_823F93AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F93B0"))) PPC_WEAK_FUNC(sub_823F93B0);
PPC_FUNC_IMPL(__imp__sub_823F93B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,832(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// addi r30,r30,-28228
	ctx.r30.s64 = ctx.r30.s64 + -28228;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,14228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14228, ctx.r11.u32);
	// lwz r7,832(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,15524(r6)
	PPC_STORE_U32(ctx.r6.u32 + 15524, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,-4392(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4392);
	// bl 0x823e89a0
	ctx.lr = 0x823F93FC;
	sub_823E89A0(ctx, base);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r11,r4,25308
	ctx.r11.u64 = ctx.r4.u64 | 25308;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823e97f0
	ctx.lr = 0x823F9418;
	sub_823E97F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,356
	ctx.r4.s64 = 356;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F942C;
	sub_82106F58(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,355
	ctx.r4.s64 = 355;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F943C;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f9108
	ctx.lr = 0x823F9444;
	sub_823F9108(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F945C"))) PPC_WEAK_FUNC(sub_823F945C);
PPC_FUNC_IMPL(__imp__sub_823F945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9460"))) PPC_WEAK_FUNC(sub_823F9460);
PPC_FUNC_IMPL(__imp__sub_823F9460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823F9468;
	sub_82248768(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823edb98
	ctx.lr = 0x823F9474;
	sub_823EDB98(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// ori r20,r11,37316
	ctx.r20.u64 = ctx.r11.u64 | 37316;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// addi r5,r5,-28292
	ctx.r5.s64 = ctx.r5.s64 + -28292;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// ori r4,r9,37312
	ctx.r4.u64 = ctx.r9.u64 | 37312;
	// addi r3,r8,-9944
	ctx.r3.s64 = ctx.r8.s64 + -9944;
	// addi r10,r10,-28228
	ctx.r10.s64 = ctx.r10.s64 + -28228;
	// addi r9,r7,-10080
	ctx.r9.s64 = ctx.r7.s64 + -10080;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r8,r6,-10092
	ctx.r8.s64 = ctx.r6.s64 + -10092;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r8.u32);
	// li r22,5
	ctx.r22.s64 = 5;
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// add r21,r31,r20
	ctx.r21.u64 = ctx.r31.u64 + ctx.r20.u64;
	// stw r29,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r29.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r29.u32);
	// addi r9,r21,-8
	ctx.r9.s64 = ctx.r21.s64 + -8;
	// stw r30,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r30.u32);
	// stw r29,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r29.u32);
	// stw r30,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r30.u32);
	// stw r29,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r29.u32);
	// stw r30,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r30.u32);
	// stw r29,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r29.u32);
	// stw r30,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r30.u32);
	// stw r29,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r29.u32);
	// stw r30,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, ctx.r30.u32);
	// stw r29,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r29.u32);
	// stw r30,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r30.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stwx r22,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r22.u32);
loc_823F9524:
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// stwu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823f9524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F9524;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,-20220
	ctx.r28.s64 = ctx.r28.s64 + -20220;
	// addi r9,r9,-20216
	ctx.r9.s64 = ctx.r9.s64 + -20216;
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
	// li r8,131
	ctx.r8.s64 = 131;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r30,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r30.u32);
	// stw r30,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r6,r7,192
	ctx.r6.u64 = ctx.r7.u64 | 192;
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// stw r8,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r8.u32);
	// lwz r11,-4392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// lwz r5,2744(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2744);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r11,-4392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// lwz r4,2776(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2776);
	// bl 0x823f8a70
	ctx.lr = 0x823F958C;
	sub_823F8A70(ctx, base);
	// lwz r3,-4392(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x823e8958
	ctx.lr = 0x823F95A0;
	sub_823E8958(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x823e8958
	ctx.lr = 0x823F95B4;
	sub_823E8958(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x823e8958
	ctx.lr = 0x823F95C8;
	sub_823E8958(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x823e8958
	ctx.lr = 0x823F95DC;
	sub_823E8958(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823e8958
	ctx.lr = 0x823F95F0;
	sub_823E8958(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x823f9618
	if (ctx.cr6.eq) goto loc_823F9618;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x823f9618
	if (ctx.cr6.eq) goto loc_823F9618;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823f9620
	if (ctx.cr6.eq) goto loc_823F9620;
loc_823F9618:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_823F9620:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// bl 0x823ee538
	ctx.lr = 0x823F9658;
	sub_823EE538(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_823F9660:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823f9678
	if (!ctx.cr6.eq) goto loc_823F9678;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823f968c
	if (ctx.cr6.eq) goto loc_823F968C;
loc_823F9678:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r29,1000
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1000, ctx.xer);
	// blt cr6,0x823f9660
	if (ctx.cr6.lt) goto loc_823F9660;
	// b 0x823f96d8
	goto loc_823F96D8;
loc_823F968C:
	// add r11,r24,r25
	ctx.r11.u64 = ctx.r24.u64 + ctx.r25.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823f96d8
	if (ctx.cr6.eq) goto loc_823F96D8;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee538
	ctx.lr = 0x823F96AC;
	sub_823EE538(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x823f96d8
	if (!ctx.cr6.gt) goto loc_823F96D8;
loc_823F96B4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee560
	ctx.lr = 0x823F96D0;
	sub_823EE560(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823f96b4
	if (!ctx.cr0.eq) goto loc_823F96B4;
loc_823F96D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823F96F8;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f93b0
	ctx.lr = 0x823F9700;
	sub_823F93B0(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823F9708;
	sub_823C8DF0(ctx, base);
	// bl 0x8223a960
	ctx.lr = 0x823F970C;
	sub_8223A960(ctx, base);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addi r9,r9,-28324
	ctx.r9.s64 = ctx.r9.s64 + -28324;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823f972c
	if (ctx.cr0.lt) goto loc_823F972C;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823f9734
	if (ctx.cr6.lt) goto loc_823F9734;
loc_823F972C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x823f9740
	goto loc_823F9740;
loc_823F9734:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_823F9740:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x823f9758
	if (!ctx.cr6.eq) goto loc_823F9758;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb380
	ctx.lr = 0x823F9754;
	sub_821EB380(ctx, base);
	// b 0x823f976c
	goto loc_823F976C;
loc_823F9758:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822368b0
	ctx.lr = 0x823F9760;
	sub_822368B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x821eb290
	ctx.lr = 0x823F976C;
	sub_821EB290(ctx, base);
loc_823F976C:
	// li r4,354
	ctx.r4.s64 = 354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823F9778;
	sub_823CDF48(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r11,r11,10048
	ctx.r11.s64 = ctx.r11.s64 + 10048;
	// addi r30,r11,-12
	ctx.r30.s64 = ctx.r11.s64 + -12;
loc_823F9788:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x823cdf48
	ctx.lr = 0x823F9794;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,64(r30)
	ea = 64 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x823cdf48
	ctx.lr = 0x823F97A0;
	sub_823CDF48(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823f9788
	if (!ctx.cr0.eq) goto loc_823F9788;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823F97B4"))) PPC_WEAK_FUNC(sub_823F97B4);
PPC_FUNC_IMPL(__imp__sub_823F97B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F97B8"))) PPC_WEAK_FUNC(sub_823F97B8);
PPC_FUNC_IMPL(__imp__sub_823F97B8) {
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
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-9296
	ctx.r8.s64 = ctx.r11.s64 + -9296;
	// addi r7,r10,-9432
	ctx.r7.s64 = ctx.r10.s64 + -9432;
	// addi r6,r9,-9444
	ctx.r6.s64 = ctx.r9.s64 + -9444;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// ori r10,r11,37292
	ctx.r10.u64 = ctx.r11.u64 | 37292;
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r3,-4392(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4392);
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823e8918
	ctx.lr = 0x823F9810;
	sub_823E8918(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823F9814;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed3e0
	ctx.lr = 0x823F981C;
	sub_823ED3E0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823F9830"))) PPC_WEAK_FUNC(sub_823F9830);
PPC_FUNC_IMPL(__imp__sub_823F9830) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823f9840
	sub_823F9840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9838"))) PPC_WEAK_FUNC(sub_823F9838);
PPC_FUNC_IMPL(__imp__sub_823F9838) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823f9840
	sub_823F9840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9840"))) PPC_WEAK_FUNC(sub_823F9840);
PPC_FUNC_IMPL(__imp__sub_823F9840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823f97b8
	ctx.lr = 0x823F9860;
	sub_823F97B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f987c
	if (ctx.cr6.eq) goto loc_823F987C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823F9878;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823F987C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9894"))) PPC_WEAK_FUNC(sub_823F9894);
PPC_FUNC_IMPL(__imp__sub_823F9894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9898"))) PPC_WEAK_FUNC(sub_823F9898);
PPC_FUNC_IMPL(__imp__sub_823F9898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x823F98A0;
	sub_82248764(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r22,56(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8218b408
	ctx.lr = 0x823F98BC;
	sub_8218B408(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823F98C8;
	sub_8218B408(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x823c3280
	ctx.lr = 0x823F98D8;
	sub_823C3280(ctx, base);
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// addi r10,r22,-2
	ctx.r10.s64 = ctx.r22.s64 + -2;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// cntlzw r20,r11
	ctx.r20.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r27,r22
	ctx.r27.u64 = ctx.r22.u32 == 0 ? 32 : __builtin_clz(ctx.r22.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// cntlzw r19,r10
	ctx.r19.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r9,r22,-3
	ctx.r9.s64 = ctx.r22.s64 + -3;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// addi r8,r22,-4
	ctx.r8.s64 = ctx.r22.s64 + -4;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lis r30,0
	ctx.r30.s64 = 0;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lis r29,0
	ctx.r29.s64 = 0;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// ori r4,r4,37264
	ctx.r4.u64 = ctx.r4.u64 | 37264;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r7,r22,-5
	ctx.r7.s64 = ctx.r22.s64 + -5;
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// lis r28,0
	ctx.r28.s64 = 0;
	// rlwinm r3,r27,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 27) & 0x1;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// ori r30,r30,37272
	ctx.r30.u64 = ctx.r30.u64 | 37272;
	// ori r29,r29,37280
	ctx.r29.u64 = ctx.r29.u64 | 37280;
	// rlwinm r27,r19,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 27) & 0x1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stwx r27,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r27.u32);
	// ori r6,r6,37248
	ctx.r6.u64 = ctx.r6.u64 | 37248;
	// ori r5,r5,37256
	ctx.r5.u64 = ctx.r5.u64 | 37256;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// ori r28,r28,37288
	ctx.r28.u64 = ctx.r28.u64 | 37288;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r21,r10,-9776
	ctx.r21.s64 = ctx.r10.s64 + -9776;
	// stwx r3,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u32);
	// rlwinm r10,r20,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stwx r10,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// stwx r9,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stwx r8,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u32);
	// addis r20,r31,1
	ctx.r20.s64 = ctx.r31.s64 + 65536;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// stwx r7,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r20,r20,-28244
	ctx.r20.s64 = ctx.r20.s64 + -28244;
	// addi r30,r21,-12
	ctx.r30.s64 = ctx.r21.s64 + -12;
	// addi r27,r27,-28292
	ctx.r27.s64 = ctx.r27.s64 + -28292;
loc_823F99B8:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x823f99f0
	if (ctx.cr6.eq) goto loc_823F99F0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x823f99e8
	if (ctx.cr6.eq) goto loc_823F99E8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x823f9a04
	if (!ctx.cr6.eq) goto loc_823F9A04;
	// addi r11,r29,-5
	ctx.r11.s64 = ctx.r29.s64 + -5;
	// b 0x823f99f4
	goto loc_823F99F4;
loc_823F99E8:
	// addi r11,r29,-3
	ctx.r11.s64 = ctx.r29.s64 + -3;
	// b 0x823f99f4
	goto loc_823F99F4;
loc_823F99F0:
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
loc_823F99F4:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_823F9A04:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f9a24
	if (ctx.cr6.lt) goto loc_823F9A24;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823F9A24:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f9a4c
	if (ctx.cr6.lt) goto loc_823F9A4C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823F9A4C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// bne cr6,0x823f9a5c
	if (!ctx.cr6.eq) goto loc_823F9A5C;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_823F9A5C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lwz r4,832(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f6,200(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f4,204(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823f9b08
	if (ctx.cr6.eq) goto loc_823F9B08;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f9b08
	if (ctx.cr6.lt) goto loc_823F9B08;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r11.u32);
loc_823F9B08:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823f9b38
	if (ctx.cr6.eq) goto loc_823F9B38;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823f9b38
	if (ctx.cr6.lt) goto loc_823F9B38;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823F9B38:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f9b58
	if (ctx.cr6.lt) goto loc_823F9B58;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r23.u32);
loc_823F9B58:
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F9B68;
	sub_82106F58(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bne cr6,0x823f9b78
	if (!ctx.cr6.eq) goto loc_823F9B78;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_823F9B78:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f6,120(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f9c1c
	if (ctx.cr6.lt) goto loc_823F9C1C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r23.u32);
loc_823F9C1C:
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F9C2C;
	sub_82106F58(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bne cr6,0x823f9c3c
	if (!ctx.cr6.eq) goto loc_823F9C3C;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_823F9C3C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwzu r11,32(r30)
	ea = 32 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lfd f10,136(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f6,144(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// blt cr6,0x823f99b8
	if (ctx.cr6.lt) goto loc_823F99B8;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823f9dc4
	if (!ctx.cr6.eq) goto loc_823F9DC4;
	// extsw r10,r24
	ctx.r10.s64 = ctx.r24.s32;
	// addi r11,r21,192
	ctx.r11.s64 = ctx.r21.s64 + 192;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// li r28,2
	ctx.r28.s64 = 2;
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_823F9D04:
	// subf r10,r29,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r29.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x823f9d30
	if (ctx.cr6.lt) goto loc_823F9D30;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
loc_823F9D30:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f9d58
	if (ctx.cr6.lt) goto loc_823F9D58;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823F9D58:
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,204(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,208(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f9da8
	if (ctx.cr6.lt) goto loc_823F9DA8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r23.u32);
loc_823F9DA8:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzu r5,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F9DB8;
	sub_82106F58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x823f9d04
	if (!ctx.cr0.eq) goto loc_823F9D04;
loc_823F9DC4:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823f9eb8
	if (!ctx.cr6.eq) goto loc_823F9EB8;
	// extsw r10,r24
	ctx.r10.s64 = ctx.r24.s32;
	// addi r11,r21,232
	ctx.r11.s64 = ctx.r21.s64 + 232;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_823F9DF8:
	// subf r10,r29,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r29.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x823f9e24
	if (ctx.cr6.lt) goto loc_823F9E24;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r10.u32);
loc_823F9E24:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f9e4c
	if (ctx.cr6.lt) goto loc_823F9E4C;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823F9E4C:
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,204(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,208(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f9e9c
	if (ctx.cr6.lt) goto loc_823F9E9C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r23.u32);
loc_823F9E9C:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzu r5,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F9EAC;
	sub_82106F58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x823f9df8
	if (!ctx.cr0.eq) goto loc_823F9DF8;
loc_823F9EB8:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823f9fac
	if (!ctx.cr6.eq) goto loc_823F9FAC;
	// extsw r10,r24
	ctx.r10.s64 = ctx.r24.s32;
	// addi r11,r21,272
	ctx.r11.s64 = ctx.r21.s64 + 272;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// li r28,3
	ctx.r28.s64 = 3;
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_823F9EEC:
	// subf r10,r29,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r29.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x823f9f18
	if (ctx.cr6.lt) goto loc_823F9F18;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r10.u32);
loc_823F9F18:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f9f40
	if (ctx.cr6.lt) goto loc_823F9F40;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823F9F40:
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,204(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,208(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823f9f90
	if (ctx.cr6.lt) goto loc_823F9F90;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r23,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r23.u32);
loc_823F9F90:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzu r5,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823F9FA0;
	sub_82106F58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x823f9eec
	if (!ctx.cr0.eq) goto loc_823F9EEC;
loc_823F9FAC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_823F9FBC"))) PPC_WEAK_FUNC(sub_823F9FBC);
PPC_FUNC_IMPL(__imp__sub_823F9FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9FC0"))) PPC_WEAK_FUNC(sub_823F9FC0);
PPC_FUNC_IMPL(__imp__sub_823F9FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r9,r10,37292
	ctx.r9.u64 = ctx.r10.u64 | 37292;
	// lwzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823fa004
	// bdzf 4*cr6+eq,0x823fa028
	// bne cr6,0x823fa04c
	if (!ctx.cr6.eq) goto loc_823FA04C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r10,-9776
	ctx.r11.s64 = ctx.r10.s64 + -9776;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
loc_823FA004:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-9776
	ctx.r10.s64 = ctx.r10.s64 + -9776;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r10,192
	ctx.r11.s64 = ctx.r10.s64 + 192;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
loc_823FA028:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-9776
	ctx.r9.s64 = ctx.r9.s64 + -9776;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,232
	ctx.r11.s64 = ctx.r9.s64 + 232;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
loc_823FA04C:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-9776
	ctx.r9.s64 = ctx.r9.s64 + -9776;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,272
	ctx.r11.s64 = ctx.r9.s64 + 272;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FA070"))) PPC_WEAK_FUNC(sub_823FA070);
PPC_FUNC_IMPL(__imp__sub_823FA070) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FA074"))) PPC_WEAK_FUNC(sub_823FA074);
PPC_FUNC_IMPL(__imp__sub_823FA074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA078"))) PPC_WEAK_FUNC(sub_823FA078);
PPC_FUNC_IMPL(__imp__sub_823FA078) {
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
	// bl 0x823ede10
	ctx.lr = 0x823FA090;
	sub_823EDE10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x823f9fc0
	ctx.lr = 0x823FA09C;
	sub_823F9FC0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FA0B0"))) PPC_WEAK_FUNC(sub_823FA0B0);
PPC_FUNC_IMPL(__imp__sub_823FA0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lwz r9,832(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// addi r10,r10,-28244
	ctx.r10.s64 = ctx.r10.s64 + -28244;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13796(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13796, ctx.r6.u32);
	// lwz r5,832(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subfe r8,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,13940(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13940, ctx.r8.u32);
	// lwz r7,832(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subfe r4,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,14084(r5)
	PPC_STORE_U32(ctx.r5.u32 + 14084, ctx.r4.u32);
	// b 0x823f9898
	sub_823F9898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FA110"))) PPC_WEAK_FUNC(sub_823FA110);
PPC_FUNC_IMPL(__imp__sub_823FA110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823FA118;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r25,r3,1
	ctx.r25.s64 = ctx.r3.s64 + 65536;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// addi r25,r25,-28244
	ctx.r25.s64 = ctx.r25.s64 + -28244;
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4392(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x823e8958
	ctx.lr = 0x823FA160;
	sub_823E8958(ctx, base);
	// lwz r11,-4392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823e8958
	ctx.lr = 0x823FA178;
	sub_823E8958(ctx, base);
	// lwz r11,-4392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x823e8958
	ctx.lr = 0x823FA190;
	sub_823E8958(ctx, base);
	// lwz r11,-4392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823e8958
	ctx.lr = 0x823FA1A8;
	sub_823E8958(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823fa200
	if (ctx.cr6.gt) goto loc_823FA200;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823fa1d4
	// bdzf 4*cr6+eq,0x823fa1e0
	// bne cr6,0x823fa1ec
	if (!ctx.cr6.eq) goto loc_823FA1EC;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// b 0x823fa1f4
	goto loc_823FA1F4;
loc_823FA1D4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x823fa1f4
	goto loc_823FA1F4;
loc_823FA1E0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// b 0x823fa1f4
	goto loc_823FA1F4;
loc_823FA1EC:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_823FA1F4:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_823FA200:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// bl 0x823f9fc0
	ctx.lr = 0x823FA234;
	sub_823F9FC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823FA23C"))) PPC_WEAK_FUNC(sub_823FA23C);
PPC_FUNC_IMPL(__imp__sub_823FA23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA240"))) PPC_WEAK_FUNC(sub_823FA240);
PPC_FUNC_IMPL(__imp__sub_823FA240) {
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
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lwz r9,832(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-28244
	ctx.r10.s64 = ctx.r10.s64 + -28244;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13796(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13796, ctx.r6.u32);
	// lwz r5,832(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subfe r8,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,13940(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13940, ctx.r8.u32);
	// lwz r7,832(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subfe r4,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,14084(r5)
	PPC_STORE_U32(ctx.r5.u32 + 14084, ctx.r4.u32);
	// bl 0x823f9898
	ctx.lr = 0x823FA2B4;
	sub_823F9898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823FA2BC;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FA2D0"))) PPC_WEAK_FUNC(sub_823FA2D0);
PPC_FUNC_IMPL(__imp__sub_823FA2D0) {
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
	// bl 0x8223ad48
	ctx.lr = 0x823FA2E8;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fa300
	if (ctx.cr6.eq) goto loc_823FA300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fa0b0
	ctx.lr = 0x823FA2F8;
	sub_823FA0B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf48
	ctx.lr = 0x823FA300;
	sub_823EDF48(ctx, base);
loc_823FA300:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FA314"))) PPC_WEAK_FUNC(sub_823FA314);
PPC_FUNC_IMPL(__imp__sub_823FA314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA318"))) PPC_WEAK_FUNC(sub_823FA318);
PPC_FUNC_IMPL(__imp__sub_823FA318) {
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
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lwz r9,832(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-28244
	ctx.r10.s64 = ctx.r10.s64 + -28244;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13796(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13796, ctx.r6.u32);
	// lwz r5,832(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subfe r8,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,13940(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13940, ctx.r8.u32);
	// lwz r7,832(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subfe r4,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,14084(r5)
	PPC_STORE_U32(ctx.r5.u32 + 14084, ctx.r4.u32);
	// bl 0x823f9898
	ctx.lr = 0x823FA38C;
	sub_823F9898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf68
	ctx.lr = 0x823FA394;
	sub_823EDF68(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FA3A8"))) PPC_WEAK_FUNC(sub_823FA3A8);
PPC_FUNC_IMPL(__imp__sub_823FA3A8) {
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
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lwz r9,832(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-28244
	ctx.r10.s64 = ctx.r10.s64 + -28244;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13796(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13796, ctx.r6.u32);
	// lwz r5,832(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subfe r8,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,13940(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13940, ctx.r8.u32);
	// lwz r7,832(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subfe r4,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,14084(r5)
	PPC_STORE_U32(ctx.r5.u32 + 14084, ctx.r4.u32);
	// bl 0x823f9898
	ctx.lr = 0x823FA41C;
	sub_823F9898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edfc0
	ctx.lr = 0x823FA424;
	sub_823EDFC0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FA438"))) PPC_WEAK_FUNC(sub_823FA438);
PPC_FUNC_IMPL(__imp__sub_823FA438) {
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
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lwz r9,832(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-28244
	ctx.r10.s64 = ctx.r10.s64 + -28244;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13796(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13796, ctx.r6.u32);
	// lwz r5,832(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subfe r8,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,13940(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13940, ctx.r8.u32);
	// lwz r7,832(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subfe r4,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,14084(r5)
	PPC_STORE_U32(ctx.r5.u32 + 14084, ctx.r4.u32);
	// bl 0x823f9898
	ctx.lr = 0x823FA4AC;
	sub_823F9898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fbd40
	ctx.lr = 0x823FA4B4;
	sub_823FBD40(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FA4C8"))) PPC_WEAK_FUNC(sub_823FA4C8);
PPC_FUNC_IMPL(__imp__sub_823FA4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823FA4D0;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r31,4652
	ctx.r11.s64 = ctx.r31.s64 + 4652;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823fa6ec
	if (ctx.cr6.eq) goto loc_823FA6EC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37264
	ctx.r10.u64 = ctx.r11.u64 | 37264;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823fa6ec
	if (ctx.cr6.gt) goto loc_823FA6EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823fa5c4
	// bdzf 4*cr6+eq,0x823fa604
	// bne cr6,0x823fa644
	if (!ctx.cr6.eq) goto loc_823FA644;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,-4392
	ctx.r30.s64 = ctx.r11.s64 + -4392;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823FA534;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bgt cr6,0x823fa6ec
	if (ctx.cr6.gt) goto loc_823FA6EC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823fa564
	// bdzf 4*cr6+eq,0x823fa570
	// bdzf 4*cr6+eq,0x823fa588
	// bdzf 4*cr6+eq,0x823fa5a0
	// bne cr6,0x823fa5ac
	if (!ctx.cr6.eq) goto loc_823FA5AC;
	// li r11,17
	ctx.r11.s64 = 17;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x823fa694
	goto loc_823FA694;
loc_823FA564:
	// li r11,18
	ctx.r11.s64 = 18;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x823fa694
	goto loc_823FA694;
loc_823FA570:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,-28
	ctx.r3.s64 = ctx.r29.s64 + -28;
	// bl 0x823fa110
	ctx.lr = 0x823FA580;
	sub_823FA110(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823FA588:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r29,-28
	ctx.r3.s64 = ctx.r29.s64 + -28;
	// bl 0x823fa110
	ctx.lr = 0x823FA598;
	sub_823FA110(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823FA5A0:
	// li r11,19
	ctx.r11.s64 = 19;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x823fa694
	goto loc_823FA694;
loc_823FA5AC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r29,-28
	ctx.r3.s64 = ctx.r29.s64 + -28;
	// bl 0x823fa110
	ctx.lr = 0x823FA5BC;
	sub_823FA110(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823FA5C4:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-4392
	ctx.r30.s64 = ctx.r11.s64 + -4392;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823FA5E0;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x823fa5f8
	if (ctx.cr6.lt) goto loc_823FA5F8;
	// bne cr6,0x823fa6ec
	if (!ctx.cr6.eq) goto loc_823FA6EC;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x823fa694
	goto loc_823FA694;
loc_823FA5F8:
	// li r11,21
	ctx.r11.s64 = 21;
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x823fa694
	goto loc_823FA694;
loc_823FA604:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r30,r11,-4392
	ctx.r30.s64 = ctx.r11.s64 + -4392;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823FA620;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x823fa638
	if (ctx.cr6.lt) goto loc_823FA638;
	// bne cr6,0x823fa6ec
	if (!ctx.cr6.eq) goto loc_823FA6EC;
	// li r11,22
	ctx.r11.s64 = 22;
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x823fa694
	goto loc_823FA694;
loc_823FA638:
	// li r11,23
	ctx.r11.s64 = 23;
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x823fa694
	goto loc_823FA694;
loc_823FA644:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r30,r11,-4392
	ctx.r30.s64 = ctx.r11.s64 + -4392;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823FA660;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x823fa68c
	if (ctx.cr6.lt) goto loc_823FA68C;
	// beq cr6,0x823fa680
	if (ctx.cr6.eq) goto loc_823FA680;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x823fa6ec
	if (!ctx.cr6.lt) goto loc_823FA6EC;
	// li r11,25
	ctx.r11.s64 = 25;
	// li r31,9
	ctx.r31.s64 = 9;
	// b 0x823fa694
	goto loc_823FA694;
loc_823FA680:
	// li r11,26
	ctx.r11.s64 = 26;
	// li r31,10
	ctx.r31.s64 = 10;
	// b 0x823fa694
	goto loc_823FA694;
loc_823FA68C:
	// li r11,24
	ctx.r11.s64 = 24;
	// li r31,8
	ctx.r31.s64 = 8;
loc_823FA694:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,644(r29)
	PPC_STORE_U32(ctx.r29.u32 + 644, ctx.r11.u32);
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// stw r28,792(r29)
	PPC_STORE_U32(ctx.r29.u32 + 792, ctx.r28.u32);
	// beq cr6,0x823fa6d8
	if (ctx.cr6.eq) goto loc_823FA6D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r30,r11,2744
	ctx.r30.s64 = ctx.r11.s64 + 2744;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823FA6C0;
	sub_82248A40(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823FA6D8;
	sub_82248A40(ctx, base);
loc_823FA6D8:
	// lwz r11,-28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// addi r3,r29,-28
	ctx.r3.s64 = ctx.r29.s64 + -28;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FA6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FA6EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823FA6F4"))) PPC_WEAK_FUNC(sub_823FA6F4);
PPC_FUNC_IMPL(__imp__sub_823FA6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA6F8"))) PPC_WEAK_FUNC(sub_823FA6F8);
PPC_FUNC_IMPL(__imp__sub_823FA6F8) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,37264
	ctx.r10.u64 = ctx.r11.u64 | 37264;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823fa7a4
	if (ctx.cr6.gt) goto loc_823FA7A4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823fa770
	// bdzf 4*cr6+eq,0x823fa778
	// bne cr6,0x823fa780
	if (!ctx.cr6.eq) goto loc_823FA780;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,-28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r9,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r9.u32);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FA75C;
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
loc_823FA770:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x823fa784
	goto loc_823FA784;
loc_823FA778:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x823fa784
	goto loc_823FA784;
loc_823FA780:
	// li r5,3
	ctx.r5.s64 = 3;
loc_823FA784:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823FA794;
	sub_823E8918(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x823fa110
	ctx.lr = 0x823FA7A4;
	sub_823FA110(ctx, base);
loc_823FA7A4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FA7B8"))) PPC_WEAK_FUNC(sub_823FA7B8);
PPC_FUNC_IMPL(__imp__sub_823FA7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823FA7C0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823edb98
	ctx.lr = 0x823FA7CC;
	sub_823EDB98(ctx, base);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r8,-28292
	ctx.r8.s64 = ctx.r8.s64 + -28292;
	// addi r28,r28,-28244
	ctx.r28.s64 = ctx.r28.s64 + -28244;
	// addi r7,r11,-9296
	ctx.r7.s64 = ctx.r11.s64 + -9296;
	// addi r6,r10,-9432
	ctx.r6.s64 = ctx.r10.s64 + -9432;
	// addi r5,r9,-9444
	ctx.r5.s64 = ctx.r9.s64 + -9444;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r3,130
	ctx.r3.s64 = 130;
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r30,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r30.u32);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// stw r30,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r30.u32);
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// stw r30,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r30.u32);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// stw r30,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r30.u32);
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r30,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r30.u32);
	// stw r3,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r3.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r3,-4392(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4392);
	// bl 0x823e8958
	ctx.lr = 0x823FA85C;
	sub_823E8958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823fa110
	ctx.lr = 0x823FA86C;
	sub_823FA110(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,14876(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823FA88C;
	sub_823C31B0(ctx, base);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13796(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13796, ctx.r6.u32);
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subfe r7,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,13940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13940, ctx.r7.u32);
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r5,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subfe r11,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,14084(r4)
	PPC_STORE_U32(ctx.r4.u32 + 14084, ctx.r11.u32);
	// bl 0x823f9898
	ctx.lr = 0x823FA8E8;
	sub_823F9898(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// bl 0x823c8e20
	ctx.lr = 0x823FA8FC;
	sub_823C8E20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823FA908"))) PPC_WEAK_FUNC(sub_823FA908);
PPC_FUNC_IMPL(__imp__sub_823FA908) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ed490
	sub_823ED490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FA90C"))) PPC_WEAK_FUNC(sub_823FA90C);
PPC_FUNC_IMPL(__imp__sub_823FA90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA910"))) PPC_WEAK_FUNC(sub_823FA910);
PPC_FUNC_IMPL(__imp__sub_823FA910) {
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
	// bl 0x82164c50
	ctx.lr = 0x823FA928;
	sub_82164C50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fa944
	if (ctx.cr6.eq) goto loc_823FA944;
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FA944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FA944:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FA958"))) PPC_WEAK_FUNC(sub_823FA958);
PPC_FUNC_IMPL(__imp__sub_823FA958) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823fa968
	sub_823FA968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FA960"))) PPC_WEAK_FUNC(sub_823FA960);
PPC_FUNC_IMPL(__imp__sub_823FA960) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823fa968
	sub_823FA968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FA968"))) PPC_WEAK_FUNC(sub_823FA968);
PPC_FUNC_IMPL(__imp__sub_823FA968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-8976
	ctx.r8.s64 = ctx.r11.s64 + -8976;
	// addi r7,r10,-9112
	ctx.r7.s64 = ctx.r10.s64 + -9112;
	// addi r6,r9,-9120
	ctx.r6.s64 = ctx.r9.s64 + -9120;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823c8e50
	ctx.lr = 0x823FA9AC;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed3e0
	ctx.lr = 0x823FA9B4;
	sub_823ED3E0(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823fa9d0
	if (ctx.cr6.eq) goto loc_823FA9D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823FA9CC;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823FA9D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FA9E8"))) PPC_WEAK_FUNC(sub_823FA9E8);
PPC_FUNC_IMPL(__imp__sub_823FA9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r9,-8540(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8540);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r31,r9,1696
	ctx.r31.s64 = ctx.r9.s64 + 1696;
loc_823FAA1C:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823faa1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FAA1C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-9132
	ctx.r9.s64 = ctx.r11.s64 + -9132;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x820c8480
	ctx.lr = 0x823FAA40;
	sub_820C8480(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca198
	ctx.lr = 0x823FAA50;
	sub_820CA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FAA68"))) PPC_WEAK_FUNC(sub_823FAA68);
PPC_FUNC_IMPL(__imp__sub_823FAA68) {
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
	// bl 0x823ede10
	ctx.lr = 0x823FAA80;
	sub_823EDE10(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-9132
	ctx.r10.s64 = ctx.r11.s64 + -9132;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x8223ab30
	ctx.lr = 0x823FAAA0;
	sub_8223AB30(ctx, base);
	// lis r7,-32186
	ctx.r7.s64 = -2109341696;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r7,10560
	ctx.r11.s64 = ctx.r7.s64 + 10560;
	// mulli r3,r5,60
	ctx.r3.s64 = ctx.r5.s64 * 60;
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// lwzx r3,r3,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// bl 0x821eb290
	ctx.lr = 0x823FAAC0;
	sub_821EB290(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FAAD4"))) PPC_WEAK_FUNC(sub_823FAAD4);
PPC_FUNC_IMPL(__imp__sub_823FAAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FAAD8"))) PPC_WEAK_FUNC(sub_823FAAD8);
PPC_FUNC_IMPL(__imp__sub_823FAAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823FAAE0;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-1504(r1)
	ea = -1504 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8218b408
	ctx.lr = 0x823FAAF4;
	sub_8218B408(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823FAB00;
	sub_8218B408(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,888
	ctx.r3.s64 = ctx.r30.s64 + 888;
	// bl 0x823c3280
	ctx.lr = 0x823FAB10;
	sub_823C3280(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// ori r7,r10,37248
	ctx.r7.u64 = ctx.r10.u64 | 37248;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r8,r10,10560
	ctx.r8.s64 = ctx.r10.s64 + 10560;
	// stwx r6,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r6.u32);
	// ori r11,r5,37256
	ctx.r11.u64 = ctx.r5.u64 | 37256;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// ori r9,r4,37264
	ctx.r9.u64 = ctx.r4.u64 | 37264;
	// stwx r7,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r7.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r4,r10,-2
	ctx.r4.s64 = ctx.r10.s64 + -2;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// ori r7,r6,37272
	ctx.r7.u64 = ctx.r6.u64 | 37272;
	// rlwinm r6,r3,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stwx r6,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r4,r10,-3
	ctx.r4.s64 = ctx.r10.s64 + -3;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// ori r5,r5,37280
	ctx.r5.u64 = ctx.r5.u64 | 37280;
	// rlwinm r10,r3,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stwx r10,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stwx r6,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fabcc
	if (ctx.cr6.lt) goto loc_823FABCC;
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823FABCC:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fabec
	if (ctx.cr6.lt) goto loc_823FABEC;
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823FABEC:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fac0c
	if (ctx.cr6.lt) goto loc_823FAC0C;
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823FAC0C:
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fac2c
	if (ctx.cr6.lt) goto loc_823FAC2C;
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823FAC2C:
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fac4c
	if (ctx.cr6.lt) goto loc_823FAC4C;
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823FAC4C:
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fac6c
	if (ctx.cr6.lt) goto loc_823FAC6C;
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823FAC6C:
	// lwz r10,64(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fac8c
	if (ctx.cr6.lt) goto loc_823FAC8C;
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823FAC8C:
	// lwz r10,68(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823facac
	if (ctx.cr6.lt) goto loc_823FACAC;
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823FACAC:
	// lwz r10,76(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823faccc
	if (ctx.cr6.lt) goto loc_823FACCC;
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823FACCC:
	// lwz r10,116(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823facec
	if (ctx.cr6.lt) goto loc_823FACEC;
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823FACEC:
	// lwz r10,120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fad0c
	if (ctx.cr6.lt) goto loc_823FAD0C;
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823FAD0C:
	// lwz r10,124(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fad2c
	if (ctx.cr6.lt) goto loc_823FAD2C;
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823FAD2C:
	// lwz r10,128(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fad4c
	if (ctx.cr6.lt) goto loc_823FAD4C;
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823FAD4C:
	// lwz r10,136(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 136);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fad6c
	if (ctx.cr6.lt) goto loc_823FAD6C;
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_823FAD6C:
	// lwz r10,176(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fad8c
	if (ctx.cr6.lt) goto loc_823FAD8C;
	// lwz r7,832(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FAD8C:
	// lwz r10,180(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fadac
	if (ctx.cr6.lt) goto loc_823FADAC;
	// lwz r7,832(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FADAC:
	// lwz r10,184(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 184);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fadcc
	if (ctx.cr6.lt) goto loc_823FADCC;
	// lwz r7,832(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FADCC:
	// lwz r10,188(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fadec
	if (ctx.cr6.lt) goto loc_823FADEC;
	// lwz r7,832(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FADEC:
	// lwz r10,196(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 196);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fae0c
	if (ctx.cr6.lt) goto loc_823FAE0C;
	// lwz r7,832(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FAE0C:
	// lwz r10,236(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 236);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fae2c
	if (ctx.cr6.lt) goto loc_823FAE2C;
	// lwz r7,832(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FAE2C:
	// lwz r10,240(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fae4c
	if (ctx.cr6.lt) goto loc_823FAE4C;
	// lwz r7,832(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FAE4C:
	// lwz r10,244(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fae6c
	if (ctx.cr6.lt) goto loc_823FAE6C;
	// lwz r7,832(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FAE6C:
	// lwz r10,248(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fae8c
	if (ctx.cr6.lt) goto loc_823FAE8C;
	// lwz r7,832(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FAE8C:
	// lwz r10,256(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823faeac
	if (ctx.cr6.lt) goto loc_823FAEAC;
	// lwz r7,832(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FAEAC:
	// lwz r10,296(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 296);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823faecc
	if (ctx.cr6.lt) goto loc_823FAECC;
	// lwz r7,832(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FAECC:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// addi r11,r11,-9132
	ctx.r11.s64 = ctx.r11.s64 + -9132;
	// addi r10,r10,-28292
	ctx.r10.s64 = ctx.r10.s64 + -28292;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lfs f31,11300(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r31,2
	ctx.r31.s64 = 131072;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r24,2
	ctx.r24.s64 = 131072;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r27,2
	ctx.r27.s64 = 131072;
	// lis r25,2
	ctx.r25.s64 = 131072;
	// lis r23,2
	ctx.r23.s64 = 131072;
	// ori r14,r6,49900
	ctx.r14.u64 = ctx.r6.u64 | 49900;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r22,r24,50924
	ctx.r22.u64 = ctx.r24.u64 | 50924;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// ori r15,r5,50136
	ctx.r15.u64 = ctx.r5.u64 | 50136;
	// ori r16,r4,50156
	ctx.r16.u64 = ctx.r4.u64 | 50156;
	// addi r31,r10,-4272
	ctx.r31.s64 = ctx.r10.s64 + -4272;
	// ori r17,r3,50392
	ctx.r17.u64 = ctx.r3.u64 | 50392;
	// ori r18,r9,50412
	ctx.r18.u64 = ctx.r9.u64 | 50412;
	// addi r28,r11,26232
	ctx.r28.s64 = ctx.r11.s64 + 26232;
	// ori r19,r7,50648
	ctx.r19.u64 = ctx.r7.u64 | 50648;
	// ori r20,r27,50668
	ctx.r20.u64 = ctx.r27.u64 | 50668;
	// ori r21,r25,50904
	ctx.r21.u64 = ctx.r25.u64 | 50904;
	// ori r23,r23,51160
	ctx.r23.u64 = ctx.r23.u64 | 51160;
	// ori r24,r6,51180
	ctx.r24.u64 = ctx.r6.u64 | 51180;
loc_823FAF70:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x823fb4e4
	if (ctx.cr6.eq) goto loc_823FB4E4;
	// addi r25,r1,240
	ctx.r25.s64 = ctx.r1.s64 + 240;
	// li r27,10
	ctx.r27.s64 = 10;
loc_823FAF84:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820c6b60
	ctx.lr = 0x823FAF8C;
	sub_820C6B60(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r25,r25,88
	ctx.r25.s64 = ctx.r25.s64 + 88;
	// bge 0x823faf84
	if (!ctx.cr0.lt) goto loc_823FAF84;
	// addi r3,r1,1208
	ctx.r3.s64 = ctx.r1.s64 + 1208;
	// bl 0x820c6b60
	ctx.lr = 0x823FAFA0;
	sub_820C6B60(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x820c6f50
	ctx.lr = 0x823FAFA8;
	sub_820C6F50(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r10,r1,188
	ctx.r10.s64 = ctx.r1.s64 + 188;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,-8540(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8540);
	// addi r27,r11,1696
	ctx.r27.s64 = ctx.r11.s64 + 1696;
loc_823FAFC4:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823fafc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FAFC4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820c8480
	ctx.lr = 0x823FAFE0;
	sub_820C8480(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ca198
	ctx.lr = 0x823FAFF0;
	sub_820CA198(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x823FAFF4;
	sub_82163DF0(ctx, base);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r11,1284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1284);
	// lwz r27,132(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823fb024
	if (ctx.cr6.eq) goto loc_823FB024;
	// lwz r25,112(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_823FB024:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fb04c
	if (ctx.cr6.lt) goto loc_823FB04C;
	// lwz r8,832(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823FB04C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fb078
	if (ctx.cr6.lt) goto loc_823FB078;
	// lwz r8,832(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 196, ctx.r5.u32);
loc_823FB078:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,4(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,204(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,208(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fb0e4
	if (ctx.cr6.lt) goto loc_823FB0E4;
	// lwz r10,832(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r29.u32);
loc_823FB0E4:
	// lwz r5,12(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r3,832(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823FB0F4;
	sub_82106F58(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,8(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lfd f10,160(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfd f6,136(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fb198
	if (ctx.cr6.lt) goto loc_823FB198;
	// lwz r10,832(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r29.u32);
loc_823FB198:
	// lwz r11,1284(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1284);
	// addi r27,r26,20
	ctx.r27.s64 = ctx.r26.s64 + 20;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82084038
	ctx.lr = 0x823FB1B8;
	sub_82084038(ctx, base);
	// lwz r8,832(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// lwz r7,16(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r27,216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 216, ctx.r27.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r29.u32);
	// lwz r4,832(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 200, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// lfd f10,168(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// lfd f6,144(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 208, temp.u32);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823fb4e0
	if (!ctx.cr6.eq) goto loc_823FB4E0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x820c9e18
	ctx.lr = 0x823FB278;
	sub_820C9E18(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823FB28C;
	sub_8218A5F0(ctx, base);
	// lwz r7,832(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,43224
	ctx.r9.u64 = ctx.r11.u64 | 43224;
	// ori r8,r10,43244
	ctx.r8.u64 = ctx.r10.u64 | 43244;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stwx r31,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r29,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r29.u32);
	// lfs f0,1208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1208);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8218a5f0
	ctx.lr = 0x823FB2D0;
	sub_8218A5F0(ctx, base);
	// lwz r11,832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// ori r8,r10,48856
	ctx.r8.u64 = ctx.r10.u64 | 48856;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r6,r9,48876
	ctx.r6.u64 = ctx.r9.u64 | 48876;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r29,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r29.u32);
	// lfs f12,1212(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1212);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8218a5f0
	ctx.lr = 0x823FB318;
	sub_8218A5F0(ctx, base);
	// lwz r7,832(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r11,r8,49112
	ctx.r11.u64 = ctx.r8.u64 | 49112;
	// ori r10,r6,49132
	ctx.r10.u64 = ctx.r6.u64 | 49132;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r29,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r29.u32);
	// lfs f10,1216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1216);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8218a5f0
	ctx.lr = 0x823FB360;
	sub_8218A5F0(ctx, base);
	// lwz r6,832(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r11,r5,49368
	ctx.r11.u64 = ctx.r5.u64 | 49368;
	// ori r10,r4,49388
	ctx.r10.u64 = ctx.r4.u64 | 49388;
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r29,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r29.u32);
	// lfs f8,1220(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1220);
	ctx.f8.f64 = double(temp.f32);
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f7.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8218a5f0
	ctx.lr = 0x823FB3A8;
	sub_8218A5F0(ctx, base);
	// lwz r6,832(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r10,r5,49624
	ctx.r10.u64 = ctx.r5.u64 | 49624;
	// ori r8,r9,49644
	ctx.r8.u64 = ctx.r9.u64 | 49644;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r11,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r29,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r29.u32);
	// lwz r6,1240(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1240);
	// bl 0x8218a5f0
	ctx.lr = 0x823FB3E4;
	sub_8218A5F0(ctx, base);
	// lwz r11,832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
	// ori r10,r6,49880
	ctx.r10.u64 = ctx.r6.u64 | 49880;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r29,r7,r14
	PPC_STORE_U32(ctx.r7.u32 + ctx.r14.u32, ctx.r29.u32);
	// lwz r6,1244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1244);
	// bl 0x8218a5f0
	ctx.lr = 0x823FB418;
	sub_8218A5F0(ctx, base);
	// lwz r6,832(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r11,r10,r15
	PPC_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r11.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r29,r9,r16
	PPC_STORE_U32(ctx.r9.u32 + ctx.r16.u32, ctx.r29.u32);
	// lwz r6,1248(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1248);
	// bl 0x8218a5f0
	ctx.lr = 0x823FB444;
	sub_8218A5F0(ctx, base);
	// lwz r7,832(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r8,r6,r17
	PPC_STORE_U32(ctx.r6.u32 + ctx.r17.u32, ctx.r8.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r29,r11,r18
	PPC_STORE_U32(ctx.r11.u32 + ctx.r18.u32, ctx.r29.u32);
	// lwz r6,1232(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1232);
	// bl 0x8218a5f0
	ctx.lr = 0x823FB470;
	sub_8218A5F0(ctx, base);
	// lwz r9,832(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stwx r10,r8,r19
	PPC_STORE_U32(ctx.r8.u32 + ctx.r19.u32, ctx.r10.u32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r29,r7,r20
	PPC_STORE_U32(ctx.r7.u32 + ctx.r20.u32, ctx.r29.u32);
	// lwz r6,1228(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1228);
	// bl 0x8218a5f0
	ctx.lr = 0x823FB49C;
	sub_8218A5F0(ctx, base);
	// lwz r11,832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// addi r6,r31,72
	ctx.r6.s64 = ctx.r31.s64 + 72;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r10,r21
	PPC_STORE_U32(ctx.r10.u32 + ctx.r21.u32, ctx.r6.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r29,r9,r22
	PPC_STORE_U32(ctx.r9.u32 + ctx.r22.u32, ctx.r29.u32);
	// lwz r6,1224(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1224);
	// bl 0x8218a5f0
	ctx.lr = 0x823FB4C8;
	sub_8218A5F0(ctx, base);
	// lwz r6,832(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r7,r5,r23
	PPC_STORE_U32(ctx.r5.u32 + ctx.r23.u32, ctx.r7.u32);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r29,r4,r24
	PPC_STORE_U32(ctx.r4.u32 + ctx.r24.u32, ctx.r29.u32);
loc_823FB4E0:
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_823FB4E4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r26,r26,60
	ctx.r26.s64 = ctx.r26.s64 + 60;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r8,300
	ctx.r9.s64 = ctx.r8.s64 + 300;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// blt cr6,0x823faf70
	if (ctx.cr6.lt) goto loc_823FAF70;
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FB524"))) PPC_WEAK_FUNC(sub_823FB524);
PPC_FUNC_IMPL(__imp__sub_823FB524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FB528"))) PPC_WEAK_FUNC(sub_823FB528);
PPC_FUNC_IMPL(__imp__sub_823FB528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823FB530;
	sub_82248780(ctx, base);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,56(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82163df0
	ctx.lr = 0x823FB544;
	sub_82163DF0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// li r30,10
	ctx.r30.s64 = 10;
loc_823FB550:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820c6b60
	ctx.lr = 0x823FB558;
	sub_820C6B60(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// bge 0x823fb550
	if (!ctx.cr0.lt) goto loc_823FB550;
	// addi r3,r1,1096
	ctx.r3.s64 = ctx.r1.s64 + 1096;
	// bl 0x820c6b60
	ctx.lr = 0x823FB56C;
	sub_820C6B60(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820c6f50
	ctx.lr = 0x823FB574;
	sub_820C6F50(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fa9e8
	ctx.lr = 0x823FB584;
	sub_823FA9E8(ctx, base);
	// lwz r11,1172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
	// lwz r10,92(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x821ebb58
	ctx.lr = 0x823FB59C;
	sub_821EBB58(ctx, base);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x823fb61c
	if (ctx.cr6.eq) goto loc_823FB61C;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x823fb5e8
	if (ctx.cr6.eq) goto loc_823FB5E8;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bne cr6,0x823fb6dc
	if (!ctx.cr6.eq) goto loc_823FB6DC;
	// li r11,30547
	ctx.r11.s64 = 30547;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,148(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FB5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823FB5E8:
	// li r11,30504
	ctx.r11.s64 = 30504;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,148(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FB614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823FB61C:
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// li r11,30510
	ctx.r11.s64 = 30510;
	// addi r9,r9,-28364
	ctx.r9.s64 = ctx.r9.s64 + -28364;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r6,-32186
	ctx.r6.s64 = -2109341696;
	// mulli r5,r28,60
	ctx.r5.s64 = ctx.r28.s64 * 60;
	// lwz r3,-4904(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4904);
	// addi r11,r6,10560
	ctx.r11.s64 = ctx.r6.s64 + 10560;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x823FB66C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r8,3708
	ctx.r5.s64 = ctx.r8.s64 + 3708;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29644
	ctx.r3.s64 = ctx.r3.s64 + -29644;
	// bl 0x8218a5f0
	ctx.lr = 0x823FB688;
	sub_8218A5F0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r30
	ctx.r5.s64 = ctx.r30.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29516
	ctx.r3.s64 = ctx.r3.s64 + -29516;
	// bl 0x82084038
	ctx.lr = 0x823FB6A4;
	sub_82084038(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r29
	ctx.r5.s64 = ctx.r29.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29388
	ctx.r3.s64 = ctx.r3.s64 + -29388;
	// bl 0x82084038
	ctx.lr = 0x823FB6C0;
	sub_82084038(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,148(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823FB6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FB6DC:
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823FB6E4"))) PPC_WEAK_FUNC(sub_823FB6E4);
PPC_FUNC_IMPL(__imp__sub_823FB6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FB6E8"))) PPC_WEAK_FUNC(sub_823FB6E8);
PPC_FUNC_IMPL(__imp__sub_823FB6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823FB6F0;
	sub_8224878C(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// li r31,10
	ctx.r31.s64 = 10;
loc_823FB700:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c6b60
	ctx.lr = 0x823FB708;
	sub_820C6B60(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// bge 0x823fb700
	if (!ctx.cr0.lt) goto loc_823FB700;
	// addi r3,r1,1048
	ctx.r3.s64 = ctx.r1.s64 + 1048;
	// bl 0x820c6b60
	ctx.lr = 0x823FB71C;
	sub_820C6B60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c6f50
	ctx.lr = 0x823FB724;
	sub_820C6F50(ctx, base);
	// addi r31,r29,-28
	ctx.r31.s64 = ctx.r29.s64 + -28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fa9e8
	ctx.lr = 0x823FB738;
	sub_823FA9E8(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x823FB73C;
	sub_82163DF0(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r10,1124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1124);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823fb760
	if (!ctx.cr6.gt) goto loc_823FB760;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fb528
	ctx.lr = 0x823FB758;
	sub_823FB528(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823FB760:
	// bl 0x82163df0
	ctx.lr = 0x823FB764;
	sub_82163DF0(ctx, base);
	// bl 0x82164e00
	ctx.lr = 0x823FB768;
	sub_82164E00(ctx, base);
	// addi r11,r3,10
	ctx.r11.s64 = ctx.r3.s64 + 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// bge cr6,0x823fb780
	if (!ctx.cr6.lt) goto loc_823FB780;
	// li r4,1
	ctx.r4.s64 = 1;
loc_823FB780:
	// bl 0x823fb528
	ctx.lr = 0x823FB784;
	sub_823FB528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FB7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823FB7A8"))) PPC_WEAK_FUNC(sub_823FB7A8);
PPC_FUNC_IMPL(__imp__sub_823FB7A8) {
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
	// bl 0x823faad8
	ctx.lr = 0x823FB7C0;
	sub_823FAAD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823FB7C8;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FB7DC"))) PPC_WEAK_FUNC(sub_823FB7DC);
PPC_FUNC_IMPL(__imp__sub_823FB7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FB7E0"))) PPC_WEAK_FUNC(sub_823FB7E0);
PPC_FUNC_IMPL(__imp__sub_823FB7E0) {
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
	// bl 0x8223ad48
	ctx.lr = 0x823FB7F8;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fb81c
	if (ctx.cr6.eq) goto loc_823FB81C;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r3,-788(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -788);
	// bl 0x821ea9b8
	ctx.lr = 0x823FB80C;
	sub_821EA9B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823faad8
	ctx.lr = 0x823FB814;
	sub_823FAAD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf48
	ctx.lr = 0x823FB81C;
	sub_823EDF48(ctx, base);
loc_823FB81C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FB830"))) PPC_WEAK_FUNC(sub_823FB830);
PPC_FUNC_IMPL(__imp__sub_823FB830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823FB838;
	sub_8224877C(ctx, base);
	// stwu r1,-1424(r1)
	ea = -1424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r31,-784(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ebb58
	ctx.lr = 0x823FB850;
	sub_821EBB58(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823FB864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fbaa0
	if (ctx.cr6.eq) goto loc_823FBAA0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r9,r10,35888
	ctx.r9.u64 = ctx.r10.u64 | 35888;
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwzx r30,r25,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FB88C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x823fbaa0
	if (!ctx.cr6.eq) goto loc_823FBAA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FB8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fbaa0
	if (ctx.cr6.eq) goto loc_823FBAA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ec830
	ctx.lr = 0x823FB8B8;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823fbaa0
	if (!ctx.cr6.eq) goto loc_823FBAA0;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163df0
	ctx.lr = 0x823FB8D0;
	sub_82163DF0(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823FB8E4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823fb8e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FB8E4;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r10,56(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-9132
	ctx.r7.s64 = ctx.r9.s64 + -9132;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x820c8480
	ctx.lr = 0x823FB914;
	sub_820C8480(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x820c7290
	ctx.lr = 0x823FB91C;
	sub_820C7290(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,56(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// bl 0x823fa9e8
	ctx.lr = 0x823FB92C;
	sub_823FA9E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82163e58
	ctx.lr = 0x823FB934;
	sub_82163E58(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r1,160
	ctx.r30.s64 = ctx.r1.s64 + 160;
	// li r26,0
	ctx.r26.s64 = 0;
loc_823FB948:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// sth r26,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r26.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r26,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r26.u16);
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// bl 0x82164d90
	ctx.lr = 0x823FB968;
	sub_82164D90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82165798
	ctx.lr = 0x823FB978;
	sub_82165798(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// blt cr6,0x823fb948
	if (ctx.cr6.lt) goto loc_823FB948;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r10,27
	ctx.r10.s64 = 27;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// li r8,29
	ctx.r8.s64 = 29;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r7,30
	ctx.r7.s64 = 30;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r6,31
	ctx.r6.s64 = 31;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// li r4,33
	ctx.r4.s64 = 33;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// li r3,34
	ctx.r3.s64 = 34;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// bl 0x8223a990
	ctx.lr = 0x823FB9EC;
	sub_8223A990(ctx, base);
	// bl 0x82243ff0
	ctx.lr = 0x823FB9F0;
	sub_82243FF0(ctx, base);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// addi r28,r3,420
	ctx.r28.s64 = ctx.r3.s64 + 420;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,8
	ctx.r30.s64 = 8;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_823FBA08:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzu r11,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r29,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r29.u16);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lhzx r7,r8,r28
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r28.u32);
	// sth r7,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// bl 0x82165260
	ctx.lr = 0x823FBA30;
	sub_82165260(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x823fba08
	if (!ctx.cr0.eq) goto loc_823FBA08;
	// lwz r11,1300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// neg r31,r11
	ctx.r31.s64 = -ctx.r11.s64;
	// bl 0x82163df0
	ctx.lr = 0x823FBA44;
	sub_82163DF0(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// add. r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823fba58
	if (!ctx.cr0.lt) goto loc_823FBA58;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x823fba6c
	goto loc_823FBA6C;
loc_823FBA58:
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51612
	ctx.r10.u64 = ctx.r10.u64 | 51612;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823fba6c
	if (!ctx.cr6.gt) goto loc_823FBA6C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823FBA6C:
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// li r3,10009
	ctx.r3.s64 = 10009;
	// bl 0x8208f658
	ctx.lr = 0x823FBA78;
	sub_8208F658(ctx, base);
	// lwz r11,1200(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1200);
	// addi r3,r25,1200
	ctx.r3.s64 = ctx.r25.s64 + 1200;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FBA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FBAA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FBAA0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823faad8
	ctx.lr = 0x823FBAA8;
	sub_823FAAD8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823edf68
	ctx.lr = 0x823FBAB0;
	sub_823EDF68(ctx, base);
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823FBAB8"))) PPC_WEAK_FUNC(sub_823FBAB8);
PPC_FUNC_IMPL(__imp__sub_823FBAB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,832(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r7,r9,40644
	ctx.r7.u64 = ctx.r9.u64 | 40644;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// ori r9,r4,41156
	ctx.r9.u64 = ctx.r4.u64 | 41156;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r6,r8,40900
	ctx.r6.u64 = ctx.r8.u64 | 40900;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwx r11,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r11.u32);
	// ori r5,r4,41668
	ctx.r5.u64 = ctx.r4.u64 | 41668;
	// lwz r7,832(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// ori r8,r10,41412
	ctx.r8.u64 = ctx.r10.u64 | 41412;
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stwx r11,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r11.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r6,832(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// ori r4,r7,42180
	ctx.r4.u64 = ctx.r7.u64 | 42180;
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stwx r11,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// ori r10,r10,41924
	ctx.r10.u64 = ctx.r10.u64 | 41924;
	// lwz r9,832(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// ori r7,r6,42436
	ctx.r7.u64 = ctx.r6.u64 | 42436;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r11,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r9,832(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r11,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r6,832(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r11,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r10,832(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r11.u32);
	// lwz r8,832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r11,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r11.u32);
	// b 0x823faad8
	sub_823FAAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FBB60"))) PPC_WEAK_FUNC(sub_823FBB60);
PPC_FUNC_IMPL(__imp__sub_823FBB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823FBB68;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823edb98
	ctx.lr = 0x823FBB74;
	sub_823EDB98(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,-28292
	ctx.r9.s64 = ctx.r9.s64 + -28292;
	// lwz r28,8(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r8,-8976
	ctx.r8.s64 = ctx.r8.s64 + -8976;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r7,r7,-9112
	ctx.r7.s64 = ctx.r7.s64 + -9112;
	// addi r6,r6,-9120
	ctx.r6.s64 = ctx.r6.s64 + -9120;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// li r8,135
	ctx.r8.s64 = 135;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// li r7,60
	ctx.r7.s64 = 60;
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// lfs f2,14876(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// stw r30,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r30.u32);
	// lfs f1,10376(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r30.u32);
	// stw r30,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r30.u32);
	// stw r30,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r30.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// xori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 ^ 16;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r8,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r8.u32);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// bl 0x823c31b0
	ctx.lr = 0x823FBC40;
	sub_823C31B0(ctx, base);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,-9132
	ctx.r7.s64 = ctx.r8.s64 + -9132;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r3,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// bl 0x8223ab30
	ctx.lr = 0x823FBC60;
	sub_8223AB30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fbab8
	ctx.lr = 0x823FBC68;
	sub_823FBAB8(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823e8830
	ctx.lr = 0x823FBC70;
	sub_823E8830(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,10560
	ctx.r11.s64 = ctx.r11.s64 + 10560;
	// mulli r8,r9,60
	ctx.r8.s64 = ctx.r9.s64 * 60;
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x821eb290
	ctx.lr = 0x823FBC90;
	sub_821EB290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823FBC9C"))) PPC_WEAK_FUNC(sub_823FBC9C);
PPC_FUNC_IMPL(__imp__sub_823FBC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FBCA0"))) PPC_WEAK_FUNC(sub_823FBCA0);
PPC_FUNC_IMPL(__imp__sub_823FBCA0) {
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
	// bl 0x82244d00
	ctx.lr = 0x823FBCB8;
	sub_82244D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fbcc4
	if (ctx.cr6.eq) goto loc_823FBCC4;
	// bl 0x82244aa0
	ctx.lr = 0x823FBCC4;
	sub_82244AA0(ctx, base);
loc_823FBCC4:
	// bl 0x82244cb0
	ctx.lr = 0x823FBCC8;
	sub_82244CB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82247ac8
	ctx.lr = 0x823FBCD0;
	sub_82247AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed520
	ctx.lr = 0x823FBCD8;
	sub_823ED520(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FBCEC"))) PPC_WEAK_FUNC(sub_823FBCEC);
PPC_FUNC_IMPL(__imp__sub_823FBCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FBCF0"))) PPC_WEAK_FUNC(sub_823FBCF0);
PPC_FUNC_IMPL(__imp__sub_823FBCF0) {
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
	// bl 0x82244d00
	ctx.lr = 0x823FBD08;
	sub_82244D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fbd14
	if (ctx.cr6.eq) goto loc_823FBD14;
	// bl 0x82244aa0
	ctx.lr = 0x823FBD14;
	sub_82244AA0(ctx, base);
loc_823FBD14:
	// bl 0x82244cb0
	ctx.lr = 0x823FBD18;
	sub_82244CB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82247ac8
	ctx.lr = 0x823FBD20;
	sub_82247AC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed568
	ctx.lr = 0x823FBD28;
	sub_823ED568(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FBD3C"))) PPC_WEAK_FUNC(sub_823FBD3C);
PPC_FUNC_IMPL(__imp__sub_823FBD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FBD40"))) PPC_WEAK_FUNC(sub_823FBD40);
PPC_FUNC_IMPL(__imp__sub_823FBD40) {
	PPC_FUNC_PROLOGUE();
	// b 0x8209eda0
	sub_8209EDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FBD44"))) PPC_WEAK_FUNC(sub_823FBD44);
PPC_FUNC_IMPL(__imp__sub_823FBD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FBD48"))) PPC_WEAK_FUNC(sub_823FBD48);
PPC_FUNC_IMPL(__imp__sub_823FBD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r4,464(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823FBD78;
	sub_823E8918(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// bl 0x823e8918
	ctx.lr = 0x823FBD8C;
	sub_823E8918(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r10,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r10.u32);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FBDB0;
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

__attribute__((alias("__imp__sub_823FBDC8"))) PPC_WEAK_FUNC(sub_823FBDC8);
PPC_FUNC_IMPL(__imp__sub_823FBDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r8,-28324
	ctx.r8.s64 = ctx.r8.s64 + -28324;
	// addi r7,r11,-8664
	ctx.r7.s64 = ctx.r11.s64 + -8664;
	// addi r6,r10,-8800
	ctx.r6.s64 = ctx.r10.s64 + -8800;
	// addi r5,r9,-8812
	ctx.r5.s64 = ctx.r9.s64 + -8812;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r5.u32);
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fbe24
	if (ctx.cr0.lt) goto loc_823FBE24;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// blt cr6,0x823fbe2c
	if (ctx.cr6.lt) goto loc_823FBE2C;
loc_823FBE24:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// b 0x823fbe40
	goto loc_823FBE40;
loc_823FBE2C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
loc_823FBE40:
	// addi r11,r11,-28184
	ctx.r11.s64 = ctx.r11.s64 + -28184;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x823e8918
	ctx.lr = 0x823FBE60;
	sub_823E8918(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r9,r10,38552
	ctx.r9.u64 = ctx.r10.u64 | 38552;
	// lwzx r6,r31,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x823e8918
	ctx.lr = 0x823FBE7C;
	sub_823E8918(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r7,r8,37228
	ctx.r7.u64 = ctx.r8.u64 | 37228;
	// lwzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// bl 0x823e8918
	ctx.lr = 0x823FBE98;
	sub_823E8918(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r11,r6,37232
	ctx.r11.u64 = ctx.r6.u64 | 37232;
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x823e8918
	ctx.lr = 0x823FBEB4;
	sub_823E8918(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823FBEB8;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed3e0
	ctx.lr = 0x823FBEC0;
	sub_823ED3E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FBED8"))) PPC_WEAK_FUNC(sub_823FBED8);
PPC_FUNC_IMPL(__imp__sub_823FBED8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823fc8a8
	sub_823FC8A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FBEE0"))) PPC_WEAK_FUNC(sub_823FBEE0);
PPC_FUNC_IMPL(__imp__sub_823FBEE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823fc8a8
	sub_823FC8A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FBEE8"))) PPC_WEAK_FUNC(sub_823FBEE8);
PPC_FUNC_IMPL(__imp__sub_823FBEE8) {
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
	// bl 0x82244d00
	ctx.lr = 0x823FBF00;
	sub_82244D00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fbf84
	if (ctx.cr6.eq) goto loc_823FBF84;
	// addi r10,r31,-28
	ctx.r10.s64 = ctx.r31.s64 + -28;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fbf3c
	if (ctx.cr0.lt) goto loc_823FBF3C;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x823fbf3c
	if (!ctx.cr6.lt) goto loc_823FBF3C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823FBF3C:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-28184
	ctx.r11.s64 = ctx.r11.s64 + -28184;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,2148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,3692(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3692);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lbz r6,3(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r5,2(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lhz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// bl 0x82244938
	ctx.lr = 0x823FBF84;
	sub_82244938(ctx, base);
loc_823FBF84:
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

__attribute__((alias("__imp__sub_823FBF98"))) PPC_WEAK_FUNC(sub_823FBF98);
PPC_FUNC_IMPL(__imp__sub_823FBF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823FBFA0;
	sub_82248750(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r16,r31,1
	ctx.r16.s64 = ctx.r31.s64 + 65536;
	// addi r16,r16,-28324
	ctx.r16.s64 = ctx.r16.s64 + -28324;
	// bl 0x8218b408
	ctx.lr = 0x823FBFC0;
	sub_8218B408(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823FBFCC;
	sub_8218B408(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8218b408
	ctx.lr = 0x823FBFD8;
	sub_8218B408(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x823c3280
	ctx.lr = 0x823FBFE8;
	sub_823C3280(ctx, base);
	// li r10,13
	ctx.r10.s64 = 13;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r28,r28,-28288
	ctx.r28.s64 = ctx.r28.s64 + -28288;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// addi r9,r9,-28308
	ctx.r9.s64 = ctx.r9.s64 + -28308;
	// addi r10,r28,-8
	ctx.r10.s64 = ctx.r28.s64 + -8;
loc_823FC010:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stwu r5,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823fc010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FC010;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r29,r29,-26984
	ctx.r29.s64 = ctx.r29.s64 + -26984;
	// addi r26,r11,26232
	ctx.r26.s64 = ctx.r11.s64 + 26232;
	// addi r30,r10,-4184
	ctx.r30.s64 = ctx.r10.s64 + -4184;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8218a5f0
	ctx.lr = 0x823FC058;
	sub_8218A5F0(ctx, base);
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r9,15320
	ctx.r7.u64 = ctx.r9.u64 | 15320;
	// ori r6,r8,15340
	ctx.r6.u64 = ctx.r8.u64 | 15340;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r11,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r18,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r18.u32);
	// lwz r10,16(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8218a5f0
	ctx.lr = 0x823FC0A0;
	sub_8218A5F0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r7,14808
	ctx.r5.u64 = ctx.r7.u64 | 14808;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ori r4,r6,14828
	ctx.r4.u64 = ctx.r6.u64 | 14828;
	// addi r7,r10,10864
	ctx.r7.s64 = ctx.r10.s64 + 10864;
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r30,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r18,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r18.u32);
loc_823FC0DC:
	// lwz r10,-8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fc0fc
	if (ctx.cr6.lt) goto loc_823FC0FC;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FC0FC:
	// lwz r10,-4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fc11c
	if (ctx.cr6.lt) goto loc_823FC11C;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FC11C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fc13c
	if (ctx.cr6.lt) goto loc_823FC13C;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FC13C:
	// lwz r10,68(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fc15c
	if (ctx.cr6.lt) goto loc_823FC15C;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FC15C:
	// lwz r10,104(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 104);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fc17c
	if (ctx.cr6.lt) goto loc_823FC17C;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FC17C:
	// addi r8,r8,116
	ctx.r8.s64 = ctx.r8.s64 + 116;
	// bdnz 0x823fc0dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FC0DC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,13
	ctx.r10.s64 = 13;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x823fc1a0
	if (ctx.cr6.lt) goto loc_823FC1A0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_823FC1A0:
	// lwz r17,0(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x823fc5b0
	if (ctx.cr6.eq) goto loc_823FC5B0;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f31,11300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// addi r23,r23,-28188
	ctx.r23.s64 = ctx.r23.s64 + -28188;
	// addi r30,r7,12
	ctx.r30.s64 = ctx.r7.s64 + 12;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// ori r20,r11,37352
	ctx.r20.u64 = ctx.r11.u64 | 37352;
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_823FC1E8:
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r29,r10,r20
	ctx.r29.u64 = ctx.r10.u64 + ctx.r20.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r25,108(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// bl 0x82163df0
	ctx.lr = 0x823FC210;
	sub_82163DF0(ctx, base);
	// lwz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfc r6,r25,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r25.u32;
	ctx.r6.s64 = ctx.r8.s64 - ctx.r25.s64;
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// eqv r5,r25,r8
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// lhz r27,0(r7)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r24,r3,31
	ctx.r24.u64 = ctx.r3.u32 & 0x1;
	// bl 0x82163df0
	ctx.lr = 0x823FC238;
	sub_82163DF0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x821651e0
	ctx.lr = 0x823FC244;
	sub_821651E0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8222f9a8
	ctx.lr = 0x823FC25C;
	sub_8222F9A8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// bl 0x8222f9a8
	ctx.lr = 0x823FC274;
	sub_8222F9A8(ctx, base);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823fc28c
	if (ctx.cr6.eq) goto loc_823FC28C;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x823fc294
	if (ctx.cr6.eq) goto loc_823FC294;
loc_823FC28C:
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
loc_823FC294:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823fc2a8
	if (ctx.cr6.eq) goto loc_823FC2A8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823fc2a8
	if (!ctx.cr6.eq) goto loc_823FC2A8;
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_823FC2A8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x823fc2b4
	if (ctx.cr6.eq) goto loc_823FC2B4;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
loc_823FC2B4:
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fc2d8
	if (ctx.cr6.lt) goto loc_823FC2D8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823FC2D8:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fc304
	if (ctx.cr6.lt) goto loc_823FC304;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_823FC304:
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,204(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,208(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fc354
	if (ctx.cr6.lt) goto loc_823FC354;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r18,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r18.u32);
loc_823FC354:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820844f8
	ctx.lr = 0x823FC364;
	sub_820844F8(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r30.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r18.u32);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f6,104(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fc42c
	if (ctx.cr6.lt) goto loc_823FC42C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r21,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r21.u32);
loc_823FC42C:
	// addi r29,r30,68
	ctx.r29.s64 = ctx.r30.s64 + 68;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r25
	ctx.r5.s64 = ctx.r25.s32;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82084038
	ctx.lr = 0x823FC448;
	sub_82084038(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r29.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r18,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r18.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f10,120(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f6,128(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fc518
	if (ctx.cr6.lt) goto loc_823FC518;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r9,r21
	ctx.r9.u64 = ctx.r21.u32 == 0 ? 32 : __builtin_clz(ctx.r21.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r8.u32);
loc_823FC518:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// addi r19,r19,8
	ctx.r19.s64 = ctx.r19.s64 + 8;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,100(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r30,r30,116
	ctx.r30.s64 = ctx.r30.s64 + 116;
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r22,r17
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r17.u32, ctx.xer);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f6,152(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// blt cr6,0x823fc1e8
	if (ctx.cr6.lt) goto loc_823FC1E8;
loc_823FC5B0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FC5C0"))) PPC_WEAK_FUNC(sub_823FC5C0);
PPC_FUNC_IMPL(__imp__sub_823FC5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823FC5C8;
	sub_82248774(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163e58
	ctx.lr = 0x823FC5E4;
	sub_82163E58(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x823FC5E8;
	sub_82163DF0(ctx, base);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r9,r9,-28324
	ctx.r9.s64 = ctx.r9.s64 + -28324;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fc60c
	if (ctx.cr0.lt) goto loc_823FC60C;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// blt cr6,0x823fc614
	if (ctx.cr6.lt) goto loc_823FC614;
loc_823FC60C:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// b 0x823fc628
	goto loc_823FC628;
loc_823FC614:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 65536;
loc_823FC628:
	// addi r30,r30,-28184
	ctx.r30.s64 = ctx.r30.s64 + -28184;
	// lwz r10,92(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,108(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lhz r27,98(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 98);
	// subf r26,r29,r10
	ctx.r26.s64 = ctx.r10.s64 - ctx.r29.s64;
	// bl 0x821ebb58
	ctx.lr = 0x823FC648;
	sub_821EBB58(ctx, base);
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// blt cr6,0x823fc70c
	if (ctx.cr6.lt) goto loc_823FC70C;
	// bne cr6,0x823fc8a0
	if (!ctx.cr6.eq) goto loc_823FC8A0;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// li r10,30510
	ctx.r10.s64 = 30510;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r8,-28364
	ctx.r8.s64 = ctx.r8.s64 + -28364;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823FC694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r4,3708
	ctx.r5.s64 = ctx.r4.s64 + 3708;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29644
	ctx.r3.s64 = ctx.r3.s64 + -29644;
	// bl 0x8218a5f0
	ctx.lr = 0x823FC6B0;
	sub_8218A5F0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r29
	ctx.r5.s64 = ctx.r29.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29516
	ctx.r3.s64 = ctx.r3.s64 + -29516;
	// bl 0x82084038
	ctx.lr = 0x823FC6CC;
	sub_82084038(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r26
	ctx.r5.s64 = ctx.r26.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29388
	ctx.r3.s64 = ctx.r3.s64 + -29388;
	// bl 0x82084038
	ctx.lr = 0x823FC6E8;
	sub_82084038(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FC704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823FC70C:
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// li r4,1280
	ctx.r4.s64 = 1280;
	// addi r29,r29,-29644
	ctx.r29.s64 = ctx.r29.s64 + -29644;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x823FC720;
	sub_822AA648(ctx, base);
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r25,-28188
	ctx.r25.s64 = ctx.r25.s64 + -28188;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
loc_823FC730:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8222dde8
	ctx.lr = 0x823FC744;
	sub_8222DDE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823fc85c
	if (!ctx.cr6.eq) goto loc_823FC85C;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822aa648
	ctx.lr = 0x823FC758;
	sub_822AA648(ctx, base);
	// cmplwi cr6,r27,5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 5, ctx.xer);
	// bgt cr6,0x823fc858
	if (ctx.cr6.gt) goto loc_823FC858;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823fc7dc
	// bdzf 4*cr6+eq,0x823fc7f0
	// bdzf 4*cr6+eq,0x823fc804
	// bdzf 4*cr6+eq,0x823fc818
	// bne cr6,0x823fc82c
	if (!ctx.cr6.eq) goto loc_823FC82C;
	// lwz r3,-4904(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4904);
	// li r4,30237
	ctx.r4.s64 = 30237;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r24,102(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 102);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823FC79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820c7498
	ctx.lr = 0x823FC7A8;
	sub_820C7498(ctx, base);
	// lwz r11,-4904(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4904);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823FC7C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823FC7D8;
	sub_8218A5F0(ctx, base);
	// b 0x823fc858
	goto loc_823FC858;
loc_823FC7DC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,30255
	ctx.r8.s64 = 30255;
	// lwz r7,8520(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8520);
	// lbz r6,103(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 103);
	// b 0x823fc83c
	goto loc_823FC83C;
loc_823FC7F0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,30256
	ctx.r8.s64 = 30256;
	// lwz r7,8528(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8528);
	// lbz r6,104(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 104);
	// b 0x823fc83c
	goto loc_823FC83C;
loc_823FC804:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,30257
	ctx.r8.s64 = 30257;
	// lwz r7,8536(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8536);
	// lbz r6,105(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 105);
	// b 0x823fc83c
	goto loc_823FC83C;
loc_823FC818:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,30258
	ctx.r8.s64 = 30258;
	// lwz r7,8544(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8544);
	// lbz r6,106(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 106);
	// b 0x823fc83c
	goto loc_823FC83C;
loc_823FC82C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,30259
	ctx.r8.s64 = 30259;
	// lwz r7,8552(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8552);
	// lbz r6,107(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 107);
loc_823FC83C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,160(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823FC858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FC858:
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
loc_823FC85C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// blt cr6,0x823fc730
	if (ctx.cr6.lt) goto loc_823FC730;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,30236
	ctx.r11.s64 = 30236;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r8,-28364
	ctx.r8.s64 = ctx.r8.s64 + -28364;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,148(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823FC8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FC8A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823FC8A8"))) PPC_WEAK_FUNC(sub_823FC8A8);
PPC_FUNC_IMPL(__imp__sub_823FC8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823fbdc8
	ctx.lr = 0x823FC8C8;
	sub_823FBDC8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fc8e4
	if (ctx.cr6.eq) goto loc_823FC8E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823FC8E0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823FC8E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FC8FC"))) PPC_WEAK_FUNC(sub_823FC8FC);
PPC_FUNC_IMPL(__imp__sub_823FC8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FC900"))) PPC_WEAK_FUNC(sub_823FC900);
PPC_FUNC_IMPL(__imp__sub_823FC900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823FC908;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-28
	ctx.r30.s64 = ctx.r3.s64 + -28;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fc930
	if (ctx.cr0.lt) goto loc_823FC930;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// blt cr6,0x823fc938
	if (ctx.cr6.lt) goto loc_823FC938;
loc_823FC930:
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// b 0x823fc94c
	goto loc_823FC94C;
loc_823FC938:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addis r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 65536;
loc_823FC94C:
	// addi r31,r31,-28184
	ctx.r31.s64 = ctx.r31.s64 + -28184;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// addi r29,r29,-28216
	ctx.r29.s64 = ctx.r29.s64 + -28216;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x82163df0
	ctx.lr = 0x823FC968;
	sub_82163DF0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x821651e0
	ctx.lr = 0x823FC974;
	sub_821651E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x823fca00
	if (!ctx.cr6.eq) goto loc_823FCA00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8222f9a8
	ctx.lr = 0x823FC990;
	sub_8222F9A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc9ac
	if (ctx.cr6.eq) goto loc_823FC9AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8222fa48
	ctx.lr = 0x823FC9AC;
	sub_8222FA48(ctx, base);
loc_823FC9AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8222f9a8
	ctx.lr = 0x823FC9C0;
	sub_8222F9A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc9f0
	if (ctx.cr6.eq) goto loc_823FC9F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r31,108(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// bl 0x82163df0
	ctx.lr = 0x823FC9D4;
	sub_82163DF0(ctx, base);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823fc9e8
	if (!ctx.cr6.gt) goto loc_823FC9E8;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x823fca00
	goto loc_823FCA00;
loc_823FC9E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x823fc9f4
	goto loc_823FC9F4;
loc_823FC9F0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823FC9F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fc5c0
	ctx.lr = 0x823FC9FC;
	sub_823FC5C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_823FCA00:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FCA18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823FCA20"))) PPC_WEAK_FUNC(sub_823FCA20);
PPC_FUNC_IMPL(__imp__sub_823FCA20) {
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
	// bl 0x823ede10
	ctx.lr = 0x823FCA38;
	sub_823EDE10(ctx, base);
	// addi r10,r31,-28
	ctx.r10.s64 = ctx.r31.s64 + -28;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-28324
	ctx.r9.s64 = ctx.r9.s64 + -28324;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fca6c
	if (ctx.cr0.lt) goto loc_823FCA6C;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bge cr6,0x823fca6c
	if (!ctx.cr6.lt) goto loc_823FCA6C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823FCA6C:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-28184
	ctx.r11.s64 = ctx.r11.s64 + -28184;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 100);
	// bl 0x821eb290
	ctx.lr = 0x823FCA84;
	sub_821EB290(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FCA98"))) PPC_WEAK_FUNC(sub_823FCA98);
PPC_FUNC_IMPL(__imp__sub_823FCA98) {
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
	// bl 0x823fbf98
	ctx.lr = 0x823FCAB0;
	sub_823FBF98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823FCAB8;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FCACC"))) PPC_WEAK_FUNC(sub_823FCACC);
PPC_FUNC_IMPL(__imp__sub_823FCACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FCAD0"))) PPC_WEAK_FUNC(sub_823FCAD0);
PPC_FUNC_IMPL(__imp__sub_823FCAD0) {
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
	// bl 0x823fbf98
	ctx.lr = 0x823FCAE8;
	sub_823FBF98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf48
	ctx.lr = 0x823FCAF0;
	sub_823EDF48(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FCB04"))) PPC_WEAK_FUNC(sub_823FCB04);
PPC_FUNC_IMPL(__imp__sub_823FCB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FCB08"))) PPC_WEAK_FUNC(sub_823FCB08);
PPC_FUNC_IMPL(__imp__sub_823FCB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823FCB10;
	sub_82248788(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r28,-784(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ebb58
	ctx.lr = 0x823FCB28;
	sub_821EBB58(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823FCB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fccac
	if (ctx.cr6.eq) goto loc_823FCCAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r10,35888
	ctx.r9.u64 = ctx.r10.u64 | 35888;
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwzx r29,r31,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FCB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// addi r7,r7,-28324
	ctx.r7.s64 = ctx.r7.s64 + -28324;
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fcb84
	if (ctx.cr0.lt) goto loc_823FCB84;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// blt cr6,0x823fcb8c
	if (ctx.cr6.lt) goto loc_823FCB8C;
loc_823FCB84:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// b 0x823fcba0
	goto loc_823FCBA0;
loc_823FCB8C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 65536;
loc_823FCBA0:
	// addi r30,r30,-28184
	ctx.r30.s64 = ctx.r30.s64 + -28184;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x823fccac
	if (!ctx.cr6.eq) goto loc_823FCCAC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FCBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fccac
	if (ctx.cr6.eq) goto loc_823FCCAC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ec830
	ctx.lr = 0x823FCBD0;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823fccac
	if (!ctx.cr6.eq) goto loc_823FCCAC;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// addi r9,r9,-28188
	ctx.r9.s64 = ctx.r9.s64 + -28188;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,-4392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// addi r6,r6,-26980
	ctx.r6.s64 = ctx.r6.s64 + -26980;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r5,r5,-26968
	ctx.r5.s64 = ctx.r5.s64 + -26968;
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r8,772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 772, ctx.r8.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r7,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// ori r3,r4,38560
	ctx.r3.u64 = ctx.r4.u64 | 38560;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stwx r10,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// bl 0x82163df0
	ctx.lr = 0x823FCC58;
	sub_82163DF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82165260
	ctx.lr = 0x823FCC60;
	sub_82165260(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,38564
	ctx.r9.u64 = ctx.r10.u64 | 38564;
	// stwx r3,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r30,108(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// bl 0x82163df0
	ctx.lr = 0x823FCC78;
	sub_82163DF0(ctx, base);
	// lwz r7,92(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// subf. r11,r30,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823fcc8c
	if (!ctx.cr0.lt) goto loc_823FCC8C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x823fcca0
	goto loc_823FCCA0;
loc_823FCC8C:
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51612
	ctx.r10.u64 = ctx.r10.u64 | 51612;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823fcca0
	if (!ctx.cr6.gt) goto loc_823FCCA0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823FCCA0:
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// li r3,10009
	ctx.r3.s64 = 10009;
	// bl 0x8208f658
	ctx.lr = 0x823FCCAC;
	sub_8208F658(ctx, base);
loc_823FCCAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fbf98
	ctx.lr = 0x823FCCB4;
	sub_823FBF98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf68
	ctx.lr = 0x823FCCBC;
	sub_823EDF68(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823FCCC4"))) PPC_WEAK_FUNC(sub_823FCCC4);
PPC_FUNC_IMPL(__imp__sub_823FCCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FCCC8"))) PPC_WEAK_FUNC(sub_823FCCC8);
PPC_FUNC_IMPL(__imp__sub_823FCCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823FCCD0;
	sub_82248768(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823edb98
	ctx.lr = 0x823FCCDC;
	sub_823EDB98(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r10,-8664
	ctx.r7.s64 = ctx.r10.s64 + -8664;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r6,r9,-8800
	ctx.r6.s64 = ctx.r9.s64 + -8800;
	// addi r5,r8,-8812
	ctx.r5.s64 = ctx.r8.s64 + -8812;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r11,r11,-28296
	ctx.r11.s64 = ctx.r11.s64 + -28296;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823FCD18:
	// stw r21,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823fcd18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FCD18;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r27,r27,-28188
	ctx.r27.s64 = ctx.r27.s64 + -28188;
	// addi r29,r29,-26984
	ctx.r29.s64 = ctx.r29.s64 + -26984;
	// addi r10,r10,-26980
	ctx.r10.s64 = ctx.r10.s64 + -26980;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r28,-32177
	ctx.r28.s64 = -2108751872;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// li r9,134
	ctx.r9.s64 = 134;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// li r5,1200
	ctx.r5.s64 = 1200;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// ori r22,r8,37352
	ctx.r22.u64 = ctx.r8.u64 | 37352;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// add r20,r31,r22
	ctx.r20.u64 = ctx.r31.u64 + ctx.r22.u64;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// xori r6,r7,16
	ctx.r6.u64 = ctx.r7.u64 ^ 16;
	// stw r9,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r9.u32);
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// lwz r9,-4392(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4392);
	// lwz r6,2756(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2756);
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// bl 0x823ed860
	ctx.lr = 0x823FCDBC;
	sub_823ED860(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,-4392(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4392);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x823e8958
	ctx.lr = 0x823FCDD4;
	sub_823E8958(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x823e8958
	ctx.lr = 0x823FCDE8;
	sub_823E8958(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x823e8958
	ctx.lr = 0x823FCDFC;
	sub_823E8958(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x823e8958
	ctx.lr = 0x823FCE10;
	sub_823E8958(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823e8958
	ctx.lr = 0x823FCE24;
	sub_823E8958(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// beq cr6,0x823fce4c
	if (ctx.cr6.eq) goto loc_823FCE4C;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x823fce4c
	if (ctx.cr6.eq) goto loc_823FCE4C;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823fce54
	if (ctx.cr6.eq) goto loc_823FCE54;
loc_823FCE4C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_823FCE54:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r6,13
	ctx.r6.s64 = 13;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x823ee538
	ctx.lr = 0x823FCE90;
	sub_823EE538(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823fcf18
	if (!ctx.cr6.gt) goto loc_823FCF18;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_823FCEA4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmpw cr6,r25,r9
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823fcecc
	if (ctx.cr6.eq) goto loc_823FCECC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823fcea4
	if (ctx.cr6.lt) goto loc_823FCEA4;
	// b 0x823fcf18
	goto loc_823FCF18;
loc_823FCECC:
	// add r11,r23,r24
	ctx.r11.u64 = ctx.r23.u64 + ctx.r24.u64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823fcf18
	if (ctx.cr6.eq) goto loc_823FCF18;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee538
	ctx.lr = 0x823FCEEC;
	sub_823EE538(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x823fcf18
	if (!ctx.cr6.gt) goto loc_823FCF18;
loc_823FCEF4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee560
	ctx.lr = 0x823FCF10;
	sub_823EE560(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x823fcef4
	if (!ctx.cr0.eq) goto loc_823FCEF4;
loc_823FCF18:
	// bl 0x82244cb0
	ctx.lr = 0x823FCF1C;
	sub_82244CB0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82247ac8
	ctx.lr = 0x823FCF24;
	sub_82247AC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823FCF44;
	sub_823C31B0(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x823eb238
	ctx.lr = 0x823FCF4C;
	sub_823EB238(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// li r4,567
	ctx.r4.s64 = 567;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82106f58
	ctx.lr = 0x823FCF60;
	sub_82106F58(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,566
	ctx.r4.s64 = 566;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823FCF70;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fbf98
	ctx.lr = 0x823FCF78;
	sub_823FBF98(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823FCF80;
	sub_823C8DF0(ctx, base);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addi r9,r9,-28324
	ctx.r9.s64 = ctx.r9.s64 + -28324;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fcfa0
	if (ctx.cr0.lt) goto loc_823FCFA0;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// blt cr6,0x823fcfa8
	if (ctx.cr6.lt) goto loc_823FCFA8;
loc_823FCFA0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x823fcfbc
	goto loc_823FCFBC;
loc_823FCFA8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r10,r22
	ctx.r11.u64 = ctx.r10.u64 + ctx.r22.u64;
loc_823FCFBC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 100);
	// bl 0x821eb290
	ctx.lr = 0x823FCFCC;
	sub_821EB290(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823FCFE4"))) PPC_WEAK_FUNC(sub_823FCFE4);
PPC_FUNC_IMPL(__imp__sub_823FCFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FCFE8"))) PPC_WEAK_FUNC(sub_823FCFE8);
PPC_FUNC_IMPL(__imp__sub_823FCFE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823edfc0
	sub_823EDFC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FCFEC"))) PPC_WEAK_FUNC(sub_823FCFEC);
PPC_FUNC_IMPL(__imp__sub_823FCFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FCFF0"))) PPC_WEAK_FUNC(sub_823FCFF0);
PPC_FUNC_IMPL(__imp__sub_823FCFF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ed458
	sub_823ED458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FCFF4"))) PPC_WEAK_FUNC(sub_823FCFF4);
PPC_FUNC_IMPL(__imp__sub_823FCFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FCFF8"))) PPC_WEAK_FUNC(sub_823FCFF8);
PPC_FUNC_IMPL(__imp__sub_823FCFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823FD000;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r30,r30,-28224
	ctx.r30.s64 = ctx.r30.s64 + -28224;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// ori r8,r8,37308
	ctx.r8.u64 = ctx.r8.u64 | 37308;
	// addi r29,r29,-28220
	ctx.r29.s64 = ctx.r29.s64 + -28220;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r5,8000
	ctx.r5.s64 = 8000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r6,r3,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// bl 0x823ee480
	ctx.lr = 0x823FD038;
	sub_823EE480(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r4,-32193
	ctx.r4.s64 = -2109800448;
	// ori r7,r7,45316
	ctx.r7.u64 = ctx.r7.u64 | 45316;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r4,-5640
	ctx.r6.s64 = ctx.r4.s64 + -5640;
	// lis r5,-32193
	ctx.r5.s64 = -2109800448;
	// stwx r3,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// lis r10,-32193
	ctx.r10.s64 = -2109800448;
	// addi r4,r11,-5056
	ctx.r4.s64 = ctx.r11.s64 + -5056;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r5,-5816
	ctx.r7.s64 = ctx.r5.s64 + -5816;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r11,r10,-5400
	ctx.r11.s64 = ctx.r10.s64 + -5400;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x823cebb0
	ctx.lr = 0x823FD094;
	sub_823CEBB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823FD09C"))) PPC_WEAK_FUNC(sub_823FD09C);
PPC_FUNC_IMPL(__imp__sub_823FD09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FD0A0"))) PPC_WEAK_FUNC(sub_823FD0A0);
PPC_FUNC_IMPL(__imp__sub_823FD0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823FD0A8;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r15,r31,1
	ctx.r15.s64 = ctx.r31.s64 + 65536;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// addi r15,r15,-28324
	ctx.r15.s64 = ctx.r15.s64 + -28324;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8218b408
	ctx.lr = 0x823FD0D0;
	sub_8218B408(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823FD0DC;
	sub_8218B408(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8218b408
	ctx.lr = 0x823FD0E8;
	sub_8218B408(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x823c3280
	ctx.lr = 0x823FD0F8;
	sub_823C3280(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addis r20,r31,1
	ctx.r20.s64 = ctx.r31.s64 + 65536;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r10,r10,-28308
	ctx.r10.s64 = ctx.r10.s64 + -28308;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r20,r20,-28288
	ctx.r20.s64 = ctx.r20.s64 + -28288;
	// ori r5,r8,37264
	ctx.r5.u64 = ctx.r8.u64 | 37264;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r7,r9,37256
	ctx.r7.u64 = ctx.r9.u64 | 37256;
	// cntlzw r3,r6
	ctx.r3.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r3,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// ori r9,r4,37272
	ctx.r9.u64 = ctx.r4.u64 | 37272;
	// stw r8,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r8.u32);
	// ori r8,r6,37280
	ctx.r8.u64 = ctx.r6.u64 | 37280;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r3,r4,37288
	ctx.r3.u64 = ctx.r4.u64 | 37288;
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// ori r7,r7,37296
	ctx.r7.u64 = ctx.r7.u64 | 37296;
	// rlwinm r6,r4,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lis r4,0
	ctx.r4.s64 = 0;
	// stwx r6,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// lis r6,-32177
	ctx.r6.s64 = -2108751872;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r5,r11,-3
	ctx.r5.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r30,r6,-4168
	ctx.r30.s64 = ctx.r6.s64 + -4168;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r28,r4,37304
	ctx.r28.u64 = ctx.r4.u64 | 37304;
	// stwx r5,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r27,r4,26232
	ctx.r27.s64 = ctx.r4.s64 + 26232;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// stwx r6,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,-5
	ctx.r8.s64 = ctx.r11.s64 + -5;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r29,r29,-20220
	ctx.r29.s64 = ctx.r29.s64 + -20220;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-6
	ctx.r9.s64 = ctx.r11.s64 + -6;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stwx r9,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8218a5f0
	ctx.lr = 0x823FD210;
	sub_8218A5F0(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r8,59096
	ctx.r6.u64 = ctx.r8.u64 | 59096;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ori r11,r7,59116
	ctx.r11.u64 = ctx.r7.u64 | 59116;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stwx r10,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r16,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r16.u32);
	// lwz r10,16(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16);
	// lwz r11,20(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8218a5f0
	ctx.lr = 0x823FD25C;
	sub_8218A5F0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r7,r10,12376
	ctx.r7.s64 = ctx.r10.s64 + 12376;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ori r4,r6,58584
	ctx.r4.u64 = ctx.r6.u64 | 58584;
	// ori r3,r5,58604
	ctx.r3.u64 = ctx.r5.u64 | 58604;
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r30.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r16,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r16.u32);
loc_823FD298:
	// lwz r10,-8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd2b8
	if (ctx.cr6.lt) goto loc_823FD2B8;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FD2B8:
	// lwz r10,-4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd2d8
	if (ctx.cr6.lt) goto loc_823FD2D8;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FD2D8:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd2f8
	if (ctx.cr6.lt) goto loc_823FD2F8;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FD2F8:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd318
	if (ctx.cr6.lt) goto loc_823FD318;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FD318:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd338
	if (ctx.cr6.lt) goto loc_823FD338;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FD338:
	// lwz r10,44(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd358
	if (ctx.cr6.lt) goto loc_823FD358;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FD358:
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd378
	if (ctx.cr6.lt) goto loc_823FD378;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FD378:
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd398
	if (ctx.cr6.lt) goto loc_823FD398;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FD398:
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd3b8
	if (ctx.cr6.lt) goto loc_823FD3B8;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FD3B8:
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd3d8
	if (ctx.cr6.lt) goto loc_823FD3D8;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FD3D8:
	// lwz r10,64(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd3f8
	if (ctx.cr6.lt) goto loc_823FD3F8;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FD3F8:
	// lwz r10,68(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd418
	if (ctx.cr6.lt) goto loc_823FD418;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD418:
	// lwz r10,72(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd438
	if (ctx.cr6.lt) goto loc_823FD438;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD438:
	// lwz r10,108(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd458
	if (ctx.cr6.lt) goto loc_823FD458;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD458:
	// lwz r10,112(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd478
	if (ctx.cr6.lt) goto loc_823FD478;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD478:
	// lwz r10,116(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd498
	if (ctx.cr6.lt) goto loc_823FD498;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD498:
	// lwz r10,120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd4b8
	if (ctx.cr6.lt) goto loc_823FD4B8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD4B8:
	// lwz r10,124(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd4d8
	if (ctx.cr6.lt) goto loc_823FD4D8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD4D8:
	// lwz r10,128(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd4f8
	if (ctx.cr6.lt) goto loc_823FD4F8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD4F8:
	// lwz r10,132(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd518
	if (ctx.cr6.lt) goto loc_823FD518;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD518:
	// lwz r10,136(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 136);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd538
	if (ctx.cr6.lt) goto loc_823FD538;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD538:
	// lwz r10,172(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 172);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd558
	if (ctx.cr6.lt) goto loc_823FD558;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD558:
	// lwz r10,176(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd578
	if (ctx.cr6.lt) goto loc_823FD578;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD578:
	// lwz r10,180(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd598
	if (ctx.cr6.lt) goto loc_823FD598;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD598:
	// lwz r10,184(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 184);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd5b8
	if (ctx.cr6.lt) goto loc_823FD5B8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD5B8:
	// lwz r10,188(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd5d8
	if (ctx.cr6.lt) goto loc_823FD5D8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD5D8:
	// lwz r10,192(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd5f8
	if (ctx.cr6.lt) goto loc_823FD5F8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD5F8:
	// lwz r10,196(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 196);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd618
	if (ctx.cr6.lt) goto loc_823FD618;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD618:
	// lwz r10,200(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd638
	if (ctx.cr6.lt) goto loc_823FD638;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD638:
	// lwz r10,236(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 236);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd658
	if (ctx.cr6.lt) goto loc_823FD658;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD658:
	// lwz r10,240(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd678
	if (ctx.cr6.lt) goto loc_823FD678;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD678:
	// lwz r10,244(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fd698
	if (ctx.cr6.lt) goto loc_823FD698;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FD698:
	// addi r8,r8,256
	ctx.r8.s64 = ctx.r8.s64 + 256;
	// bdnz 0x823fd298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FD298;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x823fd6bc
	if (ctx.cr6.lt) goto loc_823FD6BC;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_823FD6BC:
	// lwz r17,0(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x823fdba8
	if (ctx.cr6.eq) goto loc_823FDBA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r30,r7,8
	ctx.r30.s64 = ctx.r7.s64 + 8;
	// ori r18,r10,37316
	ctx.r18.u64 = ctx.r10.u64 | 37316;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// ori r19,r9,37308
	ctx.r19.u64 = ctx.r9.u64 | 37308;
loc_823FD6E8:
	// bl 0x8223a960
	ctx.lr = 0x823FD6EC;
	sub_8223A960(ctx, base);
	// lwz r11,20(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r28,r11,r18
	ctx.r28.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x823FD710;
	sub_822368B0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fdb94
	if (ctx.cr6.eq) goto loc_823FDB94;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82236510
	ctx.lr = 0x823FD72C;
	sub_82236510(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fdb94
	if (ctx.cr6.eq) goto loc_823FDB94;
	// bl 0x82163df0
	ctx.lr = 0x823FD73C;
	sub_82163DF0(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r29,r31,r19
	ctx.r29.u64 = ctx.r31.u64 + ctx.r19.u64;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwzx r3,r31,r19
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r19.u32);
	// eqv r8,r10,r11
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r26,r6,31
	ctx.r26.u64 = ctx.r6.u32 & 0x1;
	// bl 0x8222e360
	ctx.lr = 0x823FD76C;
	sub_8222E360(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwzx r3,r31,r19
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r19.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8222e360
	ctx.lr = 0x823FD784;
	sub_8222E360(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823fd7ac
	if (!ctx.cr6.eq) goto loc_823FD7AC;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// b 0x823fd7b8
	goto loc_823FD7B8;
loc_823FD7AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823fd7b8
	if (!ctx.cr6.eq) goto loc_823FD7B8;
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_823FD7B8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x823fd7c4
	if (ctx.cr6.eq) goto loc_823FD7C4;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823FD7C4:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fd7e8
	if (ctx.cr6.lt) goto loc_823FD7E8;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r9.u32);
loc_823FD7E8:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fd814
	if (ctx.cr6.lt) goto loc_823FD814;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823FD814:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,204(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,208(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fd880
	if (ctx.cr6.lt) goto loc_823FD880;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r16,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r16.u32);
loc_823FD880:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8a90
	ctx.lr = 0x823FD894;
	sub_823E8A90(ctx, base);
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r3.u32);
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f10,120(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 204, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f6,128(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fd950
	if (ctx.cr6.lt) goto loc_823FD950;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r16,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r16.u32);
loc_823FD950:
	// lwz r5,52(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 52);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823FD960;
	sub_82106F58(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f6,152(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fda04
	if (ctx.cr6.lt) goto loc_823FDA04;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r16,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r16.u32);
loc_823FDA04:
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82084038
	ctx.lr = 0x823FDA24;
	sub_82084038(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r29.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r16,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r16.u32);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r8.u64);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f10,168(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lfd f6,176(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823fdaec
	if (ctx.cr6.lt) goto loc_823FDAEC;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r16,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r16.u32);
loc_823FDAEC:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r4,32(r23)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r23.u32 + 32);
	// bl 0x823e8d60
	ctx.lr = 0x823FDAF8;
	sub_823E8D60(ctx, base);
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r3.u32);
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// lfd f10,192(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 204, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// lfd f6,200(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
loc_823FDB94:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r20,r20,8
	ctx.r20.s64 = ctx.r20.s64 + 8;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplw cr6,r21,r17
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x823fd6e8
	if (ctx.cr6.lt) goto loc_823FD6E8;
loc_823FDBA8:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FDBB4"))) PPC_WEAK_FUNC(sub_823FDBB4);
PPC_FUNC_IMPL(__imp__sub_823FDBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FDBB8"))) PPC_WEAK_FUNC(sub_823FDBB8);
PPC_FUNC_IMPL(__imp__sub_823FDBB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823fdc58
	if (ctx.cr6.eq) goto loc_823FDC58;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ca688
	ctx.lr = 0x823FDBDC;
	sub_823CA688(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// ori r8,r11,37308
	ctx.r8.u64 = ctx.r11.u64 | 37308;
	// addi r9,r9,-28324
	ctx.r9.s64 = ctx.r9.s64 + -28324;
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fdc0c
	if (ctx.cr0.lt) goto loc_823FDC0C;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823fdc14
	if (ctx.cr6.lt) goto loc_823FDC14;
loc_823FDC0C:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// b 0x823fdc20
	goto loc_823FDC20;
loc_823FDC14:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
loc_823FDC20:
	// addi r11,r11,-28220
	ctx.r11.s64 = ctx.r11.s64 + -28220;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,-4384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d10
	ctx.lr = 0x823FDC44;
	sub_823E9D10(ctx, base);
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
loc_823FDC58:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d80
	ctx.lr = 0x823FDC6C;
	sub_823E9D80(ctx, base);
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

__attribute__((alias("__imp__sub_823FDC80"))) PPC_WEAK_FUNC(sub_823FDC80);
PPC_FUNC_IMPL(__imp__sub_823FDC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8223a960
	ctx.lr = 0x823FDCA0;
	sub_8223A960(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fdcc0
	if (ctx.cr0.lt) goto loc_823FDCC0;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823fdcc8
	if (ctx.cr6.lt) goto loc_823FDCC8;
loc_823FDCC0:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// b 0x823fdcd4
	goto loc_823FDCD4;
loc_823FDCC8:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
loc_823FDCD4:
	// addi r11,r11,-28220
	ctx.r11.s64 = ctx.r11.s64 + -28220;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x823FDCE4;
	sub_822368B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x821eb290
	ctx.lr = 0x823FDCF0;
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

__attribute__((alias("__imp__sub_823FDD08"))) PPC_WEAK_FUNC(sub_823FDD08);
PPC_FUNC_IMPL(__imp__sub_823FDD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823FDD10;
	sub_82248768(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r25,-32182
	ctx.r25.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r10,-8540(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8540);
	// addi r30,r10,1696
	ctx.r30.s64 = ctx.r10.s64 + 1696;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163e58
	ctx.lr = 0x823FDD38;
	sub_82163E58(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823FDD40;
	sub_82163DF0(ctx, base);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r9,r9,-28324
	ctx.r9.s64 = ctx.r9.s64 + -28324;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fdd64
	if (ctx.cr0.lt) goto loc_823FDD64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823fdd6c
	if (ctx.cr6.lt) goto loc_823FDD6C;
loc_823FDD64:
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// b 0x823fdd78
	goto loc_823FDD78;
loc_823FDD6C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 65536;
loc_823FDD78:
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// lwz r29,92(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// addi r22,r22,-28220
	ctx.r22.s64 = ctx.r22.s64 + -28220;
	// addi r23,r23,-28228
	ctx.r23.s64 = ctx.r23.s64 + -28228;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r5,0(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x820c7a58
	ctx.lr = 0x823FDDA0;
	sub_820C7A58(ctx, base);
	// lwz r21,0(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r20,0(r23)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r27,r3,r29
	ctx.r27.s64 = ctx.r29.s64 - ctx.r3.s64;
	// bl 0x8223a960
	ctx.lr = 0x823FDDB4;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// bl 0x822368d8
	ctx.lr = 0x823FDDC4;
	sub_822368D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,52(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x821ebb58
	ctx.lr = 0x823FDDD4;
	sub_821EBB58(ctx, base);
	// cmplwi cr6,r26,8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 8, ctx.xer);
	// bgt cr6,0x823fe13c
	if (ctx.cr6.gt) goto loc_823FE13C;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823fdf84
	// bdzf 4*cr6+eq,0x823fe068
	// bdzf 4*cr6+eq,0x823fe13c
	// bdzf 4*cr6+eq,0x823fe13c
	// bdzf 4*cr6+eq,0x823fe13c
	// bdzf 4*cr6+eq,0x823fe13c
	// bdzf 4*cr6+eq,0x823fe104
	// bne cr6,0x823fe110
	if (!ctx.cr6.eq) goto loc_823FE110;
	// lwz r11,-8540(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -8540);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,0(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// lwz r5,0(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x820c79c8
	ctx.lr = 0x823FDE1C;
	sub_820C79C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fe13c
	if (ctx.cr6.eq) goto loc_823FE13C;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// li r4,1280
	ctx.r4.s64 = 1280;
	// addi r30,r30,-29644
	ctx.r30.s64 = ctx.r30.s64 + -29644;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x823FDE3C;
	sub_822AA648(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
loc_823FDE44:
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x823FDE50;
	sub_822AA648(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x8222db20
	ctx.lr = 0x823FDE60;
	sub_8222DB20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823fdf54
	if (!ctx.cr6.eq) goto loc_823FDF54;
	// cmplwi cr6,r27,5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 5, ctx.xer);
	// bgt cr6,0x823fdf50
	if (ctx.cr6.gt) goto loc_823FDF50;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823fdee8
	// bdzf 4*cr6+eq,0x823fdef8
	// bdzf 4*cr6+eq,0x823fdf08
	// bdzf 4*cr6+eq,0x823fdf18
	// bne cr6,0x823fdf28
	if (!ctx.cr6.eq) goto loc_823FDF28;
	// lwz r3,-4904(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4904);
	// li r4,30237
	ctx.r4.s64 = 30237;
	// lbz r25,40(r29)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r29.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FDEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820c7498
	ctx.lr = 0x823FDEB4;
	sub_820C7498(ctx, base);
	// lwz r11,-4904(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4904);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FDED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x823FDEE4;
	sub_8218A5F0(ctx, base);
	// b 0x823fdf50
	goto loc_823FDF50;
loc_823FDEE8:
	// lwz r7,8520(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8520);
	// li r8,30255
	ctx.r8.s64 = 30255;
	// lbz r6,41(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 41);
	// b 0x823fdf34
	goto loc_823FDF34;
loc_823FDEF8:
	// lwz r7,8528(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8528);
	// li r8,30256
	ctx.r8.s64 = 30256;
	// lbz r6,42(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 42);
	// b 0x823fdf34
	goto loc_823FDF34;
loc_823FDF08:
	// lwz r7,8536(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8536);
	// li r8,30257
	ctx.r8.s64 = 30257;
	// lbz r6,43(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 43);
	// b 0x823fdf34
	goto loc_823FDF34;
loc_823FDF18:
	// lwz r7,8544(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8544);
	// li r8,30258
	ctx.r8.s64 = 30258;
	// lbz r6,44(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// b 0x823fdf34
	goto loc_823FDF34;
loc_823FDF28:
	// lwz r7,8552(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8552);
	// li r8,30259
	ctx.r8.s64 = 30259;
	// lbz r6,45(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 45);
loc_823FDF34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FDF50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FDF50:
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
loc_823FDF54:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// blt cr6,0x823fde44
	if (ctx.cr6.lt) goto loc_823FDE44;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// li r11,30236
	ctx.r11.s64 = 30236;
	// addi r8,r8,-28364
	ctx.r8.s64 = ctx.r8.s64 + -28364;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwz r7,148(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// b 0x823fe124
	goto loc_823FE124;
loc_823FDF84:
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// li r10,30229
	ctx.r10.s64 = 30229;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r8,-28364
	ctx.r8.s64 = ctx.r8.s64 + -28364;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823FDFC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r4,3708
	ctx.r5.s64 = ctx.r4.s64 + 3708;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29644
	ctx.r3.s64 = ctx.r3.s64 + -29644;
	// bl 0x8218a5f0
	ctx.lr = 0x823FDFE0;
	sub_8218A5F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82164eb0
	ctx.lr = 0x823FDFF0;
	sub_82164EB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,26232
	ctx.r5.s64 = ctx.r11.s64 + 26232;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29516
	ctx.r3.s64 = ctx.r3.s64 + -29516;
	// bl 0x8218a5f0
	ctx.lr = 0x823FE00C;
	sub_8218A5F0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r30
	ctx.r5.s64 = ctx.r30.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29388
	ctx.r3.s64 = ctx.r3.s64 + -29388;
	// bl 0x82084038
	ctx.lr = 0x823FE028;
	sub_82084038(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r27
	ctx.r5.s64 = ctx.r27.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29260
	ctx.r3.s64 = ctx.r3.s64 + -29260;
	// bl 0x82084038
	ctx.lr = 0x823FE044;
	sub_82084038(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823FE060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_823FE068:
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// li r11,30232
	ctx.r11.s64 = 30232;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r9,-28364
	ctx.r9.s64 = ctx.r9.s64 + -28364;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-4904(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4904);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823FE0A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r30,r4,3708
	ctx.r30.s64 = ctx.r4.s64 + 3708;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r3,-29644
	ctx.r3.s64 = ctx.r3.s64 + -29644;
	// bl 0x8218a5f0
	ctx.lr = 0x823FE0C8;
	sub_8218A5F0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r24,30
	ctx.r6.s64 = ctx.r24.s64 + 30;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29516
	ctx.r3.s64 = ctx.r3.s64 + -29516;
	// bl 0x8218a5f0
	ctx.lr = 0x823FE0E0;
	sub_8218A5F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FE0FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_823FE104:
	// li r11,30503
	ctx.r11.s64 = 30503;
	// li r5,7
	ctx.r5.s64 = 7;
	// b 0x823fe118
	goto loc_823FE118;
loc_823FE110:
	// li r11,30547
	ctx.r11.s64 = 30547;
	// li r5,8
	ctx.r5.s64 = 8;
loc_823FE118:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,148(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823FE124:
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x823FE13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FE13C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823FE144"))) PPC_WEAK_FUNC(sub_823FE144);
PPC_FUNC_IMPL(__imp__sub_823FE144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FE148"))) PPC_WEAK_FUNC(sub_823FE148);
PPC_FUNC_IMPL(__imp__sub_823FE148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823FE150;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,10011
	ctx.r3.s64 = 10011;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8208f658
	ctx.lr = 0x823FE164;
	sub_8208F658(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163e58
	ctx.lr = 0x823FE17C;
	sub_82163E58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82165798
	ctx.lr = 0x823FE188;
	sub_82165798(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fdbb8
	ctx.lr = 0x823FE194;
	sub_823FDBB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823FE19C"))) PPC_WEAK_FUNC(sub_823FE19C);
PPC_FUNC_IMPL(__imp__sub_823FE19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FE1A0"))) PPC_WEAK_FUNC(sub_823FE1A0);
PPC_FUNC_IMPL(__imp__sub_823FE1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823FE1A8;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r28,r28,-28324
	ctx.r28.s64 = ctx.r28.s64 + -28324;
	// addi r8,r11,-8352
	ctx.r8.s64 = ctx.r11.s64 + -8352;
	// addi r7,r10,-8488
	ctx.r7.s64 = ctx.r10.s64 + -8488;
	// addi r6,r9,-8500
	ctx.r6.s64 = ctx.r9.s64 + -8500;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fe1f4
	if (ctx.cr0.lt) goto loc_823FE1F4;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823fe204
	if (ctx.cr6.lt) goto loc_823FE204;
loc_823FE1F4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,37316
	ctx.r29.u64 = ctx.r11.u64 | 37316;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x823fe218
	goto loc_823FE218;
loc_823FE204:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r29,r10,37316
	ctx.r29.u64 = ctx.r10.u64 | 37316;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_823FE218:
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823FE230;
	sub_823E8918(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fe248
	if (ctx.cr0.lt) goto loc_823FE248;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823fe250
	if (ctx.cr6.lt) goto loc_823FE250;
loc_823FE248:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x823fe25c
	goto loc_823FE25C;
loc_823FE250:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_823FE25C:
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x823e8918
	ctx.lr = 0x823FE270;
	sub_823E8918(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r10,r11,45316
	ctx.r10.u64 = ctx.r11.u64 | 45316;
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823e8918
	ctx.lr = 0x823FE28C;
	sub_823E8918(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r8,r9,37228
	ctx.r8.u64 = ctx.r9.u64 | 37228;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823e8918
	ctx.lr = 0x823FE2A8;
	sub_823E8918(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r6,r7,37232
	ctx.r6.u64 = ctx.r7.u64 | 37232;
	// lwzx r6,r31,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// bl 0x823e8918
	ctx.lr = 0x823FE2C4;
	sub_823E8918(ctx, base);
	// lwz r11,-4392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r30,r11,2744
	ctx.r30.s64 = ctx.r11.s64 + 2744;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x823FE2DC;
	sub_82248A40(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r5,37312
	ctx.r11.u64 = ctx.r5.u64 | 37312;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x82248a40
	ctx.lr = 0x823FE2FC;
	sub_82248A40(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x823FE300;
	sub_823C8E50(ctx, base);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4384(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d80
	ctx.lr = 0x823FE314;
	sub_823E9D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed3e0
	ctx.lr = 0x823FE31C;
	sub_823ED3E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823FE324"))) PPC_WEAK_FUNC(sub_823FE324);
PPC_FUNC_IMPL(__imp__sub_823FE324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FE328"))) PPC_WEAK_FUNC(sub_823FE328);
PPC_FUNC_IMPL(__imp__sub_823FE328) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x823fe6d0
	sub_823FE6D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FE330"))) PPC_WEAK_FUNC(sub_823FE330);
PPC_FUNC_IMPL(__imp__sub_823FE330) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x823fe6d0
	sub_823FE6D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FE338"))) PPC_WEAK_FUNC(sub_823FE338);
PPC_FUNC_IMPL(__imp__sub_823FE338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,37284
	ctx.r10.u64 = ctx.r11.u64 | 37284;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addic. r4,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r4.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x823fe36c
	if (!ctx.cr0.lt) goto loc_823FE36C;
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// b 0x823fe378
	goto loc_823FE378;
loc_823FE36C:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x823fe378
	if (ctx.cr6.lt) goto loc_823FE378;
	// addi r4,r11,-3
	ctx.r4.s64 = ctx.r11.s64 + -3;
loc_823FE378:
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fcff8
	ctx.lr = 0x823FE384;
	sub_823FCFF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823FE38C;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fe3b8
	if (ctx.cr6.eq) goto loc_823FE3B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,37280
	ctx.r9.u64 = ctx.r10.u64 | 37280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FE3B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FE3B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fdc80
	ctx.lr = 0x823FE3C4;
	sub_823FDC80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x823FE3CC;
	sub_8209EDA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FE3E4"))) PPC_WEAK_FUNC(sub_823FE3E4);
PPC_FUNC_IMPL(__imp__sub_823FE3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FE3E8"))) PPC_WEAK_FUNC(sub_823FE3E8);
PPC_FUNC_IMPL(__imp__sub_823FE3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823FE3F0;
	sub_82248780(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-28
	ctx.r30.s64 = ctx.r3.s64 + -28;
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,-28324
	ctx.r31.s64 = ctx.r31.s64 + -28324;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fe418
	if (ctx.cr0.lt) goto loc_823FE418;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823fe428
	if (ctx.cr6.lt) goto loc_823FE428;
loc_823FE418:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r26,r11,37316
	ctx.r26.u64 = ctx.r11.u64 | 37316;
	// add r29,r30,r26
	ctx.r29.u64 = ctx.r30.u64 + ctx.r26.u64;
	// b 0x823fe43c
	goto loc_823FE43C;
loc_823FE428:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ori r26,r10,37316
	ctx.r26.u64 = ctx.r10.u64 | 37316;
	// add r29,r9,r26
	ctx.r29.u64 = ctx.r9.u64 + ctx.r26.u64;
loc_823FE43C:
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r27,r27,-28256
	ctx.r27.s64 = ctx.r27.s64 + -28256;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8222e360
	ctx.lr = 0x823FE454;
	sub_8222E360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fe46c
	if (ctx.cr6.eq) goto loc_823FE46C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8222e400
	ctx.lr = 0x823FE46C;
	sub_8222E400(ctx, base);
loc_823FE46C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8222e360
	ctx.lr = 0x823FE47C;
	sub_8222E360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x823fe5a8
	if (ctx.cr6.eq) goto loc_823FE5A8;
	// lis r28,-32182
	ctx.r28.s64 = -2109079552;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,19
	ctx.r7.s64 = 19;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,-8540(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c7a58
	ctx.lr = 0x823FE4A4;
	sub_820C7A58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823FE4AC;
	sub_82163DF0(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823fe578
	if (!ctx.cr6.gt) goto loc_823FE578;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// lwz r11,-8540(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8540);
	// addi r29,r11,1696
	ctx.r29.s64 = ctx.r11.s64 + 1696;
	// lwz r11,-4392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4392);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163e58
	ctx.lr = 0x823FE4D0;
	sub_82163E58(ctx, base);
	// bl 0x82163df0
	ctx.lr = 0x823FE4D4;
	sub_82163DF0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fe4ec
	if (ctx.cr0.lt) goto loc_823FE4EC;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823fe4f4
	if (ctx.cr6.lt) goto loc_823FE4F4;
loc_823FE4EC:
	// add r31,r30,r26
	ctx.r31.u64 = ctx.r30.u64 + ctx.r26.u64;
	// b 0x823fe500
	goto loc_823FE500;
loc_823FE4F4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_823FE500:
	// addis r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 65536;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,19
	ctx.r7.s64 = 19;
	// addi r28,r28,-28228
	ctx.r28.s64 = ctx.r28.s64 + -28228;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x820c7a58
	ctx.lr = 0x823FE520;
	sub_820C7A58(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8223a960
	ctx.lr = 0x823FE52C;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x822368d8
	ctx.lr = 0x823FE53C;
	sub_822368D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ebb58
	ctx.lr = 0x823FE544;
	sub_821EBB58(ctx, base);
	// li r11,30547
	ctx.r11.s64 = 30547;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,148(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FE570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823FE578:
	// bl 0x82163df0
	ctx.lr = 0x823FE57C;
	sub_82163DF0(ctx, base);
	// bl 0x82164e00
	ctx.lr = 0x823FE580;
	sub_82164E00(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823fe5a0
	if (ctx.cr6.lt) goto loc_823FE5A0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x823fdd08
	ctx.lr = 0x823FE598;
	sub_823FDD08(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823FE5A0:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x823fe5ac
	goto loc_823FE5AC;
loc_823FE5A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823FE5AC:
	// bl 0x823fdd08
	ctx.lr = 0x823FE5B0;
	sub_823FDD08(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FE5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823FE5D4"))) PPC_WEAK_FUNC(sub_823FE5D4);
PPC_FUNC_IMPL(__imp__sub_823FE5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FE5D8"))) PPC_WEAK_FUNC(sub_823FE5D8);
PPC_FUNC_IMPL(__imp__sub_823FE5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ede10
	ctx.lr = 0x823FE5F4;
	sub_823EDE10(ctx, base);
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fdc80
	ctx.lr = 0x823FE604;
	sub_823FDC80(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fdbb8
	ctx.lr = 0x823FE610;
	sub_823FDBB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823FE618;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fe644
	if (ctx.cr6.eq) goto loc_823FE644;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,37280
	ctx.r9.u64 = ctx.r10.u64 | 37280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FE644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FE644:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FE65C"))) PPC_WEAK_FUNC(sub_823FE65C);
PPC_FUNC_IMPL(__imp__sub_823FE65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FE660"))) PPC_WEAK_FUNC(sub_823FE660);
PPC_FUNC_IMPL(__imp__sub_823FE660) {
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
	// bl 0x823fd0a0
	ctx.lr = 0x823FE678;
	sub_823FD0A0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,37312
	ctx.r11.u64 = ctx.r11.u64 | 37312;
	// li r9,13653
	ctx.r9.s64 = 13653;
	// li r8,13654
	ctx.r8.s64 = 13654;
	// li r7,15007
	ctx.r7.s64 = 15007;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r6,13655
	ctx.r6.s64 = 13655;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r4,489
	ctx.r4.s64 = 489;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82106f58
	ctx.lr = 0x823FE6BC;
	sub_82106F58(ctx, base);
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

__attribute__((alias("__imp__sub_823FE6D0"))) PPC_WEAK_FUNC(sub_823FE6D0);
PPC_FUNC_IMPL(__imp__sub_823FE6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823fe1a0
	ctx.lr = 0x823FE6F0;
	sub_823FE1A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fe70c
	if (ctx.cr6.eq) goto loc_823FE70C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x823FE708;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823FE70C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FE724"))) PPC_WEAK_FUNC(sub_823FE724);
PPC_FUNC_IMPL(__imp__sub_823FE724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FE728"))) PPC_WEAK_FUNC(sub_823FE728);
PPC_FUNC_IMPL(__imp__sub_823FE728) {
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
	// bl 0x823fe660
	ctx.lr = 0x823FE740;
	sub_823FE660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x823FE748;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FE75C"))) PPC_WEAK_FUNC(sub_823FE75C);
PPC_FUNC_IMPL(__imp__sub_823FE75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FE760"))) PPC_WEAK_FUNC(sub_823FE760);
PPC_FUNC_IMPL(__imp__sub_823FE760) {
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
	// bl 0x823fe660
	ctx.lr = 0x823FE778;
	sub_823FE660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf48
	ctx.lr = 0x823FE780;
	sub_823EDF48(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823FE794"))) PPC_WEAK_FUNC(sub_823FE794);
PPC_FUNC_IMPL(__imp__sub_823FE794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FE798"))) PPC_WEAK_FUNC(sub_823FE798);
PPC_FUNC_IMPL(__imp__sub_823FE798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x823FE7A0;
	sub_82248770(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-1408(r1)
	ea = -1408 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r31,-784(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ebb58
	ctx.lr = 0x823FE7BC;
	sub_821EBB58(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823FE7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r22,r8,45320
	ctx.r22.u64 = ctx.r8.u64 | 45320;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r27,r7,45324
	ctx.r27.u64 = ctx.r7.u64 | 45324;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823febd0
	if (ctx.cr6.eq) goto loc_823FEBD0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r9,r10,35888
	ctx.r9.u64 = ctx.r10.u64 | 35888;
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwzx r26,r30,r9
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FE80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// addi r7,r7,-28324
	ctx.r7.s64 = ctx.r7.s64 + -28324;
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823fe82c
	if (ctx.cr0.lt) goto loc_823FE82C;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823fe834
	if (ctx.cr6.lt) goto loc_823FE834;
loc_823FE82C:
	// addis r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 65536;
	// b 0x823fe840
	goto loc_823FE840;
loc_823FE834:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addis r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 65536;
loc_823FE840:
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// addi r29,r29,-28220
	ctx.r29.s64 = ctx.r29.s64 + -28220;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x823febd0
	if (ctx.cr6.gt) goto loc_823FEBD0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823fe9b0
	// bdzf 4*cr6+eq,0x823feb7c
	// bdzf 4*cr6+eq,0x823feb7c
	// bdzf 4*cr6+eq,0x823feb88
	// bne cr6,0x823feb88
	if (!ctx.cr6.eq) goto loc_823FEB88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FE880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823febd0
	if (ctx.cr6.eq) goto loc_823FEBD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ec830
	ctx.lr = 0x823FE890;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823febd0
	if (!ctx.cr6.eq) goto loc_823FEBD0;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addis r26,r30,1
	ctx.r26.s64 = ctx.r30.s64 + 65536;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r26,r26,-28228
	ctx.r26.s64 = ctx.r26.s64 + -28228;
	// add r31,r30,r27
	ctx.r31.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r10,-4392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r9,772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 772, ctx.r9.u32);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// sth r28,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r28.u16);
	// sth r28,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stwx r28,r30,r27
	PPC_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r28.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// bl 0x82163df0
	ctx.lr = 0x823FE91C;
	sub_82163DF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82164d90
	ctx.lr = 0x823FE924;
	sub_82164D90(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r7,19
	ctx.r7.s64 = 19;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stwx r25,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r25.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,-8540(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c7a58
	ctx.lr = 0x823FE964;
	sub_820C7A58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823FE96C;
	sub_82163DF0(ctx, base);
	// lwz r7,92(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// subf. r11,r31,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823fe980
	if (!ctx.cr0.lt) goto loc_823FE980;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x823fe994
	goto loc_823FE994;
loc_823FE980:
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51612
	ctx.r10.u64 = ctx.r10.u64 | 51612;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823fe994
	if (!ctx.cr6.gt) goto loc_823FE994;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823FE994:
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// li r3,10009
	ctx.r3.s64 = 10009;
	// bl 0x8208f658
	ctx.lr = 0x823FE9A0;
	sub_8208F658(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fdd08
	ctx.lr = 0x823FE9AC;
	sub_823FDD08(ctx, base);
	// b 0x823febd0
	goto loc_823FEBD0;
loc_823FE9B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FE9C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823febcc
	if (ctx.cr6.eq) goto loc_823FEBCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ec830
	ctx.lr = 0x823FE9D8;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823febcc
	if (!ctx.cr6.eq) goto loc_823FEBCC;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// add r31,r30,r27
	ctx.r31.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,-8540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8540);
	// addi r26,r10,1696
	ctx.r26.s64 = ctx.r10.s64 + 1696;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r25,r11,r31
	ctx.r25.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82163e58
	ctx.lr = 0x823FEA10;
	sub_82163E58(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823FEA24:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823fea24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FEA24;
	// bl 0x8223aa28
	ctx.lr = 0x823FEA30;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820c8218
	ctx.lr = 0x823FEA40;
	sub_820C8218(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x820c7290
	ctx.lr = 0x823FEA5C;
	sub_820C7290(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820ca128
	ctx.lr = 0x823FEA74;
	sub_820CA128(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x820c7050
	ctx.lr = 0x823FEA7C;
	sub_820C7050(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820c7070
	ctx.lr = 0x823FEA88;
	sub_820C7070(ctx, base);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lfs f0,-19544(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x823feac4
	if (!ctx.cr6.gt) goto loc_823FEAC4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,30184
	ctx.r4.s64 = 30184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FEAB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_823FEAC4:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823feaf8
	if (!ctx.cr6.gt) goto loc_823FEAF8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,30185
	ctx.r4.s64 = 30185;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FEAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_823FEAF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x823feb34
	if (!ctx.cr6.gt) goto loc_823FEB34;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,30524
	ctx.r4.s64 = 30524;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FEB28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_823FEB34:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823feb68
	if (!ctx.cr6.gt) goto loc_823FEB68;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,30525
	ctx.r4.s64 = 30525;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FEB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_823FEB68:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r23,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r23.u32);
	// b 0x823febcc
	goto loc_823FEBCC;
loc_823FEB7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r30,r22
	PPC_STORE_U32(ctx.r30.u32 + ctx.r22.u32, ctx.r11.u32);
	// b 0x823febd0
	goto loc_823FEBD0;
loc_823FEB88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FEB9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823febcc
	if (ctx.cr6.eq) goto loc_823FEBCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ec830
	ctx.lr = 0x823FEBB0;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823febcc
	if (!ctx.cr6.eq) goto loc_823FEBCC;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r23.u32);
loc_823FEBCC:
	// stwx r23,r30,r22
	PPC_STORE_U32(ctx.r30.u32 + ctx.r22.u32, ctx.r23.u32);
loc_823FEBD0:
	// lwzx r11,r30,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// add r10,r30,r22
	ctx.r10.u64 = ctx.r30.u64 + ctx.r22.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823fec68
	if (!ctx.cr6.eq) goto loc_823FEC68;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823fec08
	if (ctx.cr6.eq) goto loc_823FEC08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fe148
	ctx.lr = 0x823FEC08;
	sub_823FE148(ctx, base);
loc_823FEC08:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,45356
	ctx.r10.u64 = ctx.r11.u64 | 45356;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// bl 0x8223a8c8
	ctx.lr = 0x823FEC1C;
	sub_8223A8C8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x823fec68
	if (!ctx.cr6.gt) goto loc_823FEC68;
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,-20208
	ctx.r31.s64 = ctx.r31.s64 + -20208;
loc_823FEC2C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823fec5c
	if (ctx.cr6.eq) goto loc_823FEC5C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FEC5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FEC5C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x823fec2c
	if (!ctx.cr0.eq) goto loc_823FEC2C;
loc_823FEC68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fd0a0
	ctx.lr = 0x823FEC70;
	sub_823FD0A0(ctx, base);
	// li r11,13654
	ctx.r11.s64 = 13654;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r3,832(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ori r8,r10,37312
	ctx.r8.u64 = ctx.r10.u64 | 37312;
	// li r7,13653
	ctx.r7.s64 = 13653;
	// li r6,15007
	ctx.r6.s64 = 15007;
	// li r5,13655
	ctx.r5.s64 = 13655;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r4,489
	ctx.r4.s64 = 489;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// lwzx r11,r30,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82106f58
	ctx.lr = 0x823FECB4;
	sub_82106F58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823edf68
	ctx.lr = 0x823FECBC;
	sub_823EDF68(ctx, base);
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_823FECC8"))) PPC_WEAK_FUNC(sub_823FECC8);
PPC_FUNC_IMPL(__imp__sub_823FECC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,832(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// addi r30,r30,-28228
	ctx.r30.s64 = ctx.r30.s64 + -28228;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,15812(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15812, ctx.r11.u32);
	// lwz r7,832(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,15524(r6)
	PPC_STORE_U32(ctx.r6.u32 + 15524, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,-4392(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4392);
	// bl 0x823e89a0
	ctx.lr = 0x823FED14;
	sub_823E89A0(ctx, base);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r11,r4,57564
	ctx.r11.u64 = ctx.r4.u64 | 57564;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823e97f0
	ctx.lr = 0x823FED30;
	sub_823E97F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,482
	ctx.r4.s64 = 482;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823FED44;
	sub_82106F58(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,481
	ctx.r4.s64 = 481;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823FED54;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fe660
	ctx.lr = 0x823FED5C;
	sub_823FE660(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FED74"))) PPC_WEAK_FUNC(sub_823FED74);
PPC_FUNC_IMPL(__imp__sub_823FED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FED78"))) PPC_WEAK_FUNC(sub_823FED78);
PPC_FUNC_IMPL(__imp__sub_823FED78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823FED80;
	sub_82248768(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823edb98
	ctx.lr = 0x823FED8C;
	sub_823EDB98(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// addi r5,r5,-28292
	ctx.r5.s64 = ctx.r5.s64 + -28292;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// ori r20,r10,37316
	ctx.r20.u64 = ctx.r10.u64 | 37316;
	// ori r4,r9,37312
	ctx.r4.u64 = ctx.r9.u64 | 37312;
	// addi r22,r22,-28228
	ctx.r22.s64 = ctx.r22.s64 + -28228;
	// addi r10,r7,-8488
	ctx.r10.s64 = ctx.r7.s64 + -8488;
	// addi r3,r8,-8352
	ctx.r3.s64 = ctx.r8.s64 + -8352;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r6,-8500
	ctx.r9.s64 = ctx.r6.s64 + -8500;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// add r21,r31,r20
	ctx.r21.u64 = ctx.r31.u64 + ctx.r20.u64;
	// stw r29,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r29.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r29,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r29.u32);
	// addi r11,r21,-8
	ctx.r11.s64 = ctx.r21.s64 + -8;
	// stw r30,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r30.u32);
	// stw r29,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r29.u32);
	// stw r30,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r30.u32);
	// stw r29,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r29.u32);
	// stw r30,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r30.u32);
	// stw r29,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r29.u32);
	// stw r30,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r30.u32);
	// stw r29,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r29.u32);
	// stw r30,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, ctx.r30.u32);
	// stw r29,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r29.u32);
	// stw r30,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r30.u32);
	// stw r8,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r8.u32);
	// stwx r7,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
loc_823FEE3C:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823fee3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FEE3C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// ori r9,r11,45320
	ctx.r9.u64 = ctx.r11.u64 | 45320;
	// addi r28,r28,-20220
	ctx.r28.s64 = ctx.r28.s64 + -20220;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r11,-20212
	ctx.r11.s64 = ctx.r11.s64 + -20212;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// li r7,133
	ctx.r7.s64 = 133;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r5,r6,128
	ctx.r5.u64 = ctx.r6.u64 | 128;
	// xori r4,r5,16
	ctx.r4.u64 = ctx.r5.u64 ^ 16;
	// stw r7,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r7.u32);
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// lwz r11,-4392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// lwz r11,2744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2744);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r11,-4392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// lwz r4,2772(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2772);
	// bl 0x823fcff8
	ctx.lr = 0x823FEEEC;
	sub_823FCFF8(ctx, base);
	// lwz r3,-4392(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x823e8958
	ctx.lr = 0x823FEF00;
	sub_823E8958(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x823e8958
	ctx.lr = 0x823FEF14;
	sub_823E8958(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x823e8958
	ctx.lr = 0x823FEF28;
	sub_823E8958(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x823e8958
	ctx.lr = 0x823FEF3C;
	sub_823E8958(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823e8958
	ctx.lr = 0x823FEF50;
	sub_823E8958(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x823fef78
	if (ctx.cr6.eq) goto loc_823FEF78;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x823fef78
	if (ctx.cr6.eq) goto loc_823FEF78;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823fef80
	if (ctx.cr6.eq) goto loc_823FEF80;
loc_823FEF78:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_823FEF80:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// bl 0x823ee538
	ctx.lr = 0x823FEFBC;
	sub_823EE538(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_823FEFC4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823fefdc
	if (!ctx.cr6.eq) goto loc_823FEFDC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823feff0
	if (ctx.cr6.eq) goto loc_823FEFF0;
loc_823FEFDC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r29,1000
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1000, ctx.xer);
	// blt cr6,0x823fefc4
	if (ctx.cr6.lt) goto loc_823FEFC4;
	// b 0x823ff03c
	goto loc_823FF03C;
loc_823FEFF0:
	// add r11,r24,r25
	ctx.r11.u64 = ctx.r24.u64 + ctx.r25.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823ff03c
	if (ctx.cr6.eq) goto loc_823FF03C;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee538
	ctx.lr = 0x823FF010;
	sub_823EE538(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x823ff03c
	if (!ctx.cr6.gt) goto loc_823FF03C;
loc_823FF018:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee560
	ctx.lr = 0x823FF034;
	sub_823EE560(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823ff018
	if (!ctx.cr0.eq) goto loc_823FF018;
loc_823FF03C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x823FF05C;
	sub_823C31B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ca688
	ctx.lr = 0x823FF064;
	sub_823CA688(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r29,r29,-28324
	ctx.r29.s64 = ctx.r29.s64 + -28324;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823ff08c
	if (ctx.cr0.lt) goto loc_823FF08C;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823ff094
	if (ctx.cr6.lt) goto loc_823FF094;
loc_823FF08C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x823ff0a0
	goto loc_823FF0A0;
loc_823FF094:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_823FF0A0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,-4384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d10
	ctx.lr = 0x823FF0C0;
	sub_823E9D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fecc8
	ctx.lr = 0x823FF0C8;
	sub_823FECC8(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x823FF0D0;
	sub_823C8DF0(ctx, base);
	// bl 0x8223a960
	ctx.lr = 0x823FF0D4;
	sub_8223A960(ctx, base);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823ff0ec
	if (ctx.cr0.lt) goto loc_823FF0EC;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823ff0f4
	if (ctx.cr6.lt) goto loc_823FF0F4;
loc_823FF0EC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x823ff100
	goto loc_823FF100;
loc_823FF0F4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_823FF100:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x823FF10C;
	sub_822368B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x821eb290
	ctx.lr = 0x823FF118;
	sub_821EB290(ctx, base);
	// li r4,480
	ctx.r4.s64 = 480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x823FF124;
	sub_823CDF48(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r11,r11,12376
	ctx.r11.s64 = ctx.r11.s64 + 12376;
	// addi r30,r11,-12
	ctx.r30.s64 = ctx.r11.s64 + -12;
loc_823FF134:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x823cdf48
	ctx.lr = 0x823FF140;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,64(r30)
	ea = 64 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x823cdf48
	ctx.lr = 0x823FF14C;
	sub_823CDF48(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x823ff134
	if (!ctx.cr0.eq) goto loc_823FF134;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823FF160"))) PPC_WEAK_FUNC(sub_823FF160);
PPC_FUNC_IMPL(__imp__sub_823FF160) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ed568
	sub_823ED568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FF164"))) PPC_WEAK_FUNC(sub_823FF164);
PPC_FUNC_IMPL(__imp__sub_823FF164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FF168"))) PPC_WEAK_FUNC(sub_823FF168);
PPC_FUNC_IMPL(__imp__sub_823FF168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x823FF188;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ff1b4
	if (ctx.cr6.eq) goto loc_823FF1B4;
	// lwz r11,-28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// ori r9,r10,37280
	ctx.r9.u64 = ctx.r10.u64 | 37280;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FF1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FF1B4:
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x823FF1CC;
	sub_823E8918(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// bl 0x823e8918
	ctx.lr = 0x823FF1E0;
	sub_823E8918(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r10,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r10.u32);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FF204;
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

__attribute__((alias("__imp__sub_823FF21C"))) PPC_WEAK_FUNC(sub_823FF21C);
PPC_FUNC_IMPL(__imp__sub_823FF21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FF220"))) PPC_WEAK_FUNC(sub_823FF220);
PPC_FUNC_IMPL(__imp__sub_823FF220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823FF228;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r30,r30,-28224
	ctx.r30.s64 = ctx.r30.s64 + -28224;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// ori r8,r8,37308
	ctx.r8.u64 = ctx.r8.u64 | 37308;
	// addi r29,r29,-28220
	ctx.r29.s64 = ctx.r29.s64 + -28220;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r5,8000
	ctx.r5.s64 = 8000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r6,r3,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// bl 0x823ee378
	ctx.lr = 0x823FF260;
	sub_823EE378(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r4,-32193
	ctx.r4.s64 = -2109800448;
	// ori r7,r7,45316
	ctx.r7.u64 = ctx.r7.u64 | 45316;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r4,-5640
	ctx.r6.s64 = ctx.r4.s64 + -5640;
	// lis r5,-32193
	ctx.r5.s64 = -2109800448;
	// stwx r3,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// lis r10,-32193
	ctx.r10.s64 = -2109800448;
	// addi r4,r11,-5056
	ctx.r4.s64 = ctx.r11.s64 + -5056;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r5,-5816
	ctx.r7.s64 = ctx.r5.s64 + -5816;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r11,r10,-5400
	ctx.r11.s64 = ctx.r10.s64 + -5400;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x823cebb0
	ctx.lr = 0x823FF2BC;
	sub_823CEBB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823FF2C4"))) PPC_WEAK_FUNC(sub_823FF2C4);
PPC_FUNC_IMPL(__imp__sub_823FF2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FF2C8"))) PPC_WEAK_FUNC(sub_823FF2C8);
PPC_FUNC_IMPL(__imp__sub_823FF2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x823FF2D0;
	sub_82248750(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addis r15,r31,1
	ctx.r15.s64 = ctx.r31.s64 + 65536;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// addi r15,r15,-28324
	ctx.r15.s64 = ctx.r15.s64 + -28324;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8218b408
	ctx.lr = 0x823FF2F8;
	sub_8218B408(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x823FF304;
	sub_8218B408(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8218b408
	ctx.lr = 0x823FF310;
	sub_8218B408(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x823c3280
	ctx.lr = 0x823FF320;
	sub_823C3280(ctx, base);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addis r20,r31,1
	ctx.r20.s64 = ctx.r31.s64 + 65536;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r10,r10,-28308
	ctx.r10.s64 = ctx.r10.s64 + -28308;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r20,r20,-28288
	ctx.r20.s64 = ctx.r20.s64 + -28288;
	// ori r5,r8,37264
	ctx.r5.u64 = ctx.r8.u64 | 37264;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r7,r9,37256
	ctx.r7.u64 = ctx.r9.u64 | 37256;
	// cntlzw r3,r6
	ctx.r3.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r3,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// ori r9,r4,37272
	ctx.r9.u64 = ctx.r4.u64 | 37272;
	// stw r8,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r8.u32);
	// ori r8,r6,37280
	ctx.r8.u64 = ctx.r6.u64 | 37280;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r3,r4,37288
	ctx.r3.u64 = ctx.r4.u64 | 37288;
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// ori r7,r7,37296
	ctx.r7.u64 = ctx.r7.u64 | 37296;
	// rlwinm r6,r4,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lis r4,0
	ctx.r4.s64 = 0;
	// stwx r6,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// lis r6,-32177
	ctx.r6.s64 = -2108751872;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r5,r11,-3
	ctx.r5.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r30,r6,-4152
	ctx.r30.s64 = ctx.r6.s64 + -4152;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ori r28,r4,37304
	ctx.r28.u64 = ctx.r4.u64 | 37304;
	// stwx r5,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r27,r4,26232
	ctx.r27.s64 = ctx.r4.s64 + 26232;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// stwx r6,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,-5
	ctx.r8.s64 = ctx.r11.s64 + -5;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r29,r29,-20220
	ctx.r29.s64 = ctx.r29.s64 + -20220;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-6
	ctx.r9.s64 = ctx.r11.s64 + -6;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stwx r9,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r9.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8218a5f0
	ctx.lr = 0x823FF438;
	sub_8218A5F0(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r8,26840
	ctx.r6.u64 = ctx.r8.u64 | 26840;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// ori r11,r7,26860
	ctx.r11.u64 = ctx.r7.u64 | 26860;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stwx r10,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r4,8
	ctx.r4.s64 = 8;
	// stwx r16,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r16.u32);
	// lwz r10,16(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16);
	// lwz r11,20(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8218a5f0
	ctx.lr = 0x823FF484;
	sub_8218A5F0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r7,r10,12888
	ctx.r7.s64 = ctx.r10.s64 + 12888;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ori r4,r6,26328
	ctx.r4.u64 = ctx.r6.u64 | 26328;
	// ori r3,r5,26348
	ctx.r3.u64 = ctx.r5.u64 | 26348;
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r30,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r30.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r16,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r16.u32);
loc_823FF4C0:
	// lwz r10,-8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff4e0
	if (ctx.cr6.lt) goto loc_823FF4E0;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FF4E0:
	// lwz r10,-4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff500
	if (ctx.cr6.lt) goto loc_823FF500;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FF500:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff520
	if (ctx.cr6.lt) goto loc_823FF520;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FF520:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff540
	if (ctx.cr6.lt) goto loc_823FF540;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FF540:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff560
	if (ctx.cr6.lt) goto loc_823FF560;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FF560:
	// lwz r10,44(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff580
	if (ctx.cr6.lt) goto loc_823FF580;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FF580:
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff5a0
	if (ctx.cr6.lt) goto loc_823FF5A0;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FF5A0:
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff5c0
	if (ctx.cr6.lt) goto loc_823FF5C0;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FF5C0:
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff5e0
	if (ctx.cr6.lt) goto loc_823FF5E0;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FF5E0:
	// lwz r10,60(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff600
	if (ctx.cr6.lt) goto loc_823FF600;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FF600:
	// lwz r10,64(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff620
	if (ctx.cr6.lt) goto loc_823FF620;
	// lwz r6,832(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r11.u32);
loc_823FF620:
	// lwz r10,68(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff640
	if (ctx.cr6.lt) goto loc_823FF640;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF640:
	// lwz r10,72(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff660
	if (ctx.cr6.lt) goto loc_823FF660;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF660:
	// lwz r10,108(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff680
	if (ctx.cr6.lt) goto loc_823FF680;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF680:
	// lwz r10,112(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff6a0
	if (ctx.cr6.lt) goto loc_823FF6A0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF6A0:
	// lwz r10,116(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff6c0
	if (ctx.cr6.lt) goto loc_823FF6C0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF6C0:
	// lwz r10,120(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff6e0
	if (ctx.cr6.lt) goto loc_823FF6E0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF6E0:
	// lwz r10,124(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff700
	if (ctx.cr6.lt) goto loc_823FF700;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF700:
	// lwz r10,128(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff720
	if (ctx.cr6.lt) goto loc_823FF720;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF720:
	// lwz r10,132(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff740
	if (ctx.cr6.lt) goto loc_823FF740;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF740:
	// lwz r10,136(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 136);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff760
	if (ctx.cr6.lt) goto loc_823FF760;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF760:
	// lwz r10,172(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 172);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff780
	if (ctx.cr6.lt) goto loc_823FF780;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF780:
	// lwz r10,176(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff7a0
	if (ctx.cr6.lt) goto loc_823FF7A0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF7A0:
	// lwz r10,180(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff7c0
	if (ctx.cr6.lt) goto loc_823FF7C0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF7C0:
	// lwz r10,184(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 184);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff7e0
	if (ctx.cr6.lt) goto loc_823FF7E0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF7E0:
	// lwz r10,188(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 188);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff800
	if (ctx.cr6.lt) goto loc_823FF800;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF800:
	// lwz r10,192(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff820
	if (ctx.cr6.lt) goto loc_823FF820;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF820:
	// lwz r10,196(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 196);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff840
	if (ctx.cr6.lt) goto loc_823FF840;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF840:
	// lwz r10,200(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff860
	if (ctx.cr6.lt) goto loc_823FF860;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF860:
	// lwz r10,236(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 236);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff880
	if (ctx.cr6.lt) goto loc_823FF880;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF880:
	// lwz r10,240(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff8a0
	if (ctx.cr6.lt) goto loc_823FF8A0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF8A0:
	// lwz r10,244(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823ff8c0
	if (ctx.cr6.lt) goto loc_823FF8C0;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_823FF8C0:
	// addi r8,r8,256
	ctx.r8.s64 = ctx.r8.s64 + 256;
	// bdnz 0x823ff4c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FF4C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x823ff8e4
	if (ctx.cr6.lt) goto loc_823FF8E4;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_823FF8E4:
	// lwz r17,0(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x823ffdd0
	if (ctx.cr6.eq) goto loc_823FFDD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r30,r7,8
	ctx.r30.s64 = ctx.r7.s64 + 8;
	// ori r18,r10,37316
	ctx.r18.u64 = ctx.r10.u64 | 37316;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// ori r19,r9,37308
	ctx.r19.u64 = ctx.r9.u64 | 37308;
loc_823FF910:
	// bl 0x8223a960
	ctx.lr = 0x823FF914;
	sub_8223A960(ctx, base);
	// lwz r11,20(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r28,r11,r18
	ctx.r28.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x823FF938;
	sub_822368B0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ffdbc
	if (ctx.cr6.eq) goto loc_823FFDBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82236510
	ctx.lr = 0x823FF954;
	sub_82236510(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ffdbc
	if (ctx.cr6.eq) goto loc_823FFDBC;
	// bl 0x82163df0
	ctx.lr = 0x823FF964;
	sub_82163DF0(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r29,r31,r19
	ctx.r29.u64 = ctx.r31.u64 + ctx.r19.u64;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwzx r3,r31,r19
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r19.u32);
	// eqv r8,r10,r11
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r26,r6,31
	ctx.r26.u64 = ctx.r6.u32 & 0x1;
	// bl 0x8222e360
	ctx.lr = 0x823FF994;
	sub_8222E360(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwzx r3,r31,r19
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r19.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8222e360
	ctx.lr = 0x823FF9AC;
	sub_8222E360(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ff9d4
	if (!ctx.cr6.eq) goto loc_823FF9D4;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// b 0x823ff9e0
	goto loc_823FF9E0;
loc_823FF9D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ff9e0
	if (!ctx.cr6.eq) goto loc_823FF9E0;
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_823FF9E0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x823ff9ec
	if (ctx.cr6.eq) goto loc_823FF9EC;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823FF9EC:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ffa10
	if (ctx.cr6.lt) goto loc_823FFA10;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r9.u32);
loc_823FFA10:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ffa3c
	if (ctx.cr6.lt) goto loc_823FFA3C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_823FFA3C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,-4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,204(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,208(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ffaa8
	if (ctx.cr6.lt) goto loc_823FFAA8;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r16,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r16.u32);
loc_823FFAA8:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8a90
	ctx.lr = 0x823FFABC;
	sub_823E8A90(ctx, base);
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r3.u32);
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f10,120(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 204, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f6,128(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ffb78
	if (ctx.cr6.lt) goto loc_823FFB78;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r16,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r16.u32);
loc_823FFB78:
	// lwz r5,52(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 52);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x823FFB88;
	sub_82106F58(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f6,152(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ffc2c
	if (ctx.cr6.lt) goto loc_823FFC2C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r16,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r16.u32);
loc_823FFC2C:
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82084038
	ctx.lr = 0x823FFC4C;
	sub_82084038(ctx, base);
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,216(r7)
	PPC_STORE_U32(ctx.r7.u32 + 216, ctx.r29.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r16,236(r6)
	PPC_STORE_U32(ctx.r6.u32 + 236, ctx.r16.u32);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r8.u64);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfd f10,168(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 204, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lfd f6,176(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 208, temp.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ffd14
	if (ctx.cr6.lt) goto loc_823FFD14;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r16,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r16.u32);
loc_823FFD14:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r4,32(r23)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r23.u32 + 32);
	// bl 0x823e8d60
	ctx.lr = 0x823FFD20;
	sub_823E8D60(ctx, base);
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r3.u32);
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// lfd f10,192(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 204, temp.u32);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// lfd f6,200(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
loc_823FFDBC:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r20,r20,8
	ctx.r20.s64 = ctx.r20.s64 + 8;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplw cr6,r21,r17
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x823ff910
	if (ctx.cr6.lt) goto loc_823FF910;
loc_823FFDD0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FFDDC"))) PPC_WEAK_FUNC(sub_823FFDDC);
PPC_FUNC_IMPL(__imp__sub_823FFDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FFDE0"))) PPC_WEAK_FUNC(sub_823FFDE0);
PPC_FUNC_IMPL(__imp__sub_823FFDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248760
	ctx.lr = 0x823FFDE8;
	sub_82248760(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r20,-32182
	ctx.r20.s64 = -2109079552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r11,-4392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// lwz r10,-8540(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8540);
	// addi r25,r10,1696
	ctx.r25.s64 = ctx.r10.s64 + 1696;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82163e58
	ctx.lr = 0x823FFE10;
	sub_82163E58(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x823FFE18;
	sub_82163DF0(ctx, base);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r9,r9,-28324
	ctx.r9.s64 = ctx.r9.s64 + -28324;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823ffe3c
	if (ctx.cr0.lt) goto loc_823FFE3C;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x823ffe44
	if (ctx.cr6.lt) goto loc_823FFE44;
loc_823FFE3C:
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// b 0x823ffe50
	goto loc_823FFE50;
loc_823FFE44:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 65536;
loc_823FFE50:
	// addis r21,r31,1
	ctx.r21.s64 = ctx.r31.s64 + 65536;
	// lwz r27,92(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// addi r22,r22,-28220
	ctx.r22.s64 = ctx.r22.s64 + -28220;
	// addi r21,r21,-28228
	ctx.r21.s64 = ctx.r21.s64 + -28228;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,0(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x820c7a58
	ctx.lr = 0x823FFE78;
	sub_820C7A58(ctx, base);
	// lwz r30,0(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r29,0(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// subf r23,r3,r27
	ctx.r23.s64 = ctx.r27.s64 - ctx.r3.s64;
	// bl 0x8223a960
	ctx.lr = 0x823FFE8C;
	sub_8223A960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x822368d8
	ctx.lr = 0x823FFE9C;
	sub_822368D8(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r24,52(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823ffee4
	if (ctx.cr6.gt) goto loc_823FFEE4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823ffed0
	// bdzf 4*cr6+eq,0x823ffed8
	// bne cr6,0x823ffee0
	if (!ctx.cr6.eq) goto loc_823FFEE0;
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x823ffee4
	goto loc_823FFEE4;
loc_823FFED0:
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x823ffee4
	goto loc_823FFEE4;
loc_823FFED8:
	// li r30,7
	ctx.r30.s64 = 7;
	// b 0x823ffee4
	goto loc_823FFEE4;
loc_823FFEE0:
	// li r30,6
	ctx.r30.s64 = 6;
loc_823FFEE4:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x823fff0c
	if (ctx.cr6.eq) goto loc_823FFF0C;
	// li r7,19
	ctx.r7.s64 = 19;
	// lwz r6,0(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820c7a58
	ctx.lr = 0x823FFF08;
	sub_820C7A58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_823FFF0C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subf r27,r29,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r29.s64;
	// bl 0x821ebb58
	ctx.lr = 0x823FFF18;
	sub_821EBB58(ctx, base);
	// cmplwi cr6,r19,10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 10, ctx.xer);
	// bgt cr6,0x82400654
	if (ctx.cr6.gt) goto loc_82400654;
	// lis r12,-32192
	ctx.r12.s64 = -2109734912;
	// rlwinm r0,r19,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-200
	ctx.r12.s64 = ctx.r12.s64 + -200;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-156(r31)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r31.u32 + -156);
	// lwz r18,228(0)
	ctx.r18.u64 = PPC_LOAD_U32(228);
	// lwz r18,456(0)
	ctx.r18.u64 = PPC_LOAD_U32(456);
	// lwz r18,932(0)
	ctx.r18.u64 = PPC_LOAD_U32(932);
	// lwz r18,1408(0)
	ctx.r18.u64 = PPC_LOAD_U32(1408);
	// lwz r18,1620(0)
	ctx.r18.u64 = PPC_LOAD_U32(1620);
	// lwz r18,1620(0)
	ctx.r18.u64 = PPC_LOAD_U32(1620);
	// lwz r18,1620(0)
	ctx.r18.u64 = PPC_LOAD_U32(1620);
	// lwz r18,1620(0)
	ctx.r18.u64 = PPC_LOAD_U32(1620);
	// lwz r18,1564(0)
	ctx.r18.u64 = PPC_LOAD_U32(1564);
	// lwz r18,1576(0)
	ctx.r18.u64 = PPC_LOAD_U32(1576);
	// lwz r11,-8540(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8540);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,0(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x820c79c8
	ctx.lr = 0x823FFF7C;
	sub_820C79C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82400654
	if (ctx.cr6.eq) goto loc_82400654;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// li r4,1280
	ctx.r4.s64 = 1280;
	// addi r30,r30,-29644
	ctx.r30.s64 = ctx.r30.s64 + -29644;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x823FFF9C;
	sub_822AA648(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r26,-32182
	ctx.r26.s64 = -2109079552;
loc_823FFFA4:
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aa648
	ctx.lr = 0x823FFFB0;
	sub_822AA648(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x8222db20
	ctx.lr = 0x823FFFC0;
	sub_8222DB20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824000b4
	if (!ctx.cr6.eq) goto loc_824000B4;
	// cmplwi cr6,r27,5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 5, ctx.xer);
	// bgt cr6,0x824000b0
	if (ctx.cr6.gt) goto loc_824000B0;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82400048
	// bdzf 4*cr6+eq,0x82400058
	// bdzf 4*cr6+eq,0x82400068
	// bdzf 4*cr6+eq,0x82400078
	// bne cr6,0x82400088
	if (!ctx.cr6.eq) goto loc_82400088;
	// lwz r3,-4904(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4904);
	// li r4,30237
	ctx.r4.s64 = 30237;
	// lbz r25,40(r29)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r29.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82400008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820c7498
	ctx.lr = 0x82400014;
	sub_820C7498(ctx, base);
	// lwz r11,-4904(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4904);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82400030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a5f0
	ctx.lr = 0x82400044;
	sub_8218A5F0(ctx, base);
	// b 0x824000b0
	goto loc_824000B0;
loc_82400048:
	// lwz r7,8520(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8520);
	// li r8,30255
	ctx.r8.s64 = 30255;
	// lbz r6,41(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 41);
	// b 0x82400094
	goto loc_82400094;
loc_82400058:
	// lwz r7,8528(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8528);
	// li r8,30256
	ctx.r8.s64 = 30256;
	// lbz r6,42(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 42);
	// b 0x82400094
	goto loc_82400094;
loc_82400068:
	// lwz r7,8536(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8536);
	// li r8,30257
	ctx.r8.s64 = 30257;
	// lbz r6,43(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 43);
	// b 0x82400094
	goto loc_82400094;
loc_82400078:
	// lwz r7,8544(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8544);
	// li r8,30258
	ctx.r8.s64 = 30258;
	// lbz r6,44(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// b 0x82400094
	goto loc_82400094;
loc_82400088:
	// lwz r7,8552(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8552);
	// li r8,30259
	ctx.r8.s64 = 30259;
	// lbz r6,45(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 45);
loc_82400094:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824000B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824000B0:
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
loc_824000B4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// blt cr6,0x823fffa4
	if (ctx.cr6.lt) goto loc_823FFFA4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// li r11,30236
	ctx.r11.s64 = 30236;
	// addi r8,r8,-28364
	ctx.r8.s64 = ctx.r8.s64 + -28364;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwz r7,148(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// b 0x8240063c
	goto loc_8240063C;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// li r10,30229
	ctx.r10.s64 = 30229;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r8,-28364
	ctx.r8.s64 = ctx.r8.s64 + -28364;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,-4904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4904);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82400124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r4,3708
	ctx.r5.s64 = ctx.r4.s64 + 3708;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29644
	ctx.r3.s64 = ctx.r3.s64 + -29644;
	// bl 0x8218a5f0
	ctx.lr = 0x82400140;
	sub_8218A5F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x82164eb0
	ctx.lr = 0x82400150;
	sub_82164EB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,26232
	ctx.r5.s64 = ctx.r11.s64 + 26232;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29516
	ctx.r3.s64 = ctx.r3.s64 + -29516;
	// bl 0x8218a5f0
	ctx.lr = 0x8240016C;
	sub_8218A5F0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r26
	ctx.r5.s64 = ctx.r26.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29388
	ctx.r3.s64 = ctx.r3.s64 + -29388;
	// bl 0x82084038
	ctx.lr = 0x82400188;
	sub_82084038(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r23
	ctx.r5.s64 = ctx.r23.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29260
	ctx.r3.s64 = ctx.r3.s64 + -29260;
	// bl 0x82084038
	ctx.lr = 0x824001A4;
	sub_82084038(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824001C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x824002c0
	if (ctx.cr6.eq) goto loc_824002C0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82400654
	if (!ctx.cr6.eq) goto loc_82400654;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// li r11,30230
	ctx.r11.s64 = 30230;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r9,-28364
	ctx.r9.s64 = ctx.r9.s64 + -28364;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r4,20035
	ctx.r4.s64 = 20035;
	// lwz r3,-4904(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4904);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8240021C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r4,3708
	ctx.r5.s64 = ctx.r4.s64 + 3708;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29644
	ctx.r3.s64 = ctx.r3.s64 + -29644;
	// bl 0x8218a5f0
	ctx.lr = 0x82400238;
	sub_8218A5F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82164eb0
	ctx.lr = 0x82400248;
	sub_82164EB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,26232
	ctx.r5.s64 = ctx.r11.s64 + 26232;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29516
	ctx.r3.s64 = ctx.r3.s64 + -29516;
	// bl 0x8218a5f0
	ctx.lr = 0x82400264;
	sub_8218A5F0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r29
	ctx.r5.s64 = ctx.r29.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29388
	ctx.r3.s64 = ctx.r3.s64 + -29388;
	// bl 0x82084038
	ctx.lr = 0x82400280;
	sub_82084038(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r27
	ctx.r5.s64 = ctx.r27.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29260
	ctx.r3.s64 = ctx.r3.s64 + -29260;
	// bl 0x82084038
	ctx.lr = 0x8240029C;
	sub_82084038(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824002B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_824002C0:
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// li r11,30230
	ctx.r11.s64 = 30230;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r7,-28364
	ctx.r7.s64 = ctx.r7.s64 + -28364;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// li r4,20036
	ctx.r4.s64 = 20036;
	// lwz r3,-4904(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4904);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82400300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r4,3708
	ctx.r5.s64 = ctx.r4.s64 + 3708;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29644
	ctx.r3.s64 = ctx.r3.s64 + -29644;
	// bl 0x8218a5f0
	ctx.lr = 0x8240031C;
	sub_8218A5F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82164eb0
	ctx.lr = 0x8240032C;
	sub_82164EB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,26232
	ctx.r5.s64 = ctx.r11.s64 + 26232;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29516
	ctx.r3.s64 = ctx.r3.s64 + -29516;
	// bl 0x8218a5f0
	ctx.lr = 0x82400348;
	sub_8218A5F0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r29
	ctx.r5.s64 = ctx.r29.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29388
	ctx.r3.s64 = ctx.r3.s64 + -29388;
	// bl 0x82084038
	ctx.lr = 0x82400364;
	sub_82084038(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r27
	ctx.r5.s64 = ctx.r27.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29260
	ctx.r3.s64 = ctx.r3.s64 + -29260;
	// bl 0x82084038
	ctx.lr = 0x82400380;
	sub_82084038(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8240039C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8240049c
	if (ctx.cr6.eq) goto loc_8240049C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82400654
	if (!ctx.cr6.eq) goto loc_82400654;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// li r11,30231
	ctx.r11.s64 = 30231;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r9,-28364
	ctx.r9.s64 = ctx.r9.s64 + -28364;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r4,20035
	ctx.r4.s64 = 20035;
	// lwz r3,-4904(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4904);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824003F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r4,3708
	ctx.r5.s64 = ctx.r4.s64 + 3708;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29644
	ctx.r3.s64 = ctx.r3.s64 + -29644;
	// bl 0x8218a5f0
	ctx.lr = 0x82400414;
	sub_8218A5F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82164eb0
	ctx.lr = 0x82400424;
	sub_82164EB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,26232
	ctx.r5.s64 = ctx.r11.s64 + 26232;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29516
	ctx.r3.s64 = ctx.r3.s64 + -29516;
	// bl 0x8218a5f0
	ctx.lr = 0x82400440;
	sub_8218A5F0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r29
	ctx.r5.s64 = ctx.r29.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29388
	ctx.r3.s64 = ctx.r3.s64 + -29388;
	// bl 0x82084038
	ctx.lr = 0x8240045C;
	sub_82084038(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r27
	ctx.r5.s64 = ctx.r27.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29260
	ctx.r3.s64 = ctx.r3.s64 + -29260;
	// bl 0x82084038
	ctx.lr = 0x82400478;
	sub_82084038(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82400494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
loc_8240049C:
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// li r11,30231
	ctx.r11.s64 = 30231;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r9,-28364
	ctx.r9.s64 = ctx.r9.s64 + -28364;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r4,20036
	ctx.r4.s64 = 20036;
	// lwz r3,-4904(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4904);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824004DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r4,3708
	ctx.r5.s64 = ctx.r4.s64 + 3708;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29644
	ctx.r3.s64 = ctx.r3.s64 + -29644;
	// bl 0x8218a5f0
	ctx.lr = 0x824004F8;
	sub_8218A5F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82164eb0
	ctx.lr = 0x82400508;
	sub_82164EB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r5,r11,26232
	ctx.r5.s64 = ctx.r11.s64 + 26232;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29516
	ctx.r3.s64 = ctx.r3.s64 + -29516;
	// bl 0x8218a5f0
	ctx.lr = 0x82400524;
	sub_8218A5F0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r29
	ctx.r5.s64 = ctx.r29.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29388
	ctx.r3.s64 = ctx.r3.s64 + -29388;
	// bl 0x82084038
	ctx.lr = 0x82400540;
	sub_82084038(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// extsw r5,r27
	ctx.r5.s64 = ctx.r27.s32;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29260
	ctx.r3.s64 = ctx.r3.s64 + -29260;
	// bl 0x82084038
	ctx.lr = 0x8240055C;
	sub_82084038(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,148(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82400578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// li r11,30232
	ctx.r11.s64 = 30232;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r9,-28364
	ctx.r9.s64 = ctx.r9.s64 + -28364;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,-4904(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4904);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824005C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r30,r4,3708
	ctx.r30.s64 = ctx.r4.s64 + 3708;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r3,-29644
	ctx.r3.s64 = ctx.r3.s64 + -29644;
	// bl 0x8218a5f0
	ctx.lr = 0x824005E0;
	sub_8218A5F0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r18,30
	ctx.r6.s64 = ctx.r18.s64 + 30;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r3,-29516
	ctx.r3.s64 = ctx.r3.s64 + -29516;
	// bl 0x8218a5f0
	ctx.lr = 0x824005F8;
	sub_8218A5F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82400614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
	// li r11,30503
	ctx.r11.s64 = 30503;
	// li r5,9
	ctx.r5.s64 = 9;
	// b 0x82400630
	goto loc_82400630;
	// li r11,30547
	ctx.r11.s64 = 30547;
	// li r5,10
	ctx.r5.s64 = 10;
loc_82400630:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,148(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8240063C:
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82400654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82400654:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b0
	// ERROR 822487B0
	return;
}

__attribute__((alias("__imp__sub_8240065C"))) PPC_WEAK_FUNC(sub_8240065C);
PPC_FUNC_IMPL(__imp__sub_8240065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82400660"))) PPC_WEAK_FUNC(sub_82400660);
PPC_FUNC_IMPL(__imp__sub_82400660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82400668;
	sub_82248788(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r28,r28,-28324
	ctx.r28.s64 = ctx.r28.s64 + -28324;
	// addi r8,r11,-8040
	ctx.r8.s64 = ctx.r11.s64 + -8040;
	// addi r7,r10,-8176
	ctx.r7.s64 = ctx.r10.s64 + -8176;
	// addi r6,r9,-8188
	ctx.r6.s64 = ctx.r9.s64 + -8188;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r6.u32);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x824006b4
	if (ctx.cr0.lt) goto loc_824006B4;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x824006c4
	if (ctx.cr6.lt) goto loc_824006C4;
loc_824006B4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,37316
	ctx.r29.u64 = ctx.r11.u64 | 37316;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x824006d8
	goto loc_824006D8;
loc_824006C4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r29,r10,37316
	ctx.r29.u64 = ctx.r10.u64 | 37316;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_824006D8:
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x824006F0;
	sub_823E8918(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82400708
	if (ctx.cr0.lt) goto loc_82400708;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x82400710
	if (ctx.cr6.lt) goto loc_82400710;
loc_82400708:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x8240071c
	goto loc_8240071C;
loc_82400710:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8240071C:
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// bl 0x823e8918
	ctx.lr = 0x82400730;
	sub_823E8918(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r10,r11,45316
	ctx.r10.u64 = ctx.r11.u64 | 45316;
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823e8918
	ctx.lr = 0x8240074C;
	sub_823E8918(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r8,r9,37228
	ctx.r8.u64 = ctx.r9.u64 | 37228;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x823e8918
	ctx.lr = 0x82400768;
	sub_823E8918(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-4392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// ori r6,r7,37232
	ctx.r6.u64 = ctx.r7.u64 | 37232;
	// lwzx r6,r31,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// bl 0x823e8918
	ctx.lr = 0x82400784;
	sub_823E8918(ctx, base);
	// lwz r11,-4392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4392);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r30,r11,2744
	ctx.r30.s64 = ctx.r11.s64 + 2744;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248a40
	ctx.lr = 0x8240079C;
	sub_82248A40(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r5,37312
	ctx.r11.u64 = ctx.r5.u64 | 37312;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x82248a40
	ctx.lr = 0x824007BC;
	sub_82248A40(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x824007C0;
	sub_823C8E50(ctx, base);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4384(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d80
	ctx.lr = 0x824007D4;
	sub_823E9D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed3e0
	ctx.lr = 0x824007DC;
	sub_823ED3E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_824007E4"))) PPC_WEAK_FUNC(sub_824007E4);
PPC_FUNC_IMPL(__imp__sub_824007E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824007E8"))) PPC_WEAK_FUNC(sub_824007E8);
PPC_FUNC_IMPL(__imp__sub_824007E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82400a50
	sub_82400A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824007F0"))) PPC_WEAK_FUNC(sub_824007F0);
PPC_FUNC_IMPL(__imp__sub_824007F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x82400a50
	sub_82400A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824007F8"))) PPC_WEAK_FUNC(sub_824007F8);
PPC_FUNC_IMPL(__imp__sub_824007F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,37284
	ctx.r10.u64 = ctx.r11.u64 | 37284;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addic. r4,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r4.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x8240082c
	if (!ctx.cr0.lt) goto loc_8240082C;
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// b 0x82400838
	goto loc_82400838;
loc_8240082C:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x82400838
	if (ctx.cr6.lt) goto loc_82400838;
	// addi r4,r11,-3
	ctx.r4.s64 = ctx.r11.s64 + -3;
loc_82400838:
	// addi r31,r30,-28
	ctx.r31.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ff220
	ctx.lr = 0x82400844;
	sub_823FF220(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8223a910
	ctx.lr = 0x8240084C;
	sub_8223A910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82400878
	if (ctx.cr6.eq) goto loc_82400878;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r10,37280
	ctx.r9.u64 = ctx.r10.u64 | 37280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82400878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82400878:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fdc80
	ctx.lr = 0x82400884;
	sub_823FDC80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209eda0
	ctx.lr = 0x8240088C;
	sub_8209EDA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824008A4"))) PPC_WEAK_FUNC(sub_824008A4);
PPC_FUNC_IMPL(__imp__sub_824008A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824008A8"))) PPC_WEAK_FUNC(sub_824008A8);
PPC_FUNC_IMPL(__imp__sub_824008A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x824008B0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,-28
	ctx.r29.s64 = ctx.r3.s64 + -28;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x824008d8
	if (ctx.cr0.lt) goto loc_824008D8;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x824008e0
	if (ctx.cr6.lt) goto loc_824008E0;
loc_824008D8:
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// b 0x824008ec
	goto loc_824008EC;
loc_824008E0:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
loc_824008EC:
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// addi r31,r31,-28220
	ctx.r31.s64 = ctx.r31.s64 + -28220;
	// addi r30,r30,-28256
	ctx.r30.s64 = ctx.r30.s64 + -28256;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8222e360
	ctx.lr = 0x82400908;
	sub_8222E360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82400920
	if (ctx.cr6.eq) goto loc_82400920;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8222e400
	ctx.lr = 0x82400920;
	sub_8222E400(ctx, base);
loc_82400920:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8222e360
	ctx.lr = 0x82400930;
	sub_8222E360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x824009b0
	if (ctx.cr6.eq) goto loc_824009B0;
	// lis r11,-32182
	ctx.r11.s64 = -2109079552;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,19
	ctx.r7.s64 = 19;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,-8540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c7a58
	ctx.lr = 0x82400958;
	sub_820C7A58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x82400960;
	sub_82163DF0(ctx, base);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82400980
	if (!ctx.cr6.gt) goto loc_82400980;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ffde0
	ctx.lr = 0x82400978;
	sub_823FFDE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_82400980:
	// bl 0x82163df0
	ctx.lr = 0x82400984;
	sub_82163DF0(ctx, base);
	// bl 0x82164e00
	ctx.lr = 0x82400988;
	sub_82164E00(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x824009a8
	if (ctx.cr6.lt) goto loc_824009A8;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x823ffde0
	ctx.lr = 0x824009A0;
	sub_823FFDE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_824009A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824009b4
	goto loc_824009B4;
loc_824009B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_824009B4:
	// bl 0x823ffde0
	ctx.lr = 0x824009B8;
	sub_823FFDE0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824009D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_824009DC"))) PPC_WEAK_FUNC(sub_824009DC);
PPC_FUNC_IMPL(__imp__sub_824009DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824009E0"))) PPC_WEAK_FUNC(sub_824009E0);
PPC_FUNC_IMPL(__imp__sub_824009E0) {
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
	// bl 0x823ff2c8
	ctx.lr = 0x824009F8;
	sub_823FF2C8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,37312
	ctx.r11.u64 = ctx.r11.u64 | 37312;
	// li r9,13653
	ctx.r9.s64 = 13653;
	// li r8,13654
	ctx.r8.s64 = 13654;
	// li r7,15007
	ctx.r7.s64 = 15007;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r6,13655
	ctx.r6.s64 = 13655;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r4,364
	ctx.r4.s64 = 364;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82106f58
	ctx.lr = 0x82400A3C;
	sub_82106F58(ctx, base);
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

__attribute__((alias("__imp__sub_82400A50"))) PPC_WEAK_FUNC(sub_82400A50);
PPC_FUNC_IMPL(__imp__sub_82400A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82400660
	ctx.lr = 0x82400A70;
	sub_82400660(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82400a8c
	if (ctx.cr6.eq) goto loc_82400A8C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82400A88;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82400A8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82400AA4"))) PPC_WEAK_FUNC(sub_82400AA4);
PPC_FUNC_IMPL(__imp__sub_82400AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82400AA8"))) PPC_WEAK_FUNC(sub_82400AA8);
PPC_FUNC_IMPL(__imp__sub_82400AA8) {
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
	// bl 0x824009e0
	ctx.lr = 0x82400AC0;
	sub_824009E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x82400AC8;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82400ADC"))) PPC_WEAK_FUNC(sub_82400ADC);
PPC_FUNC_IMPL(__imp__sub_82400ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82400AE0"))) PPC_WEAK_FUNC(sub_82400AE0);
PPC_FUNC_IMPL(__imp__sub_82400AE0) {
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
	// bl 0x824009e0
	ctx.lr = 0x82400AF8;
	sub_824009E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf48
	ctx.lr = 0x82400B00;
	sub_823EDF48(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82400B14"))) PPC_WEAK_FUNC(sub_82400B14);
PPC_FUNC_IMPL(__imp__sub_82400B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82400B18"))) PPC_WEAK_FUNC(sub_82400B18);
PPC_FUNC_IMPL(__imp__sub_82400B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82400B20;
	sub_82248768(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r31,-784(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -784);
	// bl 0x821ebb58
	ctx.lr = 0x82400B3C;
	sub_821EBB58(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82400B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r20,r8,45320
	ctx.r20.u64 = ctx.r8.u64 | 45320;
	// lis r22,-32182
	ctx.r22.s64 = -2109079552;
	// ori r21,r7,37308
	ctx.r21.u64 = ctx.r7.u64 | 37308;
	// li r23,0
	ctx.r23.s64 = 0;
	// ori r29,r6,45324
	ctx.r29.u64 = ctx.r6.u64 | 45324;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824011c4
	if (ctx.cr6.eq) goto loc_824011C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r9,r10,35888
	ctx.r9.u64 = ctx.r10.u64 | 35888;
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwzx r27,r30,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82400B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// addi r7,r7,-28324
	ctx.r7.s64 = ctx.r7.s64 + -28324;
	// lwz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82400bb8
	if (ctx.cr0.lt) goto loc_82400BB8;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x82400bc0
	if (ctx.cr6.lt) goto loc_82400BC0;
loc_82400BB8:
	// addis r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 65536;
	// b 0x82400bcc
	goto loc_82400BCC;
loc_82400BC0:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addis r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 65536;
loc_82400BCC:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,-28220
	ctx.r28.s64 = ctx.r28.s64 + -28220;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x824011c4
	if (ctx.cr6.gt) goto loc_824011C4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82400d38
	// bdzf 4*cr6+eq,0x82400e70
	// bdzf 4*cr6+eq,0x82400fa8
	// bdzf 4*cr6+eq,0x82401170
	// bdzf 4*cr6+eq,0x82401170
	// bdzf 4*cr6+eq,0x8240117c
	// bne cr6,0x8240117c
	if (!ctx.cr6.eq) goto loc_8240117C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82400C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824011c4
	if (ctx.cr6.eq) goto loc_824011C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ec830
	ctx.lr = 0x82400C24;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x824011c4
	if (!ctx.cr6.eq) goto loc_824011C4;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r31,r30,r29
	ctx.r31.u64 = ctx.r30.u64 + ctx.r29.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r10,-4392(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4392);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r9,772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 772, ctx.r9.u32);
	// lwzx r4,r30,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r21.u32);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r8,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r8.u16);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// sth r23,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r23.u16);
	// sth r23,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r23.u16);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stwx r23,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r23.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// stw r23,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r23.u32);
	// bl 0x82163df0
	ctx.lr = 0x82400CA8;
	sub_82163DF0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82164d90
	ctx.lr = 0x82400CB0;
	sub_82164D90(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r7,19
	ctx.r7.s64 = 19;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stwx r27,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r27.u32);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lhz r6,98(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lwzx r5,r30,r21
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r21.u32);
	// lwz r11,-8540(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c7a58
	ctx.lr = 0x82400CEC;
	sub_820C7A58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x82400CF4;
	sub_82163DF0(ctx, base);
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// subf. r11,r31,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82400d08
	if (!ctx.cr0.lt) goto loc_82400D08;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82400d1c
	goto loc_82400D1C;
loc_82400D08:
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51612
	ctx.r10.u64 = ctx.r10.u64 | 51612;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82400d1c
	if (!ctx.cr6.gt) goto loc_82400D1C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82400D1C:
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// li r3,10009
	ctx.r3.s64 = 10009;
	// bl 0x8208f658
	ctx.lr = 0x82400D28;
	sub_8208F658(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ffde0
	ctx.lr = 0x82400D34;
	sub_823FFDE0(ctx, base);
	// b 0x824011c4
	goto loc_824011C4;
loc_82400D38:
	// lwzx r11,r30,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r21.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r23,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r23.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// sth r23,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r23.u16);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// sth r7,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r7.u16);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// sth r6,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r6.u16);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82400D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82400e34
	if (ctx.cr6.eq) goto loc_82400E34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ec830
	ctx.lr = 0x82400D8C;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82400e34
	if (!ctx.cr6.eq) goto loc_82400E34;
	// lhz r31,90(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x82163df0
	ctx.lr = 0x82400DA0;
	sub_82163DF0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82164d90
	ctx.lr = 0x82400DA8;
	sub_82164D90(ctx, base);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lhz r6,90(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lwz r11,-8540(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c7a58
	ctx.lr = 0x82400DE8;
	sub_820C7A58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x82400DF0;
	sub_82163DF0(ctx, base);
	// lwz r7,92(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// subf. r11,r31,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82400e04
	if (!ctx.cr0.lt) goto loc_82400E04;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82400e18
	goto loc_82400E18;
loc_82400E04:
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51612
	ctx.r10.u64 = ctx.r10.u64 | 51612;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82400e18
	if (!ctx.cr6.gt) goto loc_82400E18;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82400E18:
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// li r3,10009
	ctx.r3.s64 = 10009;
	// bl 0x8208f658
	ctx.lr = 0x82400E24;
	sub_8208F658(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ffde0
	ctx.lr = 0x82400E30;
	sub_823FFDE0(ctx, base);
	// b 0x824011c4
	goto loc_824011C4;
loc_82400E34:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lhz r7,90(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r5,r30,r20
	PPC_STORE_U32(ctx.r30.u32 + ctx.r20.u32, ctx.r5.u32);
	// b 0x824011c4
	goto loc_824011C4;
loc_82400E70:
	// lwzx r11,r30,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r21.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r23,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r23.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,-6
	ctx.r9.s64 = ctx.r11.s64 + -6;
	// sth r23,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r23.u16);
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// sth r6,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r6.u16);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82400EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82400f6c
	if (ctx.cr6.eq) goto loc_82400F6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ec830
	ctx.lr = 0x82400EC4;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82400f6c
	if (!ctx.cr6.eq) goto loc_82400F6C;
	// lhz r31,82(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x82163df0
	ctx.lr = 0x82400ED8;
	sub_82163DF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82164d90
	ctx.lr = 0x82400EE0;
	sub_82164D90(ctx, base);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lwz r11,-8540(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8540);
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// bl 0x820c7a58
	ctx.lr = 0x82400F20;
	sub_820C7A58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x82400F28;
	sub_82163DF0(ctx, base);
	// lwz r7,92(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// subf. r11,r31,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82400f3c
	if (!ctx.cr0.lt) goto loc_82400F3C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82400f50
	goto loc_82400F50;
loc_82400F3C:
	// lis r10,15258
	ctx.r10.s64 = 999948288;
	// ori r10,r10,51612
	ctx.r10.u64 = ctx.r10.u64 | 51612;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82400f50
	if (!ctx.cr6.gt) goto loc_82400F50;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82400F50:
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// li r3,10009
	ctx.r3.s64 = 10009;
	// bl 0x8208f658
	ctx.lr = 0x82400F5C;
	sub_8208F658(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ffde0
	ctx.lr = 0x82400F68;
	sub_823FFDE0(ctx, base);
	// b 0x824011c4
	goto loc_824011C4;
loc_82400F6C:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lhz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r5,r30,r20
	PPC_STORE_U32(ctx.r30.u32 + ctx.r20.u32, ctx.r5.u32);
	// b 0x824011c4
	goto loc_824011C4;
loc_82400FA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82400FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824011c0
	if (ctx.cr6.eq) goto loc_824011C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ec830
	ctx.lr = 0x82400FD0;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x824011c0
	if (!ctx.cr6.eq) goto loc_824011C0;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// lwz r11,-8540(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8540);
	// add r31,r30,r29
	ctx.r31.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r27,r11,1696
	ctx.r27.s64 = ctx.r11.s64 + 1696;
	// lwz r11,-4392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4392);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r26,r11,r31
	ctx.r26.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82163e58
	ctx.lr = 0x82401004;
	sub_82163E58(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82401018:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82401018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82401018;
	// bl 0x8223aa28
	ctx.lr = 0x82401024;
	sub_8223AA28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820c8218
	ctx.lr = 0x82401034;
	sub_820C8218(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x820c7290
	ctx.lr = 0x82401050;
	sub_820C7290(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ca128
	ctx.lr = 0x82401068;
	sub_820CA128(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820c7050
	ctx.lr = 0x82401070;
	sub_820C7050(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820c7070
	ctx.lr = 0x8240107C;
	sub_820C7070(ctx, base);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lfs f0,-19544(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x824010b8
	if (!ctx.cr6.gt) goto loc_824010B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,30184
	ctx.r4.s64 = 30184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824010AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_824010B8:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x824010ec
	if (!ctx.cr6.gt) goto loc_824010EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,30185
	ctx.r4.s64 = 30185;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824010E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_824010EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82401128
	if (!ctx.cr6.gt) goto loc_82401128;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,30524
	ctx.r4.s64 = 30524;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8240111C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_82401128:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8240115c
	if (!ctx.cr6.gt) goto loc_8240115C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,30525
	ctx.r4.s64 = 30525;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82401150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_8240115C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r24,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r24.u32);
	// b 0x824011c0
	goto loc_824011C0;
loc_82401170:
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r30,r20
	PPC_STORE_U32(ctx.r30.u32 + ctx.r20.u32, ctx.r11.u32);
	// b 0x824011c4
	goto loc_824011C4;
loc_8240117C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82401190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824011c0
	if (ctx.cr6.eq) goto loc_824011C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ec830
	ctx.lr = 0x824011A4;
	sub_821EC830(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x824011c0
	if (!ctx.cr6.eq) goto loc_824011C0;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r24,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r24.u32);
loc_824011C0:
	// stwx r24,r30,r20
	PPC_STORE_U32(ctx.r30.u32 + ctx.r20.u32, ctx.r24.u32);
loc_824011C4:
	// lwzx r11,r30,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	// add r10,r30,r20
	ctx.r10.u64 = ctx.r30.u64 + ctx.r20.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8240141c
	if (!ctx.cr6.eq) goto loc_8240141C;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82401200
	if (ctx.cr6.eq) goto loc_82401200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fe148
	ctx.lr = 0x82401200;
	sub_823FE148(ctx, base);
loc_82401200:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,45356
	ctx.r10.u64 = ctx.r11.u64 | 45356;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bgt cr6,0x82401384
	if (ctx.cr6.gt) goto loc_82401384;
	// lwzx r11,r30,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r21.u32);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82401384
	if (ctx.cr6.gt) goto loc_82401384;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8240123c
	// bdzf 4*cr6+eq,0x824012e0
	// bne cr6,0x824012e0
	if (!ctx.cr6.eq) goto loc_824012E0;
loc_8240123C:
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r11,-8540(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8540);
	// li r7,19
	ctx.r7.s64 = 19;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// addi r29,r10,4
	ctx.r29.s64 = ctx.r10.s64 + 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x820c7a58
	ctx.lr = 0x82401268;
	sub_820C7A58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x82401270;
	sub_82163DF0(ctx, base);
	// lwz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r7,r28,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// subfc r5,r28,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r28.u32;
	ctx.r5.s64 = ctx.r8.s64 - ctx.r28.s64;
	// adde r28,r7,r6
	temp.u8 = (ctx.r7.u32 + ctx.r6.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ctx.r7.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82163df0
	ctx.lr = 0x82401288;
	sub_82163DF0(ctx, base);
	// bl 0x82164e00
	ctx.lr = 0x8240128C;
	sub_82164E00(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// subfc r10,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r31,r8,31
	ctx.r31.u64 = ctx.r8.u32 & 0x1;
	// bl 0x8222e360
	ctx.lr = 0x824012B0;
	sub_8222E360(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82401384
	if (ctx.cr6.eq) goto loc_82401384;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82401384
	if (ctx.cr6.eq) goto loc_82401384;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82401384
	if (ctx.cr6.eq) goto loc_82401384;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ffde0
	ctx.lr = 0x824012D4;
	sub_823FFDE0(ctx, base);
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_824012E0:
	// addi r10,r11,-6
	ctx.r10.s64 = ctx.r11.s64 + -6;
	// lwz r11,-8540(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -8540);
	// li r7,19
	ctx.r7.s64 = 19;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// addi r29,r10,6
	ctx.r29.s64 = ctx.r10.s64 + 6;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x820c7a58
	ctx.lr = 0x8240130C;
	sub_820C7A58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82163df0
	ctx.lr = 0x82401314;
	sub_82163DF0(ctx, base);
	// lwz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r7,r28,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// subfc r5,r28,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r28.u32;
	ctx.r5.s64 = ctx.r8.s64 - ctx.r28.s64;
	// adde r28,r7,r6
	temp.u8 = (ctx.r7.u32 + ctx.r6.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ctx.r7.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82163df0
	ctx.lr = 0x8240132C;
	sub_82163DF0(ctx, base);
	// bl 0x82164e00
	ctx.lr = 0x82401330;
	sub_82164E00(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// subfc r10,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r31,r8,31
	ctx.r31.u64 = ctx.r8.u32 & 0x1;
	// bl 0x8222e360
	ctx.lr = 0x82401354;
	sub_8222E360(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82401384
	if (ctx.cr6.eq) goto loc_82401384;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82401384
	if (ctx.cr6.eq) goto loc_82401384;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82401384
	if (ctx.cr6.eq) goto loc_82401384;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ffde0
	ctx.lr = 0x82401378;
	sub_823FFDE0(ctx, base);
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_82401384:
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8240141c
	if (!ctx.cr6.gt) goto loc_8240141C;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r10,r10,-20200
	ctx.r10.s64 = ctx.r10.s64 + -20200;
loc_824013A0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824013b0
	if (ctx.cr6.eq) goto loc_824013B0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_824013B0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x824013a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824013A0;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x8240141c
	if (ctx.cr6.eq) goto loc_8240141C;
	// bl 0x8223a8c8
	ctx.lr = 0x824013C8;
	sub_8223A8C8(ctx, base);
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r31,r31,-20208
	ctx.r31.s64 = ctx.r31.s64 + -20208;
loc_824013D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240140c
	if (ctx.cr6.eq) goto loc_8240140C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r10,r28,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r28.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,-4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8240140C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8240140C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x824013d4
	if (ctx.cr6.lt) goto loc_824013D4;
loc_8240141C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ff2c8
	ctx.lr = 0x82401424;
	sub_823FF2C8(ctx, base);
	// li r10,13655
	ctx.r10.s64 = 13655;
	// li r5,15007
	ctx.r5.s64 = 15007;
	// lwz r3,832(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// li r11,13654
	ctx.r11.s64 = 13654;
	// ori r7,r9,37312
	ctx.r7.u64 = ctx.r9.u64 | 37312;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r6,13653
	ctx.r6.s64 = 13653;
	// li r4,364
	ctx.r4.s64 = 364;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// lwzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// bl 0x82106f58
	ctx.lr = 0x82401468;
	sub_82106F58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823edf68
	ctx.lr = 0x82401470;
	sub_823EDF68(ctx, base);
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8240147C"))) PPC_WEAK_FUNC(sub_8240147C);
PPC_FUNC_IMPL(__imp__sub_8240147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82401480"))) PPC_WEAK_FUNC(sub_82401480);
PPC_FUNC_IMPL(__imp__sub_82401480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,832(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// addi r30,r30,-28228
	ctx.r30.s64 = ctx.r30.s64 + -28228;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,14228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14228, ctx.r11.u32);
	// lwz r7,832(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,15524(r6)
	PPC_STORE_U32(ctx.r6.u32 + 15524, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,-4392(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4392);
	// bl 0x823e89a0
	ctx.lr = 0x824014CC;
	sub_823E89A0(ctx, base);
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r11,r4,25308
	ctx.r11.u64 = ctx.r4.u64 | 25308;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823e97f0
	ctx.lr = 0x824014E8;
	sub_823E97F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,356
	ctx.r4.s64 = 356;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x824014FC;
	sub_82106F58(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,355
	ctx.r4.s64 = 355;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x8240150C;
	sub_82106F58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824009e0
	ctx.lr = 0x82401514;
	sub_824009E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240152C"))) PPC_WEAK_FUNC(sub_8240152C);
PPC_FUNC_IMPL(__imp__sub_8240152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82401530"))) PPC_WEAK_FUNC(sub_82401530);
PPC_FUNC_IMPL(__imp__sub_82401530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x82401538;
	sub_82248768(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823edb98
	ctx.lr = 0x82401544;
	sub_823EDB98(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// addi r5,r5,-28292
	ctx.r5.s64 = ctx.r5.s64 + -28292;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// ori r20,r10,37316
	ctx.r20.u64 = ctx.r10.u64 | 37316;
	// ori r4,r9,37312
	ctx.r4.u64 = ctx.r9.u64 | 37312;
	// addi r22,r22,-28228
	ctx.r22.s64 = ctx.r22.s64 + -28228;
	// addi r10,r7,-8176
	ctx.r10.s64 = ctx.r7.s64 + -8176;
	// addi r3,r8,-8040
	ctx.r3.s64 = ctx.r8.s64 + -8040;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r6,-8188
	ctx.r9.s64 = ctx.r6.s64 + -8188;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// li r8,11
	ctx.r8.s64 = 11;
	// stw r29,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r30,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// add r21,r31,r20
	ctx.r21.u64 = ctx.r31.u64 + ctx.r20.u64;
	// stw r29,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r29.u32);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r29,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r29.u32);
	// addi r11,r21,-8
	ctx.r11.s64 = ctx.r21.s64 + -8;
	// stw r30,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r30.u32);
	// stw r29,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r29.u32);
	// stw r30,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r30.u32);
	// stw r29,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r29.u32);
	// stw r30,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r30.u32);
	// stw r29,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r29.u32);
	// stw r30,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r30.u32);
	// stw r29,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r29.u32);
	// stw r30,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, ctx.r30.u32);
	// stw r29,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r29.u32);
	// stw r30,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r30.u32);
	// stw r8,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r8.u32);
	// stwx r7,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
loc_824015F4:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824015f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824015F4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// ori r9,r11,45320
	ctx.r9.u64 = ctx.r11.u64 | 45320;
	// addi r28,r28,-20220
	ctx.r28.s64 = ctx.r28.s64 + -20220;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r11,-20212
	ctx.r11.s64 = ctx.r11.s64 + -20212;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// lis r27,-32177
	ctx.r27.s64 = -2108751872;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// li r7,131
	ctx.r7.s64 = 131;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r5,r6,192
	ctx.r5.u64 = ctx.r6.u64 | 192;
	// xori r4,r5,16
	ctx.r4.u64 = ctx.r5.u64 ^ 16;
	// stw r7,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r7.u32);
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// lwz r11,-4392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// lwz r11,2744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2744);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r11,-4392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// lwz r4,2768(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2768);
	// bl 0x823ff220
	ctx.lr = 0x824016A4;
	sub_823FF220(ctx, base);
	// lwz r3,-4392(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4392);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x823e8958
	ctx.lr = 0x824016B8;
	sub_823E8958(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x823e8958
	ctx.lr = 0x824016CC;
	sub_823E8958(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x823e8958
	ctx.lr = 0x824016E0;
	sub_823E8958(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x823e8958
	ctx.lr = 0x824016F4;
	sub_823E8958(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823e8958
	ctx.lr = 0x82401708;
	sub_823E8958(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x82401730
	if (ctx.cr6.eq) goto loc_82401730;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x82401730
	if (ctx.cr6.eq) goto loc_82401730;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82401738
	if (ctx.cr6.eq) goto loc_82401738;
loc_82401730:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82401738:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// bl 0x823ee538
	ctx.lr = 0x82401774;
	sub_823EE538(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8240177C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82401794
	if (!ctx.cr6.eq) goto loc_82401794;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x824017a8
	if (ctx.cr6.eq) goto loc_824017A8;
loc_82401794:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r29,1000
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1000, ctx.xer);
	// blt cr6,0x8240177c
	if (ctx.cr6.lt) goto loc_8240177C;
	// b 0x824017f4
	goto loc_824017F4;
loc_824017A8:
	// add r11,r24,r25
	ctx.r11.u64 = ctx.r24.u64 + ctx.r25.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x824017f4
	if (ctx.cr6.eq) goto loc_824017F4;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee538
	ctx.lr = 0x824017C8;
	sub_823EE538(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x824017f4
	if (!ctx.cr6.gt) goto loc_824017F4;
loc_824017D0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee560
	ctx.lr = 0x824017EC;
	sub_823EE560(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x824017d0
	if (!ctx.cr0.eq) goto loc_824017D0;
loc_824017F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// lfs f2,14876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x82401814;
	sub_823C31B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ca688
	ctx.lr = 0x8240181C;
	sub_823CA688(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r29,r29,-28324
	ctx.r29.s64 = ctx.r29.s64 + -28324;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82401844
	if (ctx.cr0.lt) goto loc_82401844;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x8240184c
	if (ctx.cr6.lt) goto loc_8240184C;
loc_82401844:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x82401858
	goto loc_82401858;
loc_8240184C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_82401858:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,-4384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823e9d10
	ctx.lr = 0x82401878;
	sub_823E9D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82401480
	ctx.lr = 0x82401880;
	sub_82401480(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// bl 0x823c8df0
	ctx.lr = 0x82401888;
	sub_823C8DF0(ctx, base);
	// bl 0x8223a960
	ctx.lr = 0x8240188C;
	sub_8223A960(ctx, base);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x824018a4
	if (ctx.cr0.lt) goto loc_824018A4;
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// blt cr6,0x824018ac
	if (ctx.cr6.lt) goto loc_824018AC;
loc_824018A4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x824018b8
	goto loc_824018B8;
loc_824018AC:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_824018B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822368b0
	ctx.lr = 0x824018C4;
	sub_822368B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x821eb290
	ctx.lr = 0x824018D0;
	sub_821EB290(ctx, base);
	// li r4,354
	ctx.r4.s64 = 354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cdf48
	ctx.lr = 0x824018DC;
	sub_823CDF48(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r11,r11,12888
	ctx.r11.s64 = ctx.r11.s64 + 12888;
	// addi r30,r11,-12
	ctx.r30.s64 = ctx.r11.s64 + -12;
loc_824018EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x823cdf48
	ctx.lr = 0x824018F8;
	sub_823CDF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,64(r30)
	ea = 64 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x823cdf48
	ctx.lr = 0x82401904;
	sub_823CDF48(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x824018ec
	if (!ctx.cr0.eq) goto loc_824018EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_82401918"))) PPC_WEAK_FUNC(sub_82401918);
PPC_FUNC_IMPL(__imp__sub_82401918) {
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
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-7320
	ctx.r8.s64 = ctx.r11.s64 + -7320;
	// addi r7,r10,-7456
	ctx.r7.s64 = ctx.r10.s64 + -7456;
	// addi r6,r9,-7468
	ctx.r6.s64 = ctx.r9.s64 + -7468;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// ori r10,r11,37300
	ctx.r10.u64 = ctx.r11.u64 | 37300;
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r3,-4392(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4392);
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823e8918
	ctx.lr = 0x82401970;
	sub_823E8918(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x82401974;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed3e0
	ctx.lr = 0x8240197C;
	sub_823ED3E0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82401990"))) PPC_WEAK_FUNC(sub_82401990);
PPC_FUNC_IMPL(__imp__sub_82401990) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,-28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 792, ctx.r10.u32);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r8,644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 644, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_824019B8"))) PPC_WEAK_FUNC(sub_824019B8);
PPC_FUNC_IMPL(__imp__sub_824019B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x824019c8
	sub_824019C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824019C0"))) PPC_WEAK_FUNC(sub_824019C0);
PPC_FUNC_IMPL(__imp__sub_824019C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x824019c8
	sub_824019C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824019C8"))) PPC_WEAK_FUNC(sub_824019C8);
PPC_FUNC_IMPL(__imp__sub_824019C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82401918
	ctx.lr = 0x824019E8;
	sub_82401918(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82401a04
	if (ctx.cr6.eq) goto loc_82401A04;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82401A00;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82401A04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82401A1C"))) PPC_WEAK_FUNC(sub_82401A1C);
PPC_FUNC_IMPL(__imp__sub_82401A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82401A20"))) PPC_WEAK_FUNC(sub_82401A20);
PPC_FUNC_IMPL(__imp__sub_82401A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37272
	ctx.r10.u64 = ctx.r11.u64 | 37272;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82401a54
	if (!ctx.cr6.eq) goto loc_82401A54;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,4652
	ctx.r11.s64 = ctx.r11.s64 + 4652;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82401a54
	if (!ctx.cr6.eq) goto loc_82401A54;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82401A54:
	// b 0x823ed5b0
	sub_823ED5B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82401A58"))) PPC_WEAK_FUNC(sub_82401A58);
PPC_FUNC_IMPL(__imp__sub_82401A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224875c
	ctx.lr = 0x82401A60;
	sub_8224875C(ctx, base);
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r23,56(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8218b408
	ctx.lr = 0x82401A7C;
	sub_8218B408(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x82401A88;
	sub_8218B408(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x823c3280
	ctx.lr = 0x82401A98;
	sub_823C3280(ctx, base);
	// addi r11,r23,-1
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// addi r10,r23,-2
	ctx.r10.s64 = ctx.r23.s64 + -2;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r7,r23,-5
	ctx.r7.s64 = ctx.r23.s64 + -5;
	// lis r30,0
	ctx.r30.s64 = 0;
	// lis r27,0
	ctx.r27.s64 = 0;
	// cntlzw r19,r11
	ctx.r19.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r20,r23
	ctx.r20.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// cntlzw r18,r10
	ctx.r18.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// ori r27,r27,37288
	ctx.r27.u64 = ctx.r27.u64 | 37288;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// ori r30,r30,37264
	ctx.r30.u64 = ctx.r30.u64 | 37264;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r9,r23,-3
	ctx.r9.s64 = ctx.r23.s64 + -3;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lis r29,0
	ctx.r29.s64 = 0;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r24,0
	ctx.r24.s64 = 0;
	// addi r8,r23,-4
	ctx.r8.s64 = ctx.r23.s64 + -4;
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// addi r6,r23,-6
	ctx.r6.s64 = ctx.r23.s64 + -6;
	// stw r22,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r22.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r28,0
	ctx.r28.s64 = 0;
	// rlwinm r3,r20,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 27) & 0x1;
	// ori r29,r29,37272
	ctx.r29.u64 = ctx.r29.u64 | 37272;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r20,r18,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 27) & 0x1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stwx r20,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r20.u32);
	// ori r17,r24,37296
	ctx.r17.u64 = ctx.r24.u64 | 37296;
	// ori r5,r5,37248
	ctx.r5.u64 = ctx.r5.u64 | 37248;
	// stwx r7,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r7.u32);
	// ori r4,r4,37256
	ctx.r4.u64 = ctx.r4.u64 | 37256;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// ori r28,r28,37280
	ctx.r28.u64 = ctx.r28.u64 | 37280;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stwx r3,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// addi r21,r10,-7872
	ctx.r21.s64 = ctx.r10.s64 + -7872;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// li r24,0
	ctx.r24.s64 = 0;
	// rlwinm r10,r19,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 27) & 0x1;
	// stwx r9,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stwx r10,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// addis r20,r31,1
	ctx.r20.s64 = ctx.r31.s64 + 65536;
	// stwx r8,r31,r28
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u32);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// stwx r6,r31,r17
	PPC_STORE_U32(ctx.r31.u32 + ctx.r17.u32, ctx.r6.u32);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r20,r20,-28236
	ctx.r20.s64 = ctx.r20.s64 + -28236;
	// addi r30,r21,-12
	ctx.r30.s64 = ctx.r21.s64 + -12;
	// addi r27,r27,-28292
	ctx.r27.s64 = ctx.r27.s64 + -28292;
loc_82401B90:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82401bec
	if (ctx.cr6.gt) goto loc_82401BEC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82401bc8
	// bdzf 4*cr6+eq,0x82401bd0
	// bne cr6,0x82401bd8
	if (!ctx.cr6.eq) goto loc_82401BD8;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// b 0x82401bdc
	goto loc_82401BDC;
loc_82401BC8:
	// addi r11,r29,-3
	ctx.r11.s64 = ctx.r29.s64 + -3;
	// b 0x82401bdc
	goto loc_82401BDC;
loc_82401BD0:
	// addi r11,r29,-5
	ctx.r11.s64 = ctx.r29.s64 + -5;
	// b 0x82401bdc
	goto loc_82401BDC;
loc_82401BD8:
	// addi r11,r29,-6
	ctx.r11.s64 = ctx.r29.s64 + -6;
loc_82401BDC:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82401BEC:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82401c0c
	if (ctx.cr6.lt) goto loc_82401C0C;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r11.u32);
loc_82401C0C:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82401c34
	if (ctx.cr6.lt) goto loc_82401C34;
	// lwz r7,832(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r5,196(r4)
	PPC_STORE_U32(ctx.r4.u32 + 196, ctx.r5.u32);
loc_82401C34:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// bne cr6,0x82401c44
	if (!ctx.cr6.eq) goto loc_82401C44;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_82401C44:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lwz r4,832(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f6,200(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 200, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f4,204(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 204, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f3,208(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 208, temp.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82401cf0
	if (ctx.cr6.eq) goto loc_82401CF0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82401cf0
	if (ctx.cr6.lt) goto loc_82401CF0;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_82401CF0:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82401d20
	if (ctx.cr6.eq) goto loc_82401D20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82401d20
	if (ctx.cr6.lt) goto loc_82401D20;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_82401D20:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82401d40
	if (ctx.cr6.lt) goto loc_82401D40;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r24,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r24.u32);
loc_82401D40:
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x82401D50;
	sub_82106F58(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bne cr6,0x82401d60
	if (!ctx.cr6.eq) goto loc_82401D60;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82401D60:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f6,120(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 208, temp.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82401e04
	if (ctx.cr6.lt) goto loc_82401E04;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r24,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r24.u32);
loc_82401E04:
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x82401E14;
	sub_82106F58(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bne cr6,0x82401e24
	if (!ctx.cr6.eq) goto loc_82401E24;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82401E24:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwzu r11,32(r30)
	ea = 32 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 7, ctx.xer);
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 200, temp.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lfd f10,136(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f6,144(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// blt cr6,0x82401b90
	if (ctx.cr6.lt) goto loc_82401B90;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82401fac
	if (!ctx.cr6.eq) goto loc_82401FAC;
	// extsw r10,r22
	ctx.r10.s64 = ctx.r22.s32;
	// addi r11,r21,224
	ctx.r11.s64 = ctx.r21.s64 + 224;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// li r28,2
	ctx.r28.s64 = 2;
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_82401EEC:
	// subf r10,r29,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r29.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x82401f18
	if (ctx.cr6.lt) goto loc_82401F18;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r10.u32);
loc_82401F18:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82401f40
	if (ctx.cr6.lt) goto loc_82401F40;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_82401F40:
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,204(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,208(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82401f90
	if (ctx.cr6.lt) goto loc_82401F90;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_82401F90:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzu r5,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x82401FA0;
	sub_82106F58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x82401eec
	if (!ctx.cr0.eq) goto loc_82401EEC;
loc_82401FAC:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824020a0
	if (!ctx.cr6.eq) goto loc_824020A0;
	// extsw r10,r22
	ctx.r10.s64 = ctx.r22.s32;
	// addi r11,r21,264
	ctx.r11.s64 = ctx.r21.s64 + 264;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_82401FE0:
	// subf r10,r29,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r29.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x8240200c
	if (ctx.cr6.lt) goto loc_8240200C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
loc_8240200C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82402034
	if (ctx.cr6.lt) goto loc_82402034;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_82402034:
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,204(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f30,208(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82402084
	if (ctx.cr6.lt) goto loc_82402084;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_82402084:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzu r5,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x82402094;
	sub_82106F58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x82401fe0
	if (!ctx.cr0.eq) goto loc_82401FE0;
loc_824020A0:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82402194
	if (!ctx.cr6.eq) goto loc_82402194;
	// extsw r10,r22
	ctx.r10.s64 = ctx.r22.s32;
	// addi r11,r21,304
	ctx.r11.s64 = ctx.r21.s64 + 304;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// li r28,3
	ctx.r28.s64 = 3;
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_824020D4:
	// subf r10,r29,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r29.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x82402100
	if (ctx.cr6.lt) goto loc_82402100;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
loc_82402100:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82402128
	if (ctx.cr6.lt) goto loc_82402128;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_82402128:
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,204(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f30,208(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82402178
	if (ctx.cr6.lt) goto loc_82402178;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_82402178:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzu r5,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x82402188;
	sub_82106F58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x824020d4
	if (!ctx.cr0.eq) goto loc_824020D4;
loc_82402194:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82402288
	if (!ctx.cr6.eq) goto loc_82402288;
	// extsw r10,r22
	ctx.r10.s64 = ctx.r22.s32;
	// addi r11,r21,364
	ctx.r11.s64 = ctx.r21.s64 + 364;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_824021C8:
	// subf r10,r29,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r29.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x824021f4
	if (ctx.cr6.lt) goto loc_824021F4;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
loc_824021F4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8240221c
	if (ctx.cr6.lt) goto loc_8240221C;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
loc_8240221C:
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,204(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,208(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8240226c
	if (ctx.cr6.lt) goto loc_8240226C;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r24.u32);
loc_8240226C:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzu r5,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x8240227C;
	sub_82106F58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x824021c8
	if (!ctx.cr0.eq) goto loc_824021C8;
loc_82402288:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822487ac
	// ERROR 822487AC
	return;
}

__attribute__((alias("__imp__sub_82402298"))) PPC_WEAK_FUNC(sub_82402298);
PPC_FUNC_IMPL(__imp__sub_82402298) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r9,r10,37300
	ctx.r9.u64 = ctx.r10.u64 | 37300;
	// lwzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x824022e0
	// bdzf 4*cr6+eq,0x82402304
	// bdzf 4*cr6+eq,0x82402328
	// bne cr6,0x8240234c
	if (!ctx.cr6.eq) goto loc_8240234C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r10,-7872
	ctx.r11.s64 = ctx.r10.s64 + -7872;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
loc_824022E0:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r10,224
	ctx.r11.s64 = ctx.r10.s64 + 224;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
loc_82402304:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-7872
	ctx.r10.s64 = ctx.r10.s64 + -7872;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r10,264
	ctx.r11.s64 = ctx.r10.s64 + 264;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
loc_82402328:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-7872
	ctx.r9.s64 = ctx.r9.s64 + -7872;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,304
	ctx.r11.s64 = ctx.r9.s64 + 304;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
loc_8240234C:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-7872
	ctx.r9.s64 = ctx.r9.s64 + -7872;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,364
	ctx.r11.s64 = ctx.r9.s64 + 364;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x821eb290
	sub_821EB290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82402370"))) PPC_WEAK_FUNC(sub_82402370);
PPC_FUNC_IMPL(__imp__sub_82402370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82402374"))) PPC_WEAK_FUNC(sub_82402374);
PPC_FUNC_IMPL(__imp__sub_82402374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82402378"))) PPC_WEAK_FUNC(sub_82402378);
PPC_FUNC_IMPL(__imp__sub_82402378) {
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
	// bl 0x823ede10
	ctx.lr = 0x82402390;
	sub_823EDE10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x82402298
	ctx.lr = 0x8240239C;
	sub_82402298(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_824023B0"))) PPC_WEAK_FUNC(sub_824023B0);
PPC_FUNC_IMPL(__imp__sub_824023B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lwz r9,832(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// addi r10,r10,-28236
	ctx.r10.s64 = ctx.r10.s64 + -28236;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13076(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13076, ctx.r6.u32);
	// lwz r5,832(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subfe r8,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,13220(r9)
	PPC_STORE_U32(ctx.r9.u32 + 13220, ctx.r8.u32);
	// lwz r7,832(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subfe r4,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,13364(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13364, ctx.r4.u32);
	// lwz r9,832(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subfe r6,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,13508(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13508, ctx.r6.u32);
	// b 0x82401a58
	sub_82401A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240242C"))) PPC_WEAK_FUNC(sub_8240242C);
PPC_FUNC_IMPL(__imp__sub_8240242C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82402430"))) PPC_WEAK_FUNC(sub_82402430);
PPC_FUNC_IMPL(__imp__sub_82402430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82402438;
	sub_82248778(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r24,r3,1
	ctx.r24.s64 = ctx.r3.s64 + 65536;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// addi r24,r24,-28236
	ctx.r24.s64 = ctx.r24.s64 + -28236;
	// lis r26,-32177
	ctx.r26.s64 = -2108751872;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-4392(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4392);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x823e8958
	ctx.lr = 0x82402480;
	sub_823E8958(ctx, base);
	// lwz r11,-4392(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4392);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823e8958
	ctx.lr = 0x82402498;
	sub_823E8958(ctx, base);
	// lwz r11,-4392(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4392);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x823e8958
	ctx.lr = 0x824024B0;
	sub_823E8958(ctx, base);
	// lwz r11,-4392(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4392);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x823e8958
	ctx.lr = 0x824024C8;
	sub_823E8958(ctx, base);
	// lwz r11,-4392(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4392);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823e8958
	ctx.lr = 0x824024E0;
	sub_823E8958(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82402540
	if (ctx.cr6.gt) goto loc_82402540;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82402510
	// bdzf 4*cr6+eq,0x82402518
	// bdzf 4*cr6+eq,0x82402520
	// bne cr6,0x8240252c
	if (!ctx.cr6.eq) goto loc_8240252C;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// b 0x82402534
	goto loc_82402534;
loc_82402510:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x82402530
	goto loc_82402530;
loc_82402518:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// b 0x82402530
	goto loc_82402530;
loc_82402520:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// b 0x82402534
	goto loc_82402534;
loc_8240252C:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82402530:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82402534:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82402540:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// bl 0x82402298
	ctx.lr = 0x82402574;
	sub_82402298(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8240257C"))) PPC_WEAK_FUNC(sub_8240257C);
PPC_FUNC_IMPL(__imp__sub_8240257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82402580"))) PPC_WEAK_FUNC(sub_82402580);
PPC_FUNC_IMPL(__imp__sub_82402580) {
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
	// bl 0x824023b0
	ctx.lr = 0x82402598;
	sub_824023B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213d730
	ctx.lr = 0x824025A0;
	sub_8213D730(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_824025B4"))) PPC_WEAK_FUNC(sub_824025B4);
PPC_FUNC_IMPL(__imp__sub_824025B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824025B8"))) PPC_WEAK_FUNC(sub_824025B8);
PPC_FUNC_IMPL(__imp__sub_824025B8) {
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
	// bl 0x8223ad48
	ctx.lr = 0x824025D0;
	sub_8223AD48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824025e8
	if (ctx.cr6.eq) goto loc_824025E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824023b0
	ctx.lr = 0x824025E0;
	sub_824023B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf48
	ctx.lr = 0x824025E8;
	sub_823EDF48(ctx, base);
loc_824025E8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_824025FC"))) PPC_WEAK_FUNC(sub_824025FC);
PPC_FUNC_IMPL(__imp__sub_824025FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82402600"))) PPC_WEAK_FUNC(sub_82402600);
PPC_FUNC_IMPL(__imp__sub_82402600) {
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
	// bl 0x824023b0
	ctx.lr = 0x82402618;
	sub_824023B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edf68
	ctx.lr = 0x82402620;
	sub_823EDF68(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82402634"))) PPC_WEAK_FUNC(sub_82402634);
PPC_FUNC_IMPL(__imp__sub_82402634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82402638"))) PPC_WEAK_FUNC(sub_82402638);
PPC_FUNC_IMPL(__imp__sub_82402638) {
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
	// bl 0x824023b0
	ctx.lr = 0x82402650;
	sub_824023B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823edfc0
	ctx.lr = 0x82402658;
	sub_823EDFC0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8240266C"))) PPC_WEAK_FUNC(sub_8240266C);
PPC_FUNC_IMPL(__imp__sub_8240266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82402670"))) PPC_WEAK_FUNC(sub_82402670);
PPC_FUNC_IMPL(__imp__sub_82402670) {
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
	// bl 0x824023b0
	ctx.lr = 0x82402688;
	sub_824023B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fbd40
	ctx.lr = 0x82402690;
	sub_823FBD40(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_824026A4"))) PPC_WEAK_FUNC(sub_824026A4);
PPC_FUNC_IMPL(__imp__sub_824026A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824026A8"))) PPC_WEAK_FUNC(sub_824026A8);
PPC_FUNC_IMPL(__imp__sub_824026A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x824026B0;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,37272
	ctx.r10.u64 = ctx.r11.u64 | 37272;
	// li r28,11
	ctx.r28.s64 = 11;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82402918
	if (ctx.cr6.gt) goto loc_82402918;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x824027b8
	// bdzf 4*cr6+eq,0x824027f8
	// bdzf 4*cr6+eq,0x82402838
	// bne cr6,0x8240288c
	if (!ctx.cr6.eq) goto loc_8240288C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r11,-4392
	ctx.r29.s64 = ctx.r11.s64 + -4392;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x8240270C;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// bgt cr6,0x82402918
	if (ctx.cr6.gt) goto loc_82402918;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82402740
	// bdzf 4*cr6+eq,0x8240274c
	// bdzf 4*cr6+eq,0x82402764
	// bdzf 4*cr6+eq,0x8240277c
	// bdzf 4*cr6+eq,0x82402788
	// bne cr6,0x824027a0
	if (!ctx.cr6.eq) goto loc_824027A0;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r28,3
	ctx.r28.s64 = 3;
	// b 0x824028c8
	goto loc_824028C8;
loc_82402740:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x824028c8
	goto loc_824028C8;
loc_8240274C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// bl 0x82402430
	ctx.lr = 0x8240275C;
	sub_82402430(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_82402764:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// bl 0x82402430
	ctx.lr = 0x82402774;
	sub_82402430(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8240277C:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x824028c8
	goto loc_824028C8;
loc_82402788:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// bl 0x82402430
	ctx.lr = 0x82402798;
	sub_82402430(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_824027A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// bl 0x82402430
	ctx.lr = 0x824027B0;
	sub_82402430(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_824027B8:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,-4392
	ctx.r29.s64 = ctx.r11.s64 + -4392;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x824027D4;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x824027ec
	if (ctx.cr6.lt) goto loc_824027EC;
	// bne cr6,0x82402918
	if (!ctx.cr6.eq) goto loc_82402918;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r28,4
	ctx.r28.s64 = 4;
	// b 0x824028c8
	goto loc_824028C8;
loc_824027EC:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r28,5
	ctx.r28.s64 = 5;
	// b 0x824028c8
	goto loc_824028C8;
loc_824027F8:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r29,r11,-4392
	ctx.r29.s64 = ctx.r11.s64 + -4392;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x82402814;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x8240282c
	if (ctx.cr6.lt) goto loc_8240282C;
	// bne cr6,0x82402918
	if (!ctx.cr6.eq) goto loc_82402918;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r28,6
	ctx.r28.s64 = 6;
	// b 0x824028c8
	goto loc_824028C8;
loc_8240282C:
	// li r11,9
	ctx.r11.s64 = 9;
	// li r28,7
	ctx.r28.s64 = 7;
	// b 0x824028c8
	goto loc_824028C8;
loc_82402838:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r29,r11,-4392
	ctx.r29.s64 = ctx.r11.s64 + -4392;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x82402854;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x82402880
	if (ctx.cr6.lt) goto loc_82402880;
	// beq cr6,0x82402874
	if (ctx.cr6.eq) goto loc_82402874;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x82402918
	if (!ctx.cr6.lt) goto loc_82402918;
	// li r11,11
	ctx.r11.s64 = 11;
	// li r28,9
	ctx.r28.s64 = 9;
	// b 0x824028c8
	goto loc_824028C8;
loc_82402874:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r28,10
	ctx.r28.s64 = 10;
	// b 0x824028c8
	goto loc_824028C8;
loc_82402880:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r28,8
	ctx.r28.s64 = 8;
	// b 0x824028c8
	goto loc_824028C8;
loc_8240288C:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r29,r11,-4392
	ctx.r29.s64 = ctx.r11.s64 + -4392;
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x824028A8;
	sub_823E8918(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x824028c0
	if (ctx.cr6.lt) goto loc_824028C0;
	// bne cr6,0x82402918
	if (!ctx.cr6.eq) goto loc_82402918;
	// li r11,14
	ctx.r11.s64 = 14;
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x824028c8
	goto loc_824028C8;
loc_824028C0:
	// li r11,13
	ctx.r11.s64 = 13;
	// li r27,1
	ctx.r27.s64 = 1;
loc_824028C8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 644, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 792, ctx.r10.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r11,2744
	ctx.r31.s64 = ctx.r11.s64 + 2744;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x824028EC;
	sub_82248A40(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x82402904;
	sub_82248A40(ctx, base);
	// lwz r9,-28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// addi r3,r30,-28
	ctx.r3.s64 = ctx.r30.s64 + -28;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82402918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82402918:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82402920"))) PPC_WEAK_FUNC(sub_82402920);
PPC_FUNC_IMPL(__imp__sub_82402920) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,37272
	ctx.r10.u64 = ctx.r11.u64 | 37272;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x824029d8
	if (ctx.cr6.gt) goto loc_824029D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8240299c
	// bdzf 4*cr6+eq,0x824029a4
	// bdzf 4*cr6+eq,0x824029ac
	// bne cr6,0x824029b4
	if (!ctx.cr6.eq) goto loc_824029B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,-28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// stw r9,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r9.u32);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82402988;
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
loc_8240299C:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x824029b8
	goto loc_824029B8;
loc_824029A4:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x824029b8
	goto loc_824029B8;
loc_824029AC:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x824029b8
	goto loc_824029B8;
loc_824029B4:
	// li r5,4
	ctx.r5.s64 = 4;
loc_824029B8:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r3,-4392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	// bl 0x823e8918
	ctx.lr = 0x824029C8;
	sub_823E8918(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-28
	ctx.r3.s64 = ctx.r31.s64 + -28;
	// bl 0x82402430
	ctx.lr = 0x824029D8;
	sub_82402430(ctx, base);
loc_824029D8:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_824029EC"))) PPC_WEAK_FUNC(sub_824029EC);
PPC_FUNC_IMPL(__imp__sub_824029EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824029F0"))) PPC_WEAK_FUNC(sub_824029F0);
PPC_FUNC_IMPL(__imp__sub_824029F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x824029F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823edb98
	ctx.lr = 0x82402A04;
	sub_823EDB98(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r8,-28292
	ctx.r8.s64 = ctx.r8.s64 + -28292;
	// addi r6,r10,-7456
	ctx.r6.s64 = ctx.r10.s64 + -7456;
	// ori r10,r4,37300
	ctx.r10.u64 = ctx.r4.u64 | 37300;
	// addi r5,r9,-7468
	ctx.r5.s64 = ctx.r9.s64 + -7468;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// addi r7,r11,-7320
	ctx.r7.s64 = ctx.r11.s64 + -7320;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r5.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r3,129
	ctx.r3.s64 = 129;
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r30,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r30.u32);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// stw r30,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r30.u32);
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// stw r30,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r30.u32);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// stw r30,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r30.u32);
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r30,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r30.u32);
	// stw r11,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r11.u32);
	// stw r30,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r30.u32);
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// stw r3,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r3.u32);
	// lwz r4,492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r3,-4392(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4392);
	// bl 0x823e8958
	ctx.lr = 0x82402A9C;
	sub_823E8958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82402430
	ctx.lr = 0x82402AAC;
	sub_82402430(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,14876(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14876);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10376(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c31b0
	ctx.lr = 0x82402ACC;
	sub_823C31B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824023b0
	ctx.lr = 0x82402AD4;
	sub_824023B0(ctx, base);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// ori r4,r5,512
	ctx.r4.u64 = ctx.r5.u64 | 512;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// bl 0x823c8e20
	ctx.lr = 0x82402AE8;
	sub_823C8E20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82402AF4"))) PPC_WEAK_FUNC(sub_82402AF4);
PPC_FUNC_IMPL(__imp__sub_82402AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82402AF8"))) PPC_WEAK_FUNC(sub_82402AF8);
PPC_FUNC_IMPL(__imp__sub_82402AF8) {
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
	// lwz r4,492(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,-6928
	ctx.r8.s64 = ctx.r11.s64 + -6928;
	// addi r7,r10,-7064
	ctx.r7.s64 = ctx.r10.s64 + -7064;
	// addi r6,r9,-7076
	ctx.r6.s64 = ctx.r9.s64 + -7076;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r6,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r6.u32);
	// lis r3,-32177
	ctx.r3.s64 = -2108751872;
	// ori r10,r11,37260
	ctx.r10.u64 = ctx.r11.u64 | 37260;
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r3,-4392(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4392);
	// lwzx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x823e8918
	ctx.lr = 0x82402B50;
	sub_823E8918(ctx, base);
	// bl 0x823c8e50
	ctx.lr = 0x82402B54;
	sub_823C8E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ed3e0
	ctx.lr = 0x82402B5C;
	sub_823ED3E0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82402B70"))) PPC_WEAK_FUNC(sub_82402B70);
PPC_FUNC_IMPL(__imp__sub_82402B70) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ede58
	sub_823EDE58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82402B74"))) PPC_WEAK_FUNC(sub_82402B74);
PPC_FUNC_IMPL(__imp__sub_82402B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82402B78"))) PPC_WEAK_FUNC(sub_82402B78);
PPC_FUNC_IMPL(__imp__sub_82402B78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// b 0x82402b88
	sub_82402B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82402B80"))) PPC_WEAK_FUNC(sub_82402B80);
PPC_FUNC_IMPL(__imp__sub_82402B80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-256
	ctx.r3.s64 = ctx.r3.s64 + -256;
	// b 0x82402b88
	sub_82402B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82402B88"))) PPC_WEAK_FUNC(sub_82402B88);
PPC_FUNC_IMPL(__imp__sub_82402B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82402af8
	ctx.lr = 0x82402BA8;
	sub_82402AF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82402bc4
	if (ctx.cr6.eq) goto loc_82402BC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82183e40
	ctx.lr = 0x82402BC0;
	sub_82183E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82402BC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82402BDC"))) PPC_WEAK_FUNC(sub_82402BDC);
PPC_FUNC_IMPL(__imp__sub_82402BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82402BE0"))) PPC_WEAK_FUNC(sub_82402BE0);
PPC_FUNC_IMPL(__imp__sub_82402BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82402BE8;
	sub_82248764(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r20,56(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8218b408
	ctx.lr = 0x82402C00;
	sub_8218B408(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8218b408
	ctx.lr = 0x82402C0C;
	sub_8218B408(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,888
	ctx.r3.s64 = ctx.r31.s64 + 888;
	// bl 0x823c3280
	ctx.lr = 0x82402C1C;
	sub_823C3280(ctx, base);
	// addi r11,r20,-1
	ctx.r11.s64 = ctx.r20.s64 + -1;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r7,r10,37248
	ctx.r7.u64 = ctx.r10.u64 | 37248;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// cntlzw r8,r20
	ctx.r8.u64 = ctx.r20.u32 == 0 ? 32 : __builtin_clz(ctx.r20.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// ori r5,r9,37256
	ctx.r5.u64 = ctx.r9.u64 | 37256;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r23,r10,-7156
	ctx.r23.s64 = ctx.r10.s64 + -7156;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// rlwinm r4,r8,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// lfs f31,11300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11300);
	ctx.f31.f64 = double(temp.f32);
	// addis r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 65536;
	// stwx r4,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// stwx r3,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// addi r24,r24,-28276
	ctx.r24.s64 = ctx.r24.s64 + -28276;
	// addi r30,r23,8
	ctx.r30.s64 = ctx.r23.s64 + 8;
	// addi r29,r29,-28292
	ctx.r29.s64 = ctx.r29.s64 + -28292;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82402CA0:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r26,0(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82402cc8
	if (!ctx.cr6.eq) goto loc_82402CC8;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82402CC8:
	// lwz r10,-8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82402ce8
	if (ctx.cr6.lt) goto loc_82402CE8;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r11.u32);
loc_82402CE8:
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82402d10
	if (ctx.cr6.lt) goto loc_82402D10;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_82402D10:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x82402d20
	if (!ctx.cr6.eq) goto loc_82402D20;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
loc_82402D20:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lwz r5,832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f6,200(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 200, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f4,204(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f3,208(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 208, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82402dc4
	if (ctx.cr6.lt) goto loc_82402DC4;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r19,196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 196, ctx.r19.u32);
loc_82402DC4:
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x82402DD4;
	sub_82106F58(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bne cr6,0x82402de4
	if (!ctx.cr6.eq) goto loc_82402DE4;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_82402DE4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,200(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 200, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,204(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 204, temp.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// lfd f6,120(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,208(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// bne 0x82402ca0
	if (!ctx.cr0.eq) goto loc_82402CA0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82402f70
	if (!ctx.cr6.eq) goto loc_82402F70;
	// extsw r10,r25
	ctx.r10.s64 = ctx.r25.s32;
	// addi r11,r23,40
	ctx.r11.s64 = ctx.r23.s64 + 40;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// li r28,2
	ctx.r28.s64 = 2;
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_82402EB0:
	// subf r10,r29,r20
	ctx.r10.s64 = ctx.r20.s64 - ctx.r29.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blt cr6,0x82402edc
	if (ctx.cr6.lt) goto loc_82402EDC;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,196(r7)
	PPC_STORE_U32(ctx.r7.u32 + 196, ctx.r10.u32);
loc_82402EDC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82402f04
	if (ctx.cr6.lt) goto loc_82402F04;
	// lwz r8,832(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,196(r5)
	PPC_STORE_U32(ctx.r5.u32 + 196, ctx.r6.u32);
loc_82402F04:
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,200(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 200, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,204(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 204, temp.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f31,208(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82402f54
	if (ctx.cr6.lt) goto loc_82402F54;
	// lwz r9,832(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r19,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r19.u32);
loc_82402F54:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzu r5,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// bl 0x82106f58
	ctx.lr = 0x82402F64;
	sub_82106F58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x82402eb0
	if (!ctx.cr0.eq) goto loc_82402EB0;
loc_82402F70:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_82402F7C"))) PPC_WEAK_FUNC(sub_82402F7C);
PPC_FUNC_IMPL(__imp__sub_82402F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82402F80"))) PPC_WEAK_FUNC(sub_82402F80);
PPC_FUNC_IMPL(__imp__sub_82402F80) {
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
	// bl 0x823ede10
	ctx.lr = 0x82402F98;
	sub_823EDE10(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// ori r9,r10,37260
	ctx.r9.u64 = ctx.r10.u64 | 37260;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82402fdc
	if (ctx.cr6.lt) goto loc_82402FDC;
	// bne cr6,0x82403000
	if (!ctx.cr6.eq) goto loc_82403000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-7156
	ctx.r10.s64 = ctx.r10.s64 + -7156;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r10,40
	ctx.r11.s64 = ctx.r10.s64 + 40;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// b 0x82402ff8
	goto loc_82402FF8;
loc_82402FDC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,-7156
	ctx.r11.s64 = ctx.r9.s64 + -7156;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
loc_82402FF8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821eb290
	ctx.lr = 0x82403000;
	sub_821EB290(ctx, base);
loc_82403000:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82403014"))) PPC_WEAK_FUNC(sub_82403014);
PPC_FUNC_IMPL(__imp__sub_82403014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82403018"))) PPC_WEAK_FUNC(sub_82403018);
PPC_FUNC_IMPL(__imp__sub_82403018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82403020;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f0050
	ctx.lr = 0x8240302C;
	sub_821F0050(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r30,-28284
	ctx.r30.s64 = ctx.r30.s64 + -28284;
	// beq cr6,0x8240304c
	if (ctx.cr6.eq) goto loc_8240304C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82403050
	goto loc_82403050;
loc_8240304C:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82403050:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r3,15472(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15472);
	// bl 0x82170820
	ctx.lr = 0x8240305C;
	sub_82170820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82403068
	if (ctx.cr6.eq) goto loc_82403068;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82403068:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r11,37260
	ctx.r9.u64 = ctx.r11.u64 | 37260;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r6,12212(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12212, ctx.r6.u32);
	// bl 0x82402be0
	ctx.lr = 0x82403094;
	sub_82402BE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

