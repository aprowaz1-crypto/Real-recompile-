#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823827B8"))) PPC_WEAK_FUNC(sub_823827B8);
PPC_FUNC_IMPL(__imp__sub_823827B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823827EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82382800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238282C"))) PPC_WEAK_FUNC(sub_8238282C);
PPC_FUNC_IMPL(__imp__sub_8238282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382830"))) PPC_WEAK_FUNC(sub_82382830);
PPC_FUNC_IMPL(__imp__sub_82382830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82382838;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82381dd0
	ctx.lr = 0x8238284C;
	sub_82381DD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82381898
	ctx.lr = 0x82382854;
	sub_82381898(ctx, base);
	// lhz r10,1156(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1156);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82382870
	if (ctx.cr0.eq) goto loc_82382870;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82382870:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r4,2504(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2504);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// bl 0x82382300
	ctx.lr = 0x82382884;
	sub_82382300(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823828d4
	if (!ctx.cr6.eq) goto loc_823828D4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r8,r31,48
	ctx.r8.s64 = ctx.r31.s64 + 48;
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// addi r6,r29,2500
	ctx.r6.s64 = ctx.r29.s64 + 2500;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823828BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// bne cr6,0x823828d0
	if (!ctx.cr6.eq) goto loc_823828D0;
	// li r11,6
	ctx.r11.s64 = 6;
loc_823828D0:
	// stw r11,2480(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2480, ctx.r11.u32);
loc_823828D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823828DC"))) PPC_WEAK_FUNC(sub_823828DC);
PPC_FUNC_IMPL(__imp__sub_823828DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823828E0"))) PPC_WEAK_FUNC(sub_823828E0);
PPC_FUNC_IMPL(__imp__sub_823828E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82381898
	ctx.lr = 0x82382900;
	sub_82381898(ctx, base);
	// lhz r11,1156(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1156);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82382914
	if (ctx.cr0.eq) goto loc_82382914;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82382914:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82382928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,2524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2524, ctx.r11.u32);
	// stw r10,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r10.u32);
	// addi r30,r31,2488
	ctx.r30.s64 = ctx.r31.s64 + 2488;
	// stw r9,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x8238294C;
	sub_8237D170(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82382954;
	sub_823A86F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238296C"))) PPC_WEAK_FUNC(sub_8238296C);
PPC_FUNC_IMPL(__imp__sub_8238296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382970"))) PPC_WEAK_FUNC(sub_82382970);
PPC_FUNC_IMPL(__imp__sub_82382970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82382978;
	sub_82248784(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82382988;
	sub_82381DD0(ctx, base);
	// lhz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1156);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823829a0
	if (ctx.cr0.eq) goto loc_823829A0;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_823829A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,8
	ctx.r29.s64 = 8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// ble cr6,0x82382a50
	if (!ctx.cr6.gt) goto loc_82382A50;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
loc_823829B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370088
	ctx.lr = 0x823829BC;
	sub_82370088(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a7908
	ctx.lr = 0x823829C4;
	sub_823A7908(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82370360
	ctx.lr = 0x823829D4;
	sub_82370360(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x82370360
	ctx.lr = 0x823829E8;
	sub_82370360(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823829fc
	if (ctx.cr6.eq) goto loc_823829FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
loc_823829FC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82381f40
	ctx.lr = 0x82382A08;
	sub_82381F40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82382a24
	if (ctx.cr6.eq) goto loc_82382A24;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82382300
	ctx.lr = 0x82382A20;
	sub_82382300(ctx, base);
	// b 0x82382a2c
	goto loc_82382A2C;
loc_82382A24:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x823825e0
	ctx.lr = 0x82382A2C;
	sub_823825E0(ctx, base);
loc_82382A2C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r29,r29,52
	ctx.r29.s64 = ctx.r29.s64 + 52;
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// bl 0x823a78a0
	ctx.lr = 0x82382A3C;
	sub_823A78A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823700d8
	ctx.lr = 0x82382A44;
	sub_823700D8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823829b4
	if (ctx.cr6.lt) goto loc_823829B4;
loc_82382A50:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82382a64
	if (ctx.cr0.eq) goto loc_82382A64;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,2480(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2480, ctx.r11.u32);
loc_82382A64:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82382A6C"))) PPC_WEAK_FUNC(sub_82382A6C);
PPC_FUNC_IMPL(__imp__sub_82382A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382A70"))) PPC_WEAK_FUNC(sub_82382A70);
PPC_FUNC_IMPL(__imp__sub_82382A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82381898
	ctx.lr = 0x82382A90;
	sub_82381898(ctx, base);
	// lhz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1156);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82382aa4
	if (ctx.cr0.eq) goto loc_82382AA4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_82382AA4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82382ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,2480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2480, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82382ADC"))) PPC_WEAK_FUNC(sub_82382ADC);
PPC_FUNC_IMPL(__imp__sub_82382ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382AE0"))) PPC_WEAK_FUNC(sub_82382AE0);
PPC_FUNC_IMPL(__imp__sub_82382AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82382AE8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82382AF4;
	sub_82381DD0(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82382b34
	if (!ctx.cr6.gt) goto loc_82382B34;
loc_82382B0C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82382498
	ctx.lr = 0x82382B18;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82382b24
	if (ctx.cr0.eq) goto loc_82382B24;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82382B24:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82382b0c
	if (ctx.cr6.lt) goto loc_82382B0C;
loc_82382B34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82382B40"))) PPC_WEAK_FUNC(sub_82382B40);
PPC_FUNC_IMPL(__imp__sub_82382B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82382B48;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x823827b8
	ctx.lr = 0x82382B64;
	sub_823827B8(ctx, base);
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82370360
	ctx.lr = 0x82382B70;
	sub_82370360(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r11,r11,30588
	ctx.r11.s64 = ctx.r11.s64 + 30588;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x82382B88;
	sub_823585A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r11,r11,30596
	ctx.r11.s64 = ctx.r11.s64 + 30596;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x82382BA0;
	sub_823585A0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x8237ef70
	ctx.lr = 0x82382BB0;
	sub_8237EF70(ctx, base);
	// ld r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 84);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// li r5,16
	ctx.r5.s64 = 16;
	// std r11,100(r31)
	PPC_STORE_U64(ctx.r31.u32 + 100, ctx.r11.u64);
	// bl 0x82248a40
	ctx.lr = 0x82382BC8;
	sub_82248A40(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82382BD8"))) PPC_WEAK_FUNC(sub_82382BD8);
PPC_FUNC_IMPL(__imp__sub_82382BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82382BE0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82382c2c
	if (!ctx.cr6.gt) goto loc_82382C2C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82382BFC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82382C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,580
	ctx.r31.s64 = ctx.r31.s64 + 580;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82382bfc
	if (ctx.cr6.lt) goto loc_82382BFC;
loc_82382C2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82382C3C"))) PPC_WEAK_FUNC(sub_82382C3C);
PPC_FUNC_IMPL(__imp__sub_82382C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382C40"))) PPC_WEAK_FUNC(sub_82382C40);
PPC_FUNC_IMPL(__imp__sub_82382C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82382c88
	if (ctx.cr6.eq) goto loc_82382C88;
loc_82382C64:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,1208(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1208);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82382C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82382c64
	if (!ctx.cr6.eq) goto loc_82382C64;
loc_82382C88:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82382CB0"))) PPC_WEAK_FUNC(sub_82382CB0);
PPC_FUNC_IMPL(__imp__sub_82382CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82382CB8;
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
	// bne cr6,0x82382cd0
	if (!ctx.cr6.eq) goto loc_82382CD0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_82382CD0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82382ce4
	if (!ctx.cr0.eq) goto loc_82382CE4;
loc_82382CDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82382d5c
	goto loc_82382D5C;
loc_82382CE4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x82382CEC;
	sub_823570E0(ctx, base);
	// rlwinm r29,r28,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x82382CFC;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82382D08;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82382cdc
	if (ctx.cr6.eq) goto loc_82382CDC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x82382D1C;
	sub_823585A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82382d50
	if (ctx.cr6.eq) goto loc_82382D50;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82358508
	ctx.lr = 0x82382D38;
	sub_82358508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82382d50
	if (ctx.cr6.eq) goto loc_82382D50;
	// bl 0x82357240
	ctx.lr = 0x82382D48;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82382D50:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_82382D5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82382D64"))) PPC_WEAK_FUNC(sub_82382D64);
PPC_FUNC_IMPL(__imp__sub_82382D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382D68"))) PPC_WEAK_FUNC(sub_82382D68);
PPC_FUNC_IMPL(__imp__sub_82382D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82382D70;
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
	// bne cr6,0x82382d88
	if (!ctx.cr6.eq) goto loc_82382D88;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_82382D88:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82382d9c
	if (!ctx.cr0.eq) goto loc_82382D9C;
loc_82382D94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82382e14
	goto loc_82382E14;
loc_82382D9C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x82382DA4;
	sub_823570E0(ctx, base);
	// rlwinm r29,r28,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x82382DB4;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82382DC0;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82382d94
	if (ctx.cr6.eq) goto loc_82382D94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x82382DD4;
	sub_823585A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82382e08
	if (ctx.cr6.eq) goto loc_82382E08;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82358508
	ctx.lr = 0x82382DF0;
	sub_82358508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82382e08
	if (ctx.cr6.eq) goto loc_82382E08;
	// bl 0x82357240
	ctx.lr = 0x82382E00;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82382E08:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_82382E14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82382E1C"))) PPC_WEAK_FUNC(sub_82382E1C);
PPC_FUNC_IMPL(__imp__sub_82382E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382E20"))) PPC_WEAK_FUNC(sub_82382E20);
PPC_FUNC_IMPL(__imp__sub_82382E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82382bd8
	ctx.lr = 0x82382E3C;
	sub_82382BD8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82382e54
	if (ctx.cr6.eq) goto loc_82382E54;
	// bl 0x82357240
	ctx.lr = 0x82382E50;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82382E54:
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

__attribute__((alias("__imp__sub_82382E74"))) PPC_WEAK_FUNC(sub_82382E74);
PPC_FUNC_IMPL(__imp__sub_82382E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382E78"))) PPC_WEAK_FUNC(sub_82382E78);
PPC_FUNC_IMPL(__imp__sub_82382E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82382E80;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82382ed4
	if (ctx.cr6.eq) goto loc_82382ED4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,1212(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1212);
	// lwz r30,1208(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1208);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82382EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82382ebc
	if (ctx.cr6.eq) goto loc_82382EBC;
	// stw r30,1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1208, ctx.r30.u32);
loc_82382EBC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82382ec8
	if (ctx.cr6.eq) goto loc_82382EC8;
	// stw r31,1212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1212, ctx.r31.u32);
loc_82382EC8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_82382ED4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82382EDC"))) PPC_WEAK_FUNC(sub_82382EDC);
PPC_FUNC_IMPL(__imp__sub_82382EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382EE0"))) PPC_WEAK_FUNC(sub_82382EE0);
PPC_FUNC_IMPL(__imp__sub_82382EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,32640
	ctx.r11.s64 = ctx.r11.s64 + 32640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8237e850
	ctx.lr = 0x82382F10;
	sub_8237E850(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82382f20
	if (ctx.cr0.eq) goto loc_82382F20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x82382F20;
	sub_82357128(ctx, base);
loc_82382F20:
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

__attribute__((alias("__imp__sub_82382F3C"))) PPC_WEAK_FUNC(sub_82382F3C);
PPC_FUNC_IMPL(__imp__sub_82382F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382F40"))) PPC_WEAK_FUNC(sub_82382F40);
PPC_FUNC_IMPL(__imp__sub_82382F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82382F48;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823570e0
	ctx.lr = 0x82382F5C;
	sub_823570E0(ctx, base);
	// li r3,2332
	ctx.r3.s64 = 2332;
	// bl 0x823570f0
	ctx.lr = 0x82382F64;
	sub_823570F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82382f94
	if (ctx.cr0.eq) goto loc_82382F94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,32640
	ctx.r11.s64 = ctx.r11.s64 + 32640;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8237eae0
	ctx.lr = 0x82382F84;
	sub_8237EAE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2324, ctx.r11.u32);
	// stw r11,2328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2328, ctx.r11.u32);
	// b 0x82382f98
	goto loc_82382F98;
loc_82382F94:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82382F98:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82382FA0;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82382fb0
	if (!ctx.cr6.eq) goto loc_82382FB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82382fc0
	goto loc_82382FC0;
loc_82382FB0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_82382FC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82382FC8"))) PPC_WEAK_FUNC(sub_82382FC8);
PPC_FUNC_IMPL(__imp__sub_82382FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82382FD0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82383024
	if (ctx.cr6.eq) goto loc_82383024;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,2328(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2328);
	// lwz r30,2324(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2324);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82383000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238300c
	if (ctx.cr6.eq) goto loc_8238300C;
	// stw r30,2324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2324, ctx.r30.u32);
loc_8238300C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82383018
	if (ctx.cr6.eq) goto loc_82383018;
	// stw r31,2328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2328, ctx.r31.u32);
loc_82383018:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_82383024:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238302C"))) PPC_WEAK_FUNC(sub_8238302C);
PPC_FUNC_IMPL(__imp__sub_8238302C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383030"))) PPC_WEAK_FUNC(sub_82383030);
PPC_FUNC_IMPL(__imp__sub_82383030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82383038;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82382bd8
	ctx.lr = 0x8238304C;
	sub_82382BD8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8237eb68
	ctx.lr = 0x82383054;
	sub_8237EB68(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,2476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2476, ctx.r29.u32);
	// addi r3,r31,2488
	ctx.r3.s64 = ctx.r31.s64 + 2488;
	// stw r30,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r30.u32);
	// bl 0x823a86f8
	ctx.lr = 0x82383068;
	sub_823A86F8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,2500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2500, ctx.r30.u32);
	// stw r11,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r11.u32);
	// stw r30,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r30.u32);
	// stw r30,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r30.u32);
	// stw r30,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r30.u32);
	// stw r30,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r30.u32);
	// stw r30,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r30.u32);
	// stw r30,2572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2572, ctx.r30.u32);
	// stw r30,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r30.u32);
	// stw r30,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r30.u32);
	// stw r30,2632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2632, ctx.r30.u32);
	// stw r30,2560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2560, ctx.r30.u32);
	// bl 0x8235b1f8
	ctx.lr = 0x823830A0;
	sub_8235B1F8(ctx, base);
	// bl 0x8235bb60
	ctx.lr = 0x823830A4;
	sub_8235BB60(ctx, base);
	// addi r3,r31,2644
	ctx.r3.s64 = ctx.r31.s64 + 2644;
	// bl 0x82382c40
	ctx.lr = 0x823830AC;
	sub_82382C40(ctx, base);
	// stw r30,2660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2660, ctx.r30.u32);
	// li r4,1152
	ctx.r4.s64 = 1152;
	// addi r3,r31,2664
	ctx.r3.s64 = ctx.r31.s64 + 2664;
	// bl 0x823585a0
	ctx.lr = 0x823830BC;
	sub_823585A0(ctx, base);
	// stw r30,3816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3816, ctx.r30.u32);
	// li r4,1152
	ctx.r4.s64 = 1152;
	// addi r3,r31,3820
	ctx.r3.s64 = ctx.r31.s64 + 3820;
	// bl 0x823585a0
	ctx.lr = 0x823830CC;
	sub_823585A0(ctx, base);
	// stw r30,4972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4972, ctx.r30.u32);
	// stw r30,4976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4976, ctx.r30.u32);
	// addi r3,r31,5016
	ctx.r3.s64 = ctx.r31.s64 + 5016;
	// stw r30,4980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4980, ctx.r30.u32);
	// stw r30,2524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2524, ctx.r30.u32);
	// stw r30,2528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2528, ctx.r30.u32);
	// bl 0x82224400
	ctx.lr = 0x823830E8;
	sub_82224400(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823830F0"))) PPC_WEAK_FUNC(sub_823830F0);
PPC_FUNC_IMPL(__imp__sub_823830F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823830F8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238314c
	if (!ctx.cr6.gt) goto loc_8238314C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82383114:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82383138
	if (!ctx.cr6.lt) goto loc_82383138;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82383138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82383138:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82383114
	if (ctx.cr6.lt) goto loc_82383114;
loc_8238314C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r11.u32);
	// addi r30,r31,2488
	ctx.r30.s64 = ctx.r31.s64 + 2488;
	// stw r10,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x82383168;
	sub_8237D170(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82383170;
	sub_823A86F8(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82383184"))) PPC_WEAK_FUNC(sub_82383184);
PPC_FUNC_IMPL(__imp__sub_82383184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383188"))) PPC_WEAK_FUNC(sub_82383188);
PPC_FUNC_IMPL(__imp__sub_82383188) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823831c0
	if (ctx.cr6.eq) goto loc_823831C0;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823831A0:
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,504(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 504);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823831c8
	if (!ctx.cr6.eq) goto loc_823831C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 + 580;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823831a0
	if (ctx.cr6.lt) goto loc_823831A0;
loc_823831C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823831C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823831D0"))) PPC_WEAK_FUNC(sub_823831D0);
PPC_FUNC_IMPL(__imp__sub_823831D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82381dd0
	ctx.lr = 0x823831F0;
	sub_82381DD0(ctx, base);
	// lhz r11,1156(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1156);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82383204
	if (ctx.cr0.eq) goto loc_82383204;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82383204:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r8,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r8.u32);
	// ble cr6,0x82383264
	if (!ctx.cr6.gt) goto loc_82383264;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82383224:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82383240
	if (!ctx.cr6.lt) goto loc_82383240;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,464(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 464);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82383258
	if (!ctx.cr6.eq) goto loc_82383258;
loc_82383240:
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,580
	ctx.r10.s64 = ctx.r10.s64 + 580;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82383224
	if (ctx.cr6.lt) goto loc_82383224;
	// b 0x82383264
	goto loc_82383264;
loc_82383258:
	// mulli r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 * 580;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82383264:
	// lwz r11,2504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,2660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2660, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238328C"))) PPC_WEAK_FUNC(sub_8238328C);
PPC_FUNC_IMPL(__imp__sub_8238328C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383290"))) PPC_WEAK_FUNC(sub_82383290);
PPC_FUNC_IMPL(__imp__sub_82383290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82383298;
	sub_82248788(ctx, base);
	// stwu r1,-3680(r1)
	ea = -3680 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8237ea18
	ctx.lr = 0x823832AC;
	sub_8237EA18(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x823832B8;
	sub_823585A0(ctx, base);
	// li r11,52
	ctx.r11.s64 = 52;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82370360
	ctx.lr = 0x823832CC;
	sub_82370360(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x8237e958
	ctx.lr = 0x823832E0;
	sub_8237E958(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,3628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3628, ctx.r11.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82383350
	if (!ctx.cr6.gt) goto loc_82383350;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823832FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8238333c
	if (!ctx.cr6.lt) goto loc_8238333C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8238333c
	if (!ctx.cr6.eq) goto loc_8238333C;
	// lwz r11,464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238333c
	if (!ctx.cr6.eq) goto loc_8238333C;
	// addi r5,r1,1312
	ctx.r5.s64 = ctx.r1.s64 + 1312;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823a7bf0
	ctx.lr = 0x82383334;
	sub_823A7BF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82383358
	if (ctx.cr0.eq) goto loc_82383358;
loc_8238333C:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,580
	ctx.r29.s64 = ctx.r29.s64 + 580;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823832fc
	if (ctx.cr6.lt) goto loc_823832FC;
loc_82383350:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4976, ctx.r11.u32);
loc_82383358:
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e850
	ctx.lr = 0x82383360;
	sub_8237E850(ctx, base);
	// addi r1,r1,3680
	ctx.r1.s64 = ctx.r1.s64 + 3680;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82383368"))) PPC_WEAK_FUNC(sub_82383368);
PPC_FUNC_IMPL(__imp__sub_82383368) {
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
	// bl 0x82381dd0
	ctx.lr = 0x82383388;
	sub_82381DD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r30,580
	ctx.r10.s64 = ctx.r30.s64 * 580;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823833a8
	if (ctx.cr6.eq) goto loc_823833A8;
loc_823833A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823833d0
	goto loc_823833D0;
loc_823833A8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823833a0
	if (ctx.cr6.eq) goto loc_823833A0;
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823833a0
	if (!ctx.cr6.eq) goto loc_823833A0;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823833D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823833E8"))) PPC_WEAK_FUNC(sub_823833E8);
PPC_FUNC_IMPL(__imp__sub_823833E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823833F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82383368
	ctx.lr = 0x8238340C;
	sub_82383368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8238343c
	if (ctx.cr0.eq) goto loc_8238343C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r30,580
	ctx.r11.s64 = ctx.r30.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823a7bf0
	ctx.lr = 0x8238342C;
	sub_823A7BF0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_8238343C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82383444"))) PPC_WEAK_FUNC(sub_82383444);
PPC_FUNC_IMPL(__imp__sub_82383444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383448"))) PPC_WEAK_FUNC(sub_82383448);
PPC_FUNC_IMPL(__imp__sub_82383448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82383450;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82383460;
	sub_82381DD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 * 580;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82383484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r29,500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 500, ctx.r29.u32);
	// lwz r4,2504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// bl 0x823822a8
	ctx.lr = 0x823834A0;
	sub_823822A8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r29.u32);
	// stw r11,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r11.u32);
	// addi r31,r31,2488
	ctx.r31.s64 = ctx.r31.s64 + 2488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d170
	ctx.lr = 0x823834B8;
	sub_8237D170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a86f8
	ctx.lr = 0x823834C0;
	sub_823A86F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823834C8"))) PPC_WEAK_FUNC(sub_823834C8);
PPC_FUNC_IMPL(__imp__sub_823834C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stw r30,2572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2572, ctx.r30.u32);
	// stw r30,2592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2592, ctx.r30.u32);
	// stw r30,2612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2612, ctx.r30.u32);
	// stw r30,2632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2632, ctx.r30.u32);
	// stw r30,2560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2560, ctx.r30.u32);
	// bl 0x8235b1f8
	ctx.lr = 0x823834FC;
	sub_8235B1F8(ctx, base);
	// bl 0x8235bb60
	ctx.lr = 0x82383500;
	sub_8235BB60(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238352c
	if (ctx.cr6.eq) goto loc_8238352C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82383518:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 + 580;
	// stw r30,576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 576, ctx.r30.u32);
	// bdnz 0x82383518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82383518;
loc_8238352C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383544"))) PPC_WEAK_FUNC(sub_82383544);
PPC_FUNC_IMPL(__imp__sub_82383544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383548"))) PPC_WEAK_FUNC(sub_82383548);
PPC_FUNC_IMPL(__imp__sub_82383548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2648);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82383550:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,1208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1208);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82383550
	if (!ctx.cr6.eq) goto loc_82383550;
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82383588
	if (ctx.cr6.eq) goto loc_82383588;
	// addi r11,r10,52
	ctx.r11.s64 = ctx.r10.s64 + 52;
loc_82383588:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383594"))) PPC_WEAK_FUNC(sub_82383594);
PPC_FUNC_IMPL(__imp__sub_82383594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383598"))) PPC_WEAK_FUNC(sub_82383598);
PPC_FUNC_IMPL(__imp__sub_82383598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823835A0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82381dd0
	ctx.lr = 0x823835B0;
	sub_82381DD0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2484, ctx.r29.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82383634
	if (!ctx.cr6.gt) goto loc_82383634;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823835CC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82383620
	if (!ctx.cr6.lt) goto loc_82383620;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82383620
	if (!ctx.cr6.eq) goto loc_82383620;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82383620
	if (ctx.cr6.eq) goto loc_82383620;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82382498
	ctx.lr = 0x82383600;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82383620
	if (ctx.cr0.eq) goto loc_82383620;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r29,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r29.u32);
	// bl 0x82389a30
	ctx.lr = 0x82383620;
	sub_82389A30(ctx, base);
loc_82383620:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823835cc
	if (ctx.cr6.lt) goto loc_823835CC;
loc_82383634:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238363C"))) PPC_WEAK_FUNC(sub_8238363C);
PPC_FUNC_IMPL(__imp__sub_8238363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383640"))) PPC_WEAK_FUNC(sub_82383640);
PPC_FUNC_IMPL(__imp__sub_82383640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82383648;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82383700
	if (!ctx.cr6.gt) goto loc_82383700;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82383674:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823836bc
	if (!ctx.cr6.eq) goto loc_823836BC;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x823836bc
	if (!ctx.cr6.eq) goto loc_823836BC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823836bc
	if (!ctx.cr6.eq) goto loc_823836BC;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82389fc0
	ctx.lr = 0x823836A8;
	sub_82389FC0(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82383700
	if (ctx.cr6.gt) goto loc_82383700;
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_823836BC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82383674
	if (ctx.cr6.lt) goto loc_82383674;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82383700
	if (ctx.cr6.eq) goto loc_82383700;
	// divwu r11,r27,r29
	ctx.r11.u32 = ctx.r27.u32 / ctx.r29.u32;
	// twllei r29,0
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bgt cr6,0x82383700
	if (ctx.cr6.gt) goto loc_82383700;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
loc_823836F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_82383700:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823836f8
	goto loc_823836F8;
}

__attribute__((alias("__imp__sub_82383708"))) PPC_WEAK_FUNC(sub_82383708);
PPC_FUNC_IMPL(__imp__sub_82383708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82381dd0
	ctx.lr = 0x82383728;
	sub_82381DD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82383640
	ctx.lr = 0x8238373C;
	sub_82383640(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383754"))) PPC_WEAK_FUNC(sub_82383754);
PPC_FUNC_IMPL(__imp__sub_82383754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383758"))) PPC_WEAK_FUNC(sub_82383758);
PPC_FUNC_IMPL(__imp__sub_82383758) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8238377C:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82383790
	if (!ctx.cr6.eq) goto loc_82383790;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82383790:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 + 580;
	// bdnz 0x8238377c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238377C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823837A0"))) PPC_WEAK_FUNC(sub_823837A0);
PPC_FUNC_IMPL(__imp__sub_823837A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823837A8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2544);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823837f8
	if (!ctx.cr6.gt) goto loc_823837F8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823837C8:
	// lwz r11,2540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2540);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823837e4
	if (!ctx.cr6.eq) goto loc_823837E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// bl 0x82373768
	ctx.lr = 0x823837E4;
	sub_82373768(ctx, base);
loc_823837E4:
	// lwz r11,2544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2544);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823837c8
	if (ctx.cr6.lt) goto loc_823837C8;
loc_823837F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82383800"))) PPC_WEAK_FUNC(sub_82383800);
PPC_FUNC_IMPL(__imp__sub_82383800) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,5004(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5004);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82383834
	if (ctx.cr6.eq) goto loc_82383834;
	// lwz r9,5000(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5000);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82383818:
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8238383c
	if (ctx.cr6.eq) goto loc_8238383C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82383818
	if (ctx.cr6.lt) goto loc_82383818;
loc_82383834:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8238383C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238385C"))) PPC_WEAK_FUNC(sub_8238385C);
PPC_FUNC_IMPL(__imp__sub_8238385C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383860"))) PPC_WEAK_FUNC(sub_82383860);
PPC_FUNC_IMPL(__imp__sub_82383860) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4996
	ctx.r3.s64 = ctx.r3.s64 + 4996;
	// b 0x823826f8
	sub_823826F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82383868"))) PPC_WEAK_FUNC(sub_82383868);
PPC_FUNC_IMPL(__imp__sub_82383868) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823838a4
	if (!ctx.cr6.eq) goto loc_823838A4;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823838a4
	if (!ctx.cr6.eq) goto loc_823838A4;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823838a4
	if (!ctx.cr6.eq) goto loc_823838A4;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823838ac
	if (ctx.cr6.eq) goto loc_823838AC;
loc_823838A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823838AC:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823838B8"))) PPC_WEAK_FUNC(sub_823838B8);
PPC_FUNC_IMPL(__imp__sub_823838B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823838C0;
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
	// bgt cr6,0x823838f8
	if (ctx.cr6.gt) goto loc_823838F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82382cb0
	ctx.lr = 0x823838E8;
	sub_82382CB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823838f8
	if (!ctx.cr0.eq) goto loc_823838F8;
loc_823838F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82383928
	goto loc_82383928;
loc_823838F8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823838f0
	if (ctx.cr6.eq) goto loc_823838F0;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x82383918;
	sub_82248A40(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82383928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82383930"))) PPC_WEAK_FUNC(sub_82383930);
PPC_FUNC_IMPL(__imp__sub_82383930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82383938;
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
	// bgt cr6,0x82383970
	if (ctx.cr6.gt) goto loc_82383970;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82382d68
	ctx.lr = 0x82383960;
	sub_82382D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82383970
	if (!ctx.cr0.eq) goto loc_82383970;
loc_82383968:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82383998
	goto loc_82383998;
loc_82383970:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383968
	if (ctx.cr6.eq) goto loc_82383968;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// sthx r10,r9,r11
	PPC_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82383998:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823839A0"))) PPC_WEAK_FUNC(sub_823839A0);
PPC_FUNC_IMPL(__imp__sub_823839A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823839A8;
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
	// bne cr6,0x823839c0
	if (!ctx.cr6.eq) goto loc_823839C0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823839C0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x823839d4
	if (!ctx.cr0.eq) goto loc_823839D4;
loc_823839CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82383aac
	goto loc_82383AAC;
loc_823839D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823839DC;
	sub_823570E0(ctx, base);
	// mulli r30,r26,580
	ctx.r30.s64 = ctx.r26.s64 * 580;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357208
	ctx.lr = 0x823839EC;
	sub_82357208(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823839F8;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823839cc
	if (ctx.cr6.eq) goto loc_823839CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823585a0
	ctx.lr = 0x82383A0C;
	sub_823585A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383aa0
	if (ctx.cr6.eq) goto loc_82383AA0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82383a88
	if (!ctx.cr6.gt) goto loc_82383A88;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82383A30:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82383a44
	if (ctx.cr6.eq) goto loc_82383A44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8658
	ctx.lr = 0x82383A44;
	sub_823A8658(ctx, base);
loc_82383A44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823a85b0
	ctx.lr = 0x82383A54;
	sub_823A85B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82383A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// addi r29,r29,580
	ctx.r29.s64 = ctx.r29.s64 + 580;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82383a30
	if (ctx.cr6.lt) goto loc_82383A30;
loc_82383A88:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82383aa0
	if (ctx.cr6.eq) goto loc_82383AA0;
	// bl 0x82357240
	ctx.lr = 0x82383A98;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82383AA0:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
loc_82383AAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82383AB4"))) PPC_WEAK_FUNC(sub_82383AB4);
PPC_FUNC_IMPL(__imp__sub_82383AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383AB8"))) PPC_WEAK_FUNC(sub_82383AB8);
PPC_FUNC_IMPL(__imp__sub_82383AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82383b08
	if (ctx.cr6.eq) goto loc_82383B08;
	// lwz r30,1208(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1208);
	// bl 0x82382e78
	ctx.lr = 0x82383AE4;
	sub_82382E78(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82383b04
	if (!ctx.cr6.eq) goto loc_82383B04;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82383b04
	if (!ctx.cr6.eq) goto loc_82383B04;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82383B04:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82383B08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383B20"))) PPC_WEAK_FUNC(sub_82383B20);
PPC_FUNC_IMPL(__imp__sub_82383B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82383b70
	if (ctx.cr6.eq) goto loc_82383B70;
	// lwz r30,1212(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1212);
	// bl 0x82382e78
	ctx.lr = 0x82383B4C;
	sub_82382E78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82383b6c
	if (!ctx.cr6.eq) goto loc_82383B6C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82383b6c
	if (!ctx.cr6.eq) goto loc_82383B6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82383B6C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82383B70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383B88"))) PPC_WEAK_FUNC(sub_82383B88);
PPC_FUNC_IMPL(__imp__sub_82383B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82383B90;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823570e0
	ctx.lr = 0x82383BA4;
	sub_823570E0(ctx, base);
	// li r3,1216
	ctx.r3.s64 = 1216;
	// bl 0x823570f0
	ctx.lr = 0x82383BAC;
	sub_823570F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82383bdc
	if (ctx.cr0.eq) goto loc_82383BDC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-27304
	ctx.r11.s64 = ctx.r11.s64 + -27304;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82382750
	ctx.lr = 0x82383BCC;
	sub_82382750(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1208, ctx.r11.u32);
	// stw r11,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r11.u32);
	// b 0x82383be0
	goto loc_82383BE0;
loc_82383BDC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82383BE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82383BE8;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82383bf8
	if (!ctx.cr6.eq) goto loc_82383BF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82383c08
	goto loc_82383C08;
loc_82383BF8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_82383C08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82383C10"))) PPC_WEAK_FUNC(sub_82383C10);
PPC_FUNC_IMPL(__imp__sub_82383C10) {
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
	// bl 0x82382f40
	ctx.lr = 0x82383C28;
	sub_82382F40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82383c60
	if (ctx.cr0.eq) goto loc_82383C60;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383c48
	if (ctx.cr6.eq) goto loc_82383C48;
	// stw r11,2328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2328, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,2324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2324, ctx.r3.u32);
loc_82383C48:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383c5c
	if (!ctx.cr6.eq) goto loc_82383C5C;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82383C5C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82383C60:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82383C74"))) PPC_WEAK_FUNC(sub_82383C74);
PPC_FUNC_IMPL(__imp__sub_82383C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383C78"))) PPC_WEAK_FUNC(sub_82383C78);
PPC_FUNC_IMPL(__imp__sub_82383C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82383cc8
	if (ctx.cr6.eq) goto loc_82383CC8;
	// lwz r30,2324(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2324);
	// bl 0x82382fc8
	ctx.lr = 0x82383CA4;
	sub_82382FC8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82383cc4
	if (!ctx.cr6.eq) goto loc_82383CC4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82383cc4
	if (!ctx.cr6.eq) goto loc_82383CC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82383CC4:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82383CC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383CE0"))) PPC_WEAK_FUNC(sub_82383CE0);
PPC_FUNC_IMPL(__imp__sub_82383CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x82383CE8;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82381898
	ctx.lr = 0x82383CF8;
	sub_82381898(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82383D00;
	sub_82381DD0(ctx, base);
	// lwz r23,12(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82383d80
	if (ctx.cr6.eq) goto loc_82383D80;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82383D1C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82382498
	ctx.lr = 0x82383D30;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82383d70
	if (ctx.cr0.eq) goto loc_82383D70;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383368
	ctx.lr = 0x82383D44;
	sub_82383368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82383d70
	if (ctx.cr0.eq) goto loc_82383D70;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r9,1156(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 1156);
	// lhz r8,2310(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2310);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r4,r11,10
	ctx.r4.s64 = ctx.r11.s64 + 10;
	// bl 0x823a7a60
	ctx.lr = 0x82383D68;
	sub_823A7A60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82383e88
	if (ctx.cr0.eq) goto loc_82383E88;
loc_82383D70:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82383d1c
	if (ctx.cr6.lt) goto loc_82383D1C;
loc_82383D80:
	// lbz r30,2312(r28)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2312);
	// bl 0x82381dd0
	ctx.lr = 0x82383D88;
	sub_82381DD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r30.u8);
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stb r24,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r24.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,28(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82383DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82383e7c
	if (ctx.cr6.eq) goto loc_82383E7C;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82383DCC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82382498
	ctx.lr = 0x82383DE0;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82383e6c
	if (ctx.cr0.eq) goto loc_82383E6C;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823833e8
	ctx.lr = 0x82383DFC;
	sub_823833E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82383e6c
	if (!ctx.cr6.eq) goto loc_82383E6C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bctrl 
	ctx.lr = 0x82383E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// bl 0x82224948
	ctx.lr = 0x82383E3C;
	sub_82224948(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r24,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r24.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82383E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823822a8
	ctx.lr = 0x82383E6C;
	sub_823822A8(ctx, base);
loc_82383E6C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82383dcc
	if (ctx.cr6.lt) goto loc_82383DCC;
loc_82383E7C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82383E80:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_82383E88:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82383e80
	goto loc_82383E80;
}

__attribute__((alias("__imp__sub_82383E90"))) PPC_WEAK_FUNC(sub_82383E90);
PPC_FUNC_IMPL(__imp__sub_82383E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82383E98;
	sub_8224877C(ctx, base);
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
	// bl 0x82381898
	ctx.lr = 0x82383EAC;
	sub_82381898(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82383EB4;
	sub_82381DD0(ctx, base);
	// lbz r28,2312(r29)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2312);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82383EC0;
	sub_82381DD0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r28.u8);
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// stb r26,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r26.u8);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r4,28(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82383f00
	if (!ctx.cr6.eq) goto loc_82383F00;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82383EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82384010
	goto loc_82384010;
loc_82383F00:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82382498
	ctx.lr = 0x82383F0C;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82383f1c
	if (!ctx.cr0.eq) goto loc_82383F1C;
loc_82383F14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82384014
	goto loc_82384014;
loc_82383F1C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82384010
	if (ctx.cr6.eq) goto loc_82384010;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82383F34:
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82383f58
	if (ctx.cr6.eq) goto loc_82383F58;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 + 580;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82383f34
	if (ctx.cr6.lt) goto loc_82383F34;
	// b 0x82384010
	goto loc_82384010;
loc_82383F58:
	// lhz r11,1156(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 1156);
	// mulli r30,r28,580
	ctx.r30.s64 = ctx.r28.s64 * 580;
	// lhz r10,2310(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2310);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r30,r9
	ctx.r3.u64 = ctx.r30.u64 + ctx.r9.u64;
	// addi r4,r11,10
	ctx.r4.s64 = ctx.r11.s64 + 10;
	// bl 0x823a7a60
	ctx.lr = 0x82383F74;
	sub_823A7A60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82383f14
	if (ctx.cr0.eq) goto loc_82383F14;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823833e8
	ctx.lr = 0x82383F90;
	sub_823833E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82384004
	if (!ctx.cr6.eq) goto loc_82384004;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bctrl 
	ctx.lr = 0x82383FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// bl 0x82224948
	ctx.lr = 0x82383FD0;
	sub_82224948(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r26,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r26.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82383FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823822a8
	ctx.lr = 0x82384000;
	sub_823822A8(ctx, base);
	// b 0x82383f14
	goto loc_82383F14;
loc_82384004:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82384014
	if (ctx.cr6.eq) goto loc_82384014;
loc_82384010:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82384014:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8238401C"))) PPC_WEAK_FUNC(sub_8238401C);
PPC_FUNC_IMPL(__imp__sub_8238401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82384020"))) PPC_WEAK_FUNC(sub_82384020);
PPC_FUNC_IMPL(__imp__sub_82384020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82384028;
	sub_8224876C(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82381898
	ctx.lr = 0x8238403C;
	sub_82381898(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82384044;
	sub_82381DD0(ctx, base);
	// lwz r29,8(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823840d4
	if (ctx.cr6.eq) goto loc_823840D4;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_82384060:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r7,r28,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82383758
	ctx.lr = 0x82384074;
	sub_82383758(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82382498
	ctx.lr = 0x82384080;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823840c4
	if (ctx.cr0.eq) goto loc_823840C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383368
	ctx.lr = 0x82384094;
	sub_82383368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823840c4
	if (ctx.cr0.eq) goto loc_823840C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r30,580
	ctx.r10.s64 = ctx.r30.s64 * 580;
	// lhz r8,1156(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 1156);
	// lhz r7,2310(r25)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r25.u32 + 2310);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r4,r11,10
	ctx.r4.s64 = ctx.r11.s64 + 10;
	// bl 0x823a7a60
	ctx.lr = 0x823840BC;
	sub_823A7A60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823841f8
	if (ctx.cr0.eq) goto loc_823841F8;
loc_823840C4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82384060
	if (ctx.cr6.lt) goto loc_82384060;
loc_823840D4:
	// lbz r30,2312(r25)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r25.u32 + 2312);
	// bl 0x82381dd0
	ctx.lr = 0x823840DC;
	sub_82381DD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r30.u8);
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stb r22,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r22.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,28(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82384110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823841ec
	if (ctx.cr6.eq) goto loc_823841EC;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
loc_82384124:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r26,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// bl 0x82383758
	ctx.lr = 0x82384134;
	sub_82383758(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mulli r29,r30,580
	ctx.r29.s64 = ctx.r30.s64 * 580;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82382498
	ctx.lr = 0x82384150;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823841dc
	if (ctx.cr0.eq) goto loc_823841DC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823833e8
	ctx.lr = 0x8238416C;
	sub_823833E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823841dc
	if (!ctx.cr6.eq) goto loc_823841DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bctrl 
	ctx.lr = 0x823841A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// bl 0x82224948
	ctx.lr = 0x823841AC;
	sub_82224948(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r22,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r22.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823841D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823822a8
	ctx.lr = 0x823841DC;
	sub_823822A8(ctx, base);
loc_823841DC:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r28,r28,580
	ctx.r28.s64 = ctx.r28.s64 + 580;
	// bne 0x82384124
	if (!ctx.cr0.eq) goto loc_82384124;
loc_823841EC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823841F0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823841F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823841f0
	goto loc_823841F0;
}

__attribute__((alias("__imp__sub_82384200"))) PPC_WEAK_FUNC(sub_82384200);
PPC_FUNC_IMPL(__imp__sub_82384200) {
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
	// bl 0x82381dd0
	ctx.lr = 0x82384220;
	sub_82381DD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82383e90
	ctx.lr = 0x82384234;
	sub_82383E90(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82384254"))) PPC_WEAK_FUNC(sub_82384254);
PPC_FUNC_IMPL(__imp__sub_82384254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82384258"))) PPC_WEAK_FUNC(sub_82384258);
PPC_FUNC_IMPL(__imp__sub_82384258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82384260;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x8238426C;
	sub_82381DD0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82384308
	if (ctx.cr6.eq) goto loc_82384308;
loc_82384284:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82381f40
	ctx.lr = 0x82384290;
	sub_82381F40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823842f4
	if (ctx.cr6.eq) goto loc_823842F4;
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823842dc
	if (ctx.cr6.eq) goto loc_823842DC;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823842B0:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823842cc
	if (!ctx.cr6.lt) goto loc_823842CC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823842f4
	if (ctx.cr6.eq) goto loc_823842F4;
loc_823842CC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 + 580;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823842b0
	if (ctx.cr6.lt) goto loc_823842B0;
loc_823842DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// bl 0x82224948
	ctx.lr = 0x823842E8;
	sub_82224948(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823822a8
	ctx.lr = 0x823842F4;
	sub_823822A8(ctx, base);
loc_823842F4:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82384284
	if (ctx.cr6.lt) goto loc_82384284;
loc_82384308:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82384380
	if (ctx.cr6.eq) goto loc_82384380;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82384318:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8238436c
	if (!ctx.cr6.lt) goto loc_8238436C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8238436c
	if (!ctx.cr6.eq) goto loc_8238436C;
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238436c
	if (ctx.cr6.eq) goto loc_8238436C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238436C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8238436C:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82384318
	if (ctx.cr6.lt) goto loc_82384318;
loc_82384380:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82384388"))) PPC_WEAK_FUNC(sub_82384388);
PPC_FUNC_IMPL(__imp__sub_82384388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82384390;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82384258
	ctx.lr = 0x8238439C;
	sub_82384258(ctx, base);
	// bl 0x82381dd0
	ctx.lr = 0x823843A0;
	sub_82381DD0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82384434
	if (!ctx.cr6.gt) goto loc_82384434;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823843C0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8238447c
	if (!ctx.cr6.eq) goto loc_8238447C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82384418
	if (!ctx.cr6.lt) goto loc_82384418;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82384418
	if (!ctx.cr6.eq) goto loc_82384418;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82381f40
	ctx.lr = 0x823843F4;
	sub_82381F40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82384418
	if (ctx.cr6.eq) goto loc_82384418;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82384418
	if (ctx.cr6.eq) goto loc_82384418;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82384418:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823843c0
	if (ctx.cr6.lt) goto loc_823843C0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8238447c
	if (!ctx.cr6.eq) goto loc_8238447C;
loc_82384434:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8238447c
	if (!ctx.cr6.eq) goto loc_8238447C;
	// bl 0x82381dd0
	ctx.lr = 0x82384444;
	sub_82381DD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82383290
	ctx.lr = 0x82384474;
	sub_82383290(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
loc_8238447C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82384484"))) PPC_WEAK_FUNC(sub_82384484);
PPC_FUNC_IMPL(__imp__sub_82384484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82384488"))) PPC_WEAK_FUNC(sub_82384488);
PPC_FUNC_IMPL(__imp__sub_82384488) {
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
	// bl 0x82384258
	ctx.lr = 0x823844A0;
	sub_82384258(ctx, base);
	// bl 0x82381dd0
	ctx.lr = 0x823844A4;
	sub_82381DD0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82384540
	if (!ctx.cr6.gt) goto loc_82384540;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
loc_823844BC:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8238452c
	if (!ctx.cr6.lt) goto loc_8238452C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8238452c
	if (ctx.cr6.eq) goto loc_8238452C;
	// lwz r11,2504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8238452c
	if (ctx.cr6.eq) goto loc_8238452C;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8238452c
	if (ctx.cr6.eq) goto loc_8238452C;
	// lwz r11,5024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5024);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82384550
	if (!ctx.cr6.gt) goto loc_82384550;
	// lwz r8,5020(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5020);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82384508:
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8238452c
	if (ctx.cr6.eq) goto loc_8238452C;
	// lwz r4,5024(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5024);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82384508
	if (ctx.cr6.lt) goto loc_82384508;
	// b 0x82384550
	goto loc_82384550;
loc_8238452C:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,580
	ctx.r7.s64 = ctx.r7.s64 + 580;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823844bc
	if (ctx.cr6.lt) goto loc_823844BC;
loc_82384540:
	// addi r3,r31,5016
	ctx.r3.s64 = ctx.r31.s64 + 5016;
	// bl 0x82224400
	ctx.lr = 0x82384548;
	sub_82224400(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
loc_82384550:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82384564"))) PPC_WEAK_FUNC(sub_82384564);
PPC_FUNC_IMPL(__imp__sub_82384564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82384568"))) PPC_WEAK_FUNC(sub_82384568);
PPC_FUNC_IMPL(__imp__sub_82384568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82384570;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82384258
	ctx.lr = 0x8238457C;
	sub_82384258(ctx, base);
	// bl 0x82381dd0
	ctx.lr = 0x82384580;
	sub_82381DD0(ctx, base);
	// lwz r11,2656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2656);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823845d4
	if (!ctx.cr6.eq) goto loc_823845D4;
	// lwz r31,2648(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2648);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823845e0
	if (ctx.cr6.eq) goto loc_823845E0;
loc_823845A4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,1208(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1208);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82381f40
	ctx.lr = 0x823845B8;
	sub_82381F40(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
	// bne cr6,0x823845a4
	if (!ctx.cr6.eq) goto loc_823845A4;
	// b 0x823845d8
	goto loc_823845D8;
loc_823845D4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823845D8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x823845e8
	if (ctx.cr6.eq) goto loc_823845E8;
loc_823845E0:
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,2480(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2480, ctx.r11.u32);
loc_823845E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823845F0"))) PPC_WEAK_FUNC(sub_823845F0);
PPC_FUNC_IMPL(__imp__sub_823845F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823845F8;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82381898
	ctx.lr = 0x82384604;
	sub_82381898(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x8238460C;
	sub_82381DD0(ctx, base);
	// lwz r11,2504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8238482c
	if (ctx.cr6.eq) goto loc_8238482C;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823847a0
	if (!ctx.cr6.gt) goto loc_823847A0;
	// addi r24,r31,2644
	ctx.r24.s64 = ctx.r31.s64 + 2644;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_8238463C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82384670
	if (!ctx.cr6.lt) goto loc_82384670;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82381f40
	ctx.lr = 0x8238465C;
	sub_82381F40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82384670
	if (ctx.cr6.eq) goto loc_82384670;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r26,500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 500, ctx.r26.u32);
loc_82384670:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8238478c
	if (!ctx.cr6.gt) goto loc_8238478C;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x82384698
	goto loc_82384698;
loc_82384688:
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x823846a4
	if (ctx.cr6.eq) goto loc_823846A4;
	// lwz r11,1208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1208);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82384698:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82384688
	if (!ctx.cr6.eq) goto loc_82384688;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_823846A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238478c
	if (ctx.cr6.eq) goto loc_8238478C;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82381f40
	ctx.lr = 0x823846C0;
	sub_82381F40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8238478c
	if (ctx.cr6.eq) goto loc_8238478C;
	// lwz r11,2520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82384744
	if (ctx.cr6.eq) goto loc_82384744;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82384728
	if (!ctx.cr6.gt) goto loc_82384728;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_823846EC:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82384708
	if (!ctx.cr6.lt) goto loc_82384708;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82384720
	if (ctx.cr6.eq) goto loc_82384720;
loc_82384708:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 + 580;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823846ec
	if (ctx.cr6.lt) goto loc_823846EC;
	// b 0x82384728
	goto loc_82384728;
loc_82384720:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82384750
	if (!ctx.cr6.eq) goto loc_82384750;
loc_82384728:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// bl 0x82224948
	ctx.lr = 0x82384734;
	sub_82224948(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823822a8
	ctx.lr = 0x82384740;
	sub_823822A8(ctx, base);
	// b 0x8238478c
	goto loc_8238478C;
loc_82384744:
	// lwz r11,2504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8238478c
	if (!ctx.cr6.eq) goto loc_8238478C;
loc_82384750:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82381f40
	ctx.lr = 0x8238475C;
	sub_82381F40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82384774
	if (ctx.cr6.eq) goto loc_82384774;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 * 56;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r25.u32);
loc_82384774:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238478C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8238478C:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,580
	ctx.r28.s64 = ctx.r28.s64 + 580;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8238463c
	if (ctx.cr6.lt) goto loc_8238463C;
loc_823847A0:
	// lwz r11,2504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823847c8
	if (!ctx.cr6.eq) goto loc_823847C8;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823847C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r25.u32);
loc_823847C8:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8238482c
	if (!ctx.cr6.gt) goto loc_8238482C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823847DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82384818
	if (!ctx.cr6.lt) goto loc_82384818;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82384818
	if (ctx.cr6.eq) goto loc_82384818;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82384818
	if (!ctx.cr6.eq) goto loc_82384818;
	// lwz r4,2484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2484);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r4,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r4.u32);
	// bl 0x82389a30
	ctx.lr = 0x82384818;
	sub_82389A30(ctx, base);
loc_82384818:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823847dc
	if (ctx.cr6.lt) goto loc_823847DC;
loc_8238482C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r26,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r26.u32);
	// stw r26,2660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2660, ctx.r26.u32);
	// addi r30,r31,2488
	ctx.r30.s64 = ctx.r31.s64 + 2488;
	// stw r11,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x82384848;
	sub_8237D170(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82384850;
	sub_823A86F8(ctx, base);
	// stw r26,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_8238485C"))) PPC_WEAK_FUNC(sub_8238485C);
PPC_FUNC_IMPL(__imp__sub_8238485C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82384860"))) PPC_WEAK_FUNC(sub_82384860);
PPC_FUNC_IMPL(__imp__sub_82384860) {
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
	// lhz r11,1156(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 1156);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82384884
	if (ctx.cr0.eq) goto loc_82384884;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
loc_82384884:
	// lbz r10,5036(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5036);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823848a0
	if (!ctx.cr6.eq) goto loc_823848A0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,5016
	ctx.r3.s64 = ctx.r3.s64 + 5016;
	// bl 0x82224948
	ctx.lr = 0x823848A0;
	sub_82224948(ctx, base);
loc_823848A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823848B0"))) PPC_WEAK_FUNC(sub_823848B0);
PPC_FUNC_IMPL(__imp__sub_823848B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823848B8;
	sub_82248784(ctx, base);
	// stwu r1,-3680(r1)
	ea = -3680 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82381dd0
	ctx.lr = 0x823848C8;
	sub_82381DD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237ea18
	ctx.lr = 0x823848D4;
	sub_8237EA18(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x823848E0;
	sub_823585A0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e958
	ctx.lr = 0x823848F8;
	sub_8237E958(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,3628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3628, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82384960
	if (!ctx.cr6.gt) goto loc_82384960;
loc_82384910:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,2504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82384938
	if (ctx.cr6.eq) goto loc_82384938;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82382498
	ctx.lr = 0x82384930;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8238494c
	if (ctx.cr0.eq) goto loc_8238494C;
loc_82384938:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,1312
	ctx.r5.s64 = ctx.r1.s64 + 1312;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823833e8
	ctx.lr = 0x8238494C;
	sub_823833E8(ctx, base);
loc_8238494C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,580
	ctx.r29.s64 = ctx.r29.s64 + 580;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82384910
	if (ctx.cr6.lt) goto loc_82384910;
loc_82384960:
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e850
	ctx.lr = 0x82384968;
	sub_8237E850(ctx, base);
	// addi r1,r1,3680
	ctx.r1.s64 = ctx.r1.s64 + 3680;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82384970"))) PPC_WEAK_FUNC(sub_82384970);
PPC_FUNC_IMPL(__imp__sub_82384970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82384978;
	sub_8224878C(ctx, base);
	// stwu r1,-3664(r1)
	ea = -3664 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8237ea18
	ctx.lr = 0x82384990;
	sub_8237EA18(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x8238499C;
	sub_823585A0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e958
	ctx.lr = 0x823849B8;
	sub_8237E958(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,3628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3628, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823849f4
	if (!ctx.cr6.gt) goto loc_823849F4;
loc_823849D0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,1312
	ctx.r5.s64 = ctx.r1.s64 + 1312;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823833e8
	ctx.lr = 0x823849E4;
	sub_823833E8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823849d0
	if (ctx.cr6.lt) goto loc_823849D0;
loc_823849F4:
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e850
	ctx.lr = 0x823849FC;
	sub_8237E850(ctx, base);
	// addi r1,r1,3664
	ctx.r1.s64 = ctx.r1.s64 + 3664;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82384A04"))) PPC_WEAK_FUNC(sub_82384A04);
PPC_FUNC_IMPL(__imp__sub_82384A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82384A08"))) PPC_WEAK_FUNC(sub_82384A08);
PPC_FUNC_IMPL(__imp__sub_82384A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82384A10;
	sub_8224878C(ctx, base);
	// stwu r1,-3664(r1)
	ea = -3664 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8237ea18
	ctx.lr = 0x82384A24;
	sub_8237EA18(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x82384A30;
	sub_823585A0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// lwz r11,2504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8237e958
	ctx.lr = 0x82384A50;
	sub_8237E958(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,3628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3628, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82384ac0
	if (ctx.cr6.eq) goto loc_82384AC0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,2504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
loc_82384A74:
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82384a98
	if (ctx.cr6.eq) goto loc_82384A98;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 + 580;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82384a74
	if (ctx.cr6.lt) goto loc_82384A74;
	// b 0x82384ac0
	goto loc_82384AC0;
loc_82384A98:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,1312
	ctx.r5.s64 = ctx.r1.s64 + 1312;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823833e8
	ctx.lr = 0x82384AAC;
	sub_823833E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82384ac0
	if (!ctx.cr6.eq) goto loc_82384AC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383448
	ctx.lr = 0x82384AC0;
	sub_82383448(ctx, base);
loc_82384AC0:
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e850
	ctx.lr = 0x82384AC8;
	sub_8237E850(ctx, base);
	// addi r1,r1,3664
	ctx.r1.s64 = ctx.r1.s64 + 3664;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82384AD0"))) PPC_WEAK_FUNC(sub_82384AD0);
PPC_FUNC_IMPL(__imp__sub_82384AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82384AD8;
	sub_8224878C(ctx, base);
	// stwu r1,-3664(r1)
	ea = -3664 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82384AE8;
	sub_82381DD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237ea18
	ctx.lr = 0x82384AF4;
	sub_8237EA18(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x82384B00;
	sub_823585A0(ctx, base);
	// lwz r11,1316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82384b24
	if (ctx.cr6.eq) goto loc_82384B24;
	// addi r4,r31,164
	ctx.r4.s64 = ctx.r31.s64 + 164;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82358508
	ctx.lr = 0x82384B24;
	sub_82358508(ctx, base);
loc_82384B24:
	// lwz r10,1316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,372
	ctx.r4.s64 = ctx.r11.s64 + 372;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x82370360
	ctx.lr = 0x82384B3C;
	sub_82370360(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8237e958
	ctx.lr = 0x82384B58;
	sub_8237E958(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,3628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3628, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82384b94
	if (!ctx.cr6.gt) goto loc_82384B94;
loc_82384B70:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,1312
	ctx.r5.s64 = ctx.r1.s64 + 1312;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823833e8
	ctx.lr = 0x82384B84;
	sub_823833E8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82384b70
	if (ctx.cr6.lt) goto loc_82384B70;
loc_82384B94:
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e850
	ctx.lr = 0x82384B9C;
	sub_8237E850(ctx, base);
	// addi r1,r1,3664
	ctx.r1.s64 = ctx.r1.s64 + 3664;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82384BA4"))) PPC_WEAK_FUNC(sub_82384BA4);
PPC_FUNC_IMPL(__imp__sub_82384BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82384BA8"))) PPC_WEAK_FUNC(sub_82384BA8);
PPC_FUNC_IMPL(__imp__sub_82384BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82384BB0;
	sub_82248788(ctx, base);
	// stwu r1,-3680(r1)
	ea = -3680 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82384BC0;
	sub_82381DD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237ea18
	ctx.lr = 0x82384BCC;
	sub_8237EA18(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x82384BD8;
	sub_823585A0(ctx, base);
	// lwz r5,1316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// addi r11,r5,52
	ctx.r11.s64 = ctx.r5.s64 + 52;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82384bf8
	if (ctx.cr6.eq) goto loc_82384BF8;
	// addi r4,r31,164
	ctx.r4.s64 = ctx.r31.s64 + 164;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82358508
	ctx.lr = 0x82384BF8;
	sub_82358508(ctx, base);
loc_82384BF8:
	// lwz r11,1316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8237e958
	ctx.lr = 0x82384C1C;
	sub_8237E958(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,3628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3628, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82384c98
	if (!ctx.cr6.gt) goto loc_82384C98;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,2504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
loc_82384C40:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82384c68
	if (ctx.cr6.eq) goto loc_82384C68;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 + 580;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82384c40
	if (ctx.cr6.lt) goto loc_82384C40;
	// b 0x82384c98
	goto loc_82384C98;
loc_82384C68:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,1312
	ctx.r5.s64 = ctx.r1.s64 + 1312;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823833e8
	ctx.lr = 0x82384C7C;
	sub_823833E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82384c94
	if (!ctx.cr6.eq) goto loc_82384C94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383448
	ctx.lr = 0x82384C90;
	sub_82383448(ctx, base);
	// b 0x82384c98
	goto loc_82384C98;
loc_82384C94:
	// stw r29,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r29.u32);
loc_82384C98:
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e850
	ctx.lr = 0x82384CA0;
	sub_8237E850(ctx, base);
	// addi r1,r1,3680
	ctx.r1.s64 = ctx.r1.s64 + 3680;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82384CA8"))) PPC_WEAK_FUNC(sub_82384CA8);
PPC_FUNC_IMPL(__imp__sub_82384CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82384CB0;
	sub_82248788(ctx, base);
	// stwu r1,-3680(r1)
	ea = -3680 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82384CC0;
	sub_82381DD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237ea18
	ctx.lr = 0x82384CCC;
	sub_8237EA18(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x82384CD8;
	sub_823585A0(ctx, base);
	// lwz r11,1316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// lwz r5,2472(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2472);
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82384cfc
	if (ctx.cr6.eq) goto loc_82384CFC;
	// addi r4,r31,1320
	ctx.r4.s64 = ctx.r31.s64 + 1320;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82358508
	ctx.lr = 0x82384CFC;
	sub_82358508(ctx, base);
loc_82384CFC:
	// lwz r10,2472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2472);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,372
	ctx.r4.s64 = ctx.r11.s64 + 372;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82370360
	ctx.lr = 0x82384D1C;
	sub_82370360(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x8237e958
	ctx.lr = 0x82384D30;
	sub_8237E958(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,3628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3628, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82384d94
	if (!ctx.cr6.gt) goto loc_82384D94;
loc_82384D48:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,1312
	ctx.r5.s64 = ctx.r1.s64 + 1312;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823833e8
	ctx.lr = 0x82384D5C;
	sub_823833E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82384d80
	if (ctx.cr6.eq) goto loc_82384D80;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82384d90
	if (ctx.cr6.gt) goto loc_82384D90;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82384d48
	if (ctx.cr6.lt) goto loc_82384D48;
	// b 0x82384d94
	goto loc_82384D94;
loc_82384D80:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383448
	ctx.lr = 0x82384D8C;
	sub_82383448(ctx, base);
	// b 0x82384d94
	goto loc_82384D94;
loc_82384D90:
	// stw r29,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r29.u32);
loc_82384D94:
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e850
	ctx.lr = 0x82384D9C;
	sub_8237E850(ctx, base);
	// addi r1,r1,3680
	ctx.r1.s64 = ctx.r1.s64 + 3680;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82384DA4"))) PPC_WEAK_FUNC(sub_82384DA4);
PPC_FUNC_IMPL(__imp__sub_82384DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82384DA8"))) PPC_WEAK_FUNC(sub_82384DA8);
PPC_FUNC_IMPL(__imp__sub_82384DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82384DB0;
	sub_8224878C(ctx, base);
	// stwu r1,-3664(r1)
	ea = -3664 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82384DC0;
	sub_82381DD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237ea18
	ctx.lr = 0x82384DCC;
	sub_8237EA18(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x82384DD8;
	sub_823585A0(ctx, base);
	// lwz r5,1316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// addi r11,r5,52
	ctx.r11.s64 = ctx.r5.s64 + 52;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82384df8
	if (ctx.cr6.eq) goto loc_82384DF8;
	// addi r4,r31,164
	ctx.r4.s64 = ctx.r31.s64 + 164;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82358508
	ctx.lr = 0x82384DF8;
	sub_82358508(ctx, base);
loc_82384DF8:
	// lwz r11,1316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8237e958
	ctx.lr = 0x82384E1C;
	sub_8237E958(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,3628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3628, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82384e9c
	if (!ctx.cr6.gt) goto loc_82384E9C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,2504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
loc_82384E40:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82384e68
	if (ctx.cr6.eq) goto loc_82384E68;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 + 580;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82384e40
	if (ctx.cr6.lt) goto loc_82384E40;
	// b 0x82384e9c
	goto loc_82384E9C;
loc_82384E68:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,1312
	ctx.r5.s64 = ctx.r1.s64 + 1312;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823833e8
	ctx.lr = 0x82384E7C;
	sub_823833E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82384e94
	if (!ctx.cr6.eq) goto loc_82384E94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383448
	ctx.lr = 0x82384E90;
	sub_82383448(ctx, base);
	// b 0x82384e9c
	goto loc_82384E9C;
loc_82384E94:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
loc_82384E9C:
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e850
	ctx.lr = 0x82384EA4;
	sub_8237E850(ctx, base);
	// addi r1,r1,3664
	ctx.r1.s64 = ctx.r1.s64 + 3664;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82384EAC"))) PPC_WEAK_FUNC(sub_82384EAC);
PPC_FUNC_IMPL(__imp__sub_82384EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82384EB0"))) PPC_WEAK_FUNC(sub_82384EB0);
PPC_FUNC_IMPL(__imp__sub_82384EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82384EB8;
	sub_82248780(ctx, base);
	// stwu r1,-3760(r1)
	ea = -3760 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82384EC8;
	sub_82381DD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x8237ea18
	ctx.lr = 0x82384ED4;
	sub_8237EA18(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823585a0
	ctx.lr = 0x82384EE0;
	sub_823585A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a7908
	ctx.lr = 0x82384EE8;
	sub_823A7908(ctx, base);
	// li r11,52
	ctx.r11.s64 = 52;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,2504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82382220
	ctx.lr = 0x82384F00;
	sub_82382220(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x82370360
	ctx.lr = 0x82384F14;
	sub_82370360(ctx, base);
	// lbz r11,5036(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5036);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,5036(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5036, ctx.r11.u8);
	// stb r11,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r11.u8);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 + 5;
	// bl 0x8237e958
	ctx.lr = 0x82384F3C;
	sub_8237E958(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,3692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3692, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82384fc0
	if (!ctx.cr6.gt) goto loc_82384FC0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82384F58:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,2504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82384f84
	if (ctx.cr6.eq) goto loc_82384F84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82382498
	ctx.lr = 0x82384F7C;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82384fac
	if (ctx.cr0.eq) goto loc_82384FAC;
loc_82384F84:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,1376
	ctx.r5.s64 = ctx.r1.s64 + 1376;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823833e8
	ctx.lr = 0x82384F98;
	sub_823833E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82384fac
	if (!ctx.cr6.eq) goto loc_82384FAC;
	// lwz r11,2504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82384fe0
	if (ctx.cr6.eq) goto loc_82384FE0;
loc_82384FAC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,580
	ctx.r28.s64 = ctx.r28.s64 + 580;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82384f58
	if (ctx.cr6.lt) goto loc_82384F58;
loc_82384FC0:
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
loc_82384FC8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a78a0
	ctx.lr = 0x82384FD0;
	sub_823A78A0(ctx, base);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x8237e850
	ctx.lr = 0x82384FD8;
	sub_8237E850(ctx, base);
	// addi r1,r1,3760
	ctx.r1.s64 = ctx.r1.s64 + 3760;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_82384FE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383448
	ctx.lr = 0x82384FEC;
	sub_82383448(ctx, base);
	// b 0x82384fc8
	goto loc_82384FC8;
}

__attribute__((alias("__imp__sub_82384FF0"))) PPC_WEAK_FUNC(sub_82384FF0);
PPC_FUNC_IMPL(__imp__sub_82384FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82384FF8;
	sub_8224878C(ctx, base);
	// stwu r1,-2448(r1)
	ea = -2448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82385008;
	sub_82381DD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237ea18
	ctx.lr = 0x82385014;
	sub_8237EA18(ctx, base);
	// lbz r11,5036(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5036);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8237e958
	ctx.lr = 0x8238502C;
	sub_8237E958(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,2412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2412, ctx.r11.u32);
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82385084
	if (ctx.cr6.eq) goto loc_82385084;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82385050:
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82385074
	if (ctx.cr6.eq) goto loc_82385074;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 + 580;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82385050
	if (ctx.cr6.lt) goto loc_82385050;
	// b 0x82385084
	goto loc_82385084;
loc_82385074:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823833e8
	ctx.lr = 0x82385084;
	sub_823833E8(ctx, base);
loc_82385084:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237e850
	ctx.lr = 0x8238508C;
	sub_8237E850(ctx, base);
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82385094"))) PPC_WEAK_FUNC(sub_82385094);
PPC_FUNC_IMPL(__imp__sub_82385094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82385098"))) PPC_WEAK_FUNC(sub_82385098);
PPC_FUNC_IMPL(__imp__sub_82385098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823850A0;
	sub_82248778(ctx, base);
	// stwu r1,-3776(r1)
	ea = -3776 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82381dd0
	ctx.lr = 0x823850B8;
	sub_82381DD0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x8237ea18
	ctx.lr = 0x823850C4;
	sub_8237EA18(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mulli r31,r28,15
	ctx.r31.s64 = ctx.r28.s64 * 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x823585a0
	ctx.lr = 0x823850D8;
	sub_823585A0(ctx, base);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// beq cr6,0x823850f0
	if (ctx.cr6.eq) goto loc_823850F0;
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
loc_823850F0:
	// addi r27,r31,15
	ctx.r27.s64 = ctx.r31.s64 + 15;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82385174
	if (!ctx.cr6.lt) goto loc_82385174;
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
loc_82385104:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82385170
	if (!ctx.cr6.lt) goto loc_82385170;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a7908
	ctx.lr = 0x82385118;
	sub_823A7908(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82382220
	ctx.lr = 0x82385128;
	sub_82382220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8238515c
	if (ctx.cr0.eq) goto loc_8238515C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,-8(r28)
	PPC_STORE_U32(ctx.r28.u32 + -8, ctx.r11.u32);
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82385148
	if (!ctx.cr6.eq) goto loc_82385148;
	// stw r25,-4(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4, ctx.r25.u32);
loc_82385148:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82370360
	ctx.lr = 0x82385154;
	sub_82370360(ctx, base);
	// addi r28,r28,52
	ctx.r28.s64 = ctx.r28.s64 + 52;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8238515C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a78a0
	ctx.lr = 0x82385164;
	sub_823A78A0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82385104
	if (ctx.cr6.lt) goto loc_82385104;
loc_82385170:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_82385174:
	// rlwinm r9,r29,8,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFF00;
	// mulli r11,r29,52
	ctx.r11.s64 = ctx.r29.s64 * 52;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x8237e958
	ctx.lr = 0x8238519C;
	sub_8237E958(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r25,3692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3692, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82385214
	if (!ctx.cr6.gt) goto loc_82385214;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,2504(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2504);
loc_823851BC:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823851e4
	if (ctx.cr6.eq) goto loc_823851E4;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 + 580;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823851bc
	if (ctx.cr6.lt) goto loc_823851BC;
	// b 0x82385214
	goto loc_82385214;
loc_823851E4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,1376
	ctx.r5.s64 = ctx.r1.s64 + 1376;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823833e8
	ctx.lr = 0x823851F8;
	sub_823833E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82385210
	if (!ctx.cr6.eq) goto loc_82385210;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82383448
	ctx.lr = 0x8238520C;
	sub_82383448(ctx, base);
	// b 0x82385214
	goto loc_82385214;
loc_82385210:
	// stw r25,2480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2480, ctx.r25.u32);
loc_82385214:
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x8237e850
	ctx.lr = 0x8238521C;
	sub_8237E850(ctx, base);
	// addi r1,r1,3776
	ctx.r1.s64 = ctx.r1.s64 + 3776;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82385224"))) PPC_WEAK_FUNC(sub_82385224);
PPC_FUNC_IMPL(__imp__sub_82385224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82385228"))) PPC_WEAK_FUNC(sub_82385228);
PPC_FUNC_IMPL(__imp__sub_82385228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82385230;
	sub_82248780(ctx, base);
	// stwu r1,-3696(r1)
	ea = -3696 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82385240;
	sub_82381DD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237ea18
	ctx.lr = 0x8238524C;
	sub_8237EA18(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x82385258;
	sub_823585A0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// lwz r27,32(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x8237e958
	ctx.lr = 0x82385274;
	sub_8237E958(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r26,3628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3628, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823852cc
	if (!ctx.cr6.gt) goto loc_823852CC;
loc_8238528C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823852b8
	if (!ctx.cr6.eq) goto loc_823852B8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,1312
	ctx.r5.s64 = ctx.r1.s64 + 1312;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823833e8
	ctx.lr = 0x823852B4;
	sub_823833E8(ctx, base);
	// stw r26,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r26.u32);
loc_823852B8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,580
	ctx.r29.s64 = ctx.r29.s64 + 580;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8238528c
	if (ctx.cr6.lt) goto loc_8238528C;
loc_823852CC:
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e850
	ctx.lr = 0x823852D4;
	sub_8237E850(ctx, base);
	// addi r1,r1,3696
	ctx.r1.s64 = ctx.r1.s64 + 3696;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823852DC"))) PPC_WEAK_FUNC(sub_823852DC);
PPC_FUNC_IMPL(__imp__sub_823852DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823852E0"))) PPC_WEAK_FUNC(sub_823852E0);
PPC_FUNC_IMPL(__imp__sub_823852E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823852E8;
	sub_8224877C(ctx, base);
	// stwu r1,-3696(r1)
	ea = -3696 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82381898
	ctx.lr = 0x823852F8;
	sub_82381898(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82385300;
	sub_82381DD0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237ea18
	ctx.lr = 0x8238530C;
	sub_8237EA18(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x82385318;
	sub_823585A0(ctx, base);
	// lwz r5,3816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3816);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82385338
	if (ctx.cr6.eq) goto loc_82385338;
	// addi r4,r31,2664
	ctx.r4.s64 = ctx.r31.s64 + 2664;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82358508
	ctx.lr = 0x82385338;
	sub_82358508(ctx, base);
loc_82385338:
	// lwz r11,3816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3816);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8237e958
	ctx.lr = 0x82385354;
	sub_8237E958(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,3628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3628, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823853d8
	if (!ctx.cr6.gt) goto loc_823853D8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82385370:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,2504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8238539c
	if (ctx.cr6.eq) goto loc_8238539C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82382498
	ctx.lr = 0x82385394;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823853c4
	if (ctx.cr0.eq) goto loc_823853C4;
loc_8238539C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,1312
	ctx.r5.s64 = ctx.r1.s64 + 1312;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823833e8
	ctx.lr = 0x823853B0;
	sub_823833E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823853c4
	if (!ctx.cr6.eq) goto loc_823853C4;
	// lwz r11,2504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8238540c
	if (!ctx.cr6.eq) goto loc_8238540C;
loc_823853C4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,580
	ctx.r28.s64 = ctx.r28.s64 + 580;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82385370
	if (ctx.cr6.lt) goto loc_82385370;
loc_823853D8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823853F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
loc_823853FC:
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e850
	ctx.lr = 0x82385404;
	sub_8237E850(ctx, base);
	// addi r1,r1,3696
	ctx.r1.s64 = ctx.r1.s64 + 3696;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8238540C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383448
	ctx.lr = 0x82385418;
	sub_82383448(ctx, base);
	// b 0x823853fc
	goto loc_823853FC;
}

__attribute__((alias("__imp__sub_8238541C"))) PPC_WEAK_FUNC(sub_8238541C);
PPC_FUNC_IMPL(__imp__sub_8238541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82385420"))) PPC_WEAK_FUNC(sub_82385420);
PPC_FUNC_IMPL(__imp__sub_82385420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82385428;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82385438;
	sub_82381DD0(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82385494
	if (!ctx.cr6.gt) goto loc_82385494;
loc_82385450:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82382498
	ctx.lr = 0x8238545C;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8238547c
	if (ctx.cr0.eq) goto loc_8238547C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82383640
	ctx.lr = 0x82385474;
	sub_82383640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82385490
	if (ctx.cr0.eq) goto loc_82385490;
loc_8238547C:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82385450
	if (ctx.cr6.lt) goto loc_82385450;
	// b 0x82385494
	goto loc_82385494;
loc_82385490:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82385494:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823854A0"))) PPC_WEAK_FUNC(sub_823854A0);
PPC_FUNC_IMPL(__imp__sub_823854A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823854A8;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x823854d0
	if (ctx.cr6.eq) goto loc_823854D0;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x823855b8
	if (!ctx.cr6.eq) goto loc_823855B8;
	// bl 0x82382648
	ctx.lr = 0x823854CC;
	sub_82382648(ctx, base);
	// b 0x823855b8
	goto loc_823855B8;
loc_823854D0:
	// bl 0x82381898
	ctx.lr = 0x823854D4;
	sub_82381898(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x823854DC;
	sub_82381DD0(ctx, base);
	// lhz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1156);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x823854f4
	if (ctx.cr0.eq) goto loc_823854F4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_823854F4:
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,2536
	ctx.r3.s64 = ctx.r30.s64 + 2536;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x82224948
	ctx.lr = 0x82385508;
	sub_82224948(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82382498
	ctx.lr = 0x82385514;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82385538
	if (ctx.cr0.eq) goto loc_82385538;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82385538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82385538:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823822a8
	ctx.lr = 0x82385544;
	sub_823822A8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823855b8
	if (!ctx.cr6.gt) goto loc_823855B8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82385558:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823855a4
	if (!ctx.cr6.eq) goto loc_823855A4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82385594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_823855A4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,580
	ctx.r31.s64 = ctx.r31.s64 + 580;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82385558
	if (ctx.cr6.lt) goto loc_82385558;
loc_823855B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823855C4"))) PPC_WEAK_FUNC(sub_823855C4);
PPC_FUNC_IMPL(__imp__sub_823855C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823855C8"))) PPC_WEAK_FUNC(sub_823855C8);
PPC_FUNC_IMPL(__imp__sub_823855C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823855D0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82381898
	ctx.lr = 0x823855E8;
	sub_82381898(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x823855F0;
	sub_82381DD0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// beq cr6,0x8238569c
	if (ctx.cr6.eq) goto loc_8238569C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82381f40
	ctx.lr = 0x82385604;
	sub_82381F40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8238569c
	if (ctx.cr6.eq) goto loc_8238569C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82385668
	if (!ctx.cr6.gt) goto loc_82385668;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82385620:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82385654
	if (!ctx.cr6.eq) goto loc_82385654;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82385644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82385654:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82385620
	if (ctx.cr6.lt) goto loc_82385620;
loc_82385668:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82385684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// bl 0x82224948
	ctx.lr = 0x82385690;
	sub_82224948(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823822a8
	ctx.lr = 0x8238569C;
	sub_823822A8(ctx, base);
loc_8238569C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823856A8"))) PPC_WEAK_FUNC(sub_823856A8);
PPC_FUNC_IMPL(__imp__sub_823856A8) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r3,r3,4996
	ctx.r3.s64 = ctx.r3.s64 + 4996;
	// bl 0x8237bf98
	ctx.lr = 0x823856C8;
	sub_8237BF98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823856D8"))) PPC_WEAK_FUNC(sub_823856D8);
PPC_FUNC_IMPL(__imp__sub_823856D8) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,32644
	ctx.r8.s64 = ctx.r10.s64 + 32644;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x8235b1f8
	ctx.lr = 0x8238576C;
	sub_8235B1F8(ctx, base);
	// bl 0x8235bb60
	ctx.lr = 0x82385770;
	sub_8235BB60(ctx, base);
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

__attribute__((alias("__imp__sub_82385788"))) PPC_WEAK_FUNC(sub_82385788);
PPC_FUNC_IMPL(__imp__sub_82385788) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,32644
	ctx.r10.s64 = ctx.r10.s64 + 32644;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x8235b1f8
	ctx.lr = 0x823857C4;
	sub_8235B1F8(ctx, base);
	// bl 0x8235bb60
	ctx.lr = 0x823857C8;
	sub_8235BB60(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x823826f8
	ctx.lr = 0x823857D0;
	sub_823826F8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x823826f8
	ctx.lr = 0x823857D8;
	sub_823826F8(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823826f8
	ctx.lr = 0x823857E0;
	sub_823826F8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82224400
	ctx.lr = 0x823857E8;
	sub_82224400(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823857FC"))) PPC_WEAK_FUNC(sub_823857FC);
PPC_FUNC_IMPL(__imp__sub_823857FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82385800"))) PPC_WEAK_FUNC(sub_82385800);
PPC_FUNC_IMPL(__imp__sub_82385800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82385808;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// sth r7,182(r1)
	PPC_STORE_U16(ctx.r1.u32 + 182, ctx.r7.u16);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x82224948
	ctx.lr = 0x8238583C;
	sub_82224948(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823858d8
	if (ctx.cr0.eq) goto loc_823858D8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x823838b8
	ctx.lr = 0x82385850;
	sub_823838B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823858d8
	if (ctx.cr0.eq) goto loc_823858D8;
	// addi r4,r1,182
	ctx.r4.s64 = ctx.r1.s64 + 182;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82383930
	ctx.lr = 0x82385864;
	sub_82383930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823858d8
	if (ctx.cr0.eq) goto loc_823858D8;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82377360
	ctx.lr = 0x82385878;
	sub_82377360(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823858d8
	if (ctx.cr0.eq) goto loc_823858D8;
	// bl 0x8235b1f8
	ctx.lr = 0x82385884;
	sub_8235B1F8(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235bea0
	ctx.lr = 0x82385898;
	sub_8235BEA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823858d8
	if (!ctx.cr6.eq) goto loc_823858D8;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823858d8
	if (!ctx.cr6.eq) goto loc_823858D8;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823858d8
	if (!ctx.cr6.eq) goto loc_823858D8;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823858dc
	if (ctx.cr6.eq) goto loc_823858DC;
loc_823858D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823858DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823858E4"))) PPC_WEAK_FUNC(sub_823858E4);
PPC_FUNC_IMPL(__imp__sub_823858E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823858E8"))) PPC_WEAK_FUNC(sub_823858E8);
PPC_FUNC_IMPL(__imp__sub_823858E8) {
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
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82385958
	if (!ctx.cr6.lt) goto loc_82385958;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82385944
	if (!ctx.cr6.lt) goto loc_82385944;
	// divwu r10,r4,r11
	ctx.r10.u32 = ctx.r4.u32 / ctx.r11.u32;
	// divwu r9,r4,r11
	ctx.r9.u32 = ctx.r4.u32 / ctx.r11.u32;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// twllei r11,0
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// twllei r11,0
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82385944:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x823839a0
	ctx.lr = 0x8238594C;
	sub_823839A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8238595c
	if (ctx.cr0.eq) goto loc_8238595C;
loc_82385958:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8238595C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238596C"))) PPC_WEAK_FUNC(sub_8238596C);
PPC_FUNC_IMPL(__imp__sub_8238596C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82385970"))) PPC_WEAK_FUNC(sub_82385970);
PPC_FUNC_IMPL(__imp__sub_82385970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82385978;
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
	// bgt cr6,0x823859b0
	if (ctx.cr6.gt) goto loc_823859B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823839a0
	ctx.lr = 0x823859A0;
	sub_823839A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823859b0
	if (!ctx.cr0.eq) goto loc_823859B0;
loc_823859A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823859f0
	goto loc_823859F0;
loc_823859B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823859a8
	if (ctx.cr6.eq) goto loc_823859A8;
	// mulli r10,r30,580
	ctx.r10.s64 = ctx.r30.s64 * 580;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823859d4
	if (ctx.cr0.eq) goto loc_823859D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8658
	ctx.lr = 0x823859D4;
	sub_823A8658(ctx, base);
loc_823859D4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a85b0
	ctx.lr = 0x823859E0;
	sub_823A85B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823859F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823859F8"))) PPC_WEAK_FUNC(sub_823859F8);
PPC_FUNC_IMPL(__imp__sub_823859F8) {
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
	// bl 0x82383b88
	ctx.lr = 0x82385A10;
	sub_82383B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82385a48
	if (ctx.cr0.eq) goto loc_82385A48;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385a30
	if (ctx.cr6.eq) goto loc_82385A30;
	// stw r11,1212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1212, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,1208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1208, ctx.r3.u32);
loc_82385A30:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82385a44
	if (!ctx.cr6.eq) goto loc_82385A44;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82385A44:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82385A48:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82385A5C"))) PPC_WEAK_FUNC(sub_82385A5C);
PPC_FUNC_IMPL(__imp__sub_82385A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82385A60"))) PPC_WEAK_FUNC(sub_82385A60);
PPC_FUNC_IMPL(__imp__sub_82385A60) {
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
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82385a88
	if (!ctx.cr6.eq) goto loc_82385A88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82385aa4
	goto loc_82385AA4;
loc_82385A88:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8237eaa0
	ctx.lr = 0x82385A98;
	sub_8237EAA0(ctx, base);
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// bl 0x82383c78
	ctx.lr = 0x82385AA0;
	sub_82383C78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82385AA4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82385AB8"))) PPC_WEAK_FUNC(sub_82385AB8);
PPC_FUNC_IMPL(__imp__sub_82385AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82385AC0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,32648
	ctx.r11.s64 = ctx.r11.s64 + 32648;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,3
	ctx.r29.s64 = 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r28,16
	ctx.r28.s64 = 16;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// bl 0x8237ece8
	ctx.lr = 0x82385AFC;
	sub_8237ECE8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r30,2476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2476, ctx.r30.u32);
	// addi r3,r31,2488
	ctx.r3.s64 = ctx.r31.s64 + 2488;
	// ori r11,r11,24464
	ctx.r11.u64 = ctx.r11.u64 | 24464;
	// stw r30,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r30.u32);
	// stw r11,2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2484, ctx.r11.u32);
	// bl 0x823a86f8
	ctx.lr = 0x82385B18;
	sub_823A86F8(ctx, base);
	// stw r30,2500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2500, ctx.r30.u32);
	// stw r30,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r30.u32);
	// addi r3,r31,2556
	ctx.r3.s64 = ctx.r31.s64 + 2556;
	// stw r30,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r30.u32);
	// stw r30,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r30.u32);
	// stw r30,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r30.u32);
	// stw r30,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r30.u32);
	// stw r30,2524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2524, ctx.r30.u32);
	// stw r30,2528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2528, ctx.r30.u32);
	// stw r30,2532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2532, ctx.r30.u32);
	// stw r29,2536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2536, ctx.r29.u32);
	// stw r30,2540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2540, ctx.r30.u32);
	// stw r30,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r30.u32);
	// stw r30,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r30.u32);
	// stw r28,2552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2552, ctx.r28.u32);
	// bl 0x823856d8
	ctx.lr = 0x82385B58;
	sub_823856D8(ctx, base);
	// stw r29,2644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2644, ctx.r29.u32);
	// stw r30,2648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2648, ctx.r30.u32);
	// addi r3,r31,4984
	ctx.r3.s64 = ctx.r31.s64 + 4984;
	// stw r30,2652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2652, ctx.r30.u32);
	// stw r30,2656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2656, ctx.r30.u32);
	// stw r30,3816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3816, ctx.r30.u32);
	// stw r30,4972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4972, ctx.r30.u32);
	// stw r30,4976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4976, ctx.r30.u32);
	// stw r30,4980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4980, ctx.r30.u32);
	// bl 0x823a86f8
	ctx.lr = 0x82385B80;
	sub_823A86F8(ctx, base);
	// stw r29,4996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4996, ctx.r29.u32);
	// stw r30,5000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5000, ctx.r30.u32);
	// stw r30,5004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5004, ctx.r30.u32);
	// stw r30,5008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5008, ctx.r30.u32);
	// stw r28,5012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5012, ctx.r28.u32);
	// stw r29,5016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5016, ctx.r29.u32);
	// stw r30,5020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5020, ctx.r30.u32);
	// stw r30,5024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5024, ctx.r30.u32);
	// stw r30,5028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5028, ctx.r30.u32);
	// stw r28,5032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5032, ctx.r28.u32);
	// stb r30,5036(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5036, ctx.r30.u8);
	// bl 0x8235b1f8
	ctx.lr = 0x82385BB0;
	sub_8235B1F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235b208
	ctx.lr = 0x82385BB8;
	sub_8235B208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82385BC4"))) PPC_WEAK_FUNC(sub_82385BC4);
PPC_FUNC_IMPL(__imp__sub_82385BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82385BC8"))) PPC_WEAK_FUNC(sub_82385BC8);
PPC_FUNC_IMPL(__imp__sub_82385BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,32648
	ctx.r11.s64 = ctx.r11.s64 + 32648;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8235b1f8
	ctx.lr = 0x82385BF0;
	sub_8235B1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383030
	ctx.lr = 0x82385C00;
	sub_82383030(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b240
	ctx.lr = 0x82385C0C;
	sub_8235B240(ctx, base);
	// addi r3,r31,5016
	ctx.r3.s64 = ctx.r31.s64 + 5016;
	// bl 0x82224400
	ctx.lr = 0x82385C14;
	sub_82224400(ctx, base);
	// addi r3,r31,4996
	ctx.r3.s64 = ctx.r31.s64 + 4996;
	// bl 0x823826f8
	ctx.lr = 0x82385C1C;
	sub_823826F8(ctx, base);
	// addi r3,r31,4984
	ctx.r3.s64 = ctx.r31.s64 + 4984;
	// bl 0x823ab568
	ctx.lr = 0x82385C24;
	sub_823AB568(ctx, base);
	// addi r3,r31,2644
	ctx.r3.s64 = ctx.r31.s64 + 2644;
	// bl 0x82382c40
	ctx.lr = 0x82385C2C;
	sub_82382C40(ctx, base);
	// addi r3,r31,2556
	ctx.r3.s64 = ctx.r31.s64 + 2556;
	// bl 0x82385788
	ctx.lr = 0x82385C34;
	sub_82385788(ctx, base);
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// bl 0x82224400
	ctx.lr = 0x82385C3C;
	sub_82224400(ctx, base);
	// addi r3,r31,2488
	ctx.r3.s64 = ctx.r31.s64 + 2488;
	// bl 0x823ab568
	ctx.lr = 0x82385C44;
	sub_823AB568(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8237eda0
	ctx.lr = 0x82385C4C;
	sub_8237EDA0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82382e20
	ctx.lr = 0x82385C54;
	sub_82382E20(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,31044
	ctx.r11.s64 = ctx.r11.s64 + 31044;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82385C78"))) PPC_WEAK_FUNC(sub_82385C78);
PPC_FUNC_IMPL(__imp__sub_82385C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32177
	ctx.r31.s64 = -2108751872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-4840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4840);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82385cec
	if (!ctx.cr6.eq) goto loc_82385CEC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823570e0
	ctx.lr = 0x82385CA8;
	sub_823570E0(ctx, base);
	// li r3,5040
	ctx.r3.s64 = 5040;
	// bl 0x823570f0
	ctx.lr = 0x82385CB0;
	sub_823570F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82385cc4
	if (ctx.cr0.eq) goto loc_82385CC4;
	// bl 0x82385ab8
	ctx.lr = 0x82385CBC;
	sub_82385AB8(ctx, base);
	// stw r3,-4840(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4840, ctx.r3.u32);
	// b 0x82385ccc
	goto loc_82385CCC;
loc_82385CC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4840(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4840, ctx.r11.u32);
loc_82385CCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x82385CD4;
	sub_823570E0(ctx, base);
	// lwz r3,-4840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4840);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82385cec
	if (ctx.cr6.eq) goto loc_82385CEC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82383030
	ctx.lr = 0x82385CE8;
	sub_82383030(ctx, base);
	// lwz r3,-4840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4840);
loc_82385CEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82385D04"))) PPC_WEAK_FUNC(sub_82385D04);
PPC_FUNC_IMPL(__imp__sub_82385D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82385D08"))) PPC_WEAK_FUNC(sub_82385D08);
PPC_FUNC_IMPL(__imp__sub_82385D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82385D10;
	sub_82248788(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82385D1C;
	sub_82381DD0(ctx, base);
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82385e6c
	if (!ctx.cr6.gt) goto loc_82385E6C;
loc_82385D30:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823a80b8
	ctx.lr = 0x82385D38;
	sub_823A80B8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82370088
	ctx.lr = 0x82385D40;
	sub_82370088(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82370088
	ctx.lr = 0x82385D48;
	sub_82370088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823827b8
	ctx.lr = 0x82385D50;
	sub_823827B8(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82385e44
	if (ctx.cr6.eq) goto loc_82385E44;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82385e44
	if (ctx.cr6.eq) goto loc_82385E44;
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82385970
	ctx.lr = 0x82385D78;
	sub_82385970(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82382b40
	ctx.lr = 0x82385D8C;
	sub_82382B40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82381f40
	ctx.lr = 0x82385D98;
	sub_82381F40(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82385dd4
	if (ctx.cr6.eq) goto loc_82385DD4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385dbc
	if (ctx.cr6.eq) goto loc_82385DBC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 * 580;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-580
	ctx.r11.s64 = ctx.r11.s64 + -580;
loc_82385DBC:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82382390
	ctx.lr = 0x82385DD0;
	sub_82382390(ctx, base);
	// b 0x82385dfc
	goto loc_82385DFC;
loc_82385DD4:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82385df4
	if (ctx.cr6.eq) goto loc_82385DF4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 * 580;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-580
	ctx.r11.s64 = ctx.r11.s64 + -580;
loc_82385DF4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82385DFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// bne cr6,0x82385e20
	if (!ctx.cr6.eq) goto loc_82385E20;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82385e30
	goto loc_82385E30;
loc_82385E20:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 * 580;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-580
	ctx.r3.s64 = ctx.r11.s64 + -580;
loc_82385E30:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82385E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82385E44:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823700d8
	ctx.lr = 0x82385E4C;
	sub_823700D8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823700d8
	ctx.lr = 0x82385E54;
	sub_823700D8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823a8158
	ctx.lr = 0x82385E5C;
	sub_823A8158(ctx, base);
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82385d30
	if (ctx.cr6.lt) goto loc_82385D30;
loc_82385E6C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,11
	ctx.r11.s64 = 11;
	// beq cr6,0x82385e80
	if (ctx.cr6.eq) goto loc_82385E80;
	// li r11,10
	ctx.r11.s64 = 10;
loc_82385E80:
	// stw r11,2480(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2480, ctx.r11.u32);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82385E8C"))) PPC_WEAK_FUNC(sub_82385E8C);
PPC_FUNC_IMPL(__imp__sub_82385E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82385E90"))) PPC_WEAK_FUNC(sub_82385E90);
PPC_FUNC_IMPL(__imp__sub_82385E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82385E98;
	sub_82248788(ctx, base);
	// stwu r1,-2448(r1)
	ea = -2448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82381898
	ctx.lr = 0x82385EAC;
	sub_82381898(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82385EB4;
	sub_82381DD0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mulli r31,r31,580
	ctx.r31.s64 = ctx.r31.s64 * 580;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82382498
	ctx.lr = 0x82385EC8;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82385f18
	if (ctx.cr0.eq) goto loc_82385F18;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237ea18
	ctx.lr = 0x82385ED8;
	sub_8237EA18(ctx, base);
	// b 0x82385ef8
	goto loc_82385EF8;
loc_82385EDC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82385EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82385EF8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82385a60
	ctx.lr = 0x82385F08;
	sub_82385A60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82385edc
	if (!ctx.cr0.eq) goto loc_82385EDC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8237e850
	ctx.lr = 0x82385F18;
	sub_8237E850(ctx, base);
loc_82385F18:
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82385F20"))) PPC_WEAK_FUNC(sub_82385F20);
PPC_FUNC_IMPL(__imp__sub_82385F20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2648);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82385f5c
	if (ctx.cr6.eq) goto loc_82385F5C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82385F34:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,1208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1208);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82385f4c
	if (!ctx.cr6.eq) goto loc_82385F4C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82385F4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82385f34
	if (!ctx.cr6.eq) goto loc_82385F34;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82385F5C:
	// addi r3,r3,2644
	ctx.r3.s64 = ctx.r3.s64 + 2644;
	// b 0x823859f8
	sub_823859F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82385F64"))) PPC_WEAK_FUNC(sub_82385F64);
PPC_FUNC_IMPL(__imp__sub_82385F64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82385F68"))) PPC_WEAK_FUNC(sub_82385F68);
PPC_FUNC_IMPL(__imp__sub_82385F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82385F70;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,2648(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2648);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// b 0x82385fcc
	goto loc_82385FCC;
loc_82385F84:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,1208(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1208);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82385fcc
	if (!ctx.cr6.eq) goto loc_82385FCC;
	// lwz r11,2648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2648);
	// addi r3,r30,2644
	ctx.r3.s64 = ctx.r30.s64 + 2644;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82385fb4
	if (!ctx.cr6.eq) goto loc_82385FB4;
	// bl 0x82383ab8
	ctx.lr = 0x82385FB0;
	sub_82383AB8(ctx, base);
	// b 0x82385fcc
	goto loc_82385FCC;
loc_82385FB4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82385fc8
	if (!ctx.cr6.eq) goto loc_82385FC8;
	// bl 0x82383b20
	ctx.lr = 0x82385FC4;
	sub_82383B20(ctx, base);
	// b 0x82385fcc
	goto loc_82385FCC;
loc_82385FC8:
	// bl 0x82382e78
	ctx.lr = 0x82385FCC;
	sub_82382E78(ctx, base);
loc_82385FCC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82385f84
	if (!ctx.cr6.eq) goto loc_82385F84;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82385FDC"))) PPC_WEAK_FUNC(sub_82385FDC);
PPC_FUNC_IMPL(__imp__sub_82385FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82385FE0"))) PPC_WEAK_FUNC(sub_82385FE0);
PPC_FUNC_IMPL(__imp__sub_82385FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82385FE8;
	sub_82248784(ctx, base);
	// stwu r1,-3680(r1)
	ea = -3680 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82386134
	if (ctx.cr6.eq) goto loc_82386134;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82386134
	if (ctx.cr6.eq) goto loc_82386134;
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x82386010;
	sub_823585A0(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82386134
	if (ctx.cr0.eq) goto loc_82386134;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,32684
	ctx.r4.s64 = ctx.r11.s64 + 32684;
	// addi r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 2;
	// bl 0x82358538
	ctx.lr = 0x82386034;
	sub_82358538(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82386134
	if (!ctx.cr0.eq) goto loc_82386134;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// addi r28,r30,6
	ctx.r28.s64 = ctx.r30.s64 + 6;
	// bl 0x8237ea18
	ctx.lr = 0x82386048;
	sub_8237EA18(ctx, base);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// li r29,10
	ctx.r29.s64 = 10;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stb r11,3624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 3624, ctx.r11.u8);
	// beq cr6,0x8238608c
	if (ctx.cr6.eq) goto loc_8238608C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r30,10
	ctx.r4.s64 = ctx.r30.s64 + 10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358508
	ctx.lr = 0x8238606C;
	sub_82358508(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e958
	ctx.lr = 0x8238607C;
	sub_8237E958(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r31,10
	ctx.r29.s64 = ctx.r31.s64 + 10;
	// bl 0x823585a0
	ctx.lr = 0x8238608C;
	sub_823585A0(ctx, base);
loc_8238608C:
	// subf. r31,r29,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823860b4
	if (ctx.cr0.eq) goto loc_823860B4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358508
	ctx.lr = 0x823860A4;
	sub_82358508(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e9b8
	ctx.lr = 0x823860B4;
	sub_8237E9B8(ctx, base);
loc_823860B4:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lis r29,-32177
	ctx.r29.s64 = -2108751872;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8238610c
	if (!ctx.cr0.eq) goto loc_8238610C;
	// lbz r30,3(r28)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// lwz r7,-4840(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4840);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82383758
	ctx.lr = 0x823860D8;
	sub_82383758(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8238612c
	if (ctx.cr6.eq) goto loc_8238612C;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mulli r11,r3,580
	ctx.r11.s64 = ctx.r3.s64 * 580;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,1312
	ctx.r4.s64 = ctx.r1.s64 + 1312;
	// addi r3,r11,516
	ctx.r3.s64 = ctx.r11.s64 + 516;
	// bl 0x82383c10
	ctx.lr = 0x823860FC;
	sub_82383C10(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-4840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4840);
	// bl 0x82385e90
	ctx.lr = 0x8238610C;
	sub_82385E90(ctx, base);
loc_8238610C:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8238612c
	if (!ctx.cr6.eq) goto loc_8238612C;
	// addi r6,r1,1312
	ctx.r6.s64 = ctx.r1.s64 + 1312;
	// lwz r3,-4840(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4840);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r4,3(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// bl 0x823854a0
	ctx.lr = 0x8238612C;
	sub_823854A0(ctx, base);
loc_8238612C:
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e850
	ctx.lr = 0x82386134;
	sub_8237E850(ctx, base);
loc_82386134:
	// addi r1,r1,3680
	ctx.r1.s64 = ctx.r1.s64 + 3680;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238613C"))) PPC_WEAK_FUNC(sub_8238613C);
PPC_FUNC_IMPL(__imp__sub_8238613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82386140"))) PPC_WEAK_FUNC(sub_82386140);
PPC_FUNC_IMPL(__imp__sub_82386140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82386148;
	sub_8224878C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823585a0
	ctx.lr = 0x82386160;
	sub_823585A0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823585a0
	ctx.lr = 0x8238616C;
	sub_823585A0(ctx, base);
	// bl 0x82381dd0
	ctx.lr = 0x82386170;
	sub_82381DD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82370088
	ctx.lr = 0x8238617C;
	sub_82370088(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82382390
	ctx.lr = 0x8238618C;
	sub_82382390(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82370230
	ctx.lr = 0x82386198;
	sub_82370230(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82372978
	ctx.lr = 0x823861AC;
	sub_82372978(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8235a538
	ctx.lr = 0x823861B4;
	sub_8235A538(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82357c88
	ctx.lr = 0x823861BC;
	sub_82357C88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x82383758
	ctx.lr = 0x823861D0;
	sub_82383758(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823861ec
	if (!ctx.cr6.eq) goto loc_823861EC;
loc_823861D8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823700d8
	ctx.lr = 0x823861E0;
	sub_823700D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823861E4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823861EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r3,580
	ctx.r10.s64 = ctx.r3.s64 * 580;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823861d8
	if (!ctx.cr6.eq) goto loc_823861D8;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r31,2556
	ctx.r31.s64 = ctx.r31.s64 + 2556;
	// stw r10,576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 576, ctx.r10.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82385800
	ctx.lr = 0x82386228;
	sub_82385800(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383868
	ctx.lr = 0x8238623C;
	sub_82383868(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82386258
	if (!ctx.cr0.eq) goto loc_82386258;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82386248:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823700d8
	ctx.lr = 0x82386250;
	sub_823700D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823861e4
	goto loc_823861E4;
loc_82386258:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82386248
	goto loc_82386248;
}

__attribute__((alias("__imp__sub_82386260"))) PPC_WEAK_FUNC(sub_82386260);
PPC_FUNC_IMPL(__imp__sub_82386260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82385788
	ctx.lr = 0x82386280;
	sub_82385788(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82386290
	if (ctx.cr0.eq) goto loc_82386290;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x82386290;
	sub_82357128(ctx, base);
loc_82386290:
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

__attribute__((alias("__imp__sub_823862AC"))) PPC_WEAK_FUNC(sub_823862AC);
PPC_FUNC_IMPL(__imp__sub_823862AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823862B0"))) PPC_WEAK_FUNC(sub_823862B0);
PPC_FUNC_IMPL(__imp__sub_823862B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82385bc8
	ctx.lr = 0x823862D0;
	sub_82385BC8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823862e0
	if (ctx.cr0.eq) goto loc_823862E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x823862E0;
	sub_82357128(ctx, base);
loc_823862E0:
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

__attribute__((alias("__imp__sub_823862FC"))) PPC_WEAK_FUNC(sub_823862FC);
PPC_FUNC_IMPL(__imp__sub_823862FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82386300"))) PPC_WEAK_FUNC(sub_82386300);
PPC_FUNC_IMPL(__imp__sub_82386300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x82386308;
	sub_82248778(ctx, base);
	// stwu r1,-2912(r1)
	ea = -2912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8237ee70
	ctx.lr = 0x8238631C;
	sub_8237EE70(ctx, base);
	// bl 0x82381dd0
	ctx.lr = 0x82386320;
	sub_82381DD0(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82386338
	if (!ctx.cr6.eq) goto loc_82386338;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8238668c
	goto loc_8238668C;
loc_82386338:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82386348
	if (ctx.cr6.gt) goto loc_82386348;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_82386348:
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x823a80b8
	ctx.lr = 0x82386350;
	sub_823A80B8(ctx, base);
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// bl 0x82370088
	ctx.lr = 0x82386358;
	sub_82370088(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82370088
	ctx.lr = 0x82386360;
	sub_82370088(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x823827b8
	ctx.lr = 0x82386368;
	sub_823827B8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82382b40
	ctx.lr = 0x8238637C;
	sub_82382B40(ctx, base);
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82370360
	ctx.lr = 0x8238638C;
	sub_82370360(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r26,3
	ctx.r26.s64 = 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r26,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r26.u32);
	// bne cr6,0x823863a4
	if (!ctx.cr6.eq) goto loc_823863A4;
	// li r11,16
	ctx.r11.s64 = 16;
loc_823863A4:
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823858e8
	ctx.lr = 0x823863B8;
	sub_823858E8(ctx, base);
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82385970
	ctx.lr = 0x823863C4;
	sub_82385970(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r25,4096
	ctx.r25.s64 = 4096;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r25,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r25.u32);
	// bne cr6,0x823863e0
	if (!ctx.cr6.eq) goto loc_823863E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823863f0
	goto loc_823863F0;
loc_823863E0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 * 580;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-580
	ctx.r3.s64 = ctx.r11.s64 + -580;
loc_823863F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82386404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823864d4
	if (ctx.cr6.eq) goto loc_823864D4;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82370088
	ctx.lr = 0x82386418;
	sub_82370088(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823a7908
	ctx.lr = 0x82386420;
	sub_823A7908(ctx, base);
	// addi r3,r1,1636
	ctx.r3.s64 = ctx.r1.s64 + 1636;
	// bl 0x82370088
	ctx.lr = 0x82386428;
	sub_82370088(ctx, base);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82370360
	ctx.lr = 0x82386434;
	sub_82370360(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82382420
	ctx.lr = 0x8238643C;
	sub_82382420(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r3,2504(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2504, ctx.r3.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r24,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r24.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82370360
	ctx.lr = 0x82386454;
	sub_82370360(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823825e0
	ctx.lr = 0x82386460;
	sub_823825E0(ctx, base);
	// stw r24,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r24.u32);
	// stw r24,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r24.u32);
	// lwz r11,1316(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1316);
	// lwz r5,1292(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// stw r24,1632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1632, ctx.r24.u32);
	// stw r5,1680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1680, ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238648c
	if (ctx.cr6.eq) goto loc_8238648C;
	// addi r4,r30,140
	ctx.r4.s64 = ctx.r30.s64 + 140;
	// addi r3,r1,1684
	ctx.r3.s64 = ctx.r1.s64 + 1684;
	// bl 0x82358508
	ctx.lr = 0x8238648C;
	sub_82358508(ctx, base);
loc_8238648C:
	// addi r4,r1,1632
	ctx.r4.s64 = ctx.r1.s64 + 1632;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82385f20
	ctx.lr = 0x82386498;
	sub_82385F20(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823864b8
	if (ctx.cr6.eq) goto loc_823864B8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 * 580;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-580
	ctx.r11.s64 = ctx.r11.s64 + -580;
loc_823864B8:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r3,r1,1636
	ctx.r3.s64 = ctx.r1.s64 + 1636;
	// bl 0x823700d8
	ctx.lr = 0x823864C4;
	sub_823700D8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823a78a0
	ctx.lr = 0x823864CC;
	sub_823A78A0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823700d8
	ctx.lr = 0x823864D4;
	sub_823700D8(ctx, base);
loc_823864D4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82370088
	ctx.lr = 0x823864DC;
	sub_82370088(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82370088
	ctx.lr = 0x823864E4;
	sub_82370088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823827b8
	ctx.lr = 0x823864EC;
	sub_823827B8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82382b40
	ctx.lr = 0x82386500;
	sub_82382B40(ctx, base);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r26,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238659c
	if (ctx.cr6.eq) goto loc_8238659C;
	// lwz r29,12(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82386590
	if (!ctx.cr6.lt) goto loc_82386590;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82386524:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x823a80b8
	ctx.lr = 0x8238652C;
	sub_823A80B8(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82385970
	ctx.lr = 0x8238653C;
	sub_82385970(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82386554
	if (!ctx.cr6.eq) goto loc_82386554;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82386564
	goto loc_82386564;
loc_82386554:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 * 580;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-580
	ctx.r3.s64 = ctx.r11.s64 + -580;
loc_82386564:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82386578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x823a8158
	ctx.lr = 0x82386580;
	sub_823A8158(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82386524
	if (ctx.cr6.lt) goto loc_82386524;
loc_82386590:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,2480(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2480, ctx.r11.u32);
	// b 0x8238664c
	goto loc_8238664C;
loc_8238659C:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x823a80b8
	ctx.lr = 0x823865A4;
	sub_823A80B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82370360
	ctx.lr = 0x823865B0;
	sub_82370360(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82385970
	ctx.lr = 0x823865BC;
	sub_82385970(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823865d8
	if (ctx.cr6.eq) goto loc_823865D8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 * 580;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-580
	ctx.r11.s64 = ctx.r11.s64 + -580;
loc_823865D8:
	// li r10,15000
	ctx.r10.s64 = 15000;
	// li r4,15000
	ctx.r4.s64 = 15000;
	// stw r10,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r10.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82389a30
	ctx.lr = 0x823865EC;
	sub_82389A30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82386604
	if (!ctx.cr6.eq) goto loc_82386604;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82386614
	goto loc_82386614;
loc_82386604:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 * 580;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-580
	ctx.r3.s64 = ctx.r11.s64 + -580;
loc_82386614:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82386628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,2520(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2520, ctx.r28.u32);
	// stw r11,2480(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2480, ctx.r11.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r28,4976(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4976, ctx.r28.u32);
	// stw r10,2528(r27)
	PPC_STORE_U32(ctx.r27.u32 + 2528, ctx.r10.u32);
	// bl 0x823a8158
	ctx.lr = 0x8238664C;
	sub_823A8158(ctx, base);
loc_8238664C:
	// addi r31,r27,2488
	ctx.r31.s64 = ctx.r27.s64 + 2488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82386658;
	sub_823A86F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d130
	ctx.lr = 0x82386660;
	sub_8237D130(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823700d8
	ctx.lr = 0x82386668;
	sub_823700D8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823700d8
	ctx.lr = 0x82386670;
	sub_823700D8(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x823700d8
	ctx.lr = 0x82386678;
	sub_823700D8(ctx, base);
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// bl 0x823700d8
	ctx.lr = 0x82386680;
	sub_823700D8(ctx, base);
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x823a8158
	ctx.lr = 0x82386688;
	sub_823A8158(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8238668C:
	// addi r1,r1,2912
	ctx.r1.s64 = ctx.r1.s64 + 2912;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_82386694"))) PPC_WEAK_FUNC(sub_82386694);
PPC_FUNC_IMPL(__imp__sub_82386694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82386698"))) PPC_WEAK_FUNC(sub_82386698);
PPC_FUNC_IMPL(__imp__sub_82386698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823866A0;
	sub_82248788(ctx, base);
	// stwu r1,-3680(r1)
	ea = -3680 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82381dd0
	ctx.lr = 0x823866B0;
	sub_82381DD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237ea18
	ctx.lr = 0x823866BC;
	sub_8237EA18(ctx, base);
	// li r4,1218
	ctx.r4.s64 = 1218;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x823866C8;
	sub_823585A0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// lwz r11,2500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2500);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8237e958
	ctx.lr = 0x823866E8;
	sub_8237E958(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,3628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3628, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82386730
	if (!ctx.cr6.gt) goto loc_82386730;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,2504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
loc_8238670C:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8238677c
	if (ctx.cr6.eq) goto loc_8238677C;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 + 580;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8238670c
	if (ctx.cr6.lt) goto loc_8238670C;
loc_82386730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// bl 0x82385f68
	ctx.lr = 0x8238673C;
	sub_82385F68(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,2504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// bl 0x823822a8
	ctx.lr = 0x82386748;
	sub_823822A8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r11.u32);
	// addi r30,r31,2488
	ctx.r30.s64 = ctx.r31.s64 + 2488;
	// stw r10,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x82386764;
	sub_8237D170(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8238676C;
	sub_823A86F8(ctx, base);
loc_8238676C:
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x8237e850
	ctx.lr = 0x82386774;
	sub_8237E850(ctx, base);
	// addi r1,r1,3680
	ctx.r1.s64 = ctx.r1.s64 + 3680;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8238677C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,1312
	ctx.r5.s64 = ctx.r1.s64 + 1312;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823833e8
	ctx.lr = 0x82386790;
	sub_823833E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82386730
	if (!ctx.cr6.eq) goto loc_82386730;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383448
	ctx.lr = 0x823867A4;
	sub_82383448(ctx, base);
	// b 0x8238676c
	goto loc_8238676C;
}

__attribute__((alias("__imp__sub_823867A8"))) PPC_WEAK_FUNC(sub_823867A8);
PPC_FUNC_IMPL(__imp__sub_823867A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x823867B0;
	sub_82248764(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x823867BC;
	sub_82381DD0(ctx, base);
	// lwz r11,2516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2516);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823867d8
	if (ctx.cr6.eq) goto loc_823867D8;
loc_823867CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823867D0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822487b4
	// ERROR 822487B4
	return;
loc_823867D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r11,2516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2516, ctx.r11.u32);
	// stw r25,2572(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2572, ctx.r25.u32);
	// stw r25,2592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2592, ctx.r25.u32);
	// stw r25,2612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2612, ctx.r25.u32);
	// stw r25,2632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2632, ctx.r25.u32);
	// stw r25,2560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2560, ctx.r25.u32);
	// bl 0x8235b1f8
	ctx.lr = 0x823867FC;
	sub_8235B1F8(ctx, base);
	// bl 0x8235bb60
	ctx.lr = 0x82386800;
	sub_8235BB60(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,28(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// lwz r26,5004(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5004);
	// bl 0x82383800
	ctx.lr = 0x82386814;
	sub_82383800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823867cc
	if (ctx.cr0.eq) goto loc_823867CC;
	// lwz r19,84(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x823867cc
	if (ctx.cr6.eq) goto loc_823867CC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237c018
	ctx.lr = 0x82386830;
	sub_8237C018(ctx, base);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823869a8
	if (ctx.cr6.eq) goto loc_823869A8;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82386850:
	// lwz r11,5000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5000);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823868a0
	if (!ctx.cr6.eq) goto loc_823868A0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r4,r23
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82386874
	if (!ctx.cr6.eq) goto loc_82386874;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
loc_82386874:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82381f40
	ctx.lr = 0x8238687C;
	sub_82381F40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8238689c
	if (ctx.cr6.eq) goto loc_8238689C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8237bf98
	ctx.lr = 0x8238689C;
	sub_8237BF98(ctx, base);
loc_8238689C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_823868A0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82386850
	if (!ctx.cr0.eq) goto loc_82386850;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823869a8
	if (ctx.cr6.eq) goto loc_823869A8;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_823868C0:
	// lwz r11,5000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5000);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82386914
	if (!ctx.cr6.eq) goto loc_82386914;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r4,r23
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x823868e4
	if (!ctx.cr6.eq) goto loc_823868E4;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
loc_823868E4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82381f40
	ctx.lr = 0x823868EC;
	sub_82381F40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8238690c
	if (ctx.cr6.eq) goto loc_8238690C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8237bf98
	ctx.lr = 0x8238690C;
	sub_8237BF98(ctx, base);
loc_8238690C:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82386914:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x823868c0
	if (!ctx.cr0.eq) goto loc_823868C0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823869a8
	if (ctx.cr6.eq) goto loc_823869A8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82386930:
	// lwz r11,5000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5000);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82386958
	if (!ctx.cr6.eq) goto loc_82386958;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r23
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82386958
	if (ctx.cr6.eq) goto loc_82386958;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82386140
	ctx.lr = 0x82386958;
	sub_82386140(ctx, base);
loc_82386958:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82386930
	if (!ctx.cr0.eq) goto loc_82386930;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823869a8
	if (ctx.cr6.eq) goto loc_823869A8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82386974:
	// lwz r11,5000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5000);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8238699c
	if (!ctx.cr6.eq) goto loc_8238699C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r23
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8238699c
	if (ctx.cr6.eq) goto loc_8238699C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82386140
	ctx.lr = 0x8238699C;
	sub_82386140(ctx, base);
loc_8238699C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82386974
	if (!ctx.cr0.eq) goto loc_82386974;
loc_823869A8:
	// bl 0x8235b1f8
	ctx.lr = 0x823869AC;
	sub_8235B1F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x823869c8
	if (!ctx.cr0.eq) goto loc_823869C8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_823869B8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8237c078
	ctx.lr = 0x823869C0;
	sub_8237C078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823867d0
	goto loc_823867D0;
loc_823869C8:
	// addi r11,r19,-2
	ctx.r11.s64 = ctx.r19.s64 + -2;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x8235b5e0
	ctx.lr = 0x823869EC;
	sub_8235B5E0(ctx, base);
	// lwz r11,2588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2588);
	// lwz r10,2608(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2608);
	// lis r9,-32200
	ctx.r9.s64 = -2110259200;
	// lwz r8,2628(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2628);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r9,r9,24544
	ctx.r9.s64 = ctx.r9.s64 + 24544;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// bl 0x8235b938
	ctx.lr = 0x82386A20;
	sub_8235B938(ctx, base);
	// lwz r11,28(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x823869b8
	goto loc_823869B8;
}

__attribute__((alias("__imp__sub_82386A30"))) PPC_WEAK_FUNC(sub_82386A30);
PPC_FUNC_IMPL(__imp__sub_82386A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82386A38;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x82386b74
	if (ctx.cr6.gt) goto loc_82386B74;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,32696
	ctx.r12.s64 = ctx.r12.s64 + 32696;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// nop 
	// addi r12,r12,27260
	ctx.r12.s64 = ctx.r12.s64 + 27260;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82384a08
	ctx.lr = 0x82386A88;
	sub_82384A08(ctx, base);
	// b 0x82386b74
	goto loc_82386B74;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82384ad0
	ctx.lr = 0x82386A98;
	sub_82384AD0(ctx, base);
	// b 0x82386b74
	goto loc_82386B74;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82384ba8
	ctx.lr = 0x82386AA8;
	sub_82384BA8(ctx, base);
	// b 0x82386b74
	goto loc_82386B74;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82384ca8
	ctx.lr = 0x82386AB8;
	sub_82384CA8(ctx, base);
	// b 0x82386b74
	goto loc_82386B74;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82386698
	ctx.lr = 0x82386AC8;
	sub_82386698(ctx, base);
	// b 0x82386b74
	goto loc_82386B74;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82384da8
	ctx.lr = 0x82386AD8;
	sub_82384DA8(ctx, base);
	// b 0x82386b74
	goto loc_82386B74;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82384eb0
	ctx.lr = 0x82386AE8;
	sub_82384EB0(ctx, base);
	// b 0x82386b74
	goto loc_82386B74;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// divwu. r28,r11,r10
	ctx.r28.u32 = ctx.r11.u32 / ctx.r10.u32;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82386b74
	if (ctx.cr0.eq) goto loc_82386B74;
	// addi r27,r28,-1
	ctx.r27.s64 = ctx.r28.s64 + -1;
loc_82386B08:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82386b18
	if (!ctx.cr6.eq) goto loc_82386B18;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82386B18:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82385098
	ctx.lr = 0x82386B28;
	sub_82385098(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82386b08
	if (ctx.cr6.lt) goto loc_82386B08;
	// b 0x82386b74
	goto loc_82386B74;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82385228
	ctx.lr = 0x82386B44;
	sub_82385228(ctx, base);
	// b 0x82386b74
	goto loc_82386B74;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823852e0
	ctx.lr = 0x82386B54;
	sub_823852E0(ctx, base);
	// b 0x82386b74
	goto loc_82386B74;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823848b0
	ctx.lr = 0x82386B64;
	sub_823848B0(ctx, base);
	// b 0x82386b74
	goto loc_82386B74;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82384ff0
	ctx.lr = 0x82386B74;
	sub_82384FF0(ctx, base);
loc_82386B74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82386B7C"))) PPC_WEAK_FUNC(sub_82386B7C);
PPC_FUNC_IMPL(__imp__sub_82386B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82386B80"))) PPC_WEAK_FUNC(sub_82386B80);
PPC_FUNC_IMPL(__imp__sub_82386B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82381898
	ctx.lr = 0x82386B9C;
	sub_82381898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82386BA4;
	sub_82381DD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82386a30
	ctx.lr = 0x82386BD4;
	sub_82386A30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,83(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82386BEC;
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

__attribute__((alias("__imp__sub_82386C04"))) PPC_WEAK_FUNC(sub_82386C04);
PPC_FUNC_IMPL(__imp__sub_82386C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82386C08"))) PPC_WEAK_FUNC(sub_82386C08);
PPC_FUNC_IMPL(__imp__sub_82386C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82386C10;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82386d7c
	if (!ctx.cr6.gt) goto loc_82386D7C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82386C38:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82386c84
	if (!ctx.cr6.lt) goto loc_82386C84;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,464(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82386c84
	if (!ctx.cr6.eq) goto loc_82386C84;
	// lwz r9,364(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82386c84
	if (!ctx.cr6.eq) goto loc_82386C84;
	// lwz r4,2484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2484);
	// lwz r10,508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82386c80
	if (ctx.cr6.eq) goto loc_82386C80;
	// stw r4,508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 508, ctx.r4.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82389a30
	ctx.lr = 0x82386C80;
	sub_82389A30(ctx, base);
loc_82386C80:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82386C84:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82386c38
	if (ctx.cr6.lt) goto loc_82386C38;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82386d7c
	if (ctx.cr6.eq) goto loc_82386D7C;
	// lwz r11,4976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4976);
	// stw r28,2528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2528, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82386cdc
	if (ctx.cr6.eq) goto loc_82386CDC;
	// bl 0x82381dd0
	ctx.lr = 0x82386CB4;
	sub_82381DD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,13
	ctx.r10.s64 = 13;
	// stb r28,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r28.u8);
	// stb r27,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r27.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x82383290
	ctx.lr = 0x82386CDC;
	sub_82383290(ctx, base);
loc_82386CDC:
	// lwz r11,2660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2660);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82386d7c
	if (ctx.cr6.eq) goto loc_82386D7C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82386d7c
	if (!ctx.cr6.gt) goto loc_82386D7C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82386CFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82386d68
	if (ctx.cr6.eq) goto loc_82386D68;
	// bl 0x82381dd0
	ctx.lr = 0x82386D14;
	sub_82381DD0(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r27.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82386a30
	ctx.lr = 0x82386D3C;
	sub_82386A30(ctx, base);
	// bl 0x82381dd0
	ctx.lr = 0x82386D40;
	sub_82381DD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r27.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82386a30
	ctx.lr = 0x82386D68;
	sub_82386A30(ctx, base);
loc_82386D68:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82386cfc
	if (ctx.cr6.lt) goto loc_82386CFC;
loc_82386D7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82386D84"))) PPC_WEAK_FUNC(sub_82386D84);
PPC_FUNC_IMPL(__imp__sub_82386D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82386D88"))) PPC_WEAK_FUNC(sub_82386D88);
PPC_FUNC_IMPL(__imp__sub_82386D88) {
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
	// bl 0x82384258
	ctx.lr = 0x82386DA0;
	sub_82384258(ctx, base);
	// bl 0x82381dd0
	ctx.lr = 0x82386DA4;
	sub_82381DD0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82386de4
	if (!ctx.cr6.gt) goto loc_82386DE4;
	// bl 0x82381dd0
	ctx.lr = 0x82386DB4;
	sub_82381DD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82386a30
	ctx.lr = 0x82386DE4;
	sub_82386A30(ctx, base);
loc_82386DE4:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82386E00"))) PPC_WEAK_FUNC(sub_82386E00);
PPC_FUNC_IMPL(__imp__sub_82386E00) {
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
	// bl 0x82381dd0
	ctx.lr = 0x82386E18;
	sub_82381DD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82386a30
	ctx.lr = 0x82386E48;
	sub_82386A30(ctx, base);
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

__attribute__((alias("__imp__sub_82386E5C"))) PPC_WEAK_FUNC(sub_82386E5C);
PPC_FUNC_IMPL(__imp__sub_82386E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82386E60"))) PPC_WEAK_FUNC(sub_82386E60);
PPC_FUNC_IMPL(__imp__sub_82386E60) {
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
	// bl 0x82381dd0
	ctx.lr = 0x82386E78;
	sub_82381DD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82386a30
	ctx.lr = 0x82386EA8;
	sub_82386A30(ctx, base);
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

__attribute__((alias("__imp__sub_82386EBC"))) PPC_WEAK_FUNC(sub_82386EBC);
PPC_FUNC_IMPL(__imp__sub_82386EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82386EC0"))) PPC_WEAK_FUNC(sub_82386EC0);
PPC_FUNC_IMPL(__imp__sub_82386EC0) {
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
	// bl 0x82381dd0
	ctx.lr = 0x82386ED8;
	sub_82381DD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82386a30
	ctx.lr = 0x82386F08;
	sub_82386A30(ctx, base);
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

__attribute__((alias("__imp__sub_82386F1C"))) PPC_WEAK_FUNC(sub_82386F1C);
PPC_FUNC_IMPL(__imp__sub_82386F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82386F20"))) PPC_WEAK_FUNC(sub_82386F20);
PPC_FUNC_IMPL(__imp__sub_82386F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82386F28;
	sub_82248780(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82386F34;
	sub_82381DD0(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82387108
	if (!ctx.cr6.eq) goto loc_82387108;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82387108
	if (!ctx.cr6.gt) goto loc_82387108;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82386F60:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82386fb4
	if (!ctx.cr6.eq) goto loc_82386FB4;
	// lwz r11,500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82386fb4
	if (ctx.cr6.eq) goto loc_82386FB4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823a7908
	ctx.lr = 0x82386F88;
	sub_823A7908(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82370088
	ctx.lr = 0x82386F90;
	sub_82370088(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82386fcc
	if (!ctx.cr6.eq) goto loc_82386FCC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823700d8
	ctx.lr = 0x82386FAC;
	sub_823700D8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823a78a0
	ctx.lr = 0x82386FB4;
	sub_823A78A0(ctx, base);
loc_82386FB4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82386f60
	if (ctx.cr6.lt) goto loc_82386F60;
	// b 0x82387108
	goto loc_82387108;
loc_82386FCC:
	// lwz r11,4980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823870f8
	if (ctx.cr6.eq) goto loc_823870F8;
	// blt cr6,0x823870f8
	if (ctx.cr6.lt) goto loc_823870F8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82382420
	ctx.lr = 0x82386FE4;
	sub_82382420(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823870f8
	if (ctx.cr6.eq) goto loc_823870F8;
	// lwz r11,2532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82387034
	if (ctx.cr6.eq) goto loc_82387034;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82387034
	if (ctx.cr6.lt) goto loc_82387034;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r28,580
	ctx.r11.s64 = ctx.r28.s64 * 580;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 504, ctx.r26.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823870f8
	goto loc_823870F8;
loc_82387034:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r28,r28,580
	ctx.r28.s64 = ctx.r28.s64 * 580;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,416
	ctx.r4.s64 = ctx.r11.s64 + 416;
	// bl 0x82370360
	ctx.lr = 0x8238704C;
	sub_82370360(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82370360
	ctx.lr = 0x82387058;
	sub_82370360(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r30,r31,2488
	ctx.r30.s64 = ctx.r31.s64 + 2488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r29.u32);
	// stw r10,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r10.u32);
	// bl 0x823a86f8
	ctx.lr = 0x82387080;
	sub_823A86F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x82387088;
	sub_8237D130(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82381f40
	ctx.lr = 0x82387094;
	sub_82381F40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x823870b0
	if (ctx.cr6.eq) goto loc_823870B0;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82382300
	ctx.lr = 0x823870AC;
	sub_82382300(ctx, base);
	// b 0x823870b8
	goto loc_823870B8;
loc_823870B0:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x823825e0
	ctx.lr = 0x823870B8;
	sub_823825E0(ctx, base);
loc_823870B8:
	// bl 0x82381dd0
	ctx.lr = 0x823870BC;
	sub_82381DD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r26,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r26.u8);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82386a30
	ctx.lr = 0x823870E4;
	sub_82386A30(ctx, base);
	// lwz r11,4980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4980);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4980, ctx.r11.u32);
	// bge 0x823870f8
	if (!ctx.cr0.lt) goto loc_823870F8;
	// stw r26,4980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4980, ctx.r26.u32);
loc_823870F8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823700d8
	ctx.lr = 0x82387100;
	sub_823700D8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823a78a0
	ctx.lr = 0x82387108;
	sub_823A78A0(ctx, base);
loc_82387108:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82387110"))) PPC_WEAK_FUNC(sub_82387110);
PPC_FUNC_IMPL(__imp__sub_82387110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82387118;
	sub_8224878C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,1156(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 1156);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82387134
	if (ctx.cr0.eq) goto loc_82387134;
	// addi r31,r6,4
	ctx.r31.s64 = ctx.r6.s64 + 4;
loc_82387134:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// bl 0x82370088
	ctx.lr = 0x82387140;
	sub_82370088(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,2504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2504, ctx.r11.u32);
	// bl 0x82385f20
	ctx.lr = 0x82387154;
	sub_82385F20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82386e00
	ctx.lr = 0x8238715C;
	sub_82386E00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823700d8
	ctx.lr = 0x82387164;
	sub_823700D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238716C"))) PPC_WEAK_FUNC(sub_8238716C);
PPC_FUNC_IMPL(__imp__sub_8238716C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82387170"))) PPC_WEAK_FUNC(sub_82387170);
PPC_FUNC_IMPL(__imp__sub_82387170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82387178;
	sub_82248780(ctx, base);
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82387188;
	sub_82381DD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82370088
	ctx.lr = 0x82387194;
	sub_82370088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a7908
	ctx.lr = 0x8238719C;
	sub_823A7908(ctx, base);
	// lhz r11,1156(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 1156);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823871b0
	if (ctx.cr0.eq) goto loc_823871B0;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
loc_823871B0:
	// addi r28,r31,2488
	ctx.r28.s64 = ctx.r31.s64 + 2488;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r26,r29,4
	ctx.r26.s64 = ctx.r29.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a86f8
	ctx.lr = 0x823871C4;
	sub_823A86F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237d130
	ctx.lr = 0x823871CC;
	sub_8237D130(ctx, base);
	// addi r4,r26,8
	ctx.r4.s64 = ctx.r26.s64 + 8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82370360
	ctx.lr = 0x823871D8;
	sub_82370360(ctx, base);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82370360
	ctx.lr = 0x823871E8;
	sub_82370360(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82381f40
	ctx.lr = 0x823871F4;
	sub_82381F40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x82387210
	if (ctx.cr6.eq) goto loc_82387210;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82382300
	ctx.lr = 0x8238720C;
	sub_82382300(ctx, base);
	// b 0x82387218
	goto loc_82387218;
loc_82387210:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823825e0
	ctx.lr = 0x82387218;
	sub_823825E0(ctx, base);
loc_82387218:
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// stb r11,5036(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5036, ctx.r11.u8);
	// bl 0x82381dd0
	ctx.lr = 0x82387224;
	sub_82381DD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82386a30
	ctx.lr = 0x82387254;
	sub_82386A30(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823872a0
	if (!ctx.cr6.eq) goto loc_823872A0;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82370088
	ctx.lr = 0x82387268;
	sub_82370088(ctx, base);
	// lwz r11,1316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// beq cr6,0x8238728c
	if (ctx.cr6.eq) goto loc_8238728C;
	// addi r4,r31,164
	ctx.r4.s64 = ctx.r31.s64 + 164;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82358508
	ctx.lr = 0x8238728C;
	sub_82358508(ctx, base);
loc_8238728C:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82385f20
	ctx.lr = 0x82387298;
	sub_82385F20(ctx, base);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x823700d8
	ctx.lr = 0x823872A0;
	sub_823700D8(ctx, base);
loc_823872A0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a78a0
	ctx.lr = 0x823872A8;
	sub_823A78A0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823700d8
	ctx.lr = 0x823872B0;
	sub_823700D8(ctx, base);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823872B8"))) PPC_WEAK_FUNC(sub_823872B8);
PPC_FUNC_IMPL(__imp__sub_823872B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x823872C0;
	sub_82248770(ctx, base);
	// stwu r1,-2624(r1)
	ea = -2624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x82381898
	ctx.lr = 0x823872D0;
	sub_82381898(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x823872D8;
	sub_82381DD0(ctx, base);
	// lwz r11,2480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2480);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x82387744
	if (ctx.cr6.eq) goto loc_82387744;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82387744
	if (ctx.cr6.eq) goto loc_82387744;
	// lwz r22,12(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82387744
	if (ctx.cr6.eq) goto loc_82387744;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82387304:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r30,r26,r11
	ctx.r30.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82387324
	if (ctx.cr6.eq) goto loc_82387324;
loc_82387318:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,580
	ctx.r26.s64 = ctx.r26.s64 + 580;
	// b 0x8238773c
	goto loc_8238773C;
loc_82387324:
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82387318
	if (!ctx.cr6.eq) goto loc_82387318;
	// lwz r11,576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82387318
	if (!ctx.cr6.eq) goto loc_82387318;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82385e90
	ctx.lr = 0x82387350;
	sub_82385E90(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8237ea18
	ctx.lr = 0x82387358;
	sub_8237EA18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x82387364;
	sub_823585A0(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a7d30
	ctx.lr = 0x82387374;
	sub_823A7D30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82387388
	if (!ctx.cr0.eq) goto loc_82387388;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,580
	ctx.r26.s64 = ctx.r26.s64 + 580;
	// b 0x82387734
	goto loc_82387734;
loc_82387388:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823873bc
	if (!ctx.cr0.eq) goto loc_823873BC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r3,r11,516
	ctx.r3.s64 = ctx.r11.s64 + 516;
	// bl 0x82383c10
	ctx.lr = 0x823873A8;
	sub_82383C10(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82385e90
	ctx.lr = 0x823873B8;
	sub_82385E90(ctx, base);
	// b 0x82387734
	goto loc_82387734;
loc_823873BC:
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x82387734
	if (ctx.cr6.gt) goto loc_82387734;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,32720
	ctx.r12.s64 = ctx.r12.s64 + 32720;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// nop 
	// addi r12,r12,29684
	ctx.r12.s64 = ctx.r12.s64 + 29684;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82387734
	if (!ctx.cr6.eq) goto loc_82387734;
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x823831d0
	ctx.lr = 0x82387418;
	sub_823831D0(ctx, base);
	// b 0x82387734
	goto loc_82387734;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82387734
	if (!ctx.cr6.eq) goto loc_82387734;
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8238745c
	if (ctx.cr6.eq) goto loc_8238745C;
	// lhz r11,1364(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1364);
	// addi r10,r1,212
	ctx.r10.s64 = ctx.r1.s64 + 212;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8238745c
	if (ctx.cr6.eq) goto loc_8238745C;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8238745C:
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82387110
	ctx.lr = 0x82387470;
	sub_82387110(ctx, base);
	// b 0x82387734
	goto loc_82387734;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82387734
	if (!ctx.cr6.eq) goto loc_82387734;
	// lhz r11,1364(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1364);
	// addi r10,r1,212
	ctx.r10.s64 = ctx.r1.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82385f20
	ctx.lr = 0x823874A0;
	sub_82385F20(ctx, base);
	// b 0x82387734
	goto loc_82387734;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82387734
	if (!ctx.cr6.eq) goto loc_82387734;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82382830
	ctx.lr = 0x823874C0;
	sub_82382830(ctx, base);
	// b 0x82387734
	goto loc_82387734;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82387734
	if (!ctx.cr6.eq) goto loc_82387734;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823828e0
	ctx.lr = 0x823874E0;
	sub_823828E0(ctx, base);
	// b 0x82387734
	goto loc_82387734;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82387734
	if (!ctx.cr6.eq) goto loc_82387734;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82387170
	ctx.lr = 0x82387500;
	sub_82387170(ctx, base);
	// b 0x82387734
	goto loc_82387734;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82387734
	if (!ctx.cr6.eq) goto loc_82387734;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82384860
	ctx.lr = 0x82387520;
	sub_82384860(ctx, base);
	// b 0x82387734
	goto loc_82387734;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82387734
	if (!ctx.cr6.eq) goto loc_82387734;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82382970
	ctx.lr = 0x82387540;
	sub_82382970(ctx, base);
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82387734
	goto loc_82387734;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82387734
	if (!ctx.cr6.eq) goto loc_82387734;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r7,1152
	ctx.r7.s64 = 1152;
	// addi r6,r31,3816
	ctx.r6.s64 = ctx.r31.s64 + 3816;
	// addi r5,r31,2664
	ctx.r5.s64 = ctx.r31.s64 + 2664;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
	// b 0x82387734
	goto loc_82387734;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82387734
	if (!ctx.cr6.eq) goto loc_82387734;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82382a70
	ctx.lr = 0x823875A0;
	sub_82382A70(ctx, base);
	// b 0x82387734
	goto loc_82387734;
	// lhz r11,1364(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1364);
	// addi r10,r1,212
	ctx.r10.s64 = ctx.r1.s64 + 212;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82381f40
	ctx.lr = 0x823875D0;
	sub_82381F40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82387734
	if (ctx.cr6.eq) goto loc_82387734;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82382498
	ctx.lr = 0x823875E4;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82387608
	if (ctx.cr0.eq) goto loc_82387608;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82387608:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// bl 0x82224948
	ctx.lr = 0x82387614;
	sub_82224948(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823822a8
	ctx.lr = 0x82387620;
	sub_823822A8(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82387734
	if (!ctx.cr6.gt) goto loc_82387734;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82387634:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82387684
	if (!ctx.cr6.lt) goto loc_82387684;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82387684
	if (!ctx.cr6.eq) goto loc_82387684;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82387684:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82387634
	if (ctx.cr6.lt) goto loc_82387634;
	// b 0x82387734
	goto loc_82387734;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82382648
	ctx.lr = 0x823876B0;
	sub_82382648(ctx, base);
	// b 0x82387734
	goto loc_82387734;
	// lwz r11,512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82387734
	if (!ctx.cr6.eq) goto loc_82387734;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82370088
	ctx.lr = 0x823876C8;
	sub_82370088(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823a7908
	ctx.lr = 0x823876D0;
	sub_823A7908(ctx, base);
	// lhz r11,1364(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1364);
	// addi r10,r1,212
	ctx.r10.s64 = ctx.r1.s64 + 212;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addi r3,r30,416
	ctx.r3.s64 = ctx.r30.s64 + 416;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82370360
	ctx.lr = 0x823876F4;
	sub_82370360(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 512, ctx.r11.u32);
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82387724
	if (!ctx.cr6.eq) goto loc_82387724;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82387724
	if (!ctx.cr6.eq) goto loc_82387724;
	// lwz r11,4980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4980);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4980, ctx.r11.u32);
loc_82387724:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823a78a0
	ctx.lr = 0x8238772C;
	sub_823A78A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823700d8
	ctx.lr = 0x82387734;
	sub_823700D8(ctx, base);
loc_82387734:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8237e850
	ctx.lr = 0x8238773C;
	sub_8237E850(ctx, base);
loc_8238773C:
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82387304
	if (ctx.cr6.lt) goto loc_82387304;
loc_82387744:
	// addi r1,r1,2624
	ctx.r1.s64 = ctx.r1.s64 + 2624;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8238774C"))) PPC_WEAK_FUNC(sub_8238774C);
PPC_FUNC_IMPL(__imp__sub_8238774C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82387750"))) PPC_WEAK_FUNC(sub_82387750);
PPC_FUNC_IMPL(__imp__sub_82387750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248764
	ctx.lr = 0x82387758;
	sub_82248764(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
	// bl 0x82381898
	ctx.lr = 0x8238776C;
	sub_82381898(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82381dd0
	ctx.lr = 0x82387774;
	sub_82381DD0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r21,11
	ctx.r21.s64 = 11;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82387a24
	if (!ctx.cr6.gt) goto loc_82387A24;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82387798:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82387a10
	if (!ctx.cr6.lt) goto loc_82387A10;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x8235b1f8
	ctx.lr = 0x823877B8;
	sub_8235B1F8(ctx, base);
	// bl 0x8235b8e8
	ctx.lr = 0x823877BC;
	sub_8235B8E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82387878
	if (ctx.cr6.eq) goto loc_82387878;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x82387878
	if (ctx.cr6.eq) goto loc_82387878;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823877f4
	if (!ctx.cr6.eq) goto loc_823877F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823877F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823877F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82387a10
	if (ctx.cr6.eq) goto loc_82387A10;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82382498
	ctx.lr = 0x82387814;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82387a10
	if (ctx.cr0.eq) goto loc_82387A10;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// bl 0x82224948
	ctx.lr = 0x82387844;
	sub_82224948(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r27,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// b 0x82387a04
	goto loc_82387A04;
loc_82387878:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,2480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2480);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// lwz r28,504(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// beq cr6,0x82387a10
	if (ctx.cr6.eq) goto loc_82387A10;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82387a10
	if (ctx.cr6.eq) goto loc_82387A10;
	// lwz r11,2524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82387a10
	if (!ctx.cr6.eq) goto loc_82387A10;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82382498
	ctx.lr = 0x823878C8;
	sub_82382498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82387958
	if (ctx.cr0.eq) goto loc_82387958;
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 5, ctx.xer);
	// beq cr6,0x82387904
	if (ctx.cr6.eq) goto loc_82387904;
	// bl 0x82381dd0
	ctx.lr = 0x823878DC;
	sub_82381DD0(ctx, base);
	// stb r20,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r20.u8);
	// stb r21,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r21.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r27,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r27.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82384970
	ctx.lr = 0x82387900;
	sub_82384970(ctx, base);
	// b 0x82387920
	goto loc_82387920;
loc_82387904:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,28(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// bl 0x82381f40
	ctx.lr = 0x82387910;
	sub_82381F40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82387a10
	if (ctx.cr6.eq) goto loc_82387A10;
	// lwz r29,28(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
loc_82387920:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238793C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// bl 0x82224948
	ctx.lr = 0x82387948;
	sub_82224948(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r27,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r27.u32);
	// b 0x82387a04
	goto loc_82387A04;
loc_82387958:
	// lwz r11,2512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82387990
	if (!ctx.cr6.eq) goto loc_82387990;
	// lwz r11,2528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82387a10
	if (!ctx.cr6.eq) goto loc_82387A10;
	// stw r27,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r27.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238798C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,2524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2524, ctx.r20.u32);
loc_82387990:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823879AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r27,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823879D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// bl 0x82381f40
	ctx.lr = 0x823879E8;
	sub_82381F40(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82387a10
	if (ctx.cr6.eq) goto loc_82387A10;
	// lwz r11,2504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82387a04
	if (!ctx.cr6.eq) goto loc_82387A04;
	// stw r24,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r24.u32);
	// stw r27,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r27.u32);
loc_82387A04:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823822a8
	ctx.lr = 0x82387A10;
	sub_823822A8(ctx, base);
loc_82387A10:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82387798
	if (ctx.cr6.lt) goto loc_82387798;
loc_82387A24:
	// bl 0x8235b1f8
	ctx.lr = 0x82387A28;
	sub_8235B1F8(ctx, base);
	// bl 0x8235b8e8
	ctx.lr = 0x82387A2C;
	sub_8235B8E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82387a40
	if (ctx.cr6.eq) goto loc_82387A40;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82387af8
	if (!ctx.cr6.eq) goto loc_82387AF8;
loc_82387A40:
	// lwz r11,2544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2544);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82387af8
	if (!ctx.cr6.gt) goto loc_82387AF8;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82387A54:
	// lwz r11,2540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2540);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r29,r11,r26
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// ble cr6,0x82387acc
	if (!ctx.cr6.gt) goto loc_82387ACC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82387A70:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82387ab8
	if (!ctx.cr6.lt) goto loc_82387AB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82387ab8
	if (!ctx.cr6.eq) goto loc_82387AB8;
	// stw r27,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
loc_82387AB8:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82387a70
	if (ctx.cr6.lt) goto loc_82387A70;
loc_82387ACC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823837a0
	ctx.lr = 0x82387AD8;
	sub_823837A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82385f68
	ctx.lr = 0x82387AE4;
	sub_82385F68(ctx, base);
	// lwz r11,2544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2544);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82387a54
	if (ctx.cr6.lt) goto loc_82387A54;
loc_82387AF8:
	// lwz r11,2480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2480);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x82387c68
	if (ctx.cr6.eq) goto loc_82387C68;
	// addi r28,r31,2488
	ctx.r28.s64 = ctx.r31.s64 + 2488;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237d218
	ctx.lr = 0x82387B10;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,32652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32652);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82387b30
	if (ctx.cr6.gt) goto loc_82387B30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82383188
	ctx.lr = 0x82387B28;
	sub_82383188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82387c68
	if (ctx.cr0.eq) goto loc_82387C68;
loc_82387B30:
	// lwz r11,2504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82387c1c
	if (ctx.cr6.eq) goto loc_82387C1C;
	// lwz r11,2512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82387bfc
	if (ctx.cr6.eq) goto loc_82387BFC;
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// lwz r10,28(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82387b84
	if (!ctx.cr6.eq) goto loc_82387B84;
	// bl 0x82381dd0
	ctx.lr = 0x82387B5C;
	sub_82381DD0(ctx, base);
	// stb r27,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r27.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r20,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r20.u8);
	// stb r21,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r21.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,2504(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x82384970
	ctx.lr = 0x82387B84;
	sub_82384970(ctx, base);
loc_82387B84:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82387c00
	if (!ctx.cr6.gt) goto loc_82387C00;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82387B98:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82387be4
	if (!ctx.cr6.lt) goto loc_82387BE4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,2504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82387be4
	if (!ctx.cr6.eq) goto loc_82387BE4;
	// stw r27,504(r11)
	PPC_STORE_U32(ctx.r11.u32 + 504, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
loc_82387BE4:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,580
	ctx.r30.s64 = ctx.r30.s64 + 580;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82387b98
	if (ctx.cr6.lt) goto loc_82387B98;
	// b 0x82387c00
	goto loc_82387C00;
loc_82387BFC:
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
loc_82387C00:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,2504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// bl 0x823822a8
	ctx.lr = 0x82387C0C;
	sub_823822A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2504);
	// bl 0x82385f68
	ctx.lr = 0x82387C18;
	sub_82385F68(ctx, base);
	// stw r24,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r24.u32);
loc_82387C1C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237d170
	ctx.lr = 0x82387C24;
	sub_8237D170(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82387C2C;
	sub_823A86F8(ctx, base);
	// lwz r11,2512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2512);
	// stw r27,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82387c68
	if (!ctx.cr6.eq) goto loc_82387C68;
	// lwz r11,2524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82387c68
	if (!ctx.cr6.eq) goto loc_82387C68;
	// stw r27,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r27.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,2524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2524, ctx.r20.u32);
loc_82387C68:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823872b8
	ctx.lr = 0x82387C74;
	sub_823872B8(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x82387c88
	if (ctx.cr6.eq) goto loc_82387C88;
	// lwz r11,2480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2480);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x82387ebc
	if (!ctx.cr6.eq) goto loc_82387EBC;
loc_82387C88:
	// lwz r11,2480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2480);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x82387ebc
	if (ctx.cr6.gt) goto loc_82387EBC;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,32744
	ctx.r12.s64 = ctx.r12.s64 + 32744;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// nop 
	// addi r12,r12,31932
	ctx.r12.s64 = ctx.r12.s64 + 31932;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82387ebc
	if (!ctx.cr6.gt) goto loc_82387EBC;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82387CD4:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r7,464(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 464);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82387cf0
	if (ctx.cr6.eq) goto loc_82387CF0;
	// lwz r10,364(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 364);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82387d08
	if (ctx.cr6.eq) goto loc_82387D08;
loc_82387CF0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 + 580;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82387cd4
	if (ctx.cr6.lt) goto loc_82387CD4;
	// b 0x82387ebc
	goto loc_82387EBC;
loc_82387D08:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82387eb8
	goto loc_82387EB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82386c08
	ctx.lr = 0x82387D18;
	sub_82386C08(ctx, base);
	// b 0x82387ebc
	goto loc_82387EBC;
	// bl 0x82381dd0
	ctx.lr = 0x82387D20;
	sub_82381DD0(ctx, base);
	// stb r20,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r20.u8);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r27,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r27.u8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// b 0x82387dcc
	goto loc_82387DCC;
	// bl 0x82381dd0
	ctx.lr = 0x82387D48;
	sub_82381DD0(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r20,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r20.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r10,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r10.u8);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stb r27,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r27.u8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// b 0x82387dcc
	goto loc_82387DCC;
	// addi r3,r31,5016
	ctx.r3.s64 = ctx.r31.s64 + 5016;
	// bl 0x82224400
	ctx.lr = 0x82387D74;
	sub_82224400(ctx, base);
	// bl 0x82381dd0
	ctx.lr = 0x82387D78;
	sub_82381DD0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r20,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r20.u8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r27,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r27.u8);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stb r11,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// b 0x82387dcc
	goto loc_82387DCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82384488
	ctx.lr = 0x82387DA4;
	sub_82384488(ctx, base);
	// b 0x82387ebc
	goto loc_82387EBC;
	// bl 0x82381dd0
	ctx.lr = 0x82387DAC;
	sub_82381DD0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r27,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r27.u8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stb r20,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r20.u8);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
loc_82387DCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82386a30
	ctx.lr = 0x82387DD4;
	sub_82386A30(ctx, base);
	// b 0x82387ebc
	goto loc_82387EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82385d08
	ctx.lr = 0x82387DE0;
	sub_82385D08(ctx, base);
	// b 0x82387ebc
	goto loc_82387EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82384388
	ctx.lr = 0x82387DEC;
	sub_82384388(ctx, base);
	// b 0x82387ebc
	goto loc_82387EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82386d88
	ctx.lr = 0x82387DF8;
	sub_82386D88(ctx, base);
	// b 0x82387ebc
	goto loc_82387EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82384568
	ctx.lr = 0x82387E04;
	sub_82384568(ctx, base);
	// b 0x82387ebc
	goto loc_82387EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82386e60
	ctx.lr = 0x82387E10;
	sub_82386E60(ctx, base);
	// b 0x82387ebc
	goto loc_82387EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82386ec0
	ctx.lr = 0x82387E1C;
	sub_82386EC0(ctx, base);
	// b 0x82387ebc
	goto loc_82387EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823845f0
	ctx.lr = 0x82387E28;
	sub_823845F0(ctx, base);
	// b 0x82387ebc
	goto loc_82387EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82386f20
	ctx.lr = 0x82387E34;
	sub_82386F20(ctx, base);
	// b 0x82387ebc
	goto loc_82387EBC;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82387e98
	if (!ctx.cr6.gt) goto loc_82387E98;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
loc_82387E58:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82387e80
	if (!ctx.cr6.lt) goto loc_82387E80;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,364(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 364);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82387e80
	if (ctx.cr6.eq) goto loc_82387E80;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82387e80
	if (ctx.cr6.eq) goto loc_82387E80;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
loc_82387E80:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,580
	ctx.r11.s64 = ctx.r11.s64 + 580;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82387e58
	if (ctx.cr6.lt) goto loc_82387E58;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82387ebc
	if (!ctx.cr6.eq) goto loc_82387EBC;
loc_82387E98:
	// bl 0x82381898
	ctx.lr = 0x82387E9C;
	sub_82381898(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82387EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82381dd0
	ctx.lr = 0x82387EB0;
	sub_82381DD0(ctx, base);
	// bl 0x82381f28
	ctx.lr = 0x82387EB4;
	sub_82381F28(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
loc_82387EB8:
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
loc_82387EBC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487b4
	// ERROR 822487B4
	return;
}

__attribute__((alias("__imp__sub_82387EC4"))) PPC_WEAK_FUNC(sub_82387EC4);
PPC_FUNC_IMPL(__imp__sub_82387EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82387EC8"))) PPC_WEAK_FUNC(sub_82387EC8);
PPC_FUNC_IMPL(__imp__sub_82387EC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82387EE8"))) PPC_WEAK_FUNC(sub_82387EE8);
PPC_FUNC_IMPL(__imp__sub_82387EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -32768;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82387F30"))) PPC_WEAK_FUNC(sub_82387F30);
PPC_FUNC_IMPL(__imp__sub_82387F30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -32768;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82224400
	sub_82224400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82387F48"))) PPC_WEAK_FUNC(sub_82387F48);
PPC_FUNC_IMPL(__imp__sub_82387F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82224400
	ctx.lr = 0x82387F78;
	sub_82224400(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82387f88
	if (ctx.cr0.eq) goto loc_82387F88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x82387F88;
	sub_82357128(ctx, base);
loc_82387F88:
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

__attribute__((alias("__imp__sub_82387FA4"))) PPC_WEAK_FUNC(sub_82387FA4);
PPC_FUNC_IMPL(__imp__sub_82387FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82387FA8"))) PPC_WEAK_FUNC(sub_82387FA8);
PPC_FUNC_IMPL(__imp__sub_82387FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82387FB0;
	sub_8224878C(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823734c0
	ctx.lr = 0x82387FB8;
	sub_823734C0(ctx, base);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// lwz r8,84(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addic r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,144
	ctx.r9.s64 = 144;
	// subfe r11,r11,r8
	temp.u8 = (~ctx.r11.u32 + ctx.r8.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r10.u8);
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// stb r11,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r11.u8);
	// bl 0x822d6308
	ctx.lr = 0x82387FE8;
	sub_822D6308(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82387ffc
	if (ctx.cr0.eq) goto loc_82387FFC;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x822d6318
	ctx.lr = 0x82387FFC;
	sub_822D6318(ctx, base);
loc_82387FFC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,514
	ctx.r3.s64 = 514;
	// bl 0x82350c60
	ctx.lr = 0x82388008;
	sub_82350C60(ctx, base);
	// li r30,4
	ctx.r30.s64 = 4;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82388020
	if (ctx.cr0.eq) goto loc_82388020;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82350c70
	ctx.lr = 0x8238801C;
	sub_82350C70(ctx, base);
	// bl 0x822d6318
	ctx.lr = 0x82388020;
	sub_822D6318(ctx, base);
loc_82388020:
	// bl 0x823501b0
	ctx.lr = 0x82388024;
	sub_823501B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8238803c
	if (ctx.cr0.eq) goto loc_8238803C;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x822d6318
	ctx.lr = 0x82388034;
	sub_822D6318(ctx, base);
	// bl 0x82350c70
	ctx.lr = 0x82388038;
	sub_82350C70(ctx, base);
	// bl 0x822d6318
	ctx.lr = 0x8238803C;
	sub_822D6318(ctx, base);
loc_8238803C:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82388048"))) PPC_WEAK_FUNC(sub_82388048);
PPC_FUNC_IMPL(__imp__sub_82388048) {
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
	// bl 0x823734c0
	ctx.lr = 0x82388058;
	sub_823734C0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388070"))) PPC_WEAK_FUNC(sub_82388070);
PPC_FUNC_IMPL(__imp__sub_82388070) {
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
	// bl 0x823734c0
	ctx.lr = 0x82388080;
	sub_823734C0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388098"))) PPC_WEAK_FUNC(sub_82388098);
PPC_FUNC_IMPL(__imp__sub_82388098) {
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
	// bl 0x823734c0
	ctx.lr = 0x823880A8;
	sub_823734C0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x823734c0
	ctx.lr = 0x823880B4;
	sub_823734C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823880CC"))) PPC_WEAK_FUNC(sub_823880CC);
PPC_FUNC_IMPL(__imp__sub_823880CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823880D0"))) PPC_WEAK_FUNC(sub_823880D0);
PPC_FUNC_IMPL(__imp__sub_823880D0) {
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
	// bl 0x823734c0
	ctx.lr = 0x823880E4;
	sub_823734C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823501c0
	ctx.lr = 0x823880EC;
	sub_823501C0(ctx, base);
	// bl 0x822d6318
	ctx.lr = 0x823880F0;
	sub_822D6318(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
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

__attribute__((alias("__imp__sub_8238810C"))) PPC_WEAK_FUNC(sub_8238810C);
PPC_FUNC_IMPL(__imp__sub_8238810C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388110"))) PPC_WEAK_FUNC(sub_82388110);
PPC_FUNC_IMPL(__imp__sub_82388110) {
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
	// bl 0x823734c0
	ctx.lr = 0x82388124;
	sub_823734C0(ctx, base);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// bl 0x822d6420
	ctx.lr = 0x8238812C;
	sub_822D6420(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82388148
	if (!ctx.cr0.eq) goto loc_82388148;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82388148
	if (!ctx.cr6.eq) goto loc_82388148;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82388148:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8238815C"))) PPC_WEAK_FUNC(sub_8238815C);
PPC_FUNC_IMPL(__imp__sub_8238815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388160"))) PPC_WEAK_FUNC(sub_82388160);
PPC_FUNC_IMPL(__imp__sub_82388160) {
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
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// sth r11,104(r31)
	PPC_STORE_U16(ctx.r31.u32 + 104, ctx.r11.u16);
	// sth r11,106(r31)
	PPC_STORE_U16(ctx.r31.u32 + 106, ctx.r11.u16);
	// bl 0x823a86f8
	ctx.lr = 0x823881A8;
	sub_823A86F8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x823585a0
	ctx.lr = 0x823881B4;
	sub_823585A0(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823585a0
	ctx.lr = 0x823881C0;
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

__attribute__((alias("__imp__sub_823881D8"))) PPC_WEAK_FUNC(sub_823881D8);
PPC_FUNC_IMPL(__imp__sub_823881D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// b 0x823ab568
	sub_823AB568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823881E0"))) PPC_WEAK_FUNC(sub_823881E0);
PPC_FUNC_IMPL(__imp__sub_823881E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
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

__attribute__((alias("__imp__sub_823881FC"))) PPC_WEAK_FUNC(sub_823881FC);
PPC_FUNC_IMPL(__imp__sub_823881FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388200"))) PPC_WEAK_FUNC(sub_82388200);
PPC_FUNC_IMPL(__imp__sub_82388200) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// slw r11,r11,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// beq cr6,0x8238821c
	if (ctx.cr6.eq) goto loc_8238821C;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82388220
	goto loc_82388220;
loc_8238821C:
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
loc_82388220:
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388228"))) PPC_WEAK_FUNC(sub_82388228);
PPC_FUNC_IMPL(__imp__sub_82388228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r10,r4,29
	ctx.r10.u64 = ctx.r4.u32 & 0x7;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lbz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82388250"))) PPC_WEAK_FUNC(sub_82388250);
PPC_FUNC_IMPL(__imp__sub_82388250) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// clrlwi r10,r4,29
	ctx.r10.u64 = ctx.r4.u32 & 0x7;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lbz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// beq cr6,0x82388278
	if (ctx.cr6.eq) goto loc_82388278;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// b 0x8238827c
	goto loc_8238827C;
loc_82388278:
	// orc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ~ctx.r10.u64;
loc_8238827C:
	// stb r10,88(r11)
	PPC_STORE_U8(ctx.r11.u32 + 88, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388284"))) PPC_WEAK_FUNC(sub_82388284);
PPC_FUNC_IMPL(__imp__sub_82388284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388288"))) PPC_WEAK_FUNC(sub_82388288);
PPC_FUNC_IMPL(__imp__sub_82388288) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388294"))) PPC_WEAK_FUNC(sub_82388294);
PPC_FUNC_IMPL(__imp__sub_82388294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388298"))) PPC_WEAK_FUNC(sub_82388298);
PPC_FUNC_IMPL(__imp__sub_82388298) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823882A4"))) PPC_WEAK_FUNC(sub_823882A4);
PPC_FUNC_IMPL(__imp__sub_823882A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823882A8"))) PPC_WEAK_FUNC(sub_823882A8);
PPC_FUNC_IMPL(__imp__sub_823882A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823882bc
	if (ctx.cr6.eq) goto loc_823882BC;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x823882c0
	goto loc_823882C0;
loc_823882BC:
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_823882C0:
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823882C8"))) PPC_WEAK_FUNC(sub_823882C8);
PPC_FUNC_IMPL(__imp__sub_823882C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823882dc
	if (ctx.cr6.eq) goto loc_823882DC;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x823882e0
	goto loc_823882E0;
loc_823882DC:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_823882E0:
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823882E8"))) PPC_WEAK_FUNC(sub_823882E8);
PPC_FUNC_IMPL(__imp__sub_823882E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823882F4"))) PPC_WEAK_FUNC(sub_823882F4);
PPC_FUNC_IMPL(__imp__sub_823882F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823882F8"))) PPC_WEAK_FUNC(sub_823882F8);
PPC_FUNC_IMPL(__imp__sub_823882F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8238830c
	if (ctx.cr6.eq) goto loc_8238830C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82388310
	goto loc_82388310;
loc_8238830C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82388310:
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388318"))) PPC_WEAK_FUNC(sub_82388318);
PPC_FUNC_IMPL(__imp__sub_82388318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388324"))) PPC_WEAK_FUNC(sub_82388324);
PPC_FUNC_IMPL(__imp__sub_82388324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388328"))) PPC_WEAK_FUNC(sub_82388328);
PPC_FUNC_IMPL(__imp__sub_82388328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8238833c
	if (ctx.cr6.eq) goto loc_8238833C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x82388340
	goto loc_82388340;
loc_8238833C:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82388340:
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388348"))) PPC_WEAK_FUNC(sub_82388348);
PPC_FUNC_IMPL(__imp__sub_82388348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8238835c
	if (ctx.cr6.eq) goto loc_8238835C;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x82388360
	goto loc_82388360;
loc_8238835C:
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_82388360:
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388368"))) PPC_WEAK_FUNC(sub_82388368);
PPC_FUNC_IMPL(__imp__sub_82388368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388374"))) PPC_WEAK_FUNC(sub_82388374);
PPC_FUNC_IMPL(__imp__sub_82388374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388378"))) PPC_WEAK_FUNC(sub_82388378);
PPC_FUNC_IMPL(__imp__sub_82388378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8238838c
	if (ctx.cr6.eq) goto loc_8238838C;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// b 0x82388390
	goto loc_82388390;
loc_8238838C:
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_82388390:
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388398"))) PPC_WEAK_FUNC(sub_82388398);
PPC_FUNC_IMPL(__imp__sub_82388398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823883b0
	if (ctx.cr6.eq) goto loc_823883B0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_823883B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823883B8"))) PPC_WEAK_FUNC(sub_823883B8);
PPC_FUNC_IMPL(__imp__sub_823883B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823883cc
	if (ctx.cr0.eq) goto loc_823883CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823883CC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823883e0
	if (ctx.cr6.eq) goto loc_823883E0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x823883ec
	if (!ctx.cr6.eq) goto loc_823883EC;
loc_823883E0:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr 
	if (ctx.cr0.eq) return;
loc_823883EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823883F4"))) PPC_WEAK_FUNC(sub_823883F4);
PPC_FUNC_IMPL(__imp__sub_823883F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823883F8"))) PPC_WEAK_FUNC(sub_823883F8);
PPC_FUNC_IMPL(__imp__sub_823883F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82388418
	if (ctx.cr6.eq) goto loc_82388418;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82388418
	if (ctx.cr6.eq) goto loc_82388418;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82388418:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388420"))) PPC_WEAK_FUNC(sub_82388420);
PPC_FUNC_IMPL(__imp__sub_82388420) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// bl 0x823585a0
	ctx.lr = 0x82388440;
	sub_823585A0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_82388460"))) PPC_WEAK_FUNC(sub_82388460);
PPC_FUNC_IMPL(__imp__sub_82388460) {
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
	// addi r30,r3,108
	ctx.r30.s64 = ctx.r3.s64 + 108;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x82388484;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823884f4
	if (ctx.cr0.eq) goto loc_823884F4;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823884f4
	if (ctx.cr6.eq) goto loc_823884F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x823884ec
	if (ctx.cr6.lt) goto loc_823884EC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x823884b4
	if (!ctx.cr6.gt) goto loc_823884B4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x823884ec
	if (!ctx.cr6.eq) goto loc_823884EC;
loc_823884B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d218
	ctx.lr = 0x823884BC;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lfs f0,10412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823884f4
	if (ctx.cr6.lt) goto loc_823884F4;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x823884f4
	goto loc_823884F4;
loc_823884EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x823884F4;
	sub_8237D170(ctx, base);
loc_823884F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238850C"))) PPC_WEAK_FUNC(sub_8238850C);
PPC_FUNC_IMPL(__imp__sub_8238850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388510"))) PPC_WEAK_FUNC(sub_82388510);
PPC_FUNC_IMPL(__imp__sub_82388510) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-32756
	ctx.r10.s64 = ctx.r10.s64 + -32756;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388530"))) PPC_WEAK_FUNC(sub_82388530);
PPC_FUNC_IMPL(__imp__sub_82388530) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238854C"))) PPC_WEAK_FUNC(sub_8238854C);
PPC_FUNC_IMPL(__imp__sub_8238854C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388550"))) PPC_WEAK_FUNC(sub_82388550);
PPC_FUNC_IMPL(__imp__sub_82388550) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238855C"))) PPC_WEAK_FUNC(sub_8238855C);
PPC_FUNC_IMPL(__imp__sub_8238855C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388560"))) PPC_WEAK_FUNC(sub_82388560);
PPC_FUNC_IMPL(__imp__sub_82388560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82358508
	ctx.lr = 0x8238858C;
	sub_82358508(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823885B0"))) PPC_WEAK_FUNC(sub_823885B0);
PPC_FUNC_IMPL(__imp__sub_823885B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823885B8;
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82388660
	if (ctx.cr6.eq) goto loc_82388660;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82388660
	if (!ctx.cr6.lt) goto loc_82388660;
	// add r27,r4,r5
	ctx.r27.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82388608
	if (ctx.cr6.lt) goto loc_82388608;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82388674
	if (!ctx.cr6.gt) goto loc_82388674;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// subf r4,r4,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r4.s64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82388670
	goto loc_82388670;
loc_82388608:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82388674
	if (!ctx.cr6.gt) goto loc_82388674;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// subf r28,r29,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r29.s64;
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82358520
	ctx.lr = 0x8238862C;
	sub_82358520(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823585a0
	ctx.lr = 0x82388640;
	sub_823585A0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82388654
	if (ctx.cr6.gt) goto loc_82388654;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x82388674
	goto loc_82388674;
loc_82388654:
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82388674
	goto loc_82388674;
loc_82388660:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82388670:
	// bl 0x823585a0
	ctx.lr = 0x82388674;
	sub_823585A0(ctx, base);
loc_82388674:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238867C"))) PPC_WEAK_FUNC(sub_8238867C);
PPC_FUNC_IMPL(__imp__sub_8238867C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388680"))) PPC_WEAK_FUNC(sub_82388680);
PPC_FUNC_IMPL(__imp__sub_82388680) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-32736
	ctx.r10.s64 = ctx.r10.s64 + -32736;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823886A0"))) PPC_WEAK_FUNC(sub_823886A0);
PPC_FUNC_IMPL(__imp__sub_823886A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823886C0"))) PPC_WEAK_FUNC(sub_823886C0);
PPC_FUNC_IMPL(__imp__sub_823886C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82388720
	goto loc_82388720;
loc_823886CC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82388700
	if (!ctx.cr6.eq) goto loc_82388700;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// beq cr6,0x823886f0
	if (ctx.cr6.eq) goto loc_823886F0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823886f8
	if (ctx.cr6.eq) goto loc_823886F8;
	// b 0x82388700
	goto loc_82388700;
loc_823886F0:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82388700
	if (ctx.cr6.eq) goto loc_82388700;
loc_823886F8:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82388700:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// clrlwi. r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r10,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// bne 0x82388718
	if (!ctx.cr0.eq) goto loc_82388718;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82388718:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82388720:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x823886cc
	if (!ctx.cr6.eq) goto loc_823886CC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388730"))) PPC_WEAK_FUNC(sub_82388730);
PPC_FUNC_IMPL(__imp__sub_82388730) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-32716
	ctx.r10.s64 = ctx.r10.s64 + -32716;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388750"))) PPC_WEAK_FUNC(sub_82388750);
PPC_FUNC_IMPL(__imp__sub_82388750) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82388760
	if (!ctx.cr6.eq) goto loc_82388760;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
loc_82388760:
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// clrlwi. r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// bne 0x82388774
	if (!ctx.cr0.eq) goto loc_82388774;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82388774:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388784"))) PPC_WEAK_FUNC(sub_82388784);
PPC_FUNC_IMPL(__imp__sub_82388784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388788"))) PPC_WEAK_FUNC(sub_82388788);
PPC_FUNC_IMPL(__imp__sub_82388788) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823887a0
	if (ctx.cr6.eq) goto loc_823887A0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_823887A0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823887B0"))) PPC_WEAK_FUNC(sub_823887B0);
PPC_FUNC_IMPL(__imp__sub_823887B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-32696
	ctx.r10.s64 = ctx.r10.s64 + -32696;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823887D4"))) PPC_WEAK_FUNC(sub_823887D4);
PPC_FUNC_IMPL(__imp__sub_823887D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823887D8"))) PPC_WEAK_FUNC(sub_823887D8);
PPC_FUNC_IMPL(__imp__sub_823887D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-32756
	ctx.r11.s64 = ctx.r11.s64 + -32756;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823887E8"))) PPC_WEAK_FUNC(sub_823887E8);
PPC_FUNC_IMPL(__imp__sub_823887E8) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82388560
	ctx.lr = 0x82388804;
	sub_82388560(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_82388824"))) PPC_WEAK_FUNC(sub_82388824);
PPC_FUNC_IMPL(__imp__sub_82388824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388828"))) PPC_WEAK_FUNC(sub_82388828);
PPC_FUNC_IMPL(__imp__sub_82388828) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358508
	ctx.lr = 0x82388854;
	sub_82358508(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388868"))) PPC_WEAK_FUNC(sub_82388868);
PPC_FUNC_IMPL(__imp__sub_82388868) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-32676
	ctx.r10.s64 = ctx.r10.s64 + -32676;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388888"))) PPC_WEAK_FUNC(sub_82388888);
PPC_FUNC_IMPL(__imp__sub_82388888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388894"))) PPC_WEAK_FUNC(sub_82388894);
PPC_FUNC_IMPL(__imp__sub_82388894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388898"))) PPC_WEAK_FUNC(sub_82388898);
PPC_FUNC_IMPL(__imp__sub_82388898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823888A0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x823893f0
	ctx.lr = 0x823888C0;
	sub_823893F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x823893c8
	ctx.lr = 0x823888D8;
	sub_823893C8(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82358508
	ctx.lr = 0x823888F0;
	sub_82358508(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82388904"))) PPC_WEAK_FUNC(sub_82388904);
PPC_FUNC_IMPL(__imp__sub_82388904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388908"))) PPC_WEAK_FUNC(sub_82388908);
PPC_FUNC_IMPL(__imp__sub_82388908) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388928"))) PPC_WEAK_FUNC(sub_82388928);
PPC_FUNC_IMPL(__imp__sub_82388928) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388930"))) PPC_WEAK_FUNC(sub_82388930);
PPC_FUNC_IMPL(__imp__sub_82388930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82388944
	if (ctx.cr6.eq) goto loc_82388944;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82388944:
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r10,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// bne 0x82388964
	if (!ctx.cr0.eq) goto loc_82388964;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82388964:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388974"))) PPC_WEAK_FUNC(sub_82388974);
PPC_FUNC_IMPL(__imp__sub_82388974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388978"))) PPC_WEAK_FUNC(sub_82388978);
PPC_FUNC_IMPL(__imp__sub_82388978) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-32656
	ctx.r10.s64 = ctx.r10.s64 + -32656;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238899C"))) PPC_WEAK_FUNC(sub_8238899C);
PPC_FUNC_IMPL(__imp__sub_8238899C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823889A0"))) PPC_WEAK_FUNC(sub_823889A0);
PPC_FUNC_IMPL(__imp__sub_823889A0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823889C0"))) PPC_WEAK_FUNC(sub_823889C0);
PPC_FUNC_IMPL(__imp__sub_823889C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82388a40
	if (!ctx.cr6.lt) goto loc_82388A40;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82388a40
	if (ctx.cr6.eq) goto loc_82388A40;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r11,r4,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82388a1c
	if (ctx.cr6.eq) goto loc_82388A1C;
loc_823889FC:
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82388a38
	if (ctx.cr6.eq) goto loc_82388A38;
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823889fc
	if (ctx.cr6.lt) goto loc_823889FC;
loc_82388A1C:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r11,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// blr 
	return;
loc_82388A38:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82388A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388A48"))) PPC_WEAK_FUNC(sub_82388A48);
PPC_FUNC_IMPL(__imp__sub_82388A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82388a64
	if (ctx.cr6.eq) goto loc_82388A64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
loc_82388A64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388A6C"))) PPC_WEAK_FUNC(sub_82388A6C);
PPC_FUNC_IMPL(__imp__sub_82388A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388A70"))) PPC_WEAK_FUNC(sub_82388A70);
PPC_FUNC_IMPL(__imp__sub_82388A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82388a88
	if (ctx.cr6.eq) goto loc_82388A88;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_82388A88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388A90"))) PPC_WEAK_FUNC(sub_82388A90);
PPC_FUNC_IMPL(__imp__sub_82388A90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
loc_82388AA4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82388ac0
	if (!ctx.cr6.eq) goto loc_82388AC0;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82388AC0:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// clrlwi. r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// bne 0x82388ad8
	if (!ctx.cr0.eq) goto loc_82388AD8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82388AD8:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82388aa4
	if (!ctx.cr6.eq) goto loc_82388AA4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388AF0"))) PPC_WEAK_FUNC(sub_82388AF0);
PPC_FUNC_IMPL(__imp__sub_82388AF0) {
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
	// addi r11,r11,-32756
	ctx.r11.s64 = ctx.r11.s64 + -32756;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82388b1c
	if (ctx.cr0.eq) goto loc_82388B1C;
	// bl 0x82357128
	ctx.lr = 0x82388B1C;
	sub_82357128(ctx, base);
loc_82388B1C:
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

__attribute__((alias("__imp__sub_82388B34"))) PPC_WEAK_FUNC(sub_82388B34);
PPC_FUNC_IMPL(__imp__sub_82388B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388B38"))) PPC_WEAK_FUNC(sub_82388B38);
PPC_FUNC_IMPL(__imp__sub_82388B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82388B40;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r29,5(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lbz r11,5(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// stb r4,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r4.u8);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82388B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82358508
	ctx.lr = 0x82388B98;
	sub_82358508(ctx, base);
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,13
	ctx.r3.s64 = ctx.r31.s64 + 13;
	// bl 0x82358508
	ctx.lr = 0x82388BA8;
	sub_82358508(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r10.s64;
	// bne 0x82388bcc
	if (!ctx.cr0.eq) goto loc_82388BCC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82388BCC:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r10,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// bne 0x82388bf0
	if (!ctx.cr0.eq) goto loc_82388BF0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82388BF0:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82388C10"))) PPC_WEAK_FUNC(sub_82388C10);
PPC_FUNC_IMPL(__imp__sub_82388C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82388C18;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r29,5(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lbz r11,5(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// stb r4,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r4.u8);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbz r28,5(r5)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82388C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82358508
	ctx.lr = 0x82388C6C;
	sub_82358508(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r10.s64;
	// bne 0x82388c90
	if (!ctx.cr0.eq) goto loc_82388C90;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82388C90:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r10,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// bne 0x82388cb4
	if (!ctx.cr0.eq) goto loc_82388CB4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82388CB4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82388CD4"))) PPC_WEAK_FUNC(sub_82388CD4);
PPC_FUNC_IMPL(__imp__sub_82388CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388CD8"))) PPC_WEAK_FUNC(sub_82388CD8);
PPC_FUNC_IMPL(__imp__sub_82388CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82388CE0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r28,5(r5)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stb r4,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r4.u8);
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbz r26,5(r5)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82388D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82358508
	ctx.lr = 0x82388D3C;
	sub_82358508(ctx, base);
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82358508
	ctx.lr = 0x82388D50;
	sub_82358508(ctx, base);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r10.s64;
	// bne 0x82388d70
	if (!ctx.cr0.eq) goto loc_82388D70;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82388D70:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r10,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// bne 0x82388d94
	if (!ctx.cr0.eq) goto loc_82388D94;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82388D94:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82388DB0"))) PPC_WEAK_FUNC(sub_82388DB0);
PPC_FUNC_IMPL(__imp__sub_82388DB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388DC8"))) PPC_WEAK_FUNC(sub_82388DC8);
PPC_FUNC_IMPL(__imp__sub_82388DC8) {
	PPC_FUNC_PROLOGUE();
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
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x823898a0
	ctx.lr = 0x82388DF8;
	sub_823898A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823ab568
	ctx.lr = 0x82388E04;
	sub_823AB568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x823893c0
	ctx.lr = 0x82388E14;
	sub_823893C0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x823ab568
	ctx.lr = 0x82388E24;
	sub_823AB568(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82388E40"))) PPC_WEAK_FUNC(sub_82388E40);
PPC_FUNC_IMPL(__imp__sub_82388E40) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823893c8
	ctx.lr = 0x82388E64;
	sub_823893C8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
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

__attribute__((alias("__imp__sub_82388E80"))) PPC_WEAK_FUNC(sub_82388E80);
PPC_FUNC_IMPL(__imp__sub_82388E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82388ee8
	if (!ctx.cr6.eq) goto loc_82388EE8;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
loc_82388E94:
	// lhz r10,14(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82388eb0
	if (ctx.cr6.eq) goto loc_82388EB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82388edc
	goto loc_82388EDC;
loc_82388EB0:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r10,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// bne 0x82388ed0
	if (!ctx.cr0.eq) goto loc_82388ED0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82388ED0:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
loc_82388EDC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82388e94
	if (ctx.cr6.eq) goto loc_82388E94;
loc_82388EE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388EF0"))) PPC_WEAK_FUNC(sub_82388EF0);
PPC_FUNC_IMPL(__imp__sub_82388EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// lhz r7,14(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 14);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r10,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// bne 0x82388f3c
	if (!ctx.cr0.eq) goto loc_82388F3C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82388F3C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addic. r11,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r11.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82388F58:
	// lhz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82388f78
	if (ctx.cr6.eq) goto loc_82388F78;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82388fc0
	if (!ctx.cr6.lt) goto loc_82388FC0;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_82388F78:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addze r9,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subfic r9,r9,4
	ctx.xer.ca = ctx.r9.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r9.s64;
	// bne 0x82388fa4
	if (!ctx.cr0.eq) goto loc_82388FA4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82388FA4:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r11,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r11.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82388fc0
	if (ctx.cr0.eq) goto loc_82388FC0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82388f58
	if (ctx.cr6.eq) goto loc_82388F58;
loc_82388FC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823885b0
	sub_823885B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82388FC8"))) PPC_WEAK_FUNC(sub_82388FC8);
PPC_FUNC_IMPL(__imp__sub_82388FC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82388FCC"))) PPC_WEAK_FUNC(sub_82388FCC);
PPC_FUNC_IMPL(__imp__sub_82388FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82388FD0"))) PPC_WEAK_FUNC(sub_82388FD0);
PPC_FUNC_IMPL(__imp__sub_82388FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82388FD8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823890a4
	if (ctx.cr6.eq) goto loc_823890A4;
	// clrlwi. r27,r7,24
	ctx.r27.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x823890a4
	if (ctx.cr0.eq) goto loc_823890A4;
	// bl 0x82388a90
	ctx.lr = 0x82388FF8;
	sub_82388A90(ctx, base);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x8238901c
	if (!ctx.cr6.eq) goto loc_8238901C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// stb r5,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r5.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stb r7,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r7.u8);
loc_8238901C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82358508
	ctx.lr = 0x8238902C;
	sub_82358508(ctx, base);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8238909c
	if (!ctx.cr6.eq) goto loc_8238909C;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r10.s64;
	// bne 0x82389064
	if (!ctx.cr0.eq) goto loc_82389064;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82389064:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// clrlwi. r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r11.s64;
	// bne 0x8238908c
	if (!ctx.cr0.eq) goto loc_8238908C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238908C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8238909C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x823890a8
	goto loc_823890A8;
loc_823890A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823890A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

