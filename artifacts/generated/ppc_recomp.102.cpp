#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8240A7EC"))) PPC_WEAK_FUNC(sub_8240A7EC);
PPC_FUNC_IMPL(__imp__sub_8240A7EC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240a818
	if (ctx.cr6.eq) goto loc_8240A818;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822508a8
	ctx.lr = 0x8240A818;
	sub_822508A8(ctx, base);
loc_8240A818:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8224dd90
	ctx.lr = 0x8240A820;
	sub_8224DD90(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A838"))) PPC_WEAK_FUNC(sub_8240A838);
PPC_FUNC_IMPL(__imp__sub_8240A838) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8240a530
	ctx.lr = 0x8240A858;
	sub_8240A530(ctx, base);
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

__attribute__((alias("__imp__sub_8240A86C"))) PPC_WEAK_FUNC(sub_8240A86C);
PPC_FUNC_IMPL(__imp__sub_8240A86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240A870"))) PPC_WEAK_FUNC(sub_8240A870);
PPC_FUNC_IMPL(__imp__sub_8240A870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi r5,8
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt 0x8240a8c8
	if (ctx.cr0.lt) goto loc_8240A8C8;
	// li r0,7
	ctx.r0.s64 = 7;
	// rlwinm r7,r5,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// and r0,r5,r0
	ctx.r0.u64 = ctx.r5.u64 & ctx.r0.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// ld r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x8240a89c
	goto loc_8240A89C;
loc_8240A894:
	// ldu r6,8(r4)
	ea = 8 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// ldu r5,8(r3)
	ea = 8 + ctx.r3.u32;
	ctx.r5.u64 = PPC_LOAD_U64(ea);
	ctx.r3.u32 = ea;
loc_8240A89C:
	// cmpd r5,r6
	ctx.cr0.compare<int64_t>(ctx.r5.s64, ctx.r6.s64, ctx.xer);
	// bdnzt eq,0x8240a894
	// beq 0x8240a8bc
	if (ctx.cr0.eq) goto loc_8240A8BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpld r5,r6
	ctx.cr0.compare<uint64_t>(ctx.r5.u64, ctx.r6.u64, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8240A8BC:
	// mr r5,r0
	ctx.r5.u64 = ctx.r0.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
loc_8240A8C8:
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// beq 0x8240a8f8
	if (ctx.cr0.eq) goto loc_8240A8F8;
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// b 0x8240a8e8
	goto loc_8240A8E8;
loc_8240A8E0:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzu r5,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
loc_8240A8E8:
	// cmpw r5,r6
	ctx.cr0.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bdnzt eq,0x8240a8e0
	// subf r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	// blr 
	return;
loc_8240A8F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A900"))) PPC_WEAK_FUNC(sub_8240A900);
PPC_FUNC_IMPL(__imp__sub_8240A900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmpwi cr7,r5,0
	ctx.cr7.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// cmpwi cr1,r5,1
	ctx.cr1.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr7,0x8240a934
	if (ctx.cr7.eq) goto loc_8240A934;
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// beq cr6,0x8240a938
	if (ctx.cr6.eq) goto loc_8240A938;
	// beq cr1,0x8240a934
	if (ctx.cr1.eq) goto loc_8240A934;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8240A924:
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmpw r6,r4
	ctx.cr0.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// bdnzf eq,0x8240a924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_8240A924;
	// beq 0x8240a938
	if (ctx.cr0.eq) goto loc_8240A938;
loc_8240A934:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240A938:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240A93C"))) PPC_WEAK_FUNC(sub_8240A93C);
PPC_FUNC_IMPL(__imp__sub_8240A93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240A940"))) PPC_WEAK_FUNC(sub_8240A940);
PPC_FUNC_IMPL(__imp__sub_8240A940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x8240A948;
	sub_8224876C(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8240a980
	if (!ctx.cr6.eq) goto loc_8240A980;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240a980
	if (ctx.cr6.eq) goto loc_8240A980;
loc_8240A968:
	// bl 0x8224da90
	ctx.lr = 0x8240A96C;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240A978;
	sub_8224D920(ctx, base);
loc_8240A978:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_8240A980:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8240a968
	if (ctx.cr6.eq) goto loc_8240A968;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8240a968
	if (ctx.cr6.eq) goto loc_8240A968;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x8240a978
	if (ctx.cr6.lt) goto loc_8240A978;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r22,r10,-4
	ctx.r22.s64 = ctx.r10.s64 + -4;
	// addi r23,r9,-4
	ctx.r23.s64 = ctx.r9.s64 + -4;
loc_8240A9BC:
	// subf r11,r24,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r24.s64;
	// twllei r27,0
	// divwu r11,r11,r27
	ctx.r11.u32 = ctx.r11.u32 / ctx.r27.u32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8240aa74
	if (ctx.cr6.gt) goto loc_8240AA74;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x8240aa58
	if (!ctx.cr6.gt) goto loc_8240AA58;
	// add r28,r24,r27
	ctx.r28.u64 = ctx.r24.u64 + ctx.r27.u64;
loc_8240A9E4:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8240aa20
	if (ctx.cr6.gt) goto loc_8240AA20;
loc_8240A9F4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8240AA08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8240aa14
	if (!ctx.cr6.gt) goto loc_8240AA14;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8240AA14:
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x8240a9f4
	if (!ctx.cr6.gt) goto loc_8240A9F4;
loc_8240AA20:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8240aa4c
	if (ctx.cr6.eq) goto loc_8240AA4C;
	// subf r10,r29,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_8240AA34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8240aa34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240AA34;
loc_8240AA4C:
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x8240a9e4
	if (ctx.cr6.gt) goto loc_8240A9E4;
loc_8240AA58:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r23,r23,-4
	ctx.r23.s64 = ctx.r23.s64 + -4;
	// addi r22,r22,-4
	ctx.r22.s64 = ctx.r22.s64 + -4;
	// blt 0x8240a978
	if (ctx.cr0.lt) goto loc_8240A978;
	// lwz r24,4(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r28,4(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// b 0x8240a9bc
	goto loc_8240A9BC;
loc_8240AA74:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8240AA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8240aac8
	if (!ctx.cr6.gt) goto loc_8240AAC8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r24,r31
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8240aac8
	if (ctx.cr6.eq) goto loc_8240AAC8;
	// subf r10,r31,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r31.s64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_8240AAB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8240aab0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240AAB0;
loc_8240AAC8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8240AADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8240ab10
	if (!ctx.cr6.gt) goto loc_8240AB10;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r24,r28
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8240ab10
	if (ctx.cr6.eq) goto loc_8240AB10;
	// subf r10,r28,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r28.s64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_8240AAF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8240aaf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240AAF8;
loc_8240AB10:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8240AB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8240ab58
	if (!ctx.cr6.gt) goto loc_8240AB58;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8240ab58
	if (ctx.cr6.eq) goto loc_8240AB58;
	// subf r10,r28,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r28.s64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_8240AB40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8240ab40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240AB40;
loc_8240AB58:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8240AB60:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8240ab98
	if (!ctx.cr6.gt) goto loc_8240AB98;
loc_8240AB68:
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8240ab98
	if (!ctx.cr6.lt) goto loc_8240AB98;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8240AB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8240ab68
	if (!ctx.cr6.gt) goto loc_8240AB68;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8240abc0
	if (ctx.cr6.gt) goto loc_8240ABC0;
loc_8240AB98:
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x8240abc0
	if (ctx.cr6.gt) goto loc_8240ABC0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8240ABB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8240ab98
	if (!ctx.cr6.gt) goto loc_8240AB98;
loc_8240ABC0:
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8240abe8
	if (!ctx.cr6.gt) goto loc_8240ABE8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8240ABE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8240abc0
	if (ctx.cr6.gt) goto loc_8240ABC0;
loc_8240ABE8:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8240ac28
	if (ctx.cr6.gt) goto loc_8240AC28;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x8240ac18
	if (ctx.cr6.eq) goto loc_8240AC18;
	// subf r10,r29,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_8240AC00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8240ac00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240AC00;
loc_8240AC18:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8240ab60
	if (!ctx.cr6.eq) goto loc_8240AB60;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x8240ab60
	goto loc_8240AB60;
loc_8240AC28:
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8240ac64
	if (!ctx.cr6.lt) goto loc_8240AC64;
loc_8240AC34:
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8240ac64
	if (!ctx.cr6.gt) goto loc_8240AC64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8240AC54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8240ac34
	if (ctx.cr6.eq) goto loc_8240AC34;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8240ac8c
	if (ctx.cr6.lt) goto loc_8240AC8C;
loc_8240AC64:
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x8240ac8c
	if (!ctx.cr6.gt) goto loc_8240AC8C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8240AC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8240ac64
	if (ctx.cr6.eq) goto loc_8240AC64;
loc_8240AC8C:
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// subf r10,r24,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r24.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8240acc8
	if (ctx.cr6.lt) goto loc_8240ACC8;
	// cmplw cr6,r24,r29
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8240acb8
	if (!ctx.cr6.lt) goto loc_8240ACB8;
	// stw r24,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r24.u32);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stw r29,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r29.u32);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
loc_8240ACB8:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8240aa58
	if (!ctx.cr6.lt) goto loc_8240AA58;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// b 0x8240a9bc
	goto loc_8240A9BC;
loc_8240ACC8:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8240acdc
	if (!ctx.cr6.lt) goto loc_8240ACDC;
	// stwu r30,4(r23)
	ea = 4 + ctx.r23.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r23.u32 = ea;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stwu r28,4(r22)
	ea = 4 + ctx.r22.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r22.u32 = ea;
loc_8240ACDC:
	// cmplw cr6,r24,r29
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8240aa58
	if (!ctx.cr6.lt) goto loc_8240AA58;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x8240a9bc
	goto loc_8240A9BC;
}

__attribute__((alias("__imp__sub_8240ACEC"))) PPC_WEAK_FUNC(sub_8240ACEC);
PPC_FUNC_IMPL(__imp__sub_8240ACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240ACF0"))) PPC_WEAK_FUNC(sub_8240ACF0);
PPC_FUNC_IMPL(__imp__sub_8240ACF0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_8240AD00:
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// beq 0x8240ad1c
	if (ctx.cr0.eq) goto loc_8240AD1C;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8240ad00
	if (!ctx.cr0.eq) goto loc_8240AD00;
loc_8240AD1C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addic. r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8240AD40:
	// sthu r9,2(r11)
	// bdnz 0x8240ad40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240AD40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240AD4C"))) PPC_WEAK_FUNC(sub_8240AD4C);
PPC_FUNC_IMPL(__imp__sub_8240AD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240AD50"))) PPC_WEAK_FUNC(sub_8240AD50);
PPC_FUNC_IMPL(__imp__sub_8240AD50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8240ad6c
	if (ctx.cr6.eq) goto loc_8240AD6C;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_8240AD6C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8240AD70:
	// divwu r10,r3,r5
	ctx.r10.u32 = ctx.r3.u32 / ctx.r5.u32;
	// twllei r5,0
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// divwu r3,r3,r5
	ctx.r3.u32 = ctx.r3.u32 / ctx.r5.u32;
	// twllei r5,0
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// ble cr6,0x8240ad9c
	if (!ctx.cr6.gt) goto loc_8240AD9C;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// b 0x8240ada0
	goto loc_8240ADA0;
loc_8240AD9C:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_8240ADA0:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8240ad70
	if (!ctx.cr6.eq) goto loc_8240AD70;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8240ADBC:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240adbc
	if (ctx.cr6.lt) goto loc_8240ADBC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240ADE0"))) PPC_WEAK_FUNC(sub_8240ADE0);
PPC_FUNC_IMPL(__imp__sub_8240ADE0) {
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
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// bne cr6,0x8240ae04
	if (!ctx.cr6.eq) goto loc_8240AE04;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8240ae04
	if (!ctx.cr6.lt) goto loc_8240AE04;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8240ae08
	goto loc_8240AE08;
loc_8240AE04:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8240AE08:
	// bl 0x8240ad50
	ctx.lr = 0x8240AE0C;
	sub_8240AD50(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240AE20"))) PPC_WEAK_FUNC(sub_8240AE20);
PPC_FUNC_IMPL(__imp__sub_8240AE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r11,r11,13408
	ctx.r11.s64 = ctx.r11.s64 + 13408;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240AE38"))) PPC_WEAK_FUNC(sub_8240AE38);
PPC_FUNC_IMPL(__imp__sub_8240AE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8240AE40;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8240ae60
	if (!ctx.cr6.eq) goto loc_8240AE60;
loc_8240AE58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8240ae7c
	goto loc_8240AE7C;
loc_8240AE60:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8240ae84
	if (!ctx.cr6.eq) goto loc_8240AE84;
	// bl 0x8224da90
	ctx.lr = 0x8240AE6C;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240AE78;
	sub_8224D920(ctx, base);
loc_8240AE78:
	// li r3,22
	ctx.r3.s64 = 22;
loc_8240AE7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8240AE84:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8240aea4
	if (ctx.cr6.eq) goto loc_8240AEA4;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8240aea4
	if (ctx.cr6.lt) goto loc_8240AEA4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x8240AEA0;
	sub_82248A40(ctx, base);
	// b 0x8240ae58
	goto loc_8240AE58;
loc_8240AEA4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248f70
	ctx.lr = 0x8240AEB0;
	sub_82248F70(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8240aed0
	if (!ctx.cr6.eq) goto loc_8240AED0;
	// bl 0x8224da90
	ctx.lr = 0x8240AEBC;
	sub_8224DA90(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_8240AEC0:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240AEC8;
	sub_8224D920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8240ae7c
	goto loc_8240AE7C;
loc_8240AED0:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8240ae78
	if (!ctx.cr6.lt) goto loc_8240AE78;
	// bl 0x8224da90
	ctx.lr = 0x8240AEDC;
	sub_8224DA90(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x8240aec0
	goto loc_8240AEC0;
}

__attribute__((alias("__imp__sub_8240AEE4"))) PPC_WEAK_FUNC(sub_8240AEE4);
PPC_FUNC_IMPL(__imp__sub_8240AEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240AEE8"))) PPC_WEAK_FUNC(sub_8240AEE8);
PPC_FUNC_IMPL(__imp__sub_8240AEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8240AEF0;
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
	// bl 0x82254eb0
	ctx.lr = 0x8240AF04;
	sub_82254EB0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8240af24
	if (!ctx.cr6.eq) goto loc_8240AF24;
	// bl 0x8224da90
	ctx.lr = 0x8240AF10;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8240af98
	goto loc_8240AF98;
loc_8240AF24:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82260088
	ctx.lr = 0x8240AF34;
	sub_82260088(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8240af48
	if (!ctx.cr6.eq) goto loc_8240AF48;
	// bl 0x8208db08
	ctx.lr = 0x8240AF44;
	sub_8208DB08(ctx, base);
	// b 0x8240af4c
	goto loc_8240AF4C;
loc_8240AF48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240AF4C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240af60
	if (ctx.cr6.eq) goto loc_8240AF60;
	// bl 0x8224db00
	ctx.lr = 0x8240AF58;
	sub_8224DB00(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8240af98
	goto loc_8240AF98;
loc_8240AF60:
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,26592
	ctx.r10.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r31,27
	ctx.r11.u64 = ctx.r31.u32 & 0x1F;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_8240AF98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8240AFA0"))) PPC_WEAK_FUNC(sub_8240AFA0);
PPC_FUNC_IMPL(__imp__sub_8240AFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2520(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2520);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8240AFB0;
	sub_8224877C(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x8240aff4
	if (!ctx.cr6.eq) goto loc_8240AFF4;
	// bl 0x8224dac8
	ctx.lr = 0x8240AFD4;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x8240AFE0;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8240b0c4
	goto loc_8240B0C4;
loc_8240AFF4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8240b00c
	if (ctx.cr6.lt) goto loc_8240B00C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240b030
	if (ctx.cr6.lt) goto loc_8240B030;
loc_8240B00C:
	// bl 0x8224dac8
	ctx.lr = 0x8240B010;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x8240B01C;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240B028;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8240b0c4
	goto loc_8240B0C4;
loc_8240B030:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,26592
	ctx.r28.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b00c
	if (ctx.cr0.eq) goto loc_8240B00C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82254f70
	ctx.lr = 0x8240B064;
	sub_82254F70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b094
	if (ctx.cr0.eq) goto loc_8240B094;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240aee8
	ctx.lr = 0x8240B08C;
	sub_8240AEE8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x8240b0b4
	goto loc_8240B0B4;
loc_8240B094:
	// bl 0x8224da90
	ctx.lr = 0x8240B098;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x8240B0A4;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_8240B0B4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x8240b0ec
	ctx.lr = 0x8240B0C0;
	sub_8240B0EC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_8240B0C4:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8240AFA8"))) PPC_WEAK_FUNC(sub_8240AFA8);
PPC_FUNC_IMPL(__imp__sub_8240AFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8240AFB0;
	sub_8224877C(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x8240aff4
	if (!ctx.cr6.eq) goto loc_8240AFF4;
	// bl 0x8224dac8
	ctx.lr = 0x8240AFD4;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x8240AFE0;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8240b0c4
	goto loc_8240B0C4;
loc_8240AFF4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8240b00c
	if (ctx.cr6.lt) goto loc_8240B00C;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r11,26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26568);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240b030
	if (ctx.cr6.lt) goto loc_8240B030;
loc_8240B00C:
	// bl 0x8224dac8
	ctx.lr = 0x8240B010;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x8240B01C;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240B028;
	sub_8224D920(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8240b0c4
	goto loc_8240B0C4;
loc_8240B030:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,26592
	ctx.r28.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// mulli r29,r11,72
	ctx.r29.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b00c
	if (ctx.cr0.eq) goto loc_8240B00C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82254f70
	ctx.lr = 0x8240B064;
	sub_82254F70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b094
	if (ctx.cr0.eq) goto loc_8240B094;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240aee8
	ctx.lr = 0x8240B08C;
	sub_8240AEE8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x8240b0b4
	goto loc_8240B0B4;
loc_8240B094:
	// bl 0x8224da90
	ctx.lr = 0x8240B098;
	sub_8224DA90(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x8240B0A4;
	sub_8224DAC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_8240B0B4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x8240b0ec
	ctx.lr = 0x8240B0C0;
	sub_8240B0EC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_8240B0C4:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8240B0CC"))) PPC_WEAK_FUNC(sub_8240B0CC);
PPC_FUNC_IMPL(__imp__sub_8240B0CC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// b 0x8240b104
	goto loc_8240B104;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8240B104:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255070
	ctx.lr = 0x8240B10C;
	sub_82255070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240B0EC"))) PPC_WEAK_FUNC(sub_8240B0EC);
PPC_FUNC_IMPL(__imp__sub_8240B0EC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82255070
	ctx.lr = 0x8240B10C;
	sub_82255070(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240B124"))) PPC_WEAK_FUNC(sub_8240B124);
PPC_FUNC_IMPL(__imp__sub_8240B124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240B128"))) PPC_WEAK_FUNC(sub_8240B128);
PPC_FUNC_IMPL(__imp__sub_8240B128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8240B130;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8240b158
	if (!ctx.cr6.eq) goto loc_8240B158;
	// bl 0x8224da90
	ctx.lr = 0x8240B144;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240B150;
	sub_8224D920(ctx, base);
loc_8240B150:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8240b340
	goto loc_8240B340;
loc_8240B158:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82251590
	ctx.lr = 0x8240B160;
	sub_82251590(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8240b178
	if (!ctx.cr6.lt) goto loc_8240B178;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_8240B178:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8240afa8
	ctx.lr = 0x8240B188;
	sub_8240AFA8(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt 0x8240b150
	if (ctx.cr0.lt) goto loc_8240B150;
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// andi. r11,r7,264
	ctx.r11.u64 = ctx.r7.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240b1ac
	if (!ctx.cr0.eq) goto loc_8240B1AC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r3,r11,r24
	ctx.r3.s64 = ctx.r24.s64 - ctx.r11.s64;
	// b 0x8240b340
	goto loc_8240B340;
loc_8240B1AC:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r10,r7,30
	ctx.r10.u64 = ctx.r7.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r26,r11,26592
	ctx.r26.s64 = ctx.r11.s64 + 26592;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r25,r11,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r11.s64;
	// beq 0x8240b228
	if (ctx.cr0.eq) goto loc_8240B228;
	// srawi r10,r28,5
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 5;
	// clrlwi r8,r28,27
	ctx.r8.u64 = ctx.r28.u32 & 0x1F;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r8,72
	ctx.r10.s64 = ctx.r8.s64 * 72;
	// lwzx r8,r6,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240b218
	if (ctx.cr0.eq) goto loc_8240B218;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8240b218
	if (!ctx.cr6.lt) goto loc_8240B218;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_8240B1FC:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// bne cr6,0x8240b20c
	if (!ctx.cr6.eq) goto loc_8240B20C;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8240B20C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8240b1fc
	if (ctx.cr6.lt) goto loc_8240B1FC;
loc_8240B218:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8240b248
	if (!ctx.cr6.eq) goto loc_8240B248;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x8240b340
	goto loc_8240B340;
loc_8240B228:
	// rlwinm. r10,r7,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240b218
	if (!ctx.cr0.eq) goto loc_8240B218;
	// bl 0x8224da90
	ctx.lr = 0x8240B234;
	sub_8224DA90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8240b340
	goto loc_8240B340;
loc_8240B248:
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240b33c
	if (ctx.cr0.eq) goto loc_8240B33C;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8240b264
	if (!ctx.cr6.eq) goto loc_8240B264;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x8240b33c
	goto loc_8240B33C;
loc_8240B264:
	// srawi r8,r28,5
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r28.s32 >> 5;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r28,27
	ctx.r9.u64 = ctx.r28.u32 & 0x1F;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r30,r9,72
	ctx.r30.s64 = ctx.r9.s64 * 72;
	// lwzx r11,r29,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b338
	if (ctx.cr0.eq) goto loc_8240B338;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8240afa8
	ctx.lr = 0x8240B2A0;
	sub_8240AFA8(ctx, base);
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x8240b2e4
	if (!ctx.cr6.eq) goto loc_8240B2E4;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8240b2d8
	if (!ctx.cr6.lt) goto loc_8240B2D8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8240B2C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8240b2d0
	if (!ctx.cr6.eq) goto loc_8240B2D0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8240B2D0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8240b2c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240B2C0;
loc_8240B2D8:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8240b330
	goto loc_8240B330;
loc_8240B2E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8240afa8
	ctx.lr = 0x8240B2F4;
	sub_8240AFA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8240b150
	if (ctx.cr0.lt) goto loc_8240B150;
	// cmplwi cr6,r31,512
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 512, ctx.xer);
	// bgt cr6,0x8240b31c
	if (ctx.cr6.gt) goto loc_8240B31C;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240b31c
	if (ctx.cr0.eq) goto loc_8240B31C;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,512
	ctx.r31.s64 = 512;
	// beq 0x8240b320
	if (ctx.cr0.eq) goto loc_8240B320;
loc_8240B31C:
	// lwz r31,24(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
loc_8240B320:
	// lwzx r11,r29,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8240B330:
	// beq 0x8240b338
	if (ctx.cr0.eq) goto loc_8240B338;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8240B338:
	// subf r24,r31,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r31.s64;
loc_8240B33C:
	// add r3,r25,r24
	ctx.r3.u64 = ctx.r25.u64 + ctx.r24.u64;
loc_8240B340:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8240B348"))) PPC_WEAK_FUNC(sub_8240B348);
PPC_FUNC_IMPL(__imp__sub_8240B348) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8240b378
	if (!ctx.cr6.eq) goto loc_8240B378;
	// bl 0x8224da90
	ctx.lr = 0x8240B364;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240B370;
	sub_8224D920(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x8240b480
	goto loc_8240B480;
loc_8240B378:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8240b398
	if (!ctx.cr6.eq) goto loc_8240B398;
loc_8240B380:
	// bl 0x8224da90
	ctx.lr = 0x8240B384;
	sub_8224DA90(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_8240B388:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240B390;
	sub_8224D920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8240b480
	goto loc_8240B480;
loc_8240B398:
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8240b3c4
	if (ctx.cr6.gt) goto loc_8240B3C4;
loc_8240B3B8:
	// bl 0x8224da90
	ctx.lr = 0x8240B3BC;
	sub_8224DA90(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x8240b388
	goto loc_8240B388;
loc_8240B3C4:
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x8240b380
	if (ctx.cr6.lt) goto loc_8240B380;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bgt cr6,0x8240b380
	if (ctx.cr6.gt) goto loc_8240B380;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8240b3f8
	if (ctx.cr6.eq) goto loc_8240B3F8;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_8240B3F8:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8240B3FC:
	// divwu r10,r3,r6
	ctx.r10.u32 = ctx.r3.u32 / ctx.r6.u32;
	// twllei r6,0
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// divwu r3,r3,r6
	ctx.r3.u32 = ctx.r3.u32 / ctx.r6.u32;
	// twllei r6,0
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// ble cr6,0x8240b424
	if (!ctx.cr6.gt) goto loc_8240B424;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// b 0x8240b428
	goto loc_8240B428;
loc_8240B424:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_8240B428:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240b444
	if (ctx.cr6.eq) goto loc_8240B444;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8240b3fc
	if (ctx.cr6.lt) goto loc_8240B3FC;
loc_8240B444:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8240b454
	if (ctx.cr6.lt) goto loc_8240B454;
	// stb r31,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// b 0x8240b3b8
	goto loc_8240B3B8;
loc_8240B454:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8240B45C:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240b45c
	if (ctx.cr6.lt) goto loc_8240B45C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240B480:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8240B494"))) PPC_WEAK_FUNC(sub_8240B494);
PPC_FUNC_IMPL(__imp__sub_8240B494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240B498"))) PPC_WEAK_FUNC(sub_8240B498);
PPC_FUNC_IMPL(__imp__sub_8240B498) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8240b348
	sub_8240B348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240B4A0"))) PPC_WEAK_FUNC(sub_8240B4A0);
PPC_FUNC_IMPL(__imp__sub_8240B4A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224b0c0
	sub_8224B0C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240B4A4"))) PPC_WEAK_FUNC(sub_8240B4A4);
PPC_FUNC_IMPL(__imp__sub_8240B4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240B4A8"))) PPC_WEAK_FUNC(sub_8240B4A8);
PPC_FUNC_IMPL(__imp__sub_8240B4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2496(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2496);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240B4B8;
	sub_82248788(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// bl 0x8224e010
	ctx.lr = 0x8240B4D0;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r30,r11,26848
	ctx.r30.s64 = ctx.r11.s64 + 26848;
	// addi r10,r10,26852
	ctx.r10.s64 = ctx.r10.s64 + 26852;
loc_8240B4E4:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8240b574
	if (!ctx.cr6.lt) goto loc_8240B574;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240b568
	if (ctx.cr6.eq) goto loc_8240B568;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b568
	if (ctx.cr0.eq) goto loc_8240B568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82250858
	ctx.lr = 0x8240B524;
	sub_82250858(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b55c
	if (ctx.cr0.eq) goto loc_8240B55C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240b55c
	if (ctx.cr6.eq) goto loc_8240B55C;
	// bl 0x82255b98
	ctx.lr = 0x8240B550;
	sub_82255B98(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8240B55C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x8240b5dc
	ctx.lr = 0x8240B568;
	sub_8240B5DC(ctx, base);
loc_8240B568:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8240b4e4
	goto loc_8240B4E4;
loc_8240B574:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x8240b58c
	ctx.lr = 0x8240B580;
	sub_8240B58C(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8240B4B0"))) PPC_WEAK_FUNC(sub_8240B4B0);
PPC_FUNC_IMPL(__imp__sub_8240B4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240B4B8;
	sub_82248788(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// bl 0x8224e010
	ctx.lr = 0x8240B4D0;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r30,r11,26848
	ctx.r30.s64 = ctx.r11.s64 + 26848;
	// addi r10,r10,26852
	ctx.r10.s64 = ctx.r10.s64 + 26852;
loc_8240B4E4:
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8240b574
	if (!ctx.cr6.lt) goto loc_8240B574;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240b568
	if (ctx.cr6.eq) goto loc_8240B568;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b568
	if (ctx.cr0.eq) goto loc_8240B568;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82250858
	ctx.lr = 0x8240B524;
	sub_82250858(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b55c
	if (ctx.cr0.eq) goto loc_8240B55C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240b55c
	if (ctx.cr6.eq) goto loc_8240B55C;
	// bl 0x82255b98
	ctx.lr = 0x8240B550;
	sub_82255B98(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8240B55C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x8240b5dc
	ctx.lr = 0x8240B568;
	sub_8240B5DC(ctx, base);
loc_8240B568:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8240b4e4
	goto loc_8240B4E4;
loc_8240B574:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x8240b58c
	ctx.lr = 0x8240B580;
	sub_8240B58C(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8240B58C"))) PPC_WEAK_FUNC(sub_8240B58C);
PPC_FUNC_IMPL(__imp__sub_8240B58C) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8224dd90
	ctx.lr = 0x8240B5A0;
	sub_8224DD90(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240B5B0"))) PPC_WEAK_FUNC(sub_8240B5B0);
PPC_FUNC_IMPL(__imp__sub_8240B5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r30,r11,26848
	ctx.r30.s64 = ctx.r11.s64 + 26848;
	// b 0x8240b5f8
	goto loc_8240B5F8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8240B5F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822508e8
	ctx.lr = 0x8240B60C;
	sub_822508E8(ctx, base);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r30,r10,26848
	ctx.r30.s64 = ctx.r10.s64 + 26848;
	// addi r10,r11,26852
	ctx.r10.s64 = ctx.r11.s64 + 26852;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240B5DC"))) PPC_WEAK_FUNC(sub_8240B5DC);
PPC_FUNC_IMPL(__imp__sub_8240B5DC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822508e8
	ctx.lr = 0x8240B60C;
	sub_822508E8(ctx, base);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r30,r10,26848
	ctx.r30.s64 = ctx.r10.s64 + 26848;
	// addi r10,r11,26852
	ctx.r10.s64 = ctx.r11.s64 + 26852;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240B63C"))) PPC_WEAK_FUNC(sub_8240B63C);
PPC_FUNC_IMPL(__imp__sub_8240B63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240B640"))) PPC_WEAK_FUNC(sub_8240B640);
PPC_FUNC_IMPL(__imp__sub_8240B640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8240B648;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240b6c4
	if (ctx.cr6.eq) goto loc_8240B6C4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8240B65C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8240b65c
	if (!ctx.cr6.eq) goto loc_8240B65C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822516c8
	ctx.lr = 0x8240B684;
	sub_822516C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8240b6c4
	if (ctx.cr0.eq) goto loc_8240B6C4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224bb38
	ctx.lr = 0x8240B69C;
	sub_8224BB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8240b6ac
	if (!ctx.cr0.eq) goto loc_8240B6AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8240b6c8
	goto loc_8240B6C8;
loc_8240B6AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x8240B6C4;
	sub_8224D9F8(ctx, base);
loc_8240B6C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240B6C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8240B6D0"))) PPC_WEAK_FUNC(sub_8240B6D0);
PPC_FUNC_IMPL(__imp__sub_8240B6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8240B6D8;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// bl 0x8240c180
	ctx.lr = 0x8240B708;
	sub_8240C180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8240bbd4
	if (!ctx.cr0.eq) goto loc_8240BBD4;
	// rlwinm. r11,r21,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240b71c
	if (!ctx.cr0.eq) goto loc_8240B71C;
	// li r27,-128
	ctx.r27.s64 = -128;
loc_8240B71C:
	// clrlwi r11,r21,30
	ctx.r11.u64 = ctx.r21.u32 & 0x3;
	// lis r20,-16384
	ctx.r20.s64 = -1073741824;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8240b774
	if (ctx.cr6.lt) goto loc_8240B774;
	// beq cr6,0x8240b76c
	if (ctx.cr6.eq) goto loc_8240B76C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8240b764
	if (ctx.cr6.lt) goto loc_8240B764;
loc_8240B738:
	// bl 0x8224dac8
	ctx.lr = 0x8240B73C;
	sub_8224DAC8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x8240B74C;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240B758;
	sub_8224D920(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
loc_8240B75C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
loc_8240B764:
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// b 0x8240b778
	goto loc_8240B778;
loc_8240B76C:
	// lis r25,16384
	ctx.r25.s64 = 1073741824;
	// b 0x8240b778
	goto loc_8240B778;
loc_8240B774:
	// lis r25,-32768
	ctx.r25.s64 = -2147483648;
loc_8240B778:
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// beq cr6,0x8240b7cc
	if (ctx.cr6.eq) goto loc_8240B7CC;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// beq cr6,0x8240b7c4
	if (ctx.cr6.eq) goto loc_8240B7C4;
	// cmpwi cr6,r31,48
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 48, ctx.xer);
	// beq cr6,0x8240b7bc
	if (ctx.cr6.eq) goto loc_8240B7BC;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// beq cr6,0x8240b7b4
	if (ctx.cr6.eq) goto loc_8240B7B4;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// bne cr6,0x8240b738
	if (!ctx.cr6.eq) goto loc_8240B738;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r24,r11,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8240b7d0
	goto loc_8240B7D0;
loc_8240B7B4:
	// li r24,3
	ctx.r24.s64 = 3;
	// b 0x8240b7d0
	goto loc_8240B7D0;
loc_8240B7BC:
	// li r24,2
	ctx.r24.s64 = 2;
	// b 0x8240b7d0
	goto loc_8240B7D0;
loc_8240B7C4:
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8240b7d0
	goto loc_8240B7D0;
loc_8240B7CC:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8240B7D0:
	// rlwinm r11,r21,0,21,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x700;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// bgt cr6,0x8240b818
	if (ctx.cr6.gt) goto loc_8240B818;
	// beq cr6,0x8240b810
	if (ctx.cr6.eq) goto loc_8240B810;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240b810
	if (ctx.cr6.eq) goto loc_8240B810;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// beq cr6,0x8240b808
	if (ctx.cr6.eq) goto loc_8240B808;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x8240b888
	if (ctx.cr6.eq) goto loc_8240B888;
	// cmpwi cr6,r11,768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 768, ctx.xer);
	// bne cr6,0x8240b738
	if (!ctx.cr6.eq) goto loc_8240B738;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8240b834
	goto loc_8240B834;
loc_8240B808:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x8240b834
	goto loc_8240B834;
loc_8240B810:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x8240b834
	goto loc_8240B834;
loc_8240B818:
	// cmpwi cr6,r11,1280
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1280, ctx.xer);
	// beq cr6,0x8240b830
	if (ctx.cr6.eq) goto loc_8240B830;
	// cmpwi cr6,r11,1536
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1536, ctx.xer);
	// beq cr6,0x8240b888
	if (ctx.cr6.eq) goto loc_8240B888;
	// cmpwi cr6,r11,1792
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1792, ctx.xer);
	// bne cr6,0x8240b738
	if (!ctx.cr6.eq) goto loc_8240B738;
loc_8240B830:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8240B834:
	// rlwinm. r11,r21,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,128
	ctx.r26.s64 = 128;
	// beq 0x8240b858
	if (ctx.cr0.eq) goto loc_8240B858;
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// lwz r11,4628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4628);
	// andc r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240b858
	if (!ctx.cr0.eq) goto loc_8240B858;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8240B858:
	// rlwinm. r11,r21,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b86c
	if (ctx.cr0.eq) goto loc_8240B86C;
	// oris r26,r26,1024
	ctx.r26.u64 = ctx.r26.u64 | 67108864;
	// oris r25,r25,1
	ctx.r25.u64 = ctx.r25.u64 | 65536;
	// ori r24,r24,4
	ctx.r24.u64 = ctx.r24.u64 | 4;
loc_8240B86C:
	// rlwinm. r11,r21,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b878
	if (ctx.cr0.eq) goto loc_8240B878;
	// ori r26,r26,256
	ctx.r26.u64 = ctx.r26.u64 | 256;
loc_8240B878:
	// rlwinm. r11,r21,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b890
	if (ctx.cr0.eq) goto loc_8240B890;
	// oris r26,r26,2048
	ctx.r26.u64 = ctx.r26.u64 | 134217728;
	// b 0x8240b89c
	goto loc_8240B89C;
loc_8240B888:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x8240b834
	goto loc_8240B834;
loc_8240B890:
	// rlwinm. r11,r21,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b89c
	if (ctx.cr0.eq) goto loc_8240B89C;
	// oris r26,r26,4096
	ctx.r26.u64 = ctx.r26.u64 | 268435456;
loc_8240B89C:
	// bl 0x822550a0
	ctx.lr = 0x8240B8A0;
	sub_822550A0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8240b8d4
	if (!ctx.cr6.eq) goto loc_8240B8D4;
	// bl 0x8224dac8
	ctx.lr = 0x8240B8B0;
	sub_8224DAC8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x8240B8C0;
	sub_8224DA90(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224da90
	ctx.lr = 0x8240B8CC;
	sub_8224DA90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8240b75c
	goto loc_8240B75C;
loc_8240B8D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822569f0
	ctx.lr = 0x8240B8FC;
	sub_822569F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8240b994
	if (!ctx.cr6.eq) goto loc_8240B994;
	// rlwinm r11,r25,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8240b94c
	if (!ctx.cr6.eq) goto loc_8240B94C;
	// clrlwi. r11,r21,31
	ctx.r11.u64 = ctx.r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240b94c
	if (ctx.cr0.eq) goto loc_8240B94C;
	// clrlwi r25,r25,1
	ctx.r25.u64 = ctx.r25.u32 & 0x7FFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822569f0
	ctx.lr = 0x8240B940;
	sub_822569F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8240b994
	if (!ctx.cr6.eq) goto loc_8240B994;
loc_8240B94C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// addi r10,r10,26592
	ctx.r10.s64 = ctx.r10.s64 + 26592;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// bl 0x8208db08
	ctx.lr = 0x8240B984;
	sub_8208DB08(ctx, base);
	// bl 0x8224db00
	ctx.lr = 0x8240B988;
	sub_8224DB00(ctx, base);
loc_8240B988:
	// bl 0x8224da90
	ctx.lr = 0x8240B98C;
	sub_8224DA90(ctx, base);
	// lwz r23,0(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8240bbcc
	goto loc_8240BBCC;
loc_8240B994:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82254d90
	ctx.lr = 0x8240B9A0;
	sub_82254D90(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// addi r31,r11,26592
	ctx.r31.s64 = ctx.r11.s64 + 26592;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// ori r11,r27,1
	ctx.r11.u64 = ctx.r27.u64 | 1;
	// mulli r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 * 72;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// andi. r30,r11,72
	ctx.r30.u64 = ctx.r11.u64 & 72;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// mulli r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 * 72;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stb r9,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r9.u8);
	// bne 0x8240baa0
	if (!ctx.cr0.eq) goto loc_8240BAA0;
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240baa0
	if (ctx.cr0.eq) goto loc_8240BAA0;
	// rlwinm. r11,r21,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240baa0
	if (ctx.cr0.eq) goto loc_8240BAA0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8240aee8
	ctx.lr = 0x8240BA24;
	sub_8240AEE8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8240ba4c
	if (!ctx.cr6.eq) goto loc_8240BA4C;
	// bl 0x8224dac8
	ctx.lr = 0x8240BA34;
	sub_8224DAC8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,131
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 131, ctx.xer);
	// beq cr6,0x8240baa0
	if (ctx.cr6.eq) goto loc_8240BAA0;
loc_8240BA40:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82255eb8
	ctx.lr = 0x8240BA48;
	sub_82255EB8(ctx, base);
	// b 0x8240b988
	goto loc_8240B988;
loc_8240BA4C:
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82255320
	ctx.lr = 0x8240BA60;
	sub_82255320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8240ba88
	if (!ctx.cr0.eq) goto loc_8240BA88;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bne cr6,0x8240ba88
	if (!ctx.cr6.eq) goto loc_8240BA88;
	// extsw r4,r27
	ctx.r4.s64 = ctx.r27.s32;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8240bf58
	ctx.lr = 0x8240BA80;
	sub_8240BF58(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8240ba40
	if (ctx.cr6.eq) goto loc_8240BA40;
loc_8240BA88:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8240aee8
	ctx.lr = 0x8240BA98;
	sub_8240AEE8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8240ba40
	if (ctx.cr6.eq) goto loc_8240BA40;
loc_8240BAA0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// bne cr6,0x8240bb2c
	if (!ctx.cr6.eq) goto loc_8240BB2C;
	// rlwinm. r11,r21,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240bb2c
	if (ctx.cr0.eq) goto loc_8240BB2C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_8240BB2C:
	// rlwinm r11,r25,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8240bbcc
	if (!ctx.cr6.eq) goto loc_8240BBCC;
	// clrlwi. r11,r21,31
	ctx.r11.u64 = ctx.r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240bbcc
	if (ctx.cr0.eq) goto loc_8240BBCC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82088268
	ctx.lr = 0x8240BB48;
	sub_82088268(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r4,r25,1
	ctx.r4.u64 = ctx.r25.u32 & 0x7FFFFFFF;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822569f0
	ctx.lr = 0x8240BB68;
	sub_822569F0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8240bbb0
	if (!ctx.cr6.eq) goto loc_8240BBB0;
	// bl 0x8208db08
	ctx.lr = 0x8240BB74;
	sub_8208DB08(ctx, base);
	// bl 0x8224db00
	ctx.lr = 0x8240BB78;
	sub_8224DB00(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82254e18
	ctx.lr = 0x8240BBAC;
	sub_82254E18(ctx, base);
	// b 0x8240b988
	goto loc_8240B988;
loc_8240BBB0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_8240BBCC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x8240b75c
	goto loc_8240B75C;
loc_8240BBD4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8224d9f8
	ctx.lr = 0x8240BBEC;
	sub_8224D9F8(ctx, base);
}

__attribute__((alias("__imp__sub_8240BBEC"))) PPC_WEAK_FUNC(sub_8240BBEC);
PPC_FUNC_IMPL(__imp__sub_8240BBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240BBF0"))) PPC_WEAK_FUNC(sub_8240BBF0);
PPC_FUNC_IMPL(__imp__sub_8240BBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2456(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2456);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// addic r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfe. r11,r11,r7
	temp.u8 = (~ctx.r11.u32 + ctx.r7.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne 0x8240bc44
	if (!ctx.cr0.eq) goto loc_8240BC44;
loc_8240BC2C:
	// bl 0x8224da90
	ctx.lr = 0x8240BC30;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240BC3C;
	sub_8224D920(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x8240bcbc
	goto loc_8240BCBC;
loc_8240BC44:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq 0x8240bc2c
	if (ctx.cr0.eq) goto loc_8240BC2C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8240bc70
	if (ctx.cr6.eq) goto loc_8240BC70;
	// rlwinm r11,r6,0,25,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240bc2c
	if (ctx.cr0.eq) goto loc_8240BC2C;
loc_8240BC70:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8240b6d0
	ctx.lr = 0x8240BC94;
	sub_8240B6D0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x8240bcf4
	ctx.lr = 0x8240BCA4;
	sub_8240BCF4(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8240bcbc
	if (ctx.cr6.eq) goto loc_8240BCBC;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8240BCBC:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240BBF8"))) PPC_WEAK_FUNC(sub_8240BBF8);
PPC_FUNC_IMPL(__imp__sub_8240BBF8) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// addic r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfe. r11,r11,r7
	temp.u8 = (~ctx.r11.u32 + ctx.r7.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bne 0x8240bc44
	if (!ctx.cr0.eq) goto loc_8240BC44;
loc_8240BC2C:
	// bl 0x8224da90
	ctx.lr = 0x8240BC30;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240BC3C;
	sub_8224D920(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x8240bcbc
	goto loc_8240BCBC;
loc_8240BC44:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq 0x8240bc2c
	if (ctx.cr0.eq) goto loc_8240BC2C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8240bc70
	if (ctx.cr6.eq) goto loc_8240BC70;
	// rlwinm r11,r6,0,25,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240bc2c
	if (ctx.cr0.eq) goto loc_8240BC2C;
loc_8240BC70:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8240b6d0
	ctx.lr = 0x8240BC94;
	sub_8240B6D0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x8240bcf4
	ctx.lr = 0x8240BCA4;
	sub_8240BCF4(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8240bcbc
	if (ctx.cr6.eq) goto loc_8240BCBC;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8240BCBC:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240BCD4"))) PPC_WEAK_FUNC(sub_8240BCD4);
PPC_FUNC_IMPL(__imp__sub_8240BCD4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x8240bd0c
	goto loc_8240BD0C;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8240BD0C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240bd64
	if (ctx.cr6.eq) goto loc_8240BD64;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240bd5c
	if (ctx.cr6.eq) goto loc_8240BD5C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// addi r10,r10,26592
	ctx.r10.s64 = ctx.r10.s64 + 26592;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_8240BD5C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82255070
	ctx.lr = 0x8240BD64;
	sub_82255070(ctx, base);
loc_8240BD64:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240BCF4"))) PPC_WEAK_FUNC(sub_8240BCF4);
PPC_FUNC_IMPL(__imp__sub_8240BCF4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240bd64
	if (ctx.cr6.eq) goto loc_8240BD64;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240bd5c
	if (ctx.cr6.eq) goto loc_8240BD5C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// addi r10,r10,26592
	ctx.r10.s64 = ctx.r10.s64 + 26592;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
loc_8240BD5C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82255070
	ctx.lr = 0x8240BD64;
	sub_82255070(ctx, base);
loc_8240BD64:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240BD7C"))) PPC_WEAK_FUNC(sub_8240BD7C);
PPC_FUNC_IMPL(__imp__sub_8240BD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240BD80"))) PPC_WEAK_FUNC(sub_8240BD80);
PPC_FUNC_IMPL(__imp__sub_8240BD80) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8240bbf8
	sub_8240BBF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240BDA0"))) PPC_WEAK_FUNC(sub_8240BDA0);
PPC_FUNC_IMPL(__imp__sub_8240BDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r18,-8452(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8452);
	// lwz r16,-2432(r5)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + -2432);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8240BDB0;
	sub_82248778(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// bl 0x8224e010
	ctx.lr = 0x8240BDCC;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lis r29,-32177
	ctx.r29.s64 = -2108751872;
	// lis r24,-32177
	ctx.r24.s64 = -2108751872;
loc_8240BDDC:
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r11,26852(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26852);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8240bef0
	if (!ctx.cr6.lt) goto loc_8240BEF0;
	// lwz r27,26848(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240be8c
	if (ctx.cr6.eq) goto loc_8240BE8C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240be1c
	if (!ctx.cr0.eq) goto loc_8240BE1C;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240be24
	if (ctx.cr0.eq) goto loc_8240BE24;
loc_8240BE1C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8240be78
	goto loc_8240BE78;
loc_8240BE24:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// ble cr6,0x8240be44
	if (!ctx.cr6.gt) goto loc_8240BE44;
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// bge cr6,0x8240be44
	if (!ctx.cr6.lt) goto loc_8240BE44;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x8224ded0
	ctx.lr = 0x8240BE3C;
	sub_8224DED0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240bef0
	if (ctx.cr0.eq) goto loc_8240BEF0;
loc_8240BE44:
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82250858
	ctx.lr = 0x8240BE54;
	sub_82250858(ctx, base);
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240be80
	if (ctx.cr0.eq) goto loc_8240BE80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822508e8
	ctx.lr = 0x8240BE74;
	sub_822508E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8240BE78:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8240bddc
	goto loc_8240BDDC;
loc_8240BE80:
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// b 0x8240bef0
	goto loc_8240BEF0;
loc_8240BE8C:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822516c8
	ctx.lr = 0x8240BE94;
	sub_822516C8(ctx, base);
	// stwx r3,r30,r27
	PPC_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240bef0
	if (ctx.cr0.eq) goto loc_8240BEF0;
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8224ddb0
	ctx.lr = 0x8240BEB4;
	sub_8224DDB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// bne 0x8240bed4
	if (!ctx.cr0.eq) goto loc_8240BED4;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8224a858
	ctx.lr = 0x8240BEC8;
	sub_8224A858(ctx, base);
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// stwx r25,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r25.u32);
	// b 0x8240bef0
	goto loc_8240BEF0;
loc_8240BED4:
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8241dd2c
	ctx.lr = 0x8240BEE0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// lwzx r26,r30,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// stw r25,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r25.u32);
loc_8240BEF0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8240bf1c
	if (ctx.cr6.eq) goto loc_8240BF1C;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// stw r25,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r25.u32);
	// stw r25,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r25.u32);
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// stw r25,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r25.u32);
	// stw r10,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r10.u32);
loc_8240BF1C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x8240bf34
	ctx.lr = 0x8240BF28;
	sub_8240BF34(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8240BDA8"))) PPC_WEAK_FUNC(sub_8240BDA8);
PPC_FUNC_IMPL(__imp__sub_8240BDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8240BDB0;
	sub_82248778(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r25,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// bl 0x8224e010
	ctx.lr = 0x8240BDCC;
	sub_8224E010(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lis r29,-32177
	ctx.r29.s64 = -2108751872;
	// lis r24,-32177
	ctx.r24.s64 = -2108751872;
loc_8240BDDC:
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r11,26852(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 26852);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8240bef0
	if (!ctx.cr6.lt) goto loc_8240BEF0;
	// lwz r27,26848(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240be8c
	if (ctx.cr6.eq) goto loc_8240BE8C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240be1c
	if (!ctx.cr0.eq) goto loc_8240BE1C;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240be24
	if (ctx.cr0.eq) goto loc_8240BE24;
loc_8240BE1C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8240be78
	goto loc_8240BE78;
loc_8240BE24:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// ble cr6,0x8240be44
	if (!ctx.cr6.gt) goto loc_8240BE44;
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// bge cr6,0x8240be44
	if (!ctx.cr6.lt) goto loc_8240BE44;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x8224ded0
	ctx.lr = 0x8240BE3C;
	sub_8224DED0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240bef0
	if (ctx.cr0.eq) goto loc_8240BEF0;
loc_8240BE44:
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82250858
	ctx.lr = 0x8240BE54;
	sub_82250858(ctx, base);
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240be80
	if (ctx.cr0.eq) goto loc_8240BE80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822508e8
	ctx.lr = 0x8240BE74;
	sub_822508E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8240BE78:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8240bddc
	goto loc_8240BDDC;
loc_8240BE80:
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// b 0x8240bef0
	goto loc_8240BEF0;
loc_8240BE8C:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822516c8
	ctx.lr = 0x8240BE94;
	sub_822516C8(ctx, base);
	// stwx r3,r30,r27
	PPC_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240bef0
	if (ctx.cr0.eq) goto loc_8240BEF0;
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8224ddb0
	ctx.lr = 0x8240BEB4;
	sub_8224DDB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// bne 0x8240bed4
	if (!ctx.cr0.eq) goto loc_8240BED4;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8224a858
	ctx.lr = 0x8240BEC8;
	sub_8224A858(ctx, base);
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// stwx r25,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r25.u32);
	// b 0x8240bef0
	goto loc_8240BEF0;
loc_8240BED4:
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8241dd2c
	ctx.lr = 0x8240BEE0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,26848(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26848);
	// lwzx r26,r30,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// stw r25,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r25.u32);
loc_8240BEF0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8240bf1c
	if (ctx.cr6.eq) goto loc_8240BF1C;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// stw r25,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r25.u32);
	// stw r25,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r25.u32);
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// stw r25,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r25.u32);
	// stw r10,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r10.u32);
loc_8240BF1C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x8240bf34
	ctx.lr = 0x8240BF28;
	sub_8240BF34(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8240BF34"))) PPC_WEAK_FUNC(sub_8240BF34);
PPC_FUNC_IMPL(__imp__sub_8240BF34) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8224dd90
	ctx.lr = 0x8240BF48;
	sub_8224DD90(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240BF58"))) PPC_WEAK_FUNC(sub_8240BF58);
PPC_FUNC_IMPL(__imp__sub_8240BF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8240BF60;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82250d90
	ctx.lr = 0x8240BF7C;
	sub_82250D90(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x8240bfd0
	if (ctx.cr6.eq) goto loc_8240BFD0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82250d90
	ctx.lr = 0x8240BF98;
	sub_82250D90(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x8240bfd0
	if (ctx.cr6.eq) goto loc_8240BFD0;
	// subf r30,r3,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r3.s64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// ble cr6,0x8240c06c
	if (!ctx.cr6.gt) goto loc_8240C06C;
	// bl 0x8208da50
	ctx.lr = 0x8240BFB0;
	sub_8208DA50(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bl 0x8208c580
	ctx.lr = 0x8240BFBC;
	sub_8208C580(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8240bfe0
	if (!ctx.cr0.eq) goto loc_8240BFE0;
	// bl 0x8224da90
	ctx.lr = 0x8240BFC8;
	sub_8224DA90(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8240BFD0:
	// bl 0x8224da90
	ctx.lr = 0x8240BFD4;
	sub_8224DA90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8240BFD8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8240BFE0:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x8240c0f0
	ctx.lr = 0x8240BFF0;
	sub_8240C0F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8240BFF4:
	// cmpdi cr6,r30,4096
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 4096, ctx.xer);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bge cr6,0x8240c004
	if (!ctx.cr6.lt) goto loc_8240C004;
	// extsw r5,r30
	ctx.r5.s64 = ctx.r30.s32;
loc_8240C004:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82251140
	ctx.lr = 0x8240C010;
	sub_82251140(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8240c02c
	if (ctx.cr6.eq) goto loc_8240C02C;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// bgt cr6,0x8240bff4
	if (ctx.cr6.gt) goto loc_8240BFF4;
	// b 0x8240c04c
	goto loc_8240C04C;
loc_8240C02C:
	// bl 0x8224dac8
	ctx.lr = 0x8240C030;
	sub_8224DAC8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8240c048
	if (!ctx.cr6.eq) goto loc_8240C048;
	// bl 0x8224da90
	ctx.lr = 0x8240C040;
	sub_8224DA90(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8240C048:
	// li r27,-1
	ctx.r27.s64 = -1;
loc_8240C04C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240c0f0
	ctx.lr = 0x8240C058;
	sub_8240C0F0(ctx, base);
	// bl 0x8208da50
	ctx.lr = 0x8240C05C;
	sub_8208DA50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8208ce78
	ctx.lr = 0x8240C068;
	sub_8208CE78(ctx, base);
	// b 0x8240c0c4
	goto loc_8240C0C4;
loc_8240C06C:
	// bge cr6,0x8240c0cc
	if (!ctx.cr6.lt) goto loc_8240C0CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82250d90
	ctx.lr = 0x8240C080;
	sub_82250D90(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x8240bfd0
	if (ctx.cr6.eq) goto loc_8240BFD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82254eb0
	ctx.lr = 0x8240C090;
	sub_82254EB0(ctx, base);
	// bl 0x822601f8
	ctx.lr = 0x8240C094;
	sub_822601F8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// extsw r27,r11
	ctx.r27.s64 = ctx.r11.s32;
	// cmpdi cr6,r27,-1
	ctx.cr6.compare<int64_t>(ctx.r27.s64, -1, ctx.xer);
	// bne cr6,0x8240c0cc
	if (!ctx.cr6.eq) goto loc_8240C0CC;
	// bl 0x8224da90
	ctx.lr = 0x8240C0AC;
	sub_8224DA90(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224dac8
	ctx.lr = 0x8240C0B8;
	sub_8224DAC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8208db08
	ctx.lr = 0x8240C0C0;
	sub_8208DB08(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_8240C0C4:
	// cmpdi cr6,r27,-1
	ctx.cr6.compare<int64_t>(ctx.r27.s64, -1, ctx.xer);
	// beq cr6,0x8240bfd0
	if (ctx.cr6.eq) goto loc_8240BFD0;
loc_8240C0CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82250d90
	ctx.lr = 0x8240C0DC;
	sub_82250D90(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x8240bfd0
	if (ctx.cr6.eq) goto loc_8240BFD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8240bfd8
	goto loc_8240BFD8;
}

__attribute__((alias("__imp__sub_8240C0EC"))) PPC_WEAK_FUNC(sub_8240C0EC);
PPC_FUNC_IMPL(__imp__sub_8240C0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240C0F0"))) PPC_WEAK_FUNC(sub_8240C0F0);
PPC_FUNC_IMPL(__imp__sub_8240C0F0) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,26592
	ctx.r9.s64 = ctx.r10.s64 + 26592;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// cmpwi cr6,r4,16384
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16384, ctx.xer);
	// mulli r10,r11,72
	ctx.r10.s64 = ctx.r11.s64 * 72;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// beq cr6,0x8240c138
	if (ctx.cr6.eq) goto loc_8240C138;
	// cmplwi cr6,r4,32768
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32768, ctx.xer);
	// bne cr6,0x8240c160
	if (!ctx.cr6.eq) goto loc_8240C160;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x8240c160
	goto loc_8240C160;
loc_8240C138:
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// li r5,-128
	ctx.r5.s64 = -128;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// stb r9,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r9.u8);
loc_8240C160:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8240c174
	if (!ctx.cr6.eq) goto loc_8240C174;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// blr 
	return;
loc_8240C174:
	// li r3,16384
	ctx.r3.s64 = 16384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240C17C"))) PPC_WEAK_FUNC(sub_8240C17C);
PPC_FUNC_IMPL(__imp__sub_8240C17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240C180"))) PPC_WEAK_FUNC(sub_8240C180);
PPC_FUNC_IMPL(__imp__sub_8240C180) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8240c1b0
	if (!ctx.cr6.eq) goto loc_8240C1B0;
	// bl 0x8224da90
	ctx.lr = 0x8240C19C;
	sub_8224DA90(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8224d920
	ctx.lr = 0x8240C1A8;
	sub_8224D920(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x8240c1c0
	goto loc_8240C1C0;
loc_8240C1B0:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-4072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4072);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8240C1C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240C1D0"))) PPC_WEAK_FUNC(sub_8240C1D0);
PPC_FUNC_IMPL(__imp__sub_8240C1D0) {
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
	// oris r11,r3,544
	ctx.r11.u64 = ctx.r3.u64 | 35651584;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,1884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1884);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240c228
	if (ctx.cr6.eq) goto loc_8240C228;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,67
	ctx.r3.s64 = 67;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240C228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8240C228:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240C238"))) PPC_WEAK_FUNC(sub_8240C238);
PPC_FUNC_IMPL(__imp__sub_8240C238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240C240;
	sub_82248784(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,3
	ctx.r11.s64 = ctx.r5.s64 + 3;
	// stw r4,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r4.u32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r5.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// rlwinm r10,r29,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF000000;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,1884(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1884);
	// ori r10,r10,98
	ctx.r10.u64 = ctx.r10.u64 | 98;
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240c2bc
	if (ctx.cr6.eq) goto loc_8240C2BC;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// li r3,94
	ctx.r3.s64 = 94;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240C2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8240c2c0
	goto loc_8240C2C0;
loc_8240C2BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240C2C0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8240c2d0
	if (!ctx.cr6.gt) goto loc_8240C2D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8240c34c
	goto loc_8240C34C;
loc_8240C2D0:
	// blt cr6,0x8240c348
	if (ctx.cr6.lt) goto loc_8240C348;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x8224a1a4
	ctx.lr = 0x8240C2E4;
	sub_8224A1A4(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// bl 0x82248a40
	ctx.lr = 0x8240C318;
	sub_82248A40(ctx, base);
	// lwz r11,1884(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1884);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240c348
	if (ctx.cr6.eq) goto loc_8240C348;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// li r3,67
	ctx.r3.s64 = 67;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240C344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8240c34c
	goto loc_8240C34C;
loc_8240C348:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240C34C:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8240C354"))) PPC_WEAK_FUNC(sub_8240C354);
PPC_FUNC_IMPL(__imp__sub_8240C354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240C358"))) PPC_WEAK_FUNC(sub_8240C358);
PPC_FUNC_IMPL(__imp__sub_8240C358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1884);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240c380
	if (ctx.cr6.eq) goto loc_8240C380;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,68
	ctx.r3.s64 = 68;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8240C380:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240C388"))) PPC_WEAK_FUNC(sub_8240C388);
PPC_FUNC_IMPL(__imp__sub_8240C388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240C390;
	sub_82248788(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8241de0c
	ctx.lr = 0x8240C3AC;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ddfc
	ctx.lr = 0x8240C3E8;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240c410
	if (!ctx.cr0.lt) goto loc_8240C410;
	// bl 0x82089fa8
	ctx.lr = 0x8240C3F4;
	sub_82089FA8(ctx, base);
	// bl 0x8208db08
	ctx.lr = 0x8240C3F8;
	sub_8208DB08(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8240c408
	if (!ctx.cr6.eq) goto loc_8240C408;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82089e00
	ctx.lr = 0x8240C408;
	sub_82089E00(ctx, base);
loc_8240C408:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8240c490
	goto loc_8240C490;
loc_8240C410:
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8241df6c
	ctx.lr = 0x8240C428;
	__imp__NtQueryVolumeInformationFile(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241dddc
	ctx.lr = 0x8240C434;
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8240c448
	if (!ctx.cr6.lt) goto loc_8240C448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82089fa8
	ctx.lr = 0x8240C444;
	sub_82089FA8(ctx, base);
	// b 0x8240c408
	goto loc_8240C408;
loc_8240C448:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulld r11,r9,r8
	ctx.r11.s64 = ctx.r9.s64 * ctx.r8.s64;
	// mulld r10,r10,r8
	ctx.r10.s64 = ctx.r10.s64 * ctx.r8.s64;
	// beq cr6,0x8240c474
	if (ctx.cr6.eq) goto loc_8240C474;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_8240C474:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8240c480
	if (ctx.cr6.eq) goto loc_8240C480;
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
loc_8240C480:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8240c48c
	if (ctx.cr6.eq) goto loc_8240C48C;
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_8240C48C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8240C490:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8240C498"))) PPC_WEAK_FUNC(sub_8240C498);
PPC_FUNC_IMPL(__imp__sub_8240C498) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240C4B4"))) PPC_WEAK_FUNC(sub_8240C4B4);
PPC_FUNC_IMPL(__imp__sub_8240C4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240C4B8"))) PPC_WEAK_FUNC(sub_8240C4B8);
PPC_FUNC_IMPL(__imp__sub_8240C4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8240c4f4
	if (ctx.cr6.eq) goto loc_8240C4F4;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208a068
	ctx.lr = 0x8240C4EC;
	sub_8208A068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8240c4f8
	goto loc_8240C4F8;
loc_8240C4F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8240C4F8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241eb2c
	ctx.lr = 0x8240C508;
	__imp__NtCreateSemaphore(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8240c530
	if (ctx.cr0.lt) goto loc_8240C530;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,183
	ctx.r3.s64 = 183;
	// beq cr6,0x8240c524
	if (ctx.cr6.eq) goto loc_8240C524;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240C524:
	// bl 0x82089e00
	ctx.lr = 0x8240C528;
	sub_82089E00(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8240c538
	goto loc_8240C538;
loc_8240C530:
	// bl 0x82089ed0
	ctx.lr = 0x8240C534;
	sub_82089ED0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240C538:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240C550"))) PPC_WEAK_FUNC(sub_8240C550);
PPC_FUNC_IMPL(__imp__sub_8240C550) {
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
	// bl 0x8241eb3c
	ctx.lr = 0x8240C560;
	__imp__NtReleaseSemaphore(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8240c570
	if (ctx.cr0.lt) goto loc_8240C570;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8240c578
	goto loc_8240C578;
loc_8240C570:
	// bl 0x82089ed0
	ctx.lr = 0x8240C574;
	sub_82089ED0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240C578:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240C588"))) PPC_WEAK_FUNC(sub_8240C588);
PPC_FUNC_IMPL(__imp__sub_8240C588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240C590;
	sub_82248784(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// ble cr6,0x8240c5c0
	if (!ctx.cr6.gt) goto loc_8240C5C0;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x82089ed0
	ctx.lr = 0x8240C5B8;
	sub_82089ED0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8240c630
	goto loc_8240C630;
loc_8240C5C0:
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82248a40
	ctx.lr = 0x8240C5CC;
	sub_82248A40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208da60
	ctx.lr = 0x8240C5D8;
	sub_8208DA60(ctx, base);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r30,r27,24
	ctx.r30.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
loc_8240C5F0:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241eb4c
	ctx.lr = 0x8240C60C;
	__imp__NtWaitForMultipleObjectsEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8240c628
	if (ctx.cr0.lt) goto loc_8240C628;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8240c630
	if (ctx.cr6.eq) goto loc_8240C630;
	// cmpwi cr6,r3,257
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 257, ctx.xer);
	// beq cr6,0x8240c5f0
	if (ctx.cr6.eq) goto loc_8240C5F0;
	// b 0x8240c630
	goto loc_8240C630;
loc_8240C628:
	// bl 0x82089ed0
	ctx.lr = 0x8240C62C;
	sub_82089ED0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8240C630:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8240C638"))) PPC_WEAK_FUNC(sub_8240C638);
PPC_FUNC_IMPL(__imp__sub_8240C638) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8240c588
	sub_8240C588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240C640"))) PPC_WEAK_FUNC(sub_8240C640);
PPC_FUNC_IMPL(__imp__sub_8240C640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r9,r11,65517
	ctx.r9.u64 = ctx.r11.u64 | 65517;
	// ori r10,r10,65475
	ctx.r10.u64 = ctx.r10.u64 | 65475;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// lis r7,-32186
	ctx.r7.s64 = -2109341696;
	// divwu r6,r8,r11
	ctx.r6.u32 = ctx.r8.u32 / ctx.r11.u32;
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r7,13432
	ctx.r11.s64 = ctx.r7.s64 + 13432;
	// rlwinm r10,r9,2,23,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1FC;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240C6A4"))) PPC_WEAK_FUNC(sub_8240C6A4);
PPC_FUNC_IMPL(__imp__sub_8240C6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240C6A8"))) PPC_WEAK_FUNC(sub_8240C6A8);
PPC_FUNC_IMPL(__imp__sub_8240C6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x8240C6B0;
	sub_82248770(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bge cr6,0x8240c848
	if (!ctx.cr6.lt) goto loc_8240C848;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8240c848
	if (ctx.cr6.eq) goto loc_8240C848;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8240c848
	if (ctx.cr6.eq) goto loc_8240C848;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240c848
	if (ctx.cr6.eq) goto loc_8240C848;
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r10,r3,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFC0;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// rlwinm. r10,r10,0,24,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE0FF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8240c848
	if (!ctx.cr0.eq) goto loc_8240C848;
	// rlwinm. r10,r3,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240c718
	if (ctx.cr0.eq) goto loc_8240C718;
	// rlwinm. r11,r3,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240c848
	if (ctx.cr0.eq) goto loc_8240C848;
loc_8240C718:
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240c728
	if (ctx.cr0.eq) goto loc_8240C728;
	// rlwinm. r9,r31,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8240c848
	if (ctx.cr0.eq) goto loc_8240C848;
loc_8240C728:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240c738
	if (ctx.cr6.eq) goto loc_8240C738;
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240c848
	if (ctx.cr0.eq) goto loc_8240C848;
loc_8240C738:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240c74c
	if (ctx.cr0.eq) goto loc_8240C74C;
	// andi. r11,r31,44
	ctx.r11.u64 = ctx.r31.u64 & 44;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8240c848
	if (ctx.cr0.eq) goto loc_8240C848;
loc_8240C74C:
	// rlwinm. r11,r31,0,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240c78c
	if (ctx.cr0.eq) goto loc_8240C78C;
	// andi. r9,r31,10
	ctx.r9.u64 = ctx.r31.u64 & 10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8240c848
	if (ctx.cr0.eq) goto loc_8240C848;
	// rlwinm. r9,r31,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240c77c
	if (!ctx.cr0.eq) goto loc_8240C77C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240c77c
	if (ctx.cr6.eq) goto loc_8240C77C;
	// rlwinm r10,r31,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x400;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8240c848
	if (!ctx.cr6.eq) goto loc_8240C848;
loc_8240C77C:
	// rlwinm. r11,r31,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240c78c
	if (ctx.cr0.eq) goto loc_8240C78C;
	// rlwinm. r11,r31,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240c848
	if (!ctx.cr0.eq) goto loc_8240C848;
loc_8240C78C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8241eb6c
	ctx.lr = 0x8240C794;
	__imp__XamSessionCreateHandle(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8240c84c
	if (!ctx.cr0.eq) goto loc_8240C84C;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x8241eb5c
	ctx.lr = 0x8240C7B0;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8240c84c
	if (!ctx.cr0.eq) goto loc_8240C84C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// ori r4,r4,16
	ctx.r4.u64 = ctx.r4.u64 | 16;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8241e0fc
	ctx.lr = 0x8240C7F4;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240c804
	if (!ctx.cr0.lt) goto loc_8240C804;
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x8240c838
	goto loc_8240C838;
loc_8240C804:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8240c824
	if (!ctx.cr6.eq) goto loc_8240C824;
	// bl 0x82089fe0
	ctx.lr = 0x8240C810;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8240c828
	goto loc_8240C828;
loc_8240C824:
	// li r30,997
	ctx.r30.s64 = 997;
loc_8240C828:
	// cmplwi cr6,r30,997
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 997, ctx.xer);
	// beq cr6,0x8240c84c
	if (ctx.cr6.eq) goto loc_8240C84C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240c84c
	if (ctx.cr6.eq) goto loc_8240C84C;
loc_8240C838:
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82088268
	ctx.lr = 0x8240C840;
	sub_82088268(ctx, base);
	// stw r28,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r28.u32);
	// b 0x8240c84c
	goto loc_8240C84C;
loc_8240C848:
	// li r30,87
	ctx.r30.s64 = 87;
loc_8240C84C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_8240C858"))) PPC_WEAK_FUNC(sub_8240C858);
PPC_FUNC_IMPL(__imp__sub_8240C858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240C860;
	sub_82248784(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// rlwinm. r11,r4,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240c88c
	if (ctx.cr0.eq) goto loc_8240C88C;
	// rlwinm. r11,r4,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240c88c
	if (ctx.cr0.eq) goto loc_8240C88C;
	// li r30,87
	ctx.r30.s64 = 87;
	// b 0x8240c908
	goto loc_8240C908;
loc_8240C88C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241eb5c
	ctx.lr = 0x8240C894;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8240c908
	if (!ctx.cr0.eq) goto loc_8240C908;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8241e0fc
	ctx.lr = 0x8240C8CC;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240c8dc
	if (!ctx.cr0.lt) goto loc_8240C8DC;
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x8240c900
	goto loc_8240C900;
loc_8240C8DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8240c8fc
	if (!ctx.cr6.eq) goto loc_8240C8FC;
	// bl 0x82089fe0
	ctx.lr = 0x8240C8E8;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8240c900
	goto loc_8240C900;
loc_8240C8FC:
	// li r30,997
	ctx.r30.s64 = 997;
loc_8240C900:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241de5c
	ctx.lr = 0x8240C908;
	__imp__ObDereferenceObject(ctx, base);
loc_8240C908:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8240C914"))) PPC_WEAK_FUNC(sub_8240C914);
PPC_FUNC_IMPL(__imp__sub_8240C914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240C918"))) PPC_WEAK_FUNC(sub_8240C918);
PPC_FUNC_IMPL(__imp__sub_8240C918) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241eb5c
	ctx.lr = 0x8240C938;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8240c9ac
	if (!ctx.cr0.eq) goto loc_8240C9AC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,17
	ctx.r4.u64 = ctx.r4.u64 | 17;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8241e0fc
	ctx.lr = 0x8240C970;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240c980
	if (!ctx.cr0.lt) goto loc_8240C980;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x8240c9a4
	goto loc_8240C9A4;
loc_8240C980:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8240c9a0
	if (!ctx.cr6.eq) goto loc_8240C9A0;
	// bl 0x82089fe0
	ctx.lr = 0x8240C98C;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8240c9a4
	goto loc_8240C9A4;
loc_8240C9A0:
	// li r31,997
	ctx.r31.s64 = 997;
loc_8240C9A4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241de5c
	ctx.lr = 0x8240C9AC;
	__imp__ObDereferenceObject(ctx, base);
loc_8240C9AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240C9C8"))) PPC_WEAK_FUNC(sub_8240C9C8);
PPC_FUNC_IMPL(__imp__sub_8240C9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240C9D0;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8241eb5c
	ctx.lr = 0x8240C9EC;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8240ca68
	if (!ctx.cr0.eq) goto loc_8240CA68;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ori r4,r4,18
	ctx.r4.u64 = ctx.r4.u64 | 18;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8241e0fc
	ctx.lr = 0x8240CA2C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240ca3c
	if (!ctx.cr0.lt) goto loc_8240CA3C;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x8240ca60
	goto loc_8240CA60;
loc_8240CA3C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8240ca5c
	if (!ctx.cr6.eq) goto loc_8240CA5C;
	// bl 0x82089fe0
	ctx.lr = 0x8240CA48;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8240ca60
	goto loc_8240CA60;
loc_8240CA5C:
	// li r31,997
	ctx.r31.s64 = 997;
loc_8240CA60:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241de5c
	ctx.lr = 0x8240CA68;
	__imp__ObDereferenceObject(ctx, base);
loc_8240CA68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8240CA74"))) PPC_WEAK_FUNC(sub_8240CA74);
PPC_FUNC_IMPL(__imp__sub_8240CA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240CA78"))) PPC_WEAK_FUNC(sub_8240CA78);
PPC_FUNC_IMPL(__imp__sub_8240CA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240CA80;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8241eb5c
	ctx.lr = 0x8240CA9C;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8240cb18
	if (!ctx.cr0.eq) goto loc_8240CB18;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ori r4,r4,18
	ctx.r4.u64 = ctx.r4.u64 | 18;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8241e0fc
	ctx.lr = 0x8240CADC;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240caec
	if (!ctx.cr0.lt) goto loc_8240CAEC;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x8240cb10
	goto loc_8240CB10;
loc_8240CAEC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8240cb0c
	if (!ctx.cr6.eq) goto loc_8240CB0C;
	// bl 0x82089fe0
	ctx.lr = 0x8240CAF8;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8240cb10
	goto loc_8240CB10;
loc_8240CB0C:
	// li r31,997
	ctx.r31.s64 = 997;
loc_8240CB10:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241de5c
	ctx.lr = 0x8240CB18;
	__imp__ObDereferenceObject(ctx, base);
loc_8240CB18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8240CB24"))) PPC_WEAK_FUNC(sub_8240CB24);
PPC_FUNC_IMPL(__imp__sub_8240CB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240CB28"))) PPC_WEAK_FUNC(sub_8240CB28);
PPC_FUNC_IMPL(__imp__sub_8240CB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240CB30;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8241eb5c
	ctx.lr = 0x8240CB48;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8240cbc4
	if (!ctx.cr0.eq) goto loc_8240CBC4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8241e0fc
	ctx.lr = 0x8240CB88;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240cb98
	if (!ctx.cr0.lt) goto loc_8240CB98;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x8240cbbc
	goto loc_8240CBBC;
loc_8240CB98:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8240cbb8
	if (!ctx.cr6.eq) goto loc_8240CBB8;
	// bl 0x82089fe0
	ctx.lr = 0x8240CBA4;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8240cbbc
	goto loc_8240CBBC;
loc_8240CBB8:
	// li r31,997
	ctx.r31.s64 = 997;
loc_8240CBBC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241de5c
	ctx.lr = 0x8240CBC4;
	__imp__ObDereferenceObject(ctx, base);
loc_8240CBC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8240CBD0"))) PPC_WEAK_FUNC(sub_8240CBD0);
PPC_FUNC_IMPL(__imp__sub_8240CBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240CBD8;
	sub_82248788(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8241eb5c
	ctx.lr = 0x8240CBF0;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8240cc6c
	if (!ctx.cr0.eq) goto loc_8240CC6C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,19
	ctx.r4.u64 = ctx.r4.u64 | 19;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8241e0fc
	ctx.lr = 0x8240CC30;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240cc40
	if (!ctx.cr0.lt) goto loc_8240CC40;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x8240cc64
	goto loc_8240CC64;
loc_8240CC40:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8240cc60
	if (!ctx.cr6.eq) goto loc_8240CC60;
	// bl 0x82089fe0
	ctx.lr = 0x8240CC4C;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8240cc64
	goto loc_8240CC64;
loc_8240CC60:
	// li r31,997
	ctx.r31.s64 = 997;
loc_8240CC64:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241de5c
	ctx.lr = 0x8240CC6C;
	__imp__ObDereferenceObject(ctx, base);
loc_8240CC6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8240CC78"))) PPC_WEAK_FUNC(sub_8240CC78);
PPC_FUNC_IMPL(__imp__sub_8240CC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8240CC80;
	sub_82248780(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8240cd3c
	if (ctx.cr6.eq) goto loc_8240CD3C;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,3592
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3592, ctx.xer);
	// blt cr6,0x8240cd3c
	if (ctx.cr6.lt) goto loc_8240CD3C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241eb5c
	ctx.lr = 0x8240CCB4;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8240cd48
	if (!ctx.cr0.eq) goto loc_8240CD48;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,300
	ctx.r10.s64 = 300;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// std r26,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r26.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// bl 0x8241e0fc
	ctx.lr = 0x8240CCFC;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240cd0c
	if (!ctx.cr0.lt) goto loc_8240CD0C;
	// li r29,1627
	ctx.r29.s64 = 1627;
	// b 0x8240cd30
	goto loc_8240CD30;
loc_8240CD0C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8240cd2c
	if (!ctx.cr6.eq) goto loc_8240CD2C;
	// bl 0x82089fe0
	ctx.lr = 0x8240CD18;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8240cd30
	goto loc_8240CD30;
loc_8240CD2C:
	// li r29,997
	ctx.r29.s64 = 997;
loc_8240CD30:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241de5c
	ctx.lr = 0x8240CD38;
	__imp__ObDereferenceObject(ctx, base);
	// b 0x8240cd48
	goto loc_8240CD48;
loc_8240CD3C:
	// li r11,3592
	ctx.r11.s64 = 3592;
	// li r29,122
	ctx.r29.s64 = 122;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8240CD48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8240CD54"))) PPC_WEAK_FUNC(sub_8240CD54);
PPC_FUNC_IMPL(__imp__sub_8240CD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240CD58"))) PPC_WEAK_FUNC(sub_8240CD58);
PPC_FUNC_IMPL(__imp__sub_8240CD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8240CD60;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8241eb5c
	ctx.lr = 0x8240CD74;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8240cde8
	if (!ctx.cr0.eq) goto loc_8240CDE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ori r4,r4,20
	ctx.r4.u64 = ctx.r4.u64 | 20;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8241e0fc
	ctx.lr = 0x8240CDAC;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240cdbc
	if (!ctx.cr0.lt) goto loc_8240CDBC;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x8240cde0
	goto loc_8240CDE0;
loc_8240CDBC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8240cddc
	if (!ctx.cr6.eq) goto loc_8240CDDC;
	// bl 0x82089fe0
	ctx.lr = 0x8240CDC8;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8240cde0
	goto loc_8240CDE0;
loc_8240CDDC:
	// li r31,997
	ctx.r31.s64 = 997;
loc_8240CDE0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241de5c
	ctx.lr = 0x8240CDE8;
	__imp__ObDereferenceObject(ctx, base);
loc_8240CDE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8240CDF4"))) PPC_WEAK_FUNC(sub_8240CDF4);
PPC_FUNC_IMPL(__imp__sub_8240CDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240CDF8"))) PPC_WEAK_FUNC(sub_8240CDF8);
PPC_FUNC_IMPL(__imp__sub_8240CDF8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241eb5c
	ctx.lr = 0x8240CE18;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8240ce8c
	if (!ctx.cr0.eq) goto loc_8240CE8C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8241e0fc
	ctx.lr = 0x8240CE50;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240ce60
	if (!ctx.cr0.lt) goto loc_8240CE60;
	// li r31,1627
	ctx.r31.s64 = 1627;
	// b 0x8240ce84
	goto loc_8240CE84;
loc_8240CE60:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8240ce80
	if (!ctx.cr6.eq) goto loc_8240CE80;
	// bl 0x82089fe0
	ctx.lr = 0x8240CE6C;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8240ce84
	goto loc_8240CE84;
loc_8240CE80:
	// li r31,997
	ctx.r31.s64 = 997;
loc_8240CE84:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241de5c
	ctx.lr = 0x8240CE8C;
	__imp__ObDereferenceObject(ctx, base);
loc_8240CE8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240CEA8"))) PPC_WEAK_FUNC(sub_8240CEA8);
PPC_FUNC_IMPL(__imp__sub_8240CEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240CEB0;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,260(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mulli r11,r5,1326
	ctx.r11.s64 = ctx.r5.s64 * 1326;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8240cf80
	if (ctx.cr6.lt) goto loc_8240CF80;
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240cf80
	if (ctx.cr6.eq) goto loc_8240CF80;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// li r7,36
	ctx.r7.s64 = 36;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// ori r4,r4,28
	ctx.r4.u64 = ctx.r4.u64 | 28;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// sth r29,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r29.u16);
	// sth r8,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r28,276(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x8241e0fc
	ctx.lr = 0x8240CF38;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240cf58
	if (!ctx.cr0.lt) goto loc_8240CF58;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,20999
	ctx.r11.u64 = ctx.r11.u64 | 20999;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8240cf80
	if (ctx.cr6.eq) goto loc_8240CF80;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x8240cf88
	goto loc_8240CF88;
loc_8240CF58:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8240cf78
	if (!ctx.cr6.eq) goto loc_8240CF78;
	// bl 0x82089fe0
	ctx.lr = 0x8240CF64;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8240cf88
	goto loc_8240CF88;
loc_8240CF78:
	// li r3,997
	ctx.r3.s64 = 997;
	// b 0x8240cf88
	goto loc_8240CF88;
loc_8240CF80:
	// li r3,122
	ctx.r3.s64 = 122;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_8240CF88:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8240CF90"))) PPC_WEAK_FUNC(sub_8240CF90);
PPC_FUNC_IMPL(__imp__sub_8240CF90) {
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
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,1334
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1334, ctx.xer);
	// blt cr6,0x8240d048
	if (ctx.cr6.lt) goto loc_8240D048;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8240d048
	if (ctx.cr6.eq) goto loc_8240D048;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// std r3,84(r1)
	PPC_STORE_U64(ctx.r1.u32 + 84, ctx.r3.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// li r3,251
	ctx.r3.s64 = 251;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8241e0fc
	ctx.lr = 0x8240D000;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240d020
	if (!ctx.cr0.lt) goto loc_8240D020;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,20999
	ctx.r11.u64 = ctx.r11.u64 | 20999;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8240d048
	if (ctx.cr6.eq) goto loc_8240D048;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x8240d054
	goto loc_8240D054;
loc_8240D020:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8240d040
	if (!ctx.cr6.eq) goto loc_8240D040;
	// bl 0x82089fe0
	ctx.lr = 0x8240D02C;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8240d054
	goto loc_8240D054;
loc_8240D040:
	// li r3,997
	ctx.r3.s64 = 997;
	// b 0x8240d054
	goto loc_8240D054;
loc_8240D048:
	// li r11,1334
	ctx.r11.s64 = 1334;
	// li r3,122
	ctx.r3.s64 = 122;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8240D054:
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

__attribute__((alias("__imp__sub_8240D06C"))) PPC_WEAK_FUNC(sub_8240D06C);
PPC_FUNC_IMPL(__imp__sub_8240D06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240D070"))) PPC_WEAK_FUNC(sub_8240D070);
PPC_FUNC_IMPL(__imp__sub_8240D070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240D078;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rldicl r11,r4,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x8240d0a8
	if (!ctx.cr6.eq) goto loc_8240D0A8;
	// rlwinm. r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240d124
	if (!ctx.cr0.eq) goto loc_8240D124;
loc_8240D0A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241eb5c
	ctx.lr = 0x8240D0B0;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8240d124
	if (!ctx.cr0.eq) goto loc_8240D124;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// std r31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r31.u64);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,37
	ctx.r4.u64 = ctx.r4.u64 | 37;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x8241e0fc
	ctx.lr = 0x8240D0E8;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240d0f8
	if (!ctx.cr0.lt) goto loc_8240D0F8;
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x8240d11c
	goto loc_8240D11C;
loc_8240D0F8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8240d118
	if (!ctx.cr6.eq) goto loc_8240D118;
	// bl 0x82089fe0
	ctx.lr = 0x8240D104;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8240d11c
	goto loc_8240D11C;
loc_8240D118:
	// li r30,997
	ctx.r30.s64 = 997;
loc_8240D11C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241de5c
	ctx.lr = 0x8240D124;
	__imp__ObDereferenceObject(ctx, base);
loc_8240D124:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8240D130"))) PPC_WEAK_FUNC(sub_8240D130);
PPC_FUNC_IMPL(__imp__sub_8240D130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8240D138;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r3,1326
	ctx.r11.s64 = ctx.r3.s64 * 1326;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8240d1f4
	if (ctx.cr6.lt) goto loc_8240D1F4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8240d1f4
	if (ctx.cr6.eq) goto loc_8240D1F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ori r4,r4,96
	ctx.r4.u64 = ctx.r4.u64 | 96;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8241e0fc
	ctx.lr = 0x8240D1AC;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240d1cc
	if (!ctx.cr0.lt) goto loc_8240D1CC;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,20999
	ctx.r11.u64 = ctx.r11.u64 | 20999;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8240d1f4
	if (ctx.cr6.eq) goto loc_8240D1F4;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x8240d1fc
	goto loc_8240D1FC;
loc_8240D1CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8240d1ec
	if (!ctx.cr6.eq) goto loc_8240D1EC;
	// bl 0x82089fe0
	ctx.lr = 0x8240D1D8;
	sub_82089FE0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8240d1fc
	goto loc_8240D1FC;
loc_8240D1EC:
	// li r3,997
	ctx.r3.s64 = 997;
	// b 0x8240d1fc
	goto loc_8240D1FC;
loc_8240D1F4:
	// li r3,122
	ctx.r3.s64 = 122;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8240D1FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8240D204"))) PPC_WEAK_FUNC(sub_8240D204);
PPC_FUNC_IMPL(__imp__sub_8240D204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240D208"))) PPC_WEAK_FUNC(sub_8240D208);
PPC_FUNC_IMPL(__imp__sub_8240D208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240D210;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8241e14c
	ctx.lr = 0x8240D234;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8204
	ctx.r11.s64 = 537657344;
	// ori r11,r11,59648
	ctx.r11.u64 = ctx.r11.u64 | 59648;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8240d25c
	if (!ctx.cr6.lt) goto loc_8240D25C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// bl 0x8240d4c8
	ctx.lr = 0x8240D258;
	sub_8240D4C8(ctx, base);
	// b 0x8240d2e4
	goto loc_8240D2E4;
loc_8240D25C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241eb5c
	ctx.lr = 0x8240D268;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8240d2e4
	if (!ctx.cr0.eq) goto loc_8240D2E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// ori r4,r4,30
	ctx.r4.u64 = ctx.r4.u64 | 30;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x8241e0fc
	ctx.lr = 0x8240D2AC;
	__imp__XMsgStartIORequest(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240d2c0
	if (!ctx.cr0.lt) goto loc_8240D2C0;
	// li r11,1627
	ctx.r11.s64 = 1627;
	// b 0x8240d2e0
	goto loc_8240D2E0;
loc_8240D2C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8240d2dc
	if (!ctx.cr6.eq) goto loc_8240D2DC;
	// bl 0x82089fe0
	ctx.lr = 0x8240D2CC;
	sub_82089FE0(ctx, base);
	// li r11,1627
	ctx.r11.s64 = 1627;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x8240d2e0
	goto loc_8240D2E0;
loc_8240D2DC:
	// li r11,997
	ctx.r11.s64 = 997;
loc_8240D2E0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8240D2E4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240d2f4
	if (ctx.cr6.eq) goto loc_8240D2F4;
	// bl 0x8241de5c
	ctx.lr = 0x8240D2F4;
	__imp__ObDereferenceObject(ctx, base);
loc_8240D2F4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8240D300"))) PPC_WEAK_FUNC(sub_8240D300);
PPC_FUNC_IMPL(__imp__sub_8240D300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8240D308;
	sub_8224877C(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240d360
	if (ctx.cr6.eq) goto loc_8240D360;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8240D334:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8240d334
	if (!ctx.cr6.eq) goto loc_8240D334;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r30,199
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 199, ctx.xer);
	// ble cr6,0x8240d364
	if (!ctx.cr6.gt) goto loc_8240D364;
loc_8240D358:
	// li r31,87
	ctx.r31.s64 = 87;
	// b 0x8240d454
	goto loc_8240D454;
loc_8240D360:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8240D364:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8240d358
	if (ctx.cr6.eq) goto loc_8240D358;
	// cmplwi cr6,r27,1000
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1000, ctx.xer);
	// bgt cr6,0x8240d358
	if (ctx.cr6.gt) goto loc_8240D358;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8240d358
	if (ctx.cr6.eq) goto loc_8240D358;
	// lis r6,5
	ctx.r6.s64 = 327680;
	// lis r5,5
	ctx.r5.s64 = 327680;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,212
	ctx.r7.s64 = 212;
	// ori r6,r6,32826
	ctx.r6.u64 = ctx.r6.u64 | 32826;
	// ori r5,r5,32825
	ctx.r5.u64 = ctx.r5.u64 | 32825;
	// li r4,252
	ctx.r4.s64 = 252;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8241e9ac
	ctx.lr = 0x8240D3A8;
	__imp__XamCreateEnumeratorHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8240d434
	if (!ctx.cr0.eq) goto loc_8240D434;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8241e99c
	ctx.lr = 0x8240D3BC;
	__imp__XamGetPrivateEnumStructureFromHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8240d434
	if (!ctx.cr0.eq) goto loc_8240D434;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8240d3d4
	if (ctx.cr6.eq) goto loc_8240D3D4;
	// mulli r11,r27,208
	ctx.r11.s64 = ctx.r27.s64 * 208;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_8240D3D4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// beq cr6,0x8240d3f4
	if (ctx.cr6.eq) goto loc_8240D3F4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248a40
	ctx.lr = 0x8240D3F4;
	sub_82248A40(ctx, base);
loc_8240D3F4:
	// mulli r11,r27,215
	ctx.r11.s64 = ctx.r27.s64 * 215;
	// stbx r28,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r28.u8);
	// stw r28,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r28.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r5,r31,208
	ctx.r5.s64 = ctx.r31.s64 + 208;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// lis r3,6144
	ctx.r3.s64 = 402653184;
	// bl 0x8241e96c
	ctx.lr = 0x8240D414;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240d424
	if (!ctx.cr0.lt) goto loc_8240D424;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x8240d434
	goto loc_8240D434;
loc_8240D424:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_8240D434:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240d444
	if (ctx.cr6.eq) goto loc_8240D444;
	// bl 0x82088268
	ctx.lr = 0x8240D444;
	sub_82088268(ctx, base);
loc_8240D444:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240d454
	if (ctx.cr6.eq) goto loc_8240D454;
	// bl 0x8241de5c
	ctx.lr = 0x8240D454;
	__imp__ObDereferenceObject(ctx, base);
loc_8240D454:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8240D460"))) PPC_WEAK_FUNC(sub_8240D460);
PPC_FUNC_IMPL(__imp__sub_8240D460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8240D468;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x822604a8
	ctx.lr = 0x8240D48C;
	sub_822604A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8240d4bc
	if (!ctx.cr0.eq) goto loc_8240D4BC;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241eb7c
	ctx.lr = 0x8240D4BC;
	__imp__XamUserReadProfileSettings(ctx, base);
loc_8240D4BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8240D4C4"))) PPC_WEAK_FUNC(sub_8240D4C4);
PPC_FUNC_IMPL(__imp__sub_8240D4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240D4C8"))) PPC_WEAK_FUNC(sub_8240D4C8);
PPC_FUNC_IMPL(__imp__sub_8240D4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8240d4f8
	if (!ctx.cr6.gt) goto loc_8240D4F8;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_8240D4F8:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82089f90
	ctx.lr = 0x8240D500;
	sub_82089F90(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240d510
	if (ctx.cr6.eq) goto loc_8240D510;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_8240D510:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240D528"))) PPC_WEAK_FUNC(sub_8240D528);
PPC_FUNC_IMPL(__imp__sub_8240D528) {
	PPC_FUNC_PROLOGUE();
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8240d548
	if (!ctx.cr6.eq) goto loc_8240D548;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r11,r11,14016
	ctx.r11.s64 = ctx.r11.s64 + 14016;
	// b 0x8240d550
	goto loc_8240D550;
loc_8240D548:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r11,r11,13984
	ctx.r11.s64 = ctx.r11.s64 + 13984;
loc_8240D550:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240D558"))) PPC_WEAK_FUNC(sub_8240D558);
PPC_FUNC_IMPL(__imp__sub_8240D558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82088070
	ctx.lr = 0x8240D588;
	sub_82088070(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8240e9b8
	ctx.lr = 0x8240D598;
	sub_8240E9B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240d5b8
	if (!ctx.cr0.lt) goto loc_8240D5B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8240D5B8:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240d5d4
	if (ctx.cr6.eq) goto loc_8240D5D4;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x8240d5d8
	goto loc_8240D5D8;
loc_8240D5D4:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8240D5D8:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240D5F4"))) PPC_WEAK_FUNC(sub_8240D5F4);
PPC_FUNC_IMPL(__imp__sub_8240D5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240D5F8"))) PPC_WEAK_FUNC(sub_8240D5F8);
PPC_FUNC_IMPL(__imp__sub_8240D5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240D600;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,52
	ctx.r30.s64 = ctx.r3.s64 + 52;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8240D614:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240d664
	if (ctx.cr6.eq) goto loc_8240D664;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x8240d664
	if (ctx.cr6.eq) goto loc_8240D664;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240d654
	if (ctx.cr6.eq) goto loc_8240D654;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8240d648
	if (!ctx.cr6.eq) goto loc_8240D648;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_8240D648:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_8240D654:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240d558
	ctx.lr = 0x8240D65C;
	sub_8240D558(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8240d614
	goto loc_8240D614;
loc_8240D664:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
loc_8240D66C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240d7a8
	if (ctx.cr6.eq) goto loc_8240D7A8;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x8240d7a8
	if (ctx.cr6.eq) goto loc_8240D7A8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240d6b0
	if (ctx.cr6.eq) goto loc_8240D6B0;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8240d6a4
	if (!ctx.cr6.eq) goto loc_8240D6A4;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_8240D6A4:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
loc_8240D6B0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8240d798
	if (!ctx.cr6.eq) goto loc_8240D798;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r10,140(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 140);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8240d6dc
	if (ctx.cr6.eq) goto loc_8240D6DC;
	// stb r10,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r10.u8);
loc_8240D6DC:
	// lhz r10,62(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// blt cr6,0x8240d6ec
	if (ctx.cr6.lt) goto loc_8240D6EC;
	// sth r28,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r28.u16);
loc_8240D6EC:
	// lhz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lbz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// li r7,259
	ctx.r7.s64 = 259;
	// rlwimi r10,r8,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// sth r10,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
	// lhz r10,62(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// rlwimi r8,r10,1,20,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xFFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF001);
	// sth r8,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,62(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r10.u16);
	// lhz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lwz r8,212(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 212);
	// rlwinm r8,r8,0,12,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF0000;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwimi r10,r9,27,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 27) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// sth r10,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240d76c
	if (ctx.cr6.eq) goto loc_8240D76C;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// b 0x8240d770
	goto loc_8240D770;
loc_8240D76C:
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
loc_8240D770:
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,240(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// b 0x8240d7a0
	goto loc_8240D7A0;
loc_8240D798:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240d558
	ctx.lr = 0x8240D7A0;
	sub_8240D558(ctx, base);
loc_8240D7A0:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x8240d66c
	goto loc_8240D66C;
loc_8240D7A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8240D7B4"))) PPC_WEAK_FUNC(sub_8240D7B4);
PPC_FUNC_IMPL(__imp__sub_8240D7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240D7B8"))) PPC_WEAK_FUNC(sub_8240D7B8);
PPC_FUNC_IMPL(__imp__sub_8240D7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8240D7C0;
	sub_82248768(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// bl 0x82248f70
	ctx.lr = 0x8240D7EC;
	sub_82248F70(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r20,68(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r24,72(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x8240f840
	ctx.lr = 0x8240D7FC;
	sub_8240F840(ctx, base);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r27,r31,52
	ctx.r27.s64 = ctx.r31.s64 + 52;
	// b 0x8240d84c
	goto loc_8240D84C;
loc_8240D808:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x8240d854
	if (ctx.cr6.eq) goto loc_8240D854;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240d840
	if (ctx.cr6.eq) goto loc_8240D840;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8240d834
	if (!ctx.cr6.eq) goto loc_8240D834;
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
loc_8240D834:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_8240D840:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240d558
	ctx.lr = 0x8240D848;
	sub_8240D558(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_8240D84C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8240d808
	if (!ctx.cr6.eq) goto loc_8240D808;
loc_8240D854:
	// lwz r28,44(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r25,r31,44
	ctx.r25.s64 = ctx.r31.s64 + 44;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8240d86c
	if (ctx.cr6.eq) goto loc_8240D86C;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8240D86C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8240edc8
	ctx.lr = 0x8240D874;
	sub_8240EDC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240d890
	if (ctx.cr6.eq) goto loc_8240D890;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// bne cr6,0x8240d8e4
	if (!ctx.cr6.eq) goto loc_8240D8E4;
loc_8240D890:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bgt cr6,0x8240d8e4
	if (ctx.cr6.gt) goto loc_8240D8E4;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240d8e4
	if (!ctx.cr6.eq) goto loc_8240D8E4;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r22,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r22.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240D8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240D8D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt 0x8240d8e4
	if (ctx.cr0.lt) goto loc_8240D8E4;
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
loc_8240D8E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x8240d958
	if (!ctx.cr6.eq) goto loc_8240D958;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bgt cr6,0x8240d910
	if (ctx.cr6.gt) goto loc_8240D910;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
	// lfs f1,10420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10420);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8240d934
	goto loc_8240D934;
loc_8240D910:
	// cmplwi cr6,r29,9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 9, ctx.xer);
	// blt cr6,0x8240d92c
	if (ctx.cr6.lt) goto loc_8240D92C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// lfs f1,-4036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4036);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8240d934
	goto loc_8240D934;
loc_8240D92C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r22,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r22.u32);
loc_8240D934:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8240d958
	if (ctx.cr6.eq) goto loc_8240D958;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240D958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8240D958:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8240da38
	if (ctx.cr6.eq) goto loc_8240DA38;
loc_8240D960:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x8240da38
	if (ctx.cr6.eq) goto loc_8240DA38;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8240da38
	if (!ctx.cr6.lt) goto loc_8240DA38;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8240edc8
	ctx.lr = 0x8240D980;
	sub_8240EDC8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8240da38
	if (!ctx.cr6.lt) goto loc_8240DA38;
	// li r11,259
	ctx.r11.s64 = 259;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240D9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt 0x8240da30
	if (ctx.cr0.lt) goto loc_8240DA30;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240d9f8
	if (ctx.cr6.eq) goto loc_8240D9F8;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8240d9ec
	if (!ctx.cr6.eq) goto loc_8240D9EC;
	// stw r26,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r26.u32);
loc_8240D9EC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_8240D9F8:
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240da10
	if (ctx.cr6.eq) goto loc_8240DA10;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x8240da14
	goto loc_8240DA14;
loc_8240DA10:
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
loc_8240DA14:
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8240da38
	if (ctx.cr6.eq) goto loc_8240DA38;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8240d960
	goto loc_8240D960;
loc_8240DA30:
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_8240DA38:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8240dabc
	if (!ctx.cr6.eq) goto loc_8240DABC;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bne cr6,0x8240dabc
	if (!ctx.cr6.eq) goto loc_8240DABC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8240edc8
	ctx.lr = 0x8240DA54;
	sub_8240EDC8(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8240dabc
	if (ctx.cr6.lt) goto loc_8240DABC;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240dab8
	if (!ctx.cr6.eq) goto loc_8240DAB8;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240DA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt 0x8240dab8
	if (ctx.cr0.lt) goto loc_8240DAB8;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240DAAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt 0x8240dab8
	if (ctx.cr0.lt) goto loc_8240DAB8;
	// stw r22,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r22.u32);
loc_8240DAB8:
	// stw r26,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
loc_8240DABC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8240DACC"))) PPC_WEAK_FUNC(sub_8240DACC);
PPC_FUNC_IMPL(__imp__sub_8240DACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240DAD0"))) PPC_WEAK_FUNC(sub_8240DAD0);
PPC_FUNC_IMPL(__imp__sub_8240DAD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8240dae0
	if (!ctx.cr6.eq) goto loc_8240DAE0;
	// b 0x8240d7b8
	sub_8240D7B8(ctx, base);
	return;
loc_8240DAE0:
	// b 0x8240d5f8
	sub_8240D5F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240DAE4"))) PPC_WEAK_FUNC(sub_8240DAE4);
PPC_FUNC_IMPL(__imp__sub_8240DAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240DAE8"))) PPC_WEAK_FUNC(sub_8240DAE8);
PPC_FUNC_IMPL(__imp__sub_8240DAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8240e4b8
	ctx.lr = 0x8240DB04;
	sub_8240E4B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8240db98
	if (ctx.cr0.lt) goto loc_8240DB98;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240db44
	if (!ctx.cr6.eq) goto loc_8240DB44;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x8240db3c
	goto loc_8240DB3C;
loc_8240DB24:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8240DB3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240db24
	if (!ctx.cr6.eq) goto loc_8240DB24;
loc_8240DB44:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8240db98
	if (!ctx.cr6.eq) goto loc_8240DB98;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240db98
	if (ctx.cr6.eq) goto loc_8240DB98;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8240db98
	if (ctx.cr6.eq) goto loc_8240DB98;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240DB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8240db98
	if (ctx.cr0.lt) goto loc_8240DB98;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_8240DB98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240DBB0"))) PPC_WEAK_FUNC(sub_8240DBB0);
PPC_FUNC_IMPL(__imp__sub_8240DBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240DBB8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// lwz r9,24(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bl 0x8240f0b0
	ctx.lr = 0x8240DC00;
	sub_8240F0B0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x8240dc78
	if (ctx.cr0.lt) goto loc_8240DC78;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240dc5c
	if (!ctx.cr6.gt) goto loc_8240DC5C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8240DC1C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8240d558
	ctx.lr = 0x8240DC48;
	sub_8240D558(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240dc1c
	if (ctx.cr6.lt) goto loc_8240DC1C;
loc_8240DC5C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8240dc78
	if (!ctx.cr6.eq) goto loc_8240DC78;
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8240fd00
	ctx.lr = 0x8240DC74;
	sub_8240FD00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8240DC78:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8240DC84"))) PPC_WEAK_FUNC(sub_8240DC84);
PPC_FUNC_IMPL(__imp__sub_8240DC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240DC88"))) PPC_WEAK_FUNC(sub_8240DC88);
PPC_FUNC_IMPL(__imp__sub_8240DC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8240dd14
	if (ctx.cr6.eq) goto loc_8240DD14;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8240dce0
	if (!ctx.cr6.eq) goto loc_8240DCE0;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240dcd8
	if (ctx.cr6.eq) goto loc_8240DCD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240DCD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_8240DCD8:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8240f7c8
	ctx.lr = 0x8240DCE0;
	sub_8240F7C8(ctx, base);
loc_8240DCE0:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240dcfc
	if (ctx.cr6.eq) goto loc_8240DCFC;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82086968
	ctx.lr = 0x8240DCF8;
	sub_82086968(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_8240DCFC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8240ef68
	ctx.lr = 0x8240DD04;
	sub_8240EF68(ctx, base);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32785
	ctx.r4.u64 = ctx.r4.u64 | 32785;
	// bl 0x82086968
	ctx.lr = 0x8240DD14;
	sub_82086968(ctx, base);
loc_8240DD14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240DD2C"))) PPC_WEAK_FUNC(sub_8240DD2C);
PPC_FUNC_IMPL(__imp__sub_8240DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240DD30"))) PPC_WEAK_FUNC(sub_8240DD30);
PPC_FUNC_IMPL(__imp__sub_8240DD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8240DD38;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8240dd68
	if (ctx.cr6.eq) goto loc_8240DD68;
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r26.u32);
loc_8240DD68:
	// lwz r29,52(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// b 0x8240de10
	goto loc_8240DE10;
loc_8240DD70:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8240de0c
	if (ctx.cr6.eq) goto loc_8240DE0C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// addi r31,r9,2
	ctx.r31.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8240de44
	if (ctx.cr6.gt) goto loc_8240DE44;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x82248a40
	ctx.lr = 0x8240DDB8;
	sub_82248A40(ctx, base);
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8240ddd4
	if (ctx.cr6.eq) goto loc_8240DDD4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8240DDD4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r31,-2
	ctx.r9.s64 = ctx.r31.s64 + -2;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8240ddf4
	if (!ctx.cr6.lt) goto loc_8240DDF4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8240DDF4:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8240de10
	if (!ctx.cr6.eq) goto loc_8240DE10;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_8240DE0C:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_8240DE10:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8240dd70
	if (!ctx.cr6.eq) goto loc_8240DD70;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,240(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_8240DE38:
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8240DE44:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8240de38
	if (!ctx.cr6.eq) goto loc_8240DE38;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8240de38
	goto loc_8240DE38;
}

__attribute__((alias("__imp__sub_8240DE5C"))) PPC_WEAK_FUNC(sub_8240DE5C);
PPC_FUNC_IMPL(__imp__sub_8240DE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240DE60"))) PPC_WEAK_FUNC(sub_8240DE60);
PPC_FUNC_IMPL(__imp__sub_8240DE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240DE68;
	sub_82248784(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r3,r8,16385
	ctx.r3.u64 = ctx.r8.u64 | 16385;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x8240df58
	if (ctx.cr6.eq) goto loc_8240DF58;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240dedc
	if (ctx.cr6.eq) goto loc_8240DEDC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240df54
	if (ctx.cr6.eq) goto loc_8240DF54;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240DED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8240df54
	goto loc_8240DF54;
loc_8240DEDC:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// bl 0x82248f70
	ctx.lr = 0x8240DEEC;
	sub_82248F70(ctx, base);
	// li r10,16000
	ctx.r10.s64 = 16000;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r10,32000
	ctx.r10.s64 = 32000;
	// sth r30,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r30.u16);
	// sth r30,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r30.u16);
	// sth r9,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r9.u16);
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r27,60(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8240fe80
	ctx.lr = 0x8240DF24;
	sub_8240FE80(ctx, base);
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,3496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3496);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bctrl 
	ctx.lr = 0x8240DF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8240DF54:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_8240DF58:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8240DF60"))) PPC_WEAK_FUNC(sub_8240DF60);
PPC_FUNC_IMPL(__imp__sub_8240DF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8240DF68;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240df94
	if (!ctx.cr6.eq) goto loc_8240DF94;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x8240dff8
	goto loc_8240DFF8;
loc_8240DF94:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// divwu. r27,r10,r31
	ctx.r27.u32 = ctx.r10.u32 / ctx.r31.u32;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// twllei r31,0
	// beq 0x8240dff8
	if (ctx.cr0.eq) goto loc_8240DFF8;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_8240DFBC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,76(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8240fab8
	ctx.lr = 0x8240DFCC;
	sub_8240FAB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8240dff8
	if (ctx.cr0.lt) goto loc_8240DFF8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8240dff8
	if (ctx.cr6.eq) goto loc_8240DFF8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// blt cr6,0x8240dfbc
	if (ctx.cr6.lt) goto loc_8240DFBC;
loc_8240DFF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8240E000"))) PPC_WEAK_FUNC(sub_8240E000);
PPC_FUNC_IMPL(__imp__sub_8240E000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8240e038
	if (!ctx.cr6.eq) goto loc_8240E038;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8240e038
	if (!ctx.cr6.eq) goto loc_8240E038;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x8240fc48
	ctx.lr = 0x8240E038;
	sub_8240FC48(ctx, base);
loc_8240E038:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240e490
	ctx.lr = 0x8240E040;
	sub_8240E490(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8240e050
	if (!ctx.cr0.lt) goto loc_8240E050;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240dae8
	ctx.lr = 0x8240E050;
	sub_8240DAE8(ctx, base);
loc_8240E050:
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

__attribute__((alias("__imp__sub_8240E06C"))) PPC_WEAK_FUNC(sub_8240E06C);
PPC_FUNC_IMPL(__imp__sub_8240E06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240E070"))) PPC_WEAK_FUNC(sub_8240E070);
PPC_FUNC_IMPL(__imp__sub_8240E070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8240E078;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r4,r4,32785
	ctx.r4.u64 = ctx.r4.u64 | 32785;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// bl 0x82086c98
	ctx.lr = 0x8240E0A4;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8240e12c
	if (ctx.cr0.eq) goto loc_8240E12C;
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r11,r11,13944
	ctx.r11.s64 = ctx.r11.s64 + 13944;
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// bne cr6,0x8240e104
	if (!ctx.cr6.eq) goto loc_8240E104;
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240e10c
	if (ctx.cr6.eq) goto loc_8240E10C;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240E100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8240e10c
	goto loc_8240E10C;
loc_8240E104:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
loc_8240E10C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82086c98
	ctx.lr = 0x8240E120;
	sub_82086C98(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8240e140
	if (!ctx.cr0.eq) goto loc_8240E140;
loc_8240E12C:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// bl 0x8240dc88
	ctx.lr = 0x8240E13C;
	sub_8240DC88(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8240E140:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8240E150"))) PPC_WEAK_FUNC(sub_8240E150);
PPC_FUNC_IMPL(__imp__sub_8240E150) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8240e160
	if (!ctx.cr0.eq) goto loc_8240E160;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8240e070
	sub_8240E070(ctx, base);
	return;
loc_8240E160:
	// b 0x8240e070
	sub_8240E070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240E164"))) PPC_WEAK_FUNC(sub_8240E164);
PPC_FUNC_IMPL(__imp__sub_8240E164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240E168"))) PPC_WEAK_FUNC(sub_8240E168);
PPC_FUNC_IMPL(__imp__sub_8240E168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r3,r11,-7856
	ctx.r3.s64 = ctx.r11.s64 + -7856;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240E174"))) PPC_WEAK_FUNC(sub_8240E174);
PPC_FUNC_IMPL(__imp__sub_8240E174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240E178"))) PPC_WEAK_FUNC(sub_8240E178);
PPC_FUNC_IMPL(__imp__sub_8240E178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240E180;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,26464
	ctx.r11.s64 = ctx.r11.s64 + 26464;
	// li r29,84
	ctx.r29.s64 = 84;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
loc_8240E19C:
	// lwz r11,-3932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3932);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x8241dd2c
	ctx.lr = 0x8240E1A8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,-3932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3932);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240e1ec
	if (ctx.cr6.eq) goto loc_8240E1EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r31,-12
	ctx.r6.s64 = ctx.r31.s64 + -12;
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82412760
	ctx.lr = 0x8240E1D0;
	sub_82412760(ctx, base);
	// lwz r11,-3932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3932);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x8241dd3c
	ctx.lr = 0x8240E1DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-3932(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3932);
	// bl 0x82410288
	ctx.lr = 0x8240E1E8;
	sub_82410288(ctx, base);
	// b 0x8240e1fc
	goto loc_8240E1FC;
loc_8240E1EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// stw r10,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r10.u32);
	// bl 0x8241dd3c
	ctx.lr = 0x8240E1FC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8240E1FC:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r29,100
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 100, ctx.xer);
	// blt cr6,0x8240e19c
	if (ctx.cr6.lt) goto loc_8240E19C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8240E218"))) PPC_WEAK_FUNC(sub_8240E218);
PPC_FUNC_IMPL(__imp__sub_8240E218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240E220;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,26464
	ctx.r11.s64 = ctx.r11.s64 + 26464;
	// li r29,84
	ctx.r29.s64 = 84;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
loc_8240E23C:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240e28c
	if (ctx.cr6.eq) goto loc_8240E28C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-3932(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3932);
	// bl 0x824101e8
	ctx.lr = 0x8240E254;
	sub_824101E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8240e28c
	if (ctx.cr0.lt) goto loc_8240E28C;
	// lwz r11,-3932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3932);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x8241dd2c
	ctx.lr = 0x8240E268;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,-3932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3932);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82412648
	ctx.lr = 0x8240E280;
	sub_82412648(ctx, base);
	// lwz r11,-3932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3932);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x8241dd3c
	ctx.lr = 0x8240E28C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8240E28C:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r29,100
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 100, ctx.xer);
	// blt cr6,0x8240e23c
	if (ctx.cr6.lt) goto loc_8240E23C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8240E2A8"))) PPC_WEAK_FUNC(sub_8240E2A8);
PPC_FUNC_IMPL(__imp__sub_8240E2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,10260
	ctx.r3.s64 = ctx.r10.s64 + 10260;
	// bl 0x8241e68c
	ctx.lr = 0x8240E2DC;
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8240e2f4
	if (ctx.cr0.lt) goto loc_8240E2F4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8241e57c
	ctx.lr = 0x8240E2F4;
	__imp__XexGetProcedureAddress(ctx, base);
loc_8240E2F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240E30C"))) PPC_WEAK_FUNC(sub_8240E30C);
PPC_FUNC_IMPL(__imp__sub_8240E30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240E310"))) PPC_WEAK_FUNC(sub_8240E310);
PPC_FUNC_IMPL(__imp__sub_8240E310) {
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
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r31,r11,-4060
	ctx.r31.s64 = ctx.r11.s64 + -4060;
	// lwz r11,-4060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240e34c
	if (!ctx.cr6.eq) goto loc_8240E34C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,792
	ctx.r3.s64 = 792;
	// bl 0x8240e2a8
	ctx.lr = 0x8240E340;
	sub_8240E2A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e35c
	if (ctx.cr6.eq) goto loc_8240E35C;
loc_8240E34C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240E358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8240e360
	goto loc_8240E360;
loc_8240E35C:
	// li r3,2
	ctx.r3.s64 = 2;
loc_8240E360:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8240E374"))) PPC_WEAK_FUNC(sub_8240E374);
PPC_FUNC_IMPL(__imp__sub_8240E374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240E378"))) PPC_WEAK_FUNC(sub_8240E378);
PPC_FUNC_IMPL(__imp__sub_8240E378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8240E380;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-4056
	ctx.r31.s64 = ctx.r11.s64 + -4056;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-4056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4056);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240e3b8
	if (!ctx.cr6.eq) goto loc_8240E3B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,794
	ctx.r3.s64 = 794;
	// bl 0x8240e2a8
	ctx.lr = 0x8240E3AC;
	sub_8240E2A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e3d0
	if (ctx.cr6.eq) goto loc_8240E3D0;
loc_8240E3B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240E3CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8240e3d8
	goto loc_8240E3D8;
loc_8240E3D0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1167
	ctx.r3.u64 = ctx.r3.u64 | 1167;
loc_8240E3D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8240E3E0"))) PPC_WEAK_FUNC(sub_8240E3E0);
PPC_FUNC_IMPL(__imp__sub_8240E3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240E3E8;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82088070
	ctx.lr = 0x8240E40C;
	sub_82088070(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824119c8
	ctx.lr = 0x8240E424;
	sub_824119C8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8240e454
	if (!ctx.cr0.lt) goto loc_8240E454;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240e474
	if (ctx.cr6.eq) goto loc_8240E474;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240E448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8240e474
	goto loc_8240E474;
loc_8240E454:
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r8,r9,-4068
	ctx.r8.s64 = ctx.r9.s64 + -4068;
	// addi r11,r11,-7816
	ctx.r11.s64 = ctx.r11.s64 + -7816;
	// addi r10,r10,-7656
	ctx.r10.s64 = ctx.r10.s64 + -7656;
	// stw r11,-4068(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4068, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_8240E474:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8240E480"))) PPC_WEAK_FUNC(sub_8240E480);
PPC_FUNC_IMPL(__imp__sub_8240E480) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8240e3e0
	sub_8240E3E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240E48C"))) PPC_WEAK_FUNC(sub_8240E48C);
PPC_FUNC_IMPL(__imp__sub_8240E48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240E490"))) PPC_WEAK_FUNC(sub_8240E490);
PPC_FUNC_IMPL(__imp__sub_8240E490) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240E4B8"))) PPC_WEAK_FUNC(sub_8240E4B8);
PPC_FUNC_IMPL(__imp__sub_8240E4B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240E4E0"))) PPC_WEAK_FUNC(sub_8240E4E0);
PPC_FUNC_IMPL(__imp__sub_8240E4E0) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8240e558
	if (!ctx.cr6.eq) goto loc_8240E558;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240e558
	if (ctx.cr6.eq) goto loc_8240E558;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
loc_8240E50C:
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8240e524
	if (ctx.cr6.eq) goto loc_8240E524;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8240e548
	if (ctx.cr6.eq) goto loc_8240E548;
loc_8240E524:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8240e50c
	if (ctx.cr6.lt) goto loc_8240E50C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240E538:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8240e55c
	goto loc_8240E55C;
loc_8240E548:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8240edc8
	ctx.lr = 0x8240E554;
	sub_8240EDC8(ctx, base);
	// b 0x8240e538
	goto loc_8240E538;
loc_8240E558:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8240E55C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240E56C"))) PPC_WEAK_FUNC(sub_8240E56C);
PPC_FUNC_IMPL(__imp__sub_8240E56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240E570"))) PPC_WEAK_FUNC(sub_8240E570);
PPC_FUNC_IMPL(__imp__sub_8240E570) {
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
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x824130a0
	ctx.lr = 0x8240E584;
	sub_824130A0(ctx, base);
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

__attribute__((alias("__imp__sub_8240E598"))) PPC_WEAK_FUNC(sub_8240E598);
PPC_FUNC_IMPL(__imp__sub_8240E598) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x824130d0
	ctx.lr = 0x8240E5AC;
	sub_824130D0(ctx, base);
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

__attribute__((alias("__imp__sub_8240E5C0"))) PPC_WEAK_FUNC(sub_8240E5C0);
PPC_FUNC_IMPL(__imp__sub_8240E5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8240E5C8;
	sub_82248768(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r24,r3,8
	ctx.r24.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r25,8(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_8240E5FC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e638
	if (ctx.cr6.eq) goto loc_8240E638;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8240e620
	if (!ctx.cr6.eq) goto loc_8240E620;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8240e624
	goto loc_8240E624;
loc_8240E620:
	// stw r21,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
loc_8240E624:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e63c
	if (ctx.cr6.eq) goto loc_8240E63C;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// b 0x8240e63c
	goto loc_8240E63C;
loc_8240E638:
	// stw r21,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
loc_8240E63C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8240e5fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240E5FC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8240e794
	if (ctx.cr6.eq) goto loc_8240E794;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8240e794
	if (ctx.cr6.eq) goto loc_8240E794;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// b 0x8240e78c
	goto loc_8240E78C;
loc_8240E660:
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8240e794
	if (ctx.cr6.eq) goto loc_8240E794;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8240e794
	if (ctx.cr6.eq) goto loc_8240E794;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r30,r31,1408
	ctx.r30.s64 = ctx.r31.s64 + 1408;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,24(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82248a40
	ctx.lr = 0x8240E698;
	sub_82248A40(ctx, base);
	// addi r29,r31,2048
	ctx.r29.s64 = ctx.r31.s64 + 2048;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82413110
	ctx.lr = 0x8240E6B0;
	sub_82413110(ctx, base);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// li r26,2
	ctx.r26.s64 = 2;
loc_8240E6C0:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240e734
	if (ctx.cr6.eq) goto loc_8240E734;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82248a40
	ctx.lr = 0x8240E6E8;
	sub_82248A40(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8240e704
	if (!ctx.cr6.lt) goto loc_8240E704;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8240E704:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8240e734
	if (!ctx.cr6.eq) goto loc_8240E734;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8240ede8
	ctx.lr = 0x8240E724;
	sub_8240EDE8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8240e734
	if (!ctx.cr0.eq) goto loc_8240E734;
	// addi r20,r20,-1
	ctx.r20.s64 = ctx.r20.s64 + -1;
loc_8240E734:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8240e6c0
	if (!ctx.cr0.eq) goto loc_8240E6C0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8240e768
	if (!ctx.cr6.lt) goto loc_8240E768;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8240E768:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8240e78c
	if (!ctx.cr6.eq) goto loc_8240E78C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8240ede8
	ctx.lr = 0x8240E788;
	sub_8240EDE8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8240E78C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x8240e660
	if (!ctx.cr6.eq) goto loc_8240E660;
loc_8240E794:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8240E7A0"))) PPC_WEAK_FUNC(sub_8240E7A0);
PPC_FUNC_IMPL(__imp__sub_8240E7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x8240E7A8;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r23,r3,8
	ctx.r23.s64 = ctx.r3.s64 + 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r24,8(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_8240E7DC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e818
	if (ctx.cr6.eq) goto loc_8240E818;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8240e800
	if (!ctx.cr6.eq) goto loc_8240E800;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8240e804
	goto loc_8240E804;
loc_8240E800:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8240E804:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e81c
	if (ctx.cr6.eq) goto loc_8240E81C;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// b 0x8240e81c
	goto loc_8240E81C;
loc_8240E818:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8240E81C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8240e7dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240E7DC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8240e9ac
	if (ctx.cr6.eq) goto loc_8240E9AC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8240e9ac
	if (ctx.cr6.eq) goto loc_8240E9AC;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// b 0x8240e9a4
	goto loc_8240E9A4;
loc_8240E840:
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8240e9ac
	if (ctx.cr6.eq) goto loc_8240E9AC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8240e9ac
	if (ctx.cr6.eq) goto loc_8240E9AC;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r31,r26,1664
	ctx.r31.s64 = ctx.r26.s64 + 1664;
	// lwz r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,24(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82248a40
	ctx.lr = 0x8240E878;
	sub_82248A40(ctx, base);
	// addi r29,r26,1024
	ctx.r29.s64 = ctx.r26.s64 + 1024;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r26,32
	ctx.r3.s64 = ctx.r26.s64 + 32;
	// bl 0x824137e0
	ctx.lr = 0x8240E890;
	sub_824137E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240e8a8
	if (ctx.cr0.eq) goto loc_8240E8A8;
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248f70
	ctx.lr = 0x8240E8A8;
	sub_82248F70(ctx, base);
loc_8240E8A8:
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// li r25,2
	ctx.r25.s64 = 2;
loc_8240E8B4:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8240e954
	if (ctx.cr6.eq) goto loc_8240E954;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,640
	ctx.r30.s64 = 640;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,640
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 640, ctx.xer);
	// bgt cr6,0x8240e8ec
	if (ctx.cr6.gt) goto loc_8240E8EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8240E8EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82248a40
	ctx.lr = 0x8240E908;
	sub_82248A40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8240e924
	if (!ctx.cr6.lt) goto loc_8240E924;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8240E924:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8240e954
	if (!ctx.cr6.eq) goto loc_8240E954;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8240ede8
	ctx.lr = 0x8240E944;
	sub_8240EDE8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8240e954
	if (!ctx.cr0.eq) goto loc_8240E954;
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
loc_8240E954:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8240e8b4
	if (!ctx.cr0.eq) goto loc_8240E8B4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,640
	ctx.r9.s64 = ctx.r9.s64 + 640;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8240e980
	if (!ctx.cr6.lt) goto loc_8240E980;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8240E980:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8240e9a4
	if (!ctx.cr6.eq) goto loc_8240E9A4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x8240ede8
	ctx.lr = 0x8240E9A0;
	sub_8240EDE8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_8240E9A4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x8240e840
	if (!ctx.cr6.eq) goto loc_8240E840;
loc_8240E9AC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8240E9B8"))) PPC_WEAK_FUNC(sub_8240E9B8);
PPC_FUNC_IMPL(__imp__sub_8240E9B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x8240e9cc
	if (!ctx.cr6.eq) goto loc_8240E9CC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8240e9d8
	goto loc_8240E9D8;
loc_8240E9CC:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
loc_8240E9D8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8240ee68
	sub_8240EE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8240E9E0"))) PPC_WEAK_FUNC(sub_8240E9E0);
PPC_FUNC_IMPL(__imp__sub_8240E9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240E9E8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_8240EA00:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240ea18
	if (ctx.cr6.eq) goto loc_8240EA18;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8240ea44
	if (ctx.cr6.eq) goto loc_8240EA44;
loc_8240EA18:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8240ea00
	if (ctx.cr6.lt) goto loc_8240EA00;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8240EA2C:
	// subf r30,r29,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r29.s64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8240ea80
	if (ctx.cr6.eq) goto loc_8240EA80;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8240ea78
	goto loc_8240EA78;
loc_8240EA44:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x8240ea2c
	goto loc_8240EA2C;
loc_8240EA4C:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240ea80
	if (ctx.cr6.eq) goto loc_8240EA80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8240ede8
	ctx.lr = 0x8240EA74;
	sub_8240EDE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8240EA78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8240ea4c
	if (!ctx.cr6.eq) goto loc_8240EA4C;
loc_8240EA80:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8240eab8
	if (!ctx.cr6.eq) goto loc_8240EAB8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240eab0
	if (ctx.cr6.eq) goto loc_8240EAB0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8240EAA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8240eaf8
	goto loc_8240EAF8;
loc_8240EAB0:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x8240eaf8
	goto loc_8240EAF8;
loc_8240EAB8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8240eaf0
	goto loc_8240EAF0;
loc_8240EAC4:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240eaf8
	if (ctx.cr6.eq) goto loc_8240EAF8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8240ede8
	ctx.lr = 0x8240EAEC;
	sub_8240EDE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8240EAF0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8240eac4
	if (!ctx.cr6.eq) goto loc_8240EAC4;
loc_8240EAF8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8240EB04"))) PPC_WEAK_FUNC(sub_8240EB04);
PPC_FUNC_IMPL(__imp__sub_8240EB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240EB08"))) PPC_WEAK_FUNC(sub_8240EB08);
PPC_FUNC_IMPL(__imp__sub_8240EB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8240EB10;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240eb34
	if (ctx.cr6.eq) goto loc_8240EB34;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
loc_8240EB34:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8240eb40
	if (ctx.cr6.eq) goto loc_8240EB40;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
loc_8240EB40:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r31,r9,1
	ctx.r31.u64 = ctx.r9.u64 | 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240eba4
	if (ctx.cr6.eq) goto loc_8240EBA4;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240eb84
	if (ctx.cr6.eq) goto loc_8240EB84;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240eba4
	if (ctx.cr6.eq) goto loc_8240EBA4;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8240ede8
	ctx.lr = 0x8240EB80;
	sub_8240EDE8(ctx, base);
	// b 0x8240eba4
	goto loc_8240EBA4;
loc_8240EB84:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240eba4
	if (ctx.cr6.eq) goto loc_8240EBA4;
loc_8240EB8C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8240ede8
	ctx.lr = 0x8240EB9C;
	sub_8240EDE8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8240eb8c
	if (!ctx.cr0.eq) goto loc_8240EB8C;
loc_8240EBA4:
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
loc_8240EBA8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240ebf0
	if (ctx.cr6.eq) goto loc_8240EBF0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8240ebc4
	if (ctx.cr6.eq) goto loc_8240EBC4;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8240ebf0
	if (!ctx.cr6.eq) goto loc_8240EBF0;
loc_8240EBC4:
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8240ec04
	if (!ctx.cr6.eq) goto loc_8240EC04;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240ebf0
	if (ctx.cr6.eq) goto loc_8240EBF0;
loc_8240EBD8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8240ede8
	ctx.lr = 0x8240EBE8;
	sub_8240EDE8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8240ebd8
	if (!ctx.cr0.eq) goto loc_8240EBD8;
loc_8240EBF0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x8240eba8
	if (ctx.cr6.lt) goto loc_8240EBA8;
	// b 0x8240ec2c
	goto loc_8240EC2C;
loc_8240EC04:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240ec2c
	if (ctx.cr6.eq) goto loc_8240EC2C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x8240ede8
	ctx.lr = 0x8240EC2C;
	sub_8240EDE8(ctx, base);
loc_8240EC2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8240EC38"))) PPC_WEAK_FUNC(sub_8240EC38);
PPC_FUNC_IMPL(__imp__sub_8240EC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240EC40;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240ecd8
	if (ctx.cr6.eq) goto loc_8240ECD8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8240eb08
	ctx.lr = 0x8240EC60;
	sub_8240EB08(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240ec8c
	if (ctx.cr6.eq) goto loc_8240EC8C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240ec88
	if (ctx.cr6.eq) goto loc_8240EC88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240EC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8240EC88:
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
loc_8240EC8C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240eca0
	if (ctx.cr6.eq) goto loc_8240ECA0;
	// bl 0x8240ef08
	ctx.lr = 0x8240EC9C;
	sub_8240EF08(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_8240ECA0:
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// li r29,2
	ctx.r29.s64 = 2;
loc_8240ECA8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240ecbc
	if (ctx.cr6.eq) goto loc_8240ECBC;
	// bl 0x8240ef08
	ctx.lr = 0x8240ECB8;
	sub_8240EF08(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8240ECBC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8240eca8
	if (!ctx.cr0.eq) goto loc_8240ECA8;
	// lis r4,25738
	ctx.r4.s64 = 1686765568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// bl 0x82086968
	ctx.lr = 0x8240ECD8;
	sub_82086968(ctx, base);
loc_8240ECD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8240ECE0"))) PPC_WEAK_FUNC(sub_8240ECE0);
PPC_FUNC_IMPL(__imp__sub_8240ECE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8240ECE8;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r4,25738
	ctx.r4.s64 = 1686765568;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x82086c98
	ctx.lr = 0x8240ED10;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8240ed24
	if (!ctx.cr0.eq) goto loc_8240ED24;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x8240eda8
	goto loc_8240EDA8;
loc_8240ED24:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240eff0
	ctx.lr = 0x8240ED34;
	sub_8240EFF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8240eda8
	if (ctx.cr0.lt) goto loc_8240EDA8;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_8240ED44:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240ed60
	if (ctx.cr6.eq) goto loc_8240ED60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8240eff0
	ctx.lr = 0x8240ED58;
	sub_8240EFF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8240eda8
	if (ctx.cr0.lt) goto loc_8240EDA8;
loc_8240ED60:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// blt cr6,0x8240ed44
	if (ctx.cr6.lt) goto loc_8240ED44;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240ed9c
	if (ctx.cr6.eq) goto loc_8240ED9C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240ED94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8240eda0
	goto loc_8240EDA0;
loc_8240ED9C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8240EDA0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8240edb4
	if (!ctx.cr6.lt) goto loc_8240EDB4;
loc_8240EDA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240ec38
	ctx.lr = 0x8240EDB0;
	sub_8240EC38(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8240EDB4:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8240EDC4"))) PPC_WEAK_FUNC(sub_8240EDC4);
PPC_FUNC_IMPL(__imp__sub_8240EDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240EDC8"))) PPC_WEAK_FUNC(sub_8240EDC8);
PPC_FUNC_IMPL(__imp__sub_8240EDC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8240eddc
	goto loc_8240EDDC;
loc_8240EDD4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8240EDDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240edd4
	if (!ctx.cr6.eq) goto loc_8240EDD4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240EDE8"))) PPC_WEAK_FUNC(sub_8240EDE8);
PPC_FUNC_IMPL(__imp__sub_8240EDE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,259
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 259, ctx.xer);
	// bne cr6,0x8240ee04
	if (!ctx.cr6.eq) goto loc_8240EE04;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8240EE04:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8240ee40
	if (!ctx.cr6.eq) goto loc_8240EE40;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240ee40
	if (ctx.cr6.eq) goto loc_8240EE40;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8240ee34
	if (!ctx.cr6.eq) goto loc_8240EE34;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8240EE34:
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_8240EE40:
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240ee58
	if (ctx.cr6.eq) goto loc_8240EE58;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// b 0x8240ee5c
	goto loc_8240EE5C;
loc_8240EE58:
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
loc_8240EE5C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240EE68"))) PPC_WEAK_FUNC(sub_8240EE68);
PPC_FUNC_IMPL(__imp__sub_8240EE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240EE70;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8240eee4
	if (ctx.cr6.eq) goto loc_8240EEE4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8240ee9c
	if (!ctx.cr6.eq) goto loc_8240EE9C;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
loc_8240EE9C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// bl 0x82088070
	ctx.lr = 0x8240EEB8;
	sub_82088070(ctx, base);
	// li r10,259
	ctx.r10.s64 = 259;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240eef0
	if (ctx.cr6.eq) goto loc_8240EEF0;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x8240eef4
	goto loc_8240EEF4;
loc_8240EEE4:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,122
	ctx.r28.u64 = ctx.r28.u64 | 122;
	// b 0x8240eef8
	goto loc_8240EEF8;
loc_8240EEF0:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8240EEF4:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_8240EEF8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8240EF04"))) PPC_WEAK_FUNC(sub_8240EF04);
PPC_FUNC_IMPL(__imp__sub_8240EF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240EF08"))) PPC_WEAK_FUNC(sub_8240EF08);
PPC_FUNC_IMPL(__imp__sub_8240EF08) {
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
	// beq cr6,0x8240ef54
	if (ctx.cr6.eq) goto loc_8240EF54;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240ef44
	if (ctx.cr6.eq) goto loc_8240EF44;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82086968
	ctx.lr = 0x8240EF3C;
	sub_82086968(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8240EF44:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// bl 0x82086968
	ctx.lr = 0x8240EF54;
	sub_82086968(ctx, base);
loc_8240EF54:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8240EF68"))) PPC_WEAK_FUNC(sub_8240EF68);
PPC_FUNC_IMPL(__imp__sub_8240EF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8240efd4
	if (ctx.cr6.eq) goto loc_8240EFD4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240efa8
	if (ctx.cr6.eq) goto loc_8240EFA8;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82086968
	ctx.lr = 0x8240EFA4;
	sub_82086968(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8240EFA8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240efc4
	if (ctx.cr6.eq) goto loc_8240EFC4;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x82086968
	ctx.lr = 0x8240EFC0;
	sub_82086968(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8240EFC4:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32774
	ctx.r4.u64 = ctx.r4.u64 | 32774;
	// bl 0x82086968
	ctx.lr = 0x8240EFD4;
	sub_82086968(ctx, base);
loc_8240EFD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240EFEC"))) PPC_WEAK_FUNC(sub_8240EFEC);
PPC_FUNC_IMPL(__imp__sub_8240EFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240EFF0"))) PPC_WEAK_FUNC(sub_8240EFF0);
PPC_FUNC_IMPL(__imp__sub_8240EFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240EFF8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82086c98
	ctx.lr = 0x8240F018;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8240f044
	if (!ctx.cr0.eq) goto loc_8240F044;
loc_8240F020:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// bl 0x8240ef08
	ctx.lr = 0x8240F030;
	sub_8240EF08(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8240F034:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8240F044:
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82086c98
	ctx.lr = 0x8240F058;
	sub_82086C98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// beq 0x8240f020
	if (ctx.cr0.eq) goto loc_8240F020;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240f034
	if (ctx.cr6.eq) goto loc_8240F034;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8240F074:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240f09c
	if (ctx.cr6.eq) goto loc_8240F09C;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// b 0x8240f0a0
	goto loc_8240F0A0;
loc_8240F09C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8240F0A0:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bdnz 0x8240f074
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240F074;
	// b 0x8240f034
	goto loc_8240F034;
}

__attribute__((alias("__imp__sub_8240F0AC"))) PPC_WEAK_FUNC(sub_8240F0AC);
PPC_FUNC_IMPL(__imp__sub_8240F0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240F0B0"))) PPC_WEAK_FUNC(sub_8240F0B0);
PPC_FUNC_IMPL(__imp__sub_8240F0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8240F0B8;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// ori r4,r4,32774
	ctx.r4.u64 = ctx.r4.u64 | 32774;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82086c98
	ctx.lr = 0x8240F0E4;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8240f178
	if (ctx.cr0.eq) goto loc_8240F178;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mullw r26,r29,r30
	ctx.r26.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82086c98
	ctx.lr = 0x8240F104;
	sub_82086C98(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mullw r3,r28,r30
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x82086c98
	ctx.lr = 0x8240F118;
	sub_82086C98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240f178
	if (ctx.cr6.eq) goto loc_8240F178;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240f178
	if (ctx.cr6.eq) goto loc_8240F178;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240f18c
	if (ctx.cr6.eq) goto loc_8240F18C;
	// subf r8,r27,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r27.s64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8240F144:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// bdnz 0x8240f144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240F144;
	// b 0x8240f18c
	goto loc_8240F18C;
loc_8240F178:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// bl 0x8240ef68
	ctx.lr = 0x8240F188;
	sub_8240EF68(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8240F18C:
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8240F19C"))) PPC_WEAK_FUNC(sub_8240F19C);
PPC_FUNC_IMPL(__imp__sub_8240F19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240F1A0"))) PPC_WEAK_FUNC(sub_8240F1A0);
PPC_FUNC_IMPL(__imp__sub_8240F1A0) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240f210
	if (ctx.cr6.eq) goto loc_8240F210;
	// bl 0x82088600
	ctx.lr = 0x8240F1CC;
	sub_82088600(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r9,40
	ctx.r9.s64 = 40;
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x8240f210
	if (ctx.cr6.lt) goto loc_8240F210;
	// li r30,1
	ctx.r30.s64 = 1;
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
loc_8240F210:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8240F230"))) PPC_WEAK_FUNC(sub_8240F230);
PPC_FUNC_IMPL(__imp__sub_8240F230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// li r9,20
	ctx.r9.s64 = 20;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// divdu r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 / ctx.r9.u64;
	// lhz r9,70(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 70);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// std r6,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// srawi r10,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r11,2048
	ctx.r10.s64 = ctx.r11.s64 + 2048;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r10,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 11;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r7,r3,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// bge cr6,0x8240f2dc
	if (!ctx.cr6.lt) goto loc_8240F2DC;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8240f2c8
	if (ctx.cr6.lt) goto loc_8240F2C8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8240f318
	if (!ctx.cr6.gt) goto loc_8240F318;
loc_8240F2C8:
	// lwz r11,376(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 376);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 376, ctx.r11.u32);
	// blr 
	return;
loc_8240F2DC:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8240f2ec
	if (!ctx.cr6.lt) goto loc_8240F2EC;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8240f2c8
	if (ctx.cr6.gt) goto loc_8240F2C8;
loc_8240F2EC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8240f310
	if (!ctx.cr6.lt) goto loc_8240F310;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8240f304
	if (ctx.cr6.gt) goto loc_8240F304;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8240f320
	if (!ctx.cr6.gt) goto loc_8240F320;
loc_8240F304:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8240F308:
	// stw r6,376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 376, ctx.r6.u32);
	// blr 
	return;
loc_8240F310:
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8240f320
	if (ctx.cr6.gt) goto loc_8240F320;
loc_8240F318:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240f304
	if (ctx.cr6.lt) goto loc_8240F304;
loc_8240F320:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// ld r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// srawi r9,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 11;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// b 0x8240f308
	goto loc_8240F308;
}

__attribute__((alias("__imp__sub_8240F358"))) PPC_WEAK_FUNC(sub_8240F358);
PPC_FUNC_IMPL(__imp__sub_8240F358) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,392
	ctx.r10.s64 = ctx.r3.s64 + 392;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240f3b8
	if (ctx.cr6.eq) goto loc_8240F3B8;
	// ld r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
loc_8240F378:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x8240f398
	if (ctx.cr6.lt) goto loc_8240F398;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240f378
	if (!ctx.cr6.eq) goto loc_8240F378;
loc_8240F398:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240f3dc
	if (!ctx.cr6.eq) goto loc_8240F3DC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240f3b8
	if (ctx.cr6.eq) goto loc_8240F3B8;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8240f418
	if (ctx.cr6.eq) goto loc_8240F418;
loc_8240F3B8:
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240f3d0
	if (ctx.cr6.eq) goto loc_8240F3D0;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// b 0x8240f3d4
	goto loc_8240F3D4;
loc_8240F3D0:
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
loc_8240F3D4:
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_8240F3DC:
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8240f418
	if (ctx.cr6.eq) goto loc_8240F418;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8240f408
	if (!ctx.cr6.eq) goto loc_8240F408;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8240f3d4
	goto loc_8240F3D4;
loc_8240F408:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_8240F418:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240F424"))) PPC_WEAK_FUNC(sub_8240F424);
PPC_FUNC_IMPL(__imp__sub_8240F424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240F428"))) PPC_WEAK_FUNC(sub_8240F428);
PPC_FUNC_IMPL(__imp__sub_8240F428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 68);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// addi r10,r3,392
	ctx.r10.s64 = ctx.r3.s64 + 392;
	// addi r7,r7,2048
	ctx.r7.s64 = ctx.r7.s64 + 2048;
	// stw r9,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r9.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r9,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r9.u32);
	// srawi r8,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 11;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8240f48c
	if (!ctx.cr6.eq) goto loc_8240F48C;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_8240F48C:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r7,r3,384
	ctx.r7.s64 = ctx.r3.s64 + 384;
loc_8240F4A4:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8240f4bc
	if (ctx.cr6.eq) goto loc_8240F4BC;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// b 0x8240f4c0
	goto loc_8240F4C0;
loc_8240F4BC:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_8240F4C0:
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8240f4e0
	if (!ctx.cr6.eq) goto loc_8240F4E0;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_8240F4E0:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x8240f4a4
	if (!ctx.cr6.eq) goto loc_8240F4A4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240F4F8"))) PPC_WEAK_FUNC(sub_8240F4F8);
PPC_FUNC_IMPL(__imp__sub_8240F4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8240F500;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,312(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r8,72(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// lhz r7,68(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 68);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f13,29648(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 29648);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// fdiv f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x8240f550
	if (!ctx.cr6.lt) goto loc_8240F550;
	// fdiv f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 / ctx.f0.f64;
	// b 0x8240f554
	goto loc_8240F554;
loc_8240F550:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_8240F554:
	// lfd f11,288(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// fmul f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8240f568
	if (ctx.cr6.lt) goto loc_8240F568;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8240F568:
	// fsub f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// addi r11,r10,10
	ctx.r11.s64 = ctx.r10.s64 + 10;
	// fmul f12,f0,f12
	ctx.f12.f64 = ctx.f0.f64 * ctx.f12.f64;
	// stfd f0,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.f0.u64);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r26,0
	ctx.r26.s64 = 0;
	// lfdx f0,r11,r31
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// fmadd f0,f13,f0,f12
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64;
	// stfdx f0,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.f0.u64);
	// lfd f0,280(r31)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// stw r26,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r26.u32);
	// stw r26,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r26.u32);
	// lfdx f13,r11,r31
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8240f6c8
	if (!ctx.cr6.lt) goto loc_8240F6C8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240f724
	if (ctx.cr6.eq) goto loc_8240F724;
	// addi r11,r10,9
	ctx.r11.s64 = ctx.r10.s64 + 9;
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f12,r11,r31
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8240f724
	if (!ctx.cr6.lt) goto loc_8240F724;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r28,392(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// addi r30,r31,392
	ctx.r30.s64 = ctx.r31.s64 + 392;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// divdu r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 / ctx.r10.u64;
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// sth r10,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r10.u16);
	// beq cr6,0x8240f724
	if (ctx.cr6.eq) goto loc_8240F724;
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// ld r29,24(r27)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r27.u32 + 24);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x8240edc8
	ctx.lr = 0x8240F614;
	sub_8240EDC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240f724
	if (ctx.cr0.eq) goto loc_8240F724;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpld cr6,r11,r29
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, ctx.xer);
	// ble cr6,0x8240f724
	if (!ctx.cr6.gt) goto loc_8240F724;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r29,20
	ctx.r10.s64 = ctx.r29.s64 + 20;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240f6b8
	if (ctx.cr6.eq) goto loc_8240F6B8;
loc_8240F63C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x8240f660
	if (ctx.cr6.gt) goto loc_8240F660;
	// bne cr6,0x8240f654
	if (!ctx.cr6.eq) goto loc_8240F654;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8240F654:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240f63c
	if (!ctx.cr6.eq) goto loc_8240F63C;
loc_8240F660:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8240f6b8
	if (ctx.cr6.eq) goto loc_8240F6B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240f690
	if (ctx.cr6.eq) goto loc_8240F690;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8240f684
	if (!ctx.cr6.eq) goto loc_8240F684;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
loc_8240F684:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_8240F690:
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// addi r11,r31,384
	ctx.r11.s64 = ctx.r31.s64 + 384;
	// lwz r10,388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240f6ac
	if (ctx.cr6.eq) goto loc_8240F6AC;
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// b 0x8240f6b0
	goto loc_8240F6B0;
loc_8240F6AC:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_8240F6B0:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x8240f724
	goto loc_8240F724;
loc_8240F6B8:
	// ld r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 24);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// std r11,24(r27)
	PPC_STORE_U64(ctx.r27.u32 + 24, ctx.r11.u64);
	// b 0x8240f724
	goto loc_8240F724;
loc_8240F6C8:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bge cr6,0x8240f724
	if (!ctx.cr6.lt) goto loc_8240F724;
	// addi r11,r10,11
	ctx.r11.s64 = ctx.r10.s64 + 11;
	// fsub f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f12,r11,r31
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8240f724
	if (!ctx.cr6.lt) goto loc_8240F724;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8240f724
	if (ctx.cr6.eq) goto loc_8240F724;
	// addi r10,r11,-20
	ctx.r10.s64 = ctx.r11.s64 + -20;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// divdu r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 / ctx.r9.u64;
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// sth r10,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r10.u16);
loc_8240F724:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8240F72C"))) PPC_WEAK_FUNC(sub_8240F72C);
PPC_FUNC_IMPL(__imp__sub_8240F72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240F730"))) PPC_WEAK_FUNC(sub_8240F730);
PPC_FUNC_IMPL(__imp__sub_8240F730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8240F738;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r3,412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// bl 0x8240e9b8
	ctx.lr = 0x8240F770;
	sub_8240E9B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8240f794
	if (!ctx.cr0.lt) goto loc_8240F794;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8240f7bc
	goto loc_8240F7BC;
loc_8240F794:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,400
	ctx.r11.s64 = ctx.r29.s64 + 400;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,404(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240f7b4
	if (ctx.cr6.eq) goto loc_8240F7B4;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// b 0x8240f7b8
	goto loc_8240F7B8;
loc_8240F7B4:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_8240F7B8:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_8240F7BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8240F7C4"))) PPC_WEAK_FUNC(sub_8240F7C4);
PPC_FUNC_IMPL(__imp__sub_8240F7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240F7C8"))) PPC_WEAK_FUNC(sub_8240F7C8);
PPC_FUNC_IMPL(__imp__sub_8240F7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8240f824
	if (ctx.cr6.eq) goto loc_8240F824;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8240f808
	if (ctx.cr6.eq) goto loc_8240F808;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82086968
	ctx.lr = 0x8240F804;
	sub_82086968(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8240F808:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8240ef68
	ctx.lr = 0x8240F810;
	sub_8240EF68(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32787
	ctx.r4.u64 = ctx.r4.u64 | 32787;
	// bl 0x82086968
	ctx.lr = 0x8240F824;
	sub_82086968(ctx, base);
loc_8240F824:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240F83C"))) PPC_WEAK_FUNC(sub_8240F83C);
PPC_FUNC_IMPL(__imp__sub_8240F83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240F840"))) PPC_WEAK_FUNC(sub_8240F840);
PPC_FUNC_IMPL(__imp__sub_8240F840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240F848;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// bl 0x8240f1a0
	ctx.lr = 0x8240F85C;
	sub_8240F1A0(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8240f9b4
	if (ctx.cr0.eq) goto loc_8240F9B4;
	// lwz r29,392(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// addi r31,r30,392
	ctx.r31.s64 = ctx.r30.s64 + 392;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8240f9b0
	if (ctx.cr6.eq) goto loc_8240F9B0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// ld r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x8240f92c
	if (ctx.cr6.eq) goto loc_8240F92C;
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r11.u32);
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240f9a8
	if (ctx.cr6.eq) goto loc_8240F9A8;
	// lwz r31,384(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// addi r29,r30,384
	ctx.r29.s64 = ctx.r30.s64 + 384;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8240f9e8
	if (ctx.cr6.eq) goto loc_8240F9E8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8240f8c4
	if (!ctx.cr6.eq) goto loc_8240F8C4;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
loc_8240F8C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,328
	ctx.r4.s64 = ctx.r30.s64 + 328;
	// li r5,42
	ctx.r5.s64 = 42;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82248a40
	ctx.lr = 0x8240F8E4;
	sub_82248A40(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,42
	ctx.r11.s64 = 42;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240f730
	ctx.lr = 0x8240F8FC;
	sub_8240F730(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x8240f9a0
	if (!ctx.cr0.lt) goto loc_8240F9A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// bne cr6,0x8240f9c8
	if (!ctx.cr6.eq) goto loc_8240F9C8;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// b 0x8240f9c8
	goto loc_8240F9C8;
loc_8240F92C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240f954
	if (ctx.cr6.eq) goto loc_8240F954;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8240f948
	if (!ctx.cr6.eq) goto loc_8240F948;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_8240F948:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_8240F954:
	// addi r3,r30,328
	ctx.r3.s64 = ctx.r30.s64 + 328;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82248a40
	ctx.lr = 0x8240F964;
	sub_82248A40(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240f730
	ctx.lr = 0x8240F978;
	sub_8240F730(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x8240f9bc
	if (!ctx.cr0.lt) goto loc_8240F9BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8240f9c8
	if (!ctx.cr6.eq) goto loc_8240F9C8;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// b 0x8240f9c8
	goto loc_8240F9C8;
loc_8240F9A0:
	// stw r27,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r27.u32);
	// b 0x8240f9c8
	goto loc_8240F9C8;
loc_8240F9A8:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x8240f9c8
	goto loc_8240F9C8;
loc_8240F9B0:
	// stw r27,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r27.u32);
loc_8240F9B4:
	// std r27,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r27.u64);
	// b 0x8240f9c8
	goto loc_8240F9C8;
loc_8240F9BC:
	// ld r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// std r11,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r11.u64);
loc_8240F9C8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8240f9e8
	if (ctx.cr6.lt) goto loc_8240F9E8;
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// stw r10,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r10.u32);
loc_8240F9E8:
	// ld r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// ble cr6,0x8240f9fc
	if (!ctx.cr6.gt) goto loc_8240F9FC;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// std r11,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r11.u64);
loc_8240F9FC:
	// lwz r31,400(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// addi r29,r30,400
	ctx.r29.s64 = ctx.r30.s64 + 400;
	// b 0x8240faa4
	goto loc_8240FAA4;
loc_8240FA08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x8240faac
	if (ctx.cr6.eq) goto loc_8240FAAC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240fa40
	if (ctx.cr6.eq) goto loc_8240FA40;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8240fa34
	if (!ctx.cr6.eq) goto loc_8240FA34;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
loc_8240FA34:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_8240FA40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82088070
	ctx.lr = 0x8240FA7C;
	sub_82088070(ctx, base);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r11,r30,384
	ctx.r11.s64 = ctx.r30.s64 + 384;
	// lwz r10,388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240fa98
	if (ctx.cr6.eq) goto loc_8240FA98;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x8240fa9c
	goto loc_8240FA9C;
loc_8240FA98:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8240FA9C:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8240FAA4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8240fa08
	if (!ctx.cr6.eq) goto loc_8240FA08;
loc_8240FAAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8240FAB8"))) PPC_WEAK_FUNC(sub_8240FAB8);
PPC_FUNC_IMPL(__imp__sub_8240FAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8240FAC0;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// rlwinm r29,r11,31,21,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FF;
	// rlwinm r30,r11,20,12,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8240fb14
	if (!ctx.cr6.eq) goto loc_8240FB14;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// bl 0x82088600
	ctx.lr = 0x8240FAF8;
	sub_82088600(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
	// sth r29,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r29.u16);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r25,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r25.u64);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_8240FB14:
	// lbz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 308);
	// clrlwi r27,r30,24
	ctx.r27.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8240fb30
	if (ctx.cr6.eq) goto loc_8240FB30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240f4f8
	ctx.lr = 0x8240FB2C;
	sub_8240F4F8(ctx, base);
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
loc_8240FB30:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240f230
	ctx.lr = 0x8240FB40;
	sub_8240F230(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// blt cr6,0x8240fb80
	if (ctx.cr6.lt) goto loc_8240FB80;
	// beq cr6,0x8240fc00
	if (ctx.cr6.eq) goto loc_8240FC00;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x8240fc38
	if (!ctx.cr6.lt) goto loc_8240FC38;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8240fc34
	if (!ctx.cr6.lt) goto loc_8240FC34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240f428
	ctx.lr = 0x8240FB78;
	sub_8240F428(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8240f230
	ctx.lr = 0x8240FB80;
	sub_8240F230(ctx, base);
loc_8240FB80:
	// lwz r30,384(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r29,r31,384
	ctx.r29.s64 = ctx.r31.s64 + 384;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240fc34
	if (ctx.cr6.eq) goto loc_8240FC34;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8240fba0
	if (!ctx.cr6.eq) goto loc_8240FBA0;
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
loc_8240FBA0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82248a40
	ctx.lr = 0x8240FBCC;
	sub_82248A40(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// bl 0x8240f358
	ctx.lr = 0x8240FBE0;
	sub_8240F358(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x8240fc38
	if (!ctx.cr0.lt) goto loc_8240FC38;
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240fc20
	if (ctx.cr6.eq) goto loc_8240FC20;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// b 0x8240fc24
	goto loc_8240FC24;
loc_8240FC00:
	// lbz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 308);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8240fc38
	if (!ctx.cr6.eq) goto loc_8240FC38;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// b 0x8240fc38
	goto loc_8240FC38;
loc_8240FC20:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_8240FC24:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
loc_8240FC34:
	// li r28,1
	ctx.r28.s64 = 1;
loc_8240FC38:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8240FC44"))) PPC_WEAK_FUNC(sub_8240FC44);
PPC_FUNC_IMPL(__imp__sub_8240FC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240FC48"))) PPC_WEAK_FUNC(sub_8240FC48);
PPC_FUNC_IMPL(__imp__sub_8240FC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// ld r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// li r8,20
	ctx.r8.s64 = 20;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,392(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// divdu r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 / ctx.r8.u64;
	// addi r8,r3,392
	ctx.r8.s64 = ctx.r3.s64 + 392;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// sth r9,68(r3)
	PPC_STORE_U16(ctx.r3.u32 + 68, ctx.r9.u16);
	// std r11,296(r3)
	PPC_STORE_U64(ctx.r3.u32 + 296, ctx.r11.u64);
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// stb r11,308(r3)
	PPC_STORE_U8(ctx.r3.u32 + 308, ctx.r11.u8);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// beq cr6,0x8240fce0
	if (ctx.cr6.eq) goto loc_8240FCE0;
	// addi r7,r3,384
	ctx.r7.s64 = ctx.r3.s64 + 384;
loc_8240FC8C:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240fcb4
	if (ctx.cr6.eq) goto loc_8240FCB4;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8240fca8
	if (!ctx.cr6.eq) goto loc_8240FCA8;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
loc_8240FCA8:
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_8240FCB4:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240fccc
	if (ctx.cr6.eq) goto loc_8240FCCC;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x8240fcd0
	goto loc_8240FCD0;
loc_8240FCCC:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_8240FCD0:
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8240fc8c
	if (!ctx.cr6.eq) goto loc_8240FC8C;
loc_8240FCE0:
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8240FCEC:
	// ld r10,280(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 280);
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8240fcec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240FCEC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240FCFC"))) PPC_WEAK_FUNC(sub_8240FCFC);
PPC_FUNC_IMPL(__imp__sub_8240FCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240FD00"))) PPC_WEAK_FUNC(sub_8240FD00);
PPC_FUNC_IMPL(__imp__sub_8240FD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8240FD08;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// ori r4,r4,32787
	ctx.r4.u64 = ctx.r4.u64 | 32787;
	// bl 0x82086c98
	ctx.lr = 0x8240FD24;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne 0x8240fd54
	if (!ctx.cr0.eq) goto loc_8240FD54;
loc_8240FD30:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
loc_8240FD38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8240f7c8
	ctx.lr = 0x8240FD40;
	sub_8240F7C8(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8240FD44:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8240FD54:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// li r11,25
	ctx.r11.s64 = 25;
	// li r10,240
	ctx.r10.s64 = 240;
	// li r9,28
	ctx.r9.s64 = 28;
	// lfd f0,-3968(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -3968);
	// li r6,12
	ctx.r6.s64 = 12;
	// lfd f13,-3976(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + -3976);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,10
	ctx.r7.s64 = 10;
	// std r10,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r10.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// std r10,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r10.u64);
	// stfd f0,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.f0.u64);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stfd f13,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.f13.u64);
	// sth r6,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r6.u16);
	// sth r8,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r8.u16);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// sth r9,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r9.u16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r7,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r7.u32);
	// stw r5,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r5.u32);
loc_8240FDB8:
	// lfd f0,280(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// stfdu f0,8(r10)
	// bdnz 0x8240fdb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240FDB8;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x8240f0b0
	ctx.lr = 0x8240FDE4;
	sub_8240F0B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8240fd38
	if (ctx.cr0.lt) goto loc_8240FD38;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82086c98
	ctx.lr = 0x8240FE00;
	sub_82086C98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x8240fd30
	if (ctx.cr0.eq) goto loc_8240FD30;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240fd44
	if (!ctx.cr6.gt) goto loc_8240FD44;
	// addi r7,r31,384
	ctx.r7.s64 = ctx.r31.s64 + 384;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8240FE24:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8240fe60
	if (ctx.cr6.eq) goto loc_8240FE60;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x8240fe64
	goto loc_8240FE64;
loc_8240FE60:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_8240FE64:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8240fe24
	if (ctx.cr6.lt) goto loc_8240FE24;
	// b 0x8240fd44
	goto loc_8240FD44;
}

__attribute__((alias("__imp__sub_8240FE80"))) PPC_WEAK_FUNC(sub_8240FE80);
PPC_FUNC_IMPL(__imp__sub_8240FE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r3,r11,14048
	ctx.r3.s64 = ctx.r11.s64 + 14048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240FE8C"))) PPC_WEAK_FUNC(sub_8240FE8C);
PPC_FUNC_IMPL(__imp__sub_8240FE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8240FE90"))) PPC_WEAK_FUNC(sub_8240FE90);
PPC_FUNC_IMPL(__imp__sub_8240FE90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8240FEA0"))) PPC_WEAK_FUNC(sub_8240FEA0);
PPC_FUNC_IMPL(__imp__sub_8240FEA0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8240FEA8;
	sub_82248784(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8240ff28
	if (!ctx.cr6.eq) goto loc_8240FF28;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r31,292(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r10,r5,87
	ctx.r10.s64 = ctx.r5.s64 + 87;
	// addi r7,r11,300
	ctx.r7.s64 = ctx.r11.s64 + 300;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,348
	ctx.r29.s64 = ctx.r11.s64 + 348;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r11,84
	ctx.r9.s64 = ctx.r11.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_8240FEE4:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8240ff00
	if (ctx.cr6.eq) goto loc_8240FF00;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8240ff00
	if (ctx.cr6.eq) goto loc_8240FF00;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8240FF00:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x8240fee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240FEE4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8240ff38
	if (ctx.cr6.eq) goto loc_8240FF38;
	// divwu r11,r31,r4
	ctx.r11.u32 = ctx.r31.u32 / ctx.r4.u32;
	// twllei r4,0
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x8240ff38
	goto loc_8240FF38;
loc_8240FF28:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r7,r11,396
	ctx.r7.s64 = ctx.r11.s64 + 396;
	// addi r29,r11,804
	ctx.r29.s64 = ctx.r11.s64 + 804;
	// li r10,34
	ctx.r10.s64 = 34;
loc_8240FF38:
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// add r28,r11,r7
	ctx.r28.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x8240ff6c
	if (!ctx.cr6.lt) goto loc_8240FF6C;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_8240FF50:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// blt cr6,0x8240ff50
	if (ctx.cr6.lt) goto loc_8240FF50;
loc_8240FF6C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8240fff0
	if (ctx.cr6.eq) goto loc_8240FFF0;
loc_8240FF7C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8240ffe0
	if (ctx.cr6.eq) goto loc_8240FFE0;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mulli r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 * 3;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r27,r27,r29
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8240ffd4
	if (!ctx.cr6.lt) goto loc_8240FFD4;
	// addic. r9,r9,1
	ctx.xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r9.s64 = ctx.r9.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// ble 0x8240ffd4
	if (!ctx.cr0.gt) goto loc_8240FFD4;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_8240FFD4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8240ff7c
	if (ctx.cr6.lt) goto loc_8240FF7C;
loc_8240FFE0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8240fff0
	if (ctx.cr6.eq) goto loc_8240FFF0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8240ff6c
	if (!ctx.cr6.eq) goto loc_8240FF6C;
loc_8240FFF0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82410028
	if (!ctx.cr6.lt) goto loc_82410028;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82410000:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82410014
	if (!ctx.cr6.lt) goto loc_82410014;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82410014:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82410000
	if (ctx.cr6.lt) goto loc_82410000;
loc_82410028:
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8241002C"))) PPC_WEAK_FUNC(sub_8241002C);
PPC_FUNC_IMPL(__imp__sub_8241002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82410030"))) PPC_WEAK_FUNC(sub_82410030);
PPC_FUNC_IMPL(__imp__sub_82410030) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82410034:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82410034
	if (!ctx.cr0.eq) goto loc_82410034;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82410058"))) PPC_WEAK_FUNC(sub_82410058);
PPC_FUNC_IMPL(__imp__sub_82410058) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x824100bc
	if (ctx.cr6.lt) goto loc_824100BC;
	// beq cr6,0x82410098
	if (ctx.cr6.eq) goto loc_82410098;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x8241008c
	if (ctx.cr6.lt) goto loc_8241008C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x824100c4
	goto loc_824100C4;
loc_8241008C:
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// bl 0x8241dd3c
	ctx.lr = 0x82410094;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x824100c4
	goto loc_824100C4;
loc_82410098:
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// bl 0x8241e39c
	ctx.lr = 0x824100A0;
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// ori r10,r10,16388
	ctx.r10.u64 = ctx.r10.u64 | 16388;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x824100c4
	goto loc_824100C4;
loc_824100BC:
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// bl 0x8241dd2c
	ctx.lr = 0x824100C4;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_824100C4:
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

__attribute__((alias("__imp__sub_824100DC"))) PPC_WEAK_FUNC(sub_824100DC);
PPC_FUNC_IMPL(__imp__sub_824100DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824100E0"))) PPC_WEAK_FUNC(sub_824100E0);
PPC_FUNC_IMPL(__imp__sub_824100E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x824100E8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,244
	ctx.r27.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82410108;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82410128
	if (!ctx.cr6.eq) goto loc_82410128;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82410138
	goto loc_82410138;
loc_82410128:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824125b0
	ctx.lr = 0x82410134;
	sub_824125B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82410138:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82410140;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8241014C"))) PPC_WEAK_FUNC(sub_8241014C);
PPC_FUNC_IMPL(__imp__sub_8241014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82410150"))) PPC_WEAK_FUNC(sub_82410150);
PPC_FUNC_IMPL(__imp__sub_82410150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82410158;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,244
	ctx.r27.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82410178;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82410198
	if (!ctx.cr6.eq) goto loc_82410198;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x824101a8
	goto loc_824101A8;
loc_82410198:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824126c8
	ctx.lr = 0x824101A4;
	sub_824126C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_824101A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x824101B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_824101BC"))) PPC_WEAK_FUNC(sub_824101BC);
PPC_FUNC_IMPL(__imp__sub_824101BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824101C0"))) PPC_WEAK_FUNC(sub_824101C0);
PPC_FUNC_IMPL(__imp__sub_824101C0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,296
	ctx.r11.s64 = ctx.r3.s64 + 296;
loc_824101C4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r4,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824101c4
	if (!ctx.cr0.eq) goto loc_824101C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824101E4"))) PPC_WEAK_FUNC(sub_824101E4);
PPC_FUNC_IMPL(__imp__sub_824101E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824101E8"))) PPC_WEAK_FUNC(sub_824101E8);
PPC_FUNC_IMPL(__imp__sub_824101E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x824101F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8241dd2c
	ctx.lr = 0x8241020C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82410218:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241022c
	if (!ctx.cr6.eq) goto loc_8241022C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8241022C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82410218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82410218;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8241024c
	if (!ctx.cr6.gt) goto loc_8241024C;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// b 0x82410270
	goto loc_82410270;
loc_8241024C:
	// addi r11,r29,21
	ctx.r11.s64 = ctx.r29.s64 + 21;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82412c50
	ctx.lr = 0x82410260;
	sub_82412C50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82410270
	if (ctx.cr0.lt) goto loc_82410270;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_82410270:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82410278;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82410284"))) PPC_WEAK_FUNC(sub_82410284);
PPC_FUNC_IMPL(__imp__sub_82410284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82410288"))) PPC_WEAK_FUNC(sub_82410288);
PPC_FUNC_IMPL(__imp__sub_82410288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82410290;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,244
	ctx.r31.s64 = ctx.r3.s64 + 244;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x824102A8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r29,21
	ctx.r11.s64 = ctx.r29.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82412470
	ctx.lr = 0x824102B8;
	sub_82412470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x824102C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_824102CC"))) PPC_WEAK_FUNC(sub_824102CC);
PPC_FUNC_IMPL(__imp__sub_824102CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824102D0"))) PPC_WEAK_FUNC(sub_824102D0);
PPC_FUNC_IMPL(__imp__sub_824102D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x824102D8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,244
	ctx.r30.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8241dd2c
	ctx.lr = 0x824102F4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r29,21
	ctx.r11.s64 = ctx.r29.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82410310
	if (ctx.cr6.eq) goto loc_82410310;
	// bl 0x82411d68
	ctx.lr = 0x8241030C;
	sub_82411D68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82410310:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82410318;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82410324"))) PPC_WEAK_FUNC(sub_82410324);
PPC_FUNC_IMPL(__imp__sub_82410324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82410328"))) PPC_WEAK_FUNC(sub_82410328);
PPC_FUNC_IMPL(__imp__sub_82410328) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1216, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82410330"))) PPC_WEAK_FUNC(sub_82410330);
PPC_FUNC_IMPL(__imp__sub_82410330) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82410338"))) PPC_WEAK_FUNC(sub_82410338);
PPC_FUNC_IMPL(__imp__sub_82410338) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,21
	ctx.r11.s64 = ctx.r4.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82410360
	if (ctx.cr6.eq) goto loc_82410360;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82410360
	if (ctx.cr6.eq) goto loc_82410360;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// blr 
	return;
loc_82410360:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82410368"))) PPC_WEAK_FUNC(sub_82410368);
PPC_FUNC_IMPL(__imp__sub_82410368) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82410370"))) PPC_WEAK_FUNC(sub_82410370);
PPC_FUNC_IMPL(__imp__sub_82410370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82410378;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	ctx.r26.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8241039C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824103bc
	if (!ctx.cr6.eq) goto loc_824103BC;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x824103d8
	goto loc_824103D8;
loc_824103BC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,-4040(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4040);
	// bl 0x82412a58
	ctx.lr = 0x824103D4;
	sub_82412A58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_824103D8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x824103E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_824103EC"))) PPC_WEAK_FUNC(sub_824103EC);
PPC_FUNC_IMPL(__imp__sub_824103EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824103F0"))) PPC_WEAK_FUNC(sub_824103F0);
PPC_FUNC_IMPL(__imp__sub_824103F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8241ebec
	ctx.lr = 0x82410408;
	__imp__XAudioGetDuckerLevel(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_82410424"))) PPC_WEAK_FUNC(sub_82410424);
PPC_FUNC_IMPL(__imp__sub_82410424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82410428"))) PPC_WEAK_FUNC(sub_82410428);
PPC_FUNC_IMPL(__imp__sub_82410428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82410430;
	sub_82248788(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8241dd2c
	ctx.lr = 0x8241044C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824104a0
	if (ctx.cr6.eq) goto loc_824104A0;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bge cr6,0x824104a0
	if (!ctx.cr6.lt) goto loc_824104A0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8241047C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x824104a0
	if (ctx.cr6.gt) goto loc_824104A0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_824104A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x824104A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_824104B4"))) PPC_WEAK_FUNC(sub_824104B4);
PPC_FUNC_IMPL(__imp__sub_824104B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824104B8"))) PPC_WEAK_FUNC(sub_824104B8);
PPC_FUNC_IMPL(__imp__sub_824104B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x824104C0;
	sub_82248778(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82248f70
	ctx.lr = 0x824104E8;
	sub_82248F70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// lfs f0,2144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82410520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414660
	ctx.lr = 0x8241052C;
	sub_82414660(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82410664
	if (ctx.cr0.lt) goto loc_82410664;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82410550
	if (ctx.cr6.eq) goto loc_82410550;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
loc_82410550:
	// mulli r29,r26,12
	ctx.r29.s64 = ctx.r26.s64 * 12;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82086c98
	ctx.lr = 0x82410564;
	sub_82086C98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x824105ac
	if (ctx.cr0.eq) goto loc_824105AC;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82410590
	if (ctx.cr6.eq) goto loc_82410590;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 * 12;
	// bl 0x82248a40
	ctx.lr = 0x82410590;
	sub_82248A40(ctx, base);
loc_82410590:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r25,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r25.u32);
	// b 0x824105b4
	goto loc_824105B4;
loc_824105AC:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
loc_824105B4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82410664
	if (ctx.cr6.lt) goto loc_82410664;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16125
	ctx.r6.s64 = 16125;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824105F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82410654
	if (ctx.cr0.lt) goto loc_82410654;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r25,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r24,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// li r6,16125
	ctx.r6.s64 = 16125;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82410650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82410654:
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82086968
	ctx.lr = 0x82410664;
	sub_82086968(ctx, base);
loc_82410664:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82410674
	if (ctx.cr6.eq) goto loc_82410674;
	// bl 0x82413e10
	ctx.lr = 0x82410674;
	sub_82413E10(ctx, base);
loc_82410674:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x824106e8
	if (ctx.cr6.lt) goto loc_824106E8;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r11,16256
	ctx.r11.s64 = 1065353216;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824106BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x824106e8
	if (ctx.cr0.lt) goto loc_824106E8;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824106E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_824106E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_824106F4"))) PPC_WEAK_FUNC(sub_824106F4);
PPC_FUNC_IMPL(__imp__sub_824106F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824106F8"))) PPC_WEAK_FUNC(sub_824106F8);
PPC_FUNC_IMPL(__imp__sub_824106F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8241072c
	if (ctx.cr6.eq) goto loc_8241072C;
	// addi r10,r3,100
	ctx.r10.s64 = ctx.r3.s64 + 100;
loc_8241070C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ld r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x8241072c
	if (ctx.cr6.eq) goto loc_8241072C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8241070c
	if (ctx.cr6.lt) goto loc_8241070C;
loc_8241072C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82410744
	if (!ctx.cr6.lt) goto loc_82410744;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82410744:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8241074C"))) PPC_WEAK_FUNC(sub_8241074C);
PPC_FUNC_IMPL(__imp__sub_8241074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82410750"))) PPC_WEAK_FUNC(sub_82410750);
PPC_FUNC_IMPL(__imp__sub_82410750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82410758;
	sub_8224876C(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,348
	ctx.r24.s64 = ctx.r3.s64 + 348;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// bl 0x82088070
	ctx.lr = 0x8241077C;
	sub_82088070(ctx, base);
	// addi r25,r28,84
	ctx.r25.s64 = ctx.r28.s64 + 84;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// li r29,4
	ctx.r29.s64 = 4;
loc_8241078C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824107a0
	if (ctx.cr6.eq) goto loc_824107A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82412ab0
	ctx.lr = 0x824107A0;
	sub_82412AB0(ctx, base);
loc_824107A0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8241078c
	if (!ctx.cr0.eq) goto loc_8241078C;
	// addi r23,r28,804
	ctx.r23.s64 = ctx.r28.s64 + 804;
	// li r5,408
	ctx.r5.s64 = 408;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82088070
	ctx.lr = 0x824107C4;
	sub_82088070(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8241090c
	if (!ctx.cr6.gt) goto loc_8241090C;
	// addi r31,r28,100
	ctx.r31.s64 = ctx.r28.s64 + 100;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_824107E0:
	// lwz r11,280(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824108dc
	if (!ctx.cr6.eq) goto loc_824108DC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82410830
	if (ctx.cr6.eq) goto loc_82410830;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r9,r3,36
	ctx.r9.s64 = ctx.r3.s64 + 36;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82410810:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82410820
	if (ctx.cr6.lt) goto loc_82410820;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82410820:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82410810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82410810;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82410834
	goto loc_82410834;
loc_82410830:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82410834:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824108dc
	if (!ctx.cr6.lt) goto loc_824108DC;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
loc_8241084C:
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r8,r10,36
	ctx.r8.s64 = ctx.r10.s64 + 36;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82410860:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82410870
	if (ctx.cr6.lt) goto loc_82410870;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82410870:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82410860
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82410860;
	// ld r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82410894
	if (ctx.cr6.eq) goto loc_82410894;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82410894
	if (!ctx.cr6.lt) goto loc_82410894;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82410894:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8241084c
	if (ctx.cr6.lt) goto loc_8241084C;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x824108dc
	if (ctx.cr6.eq) goto loc_824108DC;
	// addi r11,r30,25
	ctx.r11.s64 = ctx.r30.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// xor r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_824108DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x824108f4
	if (ctx.cr6.eq) goto loc_824108F4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82415728
	ctx.lr = 0x824108F4;
	sub_82415728(ctx, base);
loc_824108F4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824107e0
	if (ctx.cr6.lt) goto loc_824107E0;
loc_8241090C:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// stw r22,280(r28)
	PPC_STORE_U32(ctx.r28.u32 + 280, ctx.r22.u32);
	// addi r6,r28,300
	ctx.r6.s64 = ctx.r28.s64 + 300;
	// addi r10,r11,15652
	ctx.r10.s64 = ctx.r11.s64 + 15652;
	// addi r8,r6,48
	ctx.r8.s64 = ctx.r6.s64 + 48;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bge cr6,0x82410970
	if (!ctx.cr6.lt) goto loc_82410970;
	// addi r5,r24,48
	ctx.r5.s64 = ctx.r24.s64 + 48;
	// subf r4,r6,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r6.s64;
loc_8241093C:
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82410964
	if (!ctx.cr6.lt) goto loc_82410964;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8241093c
	if (ctx.cr6.lt) goto loc_8241093C;
loc_82410964:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82410970
	if (ctx.cr6.eq) goto loc_82410970;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
loc_82410970:
	// lis r10,-32186
	ctx.r10.s64 = -2109341696;
	// lwz r5,292(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r8,r10,13984
	ctx.r8.s64 = ctx.r10.s64 + 13984;
	// li r31,2
	ctx.r31.s64 = 2;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r11,r8,87
	ctx.r11.s64 = ctx.r8.s64 + 87;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_824109A4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824109c0
	if (ctx.cr6.eq) goto loc_824109C0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824109c0
	if (ctx.cr6.eq) goto loc_824109C0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_824109C0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x824109a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824109A4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824109e4
	if (ctx.cr6.eq) goto loc_824109E4;
	// divwu r11,r5,r9
	ctx.r11.u32 = ctx.r5.u32 / ctx.r9.u32;
	// twllei r9,0
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_824109E4:
	// addi r3,r6,48
	ctx.r3.s64 = ctx.r6.s64 + 48;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82410a14
	if (!ctx.cr6.lt) goto loc_82410A14;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_824109F8:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blt cr6,0x824109f8
	if (ctx.cr6.lt) goto loc_824109F8;
loc_82410A14:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_82410A1C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82410a74
	if (ctx.cr6.eq) goto loc_82410A74;
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 * 3;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwzx r29,r29,r24
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r24.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82410a68
	if (!ctx.cr6.lt) goto loc_82410A68;
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// ble 0x82410a68
	if (!ctx.cr0.gt) goto loc_82410A68;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82410A68:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x82410a1c
	if (ctx.cr6.lt) goto loc_82410A1C;
loc_82410A74:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82410a84
	if (ctx.cr6.eq) goto loc_82410A84;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82410a14
	if (!ctx.cr6.eq) goto loc_82410A14;
loc_82410A84:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82410ac4
	if (!ctx.cr6.lt) goto loc_82410AC4;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82410A94:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82410aa4
	if (!ctx.cr6.lt) goto loc_82410AA4;
	// stwx r22,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r22.u32);
loc_82410AA4:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82410a94
	if (ctx.cr6.lt) goto loc_82410A94;
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x82410ac4
	if (!ctx.cr6.gt) goto loc_82410AC4;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
loc_82410AC4:
	// lwz r11,296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82410ad8
	if (!ctx.cr6.eq) goto loc_82410AD8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,296(r28)
	PPC_STORE_U32(ctx.r28.u32 + 296, ctx.r11.u32);
loc_82410AD8:
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// lwz r6,296(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// addi r30,r23,408
	ctx.r30.s64 = ctx.r23.s64 + 408;
	// addi r10,r11,14016
	ctx.r10.s64 = ctx.r11.s64 + 14016;
	// addi r31,r28,396
	ctx.r31.s64 = ctx.r28.s64 + 396;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r30
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r30.u32, ctx.xer);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bge cr6,0x82410b20
	if (!ctx.cr6.lt) goto loc_82410B20;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82410B00:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82410b14
	if (!ctx.cr6.gt) goto loc_82410B14;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82410B14:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82410b00
	if (ctx.cr6.lt) goto loc_82410B00;
loc_82410B20:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8240fea0
	ctx.lr = 0x82410B2C;
	sub_8240FEA0(ctx, base);
	// addi r10,r31,408
	ctx.r10.s64 = ctx.r31.s64 + 408;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82410b68
	if (!ctx.cr6.lt) goto loc_82410B68;
	// subf r8,r23,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r23.s64;
loc_82410B40:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82410b68
	if (!ctx.cr6.lt) goto loc_82410B68;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82410b40
	if (ctx.cr6.lt) goto loc_82410B40;
loc_82410B68:
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x82410b74
	if (!ctx.cr6.gt) goto loc_82410B74;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82410B74:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82410b88
	if (ctx.cr6.eq) goto loc_82410B88;
	// lwz r11,292(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,292(r28)
	PPC_STORE_U32(ctx.r28.u32 + 292, ctx.r11.u32);
loc_82410B88:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_82410B94"))) PPC_WEAK_FUNC(sub_82410B94);
PPC_FUNC_IMPL(__imp__sub_82410B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82410B98"))) PPC_WEAK_FUNC(sub_82410B98);
PPC_FUNC_IMPL(__imp__sub_82410B98) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82410c48
	if (ctx.cr6.eq) goto loc_82410C48;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82410BCC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82410be8
	if (ctx.cr6.eq) goto loc_82410BE8;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm. r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82410be8
	if (!ctx.cr0.eq) goto loc_82410BE8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82410BE8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82410bcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82410BCC;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82410c20
	if (!ctx.cr0.eq) goto loc_82410C20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82411d70
	ctx.lr = 0x82410C04;
	sub_82411D70(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82410c20
	if (ctx.cr6.eq) goto loc_82410C20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82411d68
	ctx.lr = 0x82410C18;
	sub_82411D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82410c3c
	if (!ctx.cr0.eq) goto loc_82410C3C;
loc_82410C20:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82410c3c
	if (!ctx.cr6.eq) goto loc_82410C3C;
	// bl 0x8241eb8c
	ctx.lr = 0x82410C2C;
	__imp__XamVoiceIsActiveProcess(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82410c3c
	if (ctx.cr0.eq) goto loc_82410C3C;
	// lfs f0,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82410c44
	goto loc_82410C44;
loc_82410C3C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
loc_82410C44:
	// stfs f0,208(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
loc_82410C48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82410C60"))) PPC_WEAK_FUNC(sub_82410C60);
PPC_FUNC_IMPL(__imp__sub_82410C60) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82410c94
	if (ctx.cr6.eq) goto loc_82410C94;
	// addi r9,r3,100
	ctx.r9.s64 = ctx.r3.s64 + 100;
loc_82410C74:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// ld r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82410c94
	if (ctx.cr6.eq) goto loc_82410C94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82410c74
	if (ctx.cr6.lt) goto loc_82410C74;
loc_82410C94:
	// addi r9,r11,67
	ctx.r9.s64 = ctx.r11.s64 + 67;
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r11,33
	ctx.r8.s64 = ctx.r11.s64 + 33;
	// mulli r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 * 3;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 * 3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82410CCC"))) PPC_WEAK_FUNC(sub_82410CCC);
PPC_FUNC_IMPL(__imp__sub_82410CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82410CD0"))) PPC_WEAK_FUNC(sub_82410CD0);
PPC_FUNC_IMPL(__imp__sub_82410CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82410CD8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32177
	ctx.r9.s64 = -2108751872;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r8,r9,-4068
	ctx.r8.s64 = ctx.r9.s64 + -4068;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,-4068(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4068, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r28.u32);
	// beq cr6,0x82410e60
	if (ctx.cr6.eq) goto loc_82410E60;
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82410d48
	if (ctx.cr6.eq) goto loc_82410D48;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82410d48
	if (ctx.cr6.eq) goto loc_82410D48;
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// bl 0x82257118
	ctx.lr = 0x82410D24;
	sub_82257118(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// bl 0x820882b0
	ctx.lr = 0x82410D38;
	sub_820882B0(ctx, base);
	// stw r28,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r28.u32);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x82088268
	ctx.lr = 0x82410D44;
	sub_82088268(ctx, base);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
loc_82410D48:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82410d64
	if (ctx.cr6.eq) goto loc_82410D64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82410d64
	if (ctx.cr6.eq) goto loc_82410D64;
	// bl 0x82088268
	ctx.lr = 0x82410D60;
	sub_82088268(ctx, base);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
loc_82410D64:
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82410d80
	if (ctx.cr6.eq) goto loc_82410D80;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82410d80
	if (ctx.cr6.eq) goto loc_82410D80;
	// bl 0x82088268
	ctx.lr = 0x82410D7C;
	sub_82088268(ctx, base);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
loc_82410D80:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82410da4
	if (ctx.cr6.eq) goto loc_82410DA4;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// b 0x82410d98
	goto loc_82410D98;
loc_82410D94:
	// db16cyc 
loc_82410D98:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82410d94
	if (!ctx.cr6.eq) goto loc_82410D94;
loc_82410DA4:
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82410DAC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82412b60
	ctx.lr = 0x82410DB4;
	sub_82412B60(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r29.u32 = ea;
	// bne 0x82410dac
	if (!ctx.cr0.eq) goto loc_82410DAC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82410df0
	if (!ctx.cr6.gt) goto loc_82410DF0;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
loc_82410DD4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x824150e8
	ctx.lr = 0x82410DDC;
	sub_824150E8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82410dd4
	if (ctx.cr6.lt) goto loc_82410DD4;
loc_82410DF0:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82410e10
	if (ctx.cr6.eq) goto loc_82410E10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82410E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
loc_82410E10:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82410e30
	if (ctx.cr6.eq) goto loc_82410E30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82410E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
loc_82410E30:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82410e50
	if (ctx.cr6.eq) goto loc_82410E50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82410E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
loc_82410E50:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x82086968
	ctx.lr = 0x82410E60;
	sub_82086968(ctx, base);
loc_82410E60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82410E68"))) PPC_WEAK_FUNC(sub_82410E68);
PPC_FUNC_IMPL(__imp__sub_82410E68) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82410E7C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82410e7c
	if (!ctx.cr0.eq) goto loc_82410E7C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82410ecc
	if (!ctx.cr6.eq) goto loc_82410ECC;
	// bl 0x82410cd0
	ctx.lr = 0x82410EA8;
	sub_82410CD0(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-3932
	ctx.r11.s64 = ctx.r11.s64 + -3932;
loc_82410EB4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82410eb4
	if (!ctx.cr0.eq) goto loc_82410EB4;
loc_82410ECC:
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

__attribute__((alias("__imp__sub_82410EE4"))) PPC_WEAK_FUNC(sub_82410EE4);
PPC_FUNC_IMPL(__imp__sub_82410EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82410EE8"))) PPC_WEAK_FUNC(sub_82410EE8);
PPC_FUNC_IMPL(__imp__sub_82410EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82410EF0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	ctx.r26.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x8241dd2c
	ctx.lr = 0x82410F0C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82411020
	if (ctx.cr6.eq) goto loc_82411020;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8241e0ac
	ctx.lr = 0x82410F2C;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82410f88
	if (ctx.cr0.eq) goto loc_82410F88;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82410f80
	if (ctx.cr6.eq) goto loc_82410F80;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82410f80
	if (ctx.cr6.eq) goto loc_82410F80;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,31
	ctx.r10.u64 = ctx.r10.u64 | 31;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82410f7c
	if (ctx.cr6.eq) goto loc_82410F7C;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82410f88
	if (!ctx.cr6.gt) goto loc_82410F88;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82410f80
	if (!ctx.cr6.gt) goto loc_82410F80;
	// b 0x82410f88
	goto loc_82410F88;
loc_82410F7C:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82410F80:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_82410F88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410750
	ctx.lr = 0x82410F90;
	sub_82410750(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82410F9C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82410fc4
	if (ctx.cr6.eq) goto loc_82410FC4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82411d68
	ctx.lr = 0x82410FAC;
	sub_82411D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82410fc4
	if (ctx.cr0.eq) goto loc_82410FC4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
loc_82410FC4:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82412800
	ctx.lr = 0x82410FCC;
	sub_82412800(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82410f9c
	if (!ctx.cr0.eq) goto loc_82410F9C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82411018
	if (!ctx.cr6.gt) goto loc_82411018;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
loc_82410FE8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82411004
	if (ctx.cr6.eq) goto loc_82411004;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82411004
	if (ctx.cr6.eq) goto loc_82411004;
	// bl 0x82415258
	ctx.lr = 0x82411004;
	sub_82415258(ctx, base);
loc_82411004:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82410fe8
	if (ctx.cr6.lt) goto loc_82410FE8;
loc_82411018:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_82411020:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82411028;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82411038"))) PPC_WEAK_FUNC(sub_82411038);
PPC_FUNC_IMPL(__imp__sub_82411038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82411040;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82411060;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824106f8
	ctx.lr = 0x8241106C;
	sub_824106F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82411080
	if (!ctx.cr0.eq) goto loc_82411080;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82411090
	goto loc_82411090;
loc_82411080:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82415300
	ctx.lr = 0x8241108C;
	sub_82415300(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82411090:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82411098;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_824110A4"))) PPC_WEAK_FUNC(sub_824110A4);
PPC_FUNC_IMPL(__imp__sub_824110A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824110A8"))) PPC_WEAK_FUNC(sub_824110A8);
PPC_FUNC_IMPL(__imp__sub_824110A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x824110B0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x824110D0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824106f8
	ctx.lr = 0x824110DC;
	sub_824106F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824110f0
	if (!ctx.cr0.eq) goto loc_824110F0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82411100
	goto loc_82411100;
loc_824110F0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82415378
	ctx.lr = 0x824110FC;
	sub_82415378(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82411100:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82411108;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82411114"))) PPC_WEAK_FUNC(sub_82411114);
PPC_FUNC_IMPL(__imp__sub_82411114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82411118"))) PPC_WEAK_FUNC(sub_82411118);
PPC_FUNC_IMPL(__imp__sub_82411118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82411120;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	ctx.r26.s64 = ctx.r3.s64 + 244;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82411144;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82088070
	ctx.lr = 0x82411154;
	sub_82088070(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x824106f8
	ctx.lr = 0x82411160;
	sub_824106F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82411174
	if (!ctx.cr0.eq) goto loc_82411174;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x8241120c
	goto loc_8241120C;
loc_82411174:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824153f0
	ctx.lr = 0x8241118C;
	sub_824153F0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8241120c
	if (ctx.cr0.lt) goto loc_8241120C;
	// lis r12,-1057
	ctx.r12.s64 = -69271552;
	// lis r11,-5413
	ctx.r11.s64 = -354746368;
	// ori r12,r12,221
	ctx.r12.u64 = ctx.r12.u64 | 221;
	// lis r10,-1057
	ctx.r10.s64 = -69271552;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r11,r11,61168
	ctx.r11.u64 = ctx.r11.u64 | 61168;
	// oris r12,r12,60123
	ctx.r12.u64 = ctx.r12.u64 | 3940220928;
	// ori r10,r10,221
	ctx.r10.u64 = ctx.r10.u64 | 221;
	// ori r12,r12,61168
	ctx.r12.u64 = ctx.r12.u64 | 61168;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// and r9,r31,r12
	ctx.r9.u64 = ctx.r31.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x8241120c
	if (ctx.cr6.eq) goto loc_8241120C;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
loc_824111D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824111f0
	if (ctx.cr6.eq) goto loc_824111F0;
	// lwz r9,212(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// rlwinm r9,r9,0,12,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82411204
	if (ctx.cr6.eq) goto loc_82411204;
loc_824111F0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x824111d0
	if (ctx.cr6.lt) goto loc_824111D0;
	// b 0x8241120c
	goto loc_8241120C;
loc_82411204:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r11.u32);
loc_8241120C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82411214;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82411220"))) PPC_WEAK_FUNC(sub_82411220);
PPC_FUNC_IMPL(__imp__sub_82411220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82411228;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,244
	ctx.r30.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82411240;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824106f8
	ctx.lr = 0x8241124C;
	sub_824106F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82411260
	if (!ctx.cr0.eq) goto loc_82411260;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82411268
	goto loc_82411268;
loc_82411260:
	// bl 0x824154b8
	ctx.lr = 0x82411264;
	sub_824154B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82411268:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82411270;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8241127C"))) PPC_WEAK_FUNC(sub_8241127C);
PPC_FUNC_IMPL(__imp__sub_8241127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82411280"))) PPC_WEAK_FUNC(sub_82411280);
PPC_FUNC_IMPL(__imp__sub_82411280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82411288;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x824112A4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82411328
	if (!ctx.cr6.gt) goto loc_82411328;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// addi r9,r29,-8
	ctx.r9.s64 = ctx.r29.s64 + -8;
loc_824112C0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82411314
	if (ctx.cr6.eq) goto loc_82411314;
	// lis r12,-1057
	ctx.r12.s64 = -69271552;
	// lis r7,-5413
	ctx.r7.s64 = -354746368;
	// ori r12,r12,221
	ctx.r12.u64 = ctx.r12.u64 | 221;
	// lis r6,-1057
	ctx.r6.s64 = -69271552;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r7,r7,61168
	ctx.r7.u64 = ctx.r7.u64 | 61168;
	// oris r12,r12,60123
	ctx.r12.u64 = ctx.r12.u64 | 3940220928;
	// ori r6,r6,221
	ctx.r6.u64 = ctx.r6.u64 | 221;
	// ori r12,r12,61168
	ctx.r12.u64 = ctx.r12.u64 | 61168;
	// rldimi r7,r6,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// and r5,r11,r12
	ctx.r5.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r5,r7
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82411314
	if (ctx.cr6.eq) goto loc_82411314;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82411314:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824112c0
	if (ctx.cr6.lt) goto loc_824112C0;
loc_82411328:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82411330;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8241133C"))) PPC_WEAK_FUNC(sub_8241133C);
PPC_FUNC_IMPL(__imp__sub_8241133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82411340"))) PPC_WEAK_FUNC(sub_82411340);
PPC_FUNC_IMPL(__imp__sub_82411340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82411348;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8241dd2c
	ctx.lr = 0x82411364;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824113a4
	if (ctx.cr6.eq) goto loc_824113A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82411d68
	ctx.lr = 0x82411380;
	sub_82411D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824113a0
	if (ctx.cr0.eq) goto loc_824113A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82411d70
	ctx.lr = 0x82411390;
	sub_82411D70(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824113a4
	if (ctx.cr6.eq) goto loc_824113A4;
loc_824113A0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_824113A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x824113AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_824113B8"))) PPC_WEAK_FUNC(sub_824113B8);
PPC_FUNC_IMPL(__imp__sub_824113B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x824113C0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,244
	ctx.r29.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8241dd2c
	ctx.lr = 0x824113DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824106f8
	ctx.lr = 0x824113E8;
	sub_824106F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824113f8
	if (ctx.cr0.eq) goto loc_824113F8;
	// bl 0x82415668
	ctx.lr = 0x824113F4;
	sub_82415668(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_824113F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82411400;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8241140C"))) PPC_WEAK_FUNC(sub_8241140C);
PPC_FUNC_IMPL(__imp__sub_8241140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82411410"))) PPC_WEAK_FUNC(sub_82411410);
PPC_FUNC_IMPL(__imp__sub_82411410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82411418;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,244
	ctx.r29.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82411434;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824106f8
	ctx.lr = 0x82411440;
	sub_824106F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82411454
	if (!ctx.cr0.eq) goto loc_82411454;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82411460
	goto loc_82411460;
loc_82411454:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82414938
	ctx.lr = 0x8241145C;
	sub_82414938(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82411460:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82411468;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_82411474"))) PPC_WEAK_FUNC(sub_82411474);
PPC_FUNC_IMPL(__imp__sub_82411474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82411478"))) PPC_WEAK_FUNC(sub_82411478);
PPC_FUNC_IMPL(__imp__sub_82411478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82411480;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	ctx.r26.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x824114A8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824106f8
	ctx.lr = 0x824114B4;
	sub_824106F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824114c8
	if (!ctx.cr0.eq) goto loc_824114C8;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x824114e0
	goto loc_824114E0;
loc_824114C8:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82414a58
	ctx.lr = 0x824114DC;
	sub_82414A58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_824114E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x824114E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_824114F4"))) PPC_WEAK_FUNC(sub_824114F4);
PPC_FUNC_IMPL(__imp__sub_824114F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824114F8"))) PPC_WEAK_FUNC(sub_824114F8);
PPC_FUNC_IMPL(__imp__sub_824114F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x82411500;
	sub_8224876C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// ori r28,r11,1167
	ctx.r28.u64 = ctx.r11.u64 | 1167;
	// bl 0x8240e310
	ctx.lr = 0x82411528;
	sub_8240E310(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82411648
	if (!ctx.cr6.eq) goto loc_82411648;
	// addi r21,r31,244
	ctx.r21.s64 = ctx.r31.s64 + 244;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x8241153C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82411548:
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82411574
	if (ctx.cr6.eq) goto loc_82411574;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82411d70
	ctx.lr = 0x8241155C;
	sub_82411D70(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82411574
	if (!ctx.cr6.eq) goto loc_82411574;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82411588
	if (!ctx.cr6.eq) goto loc_82411588;
loc_82411574:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x82411548
	if (ctx.cr6.lt) goto loc_82411548;
	// b 0x82411640
	goto loc_82411640;
loc_82411588:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824115f4
	if (ctx.cr6.eq) goto loc_824115F4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824115f4
	if (ctx.cr6.eq) goto loc_824115F4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8240e378
	ctx.lr = 0x824115A4;
	sub_8240E378(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x824115bc
	if (!ctx.cr6.gt) goto loc_824115BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_824115BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824115fc
	if (!ctx.cr6.gt) goto loc_824115FC;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
loc_824115D0:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsu f0,8(r11)
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824115d0
	if (ctx.cr6.lt) goto loc_824115D0;
	// b 0x824115fc
	goto loc_824115FC;
loc_824115F4:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_824115FC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82411640
	if (ctx.cr6.lt) goto loc_82411640;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8241163c
	if (ctx.cr6.eq) goto loc_8241163C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241163c
	if (ctx.cr6.eq) goto loc_8241163C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,-4040(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4040);
	// bl 0x82412a58
	ctx.lr = 0x82411634;
	sub_82412A58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82411640
	goto loc_82411640;
loc_8241163C:
	// stw r23,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r23.u32);
loc_82411640:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82411648;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82411648:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_82411654"))) PPC_WEAK_FUNC(sub_82411654);
PPC_FUNC_IMPL(__imp__sub_82411654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82411658"))) PPC_WEAK_FUNC(sub_82411658);
PPC_FUNC_IMPL(__imp__sub_82411658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82411660;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x82411680;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824106f8
	ctx.lr = 0x8241168C;
	sub_824106F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824116a0
	if (!ctx.cr0.eq) goto loc_824116A0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x824116b0
	goto loc_824116B0;
loc_824116A0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82415640
	ctx.lr = 0x824116AC;
	sub_82415640(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_824116B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x824116B8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_824116C4"))) PPC_WEAK_FUNC(sub_824116C4);
PPC_FUNC_IMPL(__imp__sub_824116C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824116C8"))) PPC_WEAK_FUNC(sub_824116C8);
PPC_FUNC_IMPL(__imp__sub_824116C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x824116D0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8241dd2c
	ctx.lr = 0x824116F0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824106f8
	ctx.lr = 0x824116FC;
	sub_824106F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82411710
	if (!ctx.cr0.eq) goto loc_82411710;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82411720
	goto loc_82411720;
loc_82411710:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824155c8
	ctx.lr = 0x8241171C;
	sub_824155C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82411720:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82411728;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_82411734"))) PPC_WEAK_FUNC(sub_82411734);
PPC_FUNC_IMPL(__imp__sub_82411734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82411738"))) PPC_WEAK_FUNC(sub_82411738);
PPC_FUNC_IMPL(__imp__sub_82411738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82411740;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,244
	ctx.r29.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x8241dd2c
	ctx.lr = 0x82411760;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82411780
	if (!ctx.cr6.eq) goto loc_82411780;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,87
	ctx.r27.u64 = ctx.r27.u64 | 87;
	// b 0x82411788
	goto loc_82411788;
loc_82411780:
	// lfs f0,196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_82411788:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241dd3c
	ctx.lr = 0x82411790;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8241179C"))) PPC_WEAK_FUNC(sub_8241179C);
PPC_FUNC_IMPL(__imp__sub_8241179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824117A0"))) PPC_WEAK_FUNC(sub_824117A0);
PPC_FUNC_IMPL(__imp__sub_824117A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-2
	ctx.r11.s64 = -131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,31072
	ctx.r11.u64 = ctx.r11.u64 | 31072;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8241bca8
	ctx.lr = 0x824117D4;
	sub_8241BCA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x824117e4
	if (!ctx.cr0.eq) goto loc_824117E4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82088730
	ctx.lr = 0x824117E4;
	sub_82088730(ctx, base);
loc_824117E4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241bc38
	ctx.lr = 0x82411800;
	sub_8241BC38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82411810
	if (!ctx.cr0.eq) goto loc_82411810;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82088730
	ctx.lr = 0x82411810;
	sub_82088730(ctx, base);
loc_82411810:
	// lwz r3,276(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// bl 0x82088758
	ctx.lr = 0x82411818;
	sub_82088758(ctx, base);
	// b 0x8241182c
	goto loc_8241182C;
loc_8241181C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x820882b0
	ctx.lr = 0x82411824;
	sub_820882B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410ee8
	ctx.lr = 0x8241182C;
	sub_82410EE8(ctx, base);
loc_8241182C:
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8241181c
	if (!ctx.cr6.eq) goto loc_8241181C;
	// bl 0x8241bbf8
	ctx.lr = 0x82411840;
	sub_8241BBF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82088268
	ctx.lr = 0x82411848;
	sub_82088268(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82088730
	ctx.lr = 0x82411850;
	sub_82088730(ctx, base);
}

__attribute__((alias("__imp__sub_82411850"))) PPC_WEAK_FUNC(sub_82411850);
PPC_FUNC_IMPL(__imp__sub_82411850) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248750
	ctx.lr = 0x82411858;
	sub_82248750(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824119c0
	if (!ctx.cr6.eq) goto loc_824119C0;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r10,r10,3688
	ctx.r10.s64 = ctx.r10.s64 + 3688;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r6,-32191
	ctx.r6.s64 = -2109669376;
	// addi r11,r8,224
	ctx.r11.s64 = ctx.r8.s64 + 224;
	// addi r10,r7,336
	ctx.r10.s64 = ctx.r7.s64 + 336;
	// addi r9,r6,4152
	ctx.r9.s64 = ctx.r6.s64 + 4152;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r5,-32191
	ctx.r5.s64 = -2109669376;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r4,-32191
	ctx.r4.s64 = -2109669376;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lis r31,-32191
	ctx.r31.s64 = -2109669376;
	// addi r11,r5,4264
	ctx.r11.s64 = ctx.r5.s64 + 4264;
	// addi r10,r4,448
	ctx.r10.s64 = ctx.r4.s64 + 448;
	// addi r9,r31,488
	ctx.r9.s64 = ctx.r31.s64 + 488;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r30,-32191
	ctx.r30.s64 = -2109669376;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lis r29,-32191
	ctx.r29.s64 = -2109669376;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// lis r28,-32191
	ctx.r28.s64 = -2109669376;
	// addi r11,r30,648
	ctx.r11.s64 = ctx.r30.s64 + 648;
	// addi r10,r29,4376
	ctx.r10.s64 = ctx.r29.s64 + 4376;
	// addi r9,r28,4640
	ctx.r9.s64 = ctx.r28.s64 + 4640;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lis r27,-32191
	ctx.r27.s64 = -2109669376;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lis r26,-32191
	ctx.r26.s64 = -2109669376;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lis r25,-32191
	ctx.r25.s64 = -2109669376;
	// addi r11,r27,4736
	ctx.r11.s64 = ctx.r27.s64 + 4736;
	// addi r10,r26,720
	ctx.r10.s64 = ctx.r26.s64 + 720;
	// addi r9,r25,824
	ctx.r9.s64 = ctx.r25.s64 + 824;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lis r24,-32191
	ctx.r24.s64 = -2109669376;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lis r23,-32191
	ctx.r23.s64 = -2109669376;
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// lis r22,-32191
	ctx.r22.s64 = -2109669376;
	// addi r11,r24,5048
	ctx.r11.s64 = ctx.r24.s64 + 5048;
	// addi r10,r23,5136
	ctx.r10.s64 = ctx.r23.s64 + 5136;
	// addi r9,r22,5240
	ctx.r9.s64 = ctx.r22.s64 + 5240;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lis r21,-32191
	ctx.r21.s64 = -2109669376;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lis r20,-32191
	ctx.r20.s64 = -2109669376;
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// lis r19,-32191
	ctx.r19.s64 = -2109669376;
	// addi r11,r21,872
	ctx.r11.s64 = ctx.r21.s64 + 872;
	// addi r10,r20,880
	ctx.r10.s64 = ctx.r20.s64 + 880;
	// addi r9,r19,5720
	ctx.r9.s64 = ctx.r19.s64 + 5720;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lis r18,-32191
	ctx.r18.s64 = -2109669376;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lis r17,-32191
	ctx.r17.s64 = -2109669376;
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// lis r16,-32191
	ctx.r16.s64 = -2109669376;
	// addi r11,r18,5832
	ctx.r11.s64 = ctx.r18.s64 + 5832;
	// addi r10,r17,5368
	ctx.r10.s64 = ctx.r17.s64 + 5368;
	// addi r9,r16,4928
	ctx.r9.s64 = ctx.r16.s64 + 4928;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lis r15,-32191
	ctx.r15.s64 = -2109669376;
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lis r14,-32191
	ctx.r14.s64 = -2109669376;
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// addi r11,r15,1008
	ctx.r11.s64 = ctx.r15.s64 + 1008;
	// addi r10,r14,5944
	ctx.r10.s64 = ctx.r14.s64 + 5944;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r11,r9,1064
	ctx.r11.s64 = ctx.r9.s64 + 1064;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r10,r10,808
	ctx.r10.s64 = ctx.r10.s64 + 808;
	// addi r11,r11,816
	ctx.r11.s64 = ctx.r11.s64 + 816;
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
loc_824119C0:
	// b 0x822487a0
	sub_822487A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824119C4"))) PPC_WEAK_FUNC(sub_824119C4);
PPC_FUNC_IMPL(__imp__sub_824119C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824119C8"))) PPC_WEAK_FUNC(sub_824119C8);
PPC_FUNC_IMPL(__imp__sub_824119C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x824119D0;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82411a08
	if (ctx.cr6.eq) goto loc_82411A08;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82411a08
	if (ctx.cr6.eq) goto loc_82411A08;
loc_824119FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824119fc
	if (ctx.cr6.lt) goto loc_824119FC;
loc_82411A08:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82411a30
	if (ctx.cr6.eq) goto loc_82411A30;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82411a30
	if (ctx.cr6.eq) goto loc_82411A30;
loc_82411A24:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82411a24
	if (ctx.cr6.lt) goto loc_82411A24;
loc_82411A30:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// li r3,1224
	ctx.r3.s64 = 1224;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x82086c98
	ctx.lr = 0x82411A40;
	sub_82086C98(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82411a54
	if (!ctx.cr0.eq) goto loc_82411A54;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82411ca0
	goto loc_82411CA0;
loc_82411A54:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-3932
	ctx.r7.s64 = ctx.r11.s64 + -3932;
loc_82411A60:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82411a84
	if (!ctx.cr6.eq) goto loc_82411A84;
	// stwcx. r31,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r31.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82411a60
	if (!ctx.cr0.eq) goto loc_82411A60;
	// b 0x82411a8c
	goto loc_82411A8C;
loc_82411A84:
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82411A8C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82411ab4
	if (ctx.cr6.eq) goto loc_82411AB4;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x82086968
	ctx.lr = 0x82411AA8;
	sub_82086968(ctx, base);
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x82411c9c
	goto loc_82411C9C;
loc_82411AB4:
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// addi r29,r11,-4048
	ctx.r29.s64 = ctx.r11.s64 + -4048;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82411850
	ctx.lr = 0x82411AC4;
	sub_82411850(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r25,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r25.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1716);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// subfic r11,r11,13300
	ctx.xer.ca = ctx.r11.u32 <= 13300;
	ctx.r11.s64 = 13300 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r11.u32);
	// bl 0x82248a40
	ctx.lr = 0x82411B00;
	sub_82248A40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824104b8
	ctx.lr = 0x82411B0C;
	sub_824104B8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82411c94
	if (ctx.cr0.lt) goto loc_82411C94;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r31,84
	ctx.r27.s64 = ctx.r31.s64 + 84;
loc_82411B1C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82412d10
	ctx.lr = 0x82411B34;
	sub_82412D10(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82411c94
	if (ctx.cr0.lt) goto loc_82411C94;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// blt cr6,0x82411b1c
	if (ctx.cr6.lt) goto loc_82411B1C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82411bbc
	if (!ctx.cr6.gt) goto loc_82411BBC;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r31,100
	ctx.r27.s64 = ctx.r31.s64 + 100;
loc_82411B64:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82411b7c
	if (ctx.cr6.eq) goto loc_82411B7C;
	// lwzx r6,r28,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
loc_82411B7C:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82411b8c
	if (ctx.cr6.eq) goto loc_82411B8C;
	// lwzx r7,r28,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
loc_82411B8C:
	// add r8,r27,r28
	ctx.r8.u64 = ctx.r27.u64 + ctx.r28.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x824157d8
	ctx.lr = 0x82411BA0;
	sub_824157D8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82411c94
	if (ctx.cr0.lt) goto loc_82411C94;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82411b64
	if (ctx.cr6.lt) goto loc_82411B64;
loc_82411BBC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820882b8
	ctx.lr = 0x82411BD0;
	sub_820882B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// bne 0x82411be8
	if (!ctx.cr0.eq) goto loc_82411BE8;
loc_82411BDC:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x82411c94
	goto loc_82411C94;
loc_82411BE8:
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8241e17c
	ctx.lr = 0x82411BF4;
	__imp__XamNotifyCreateListener(ctx, base);
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82411bdc
	if (ctx.cr0.eq) goto loc_82411BDC;
	// stw r25,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r25.u32);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x8241e07c
	ctx.lr = 0x82411C0C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82411c8c
	if (!ctx.cr6.eq) goto loc_82411C8C;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,6048
	ctx.r5.s64 = ctx.r11.s64 + 6048;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8208a0c0
	ctx.lr = 0x82411C3C;
	sub_8208A0C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// beq 0x82411bdc
	if (ctx.cr0.eq) goto loc_82411BDC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x820882b0
	ctx.lr = 0x82411C54;
	sub_820882B0(ctx, base);
	// lwz r6,4(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82411c8c
	if (ctx.cr6.eq) goto loc_82411C8C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8241bd30
	ctx.lr = 0x82411C7C;
	sub_8241BD30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82411c8c
	if (!ctx.cr0.eq) goto loc_82411C8C;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
loc_82411C8C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82411ca0
	if (!ctx.cr6.lt) goto loc_82411CA0;
loc_82411C94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410e68
	ctx.lr = 0x82411C9C;
	sub_82410E68(ctx, base);
loc_82411C9C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82411CA0:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_82411CB0"))) PPC_WEAK_FUNC(sub_82411CB0);
PPC_FUNC_IMPL(__imp__sub_82411CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82411CB8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-3928
	ctx.r31.s64 = ctx.r11.s64 + -3928;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-3928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82411cf0
	if (!ctx.cr6.eq) goto loc_82411CF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1164
	ctx.r3.s64 = 1164;
	// bl 0x8240e2a8
	ctx.lr = 0x82411CE4;
	sub_8240E2A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82411d08
	if (ctx.cr6.eq) goto loc_82411D08;
loc_82411CF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82411D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82411d10
	goto loc_82411D10;
loc_82411D08:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82411D10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82411D18"))) PPC_WEAK_FUNC(sub_82411D18);
PPC_FUNC_IMPL(__imp__sub_82411D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82411D30:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82411d50
	if (ctx.cr6.eq) goto loc_82411D50;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
loc_82411D50:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82411d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82411D30;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82411cb0
	sub_82411CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82411D64"))) PPC_WEAK_FUNC(sub_82411D64);
PPC_FUNC_IMPL(__imp__sub_82411D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82411D68"))) PPC_WEAK_FUNC(sub_82411D68);
PPC_FUNC_IMPL(__imp__sub_82411D68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82411D70"))) PPC_WEAK_FUNC(sub_82411D70);
PPC_FUNC_IMPL(__imp__sub_82411D70) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8241eb9c
	ctx.lr = 0x82411D8C;
	__imp__XamUserGetDeviceContext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82411d9c
	if (!ctx.cr0.lt) goto loc_82411D9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82411da4
	goto loc_82411DA4;
loc_82411D9C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r3,r11,0,0,3
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
loc_82411DA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82411DB4"))) PPC_WEAK_FUNC(sub_82411DB4);
PPC_FUNC_IMPL(__imp__sub_82411DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82411DB8"))) PPC_WEAK_FUNC(sub_82411DB8);
PPC_FUNC_IMPL(__imp__sub_82411DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82411DC0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82411e10
	if (!ctx.cr6.gt) goto loc_82411E10;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
loc_82411DE0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82411DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82411e1c
	if (ctx.cr6.eq) goto loc_82411E1C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82411de0
	if (ctx.cr6.lt) goto loc_82411DE0;
loc_82411E10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82411E14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_82411E1C:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x82411e14
	goto loc_82411E14;
}

__attribute__((alias("__imp__sub_82411E2C"))) PPC_WEAK_FUNC(sub_82411E2C);
PPC_FUNC_IMPL(__imp__sub_82411E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82411E30"))) PPC_WEAK_FUNC(sub_82411E30);
PPC_FUNC_IMPL(__imp__sub_82411E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x82411E38;
	sub_82248780(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// beq cr6,0x82411e8c
	if (ctx.cr6.eq) goto loc_82411E8C;
	// bl 0x8241ebac
	ctx.lr = 0x82411E5C;
	__imp__XamVoiceHeadsetPresent(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82411e78
	if (ctx.cr6.eq) goto loc_82411E78;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82411e80
	if (ctx.cr6.eq) goto loc_82411E80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82411e88
	if (!ctx.cr6.eq) goto loc_82411E88;
loc_82411E78:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82411e88
	if (ctx.cr6.eq) goto loc_82411E88;
loc_82411E80:
	// li r28,1
	ctx.r28.s64 = 1;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82411E88:
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
loc_82411E8C:
	// bl 0x8241eb8c
	ctx.lr = 0x82411E90;
	__imp__XamVoiceIsActiveProcess(ctx, base);
	// lis r11,-32186
	ctx.r11.s64 = -2109341696;
	// addi r30,r11,14052
	ctx.r30.s64 = ctx.r11.s64 + 14052;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82411eb8
	if (ctx.cr6.eq) goto loc_82411EB8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82411EB8:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82411ed4
	if (!ctx.cr6.eq) goto loc_82411ED4;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82412054
	if (ctx.cr6.eq) goto loc_82412054;
loc_82411ED4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8241e11c
	ctx.lr = 0x82411EDC;
	__imp__XamUserGetSigninState(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824120e0
	if (ctx.cr6.eq) goto loc_824120E0;
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8208a480
	ctx.lr = 0x82411F00;
	sub_8208A480(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82412028
	if (ctx.cr6.eq) goto loc_82412028;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82412028
	if (!ctx.cr6.eq) goto loc_82412028;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r26,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r26.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82412054
	if (!ctx.cr6.gt) goto loc_82412054;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82411F2C:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addis r10,r10,-4100
	ctx.r10.s64 = ctx.r10.s64 + -268697600;
	// addic. r10,r10,-12
	ctx.xer.ca = ctx.r10.u32 > 11;
	ctx.r10.s64 = ctx.r10.s64 + -12;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82411fec
	if (ctx.cr0.eq) goto loc_82411FEC;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82411fa8
	if (ctx.cr6.eq) goto loc_82411FA8;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8241200c
	if (!ctx.cr6.eq) goto loc_8241200C;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// ble cr6,0x82411f6c
	if (!ctx.cr6.gt) goto loc_82411F6C;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_82411F6C:
	// lwa r10,32(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 32));
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8241200c
	if (ctx.cr6.eq) goto loc_8241200C;
	// stb r26,214(r31)
	PPC_STORE_U8(ctx.r31.u32 + 214, ctx.r26.u8);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82412008
	goto loc_82412008;
loc_82411FA8:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// beq cr6,0x82411fc0
	if (ctx.cr6.eq) goto loc_82411FC0;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x82411fc4
	goto loc_82411FC4;
loc_82411FC0:
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82411FC4:
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// beq cr6,0x82411fe0
	if (ctx.cr6.eq) goto loc_82411FE0;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82411fe4
	goto loc_82411FE4;
loc_82411FE0:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82411FE4:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82412008
	goto loc_82412008;
loc_82411FEC:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// beq cr6,0x82412004
	if (ctx.cr6.eq) goto loc_82412004;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82412008
	goto loc_82412008;
loc_82412004:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82412008:
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_8241200C:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82411f2c
	if (ctx.cr6.lt) goto loc_82411F2C;
	// b 0x82412054
	goto loc_82412054;
loc_82412028:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82412054
	if (ctx.cr6.eq) goto loc_82412054;
	// stw r26,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r26.u32);
loc_82412038:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82412054
	if (ctx.cr6.eq) goto loc_82412054;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82412054:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82412094
	if (!ctx.cr6.eq) goto loc_82412094;
loc_8241205C:
	// li r30,100
	ctx.r30.s64 = 100;
loc_82412060:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82412084
	if (ctx.cr6.eq) goto loc_82412084;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82412084
	if (ctx.cr6.eq) goto loc_82412084;
	// bl 0x82414e38
	ctx.lr = 0x82412084;
	sub_82414E38(ctx, base);
loc_82412084:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,236
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 236, ctx.xer);
	// blt cr6,0x82412060
	if (ctx.cr6.lt) goto loc_82412060;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82412094:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x824120d8
	if (!ctx.cr6.eq) goto loc_824120D8;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lbz r11,214(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 214);
	// lfs f0,8616(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8616);
	ctx.f0.f64 = double(temp.f32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// bl 0x82410b98
	ctx.lr = 0x824120D8;
	sub_82410B98(ctx, base);
loc_824120D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_824120E0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82412038
	if (ctx.cr6.eq) goto loc_82412038;
	// lis r3,-2
	ctx.r3.s64 = -131072;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// lwz r10,188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r3,r3,2001
	ctx.r3.u64 = ctx.r3.u64 | 2001;
	// bl 0x8241eb7c
	ctx.lr = 0x82412118;
	__imp__XamUserReadProfileSettings(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82412144
	if (ctx.cr0.eq) goto loc_82412144;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82412144
	if (ctx.cr6.eq) goto loc_82412144;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8241214c
	if (ctx.cr6.eq) goto loc_8241214C;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x8241214c
	goto loc_8241214C;
loc_82412144:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
loc_8241214C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,252
	ctx.r4.s64 = 252;
	// bl 0x8241e13c
	ctx.lr = 0x8241215C;
	__imp__XamUserCheckPrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824121a4
	if (!ctx.cr0.eq) goto loc_824121A4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824121a4
	if (ctx.cr6.eq) goto loc_824121A4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,251
	ctx.r4.s64 = 251;
	// bl 0x8241e13c
	ctx.lr = 0x82412180;
	__imp__XamUserCheckPrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8241219c
	if (!ctx.cr0.eq) goto loc_8241219C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8241219c
	if (!ctx.cr6.eq) goto loc_8241219C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x824121a8
	goto loc_824121A8;
loc_8241219C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x824121a8
	goto loc_824121A8;
loc_824121A4:
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_824121A8:
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824121bc
	if (ctx.cr6.eq) goto loc_824121BC;
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_824121BC:
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x8241205c
	goto loc_8241205C;
}

__attribute__((alias("__imp__sub_824121D0"))) PPC_WEAK_FUNC(sub_824121D0);
PPC_FUNC_IMPL(__imp__sub_824121D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x824121D8;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r21,2
	ctx.r21.s64 = 2;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r23,r3,84
	ctx.r23.s64 = ctx.r3.s64 + 84;
loc_824121FC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x82412220
	if (!ctx.cr6.eq) goto loc_82412220;
	// stwcx. r21,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r21.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824121fc
	if (!ctx.cr0.eq) goto loc_824121FC;
	// b 0x82412228
	goto loc_82412228;
loc_82412220:
	// stwcx. r11,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82412228:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824123ac
	if (!ctx.cr6.eq) goto loc_824123AC;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824123a8
	if (ctx.cr6.eq) goto loc_824123A8;
	// lwz r11,212(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 212);
	// rlwinm. r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824123a8
	if (ctx.cr0.eq) goto loc_824123A8;
	// addi r26,r27,80
	ctx.r26.s64 = ctx.r27.s64 + 80;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// bl 0x8241e62c
	ctx.lr = 0x82412260;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// addi r28,r27,64
	ctx.r28.s64 = ctx.r27.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82412290
	goto loc_82412290;
loc_82412270:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82412298
	if (!ctx.cr6.lt) goto loc_82412298;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_82412290:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82412270
	if (!ctx.cr6.eq) goto loc_82412270;
loc_82412298:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241e61c
	ctx.lr = 0x824122A0;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x824123ac
	if (ctx.cr6.lt) goto loc_824123AC;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8241239c
	goto loc_8241239C;
loc_824122B0:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x824123ac
	if (!ctx.cr6.lt) goto loc_824123AC;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x824123ac
	if (ctx.cr6.eq) goto loc_824123AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r29,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r29.s64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824122e8
	if (ctx.cr6.lt) goto loc_824122E8;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_824122E8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r29,r24
	ctx.r4.u64 = ctx.r29.u64 + ctx.r24.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82248a40
	ctx.lr = 0x824122FC;
	sub_82248A40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82412318
	if (!ctx.cr6.lt) goto loc_82412318;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82412318:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82412398
	if (!ctx.cr6.eq) goto loc_82412398;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241e62c
	ctx.lr = 0x82412334;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82412360
	if (ctx.cr6.eq) goto loc_82412360;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82412354
	if (!ctx.cr6.eq) goto loc_82412354;
	// stw r22,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r22.u32);
loc_82412354:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
loc_82412360:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8241238c
	if (!ctx.cr6.eq) goto loc_8241238C;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// addi r11,r27,72
	ctx.r11.s64 = ctx.r27.s64 + 72;
	// lwz r10,76(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82412384
	if (ctx.cr6.eq) goto loc_82412384;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x82412388
	goto loc_82412388;
loc_82412384:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82412388:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_8241238C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241e61c
	ctx.lr = 0x82412394;
	__imp__KfReleaseSpinLock(ctx, base);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82412398:
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
loc_8241239C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824122b0
	if (!ctx.cr6.eq) goto loc_824122B0;
	// b 0x824123ac
	goto loc_824123AC;
loc_824123A8:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_824123AC:
	// li r10,3
	ctx.r10.s64 = 3;
loc_824123B0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824123d4
	if (!ctx.cr6.eq) goto loc_824123D4;
	// stwcx. r22,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r22.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824123b0
	if (!ctx.cr0.eq) goto loc_824123B0;
	// b 0x82412454
	goto loc_82412454;
loc_824123D4:
	// stwcx. r11,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x82412454
	goto loc_82412454;
loc_824123E0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x82412404
	if (!ctx.cr6.eq) goto loc_82412404;
	// stwcx. r20,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r20.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824123e0
	if (!ctx.cr0.eq) goto loc_824123E0;
	// b 0x8241240c
	goto loc_8241240C;
loc_82412404:
	// stwcx. r11,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8241240C:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82412460
	if (ctx.cr6.eq) goto loc_82412460;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82412460
	if (ctx.cr6.eq) goto loc_82412460;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82412460
	if (ctx.cr6.eq) goto loc_82412460;
loc_82412428:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8241244c
	if (!ctx.cr6.eq) goto loc_8241244C;
	// stwcx. r22,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r22.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82412428
	if (!ctx.cr0.eq) goto loc_82412428;
	// b 0x82412454
	goto loc_82412454;
loc_8241244C:
	// stwcx. r11,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82412454:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824123e0
	if (!ctx.cr6.eq) goto loc_824123E0;
loc_82412460:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_8241246C"))) PPC_WEAK_FUNC(sub_8241246C);
PPC_FUNC_IMPL(__imp__sub_8241246C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82412470"))) PPC_WEAK_FUNC(sub_82412470);
PPC_FUNC_IMPL(__imp__sub_82412470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x82412478;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
	// bl 0x8241e2bc
	ctx.lr = 0x82412490;
	__imp__XMsgCancelIORequest(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82412510
	goto loc_82412510;
loc_824124A0:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
loc_824124A8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x824124cc
	if (!ctx.cr6.eq) goto loc_824124CC;
	// stwcx. r8,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824124a8
	if (!ctx.cr0.eq) goto loc_824124A8;
	// b 0x824124d4
	goto loc_824124D4;
loc_824124CC:
	// stwcx. r10,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_824124D4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8241251c
	if (ctx.cr6.eq) goto loc_8241251C;
loc_824124E0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82412504
	if (!ctx.cr6.eq) goto loc_82412504;
	// stwcx. r28,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x824124e0
	if (!ctx.cr0.eq) goto loc_824124E0;
	// b 0x8241250c
	goto loc_8241250C;
loc_82412504:
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8241250C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82412510:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824124a0
	if (!ctx.cr6.eq) goto loc_824124A0;
	// b 0x82412528
	goto loc_82412528;
loc_8241251C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241251c
	if (!ctx.cr6.eq) goto loc_8241251C;
loc_82412528:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8241253c
	if (ctx.cr6.eq) goto loc_8241253C;
	// bl 0x8241ebbc
	ctx.lr = 0x82412538;
	__imp__XamVoiceClose(ctx, base);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_8241253C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x824173b0
	ctx.lr = 0x82412544;
	sub_824173B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// bl 0x82410b98
	ctx.lr = 0x8241255C;
	sub_82410B98(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x82411d18
	ctx.lr = 0x82412568;
	sub_82411D18(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824125a4
	if (!ctx.cr6.gt) goto loc_824125A4;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
loc_8241257C:
	// lwz r3,-16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82412590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r28,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r29.u32 = ea;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241257c
	if (ctx.cr6.lt) goto loc_8241257C;
loc_824125A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_824125AC"))) PPC_WEAK_FUNC(sub_824125AC);
PPC_FUNC_IMPL(__imp__sub_824125AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824125B0"))) PPC_WEAK_FUNC(sub_824125B0);
PPC_FUNC_IMPL(__imp__sub_824125B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x824125B8;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8241263c
	if (ctx.cr6.eq) goto loc_8241263C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
loc_824125E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82411db8
	ctx.lr = 0x824125EC;
	sub_82411DB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241263c
	if (ctx.cr0.eq) goto loc_8241263C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82412604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// blt 0x8241262c
	if (ctx.cr0.lt) goto loc_8241262C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x824125e0
	if (ctx.cr6.lt) goto loc_824125E0;
	// b 0x8241263c
	goto loc_8241263C;
loc_8241262C:
	// addi r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 9;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
loc_8241263C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82412648"))) PPC_WEAK_FUNC(sub_82412648);
PPC_FUNC_IMPL(__imp__sub_82412648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x82412650;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824126c0
	if (ctx.cr6.eq) goto loc_824126C0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
	// subf r27,r5,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_82412670:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r27,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x82411db8
	ctx.lr = 0x8241267C;
	sub_82411DB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824126a8
	if (ctx.cr0.eq) goto loc_824126A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824126a8
	if (ctx.cr6.eq) goto loc_824126A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824126A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824126ac
	goto loc_824126AC;
loc_824126A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824126AC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82412670
	if (!ctx.cr0.eq) goto loc_82412670;
loc_824126C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_824126C8"))) PPC_WEAK_FUNC(sub_824126C8);
PPC_FUNC_IMPL(__imp__sub_824126C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x824126D0;
	sub_82248780(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82412754
	if (ctx.cr6.eq) goto loc_82412754;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
loc_824126F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82411db8
	ctx.lr = 0x82412704;
	sub_82411DB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82412754
	if (ctx.cr0.eq) goto loc_82412754;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8241271C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// blt 0x82412744
	if (ctx.cr0.lt) goto loc_82412744;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x824126f8
	if (ctx.cr6.lt) goto loc_824126F8;
	// b 0x82412754
	goto loc_82412754;
loc_82412744:
	// addi r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 9;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
loc_82412754:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_82412760"))) PPC_WEAK_FUNC(sub_82412760);
PPC_FUNC_IMPL(__imp__sub_82412760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82412768;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// beq cr6,0x824127f8
	if (ctx.cr6.eq) goto loc_824127F8;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// subf r27,r5,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_82412794:
	// lwz r29,-20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824127AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r27,r30
	PPC_STORE_U32(ctx.r27.u32 + ctx.r30.u32, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824127dc
	if (ctx.cr6.eq) goto loc_824127DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824127D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// b 0x824127e0
	goto loc_824127E0;
loc_824127DC:
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_824127E0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82412794
	if (ctx.cr6.lt) goto loc_82412794;
loc_824127F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_82412800"))) PPC_WEAK_FUNC(sub_82412800);
PPC_FUNC_IMPL(__imp__sub_82412800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x82412808;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82411e30
	ctx.lr = 0x82412814;
	sub_82411E30(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82412828
	if (!ctx.cr6.eq) goto loc_82412828;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82412a50
	goto loc_82412A50;
loc_82412828:
	// lwz r31,88(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// addi r29,r26,88
	ctx.r29.s64 = ctx.r26.s64 + 88;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x824128dc
	goto loc_824128DC;
loc_82412838:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x824128e4
	if (ctx.cr6.eq) goto loc_824128E4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82412870
	if (ctx.cr6.eq) goto loc_82412870;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82412864
	if (!ctx.cr6.eq) goto loc_82412864;
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
loc_82412864:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
loc_82412870:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82412894
	if (!ctx.cr6.eq) goto loc_82412894;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r25.u32);
loc_82412894:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r26,80
	ctx.r30.s64 = ctx.r26.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// bl 0x8241e62c
	ctx.lr = 0x824128A8;
	__imp__KfAcquireSpinLock(ctx, base);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lwz r10,68(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// addi r11,r26,64
	ctx.r11.s64 = ctx.r26.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824128c8
	if (ctx.cr6.eq) goto loc_824128C8;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x824128cc
	goto loc_824128CC;
loc_824128C8:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_824128CC:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e61c
	ctx.lr = 0x824128D8;
	__imp__KfReleaseSpinLock(ctx, base);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_824128DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82412838
	if (!ctx.cr6.eq) goto loc_82412838;
loc_824128E4:
	// lwz r31,72(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// addi r27,r26,72
	ctx.r27.s64 = ctx.r26.s64 + 72;
	// b 0x824129e0
	goto loc_824129E0;
loc_824128F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82412a04
	if (!ctx.cr0.eq) goto loc_82412A04;
	// addi r30,r26,80
	ctx.r30.s64 = ctx.r26.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e62c
	ctx.lr = 0x82412910;
	__imp__KfAcquireSpinLock(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8240edc8
	ctx.lr = 0x8241291C;
	sub_8240EDC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82412934
	if (!ctx.cr0.eq) goto loc_82412934;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8240edc8
	ctx.lr = 0x8241292C;
	sub_8240EDC8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x824129ec
	if (!ctx.cr6.gt) goto loc_824129EC;
loc_82412934:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241295c
	if (ctx.cr6.eq) goto loc_8241295C;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82412950
	if (!ctx.cr6.eq) goto loc_82412950;
	// stw r25,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r25.u32);
loc_82412950:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
loc_8241295C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e61c
	ctx.lr = 0x82412968;
	__imp__KfReleaseSpinLock(ctx, base);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82412980
	if (ctx.cr6.eq) goto loc_82412980;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// b 0x82412984
	goto loc_82412984;
loc_82412980:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82412984:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// addi r7,r26,96
	ctx.r7.s64 = ctx.r26.s64 + 96;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x82415a40
	ctx.lr = 0x824129A8;
	sub_82415A40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x8241ebcc
	ctx.lr = 0x824129D4;
	__imp__XamVoiceSubmitPacket(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824129fc
	if (ctx.cr0.lt) goto loc_824129FC;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_824129E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824128f0
	if (!ctx.cr6.eq) goto loc_824128F0;
	// b 0x82412a04
	goto loc_82412A04;
loc_824129EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241e61c
	ctx.lr = 0x824129F8;
	__imp__KfReleaseSpinLock(ctx, base);
	// b 0x82412a04
	goto loc_82412A04;
loc_824129FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_82412A04:
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x82417470
	ctx.lr = 0x82412A0C;
	sub_82417470(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82412a4c
	if (ctx.cr0.lt) goto loc_82412A4C;
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82412a4c
	if (!ctx.cr6.gt) goto loc_82412A4C;
	// addi r30,r26,12
	ctx.r30.s64 = ctx.r26.s64 + 12;
loc_82412A28:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82412A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82412a28
	if (ctx.cr6.lt) goto loc_82412A28;
loc_82412A4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82412A50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

