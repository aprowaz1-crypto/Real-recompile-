#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823B8158"))) PPC_WEAK_FUNC(sub_823B8158);
PPC_FUNC_IMPL(__imp__sub_823B8158) {
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
	// bl 0x823a0f10
	ctx.lr = 0x823B8170;
	sub_823A0F10(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r9,256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stw r8,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r8.u32);
	// lwz r7,284(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// stw r7,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r7.u32);
	// lwz r6,276(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r6,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r6.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B81B4"))) PPC_WEAK_FUNC(sub_823B81B4);
PPC_FUNC_IMPL(__imp__sub_823B81B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B81B8"))) PPC_WEAK_FUNC(sub_823B81B8);
PPC_FUNC_IMPL(__imp__sub_823B81B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b8204
	if (ctx.cr6.eq) goto loc_823B8204;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B81D0:
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823b81f4
	if (!ctx.cr6.eq) goto loc_823B81F4;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r6,r5
	ctx.r6.s64 = ctx.r5.s8;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x823b820c
	if (ctx.cr6.eq) goto loc_823B820C;
loc_823B81F4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823b81d0
	if (ctx.cr6.lt) goto loc_823B81D0;
loc_823B8204:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823B820C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B8214"))) PPC_WEAK_FUNC(sub_823B8214);
PPC_FUNC_IMPL(__imp__sub_823B8214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8218"))) PPC_WEAK_FUNC(sub_823B8218);
PPC_FUNC_IMPL(__imp__sub_823B8218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823B8220;
	sub_82248774(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B8238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x823b8260
	if (ctx.cr6.eq) goto loc_823B8260;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B8254;
	sub_823AC608(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823B8260:
	// bl 0x823ac6b8
	ctx.lr = 0x823B8264;
	sub_823AC6B8(ctx, base);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b81b8
	ctx.lr = 0x823B8280;
	sub_823B81B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b8538
	if (ctx.cr6.eq) goto loc_823B8538;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b81b8
	ctx.lr = 0x823B829C;
	sub_823B81B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b8538
	if (ctx.cr6.eq) goto loc_823B8538;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// lbz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 32);
	// lwz r24,36(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// lwz r23,40(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
	// stw r11,256(r29)
	PPC_STORE_U32(ctx.r29.u32 + 256, ctx.r11.u32);
	// lwz r9,52(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823b8318
	if (!ctx.cr6.eq) goto loc_823B8318;
	// addi r3,r27,68
	ctx.r3.s64 = ctx.r27.s64 + 68;
	// bl 0x82357358
	ctx.lr = 0x823B82D0;
	sub_82357358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82248a40
	ctx.lr = 0x823B82E0;
	sub_82248A40(ctx, base);
	// addi r3,r29,192
	ctx.r3.s64 = ctx.r29.s64 + 192;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82248a40
	ctx.lr = 0x823B82F0;
	sub_82248A40(ctx, base);
	// ld r11,116(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 116);
	// addi r4,r27,128
	ctx.r4.s64 = ctx.r27.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// std r11,184(r29)
	PPC_STORE_U64(ctx.r29.u32 + 184, ctx.r11.u64);
	// bl 0x82248a40
	ctx.lr = 0x823B8308;
	sub_82248A40(ctx, base);
	// addi r3,r29,228
	ctx.r3.s64 = ctx.r29.s64 + 228;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x823B8318;
	sub_82248A40(ctx, base);
loc_823B8318:
	// addi r30,r29,260
	ctx.r30.s64 = ctx.r29.s64 + 260;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82256338
	ctx.lr = 0x823B832C;
	sub_82256338(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b836c
	if (ctx.cr6.eq) goto loc_823B836C;
loc_823B8338:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B8350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B8360;
	sub_823AC608(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823B836C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823728a8
	ctx.lr = 0x823B8374;
	sub_823728A8(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b84c4
	if (ctx.cr6.eq) goto loc_823B84C4;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_823B8390:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r9,r4,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b8428
	if (!ctx.cr6.eq) goto loc_823B8428;
	// cmplwi cr6,r4,32778
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32778, ctx.xer);
	// bne cr6,0x823b8408
	if (!ctx.cr6.eq) goto loc_823B8408;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,280(r29)
	PPC_STORE_U32(ctx.r29.u32 + 280, ctx.r10.u32);
	// lwz r10,256(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823b83ec
	if (!ctx.cr6.eq) goto loc_823B83EC;
	// ori r9,r10,62
	ctx.r9.u64 = ctx.r10.u64 | 62;
	// stw r26,276(r29)
	PPC_STORE_U32(ctx.r29.u32 + 276, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,256(r29)
	PPC_STORE_U32(ctx.r29.u32 + 256, ctx.r9.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82256270
	ctx.lr = 0x823B83E8;
	sub_82256270(ctx, base);
	// b 0x823b84b8
	goto loc_823B84B8;
loc_823B83EC:
	// ori r9,r10,46
	ctx.r9.u64 = ctx.r10.u64 | 46;
	// stw r25,276(r29)
	PPC_STORE_U32(ctx.r29.u32 + 276, ctx.r25.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,256(r29)
	PPC_STORE_U32(ctx.r29.u32 + 256, ctx.r9.u32);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82256270
	ctx.lr = 0x823B8404;
	sub_82256270(ctx, base);
	// b 0x823b84b8
	goto loc_823B84B8;
loc_823B8408:
	// cmplwi cr6,r4,32779
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32779, ctx.xer);
	// bne cr6,0x823b8418
	if (!ctx.cr6.eq) goto loc_823B8418;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,284(r29)
	PPC_STORE_U32(ctx.r29.u32 + 284, ctx.r10.u32);
loc_823B8418:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82256270
	ctx.lr = 0x823B8424;
	sub_82256270(ctx, base);
	// b 0x823b84b8
	goto loc_823B84B8;
loc_823B8428:
	// rlwinm r9,r4,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823b84b8
	if (!ctx.cr6.eq) goto loc_823B84B8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bgt cr6,0x823b84b8
	if (ctx.cr6.gt) goto loc_823B84B8;
	// lis r12,-32196
	ctx.r12.s64 = -2109997056;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-31652
	ctx.r12.s64 = ctx.r12.s64 + -31652;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-31600(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31600);
	// lwz r17,-31560(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31560);
	// lwz r17,-31560(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31560);
	// lwz r17,-31560(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31560);
	// lwz r17,-31560(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31560);
	// lwz r17,-31600(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31600);
	// lwz r17,-31560(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31560);
	// lwz r17,-31588(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31588);
	// lwz r17,-31560(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31560);
	// lwz r17,-31600(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31600);
	// lwz r17,-31588(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31588);
	// lwz r17,-31576(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31576);
	// lwz r17,-31576(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -31576);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x823b84b0
	goto loc_823B84B0;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x823b84b0
	goto loc_823B84B0;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
loc_823B84B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82256330
	ctx.lr = 0x823B84B8;
	sub_82256330(ctx, base);
loc_823B84B8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x823b8390
	if (!ctx.cr0.eq) goto loc_823B8390;
loc_823B84C4:
	// lwz r11,156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b84dc
	if (ctx.cr6.eq) goto loc_823B84DC;
	// lwz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// ori r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 512;
	// stw r10,256(r29)
	PPC_STORE_U32(ctx.r29.u32 + 256, ctx.r10.u32);
loc_823B84DC:
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// lwz r3,256(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b84f0
	if (ctx.cr6.eq) goto loc_823B84F0;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_823B84F0:
	// addi r10,r29,180
	ctx.r10.s64 = ctx.r29.s64 + 180;
	// addi r9,r29,152
	ctx.r9.s64 = ctx.r29.s64 + 152;
	// addi r8,r29,184
	ctx.r8.s64 = ctx.r29.s64 + 184;
	// addi r7,r29,248
	ctx.r7.s64 = ctx.r29.s64 + 248;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8240c6a8
	ctx.lr = 0x823B8510;
	sub_8240C6A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b8524
	if (ctx.cr6.eq) goto loc_823B8524;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b8338
	if (!ctx.cr6.eq) goto loc_823B8338;
loc_823B8524:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B852C;
	sub_823AC668(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823B8538:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823B854C;
	sub_823AC608(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823B8558"))) PPC_WEAK_FUNC(sub_823B8558);
PPC_FUNC_IMPL(__imp__sub_823B8558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823B8560;
	sub_82248780(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B8570;
	sub_823A0F10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B857C;
	sub_823AC6B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823b8728
	if (ctx.cr6.eq) goto loc_823B8728;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823b8728
	if (!ctx.cr6.eq) goto loc_823B8728;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b871c
	if (ctx.cr6.eq) goto loc_823B871C;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372d50
	ctx.lr = 0x823B85AC;
	sub_82372D50(ctx, base);
	// addi r4,r31,260
	ctx.r4.s64 = ctx.r31.s64 + 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823732f8
	ctx.lr = 0x823B85B8;
	sub_823732F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b85e0
	if (ctx.cr6.eq) goto loc_823B85E0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,12
	ctx.r5.s64 = 12;
	// ori r4,r4,33033
	ctx.r4.u64 = ctx.r4.u64 | 33033;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82393a58
	ctx.lr = 0x823B85D8;
	sub_82393A58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b8624
	if (!ctx.cr6.eq) goto loc_823B8624;
loc_823B85E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// bl 0x823ac608
	ctx.lr = 0x823B8610;
	sub_823AC608(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82373298
	ctx.lr = 0x823B8618;
	sub_82373298(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823B8624:
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82370310
	ctx.lr = 0x823B8630;
	sub_82370310(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,30604
	ctx.r26.s64 = ctx.r11.s64 + 30604;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// bl 0x82370088
	ctx.lr = 0x823B8648;
	sub_82370088(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82370360
	ctx.lr = 0x823B8654;
	sub_82370360(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r29,36
	ctx.r3.s64 = ctx.r29.s64 + 36;
	// bl 0x82370360
	ctx.lr = 0x823B8660;
	sub_82370360(ctx, base);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x823700d8
	ctx.lr = 0x823B866C;
	sub_823700D8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823700d8
	ctx.lr = 0x823B8674;
	sub_823700D8(ctx, base);
	// ld r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 184);
	// addi r4,r31,228
	ctx.r4.s64 = ctx.r31.s64 + 228;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r27,r31,184
	ctx.r27.s64 = ctx.r31.s64 + 184;
	// std r10,84(r29)
	PPC_STORE_U64(ctx.r29.u32 + 84, ctx.r10.u64);
	// bl 0x82248a40
	ctx.lr = 0x823B8690;
	sub_82248A40(ctx, base);
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x823B86A0;
	sub_82248A40(ctx, base);
	// ld r9,248(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 248);
	// std r9,112(r29)
	PPC_STORE_U64(ctx.r29.u32 + 112, ctx.r9.u64);
	// bl 0x823abc48
	ctx.lr = 0x823B86AC;
	sub_823ABC48(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,148(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// lwz r7,144(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// lwz r6,284(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// lwz r5,280(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x823abcf8
	ctx.lr = 0x823B86C8;
	sub_823ABCF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b8714
	if (!ctx.cr6.eq) goto loc_823B8714;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// bl 0x823ac608
	ctx.lr = 0x823B8700;
	sub_823AC608(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82373298
	ctx.lr = 0x823B8708;
	sub_82373298(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823B8714:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82373298
	ctx.lr = 0x823B871C;
	sub_82373298(ctx, base);
loc_823B871C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823B8728:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lis r4,4
	ctx.r4.s64 = 262144;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// bl 0x823ac608
	ctx.lr = 0x823B8758;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823B8764"))) PPC_WEAK_FUNC(sub_823B8764);
PPC_FUNC_IMPL(__imp__sub_823B8764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8768"))) PPC_WEAK_FUNC(sub_823B8768);
PPC_FUNC_IMPL(__imp__sub_823B8768) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823ac4d8
	ctx.lr = 0x823B8788;
	sub_823AC4D8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-26088
	ctx.r9.s64 = ctx.r10.s64 + -26088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B87AC"))) PPC_WEAK_FUNC(sub_823B87AC);
PPC_FUNC_IMPL(__imp__sub_823B87AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B87B0"))) PPC_WEAK_FUNC(sub_823B87B0);
PPC_FUNC_IMPL(__imp__sub_823B87B0) {
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
	// bl 0x823a1e50
	ctx.lr = 0x823B87C0;
	sub_823A1E50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B87D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_823B87E4"))) PPC_WEAK_FUNC(sub_823B87E4);
PPC_FUNC_IMPL(__imp__sub_823B87E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B87E8"))) PPC_WEAK_FUNC(sub_823B87E8);
PPC_FUNC_IMPL(__imp__sub_823B87E8) {
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
	// bl 0x823a0f10
	ctx.lr = 0x823B87F8;
	sub_823A0F10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823aba40
	ctx.lr = 0x823B8800;
	sub_823ABA40(ctx, base);
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

__attribute__((alias("__imp__sub_823B8814"))) PPC_WEAK_FUNC(sub_823B8814);
PPC_FUNC_IMPL(__imp__sub_823B8814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8818"))) PPC_WEAK_FUNC(sub_823B8818);
PPC_FUNC_IMPL(__imp__sub_823B8818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-26088
	ctx.r10.s64 = ctx.r11.s64 + -26088;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823ac548
	ctx.lr = 0x823B8844;
	sub_823AC548(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b885c
	if (ctx.cr6.eq) goto loc_823B885C;
	// bl 0x82357128
	ctx.lr = 0x823B8858;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B885C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B8874"))) PPC_WEAK_FUNC(sub_823B8874);
PPC_FUNC_IMPL(__imp__sub_823B8874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8878"))) PPC_WEAK_FUNC(sub_823B8878);
PPC_FUNC_IMPL(__imp__sub_823B8878) {
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
	// bl 0x823a1e50
	ctx.lr = 0x823B8888;
	sub_823A1E50(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b88a8
	if (ctx.cr6.eq) goto loc_823B88A8;
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
loc_823B88A8:
	// bl 0x823a43b0
	ctx.lr = 0x823B88AC;
	sub_823A43B0(ctx, base);
	// bl 0x823a5878
	ctx.lr = 0x823B88B0;
	sub_823A5878(ctx, base);
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

__attribute__((alias("__imp__sub_823B88C4"))) PPC_WEAK_FUNC(sub_823B88C4);
PPC_FUNC_IMPL(__imp__sub_823B88C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B88C8"))) PPC_WEAK_FUNC(sub_823B88C8);
PPC_FUNC_IMPL(__imp__sub_823B88C8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823ac4d8
	ctx.lr = 0x823B88E8;
	sub_823AC4D8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-26016
	ctx.r9.s64 = ctx.r10.s64 + -26016;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B890C"))) PPC_WEAK_FUNC(sub_823B890C);
PPC_FUNC_IMPL(__imp__sub_823B890C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8910"))) PPC_WEAK_FUNC(sub_823B8910);
PPC_FUNC_IMPL(__imp__sub_823B8910) {
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
	// bl 0x823a1e50
	ctx.lr = 0x823B8928;
	sub_823A1E50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B8938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b896c
	if (!ctx.cr6.eq) goto loc_823B896C;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B8954;
	sub_823AC608(ctx, base);
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
loc_823B896C:
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

__attribute__((alias("__imp__sub_823B8984"))) PPC_WEAK_FUNC(sub_823B8984);
PPC_FUNC_IMPL(__imp__sub_823B8984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8988"))) PPC_WEAK_FUNC(sub_823B8988);
PPC_FUNC_IMPL(__imp__sub_823B8988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-26016
	ctx.r10.s64 = ctx.r11.s64 + -26016;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823ac548
	ctx.lr = 0x823B89B4;
	sub_823AC548(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b89cc
	if (ctx.cr6.eq) goto loc_823B89CC;
	// bl 0x82357128
	ctx.lr = 0x823B89C8;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B89CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B89E4"))) PPC_WEAK_FUNC(sub_823B89E4);
PPC_FUNC_IMPL(__imp__sub_823B89E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B89E8"))) PPC_WEAK_FUNC(sub_823B89E8);
PPC_FUNC_IMPL(__imp__sub_823B89E8) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823B8A00;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b8a2c
	if (ctx.cr6.eq) goto loc_823B8A2C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823b8a2c
	if (!ctx.cr6.eq) goto loc_823B8A2C;
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
loc_823B8A2C:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B8A40;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823B8A58"))) PPC_WEAK_FUNC(sub_823B8A58);
PPC_FUNC_IMPL(__imp__sub_823B8A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a1e50
	ctx.lr = 0x823B8A74;
	sub_823A1E50(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b8a88
	if (!ctx.cr6.eq) goto loc_823B8A88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b8ae4
	goto loc_823B8AE4;
loc_823B8A88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B8A90;
	sub_823AC6B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823a0f10
	ctx.lr = 0x823B8A98;
	sub_823A0F10(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// bl 0x823a43b0
	ctx.lr = 0x823B8AA4;
	sub_823A43B0(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x823a6250
	ctx.lr = 0x823B8ABC;
	sub_823A6250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b8ae0
	if (!ctx.cr6.eq) goto loc_823B8AE0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B8AD8;
	sub_823AC608(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x823b8ae4
	goto loc_823B8AE4;
loc_823B8AE0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823B8AE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B8AFC"))) PPC_WEAK_FUNC(sub_823B8AFC);
PPC_FUNC_IMPL(__imp__sub_823B8AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8B00"))) PPC_WEAK_FUNC(sub_823B8B00);
PPC_FUNC_IMPL(__imp__sub_823B8B00) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b8bac
	if (ctx.cr6.eq) goto loc_823B8BAC;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823b8bac
	if (!ctx.cr6.eq) goto loc_823B8BAC;
	// bl 0x823ac6b8
	ctx.lr = 0x823B8B30;
	sub_823AC6B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x82256578
	ctx.lr = 0x823B8B4C;
	sub_82256578(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356fe0
	ctx.lr = 0x823B8B58;
	sub_82356FE0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82357038
	ctx.lr = 0x823B8B64;
	sub_82357038(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356eb8
	ctx.lr = 0x823B8B6C;
	sub_82356EB8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823585a0
	ctx.lr = 0x823B8B78;
	sub_823585A0(ctx, base);
	// lbz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// bl 0x82256338
	ctx.lr = 0x823B8B8C;
	sub_82256338(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8235a760
	ctx.lr = 0x823B8B98;
	sub_8235A760(ctx, base);
	// bl 0x823a0f10
	ctx.lr = 0x823B8B9C;
	sub_823A0F10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823aba40
	ctx.lr = 0x823B8BA4;
	sub_823ABA40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b8bc0
	goto loc_823B8BC0;
loc_823B8BAC:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B8BBC;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B8BC0:
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

__attribute__((alias("__imp__sub_823B8BD8"))) PPC_WEAK_FUNC(sub_823B8BD8);
PPC_FUNC_IMPL(__imp__sub_823B8BD8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823B8BF8;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-25944
	ctx.r9.s64 = ctx.r10.s64 + -25944;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B8C1C"))) PPC_WEAK_FUNC(sub_823B8C1C);
PPC_FUNC_IMPL(__imp__sub_823B8C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8C20"))) PPC_WEAK_FUNC(sub_823B8C20);
PPC_FUNC_IMPL(__imp__sub_823B8C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25944
	ctx.r10.s64 = ctx.r11.s64 + -25944;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c13b0
	ctx.lr = 0x823B8C4C;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b8c64
	if (ctx.cr6.eq) goto loc_823B8C64;
	// bl 0x82357128
	ctx.lr = 0x823B8C60;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B8C64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B8C7C"))) PPC_WEAK_FUNC(sub_823B8C7C);
PPC_FUNC_IMPL(__imp__sub_823B8C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8C80"))) PPC_WEAK_FUNC(sub_823B8C80);
PPC_FUNC_IMPL(__imp__sub_823B8C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823B8C88;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B8C98;
	sub_823AC6B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x823a43b0
	ctx.lr = 0x823B8CA0;
	sub_823A43B0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b8d48
	if (ctx.cr6.eq) goto loc_823B8D48;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bne cr6,0x823b8d48
	if (!ctx.cr6.eq) goto loc_823B8D48;
	// lwz r26,16(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823b8d3c
	if (ctx.cr6.eq) goto loc_823B8D3C;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823B8CD0:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823a4b68
	ctx.lr = 0x823B8CE0;
	sub_823A4B68(ctx, base);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823b8d0c
	if (ctx.cr6.gt) goto loc_823B8D0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239c490
	ctx.lr = 0x823B8D04;
	sub_8239C490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b8d48
	if (ctx.cr6.eq) goto loc_823B8D48;
loc_823B8D0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b8d48
	if (ctx.cr6.eq) goto loc_823B8D48;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// blt cr6,0x823b8cd0
	if (ctx.cr6.lt) goto loc_823B8CD0;
loc_823B8D3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823B8D48:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B8D5C;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823B8D68"))) PPC_WEAK_FUNC(sub_823B8D68);
PPC_FUNC_IMPL(__imp__sub_823B8D68) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823B8D88;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-25872
	ctx.r9.s64 = ctx.r10.s64 + -25872;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B8DAC"))) PPC_WEAK_FUNC(sub_823B8DAC);
PPC_FUNC_IMPL(__imp__sub_823B8DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8DB0"))) PPC_WEAK_FUNC(sub_823B8DB0);
PPC_FUNC_IMPL(__imp__sub_823B8DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25872
	ctx.r10.s64 = ctx.r11.s64 + -25872;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c13b0
	ctx.lr = 0x823B8DDC;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b8df4
	if (ctx.cr6.eq) goto loc_823B8DF4;
	// bl 0x82357128
	ctx.lr = 0x823B8DF0;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B8DF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B8E0C"))) PPC_WEAK_FUNC(sub_823B8E0C);
PPC_FUNC_IMPL(__imp__sub_823B8E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8E10"))) PPC_WEAK_FUNC(sub_823B8E10);
PPC_FUNC_IMPL(__imp__sub_823B8E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823B8E18;
	sub_82248774(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B8E28;
	sub_823AC6B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x823a43b0
	ctx.lr = 0x823B8E30;
	sub_823A43B0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b8ed8
	if (ctx.cr6.eq) goto loc_823B8ED8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x823b8ed8
	if (!ctx.cr6.eq) goto loc_823B8ED8;
	// lwz r26,16(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823b8ecc
	if (ctx.cr6.eq) goto loc_823B8ECC;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823B8E60:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823a4ad8
	ctx.lr = 0x823B8E70;
	sub_823A4AD8(ctx, base);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823b8e9c
	if (ctx.cr6.gt) goto loc_823B8E9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239c490
	ctx.lr = 0x823B8E94;
	sub_8239C490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b8ed8
	if (ctx.cr6.eq) goto loc_823B8ED8;
loc_823B8E9C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b8ed8
	if (ctx.cr6.eq) goto loc_823B8ED8;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// blt cr6,0x823b8e60
	if (ctx.cr6.lt) goto loc_823B8E60;
loc_823B8ECC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823B8ED8:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B8EEC;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823B8EF8"))) PPC_WEAK_FUNC(sub_823B8EF8);
PPC_FUNC_IMPL(__imp__sub_823B8EF8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823B8F18;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-25800
	ctx.r9.s64 = ctx.r10.s64 + -25800;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B8F3C"))) PPC_WEAK_FUNC(sub_823B8F3C);
PPC_FUNC_IMPL(__imp__sub_823B8F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8F40"))) PPC_WEAK_FUNC(sub_823B8F40);
PPC_FUNC_IMPL(__imp__sub_823B8F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25800
	ctx.r10.s64 = ctx.r11.s64 + -25800;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c13b0
	ctx.lr = 0x823B8F6C;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b8f84
	if (ctx.cr6.eq) goto loc_823B8F84;
	// bl 0x82357128
	ctx.lr = 0x823B8F80;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B8F84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B8F9C"))) PPC_WEAK_FUNC(sub_823B8F9C);
PPC_FUNC_IMPL(__imp__sub_823B8F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B8FA0"))) PPC_WEAK_FUNC(sub_823B8FA0);
PPC_FUNC_IMPL(__imp__sub_823B8FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x823B8FA8;
	sub_82248770(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B8FB8;
	sub_823AC6B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x823a43b0
	ctx.lr = 0x823B8FC0;
	sub_823A43B0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b9080
	if (ctx.cr6.eq) goto loc_823B9080;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bne cr6,0x823b9080
	if (!ctx.cr6.eq) goto loc_823B9080;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b8fec
	if (!ctx.cr6.eq) goto loc_823B8FEC;
	// li r24,1
	ctx.r24.s64 = 1;
loc_823B8FEC:
	// lwz r25,20(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823b9074
	if (ctx.cr6.eq) goto loc_823B9074;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823B9004:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823a4a28
	ctx.lr = 0x823B9018;
	sub_823A4A28(ctx, base);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823b9044
	if (ctx.cr6.gt) goto loc_823B9044;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239c490
	ctx.lr = 0x823B903C;
	sub_8239C490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b9080
	if (ctx.cr6.eq) goto loc_823B9080;
loc_823B9044:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b9080
	if (ctx.cr6.eq) goto loc_823B9080;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// blt cr6,0x823b9004
	if (ctx.cr6.lt) goto loc_823B9004;
loc_823B9074:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_823B9080:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9094;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_823B90A0"))) PPC_WEAK_FUNC(sub_823B90A0);
PPC_FUNC_IMPL(__imp__sub_823B90A0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823B90C0;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-25728
	ctx.r9.s64 = ctx.r10.s64 + -25728;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B90E4"))) PPC_WEAK_FUNC(sub_823B90E4);
PPC_FUNC_IMPL(__imp__sub_823B90E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B90E8"))) PPC_WEAK_FUNC(sub_823B90E8);
PPC_FUNC_IMPL(__imp__sub_823B90E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25728
	ctx.r10.s64 = ctx.r11.s64 + -25728;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c13b0
	ctx.lr = 0x823B9114;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b912c
	if (ctx.cr6.eq) goto loc_823B912C;
	// bl 0x82357128
	ctx.lr = 0x823B9128;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B912C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9144"))) PPC_WEAK_FUNC(sub_823B9144);
PPC_FUNC_IMPL(__imp__sub_823B9144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9148"))) PPC_WEAK_FUNC(sub_823B9148);
PPC_FUNC_IMPL(__imp__sub_823B9148) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823B9160;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b918c
	if (ctx.cr6.eq) goto loc_823B918C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x823b918c
	if (!ctx.cr6.eq) goto loc_823B918C;
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
loc_823B918C:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B91A0;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823B91B8"))) PPC_WEAK_FUNC(sub_823B91B8);
PPC_FUNC_IMPL(__imp__sub_823B91B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823B91C0;
	sub_8224877C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B91CC;
	sub_823AC6B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823a43b0
	ctx.lr = 0x823B91D4;
	sub_823A43B0(ctx, base);
	// lwz r26,16(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823b9224
	if (ctx.cr6.eq) goto loc_823B9224;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823B91F0:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x823a4e38
	ctx.lr = 0x823B9208;
	sub_823A4E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b9230
	if (ctx.cr6.eq) goto loc_823B9230;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823b91f0
	if (ctx.cr6.lt) goto loc_823B91F0;
loc_823B9224:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823B9230:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9244;
	sub_823AC608(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823B9250"))) PPC_WEAK_FUNC(sub_823B9250);
PPC_FUNC_IMPL(__imp__sub_823B9250) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823B9270;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-25656
	ctx.r9.s64 = ctx.r10.s64 + -25656;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B9294"))) PPC_WEAK_FUNC(sub_823B9294);
PPC_FUNC_IMPL(__imp__sub_823B9294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9298"))) PPC_WEAK_FUNC(sub_823B9298);
PPC_FUNC_IMPL(__imp__sub_823B9298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25656
	ctx.r10.s64 = ctx.r11.s64 + -25656;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c13b0
	ctx.lr = 0x823B92C4;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b92dc
	if (ctx.cr6.eq) goto loc_823B92DC;
	// bl 0x82357128
	ctx.lr = 0x823B92D8;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B92DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B92F4"))) PPC_WEAK_FUNC(sub_823B92F4);
PPC_FUNC_IMPL(__imp__sub_823B92F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B92F8"))) PPC_WEAK_FUNC(sub_823B92F8);
PPC_FUNC_IMPL(__imp__sub_823B92F8) {
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
	// bl 0x823a43b0
	ctx.lr = 0x823B9310;
	sub_823A43B0(ctx, base);
	// bl 0x823a43c8
	ctx.lr = 0x823B9314;
	sub_823A43C8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_823B9330"))) PPC_WEAK_FUNC(sub_823B9330);
PPC_FUNC_IMPL(__imp__sub_823B9330) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823B9350;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-25584
	ctx.r9.s64 = ctx.r10.s64 + -25584;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B9374"))) PPC_WEAK_FUNC(sub_823B9374);
PPC_FUNC_IMPL(__imp__sub_823B9374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9378"))) PPC_WEAK_FUNC(sub_823B9378);
PPC_FUNC_IMPL(__imp__sub_823B9378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25584
	ctx.r10.s64 = ctx.r11.s64 + -25584;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c13b0
	ctx.lr = 0x823B93A4;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b93bc
	if (ctx.cr6.eq) goto loc_823B93BC;
	// bl 0x82357128
	ctx.lr = 0x823B93B8;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B93BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B93D4"))) PPC_WEAK_FUNC(sub_823B93D4);
PPC_FUNC_IMPL(__imp__sub_823B93D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B93D8"))) PPC_WEAK_FUNC(sub_823B93D8);
PPC_FUNC_IMPL(__imp__sub_823B93D8) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823B93F0;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b941c
	if (ctx.cr6.eq) goto loc_823B941C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x823b941c
	if (!ctx.cr6.eq) goto loc_823B941C;
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
loc_823B941C:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9430;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823B9448"))) PPC_WEAK_FUNC(sub_823B9448);
PPC_FUNC_IMPL(__imp__sub_823B9448) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823B945C;
	sub_823AC6B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823a43b0
	ctx.lr = 0x823B9464;
	sub_823A43B0(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x823a63e8
	ctx.lr = 0x823B946C;
	sub_823A63E8(ctx, base);
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

__attribute__((alias("__imp__sub_823B9484"))) PPC_WEAK_FUNC(sub_823B9484);
PPC_FUNC_IMPL(__imp__sub_823B9484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9488"))) PPC_WEAK_FUNC(sub_823B9488);
PPC_FUNC_IMPL(__imp__sub_823B9488) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823B94A8;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-25512
	ctx.r9.s64 = ctx.r10.s64 + -25512;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823B94BC;
	sub_823C10A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r8,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r8.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x823B94E0;
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

__attribute__((alias("__imp__sub_823B94F8"))) PPC_WEAK_FUNC(sub_823B94F8);
PPC_FUNC_IMPL(__imp__sub_823B94F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b954c
	if (ctx.cr6.eq) goto loc_823B954C;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B9524;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b961c
	if (ctx.cr6.eq) goto loc_823B961C;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823b9600
	if (ctx.cr6.eq) goto loc_823B9600;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9548;
	sub_823AC608(ctx, base);
	// b 0x823b9600
	goto loc_823B9600;
loc_823B954C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B9554;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b958c
	if (!ctx.cr6.eq) goto loc_823B958C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B9570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b958c
	if (!ctx.cr6.eq) goto loc_823B958C;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b961c
	if (ctx.cr6.eq) goto loc_823B961C;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x823b9614
	goto loc_823B9614;
loc_823B958C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B9594;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b95ac
	if (ctx.cr6.eq) goto loc_823B95AC;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823b95d0
	goto loc_823B95D0;
loc_823B95AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B95BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b95d8
	if (ctx.cr6.eq) goto loc_823B95D8;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823B95D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823B95D8;
	sub_823AC608(ctx, base);
loc_823B95D8:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823B95EC;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b961c
	if (!ctx.cr6.eq) goto loc_823B961C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B9600;
	sub_82256CC0(ctx, base);
loc_823B9600:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82256f70
	ctx.lr = 0x823B9608;
	sub_82256F70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_823B9614:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B961C;
	sub_823AC5B8(ctx, base);
loc_823B961C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9634"))) PPC_WEAK_FUNC(sub_823B9634);
PPC_FUNC_IMPL(__imp__sub_823B9634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9638"))) PPC_WEAK_FUNC(sub_823B9638);
PPC_FUNC_IMPL(__imp__sub_823B9638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// bl 0x82256ce8
	ctx.lr = 0x823B9658;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82256f70
	ctx.lr = 0x823B9664;
	sub_82256F70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// beq cr6,0x823b96b8
	if (ctx.cr6.eq) goto loc_823B96B8;
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// beq cr6,0x823b96b8
	if (ctx.cr6.eq) goto loc_823B96B8;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b96b8
	if (ctx.cr6.eq) goto loc_823B96B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B96A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B96B4;
	sub_823AC608(ctx, base);
	// b 0x823b96c0
	goto loc_823B96C0;
loc_823B96B8:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
loc_823B96C0:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B96CC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B96E4"))) PPC_WEAK_FUNC(sub_823B96E4);
PPC_FUNC_IMPL(__imp__sub_823B96E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B96E8"))) PPC_WEAK_FUNC(sub_823B96E8);
PPC_FUNC_IMPL(__imp__sub_823B96E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-25512
	ctx.r10.s64 = ctx.r11.s64 + -25512;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823b9728
	if (ctx.cr6.eq) goto loc_823B9728;
	// bl 0x82357128
	ctx.lr = 0x823B9720;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
loc_823B9728:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c1100
	ctx.lr = 0x823B9730;
	sub_823C1100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823B9738;
	sub_823C13B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b9750
	if (ctx.cr6.eq) goto loc_823B9750;
	// bl 0x82357128
	ctx.lr = 0x823B974C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B9750:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9768"))) PPC_WEAK_FUNC(sub_823B9768);
PPC_FUNC_IMPL(__imp__sub_823B9768) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823B9780;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b97ac
	if (ctx.cr6.eq) goto loc_823B97AC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bne cr6,0x823b97ac
	if (!ctx.cr6.eq) goto loc_823B97AC;
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
loc_823B97AC:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B97C0;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823B97D8"))) PPC_WEAK_FUNC(sub_823B97D8);
PPC_FUNC_IMPL(__imp__sub_823B97D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823B97E0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x823B97F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823b9828
	if (ctx.cr6.eq) goto loc_823B9828;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823B9814;
	sub_823AC608(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B9820;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B9828:
	// bl 0x823ac6b8
	ctx.lr = 0x823B982C;
	sub_823AC6B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x823a7850
	ctx.lr = 0x823B9838;
	sub_823A7850(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b9868
	if (!ctx.cr6.eq) goto loc_823B9868;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9854;
	sub_823AC608(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B9860;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B9868:
	// addi r30,r31,180
	ctx.r30.s64 = ctx.r31.s64 + 180;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B9878;
	sub_823585A0(ctx, base);
	// addi r29,r31,188
	ctx.r29.s64 = ctx.r31.s64 + 188;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x8240d300
	ctx.lr = 0x823B9890;
	sub_8240D300(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b98d8
	if (ctx.cr6.eq) goto loc_823B98D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B98B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B98C4;
	sub_823AC608(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B98D0;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B98D8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823B98E0;
	sub_823570E0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823570f0
	ctx.lr = 0x823B98E8;
	sub_823570F0(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B98F4;
	sub_823570E0(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b9938
	if (!ctx.cr6.eq) goto loc_823B9938;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9914;
	sub_823AC608(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82256f70
	ctx.lr = 0x823B991C;
	sub_82256F70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B9930;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B9938:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823585a0
	ctx.lr = 0x823B9940;
	sub_823585A0(ctx, base);
	// addi r28,r31,152
	ctx.r28.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B9950;
	sub_823585A0(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82256f58
	ctx.lr = 0x823B9968;
	sub_82256F58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823b99c8
	if (ctx.cr6.eq) goto loc_823B99C8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b99c8
	if (ctx.cr6.eq) goto loc_823B99C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B9994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B99A4;
	sub_823AC608(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82256f70
	ctx.lr = 0x823B99AC;
	sub_82256F70(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B99C0;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823B99C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823B99D0;
	sub_823AC668(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B99DC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823B99E4"))) PPC_WEAK_FUNC(sub_823B99E4);
PPC_FUNC_IMPL(__imp__sub_823B99E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B99E8"))) PPC_WEAK_FUNC(sub_823B99E8);
PPC_FUNC_IMPL(__imp__sub_823B99E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac5c0
	ctx.lr = 0x823B9A08;
	sub_823AC5C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823b9a50
	if (ctx.cr6.gt) goto loc_823B9A50;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823b9a34
	// bdzf 4*cr6+eq,0x823b9a40
	// bne cr6,0x823b9a4c
	if (!ctx.cr6.eq) goto loc_823B9A4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b97d8
	ctx.lr = 0x823B9A30;
	sub_823B97D8(ctx, base);
	// b 0x823b9a50
	goto loc_823B9A50;
loc_823B9A34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b94f8
	ctx.lr = 0x823B9A3C;
	sub_823B94F8(ctx, base);
	// b 0x823b9a50
	goto loc_823B9A50;
loc_823B9A40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b9638
	ctx.lr = 0x823B9A48;
	sub_823B9638(ctx, base);
	// b 0x823b9a50
	goto loc_823B9A50;
loc_823B9A4C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823B9A50:
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

__attribute__((alias("__imp__sub_823B9A6C"))) PPC_WEAK_FUNC(sub_823B9A6C);
PPC_FUNC_IMPL(__imp__sub_823B9A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9A70"))) PPC_WEAK_FUNC(sub_823B9A70);
PPC_FUNC_IMPL(__imp__sub_823B9A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823B9A78;
	sub_82248784(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b9b60
	if (ctx.cr6.eq) goto loc_823B9B60;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bne cr6,0x823b9b60
	if (!ctx.cr6.eq) goto loc_823B9B60;
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823b9b2c
	if (!ctx.cr6.gt) goto loc_823B9B2C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823B9AAC:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823ad500
	ctx.lr = 0x823B9AB8;
	sub_823AD500(ctx, base);
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,152
	ctx.r5.s64 = 152;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x82248a40
	ctx.lr = 0x823B9AD0;
	sub_82248A40(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// bl 0x823ad578
	ctx.lr = 0x823B9AF4;
	sub_823AD578(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b9b38
	if (ctx.cr6.eq) goto loc_823B9B38;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x823ab9a8
	ctx.lr = 0x823B9B08;
	sub_823AB9A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b9b38
	if (ctx.cr6.eq) goto loc_823B9B38;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823ad548
	ctx.lr = 0x823B9B18;
	sub_823AD548(ctx, base);
	// lwz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,208
	ctx.r30.s64 = ctx.r30.s64 + 208;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823b9aac
	if (ctx.cr6.lt) goto loc_823B9AAC;
loc_823B9B2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823B9B38:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9B4C;
	sub_823AC608(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823ad548
	ctx.lr = 0x823B9B54;
	sub_823AD548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823B9B60:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9B74;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823B9B80"))) PPC_WEAK_FUNC(sub_823B9B80);
PPC_FUNC_IMPL(__imp__sub_823B9B80) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823B9BA0;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-25440
	ctx.r9.s64 = ctx.r10.s64 + -25440;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823B9BB4;
	sub_823C10A0(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823585a0
	ctx.lr = 0x823B9BC0;
	sub_823585A0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r8.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823B9BE0"))) PPC_WEAK_FUNC(sub_823B9BE0);
PPC_FUNC_IMPL(__imp__sub_823B9BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b9c38
	if (ctx.cr6.eq) goto loc_823B9C38;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823B9C0C;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b9ce8
	if (ctx.cr6.eq) goto loc_823B9CE8;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823b9c30
	if (ctx.cr6.eq) goto loc_823B9C30;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9C30;
	sub_823AC608(ctx, base);
loc_823B9C30:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x823b9ce0
	goto loc_823B9CE0;
loc_823B9C38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823B9C40;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b9c8c
	if (ctx.cr6.eq) goto loc_823B9C8C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9C5C;
	sub_823AC608(ctx, base);
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823B9C70;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b9ce8
	if (!ctx.cr6.eq) goto loc_823B9CE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823B9C84;
	sub_82256CC0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x823b9ce0
	goto loc_823B9CE0;
loc_823B9C8C:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823b9ce8
	if (ctx.cr6.eq) goto loc_823B9CE8;
	// bl 0x82256ce8
	ctx.lr = 0x823B9CA0;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b9cdc
	if (ctx.cr6.eq) goto loc_823B9CDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823B9CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9CD4;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x823b9ce0
	goto loc_823B9CE0;
loc_823B9CDC:
	// li r4,3
	ctx.r4.s64 = 3;
loc_823B9CE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B9CE8;
	sub_823AC5B8(ctx, base);
loc_823B9CE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9D00"))) PPC_WEAK_FUNC(sub_823B9D00);
PPC_FUNC_IMPL(__imp__sub_823B9D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-25440
	ctx.r10.s64 = ctx.r11.s64 + -25440;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823b9d40
	if (ctx.cr6.eq) goto loc_823B9D40;
	// bl 0x82357128
	ctx.lr = 0x823B9D38;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_823B9D40:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c1100
	ctx.lr = 0x823B9D48;
	sub_823C1100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823B9D50;
	sub_823C13B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b9d68
	if (ctx.cr6.eq) goto loc_823B9D68;
	// bl 0x82357128
	ctx.lr = 0x823B9D64;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823B9D68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9D80"))) PPC_WEAK_FUNC(sub_823B9D80);
PPC_FUNC_IMPL(__imp__sub_823B9D80) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823B9D98;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b9dc4
	if (ctx.cr6.eq) goto loc_823B9DC4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bne cr6,0x823b9dc4
	if (!ctx.cr6.eq) goto loc_823B9DC4;
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
loc_823B9DC4:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9DD8;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823B9DF0"))) PPC_WEAK_FUNC(sub_823B9DF0);
PPC_FUNC_IMPL(__imp__sub_823B9DF0) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823B9E08;
	sub_823AC6B8(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b9e20
	if (!ctx.cr6.eq) goto loc_823B9E20;
	// li r4,1
	ctx.r4.s64 = 1;
loc_823B9E20:
	// bl 0x823ac5b8
	ctx.lr = 0x823B9E24;
	sub_823AC5B8(ctx, base);
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

__attribute__((alias("__imp__sub_823B9E3C"))) PPC_WEAK_FUNC(sub_823B9E3C);
PPC_FUNC_IMPL(__imp__sub_823B9E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9E40"))) PPC_WEAK_FUNC(sub_823B9E40);
PPC_FUNC_IMPL(__imp__sub_823B9E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823B9E48;
	sub_82248774(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823B9E54;
	sub_823AC6B8(ctx, base);
	// lwz r23,20(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x823b9e8c
	if (!ctx.cr6.eq) goto loc_823B9E8C;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9E78;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B9E84;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823B9E8C:
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x823b9f2c
	if (ctx.cr6.eq) goto loc_823B9F2C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823B9EC0:
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82356608
	ctx.lr = 0x823B9ECC;
	sub_82356608(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823b9f00
	if (ctx.cr6.gt) goto loc_823B9F00;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a1130
	ctx.lr = 0x823B9EF0;
	sub_823A1130(ctx, base);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b9f90
	if (ctx.cr6.eq) goto loc_823B9F90;
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_823B9F00:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823b9f90
	if (ctx.cr6.eq) goto loc_823B9F90;
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// stdx r11,r10,r26
	PPC_STORE_U64(ctx.r10.u32 + ctx.r26.u32, ctx.r11.u64);
	// blt cr6,0x823b9ec0
	if (ctx.cr6.lt) goto loc_823B9EC0;
loc_823B9F2C:
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r5,64(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 64);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x823B9F4C;
	sub_82256BE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823b9fc8
	if (!ctx.cr6.eq) goto loc_823B9FC8;
loc_823B9F58:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9F6C;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B9F78;
	sub_823AC5B8(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823ba0b0
	if (ctx.cr6.eq) goto loc_823BA0B0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82357240
	ctx.lr = 0x823B9F88;
	sub_82357240(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823B9F90:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac608
	ctx.lr = 0x823B9FA4;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823B9FB0;
	sub_823AC5B8(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823ba0b0
	if (ctx.cr6.eq) goto loc_823BA0B0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82357240
	ctx.lr = 0x823B9FC0;
	sub_82357240(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823B9FC8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// bl 0x823570e0
	ctx.lr = 0x823B9FD4;
	sub_823570E0(ctx, base);
	// rlwinm r3,r30,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823570f0
	ctx.lr = 0x823B9FDC;
	sub_823570F0(ctx, base);
	// stw r3,180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 180, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823B9FE8;
	sub_823570E0(ctx, base);
	// lwz r3,180(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b9f90
	if (ctx.cr6.eq) goto loc_823B9F90;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823B9FFC;
	sub_823585A0(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r7,180(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 180);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,64(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x823BA01C;
	sub_82256BE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b9f58
	if (ctx.cr6.eq) goto loc_823B9F58;
	// addi r30,r25,152
	ctx.r30.s64 = ctx.r25.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823BA034;
	sub_823585A0(ctx, base);
	// lbz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,180(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 180);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8234e080
	ctx.lr = 0x823BA050;
	sub_8234E080(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ba094
	if (ctx.cr6.eq) goto loc_823BA094;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823ba094
	if (ctx.cr6.eq) goto loc_823BA094;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BA07C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BA08C;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x823ba0a0
	goto loc_823BA0A0;
loc_823BA094:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BA09C;
	sub_823AC668(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
loc_823BA0A0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BA0A8;
	sub_823AC5B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823826f8
	ctx.lr = 0x823BA0B0;
	sub_823826F8(ctx, base);
loc_823BA0B0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823BA0B8"))) PPC_WEAK_FUNC(sub_823BA0B8);
PPC_FUNC_IMPL(__imp__sub_823BA0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248768
	ctx.lr = 0x823BA0C0;
	sub_82248768(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823BA0CC;
	sub_823AC6B8(ctx, base);
	// lwz r21,20(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823ba19c
	if (ctx.cr6.eq) goto loc_823BA19C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_823BA0F0:
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x82356608
	ctx.lr = 0x823BA0FC;
	sub_82356608(ctx, base);
	// addi r26,r30,1
	ctx.r26.s64 = ctx.r30.s64 + 1;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x823ba174
	if (ctx.cr6.gt) goto loc_823BA174;
	// addic. r25,r29,16
	ctx.xer.ca = ctx.r29.u32 > 4294967279;
	ctx.r25.s64 = ctx.r29.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x823ba1f0
	if (ctx.cr0.eq) goto loc_823BA1F0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823BA11C;
	sub_823570E0(ctx, base);
	// rlwinm r28,r25,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357208
	ctx.lr = 0x823BA12C;
	sub_82357208(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BA138;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823ba1f0
	if (ctx.cr6.eq) goto loc_823BA1F0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823585a0
	ctx.lr = 0x823BA14C;
	sub_823585A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ba16c
	if (ctx.cr6.eq) goto loc_823BA16C;
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358508
	ctx.lr = 0x823BA164;
	sub_82358508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357240
	ctx.lr = 0x823BA16C;
	sub_82357240(ctx, base);
loc_823BA16C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_823BA174:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ba1f0
	if (ctx.cr6.eq) goto loc_823BA1F0;
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, ctx.xer);
	// stdx r11,r10,r31
	PPC_STORE_U64(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u64);
	// blt cr6,0x823ba0f0
	if (ctx.cr6.lt) goto loc_823BA0F0;
loc_823BA19C:
	// lbz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82256650
	ctx.lr = 0x823BA1B4;
	sub_82256650(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ba20c
	if (ctx.cr6.eq) goto loc_823BA20C;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BA1D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BA1E8;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x823ba210
	goto loc_823BA210;
loc_823BA1F0:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BA204;
	sub_823AC608(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x823ba210
	goto loc_823BA210;
loc_823BA20C:
	// li r4,5
	ctx.r4.s64 = 5;
loc_823BA210:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BA218;
	sub_823AC5B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823ba228
	if (ctx.cr6.eq) goto loc_823BA228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357240
	ctx.lr = 0x823BA228;
	sub_82357240(ctx, base);
loc_823BA228:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487b8
	// ERROR 822487B8
	return;
}

__attribute__((alias("__imp__sub_823BA230"))) PPC_WEAK_FUNC(sub_823BA230);
PPC_FUNC_IMPL(__imp__sub_823BA230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac5c0
	ctx.lr = 0x823BA250;
	sub_823AC5C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x823ba2c4
	if (ctx.cr6.gt) goto loc_823BA2C4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823ba288
	// bdzf 4*cr6+eq,0x823ba294
	// bdzf 4*cr6+eq,0x823ba2a4
	// bdzf 4*cr6+eq,0x823ba2b0
	// bdzf 4*cr6+eq,0x823ba294
	// bne cr6,0x823ba2c0
	if (!ctx.cr6.eq) goto loc_823BA2C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b9e40
	ctx.lr = 0x823BA284;
	sub_823B9E40(ctx, base);
	// b 0x823ba2c4
	goto loc_823BA2C4;
loc_823BA288:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b9be0
	ctx.lr = 0x823BA290;
	sub_823B9BE0(ctx, base);
	// b 0x823ba2c4
	goto loc_823BA2C4;
loc_823BA294:
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BA2A0;
	sub_823AC5B8(ctx, base);
	// b 0x823ba2c4
	goto loc_823BA2C4;
loc_823BA2A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ba0b8
	ctx.lr = 0x823BA2AC;
	sub_823BA0B8(ctx, base);
	// b 0x823ba2c4
	goto loc_823BA2C4;
loc_823BA2B0:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BA2BC;
	sub_823AC5B8(ctx, base);
	// b 0x823ba2c4
	goto loc_823BA2C4;
loc_823BA2C0:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823BA2C4:
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

__attribute__((alias("__imp__sub_823BA2E0"))) PPC_WEAK_FUNC(sub_823BA2E0);
PPC_FUNC_IMPL(__imp__sub_823BA2E0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823BA300;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-25368
	ctx.r9.s64 = ctx.r10.s64 + -25368;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823BA314;
	sub_823C10A0(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823585a0
	ctx.lr = 0x823BA320;
	sub_823585A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r8.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823BA350"))) PPC_WEAK_FUNC(sub_823BA350);
PPC_FUNC_IMPL(__imp__sub_823BA350) {
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
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ba3c0
	if (ctx.cr6.eq) goto loc_823BA3C0;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823BA37C;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823ba38c
	if (!ctx.cr6.eq) goto loc_823BA38C;
loc_823BA384:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ba434
	goto loc_823BA434;
loc_823BA38C:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823ba3a8
	if (ctx.cr6.eq) goto loc_823BA3A8;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BA3A8;
	sub_823AC608(ctx, base);
loc_823BA3A8:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82256f70
	ctx.lr = 0x823BA3B0;
	sub_82256F70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// b 0x823ba434
	goto loc_823BA434;
loc_823BA3C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BA3C8;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ba424
	if (ctx.cr6.eq) goto loc_823BA424;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BA3E4;
	sub_823AC608(ctx, base);
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823BA3F8;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ba384
	if (!ctx.cr6.eq) goto loc_823BA384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823BA40C;
	sub_82256CC0(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82256f70
	ctx.lr = 0x823BA414;
	sub_82256F70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// b 0x823ba434
	goto loc_823BA434;
loc_823BA424:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r11,r11,-997
	ctx.r11.s64 = ctx.r11.s64 + -997;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823BA434:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BA44C"))) PPC_WEAK_FUNC(sub_823BA44C);
PPC_FUNC_IMPL(__imp__sub_823BA44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA450"))) PPC_WEAK_FUNC(sub_823BA450);
PPC_FUNC_IMPL(__imp__sub_823BA450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// bl 0x82256ce8
	ctx.lr = 0x823BA470;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82256f70
	ctx.lr = 0x823BA47C;
	sub_82256F70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// beq cr6,0x823ba4d4
	if (ctx.cr6.eq) goto loc_823BA4D4;
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 18, ctx.xer);
	// beq cr6,0x823ba4d4
	if (ctx.cr6.eq) goto loc_823BA4D4;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,18
	ctx.r10.u64 = ctx.r11.u64 | 18;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ba4d4
	if (ctx.cr6.eq) goto loc_823BA4D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BA4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BA4CC;
	sub_823AC608(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x823ba4e0
	goto loc_823BA4E0;
loc_823BA4D4:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
loc_823BA4E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BA4F8"))) PPC_WEAK_FUNC(sub_823BA4F8);
PPC_FUNC_IMPL(__imp__sub_823BA4F8) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-25300
	ctx.r10.s64 = ctx.r11.s64 + -25300;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82356e70
	ctx.lr = 0x823BA520;
	sub_82356E70(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8235a518
	ctx.lr = 0x823BA52C;
	sub_8235A518(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_823BA550"))) PPC_WEAK_FUNC(sub_823BA550);
PPC_FUNC_IMPL(__imp__sub_823BA550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r10,r11,-25300
	ctx.r10.s64 = ctx.r11.s64 + -25300;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8235a538
	ctx.lr = 0x823BA580;
	sub_8235A538(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82356eb8
	ctx.lr = 0x823BA588;
	sub_82356EB8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823ba5a0
	if (ctx.cr6.eq) goto loc_823BA5A0;
	// bl 0x82357128
	ctx.lr = 0x823BA59C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BA5A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BA5B8"))) PPC_WEAK_FUNC(sub_823BA5B8);
PPC_FUNC_IMPL(__imp__sub_823BA5B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-25368
	ctx.r10.s64 = ctx.r11.s64 + -25368;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823ba5f8
	if (ctx.cr6.eq) goto loc_823BA5F8;
	// bl 0x82357128
	ctx.lr = 0x823BA5F0;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
loc_823BA5F8:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c1100
	ctx.lr = 0x823BA600;
	sub_823C1100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823BA608;
	sub_823C13B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ba620
	if (ctx.cr6.eq) goto loc_823BA620;
	// bl 0x82357128
	ctx.lr = 0x823BA61C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BA620:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BA638"))) PPC_WEAK_FUNC(sub_823BA638);
PPC_FUNC_IMPL(__imp__sub_823BA638) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823BA650;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ba690
	if (ctx.cr6.eq) goto loc_823BA690;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x823ba690
	if (!ctx.cr6.eq) goto loc_823BA690;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x823ba678
	if (!ctx.cr6.gt) goto loc_823BA678;
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_823BA678:
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
loc_823BA690:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BA6A4;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823BA6BC"))) PPC_WEAK_FUNC(sub_823BA6BC);
PPC_FUNC_IMPL(__imp__sub_823BA6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA6C0"))) PPC_WEAK_FUNC(sub_823BA6C0);
PPC_FUNC_IMPL(__imp__sub_823BA6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823BA6C8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823BA6D4;
	sub_823AC6B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// addi r29,r31,180
	ctx.r29.s64 = ctx.r31.s64 + 180;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x8234ddf0
	ctx.lr = 0x823BA700;
	sub_8234DDF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ba748
	if (ctx.cr6.eq) goto loc_823BA748;
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// beq cr6,0x823ba73c
	if (ctx.cr6.eq) goto loc_823BA73C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BA72C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BA73C;
	sub_823AC608(ctx, base);
loc_823BA73C:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823BA748:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823BA750;
	sub_823570E0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823570f0
	ctx.lr = 0x823BA758;
	sub_823570F0(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BA764;
	sub_823570E0(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823ba7a0
	if (!ctx.cr6.eq) goto loc_823BA7A0;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BA784;
	sub_823AC608(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82256f70
	ctx.lr = 0x823BA78C;
	sub_82256F70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823BA7A0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823585a0
	ctx.lr = 0x823BA7A8;
	sub_823585A0(ctx, base);
	// addi r28,r31,152
	ctx.r28.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823585a0
	ctx.lr = 0x823BA7B8;
	sub_823585A0(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82256f58
	ctx.lr = 0x823BA7D0;
	sub_82256F58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823ba828
	if (ctx.cr6.eq) goto loc_823BA828;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ba828
	if (ctx.cr6.eq) goto loc_823BA828;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BA7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BA80C;
	sub_823AC608(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82256f70
	ctx.lr = 0x823BA814;
	sub_82256F70(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823BA828:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BA830;
	sub_823AC668(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823BA83C"))) PPC_WEAK_FUNC(sub_823BA83C);
PPC_FUNC_IMPL(__imp__sub_823BA83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA840"))) PPC_WEAK_FUNC(sub_823BA840);
PPC_FUNC_IMPL(__imp__sub_823BA840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bl 0x82357038
	ctx.lr = 0x823BA868;
	sub_82357038(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x8235a760
	ctx.lr = 0x823BA874;
	sub_8235A760(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BA8A0"))) PPC_WEAK_FUNC(sub_823BA8A0);
PPC_FUNC_IMPL(__imp__sub_823BA8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823BA8A8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-25300
	ctx.r10.s64 = ctx.r11.s64 + -25300;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82356e70
	ctx.lr = 0x823BA8CC;
	sub_82356E70(ctx, base);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235a518
	ctx.lr = 0x823BA8DC;
	sub_8235A518(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x82357038
	ctx.lr = 0x823BA8F4;
	sub_82357038(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x8235a760
	ctx.lr = 0x823BA900;
	sub_8235A760(ctx, base);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823BA91C"))) PPC_WEAK_FUNC(sub_823BA91C);
PPC_FUNC_IMPL(__imp__sub_823BA91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA920"))) PPC_WEAK_FUNC(sub_823BA920);
PPC_FUNC_IMPL(__imp__sub_823BA920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823BA928;
	sub_82248778(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823ba940
	if (!ctx.cr6.eq) goto loc_823BA940;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823BA940:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add. r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x823ba958
	if (!ctx.cr0.eq) goto loc_823BA958;
loc_823BA94C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823BA958:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823BA960;
	sub_823570E0(ctx, base);
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// rlwinm r31,r11,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357208
	ctx.lr = 0x823BA978;
	sub_82357208(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BA984;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823ba94c
	if (ctx.cr6.eq) goto loc_823BA94C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823585a0
	ctx.lr = 0x823BA998;
	sub_823585A0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823baa4c
	if (ctx.cr6.eq) goto loc_823BAA4C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823baa34
	if (!ctx.cr6.gt) goto loc_823BAA34;
	// addi r31,r25,24
	ctx.r31.s64 = ctx.r25.s64 + 24;
	// subfic r26,r25,-24
	ctx.xer.ca = ctx.r25.u32 <= 4294967272;
	ctx.r26.s64 = -24 - ctx.r25.s64;
loc_823BA9BC:
	// addic. r11,r31,-24
	ctx.xer.ca = ctx.r31.u32 > 23;
	ctx.r11.s64 = ctx.r31.s64 + -24;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ba9d0
	if (ctx.cr0.eq) goto loc_823BA9D0;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x823ba8a0
	ctx.lr = 0x823BA9D0;
	sub_823BA8A0(ctx, base);
loc_823BA9D0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r28,r26,r31
	ctx.r28.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// bl 0x82357038
	ctx.lr = 0x823BA9E8;
	sub_82357038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x8235a760
	ctx.lr = 0x823BA9F4;
	sub_8235A760(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823BAA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823ba9bc
	if (ctx.cr6.lt) goto loc_823BA9BC;
loc_823BAA34:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823baa4c
	if (ctx.cr6.eq) goto loc_823BAA4C;
	// bl 0x82357240
	ctx.lr = 0x823BAA44;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_823BAA4C:
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r24,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_823BAA60"))) PPC_WEAK_FUNC(sub_823BAA60);
PPC_FUNC_IMPL(__imp__sub_823BAA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823BAA68;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823baaa4
	if (ctx.cr6.gt) goto loc_823BAAA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ba920
	ctx.lr = 0x823BAA90;
	sub_823BA920(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823baaa4
	if (!ctx.cr6.eq) goto loc_823BAAA4;
loc_823BAA98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BAAA4:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823baa98
	if (ctx.cr6.eq) goto loc_823BAA98;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823baad0
	if (ctx.cr0.eq) goto loc_823BAAD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ba8a0
	ctx.lr = 0x823BAAD0;
	sub_823BA8A0(ctx, base);
loc_823BAAD0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ba840
	ctx.lr = 0x823BAADC;
	sub_823BA840(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823BAAF4"))) PPC_WEAK_FUNC(sub_823BAAF4);
PPC_FUNC_IMPL(__imp__sub_823BAAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BAAF8"))) PPC_WEAK_FUNC(sub_823BAAF8);
PPC_FUNC_IMPL(__imp__sub_823BAAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x823BAB00;
	sub_8224877C(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823BAB10;
	sub_823AC6B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823bac3c
	if (ctx.cr6.eq) goto loc_823BAC3C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x823bac3c
	if (!ctx.cr6.eq) goto loc_823BAC3C;
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823babfc
	if (!ctx.cr6.gt) goto loc_823BABFC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r11,-25300
	ctx.r26.s64 = ctx.r11.s64 + -25300;
loc_823BAB44:
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823babe8
	if (!ctx.cr6.eq) goto loc_823BABE8;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823babe8
	if (!ctx.cr6.eq) goto loc_823BABE8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ba4f8
	ctx.lr = 0x823BAB70;
	sub_823BA4F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356fe0
	ctx.lr = 0x823BAB7C;
	sub_82356FE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82357038
	ctx.lr = 0x823BAB88;
	sub_82357038(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x823BAB90;
	sub_82356EB8(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8235a760
	ctx.lr = 0x823BAB9C;
	sub_8235A760(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// bl 0x823baa60
	ctx.lr = 0x823BABCC;
	sub_823BAA60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bac08
	if (ctx.cr6.eq) goto loc_823BAC08;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8235a538
	ctx.lr = 0x823BABE0;
	sub_8235A538(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82356eb8
	ctx.lr = 0x823BABE8;
	sub_82356EB8(ctx, base);
loc_823BABE8:
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,196
	ctx.r29.s64 = ctx.r29.s64 + 196;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823bab44
	if (ctx.cr6.lt) goto loc_823BAB44;
loc_823BABFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823BAC08:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BAC1C;
	sub_823AC608(ctx, base);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8235a538
	ctx.lr = 0x823BAC28;
	sub_8235A538(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82356eb8
	ctx.lr = 0x823BAC30;
	sub_82356EB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_823BAC3C:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BAC50;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_823BAC5C"))) PPC_WEAK_FUNC(sub_823BAC5C);
PPC_FUNC_IMPL(__imp__sub_823BAC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BAC60"))) PPC_WEAK_FUNC(sub_823BAC60);
PPC_FUNC_IMPL(__imp__sub_823BAC60) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823BAC80;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-25288
	ctx.r9.s64 = ctx.r10.s64 + -25288;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823BACB0"))) PPC_WEAK_FUNC(sub_823BACB0);
PPC_FUNC_IMPL(__imp__sub_823BACB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x823bacec
	if (ctx.cr6.lt) goto loc_823BACEC;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x823ac608
	ctx.lr = 0x823BACE4;
	sub_823AC608(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x823bad74
	goto loc_823BAD74;
loc_823BACEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BACFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bad20
	if (ctx.cr6.eq) goto loc_823BAD20;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BAD18;
	sub_823AC608(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x823bad74
	goto loc_823BAD74;
loc_823BAD20:
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822d63e8
	ctx.lr = 0x823BAD30;
	sub_822D63E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bad6c
	if (ctx.cr6.eq) goto loc_823BAD6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BAD54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BAD64;
	sub_823AC608(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x823bad74
	goto loc_823BAD74;
loc_823BAD6C:
	// bl 0x823ac668
	ctx.lr = 0x823BAD70;
	sub_823AC668(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
loc_823BAD74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BAD7C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BAD94"))) PPC_WEAK_FUNC(sub_823BAD94);
PPC_FUNC_IMPL(__imp__sub_823BAD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BAD98"))) PPC_WEAK_FUNC(sub_823BAD98);
PPC_FUNC_IMPL(__imp__sub_823BAD98) {
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BADC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bade8
	if (ctx.cr6.eq) goto loc_823BADE8;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x822d6400
	ctx.lr = 0x823BADD0;
	sub_822D6400(ctx, base);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BADE4;
	sub_823AC608(ctx, base);
	// b 0x823bae48
	goto loc_823BAE48;
loc_823BADE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BADF0;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bae0c
	if (ctx.cr6.eq) goto loc_823BAE0C;
loc_823BADF8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x823bae4c
	goto loc_823BAE4C;
loc_823BAE0C:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823bae54
	if (ctx.cr6.eq) goto loc_823BAE54;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r7,r11
	ctx.r30.u64 = ctx.r7.u64 & ctx.r11.u64;
	// bl 0x822d6400
	ctx.lr = 0x823BAE38;
	sub_822D6400(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r6,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// beq cr6,0x823badf8
	if (ctx.cr6.eq) goto loc_823BADF8;
loc_823BAE48:
	// li r4,3
	ctx.r4.s64 = 3;
loc_823BAE4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BAE54;
	sub_823AC5B8(ctx, base);
loc_823BAE54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BAE6C"))) PPC_WEAK_FUNC(sub_823BAE6C);
PPC_FUNC_IMPL(__imp__sub_823BAE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BAE70"))) PPC_WEAK_FUNC(sub_823BAE70);
PPC_FUNC_IMPL(__imp__sub_823BAE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25288
	ctx.r10.s64 = ctx.r11.s64 + -25288;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c13b0
	ctx.lr = 0x823BAE9C;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823baeb4
	if (ctx.cr6.eq) goto loc_823BAEB4;
	// bl 0x82357128
	ctx.lr = 0x823BAEB0;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BAEB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BAECC"))) PPC_WEAK_FUNC(sub_823BAECC);
PPC_FUNC_IMPL(__imp__sub_823BAECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BAED0"))) PPC_WEAK_FUNC(sub_823BAED0);
PPC_FUNC_IMPL(__imp__sub_823BAED0) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823BAEE8;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823baf24
	if (ctx.cr6.eq) goto loc_823BAF24;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x823baf24
	if (!ctx.cr6.eq) goto loc_823BAF24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,8056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8056);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823ac658
	ctx.lr = 0x823BAF0C;
	sub_823AC658(ctx, base);
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
loc_823BAF24:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BAF38;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823BAF50"))) PPC_WEAK_FUNC(sub_823BAF50);
PPC_FUNC_IMPL(__imp__sub_823BAF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac5c0
	ctx.lr = 0x823BAF70;
	sub_823AC5C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823bafbc
	if (ctx.cr6.gt) goto loc_823BAFBC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823baf9c
	// bdzf 4*cr6+eq,0x823bafa8
	// bne cr6,0x823bafb8
	if (!ctx.cr6.eq) goto loc_823BAFB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bacb0
	ctx.lr = 0x823BAF98;
	sub_823BACB0(ctx, base);
	// b 0x823bafbc
	goto loc_823BAFBC;
loc_823BAF9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bad98
	ctx.lr = 0x823BAFA4;
	sub_823BAD98(ctx, base);
	// b 0x823bafbc
	goto loc_823BAFBC;
loc_823BAFA8:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BAFB4;
	sub_823AC5B8(ctx, base);
	// b 0x823bafbc
	goto loc_823BAFBC;
loc_823BAFB8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823BAFBC:
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

__attribute__((alias("__imp__sub_823BAFD8"))) PPC_WEAK_FUNC(sub_823BAFD8);
PPC_FUNC_IMPL(__imp__sub_823BAFD8) {
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
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bb038
	if (ctx.cr6.eq) goto loc_823BB038;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823BB004;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823bb014
	if (!ctx.cr6.eq) goto loc_823BB014;
loc_823BB00C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823bb0f0
	goto loc_823BB0F0;
loc_823BB014:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823bb030
	if (ctx.cr6.eq) goto loc_823BB030;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BB030;
	sub_823AC608(ctx, base);
loc_823BB030:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823bb0f0
	goto loc_823BB0F0;
loc_823BB038:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BB040;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bb078
	if (!ctx.cr6.eq) goto loc_823BB078;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BB05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bb078
	if (!ctx.cr6.eq) goto loc_823BB078;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r11,r11,-997
	ctx.r11.s64 = ctx.r11.s64 + -997;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x823bb0f0
	goto loc_823BB0F0;
loc_823BB078:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BB080;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bb098
	if (ctx.cr6.eq) goto loc_823BB098;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823bb0bc
	goto loc_823BB0BC;
loc_823BB098:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BB0A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bb0c4
	if (ctx.cr6.eq) goto loc_823BB0C4;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823BB0BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823BB0C4;
	sub_823AC608(ctx, base);
loc_823BB0C4:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823BB0D8;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823bb00c
	if (!ctx.cr6.eq) goto loc_823BB00C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823BB0EC;
	sub_82256CC0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_823BB0F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB108"))) PPC_WEAK_FUNC(sub_823BB108);
PPC_FUNC_IMPL(__imp__sub_823BB108) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ab568
	sub_823AB568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB10C"))) PPC_WEAK_FUNC(sub_823BB10C);
PPC_FUNC_IMPL(__imp__sub_823BB10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB110"))) PPC_WEAK_FUNC(sub_823BB110);
PPC_FUNC_IMPL(__imp__sub_823BB110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823BB118;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823BB124;
	sub_823AC6B8(ctx, base);
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823585a0
	ctx.lr = 0x823BB138;
	sub_823585A0(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r7,200(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r6,184(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r5,188(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x8234f538
	ctx.lr = 0x823BB158;
	sub_8234F538(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bb1a0
	if (ctx.cr6.eq) goto loc_823BB1A0;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823bb1a0
	if (ctx.cr6.eq) goto loc_823BB1A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BB184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BB194;
	sub_823AC608(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BB1A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BB1A8;
	sub_823AC668(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823BB1B4"))) PPC_WEAK_FUNC(sub_823BB1B4);
PPC_FUNC_IMPL(__imp__sub_823BB1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB1B8"))) PPC_WEAK_FUNC(sub_823BB1B8);
PPC_FUNC_IMPL(__imp__sub_823BB1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823BB1C0;
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
	// bne cr6,0x823bb1d8
	if (!ctx.cr6.eq) goto loc_823BB1D8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823BB1D8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x823bb1f0
	if (!ctx.cr0.eq) goto loc_823BB1F0;
loc_823BB1E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823BB1F0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823BB1F8;
	sub_823570E0(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x823BB210;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BB21C;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823bb1e4
	if (ctx.cr6.eq) goto loc_823BB1E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823BB230;
	sub_823585A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823bb26c
	if (ctx.cr6.eq) goto loc_823BB26C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82358508
	ctx.lr = 0x823BB254;
	sub_82358508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bb26c
	if (ctx.cr6.eq) goto loc_823BB26C;
	// bl 0x82357240
	ctx.lr = 0x823BB264;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823BB26C:
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

__attribute__((alias("__imp__sub_823BB280"))) PPC_WEAK_FUNC(sub_823BB280);
PPC_FUNC_IMPL(__imp__sub_823BB280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823BB288;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823bb2c4
	if (ctx.cr6.gt) goto loc_823BB2C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823bb1b8
	ctx.lr = 0x823BB2B0;
	sub_823BB1B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bb2c4
	if (!ctx.cr6.eq) goto loc_823BB2C4;
loc_823BB2B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BB2C4:
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823bb2b8
	if (ctx.cr6.eq) goto loc_823BB2B8;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,6
	ctx.r11.s64 = 6;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_823BB2F0:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823bb2f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BB2F0;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823BB314"))) PPC_WEAK_FUNC(sub_823BB314);
PPC_FUNC_IMPL(__imp__sub_823BB314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB318"))) PPC_WEAK_FUNC(sub_823BB318);
PPC_FUNC_IMPL(__imp__sub_823BB318) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823BB338;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-25216
	ctx.r9.s64 = ctx.r10.s64 + -25216;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823BB34C;
	sub_823C10A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r8,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r8.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x823BB380;
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

__attribute__((alias("__imp__sub_823BB398"))) PPC_WEAK_FUNC(sub_823BB398);
PPC_FUNC_IMPL(__imp__sub_823BB398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823BB3A0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r10,-25216
	ctx.r9.s64 = ctx.r10.s64 + -25216;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x823bb40c
	if (ctx.cr6.eq) goto loc_823BB40C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_823BB3CC:
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r1,79
	ctx.r9.s64 = ctx.r1.s64 + 79;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823BB3E4:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x823bb3e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BB3E4;
	// lwz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 82);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bb400
	if (ctx.cr6.eq) goto loc_823BB400;
	// bl 0x82357128
	ctx.lr = 0x823BB400;
	sub_82357128(ctx, base);
loc_823BB400:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// bne 0x823bb3cc
	if (!ctx.cr0.eq) goto loc_823BB3CC;
loc_823BB40C:
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r31,r30,180
	ctx.r31.s64 = ctx.r30.s64 + 180;
	// stw r29,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bb428
	if (ctx.cr6.eq) goto loc_823BB428;
	// bl 0x82357240
	ctx.lr = 0x823BB424;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_823BB428:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bb444
	if (ctx.cr6.eq) goto loc_823BB444;
	// bl 0x82357128
	ctx.lr = 0x823BB440;
	sub_82357128(ctx, base);
	// stw r29,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r29.u32);
loc_823BB444:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bb45c
	if (ctx.cr6.eq) goto loc_823BB45C;
	// bl 0x82357240
	ctx.lr = 0x823BB458;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_823BB45C:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x823c1100
	ctx.lr = 0x823BB46C;
	sub_823C1100(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823BB474;
	sub_823C13B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823BB47C"))) PPC_WEAK_FUNC(sub_823BB47C);
PPC_FUNC_IMPL(__imp__sub_823BB47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB480"))) PPC_WEAK_FUNC(sub_823BB480);
PPC_FUNC_IMPL(__imp__sub_823BB480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823bb398
	ctx.lr = 0x823BB4A0;
	sub_823BB398(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bb4b8
	if (ctx.cr6.eq) goto loc_823BB4B8;
	// bl 0x82357128
	ctx.lr = 0x823BB4B4;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BB4B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB4D0"))) PPC_WEAK_FUNC(sub_823BB4D0);
PPC_FUNC_IMPL(__imp__sub_823BB4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823BB4D8;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823BB4E4;
	sub_823AC6B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bb624
	if (ctx.cr6.eq) goto loc_823BB624;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x823bb624
	if (!ctx.cr6.eq) goto loc_823BB624;
	// lwz r23,20(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823bb5d4
	if (ctx.cr6.eq) goto loc_823BB5D4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r27,r11,65001
	ctx.r27.u64 = ctx.r11.u64 | 65001;
loc_823BB518:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82256be8
	ctx.lr = 0x823BB53C;
	sub_82256BE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bb624
	if (ctx.cr6.eq) goto loc_823BB624;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823570e0
	ctx.lr = 0x823BB554;
	sub_823570E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823570f0
	ctx.lr = 0x823BB55C;
	sub_823570F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BB568;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823bb64c
	if (ctx.cr6.eq) goto loc_823BB64C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823585a0
	ctx.lr = 0x823BB57C;
	sub_823585A0(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82256be8
	ctx.lr = 0x823BB598;
	sub_82256BE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bb620
	if (ctx.cr6.eq) goto loc_823BB620;
	// bl 0x8224a830
	ctx.lr = 0x823BB5A8;
	sub_8224A830(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// stw r31,82(r1)
	PPC_STORE_U32(ctx.r1.u32 + 82, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,180
	ctx.r3.s64 = ctx.r26.s64 + 180;
	// bl 0x823bb280
	ctx.lr = 0x823BB5BC;
	sub_823BB280(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bb644
	if (ctx.cr6.eq) goto loc_823BB644;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823bb518
	if (ctx.cr6.lt) goto loc_823BB518;
loc_823BB5D4:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r11,200(r26)
	PPC_STORE_U32(ctx.r26.u32 + 200, ctx.r11.u32);
	// bl 0x823570e0
	ctx.lr = 0x823BB5E8;
	sub_823570E0(ctx, base);
	// lwz r3,200(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 200);
	// bl 0x823570f0
	ctx.lr = 0x823BB5F0;
	sub_823570F0(ctx, base);
	// stw r3,204(r26)
	PPC_STORE_U32(ctx.r26.u32 + 204, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BB5FC;
	sub_823570E0(ctx, base);
	// lwz r3,204(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bb64c
	if (ctx.cr6.eq) goto loc_823BB64C;
	// lwz r4,200(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 200);
	// bl 0x823585a0
	ctx.lr = 0x823BB610;
	sub_823585A0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ab560
	ctx.lr = 0x823BB618;
	sub_823AB560(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823BB620:
	// bl 0x82357128
	ctx.lr = 0x823BB624;
	sub_82357128(ctx, base);
loc_823BB624:
	// lis r4,4
	ctx.r4.s64 = 262144;
loc_823BB628:
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BB638;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823BB644:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x823BB64C;
	sub_82357128(ctx, base);
loc_823BB64C:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// b 0x823bb628
	goto loc_823BB628;
}

__attribute__((alias("__imp__sub_823BB654"))) PPC_WEAK_FUNC(sub_823BB654);
PPC_FUNC_IMPL(__imp__sub_823BB654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB658"))) PPC_WEAK_FUNC(sub_823BB658);
PPC_FUNC_IMPL(__imp__sub_823BB658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823BB660;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823bb708
	if (ctx.cr6.eq) goto loc_823BB708;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x823bb708
	if (!ctx.cr6.eq) goto loc_823BB708;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r9,188(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823bb69c
	if (ctx.cr6.eq) goto loc_823BB69C;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x823bb710
	goto loc_823BB710;
loc_823BB69C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823bb6f4
	if (ctx.cr6.eq) goto loc_823BB6F4;
	// addi r29,r4,8
	ctx.r29.s64 = ctx.r4.s64 + 8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823BB6B0:
	// lwz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r10,r11,0
	ctx.r10.s64 = ctx.r11.s64 + 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x823ada98
	ctx.lr = 0x823BB6D4;
	sub_823ADA98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bb700
	if (ctx.cr6.eq) goto loc_823BB700;
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823bb6b0
	if (ctx.cr6.lt) goto loc_823BB6B0;
loc_823BB6F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823BB700:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// b 0x823bb70c
	goto loc_823BB70C;
loc_823BB708:
	// lis r4,4
	ctx.r4.s64 = 262144;
loc_823BB70C:
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_823BB710:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BB71C;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823BB728"))) PPC_WEAK_FUNC(sub_823BB728);
PPC_FUNC_IMPL(__imp__sub_823BB728) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823BB748;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-25144
	ctx.r9.s64 = ctx.r10.s64 + -25144;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823BB76C"))) PPC_WEAK_FUNC(sub_823BB76C);
PPC_FUNC_IMPL(__imp__sub_823BB76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB770"))) PPC_WEAK_FUNC(sub_823BB770);
PPC_FUNC_IMPL(__imp__sub_823BB770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25144
	ctx.r10.s64 = ctx.r11.s64 + -25144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c13b0
	ctx.lr = 0x823BB79C;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823bb7b4
	if (ctx.cr6.eq) goto loc_823BB7B4;
	// bl 0x82357128
	ctx.lr = 0x823BB7B0;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BB7B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB7CC"))) PPC_WEAK_FUNC(sub_823BB7CC);
PPC_FUNC_IMPL(__imp__sub_823BB7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB7D0"))) PPC_WEAK_FUNC(sub_823BB7D0);
PPC_FUNC_IMPL(__imp__sub_823BB7D0) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823BB7E8;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bb814
	if (ctx.cr6.eq) goto loc_823BB814;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// bne cr6,0x823bb814
	if (!ctx.cr6.eq) goto loc_823BB814;
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
loc_823BB814:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BB828;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823BB840"))) PPC_WEAK_FUNC(sub_823BB840);
PPC_FUNC_IMPL(__imp__sub_823BB840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac6b8
	ctx.lr = 0x823BB85C;
	sub_823AC6B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823abc48
	ctx.lr = 0x823BB864;
	sub_823ABC48(ctx, base);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x823abe28
	ctx.lr = 0x823BB870;
	sub_823ABE28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bb894
	if (!ctx.cr6.eq) goto loc_823BB894;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BB88C;
	sub_823AC608(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x823bb898
	goto loc_823BB898;
loc_823BB894:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823BB898:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB8B0"))) PPC_WEAK_FUNC(sub_823BB8B0);
PPC_FUNC_IMPL(__imp__sub_823BB8B0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823BB8D0;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-25072
	ctx.r9.s64 = ctx.r10.s64 + -25072;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823BB8F4"))) PPC_WEAK_FUNC(sub_823BB8F4);
PPC_FUNC_IMPL(__imp__sub_823BB8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB8F8"))) PPC_WEAK_FUNC(sub_823BB8F8);
PPC_FUNC_IMPL(__imp__sub_823BB8F8) {
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
	// bl 0x823abc48
	ctx.lr = 0x823BB908;
	sub_823ABC48(ctx, base);
	// bl 0x823ac078
	ctx.lr = 0x823BB90C;
	sub_823AC078(ctx, base);
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

__attribute__((alias("__imp__sub_823BB920"))) PPC_WEAK_FUNC(sub_823BB920);
PPC_FUNC_IMPL(__imp__sub_823BB920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25072
	ctx.r10.s64 = ctx.r11.s64 + -25072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c13b0
	ctx.lr = 0x823BB94C;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823bb964
	if (ctx.cr6.eq) goto loc_823BB964;
	// bl 0x82357128
	ctx.lr = 0x823BB960;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BB964:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB97C"))) PPC_WEAK_FUNC(sub_823BB97C);
PPC_FUNC_IMPL(__imp__sub_823BB97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB980"))) PPC_WEAK_FUNC(sub_823BB980);
PPC_FUNC_IMPL(__imp__sub_823BB980) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823BB998;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bb9c4
	if (ctx.cr6.eq) goto loc_823BB9C4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x823bb9c4
	if (!ctx.cr6.eq) goto loc_823BB9C4;
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
loc_823BB9C4:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BB9D8;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823BB9F0"))) PPC_WEAK_FUNC(sub_823BB9F0);
PPC_FUNC_IMPL(__imp__sub_823BB9F0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823BBA10;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-25000
	ctx.r9.s64 = ctx.r10.s64 + -25000;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823BBA34"))) PPC_WEAK_FUNC(sub_823BBA34);
PPC_FUNC_IMPL(__imp__sub_823BBA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBA38"))) PPC_WEAK_FUNC(sub_823BBA38);
PPC_FUNC_IMPL(__imp__sub_823BBA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25000
	ctx.r10.s64 = ctx.r11.s64 + -25000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c13b0
	ctx.lr = 0x823BBA64;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823bba7c
	if (ctx.cr6.eq) goto loc_823BBA7C;
	// bl 0x82357128
	ctx.lr = 0x823BBA78;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BBA7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BBA94"))) PPC_WEAK_FUNC(sub_823BBA94);
PPC_FUNC_IMPL(__imp__sub_823BBA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBA98"))) PPC_WEAK_FUNC(sub_823BBA98);
PPC_FUNC_IMPL(__imp__sub_823BBA98) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823BBAB0;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bbadc
	if (ctx.cr6.eq) goto loc_823BBADC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x823bbadc
	if (!ctx.cr6.eq) goto loc_823BBADC;
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
loc_823BBADC:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BBAF0;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823BBB08"))) PPC_WEAK_FUNC(sub_823BBB08);
PPC_FUNC_IMPL(__imp__sub_823BBB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823BBB10;
	sub_8224876C(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823BBB1C;
	sub_823AC6B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823abc48
	ctx.lr = 0x823BBB24;
	sub_823ABC48(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r23,r11,-27036
	ctx.r23.s64 = ctx.r11.s64 + -27036;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// lwz r25,16(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823bbc54
	if (ctx.cr6.eq) goto loc_823BBC54;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r24,r11,30912
	ctx.r24.s64 = ctx.r11.s64 + 30912;
loc_823BBB6C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82248a40
	ctx.lr = 0x823BBB88;
	sub_82248A40(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// ld r31,76(r31)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r31.u32 + 76);
	// bl 0x82357358
	ctx.lr = 0x823BBB94;
	sub_82357358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82248a40
	ctx.lr = 0x823BBBA8;
	sub_82248A40(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r31,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r31.u64);
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x823BBBBC;
	sub_82248A40(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x823570e0
	ctx.lr = 0x823BBBC4;
	sub_823570E0(ctx, base);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x823570f0
	ctx.lr = 0x823BBBCC;
	sub_823570F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bbbf8
	if (ctx.cr6.eq) goto loc_823BBBF8;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82248a40
	ctx.lr = 0x823BBBEC;
	sub_82248A40(ctx, base);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// b 0x823bbbfc
	goto loc_823BBBFC;
loc_823BBBF8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_823BBBFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BBC04;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823bbc80
	if (ctx.cr6.eq) goto loc_823BBC80;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x823bbc30
	if (ctx.cr6.eq) goto loc_823BBC30;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r31,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r31.u32);
loc_823BBC30:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823bbc44
	if (!ctx.cr6.eq) goto loc_823BBC44;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
loc_823BBC44:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,104
	ctx.r30.s64 = ctx.r30.s64 + 104;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x823bbb6c
	if (ctx.cr6.lt) goto loc_823BBB6C;
loc_823BBC54:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823ac240
	ctx.lr = 0x823BBC60;
	sub_823AC240(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bbc80
	if (ctx.cr6.eq) goto loc_823BBC80;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x823ada20
	ctx.lr = 0x823BBC74;
	sub_823ADA20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823BBC80:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BBC94;
	sub_823AC608(ctx, base);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x823ada20
	ctx.lr = 0x823BBCA0;
	sub_823ADA20(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823BBCAC"))) PPC_WEAK_FUNC(sub_823BBCAC);
PPC_FUNC_IMPL(__imp__sub_823BBCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBCB0"))) PPC_WEAK_FUNC(sub_823BBCB0);
PPC_FUNC_IMPL(__imp__sub_823BBCB0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823ac4d8
	ctx.lr = 0x823BBCD0;
	sub_823AC4D8(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-24928
	ctx.r9.s64 = ctx.r10.s64 + -24928;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823BBCF4"))) PPC_WEAK_FUNC(sub_823BBCF4);
PPC_FUNC_IMPL(__imp__sub_823BBCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBCF8"))) PPC_WEAK_FUNC(sub_823BBCF8);
PPC_FUNC_IMPL(__imp__sub_823BBCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-24928
	ctx.r10.s64 = ctx.r11.s64 + -24928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823ac548
	ctx.lr = 0x823BBD24;
	sub_823AC548(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823bbd3c
	if (ctx.cr6.eq) goto loc_823BBD3C;
	// bl 0x82357128
	ctx.lr = 0x823BBD38;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BBD3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BBD54"))) PPC_WEAK_FUNC(sub_823BBD54);
PPC_FUNC_IMPL(__imp__sub_823BBD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBD58"))) PPC_WEAK_FUNC(sub_823BBD58);
PPC_FUNC_IMPL(__imp__sub_823BBD58) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823BBD70;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bbd90
	if (ctx.cr6.eq) goto loc_823BBD90;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// bne cr6,0x823bbd90
	if (!ctx.cr6.eq) goto loc_823BBD90;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// b 0x823bbd98
	goto loc_823BBD98;
loc_823BBD90:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
loc_823BBD98:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BBDA4;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823BBDBC"))) PPC_WEAK_FUNC(sub_823BBDBC);
PPC_FUNC_IMPL(__imp__sub_823BBDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBDC0"))) PPC_WEAK_FUNC(sub_823BBDC0);
PPC_FUNC_IMPL(__imp__sub_823BBDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 8);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x823bbe78
	if (ctx.cr6.gt) goto loc_823BBE78;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823bbe78
	// bdzf 4*cr6+eq,0x823bbe40
	// bdzf 4*cr6+eq,0x823bbe78
	// bdzf 4*cr6+eq,0x823bbe10
	// bdzf 4*cr6+eq,0x823bbe28
	// bdzf 4*cr6+eq,0x823bbe78
	// bdzf 4*cr6+eq,0x823bbe78
	// bne cr6,0x823bbe58
	if (!ctx.cr6.eq) goto loc_823BBE58;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_823BBE10:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_823BBE28:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lfd f0,16(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16);
	// stfd f0,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.f0.u64);
	// blr 
	return;
loc_823BBE40:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// ld r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16);
	// std r10,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r10.u64);
	// blr 
	return;
loc_823BBE58:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// blr 
	return;
loc_823BBE78:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BBE80"))) PPC_WEAK_FUNC(sub_823BBE80);
PPC_FUNC_IMPL(__imp__sub_823BBE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bbed4
	if (ctx.cr6.eq) goto loc_823BBED4;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823BBEAC;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bbfd4
	if (ctx.cr6.eq) goto loc_823BBFD4;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823bbfc8
	if (ctx.cr6.eq) goto loc_823BBFC8;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BBED0;
	sub_823AC608(ctx, base);
	// b 0x823bbfc8
	goto loc_823BBFC8;
loc_823BBED4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BBEDC;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bbf54
	if (!ctx.cr6.eq) goto loc_823BBF54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BBEF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bbf54
	if (!ctx.cr6.eq) goto loc_823BBF54;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823bbfd4
	if (ctx.cr6.eq) goto loc_823BBFD4;
	// bl 0x82256ce8
	ctx.lr = 0x823BBF14;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bbf4c
	if (ctx.cr6.eq) goto loc_823BBF4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BBF38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BBF48;
	sub_823AC608(ctx, base);
	// b 0x823bbfc8
	goto loc_823BBFC8;
loc_823BBF4C:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x823bbfd0
	goto loc_823BBFD0;
loc_823BBF54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BBF5C;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bbf74
	if (ctx.cr6.eq) goto loc_823BBF74;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823bbf98
	goto loc_823BBF98;
loc_823BBF74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BBF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bbfa0
	if (ctx.cr6.eq) goto loc_823BBFA0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823BBF98:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823BBFA0;
	sub_823AC608(ctx, base);
loc_823BBFA0:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823BBFB4;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823bbfd4
	if (!ctx.cr6.eq) goto loc_823BBFD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823BBFC8;
	sub_82256CC0(ctx, base);
loc_823BBFC8:
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BBFD0:
	// bl 0x823ac5b8
	ctx.lr = 0x823BBFD4;
	sub_823AC5B8(ctx, base);
loc_823BBFD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BBFEC"))) PPC_WEAK_FUNC(sub_823BBFEC);
PPC_FUNC_IMPL(__imp__sub_823BBFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBFF0"))) PPC_WEAK_FUNC(sub_823BBFF0);
PPC_FUNC_IMPL(__imp__sub_823BBFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bc044
	if (ctx.cr6.eq) goto loc_823BC044;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823BC01C;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bc144
	if (ctx.cr6.eq) goto loc_823BC144;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823bc138
	if (ctx.cr6.eq) goto loc_823BC138;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC040;
	sub_823AC608(ctx, base);
	// b 0x823bc138
	goto loc_823BC138;
loc_823BC044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BC04C;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bc0c4
	if (!ctx.cr6.eq) goto loc_823BC0C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bc0c4
	if (!ctx.cr6.eq) goto loc_823BC0C4;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823bc144
	if (ctx.cr6.eq) goto loc_823BC144;
	// bl 0x82256ce8
	ctx.lr = 0x823BC084;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bc0bc
	if (ctx.cr6.eq) goto loc_823BC0BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC0A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC0B8;
	sub_823AC608(ctx, base);
	// b 0x823bc138
	goto loc_823BC138;
loc_823BC0BC:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823bc140
	goto loc_823BC140;
loc_823BC0C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BC0CC;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bc0e4
	if (ctx.cr6.eq) goto loc_823BC0E4;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823bc108
	goto loc_823BC108;
loc_823BC0E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC0F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bc110
	if (ctx.cr6.eq) goto loc_823BC110;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823BC108:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823BC110;
	sub_823AC608(ctx, base);
loc_823BC110:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823BC124;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823bc144
	if (!ctx.cr6.eq) goto loc_823BC144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823BC138;
	sub_82256CC0(ctx, base);
loc_823BC138:
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BC140:
	// bl 0x823ac5b8
	ctx.lr = 0x823BC144;
	sub_823AC5B8(ctx, base);
loc_823BC144:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BC15C"))) PPC_WEAK_FUNC(sub_823BC15C);
PPC_FUNC_IMPL(__imp__sub_823BC15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BC160"))) PPC_WEAK_FUNC(sub_823BC160);
PPC_FUNC_IMPL(__imp__sub_823BC160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bc1ac
	if (ctx.cr6.eq) goto loc_823BC1AC;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC1A4;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823bc21c
	goto loc_823BC21C;
loc_823BC1AC:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823BC1BC;
	sub_823585A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x8240cd58
	ctx.lr = 0x823BC1CC;
	sub_8240CD58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823bc210
	if (ctx.cr6.eq) goto loc_823BC210;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bc210
	if (ctx.cr6.eq) goto loc_823BC210;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC1F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC208;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823bc21c
	goto loc_823BC21C;
loc_823BC210:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BC218;
	sub_823AC668(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
loc_823BC21C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BC224;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BC23C"))) PPC_WEAK_FUNC(sub_823BC23C);
PPC_FUNC_IMPL(__imp__sub_823BC23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BC240"))) PPC_WEAK_FUNC(sub_823BC240);
PPC_FUNC_IMPL(__imp__sub_823BC240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bc294
	if (ctx.cr6.eq) goto loc_823BC294;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823BC26C;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bc394
	if (ctx.cr6.eq) goto loc_823BC394;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823bc388
	if (ctx.cr6.eq) goto loc_823BC388;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC290;
	sub_823AC608(ctx, base);
	// b 0x823bc388
	goto loc_823BC388;
loc_823BC294:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BC29C;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bc314
	if (!ctx.cr6.eq) goto loc_823BC314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bc314
	if (!ctx.cr6.eq) goto loc_823BC314;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823bc394
	if (ctx.cr6.eq) goto loc_823BC394;
	// bl 0x82256ce8
	ctx.lr = 0x823BC2D4;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bc30c
	if (ctx.cr6.eq) goto loc_823BC30C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC308;
	sub_823AC608(ctx, base);
	// b 0x823bc388
	goto loc_823BC388;
loc_823BC30C:
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x823bc390
	goto loc_823BC390;
loc_823BC314:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BC31C;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bc334
	if (ctx.cr6.eq) goto loc_823BC334;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823bc358
	goto loc_823BC358;
loc_823BC334:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bc360
	if (ctx.cr6.eq) goto loc_823BC360;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823BC358:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823BC360;
	sub_823AC608(ctx, base);
loc_823BC360:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823BC374;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823bc394
	if (!ctx.cr6.eq) goto loc_823BC394;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823BC388;
	sub_82256CC0(ctx, base);
loc_823BC388:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BC390:
	// bl 0x823ac5b8
	ctx.lr = 0x823BC394;
	sub_823AC5B8(ctx, base);
loc_823BC394:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BC3AC"))) PPC_WEAK_FUNC(sub_823BC3AC);
PPC_FUNC_IMPL(__imp__sub_823BC3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BC3B0"))) PPC_WEAK_FUNC(sub_823BC3B0);
PPC_FUNC_IMPL(__imp__sub_823BC3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bc418
	if (ctx.cr6.eq) goto loc_823BC418;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823BC3DC;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bc53c
	if (ctx.cr6.eq) goto loc_823BC53C;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823bc400
	if (ctx.cr6.eq) goto loc_823BC400;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC400;
	sub_823AC608(ctx, base);
loc_823BC400:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bc534
	if (ctx.cr6.eq) goto loc_823BC534;
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x823bc538
	goto loc_823BC538;
loc_823BC418:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BC420;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bc4ac
	if (!ctx.cr6.eq) goto loc_823BC4AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC43C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bc4ac
	if (!ctx.cr6.eq) goto loc_823BC4AC;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823bc53c
	if (ctx.cr6.eq) goto loc_823BC53C;
	// bl 0x82256ce8
	ctx.lr = 0x823BC458;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bc4a4
	if (ctx.cr6.eq) goto loc_823BC4A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC48C;
	sub_823AC608(ctx, base);
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823bc534
	if (ctx.cr6.eq) goto loc_823BC534;
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x823bc538
	goto loc_823BC538;
loc_823BC4A4:
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x823bc538
	goto loc_823BC538;
loc_823BC4AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BC4B4;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bc4cc
	if (ctx.cr6.eq) goto loc_823BC4CC;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823bc4f0
	goto loc_823BC4F0;
loc_823BC4CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC4DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bc4f8
	if (ctx.cr6.eq) goto loc_823BC4F8;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823BC4F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823BC4F8;
	sub_823AC608(ctx, base);
loc_823BC4F8:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823BC50C;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823bc53c
	if (!ctx.cr6.eq) goto loc_823BC53C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823BC520;
	sub_82256CC0(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,22
	ctx.r4.s64 = 22;
	// bne cr6,0x823bc538
	if (!ctx.cr6.eq) goto loc_823BC538;
loc_823BC534:
	// li r4,13
	ctx.r4.s64 = 13;
loc_823BC538:
	// bl 0x823ac5b8
	ctx.lr = 0x823BC53C;
	sub_823AC5B8(ctx, base);
loc_823BC53C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BC554"))) PPC_WEAK_FUNC(sub_823BC554);
PPC_FUNC_IMPL(__imp__sub_823BC554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BC558"))) PPC_WEAK_FUNC(sub_823BC558);
PPC_FUNC_IMPL(__imp__sub_823BC558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,152
	ctx.r30.s64 = ctx.r3.s64 + 152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823585a0
	ctx.lr = 0x823BC580;
	sub_823585A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x8240cdf8
	ctx.lr = 0x823BC58C;
	sub_8240CDF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823bc5d0
	if (ctx.cr6.eq) goto loc_823BC5D0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bc5d0
	if (ctx.cr6.eq) goto loc_823BC5D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC5B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC5C8;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823bc5dc
	goto loc_823BC5DC;
loc_823BC5D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BC5D8;
	sub_823AC668(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
loc_823BC5DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BC5E4;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BC5FC"))) PPC_WEAK_FUNC(sub_823BC5FC);
PPC_FUNC_IMPL(__imp__sub_823BC5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BC600"))) PPC_WEAK_FUNC(sub_823BC600);
PPC_FUNC_IMPL(__imp__sub_823BC600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bc658
	if (ctx.cr6.eq) goto loc_823BC658;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823BC62C;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bc708
	if (ctx.cr6.eq) goto loc_823BC708;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823bc650
	if (ctx.cr6.eq) goto loc_823BC650;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC650;
	sub_823AC608(ctx, base);
loc_823BC650:
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823bc700
	goto loc_823BC700;
loc_823BC658:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BC660;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bc6ac
	if (ctx.cr6.eq) goto loc_823BC6AC;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC67C;
	sub_823AC608(ctx, base);
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823BC690;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823bc708
	if (!ctx.cr6.eq) goto loc_823BC708;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823BC6A4;
	sub_82256CC0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823bc700
	goto loc_823BC700;
loc_823BC6AC:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823bc708
	if (ctx.cr6.eq) goto loc_823BC708;
	// bl 0x82256ce8
	ctx.lr = 0x823BC6C0;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bc6fc
	if (ctx.cr6.eq) goto loc_823BC6FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC6E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC6F4;
	sub_823AC608(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823bc700
	goto loc_823BC700;
loc_823BC6FC:
	// li r4,15
	ctx.r4.s64 = 15;
loc_823BC700:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BC708;
	sub_823AC5B8(ctx, base);
loc_823BC708:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BC720"))) PPC_WEAK_FUNC(sub_823BC720);
PPC_FUNC_IMPL(__imp__sub_823BC720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bc778
	if (ctx.cr6.eq) goto loc_823BC778;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823BC74C;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bc828
	if (ctx.cr6.eq) goto loc_823BC828;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823bc770
	if (ctx.cr6.eq) goto loc_823BC770;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC770;
	sub_823AC608(ctx, base);
loc_823BC770:
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x823bc820
	goto loc_823BC820;
loc_823BC778:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BC780;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bc7cc
	if (ctx.cr6.eq) goto loc_823BC7CC;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC79C;
	sub_823AC608(ctx, base);
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823BC7B0;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823bc828
	if (!ctx.cr6.eq) goto loc_823BC828;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823BC7C4;
	sub_82256CC0(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x823bc820
	goto loc_823BC820;
loc_823BC7CC:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823bc828
	if (ctx.cr6.eq) goto loc_823BC828;
	// bl 0x82256ce8
	ctx.lr = 0x823BC7E0;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bc81c
	if (ctx.cr6.eq) goto loc_823BC81C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC814;
	sub_823AC608(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x823bc820
	goto loc_823BC820;
loc_823BC81C:
	// li r4,18
	ctx.r4.s64 = 18;
loc_823BC820:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BC828;
	sub_823AC5B8(ctx, base);
loc_823BC828:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BC840"))) PPC_WEAK_FUNC(sub_823BC840);
PPC_FUNC_IMPL(__imp__sub_823BC840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,152
	ctx.r30.s64 = ctx.r3.s64 + 152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823585a0
	ctx.lr = 0x823BC868;
	sub_823585A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x8240c918
	ctx.lr = 0x823BC874;
	sub_8240C918(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823bc8b8
	if (ctx.cr6.eq) goto loc_823BC8B8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bc8b8
	if (ctx.cr6.eq) goto loc_823BC8B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC8B0;
	sub_823AC608(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x823bc8c4
	goto loc_823BC8C4;
loc_823BC8B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BC8C0;
	sub_823AC668(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
loc_823BC8C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BC8CC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BC8E4"))) PPC_WEAK_FUNC(sub_823BC8E4);
PPC_FUNC_IMPL(__imp__sub_823BC8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BC8E8"))) PPC_WEAK_FUNC(sub_823BC8E8);
PPC_FUNC_IMPL(__imp__sub_823BC8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bc940
	if (ctx.cr6.eq) goto loc_823BC940;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823BC914;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bc9f0
	if (ctx.cr6.eq) goto loc_823BC9F0;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823bc938
	if (ctx.cr6.eq) goto loc_823BC938;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC938;
	sub_823AC608(ctx, base);
loc_823BC938:
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x823bc9e8
	goto loc_823BC9E8;
loc_823BC940:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BC948;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bc994
	if (ctx.cr6.eq) goto loc_823BC994;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC964;
	sub_823AC608(ctx, base);
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823BC978;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823bc9f0
	if (!ctx.cr6.eq) goto loc_823BC9F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823BC98C;
	sub_82256CC0(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x823bc9e8
	goto loc_823BC9E8;
loc_823BC994:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823bc9f0
	if (ctx.cr6.eq) goto loc_823BC9F0;
	// bl 0x82256ce8
	ctx.lr = 0x823BC9A8;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bc9e4
	if (ctx.cr6.eq) goto loc_823BC9E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BC9CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BC9DC;
	sub_823AC608(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x823bc9e8
	goto loc_823BC9E8;
loc_823BC9E4:
	// li r4,21
	ctx.r4.s64 = 21;
loc_823BC9E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BC9F0;
	sub_823AC5B8(ctx, base);
loc_823BC9F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BCA08"))) PPC_WEAK_FUNC(sub_823BCA08);
PPC_FUNC_IMPL(__imp__sub_823BCA08) {
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
	// bl 0x823ac5c0
	ctx.lr = 0x823BCA18;
	sub_823AC5C0(ctx, base);
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// blt cr6,0x823bca2c
	if (ctx.cr6.lt) goto loc_823BCA2C;
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// ble cr6,0x823bca30
	if (!ctx.cr6.gt) goto loc_823BCA30;
loc_823BCA2C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823BCA30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BCA40"))) PPC_WEAK_FUNC(sub_823BCA40);
PPC_FUNC_IMPL(__imp__sub_823BCA40) {
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
	// bl 0x823a0f10
	ctx.lr = 0x823BCA58;
	sub_823A0F10(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// beq 0x823bca80
	if (ctx.cr0.eq) goto loc_823BCA80;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// b 0x823bca84
	goto loc_823BCA84;
loc_823BCA80:
	// li r4,1
	ctx.r4.s64 = 1;
loc_823BCA84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BCA8C;
	sub_823AC5B8(ctx, base);
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

__attribute__((alias("__imp__sub_823BCAA4"))) PPC_WEAK_FUNC(sub_823BCAA4);
PPC_FUNC_IMPL(__imp__sub_823BCAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BCAA8"))) PPC_WEAK_FUNC(sub_823BCAA8);
PPC_FUNC_IMPL(__imp__sub_823BCAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823BCAB0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823BCABC;
	sub_823AC6B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BCAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bcb04
	if (ctx.cr6.eq) goto loc_823BCB04;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BCAF0;
	sub_823AC608(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BCAFC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BCB04:
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82256270
	ctx.lr = 0x823BCB1C;
	sub_82256270(ctx, base);
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823BCB2C;
	sub_823585A0(ctx, base);
	// lbz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// addi r10,r31,196
	ctx.r10.s64 = ctx.r31.s64 + 196;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r31,208
	ctx.r8.s64 = ctx.r31.s64 + 208;
	// addi r7,r31,200
	ctx.r7.s64 = ctx.r31.s64 + 200;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,1799
	ctx.r3.s64 = 1799;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// bl 0x8240c6a8
	ctx.lr = 0x823BCB54;
	sub_8240C6A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823bcba4
	if (ctx.cr6.eq) goto loc_823BCBA4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bcba4
	if (ctx.cr6.eq) goto loc_823BCBA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BCB80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BCB90;
	sub_823AC608(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BCB9C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BCBA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BCBAC;
	sub_823AC668(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BCBB8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823BCBC0"))) PPC_WEAK_FUNC(sub_823BCBC0);
PPC_FUNC_IMPL(__imp__sub_823BCBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823BCBC8;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823BCBD4;
	sub_823AC6B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BCBEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bcc1c
	if (ctx.cr6.eq) goto loc_823BCC1C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BCC08;
	sub_823AC608(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BCC14;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823BCC1C:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r9.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r29,r31,268
	ctx.r29.s64 = ctx.r31.s64 + 268;
	// addi r28,r31,272
	ctx.r28.s64 = ctx.r31.s64 + 272;
	// bl 0x823585a0
	ctx.lr = 0x823BCC48;
	sub_823585A0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8240c9c8
	ctx.lr = 0x823BCC60;
	sub_8240C9C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823bccb0
	if (ctx.cr6.eq) goto loc_823BCCB0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bccb0
	if (ctx.cr6.eq) goto loc_823BCCB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BCC8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BCC9C;
	sub_823AC608(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BCCA8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823BCCB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BCCB8;
	sub_823AC668(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BCCC4;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823BCCCC"))) PPC_WEAK_FUNC(sub_823BCCCC);
PPC_FUNC_IMPL(__imp__sub_823BCCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BCCD0"))) PPC_WEAK_FUNC(sub_823BCCD0);
PPC_FUNC_IMPL(__imp__sub_823BCCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac6b8
	ctx.lr = 0x823BCCEC;
	sub_823AC6B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r5,r31,268
	ctx.r5.s64 = ctx.r31.s64 + 268;
	// addi r6,r31,152
	ctx.r6.s64 = ctx.r31.s64 + 152;
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stw r9,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r9.u32);
	// bl 0x8240cb28
	ctx.lr = 0x823BCD10;
	sub_8240CB28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823bcd54
	if (ctx.cr6.eq) goto loc_823BCD54;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bcd54
	if (ctx.cr6.eq) goto loc_823BCD54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BCD3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BCD4C;
	sub_823AC608(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x823bcd60
	goto loc_823BCD60;
loc_823BCD54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BCD5C;
	sub_823AC668(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
loc_823BCD60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BCD68;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BCD80"))) PPC_WEAK_FUNC(sub_823BCD80);
PPC_FUNC_IMPL(__imp__sub_823BCD80) {
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
	// bge cr6,0x823bcdf0
	if (!ctx.cr6.lt) goto loc_823BCDF0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x823bcddc
	if (!ctx.cr6.lt) goto loc_823BCDDC;
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
loc_823BCDDC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x823b66f0
	ctx.lr = 0x823BCDE4;
	sub_823B66F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x823bcdf4
	if (ctx.cr6.eq) goto loc_823BCDF4;
loc_823BCDF0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823BCDF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BCE04"))) PPC_WEAK_FUNC(sub_823BCE04);
PPC_FUNC_IMPL(__imp__sub_823BCE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BCE08"))) PPC_WEAK_FUNC(sub_823BCE08);
PPC_FUNC_IMPL(__imp__sub_823BCE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823BCE10;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823bcea8
	if (ctx.cr6.eq) goto loc_823BCEA8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bce40
	if (ctx.cr6.eq) goto loc_823BCE40;
	// bl 0x82357240
	ctx.lr = 0x823BCE3C;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823BCE40:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823bce60
	if (!ctx.cr6.eq) goto loc_823BCE60;
	// li r11,16
	ctx.r11.s64 = 16;
loc_823BCE60:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823bcea8
	if (ctx.cr6.eq) goto loc_823BCEA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bcd80
	ctx.lr = 0x823BCE78;
	sub_823BCD80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bce88
	if (!ctx.cr6.eq) goto loc_823BCE88;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BCE88:
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82358508
	ctx.lr = 0x823BCEA4;
	sub_82358508(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_823BCEA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823BCEB4"))) PPC_WEAK_FUNC(sub_823BCEB4);
PPC_FUNC_IMPL(__imp__sub_823BCEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BCEB8"))) PPC_WEAK_FUNC(sub_823BCEB8);
PPC_FUNC_IMPL(__imp__sub_823BCEB8) {
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
	// addi r9,r10,-24860
	ctx.r9.s64 = ctx.r10.s64 + -24860;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// bl 0x823585a0
	ctx.lr = 0x823BCF04;
	sub_823585A0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823585a0
	ctx.lr = 0x823BCF10;
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

__attribute__((alias("__imp__sub_823BCF28"))) PPC_WEAK_FUNC(sub_823BCF28);
PPC_FUNC_IMPL(__imp__sub_823BCF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823585a0
	ctx.lr = 0x823BCF4C;
	sub_823585A0(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x823585a0
	ctx.lr = 0x823BCF58;
	sub_823585A0(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bcf78
	if (ctx.cr6.eq) goto loc_823BCF78;
	// bl 0x82357240
	ctx.lr = 0x823BCF74;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823BCF78:
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

__attribute__((alias("__imp__sub_823BCF98"))) PPC_WEAK_FUNC(sub_823BCF98);
PPC_FUNC_IMPL(__imp__sub_823BCF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// addi r10,r11,-24860
	ctx.r10.s64 = ctx.r11.s64 + -24860;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x823bcfd8
	if (ctx.cr6.eq) goto loc_823BCFD8;
	// bl 0x82357240
	ctx.lr = 0x823BCFD4;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823BCFD8:
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

__attribute__((alias("__imp__sub_823BCFF8"))) PPC_WEAK_FUNC(sub_823BCFF8);
PPC_FUNC_IMPL(__imp__sub_823BCFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823BD000;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-24860
	ctx.r10.s64 = ctx.r11.s64 + -24860;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r30.u32);
	// beq cr6,0x823bd038
	if (ctx.cr6.eq) goto loc_823BD038;
	// bl 0x82357240
	ctx.lr = 0x823BD034;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_823BD038:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bd058
	if (ctx.cr6.eq) goto loc_823BD058;
	// bl 0x82357128
	ctx.lr = 0x823BD054;
	sub_82357128(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_823BD058:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823BD060"))) PPC_WEAK_FUNC(sub_823BD060);
PPC_FUNC_IMPL(__imp__sub_823BD060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823BD068;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x823BD080;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bd0b0
	if (ctx.cr6.eq) goto loc_823BD0B0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BD09C;
	sub_823AC608(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BD0A8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823BD0B0:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r4,28
	ctx.r4.s64 = 28;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// ld r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// bl 0x823585a0
	ctx.lr = 0x823BD0F0;
	sub_823585A0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8240d070
	ctx.lr = 0x823BD108;
	sub_8240D070(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823bd174
	if (ctx.cr6.eq) goto loc_823BD174;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bd174
	if (ctx.cr6.eq) goto loc_823BD174;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BD134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BD144;
	sub_823AC608(ctx, base);
	// lwz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823bd164
	if (ctx.cr6.eq) goto loc_823BD164;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x823ac5b8
	ctx.lr = 0x823BD15C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823BD164:
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x823ac5b8
	ctx.lr = 0x823BD16C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823BD174:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BD17C;
	sub_823AC668(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BD188;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823BD190"))) PPC_WEAK_FUNC(sub_823BD190);
PPC_FUNC_IMPL(__imp__sub_823BD190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// addi r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 + 28;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// bl 0x823bce08
	ctx.lr = 0x823BD1C0;
	sub_823BCE08(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BD1F4"))) PPC_WEAK_FUNC(sub_823BD1F4);
PPC_FUNC_IMPL(__imp__sub_823BD1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD1F8"))) PPC_WEAK_FUNC(sub_823BD1F8);
PPC_FUNC_IMPL(__imp__sub_823BD1F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823BD21C;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-24848
	ctx.r9.s64 = ctx.r10.s64 + -24848;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823BD230;
	sub_823C10A0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r8,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r8.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r7,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r7.u32);
	// bl 0x823585a0
	ctx.lr = 0x823BD25C;
	sub_823585A0(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823585a0
	ctx.lr = 0x823BD268;
	sub_823585A0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stw r6,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r6.u32);
	// li r4,60
	ctx.r4.s64 = 60;
	// std r30,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r30.u64);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// bl 0x823585a0
	ctx.lr = 0x823BD288;
	sub_823585A0(ctx, base);
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

__attribute__((alias("__imp__sub_823BD2A4"))) PPC_WEAK_FUNC(sub_823BD2A4);
PPC_FUNC_IMPL(__imp__sub_823BD2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD2A8"))) PPC_WEAK_FUNC(sub_823BD2A8);
PPC_FUNC_IMPL(__imp__sub_823BD2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac5c0
	ctx.lr = 0x823BD2C8;
	sub_823AC5C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x823bd490
	if (ctx.cr6.gt) goto loc_823BD490;
	// lis r12,-32196
	ctx.r12.s64 = -2109997056;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-11540
	ctx.r12.s64 = ctx.r12.s64 + -11540;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-11452(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11452);
	// lwz r17,-11440(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11440);
	// lwz r17,-11428(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11428);
	// lwz r17,-11372(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11372);
	// lwz r17,-11360(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11360);
	// lwz r17,-11348(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11348);
	// lwz r17,-11412(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11412);
	// lwz r17,-11400(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11400);
	// lwz r17,-11388(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11388);
	// lwz r17,-11332(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11332);
	// lwz r17,-11320(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11320);
	// lwz r17,-11308(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11308);
	// lwz r17,-11244(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11244);
	// lwz r17,-11232(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11232);
	// lwz r17,-11220(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11220);
	// lwz r17,-11204(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11204);
	// lwz r17,-11192(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11192);
	// lwz r17,-11180(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11180);
	// lwz r17,-11164(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11164);
	// lwz r17,-11152(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11152);
	// lwz r17,-11140(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11140);
	// lwz r17,-11124(r27)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bcaa8
	ctx.lr = 0x823BD34C;
	sub_823BCAA8(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bbe80
	ctx.lr = 0x823BD358;
	sub_823BBE80(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BD368;
	sub_823AC5B8(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc160
	ctx.lr = 0x823BD374;
	sub_823BC160(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc240
	ctx.lr = 0x823BD380;
	sub_823BC240(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
loc_823BD384:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BD390;
	sub_823AC5B8(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bcbc0
	ctx.lr = 0x823BD39C;
	sub_823BCBC0(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bbff0
	ctx.lr = 0x823BD3A8;
	sub_823BBFF0(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BD3B8;
	sub_823AC5B8(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bd060
	ctx.lr = 0x823BD3C4;
	sub_823BD060(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc3b0
	ctx.lr = 0x823BD3D0;
	sub_823BC3B0(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823bd384
	if (ctx.cr6.gt) goto loc_823BD384;
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bd408
	if (ctx.cr6.eq) goto loc_823BD408;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x823ac5b8
	ctx.lr = 0x823BD404;
	sub_823AC5B8(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
loc_823BD408:
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x823ac5b8
	ctx.lr = 0x823BD410;
	sub_823AC5B8(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc558
	ctx.lr = 0x823BD41C;
	sub_823BC558(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc600
	ctx.lr = 0x823BD428;
	sub_823BC600(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BD438;
	sub_823AC5B8(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bccd0
	ctx.lr = 0x823BD444;
	sub_823BCCD0(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc720
	ctx.lr = 0x823BD450;
	sub_823BC720(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BD460;
	sub_823AC5B8(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc840
	ctx.lr = 0x823BD46C;
	sub_823BC840(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc8e8
	ctx.lr = 0x823BD478;
	sub_823BC8E8(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BD488;
	sub_823AC5B8(ctx, base);
	// b 0x823bd490
	goto loc_823BD490;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823BD490:
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

__attribute__((alias("__imp__sub_823BD4AC"))) PPC_WEAK_FUNC(sub_823BD4AC);
PPC_FUNC_IMPL(__imp__sub_823BD4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD4B0"))) PPC_WEAK_FUNC(sub_823BD4B0);
PPC_FUNC_IMPL(__imp__sub_823BD4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r10,-24860
	ctx.r9.s64 = ctx.r10.s64 + -24860;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 + 28;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r6,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r6.u64);
	// bl 0x823bce08
	ctx.lr = 0x823BD50C;
	sub_823BCE08(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BD540"))) PPC_WEAK_FUNC(sub_823BD540);
PPC_FUNC_IMPL(__imp__sub_823BD540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823BD548;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r31,r3,280
	ctx.r31.s64 = ctx.r3.s64 + 280;
	// addi r10,r11,-24848
	ctx.r10.s64 = ctx.r11.s64 + -24848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82356770
	ctx.lr = 0x823BD56C;
	sub_82356770(ctx, base);
	// lwz r3,284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bd584
	if (ctx.cr6.eq) goto loc_823BD584;
	// bl 0x82357240
	ctx.lr = 0x823BD580;
	sub_82357240(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_823BD584:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x823c1100
	ctx.lr = 0x823BD594;
	sub_823C1100(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823BD59C;
	sub_823C13B0(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bd5b4
	if (ctx.cr6.eq) goto loc_823BD5B4;
	// bl 0x82357128
	ctx.lr = 0x823BD5B0;
	sub_82357128(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823BD5B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823BD5BC"))) PPC_WEAK_FUNC(sub_823BD5BC);
PPC_FUNC_IMPL(__imp__sub_823BD5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD5C0"))) PPC_WEAK_FUNC(sub_823BD5C0);
PPC_FUNC_IMPL(__imp__sub_823BD5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x823BD5C8;
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
	// bne cr6,0x823bd5e0
	if (!ctx.cr6.eq) goto loc_823BD5E0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823BD5E0:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add. r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x823bd5f8
	if (!ctx.cr0.eq) goto loc_823BD5F8;
loc_823BD5EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_823BD5F8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823BD600;
	sub_823570E0(ctx, base);
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// rlwinm r31,r11,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357208
	ctx.lr = 0x823BD618;
	sub_82357208(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BD624;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823bd5ec
	if (ctx.cr6.eq) goto loc_823BD5EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823585a0
	ctx.lr = 0x823BD638;
	sub_823585A0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bd6f0
	if (ctx.cr6.eq) goto loc_823BD6F0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823bd6d8
	if (!ctx.cr6.gt) goto loc_823BD6D8;
	// addi r31,r25,28
	ctx.r31.s64 = ctx.r25.s64 + 28;
	// subfic r26,r25,-28
	ctx.xer.ca = ctx.r25.u32 <= 4294967268;
	ctx.r26.s64 = -28 - ctx.r25.s64;
loc_823BD65C:
	// addic. r11,r31,-28
	ctx.xer.ca = ctx.r31.u32 > 27;
	ctx.r11.s64 = ctx.r31.s64 + -28;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823bd670
	if (ctx.cr0.eq) goto loc_823BD670;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x823bd4b0
	ctx.lr = 0x823BD670;
	sub_823BD4B0(ctx, base);
loc_823BD670:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r28,r26,r31
	ctx.r28.u64 = ctx.r26.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r11,-20(r31)
	PPC_STORE_U64(ctx.r31.u32 + -20, ctx.r11.u64);
	// bl 0x823bce08
	ctx.lr = 0x823BD690;
	sub_823BCE08(ctx, base);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r10.u32);
	// stw r9,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r9.u32);
	// stw r8,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r8.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r7,r28,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823BD6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmplw cr6,r27,r5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823bd65c
	if (ctx.cr6.lt) goto loc_823BD65C;
loc_823BD6D8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bd6f0
	if (ctx.cr6.eq) goto loc_823BD6F0;
	// bl 0x82357240
	ctx.lr = 0x823BD6E8;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_823BD6F0:
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

__attribute__((alias("__imp__sub_823BD704"))) PPC_WEAK_FUNC(sub_823BD704);
PPC_FUNC_IMPL(__imp__sub_823BD704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD708"))) PPC_WEAK_FUNC(sub_823BD708);
PPC_FUNC_IMPL(__imp__sub_823BD708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823BD710;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823bd74c
	if (ctx.cr6.gt) goto loc_823BD74C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823bd5c0
	ctx.lr = 0x823BD738;
	sub_823BD5C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bd74c
	if (!ctx.cr6.eq) goto loc_823BD74C;
loc_823BD740:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BD74C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823bd740
	if (ctx.cr6.eq) goto loc_823BD740;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823bd778
	if (ctx.cr0.eq) goto loc_823BD778;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bd4b0
	ctx.lr = 0x823BD778;
	sub_823BD4B0(ctx, base);
loc_823BD778:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bd190
	ctx.lr = 0x823BD784;
	sub_823BD190(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823BD79C"))) PPC_WEAK_FUNC(sub_823BD79C);
PPC_FUNC_IMPL(__imp__sub_823BD79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD7A0"))) PPC_WEAK_FUNC(sub_823BD7A0);
PPC_FUNC_IMPL(__imp__sub_823BD7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224876c
	ctx.lr = 0x823BD7A8;
	sub_8224876C(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823BD7B4;
	sub_823AC6B8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bda90
	if (ctx.cr6.eq) goto loc_823BDA90;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x823bda90
	if (!ctx.cr6.eq) goto loc_823BDA90;
	// bl 0x823a0f10
	ctx.lr = 0x823BD7D0;
	sub_823A0F10(ctx, base);
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bd7f4
	if (ctx.cr6.eq) goto loc_823BD7F4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823bd7f4
	if (!ctx.cr6.eq) goto loc_823BD7F4;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823bda98
	goto loc_823BDA98;
loc_823BD7F4:
	// lwz r21,20(r24)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823bd98c
	if (ctx.cr6.eq) goto loc_823BD98C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// addi r22,r11,-24860
	ctx.r22.s64 = ctx.r11.s64 + -24860;
loc_823BD814:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823bceb8
	ctx.lr = 0x823BD81C;
	sub_823BCEB8(ctx, base);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x82357068
	ctx.lr = 0x823BD834;
	sub_82357068(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// bl 0x82356eb8
	ctx.lr = 0x823BD844;
	sub_82356EB8(ctx, base);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// add r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x823bd8d8
	if (ctx.cr6.eq) goto loc_823BD8D8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82372d50
	ctx.lr = 0x823BD86C;
	sub_82372D50(ctx, base);
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823bd894
	if (ctx.cr6.eq) goto loc_823BD894;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x823bd998
	if (!ctx.cr6.eq) goto loc_823BD998;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// b 0x823bd89c
	goto loc_823BD89C;
loc_823BD894:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_823BD89C:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x823bbdc0
	ctx.lr = 0x823BD8B4;
	sub_823BBDC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bd998
	if (ctx.cr6.eq) goto loc_823BD998;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x823b67b8
	ctx.lr = 0x823BD8C8;
	sub_823B67B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bd9c8
	if (ctx.cr6.eq) goto loc_823BD9C8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82373298
	ctx.lr = 0x823BD8D8;
	sub_82373298(ctx, base);
loc_823BD8D8:
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823bd944
	if (ctx.cr6.eq) goto loc_823BD944;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_823BD8EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823bd934
	if (ctx.cr6.eq) goto loc_823BD934;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823bbdc0
	ctx.lr = 0x823BD918;
	sub_823BBDC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bd9f8
	if (ctx.cr6.eq) goto loc_823BD9F8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x823b67b8
	ctx.lr = 0x823BD92C;
	sub_823B67B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bda30
	if (ctx.cr6.eq) goto loc_823BDA30;
loc_823BD934:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x823bd8ec
	if (ctx.cr6.lt) goto loc_823BD8EC;
loc_823BD944:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r25,280
	ctx.r3.s64 = ctx.r25.s64 + 280;
	// bl 0x823bd708
	ctx.lr = 0x823BD950;
	sub_823BD708(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bda58
	if (ctx.cr6.eq) goto loc_823BDA58;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// beq cr6,0x823bd974
	if (ctx.cr6.eq) goto loc_823BD974;
	// bl 0x82357240
	ctx.lr = 0x823BD970;
	sub_82357240(ctx, base);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
loc_823BD974:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// addi r26,r26,96
	ctx.r26.s64 = ctx.r26.s64 + 96;
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// cmplw cr6,r23,r21
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x823bd814
	if (ctx.cr6.lt) goto loc_823BD814;
loc_823BD98C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823BD998:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BD9AC;
	sub_823AC608(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82373298
	ctx.lr = 0x823BD9B4;
	sub_82373298(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823bcf98
	ctx.lr = 0x823BD9BC;
	sub_823BCF98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823BD9C8:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BD9DC;
	sub_823AC608(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82373298
	ctx.lr = 0x823BD9E4;
	sub_82373298(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823bcf98
	ctx.lr = 0x823BD9EC;
	sub_823BCF98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823BD9F8:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BDA0C;
	sub_823AC608(ctx, base);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bdaa4
	if (ctx.cr6.eq) goto loc_823BDAA4;
	// bl 0x82357240
	ctx.lr = 0x823BDA24;
	sub_82357240(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823BDA30:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BDA44;
	sub_823AC608(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823bcf98
	ctx.lr = 0x823BDA4C;
	sub_823BCF98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823BDA58:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BDA6C;
	sub_823AC608(ctx, base);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bdaa4
	if (ctx.cr6.eq) goto loc_823BDAA4;
	// bl 0x82357240
	ctx.lr = 0x823BDA84;
	sub_82357240(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487bc
	// ERROR 822487BC
	return;
loc_823BDA90:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
loc_823BDA98:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BDAA4;
	sub_823AC608(ctx, base);
loc_823BDAA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822487bc
	// ERROR 822487BC
	return;
}

__attribute__((alias("__imp__sub_823BDAB0"))) PPC_WEAK_FUNC(sub_823BDAB0);
PPC_FUNC_IMPL(__imp__sub_823BDAB0) {
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
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bdadc
	if (ctx.cr6.eq) goto loc_823BDADC;
	// bl 0x82357240
	ctx.lr = 0x823BDAD4;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
loc_823BDADC:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823BDAF0"))) PPC_WEAK_FUNC(sub_823BDAF0);
PPC_FUNC_IMPL(__imp__sub_823BDAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bdb44
	if (ctx.cr6.eq) goto loc_823BDB44;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823BDB1C;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bdc4c
	if (ctx.cr6.eq) goto loc_823BDC4C;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823bdc30
	if (ctx.cr6.eq) goto loc_823BDC30;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BDB40;
	sub_823AC608(ctx, base);
	// b 0x823bdc30
	goto loc_823BDC30;
loc_823BDB44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BDB4C;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bdbbc
	if (!ctx.cr6.eq) goto loc_823BDBBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BDB68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bdbbc
	if (!ctx.cr6.eq) goto loc_823BDBBC;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823bdc4c
	if (ctx.cr6.eq) goto loc_823BDC4C;
	// bl 0x82256ce8
	ctx.lr = 0x823BDB84;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bdc44
	if (ctx.cr6.eq) goto loc_823BDC44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BDBA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BDBB8;
	sub_823AC608(ctx, base);
	// b 0x823bdc40
	goto loc_823BDC40;
loc_823BDBBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BDBC4;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bdbdc
	if (ctx.cr6.eq) goto loc_823BDBDC;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823bdc00
	goto loc_823BDC00;
loc_823BDBDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BDBEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bdc08
	if (ctx.cr6.eq) goto loc_823BDC08;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823BDC00:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823BDC08;
	sub_823AC608(ctx, base);
loc_823BDC08:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823BDC1C;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823bdc4c
	if (!ctx.cr6.eq) goto loc_823BDC4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823BDC30;
	sub_82256CC0(ctx, base);
loc_823BDC30:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82256f70
	ctx.lr = 0x823BDC38;
	sub_82256F70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
loc_823BDC40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BDC44:
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x823ac5b8
	ctx.lr = 0x823BDC4C;
	sub_823AC5B8(ctx, base);
loc_823BDC4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDC64"))) PPC_WEAK_FUNC(sub_823BDC64);
PPC_FUNC_IMPL(__imp__sub_823BDC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDC68"))) PPC_WEAK_FUNC(sub_823BDC68);
PPC_FUNC_IMPL(__imp__sub_823BDC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823BDC70;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bgt cr6,0x823bddc8
	if (ctx.cr6.gt) goto loc_823BDDC8;
	// beq cr6,0x823bddc8
	if (ctx.cr6.eq) goto loc_823BDDC8;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x823bddc8
	if (ctx.cr6.gt) goto loc_823BDDC8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bddc8
	if (ctx.cr6.eq) goto loc_823BDDC8;
	// bdz 0x823bdcbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823BDCBC;
	// bdz 0x823bdcd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823BDCD0;
	// bdz 0x823bdce4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823BDCE4;
	// bdz 0x823bdd28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823BDD28;
	// bdz 0x823bdcf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823BDCF8;
	// bdz 0x823bdde8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_823BDDE8;
	// b 0x823bdd0c
	goto loc_823BDD0C;
loc_823BDCBC:
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x823bde28
	goto loc_823BDE28;
loc_823BDCD0:
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// b 0x823bde28
	goto loc_823BDE28;
loc_823BDCE4:
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lfd f0,8(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// stfd f0,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.f0.u64);
	// b 0x823bde28
	goto loc_823BDE28;
loc_823BDCF8:
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x823bde28
	goto loc_823BDE28;
loc_823BDD0C:
	// li r11,14
	ctx.r11.s64 = 14;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// b 0x823bde28
	goto loc_823BDE28;
loc_823BDD28:
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82257058
	ctx.lr = 0x823BDD50;
	sub_82257058(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bddc8
	if (ctx.cr6.eq) goto loc_823BDDC8;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823BDD64;
	sub_823570E0(ctx, base);
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bl 0x823570f0
	ctx.lr = 0x823BDD6C;
	sub_823570F0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BDD78;
	sub_823570E0(ctx, base);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823bddc8
	if (ctx.cr6.eq) goto loc_823BDDC8;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82257058
	ctx.lr = 0x823BDDA8;
	sub_82257058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bne cr6,0x823bddd4
	if (!ctx.cr6.eq) goto loc_823BDDD4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bddc8
	if (ctx.cr6.eq) goto loc_823BDDC8;
	// bl 0x82357128
	ctx.lr = 0x823BDDC0;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_823BDDC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BDDD4:
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// bl 0x823728a8
	ctx.lr = 0x823BDDE0;
	sub_823728A8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// b 0x823bde28
	goto loc_823BDE28;
loc_823BDDE8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823BDDF0;
	sub_823570E0(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x823570f0
	ctx.lr = 0x823BDDF8;
	sub_823570F0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BDE04;
	sub_823570E0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bddc8
	if (ctx.cr6.eq) goto loc_823BDDC8;
	// li r11,13
	ctx.r11.s64 = 13;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82358508
	ctx.lr = 0x823BDE28;
	sub_82358508(ctx, base);
loc_823BDE28:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x823bde4c
	if (!ctx.cr6.eq) goto loc_823BDE4C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bde4c
	if (ctx.cr6.eq) goto loc_823BDE4C;
	// bl 0x82357128
	ctx.lr = 0x823BDE48;
	sub_82357128(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_823BDE4C:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x823bde6c
	if (!ctx.cr6.eq) goto loc_823BDE6C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bde6c
	if (ctx.cr6.eq) goto loc_823BDE6C;
	// bl 0x82357128
	ctx.lr = 0x823BDE68;
	sub_82357128(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_823BDE6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823BDE78"))) PPC_WEAK_FUNC(sub_823BDE78);
PPC_FUNC_IMPL(__imp__sub_823BDE78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDE88"))) PPC_WEAK_FUNC(sub_823BDE88);
PPC_FUNC_IMPL(__imp__sub_823BDE88) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823BDEA0;
	sub_823AC6B8(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823bdee4
	if (ctx.cr6.eq) goto loc_823BDEE4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823bdedc
	if (ctx.cr6.eq) goto loc_823BDEDC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823bded4
	if (ctx.cr6.eq) goto loc_823BDED4;
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
loc_823BDED4:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x823bdee8
	goto loc_823BDEE8;
loc_823BDEDC:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x823bdee8
	goto loc_823BDEE8;
loc_823BDEE4:
	// li r4,1
	ctx.r4.s64 = 1;
loc_823BDEE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BDEF0;
	sub_823AC5B8(ctx, base);
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

__attribute__((alias("__imp__sub_823BDF08"))) PPC_WEAK_FUNC(sub_823BDF08);
PPC_FUNC_IMPL(__imp__sub_823BDF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823BDF10;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x823BDF28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bdf58
	if (ctx.cr6.eq) goto loc_823BDF58;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823BDF44;
	sub_823AC608(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BDF50;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BDF58:
	// bl 0x823ac6b8
	ctx.lr = 0x823BDF5C;
	sub_823AC6B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r29,r31,180
	ctx.r29.s64 = ctx.r31.s64 + 180;
	// lwz r5,72(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r6,192(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// bl 0x822564b8
	ctx.lr = 0x823BDF90;
	sub_822564B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823bdfe0
	if (ctx.cr6.eq) goto loc_823BDFE0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bdfe0
	if (ctx.cr6.eq) goto loc_823BDFE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BDFBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BDFCC;
	sub_823AC608(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BDFD8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BDFE0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823BDFE8;
	sub_823570E0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82357208
	ctx.lr = 0x823BDFF4;
	sub_82357208(ctx, base);
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BE000;
	sub_823570E0(ctx, base);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823be034
	if (!ctx.cr6.eq) goto loc_823BE034;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BE020;
	sub_823AC608(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE02C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BE034:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823585a0
	ctx.lr = 0x823BE03C;
	sub_823585A0(ctx, base);
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823BE04C;
	sub_823585A0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82256f58
	ctx.lr = 0x823BE064;
	sub_82256F58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823be0c4
	if (ctx.cr6.eq) goto loc_823BE0C4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823be0c4
	if (ctx.cr6.eq) goto loc_823BE0C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BE090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BE0A0;
	sub_823AC608(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82256f70
	ctx.lr = 0x823BE0A8;
	sub_82256F70(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE0BC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BE0C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BE0CC;
	sub_823AC668(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE0D8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823BE0E0"))) PPC_WEAK_FUNC(sub_823BE0E0);
PPC_FUNC_IMPL(__imp__sub_823BE0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823BE0E8;
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
	// bne cr6,0x823be100
	if (!ctx.cr6.eq) goto loc_823BE100;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823BE100:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x823be118
	if (!ctx.cr0.eq) goto loc_823BE118;
loc_823BE10C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_823BE118:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823BE120;
	sub_823570E0(ctx, base);
	// mulli r29,r28,136
	ctx.r29.s64 = ctx.r28.s64 * 136;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357208
	ctx.lr = 0x823BE130;
	sub_82357208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BE13C;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823be10c
	if (ctx.cr6.eq) goto loc_823BE10C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823BE150;
	sub_823585A0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823be184
	if (ctx.cr6.eq) goto loc_823BE184;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r5,r11,136
	ctx.r5.s64 = ctx.r11.s64 * 136;
	// bl 0x82358508
	ctx.lr = 0x823BE16C;
	sub_82358508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823be184
	if (ctx.cr6.eq) goto loc_823BE184;
	// bl 0x82357240
	ctx.lr = 0x823BE17C;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823BE184:
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

__attribute__((alias("__imp__sub_823BE198"))) PPC_WEAK_FUNC(sub_823BE198);
PPC_FUNC_IMPL(__imp__sub_823BE198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823BE1A0;
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
	// bgt cr6,0x823be1dc
	if (ctx.cr6.gt) goto loc_823BE1DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823be0e0
	ctx.lr = 0x823BE1C8;
	sub_823BE0E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823be1dc
	if (!ctx.cr6.eq) goto loc_823BE1DC;
loc_823BE1D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BE1DC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823be1d0
	if (ctx.cr6.eq) goto loc_823BE1D0;
	// mulli r11,r30,136
	ctx.r11.s64 = ctx.r30.s64 * 136;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,136
	ctx.r5.s64 = 136;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82248a40
	ctx.lr = 0x823BE1FC;
	sub_82248A40(ctx, base);
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

__attribute__((alias("__imp__sub_823BE214"))) PPC_WEAK_FUNC(sub_823BE214);
PPC_FUNC_IMPL(__imp__sub_823BE214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE218"))) PPC_WEAK_FUNC(sub_823BE218);
PPC_FUNC_IMPL(__imp__sub_823BE218) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823BE238;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-24776
	ctx.r9.s64 = ctx.r10.s64 + -24776;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823BE24C;
	sub_823C10A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r9,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x823BE290;
	sub_823585A0(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x823585a0
	ctx.lr = 0x823BE29C;
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

__attribute__((alias("__imp__sub_823BE2B4"))) PPC_WEAK_FUNC(sub_823BE2B4);
PPC_FUNC_IMPL(__imp__sub_823BE2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE2B8"))) PPC_WEAK_FUNC(sub_823BE2B8);
PPC_FUNC_IMPL(__imp__sub_823BE2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x823BE2C0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-24776
	ctx.r10.s64 = ctx.r11.s64 + -24776;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823be2ec
	if (ctx.cr6.eq) goto loc_823BE2EC;
	// bl 0x82357240
	ctx.lr = 0x823BE2E8;
	sub_82357240(ctx, base);
	// stw r31,224(r28)
	PPC_STORE_U32(ctx.r28.u32 + 224, ctx.r31.u32);
loc_823BE2EC:
	// lwz r3,208(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// addi r30,r28,204
	ctx.r30.s64 = ctx.r28.s64 + 204;
	// stw r31,212(r28)
	PPC_STORE_U32(ctx.r28.u32 + 212, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823be308
	if (ctx.cr6.eq) goto loc_823BE308;
	// bl 0x82357240
	ctx.lr = 0x823BE304;
	sub_82357240(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_823BE308:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r29,r28,184
	ctx.r29.s64 = ctx.r28.s64 + 184;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r3,188(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,192(r28)
	PPC_STORE_U32(ctx.r28.u32 + 192, ctx.r31.u32);
	// beq cr6,0x823be32c
	if (ctx.cr6.eq) goto loc_823BE32C;
	// bl 0x82357240
	ctx.lr = 0x823BE328;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_823BE32C:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r3,r28,60
	ctx.r3.s64 = ctx.r28.s64 + 60;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x823c1100
	ctx.lr = 0x823BE33C;
	sub_823C1100(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823BE344;
	sub_823C13B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_823BE34C"))) PPC_WEAK_FUNC(sub_823BE34C);
PPC_FUNC_IMPL(__imp__sub_823BE34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE350"))) PPC_WEAK_FUNC(sub_823BE350);
PPC_FUNC_IMPL(__imp__sub_823BE350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x823BE358;
	sub_82248774(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BE370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x823be3a0
	if (ctx.cr6.eq) goto loc_823BE3A0;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823BE38C;
	sub_823AC608(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE398;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823BE3A0:
	// bl 0x823ac6b8
	ctx.lr = 0x823BE3A4;
	sub_823AC6B8(ctx, base);
	// lwz r25,48(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x823be3dc
	if (!ctx.cr6.eq) goto loc_823BE3DC;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BE3C8;
	sub_823AC608(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE3D4;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823BE3DC:
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// stw r23,212(r29)
	PPC_STORE_U32(ctx.r29.u32 + 212, ctx.r23.u32);
	// beq cr6,0x823be464
	if (ctx.cr6.eq) goto loc_823BE464;
	// addi r31,r29,204
	ctx.r31.s64 = ctx.r29.s64 + 204;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_823BE3F8:
	// lwz r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82356608
	ctx.lr = 0x823BE404;
	sub_82356608(ctx, base);
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823be430
	if (ctx.cr6.gt) goto loc_823BE430;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a1130
	ctx.lr = 0x823BE428;
	sub_823A1130(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823be4dc
	if (ctx.cr6.eq) goto loc_823BE4DC;
loc_823BE430:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823be4dc
	if (ctx.cr6.eq) goto loc_823BE4DC;
	// ld r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// rlwinm r9,r28,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// stdx r10,r9,r11
	PPC_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// blt cr6,0x823be3f8
	if (ctx.cr6.lt) goto loc_823BE3F8;
loc_823BE464:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,212(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,188(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,192(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// lwz r5,208(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// bl 0x822563e0
	ctx.lr = 0x823BE48C;
	sub_822563E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x823be504
	if (ctx.cr6.eq) goto loc_823BE504;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823be504
	if (ctx.cr6.eq) goto loc_823BE504;
loc_823BE4A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BE4B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BE4C8;
	sub_823AC608(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE4D4;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823BE4DC:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BE4F0;
	sub_823AC608(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE4FC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_823BE504:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823BE50C;
	sub_823570E0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82357208
	ctx.lr = 0x823BE518;
	sub_82357208(ctx, base);
	// stw r3,224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 224, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BE524;
	sub_823570E0(ctx, base);
	// lwz r3,224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823be4dc
	if (ctx.cr6.eq) goto loc_823BE4DC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823585a0
	ctx.lr = 0x823BE538;
	sub_823585A0(ctx, base);
	// addi r31,r29,152
	ctx.r31.s64 = ctx.r29.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823585a0
	ctx.lr = 0x823BE548;
	sub_823585A0(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,224(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,188(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// lwz r6,192(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// lwz r5,208(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// lwz r4,212(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// bl 0x822563e0
	ctx.lr = 0x823BE56C;
	sub_822563E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x823be588
	if (ctx.cr6.eq) goto loc_823BE588;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823be588
	if (ctx.cr6.eq) goto loc_823BE588;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823be4a0
	if (!ctx.cr6.eq) goto loc_823BE4A0;
loc_823BE588:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BE590;
	sub_823AC668(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE59C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

__attribute__((alias("__imp__sub_823BE5A4"))) PPC_WEAK_FUNC(sub_823BE5A4);
PPC_FUNC_IMPL(__imp__sub_823BE5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE5A8"))) PPC_WEAK_FUNC(sub_823BE5A8);
PPC_FUNC_IMPL(__imp__sub_823BE5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823BE5B0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x823BE5C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823be5f8
	if (ctx.cr6.eq) goto loc_823BE5F8;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823BE5E4;
	sub_823AC608(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE5F0;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BE5F8:
	// bl 0x823ac6b8
	ctx.lr = 0x823BE5FC;
	sub_823AC6B8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x823be634
	if (!ctx.cr6.eq) goto loc_823BE634;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x823ac608
	ctx.lr = 0x823BE620;
	sub_823AC608(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE62C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BE634:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r29,r31,180
	ctx.r29.s64 = ctx.r31.s64 + 180;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r6,192(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x82256518
	ctx.lr = 0x823BE660;
	sub_82256518(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823be6b0
	if (ctx.cr6.eq) goto loc_823BE6B0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823be6b0
	if (ctx.cr6.eq) goto loc_823BE6B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BE68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BE69C;
	sub_823AC608(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE6A8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BE6B0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823BE6B8;
	sub_823570E0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82357208
	ctx.lr = 0x823BE6C4;
	sub_82357208(ctx, base);
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BE6D0;
	sub_823570E0(ctx, base);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823be704
	if (!ctx.cr6.eq) goto loc_823BE704;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BE6F0;
	sub_823AC608(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE6FC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BE704:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823585a0
	ctx.lr = 0x823BE70C;
	sub_823585A0(ctx, base);
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823585a0
	ctx.lr = 0x823BE71C;
	sub_823585A0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82256f58
	ctx.lr = 0x823BE734;
	sub_82256F58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823be794
	if (ctx.cr6.eq) goto loc_823BE794;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823be794
	if (ctx.cr6.eq) goto loc_823BE794;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BE760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BE770;
	sub_823AC608(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82256f70
	ctx.lr = 0x823BE778;
	sub_82256F70(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE78C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BE794:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BE79C;
	sub_823AC668(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE7A8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823BE7B0"))) PPC_WEAK_FUNC(sub_823BE7B0);
PPC_FUNC_IMPL(__imp__sub_823BE7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823be2b8
	ctx.lr = 0x823BE7D0;
	sub_823BE2B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823be7e8
	if (ctx.cr6.eq) goto loc_823BE7E8;
	// bl 0x82357128
	ctx.lr = 0x823BE7E4;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BE7E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE800"))) PPC_WEAK_FUNC(sub_823BE800);
PPC_FUNC_IMPL(__imp__sub_823BE800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823BE81C;
	sub_823AC6B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823be8c8
	if (ctx.cr6.eq) goto loc_823BE8C8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bne cr6,0x823be8c8
	if (!ctx.cr6.eq) goto loc_823BE8C8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// ble cr6,0x823be84c
	if (!ctx.cr6.gt) goto loc_823BE84C;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// b 0x823be8d0
	goto loc_823BE8D0;
loc_823BE84C:
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823585a0
	ctx.lr = 0x823BE858;
	sub_823585A0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x823be8a0
	if (ctx.cr6.eq) goto loc_823BE8A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,86
	ctx.r9.s64 = ctx.r1.s64 + 86;
loc_823BE87C:
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// sthu r6,2(r9)
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823be87c
	if (ctx.cr6.lt) goto loc_823BE87C;
loc_823BE8A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,184
	ctx.r3.s64 = ctx.r30.s64 + 184;
	// bl 0x823be198
	ctx.lr = 0x823BE8AC;
	sub_823BE198(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823be8c0
	if (!ctx.cr6.eq) goto loc_823BE8C0;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823be8d0
	goto loc_823BE8D0;
loc_823BE8C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823be8e0
	goto loc_823BE8E0;
loc_823BE8C8:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
loc_823BE8D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BE8DC;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823BE8E0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE8F8"))) PPC_WEAK_FUNC(sub_823BE8F8);
PPC_FUNC_IMPL(__imp__sub_823BE8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac5c0
	ctx.lr = 0x823BE918;
	sub_823AC5C0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x823be984
	if (ctx.cr6.gt) goto loc_823BE984;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823be94c
	// bdzf 4*cr6+eq,0x823be958
	// bdzf 4*cr6+eq,0x823be964
	// bdzf 4*cr6+eq,0x823be970
	// bne cr6,0x823be980
	if (!ctx.cr6.eq) goto loc_823BE980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be350
	ctx.lr = 0x823BE948;
	sub_823BE350(ctx, base);
	// b 0x823be984
	goto loc_823BE984;
loc_823BE94C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bdf08
	ctx.lr = 0x823BE954;
	sub_823BDF08(ctx, base);
	// b 0x823be984
	goto loc_823BE984;
loc_823BE958:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be5a8
	ctx.lr = 0x823BE960;
	sub_823BE5A8(ctx, base);
	// b 0x823be984
	goto loc_823BE984;
loc_823BE964:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bdaf0
	ctx.lr = 0x823BE96C;
	sub_823BDAF0(ctx, base);
	// b 0x823be984
	goto loc_823BE984;
loc_823BE970:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BE97C;
	sub_823AC5B8(ctx, base);
	// b 0x823be984
	goto loc_823BE984;
loc_823BE980:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823BE984:
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

__attribute__((alias("__imp__sub_823BE9A0"))) PPC_WEAK_FUNC(sub_823BE9A0);
PPC_FUNC_IMPL(__imp__sub_823BE9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bl 0x82356e70
	ctx.lr = 0x823BE9F0;
	sub_82356E70(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8235a518
	ctx.lr = 0x823BE9FC;
	sub_8235A518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82394df0
	ctx.lr = 0x823BEA08;
	sub_82394DF0(ctx, base);
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

__attribute__((alias("__imp__sub_823BEA24"))) PPC_WEAK_FUNC(sub_823BEA24);
PPC_FUNC_IMPL(__imp__sub_823BEA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEA28"))) PPC_WEAK_FUNC(sub_823BEA28);
PPC_FUNC_IMPL(__imp__sub_823BEA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823BEA30;
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
	// bne cr6,0x823bea48
	if (!ctx.cr6.eq) goto loc_823BEA48;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823BEA48:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add. r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x823bea60
	if (!ctx.cr0.eq) goto loc_823BEA60;
loc_823BEA54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_823BEA60:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823570e0
	ctx.lr = 0x823BEA68;
	sub_823570E0(ctx, base);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r30,r11,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357208
	ctx.lr = 0x823BEA80;
	sub_82357208(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BEA8C;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823bea54
	if (ctx.cr6.eq) goto loc_823BEA54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823585a0
	ctx.lr = 0x823BEAA0;
	sub_823585A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823beb34
	if (ctx.cr6.eq) goto loc_823BEB34;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823beb1c
	if (!ctx.cr6.gt) goto loc_823BEB1C;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_823BEAC4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823bead8
	if (ctx.cr6.eq) goto loc_823BEAD8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823be9a0
	ctx.lr = 0x823BEAD8;
	sub_823BE9A0(ctx, base);
loc_823BEAD8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82394df0
	ctx.lr = 0x823BEAE8;
	sub_82394DF0(ctx, base);
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
	ctx.lr = 0x823BEB04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823beac4
	if (ctx.cr6.lt) goto loc_823BEAC4;
loc_823BEB1C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823beb34
	if (ctx.cr6.eq) goto loc_823BEB34;
	// bl 0x82357240
	ctx.lr = 0x823BEB2C;
	sub_82357240(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823BEB34:
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

__attribute__((alias("__imp__sub_823BEB48"))) PPC_WEAK_FUNC(sub_823BEB48);
PPC_FUNC_IMPL(__imp__sub_823BEB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248754
	ctx.lr = 0x823BEB50;
	sub_82248754(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823bf048
	if (ctx.cr6.eq) goto loc_823BF048;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bne cr6,0x823bf048
	if (!ctx.cr6.eq) goto loc_823BF048;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r16,r26
	ctx.r16.u64 = ctx.r26.u64;
	// lwz r15,0(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x823bef2c
	if (ctx.cr6.eq) goto loc_823BEF2C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r22,2
	ctx.r22.s64 = 2;
	// li r23,16
	ctx.r23.s64 = 16;
	// addi r19,r11,-30368
	ctx.r19.s64 = ctx.r11.s64 + -30368;
	// addi r25,r10,-30012
	ctx.r25.s64 = ctx.r10.s64 + -30012;
loc_823BEBA0:
	// lwz r11,224(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 224);
	// lis r10,-32196
	ctx.r10.s64 = -2109997056;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r6,r10,-8584
	ctx.r6.s64 = ctx.r10.s64 + -8584;
	// lwz r24,4(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r9,32(r17)
	PPC_STORE_U32(ctx.r17.u32 + 32, ctx.r9.u32);
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// bl 0x8224a2a0
	ctx.lr = 0x823BEBC8;
	sub_8224A2A0(ctx, base);
	// lwz r8,8(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x823bef20
	if (!ctx.cr6.gt) goto loc_823BEF20;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
loc_823BEBDC:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// bl 0x82356e70
	ctx.lr = 0x823BEBFC;
	sub_82356E70(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8235a518
	ctx.lr = 0x823BEC08;
	sub_8235A518(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82394b78
	ctx.lr = 0x823BEC10;
	sub_82394B78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82394b78
	ctx.lr = 0x823BEC18;
	sub_82394B78(ctx, base);
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// add r31,r11,r21
	ctx.r31.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823bec80
	if (!ctx.cr6.eq) goto loc_823BEC80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8235a538
	ctx.lr = 0x823BEC38;
	sub_8235A538(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82356eb8
	ctx.lr = 0x823BEC40;
	sub_82356EB8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823beeec
	if (ctx.cr6.eq) goto loc_823BEEEC;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823BEC58:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82373298
	ctx.lr = 0x823BEC68;
	sub_82373298(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823bec58
	if (ctx.cr6.lt) goto loc_823BEC58;
	// b 0x823beeec
	goto loc_823BEEEC;
loc_823BEC80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82356fe0
	ctx.lr = 0x823BEC8C;
	sub_82356FE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82357038
	ctx.lr = 0x823BEC9C;
	sub_82357038(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82356eb8
	ctx.lr = 0x823BECA4;
	sub_82356EB8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// bl 0x8235a760
	ctx.lr = 0x823BECC0;
	sub_8235A760(ctx, base);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x823bed7c
	if (!ctx.cr6.gt) goto loc_823BED7C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823BECD4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82372d50
	ctx.lr = 0x823BECE8;
	sub_82372D50(ctx, base);
	// addi r5,r29,8
	ctx.r5.s64 = ctx.r29.s64 + 8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823bdc68
	ctx.lr = 0x823BECF8;
	sub_823BDC68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bed60
	if (ctx.cr6.eq) goto loc_823BED60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// lbz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// bl 0x82372d50
	ctx.lr = 0x823BED14;
	sub_82372D50(ctx, base);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// stb r27,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r27.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82373228
	ctx.lr = 0x823BED2C;
	sub_82373228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x823732a8
	ctx.lr = 0x823BED38;
	sub_823732A8(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82373298
	ctx.lr = 0x823BED40;
	sub_82373298(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82393558
	ctx.lr = 0x823BED4C;
	sub_82393558(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82373298
	ctx.lr = 0x823BED58;
	sub_82373298(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x823bef38
	if (ctx.cr6.eq) goto loc_823BEF38;
loc_823BED60:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82373298
	ctx.lr = 0x823BED68;
	sub_82373298(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823becd4
	if (ctx.cr6.lt) goto loc_823BECD4;
loc_823BED7C:
	// lwz r31,16(r17)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r17.u32 + 16);
	// addi r27,r17,8
	ctx.r27.s64 = ctx.r17.s64 + 8;
	// lwz r11,20(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823beda8
	if (ctx.cr6.gt) goto loc_823BEDA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823bea28
	ctx.lr = 0x823BEDA0;
	sub_823BEA28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823befc4
	if (ctx.cr6.eq) goto loc_823BEFC4;
loc_823BEDA8:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823befc4
	if (ctx.cr6.eq) goto loc_823BEFC4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823bee38
	if (ctx.cr0.eq) goto loc_823BEE38;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// bl 0x82356e70
	ctx.lr = 0x823BEDF0;
	sub_82356E70(ctx, base);
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235a518
	ctx.lr = 0x823BEE00;
	sub_8235A518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82357068
	ctx.lr = 0x823BEE0C;
	sub_82357068(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357038
	ctx.lr = 0x823BEE18;
	sub_82357038(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82356eb8
	ctx.lr = 0x823BEE20;
	sub_82356EB8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8235a760
	ctx.lr = 0x823BEE2C;
	sub_8235A760(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82393c50
	ctx.lr = 0x823BEE38;
	sub_82393C50(ctx, base);
loc_823BEE38:
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
	// bl 0x82357068
	ctx.lr = 0x823BEE54;
	sub_82357068(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82357038
	ctx.lr = 0x823BEE60;
	sub_82357038(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82356eb8
	ctx.lr = 0x823BEE68;
	sub_82356EB8(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8235a760
	ctx.lr = 0x823BEE74;
	sub_8235A760(ctx, base);
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lbz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stb r8,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r8.u8);
	// bl 0x82393c50
	ctx.lr = 0x823BEE90;
	sub_82393C50(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r7.u32);
	// bl 0x8235a538
	ctx.lr = 0x823BEEA8;
	sub_8235A538(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82356eb8
	ctx.lr = 0x823BEEB0;
	sub_82356EB8(ctx, base);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823beeec
	if (ctx.cr6.eq) goto loc_823BEEEC;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823BEEC8:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82373298
	ctx.lr = 0x823BEED8;
	sub_82373298(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823beec8
	if (ctx.cr6.lt) goto loc_823BEEC8;
loc_823BEEEC:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bef04
	if (ctx.cr6.eq) goto loc_823BEF04;
	// bl 0x82357240
	ctx.lr = 0x823BEF00;
	sub_82357240(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
loc_823BEF04:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r21,r21,48
	ctx.r21.s64 = ctx.r21.s64 + 48;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823bebdc
	if (ctx.cr6.lt) goto loc_823BEBDC;
loc_823BEF20:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// cmplw cr6,r16,r15
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x823beba0
	if (ctx.cr6.lt) goto loc_823BEBA0;
loc_823BEF2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487a4
	// ERROR 822487A4
	return;
loc_823BEF38:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BEF4C;
	sub_823AC608(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82373298
	ctx.lr = 0x823BEF54;
	sub_82373298(ctx, base);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8235a538
	ctx.lr = 0x823BEF60;
	sub_8235A538(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82356eb8
	ctx.lr = 0x823BEF68;
	sub_82356EB8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823befa4
	if (ctx.cr6.eq) goto loc_823BEFA4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823BEF80:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82373298
	ctx.lr = 0x823BEF90;
	sub_82373298(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823bef80
	if (ctx.cr6.lt) goto loc_823BEF80;
loc_823BEFA4:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bf05c
	if (ctx.cr6.eq) goto loc_823BF05C;
	// bl 0x82357240
	ctx.lr = 0x823BEFB8;
	sub_82357240(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487a4
	// ERROR 822487A4
	return;
loc_823BEFC4:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BEFD8;
	sub_823AC608(ctx, base);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8235a538
	ctx.lr = 0x823BEFE4;
	sub_8235A538(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82356eb8
	ctx.lr = 0x823BEFEC;
	sub_82356EB8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf028
	if (ctx.cr6.eq) goto loc_823BF028;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823BF004:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82373298
	ctx.lr = 0x823BF014;
	sub_82373298(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823bf004
	if (ctx.cr6.lt) goto loc_823BF004;
loc_823BF028:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bf05c
	if (ctx.cr6.eq) goto loc_823BF05C;
	// bl 0x82357240
	ctx.lr = 0x823BF03C;
	sub_82357240(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487a4
	// ERROR 822487A4
	return;
loc_823BF048:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BF05C;
	sub_823AC608(ctx, base);
loc_823BF05C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822487a4
	// ERROR 822487A4
	return;
}

__attribute__((alias("__imp__sub_823BF068"))) PPC_WEAK_FUNC(sub_823BF068);
PPC_FUNC_IMPL(__imp__sub_823BF068) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823BF088;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-24704
	ctx.r9.s64 = ctx.r10.s64 + -24704;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823BF09C;
	sub_823C10A0(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x823585a0
	ctx.lr = 0x823BF0A8;
	sub_823585A0(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823585a0
	ctx.lr = 0x823BF0B4;
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

__attribute__((alias("__imp__sub_823BF0CC"))) PPC_WEAK_FUNC(sub_823BF0CC);
PPC_FUNC_IMPL(__imp__sub_823BF0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF0D0"))) PPC_WEAK_FUNC(sub_823BF0D0);
PPC_FUNC_IMPL(__imp__sub_823BF0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bf128
	if (ctx.cr6.eq) goto loc_823BF128;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823BF0FC;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bf1d8
	if (ctx.cr6.eq) goto loc_823BF1D8;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823bf120
	if (ctx.cr6.eq) goto loc_823BF120;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BF120;
	sub_823AC608(ctx, base);
loc_823BF120:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823bf1d0
	goto loc_823BF1D0;
loc_823BF128:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BF130;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bf17c
	if (ctx.cr6.eq) goto loc_823BF17C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BF14C;
	sub_823AC608(ctx, base);
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823BF160;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823bf1d8
	if (!ctx.cr6.eq) goto loc_823BF1D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823BF174;
	sub_82256CC0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823bf1d0
	goto loc_823BF1D0;
loc_823BF17C:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823bf1d8
	if (ctx.cr6.eq) goto loc_823BF1D8;
	// bl 0x82256ce8
	ctx.lr = 0x823BF190;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bf1cc
	if (ctx.cr6.eq) goto loc_823BF1CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BF1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BF1C4;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823bf1d0
	goto loc_823BF1D0;
loc_823BF1CC:
	// li r4,5
	ctx.r4.s64 = 5;
loc_823BF1D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BF1D8;
	sub_823AC5B8(ctx, base);
loc_823BF1D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF1F0"))) PPC_WEAK_FUNC(sub_823BF1F0);
PPC_FUNC_IMPL(__imp__sub_823BF1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// addi r10,r11,-24704
	ctx.r10.s64 = ctx.r11.s64 + -24704;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x823c1100
	ctx.lr = 0x823BF220;
	sub_823C1100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823BF228;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823bf240
	if (ctx.cr6.eq) goto loc_823BF240;
	// bl 0x82357128
	ctx.lr = 0x823BF23C;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BF240:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF258"))) PPC_WEAK_FUNC(sub_823BF258);
PPC_FUNC_IMPL(__imp__sub_823BF258) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823bf28c
	if (ctx.cr6.eq) goto loc_823BF28C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bne cr6,0x823bf28c
	if (!ctx.cr6.eq) goto loc_823BF28C;
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
loc_823BF28C:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ac608
	ctx.lr = 0x823BF29C;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823BF2B0"))) PPC_WEAK_FUNC(sub_823BF2B0);
PPC_FUNC_IMPL(__imp__sub_823BF2B0) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823BF2C8;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bf2f4
	if (ctx.cr6.eq) goto loc_823BF2F4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bne cr6,0x823bf2f4
	if (!ctx.cr6.eq) goto loc_823BF2F4;
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
loc_823BF2F4:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BF308;
	sub_823AC608(ctx, base);
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
}

__attribute__((alias("__imp__sub_823BF320"))) PPC_WEAK_FUNC(sub_823BF320);
PPC_FUNC_IMPL(__imp__sub_823BF320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823BF328;
	sub_8224878C(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823BF334;
	sub_823AC6B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8237d2e8
	ctx.lr = 0x823BF33C;
	sub_8237D2E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823bf360
	if (!ctx.cr6.eq) goto loc_823BF360;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BF358;
	sub_823AC608(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BF360:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bf514
	if (ctx.cr6.eq) goto loc_823BF514;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823585a0
	ctx.lr = 0x823BF378;
	sub_823585A0(ctx, base);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823bf410
	if (ctx.cr6.eq) goto loc_823BF410;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf410
	if (ctx.cr6.eq) goto loc_823BF410;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x823BF3B0;
	sub_82256BE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823bf3e0
	if (!ctx.cr6.eq) goto loc_823BF3E0;
loc_823BF3B8:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BF3CC;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BF3D8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BF3E0:
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bgt cr6,0x823bf3b8
	if (ctx.cr6.gt) goto loc_823BF3B8;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,255
	ctx.r8.s64 = 255;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x823BF408;
	sub_82256BE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bf3b8
	if (ctx.cr6.eq) goto loc_823BF3B8;
loc_823BF410:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823bf444
	if (ctx.cr6.eq) goto loc_823BF444;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BF430;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BF43C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BF444:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf3b8
	if (ctx.cr6.eq) goto loc_823BF3B8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf3b8
	if (ctx.cr6.eq) goto loc_823BF3B8;
	// lbz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82256340
	ctx.lr = 0x823BF468;
	sub_82256340(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x823bf498
	if (ctx.cr6.eq) goto loc_823BF498;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823BF484;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BF490;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BF498:
	// li r11,510
	ctx.r11.s64 = 510;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r31,180
	ctx.r8.s64 = ctx.r31.s64 + 180;
	// lbz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x8234ffa0
	ctx.lr = 0x823BF4C0;
	sub_8234FFA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bf508
	if (ctx.cr6.eq) goto loc_823BF508;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BF4E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BF4F4;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BF500;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BF508:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BF514;
	sub_823AC5B8(ctx, base);
loc_823BF514:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823BF51C"))) PPC_WEAK_FUNC(sub_823BF51C);
PPC_FUNC_IMPL(__imp__sub_823BF51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF520"))) PPC_WEAK_FUNC(sub_823BF520);
PPC_FUNC_IMPL(__imp__sub_823BF520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac6b8
	ctx.lr = 0x823BF53C;
	sub_823AC6B8(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r5,r31,152
	ctx.r5.s64 = ctx.r31.s64 + 152;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823BF550:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823bf550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BF550;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// addi r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 + 180;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8234eae0
	ctx.lr = 0x823BF568;
	sub_8234EAE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823bf5ac
	if (ctx.cr6.eq) goto loc_823BF5AC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bf5ac
	if (ctx.cr6.eq) goto loc_823BF5AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BF594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BF5A4;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823bf5b8
	goto loc_823BF5B8;
loc_823BF5AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BF5B4;
	sub_823AC668(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
loc_823BF5B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BF5C0;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF5D8"))) PPC_WEAK_FUNC(sub_823BF5D8);
PPC_FUNC_IMPL(__imp__sub_823BF5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac5c0
	ctx.lr = 0x823BF5F8;
	sub_823AC5C0(ctx, base);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bgt cr6,0x823bf678
	if (ctx.cr6.gt) goto loc_823BF678;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823bf62c
	// bdzf 4*cr6+eq,0x823bf63c
	// bdzf 4*cr6+eq,0x823bf64c
	// bdzf 4*cr6+eq,0x823bf658
	// bdzf 4*cr6+eq,0x823bf664
	// bne cr6,0x823bf674
	if (!ctx.cr6.eq) goto loc_823BF674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bf320
	ctx.lr = 0x823BF628;
	sub_823BF320(ctx, base);
	// b 0x823bf678
	goto loc_823BF678;
loc_823BF62C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BF638;
	sub_823AC5B8(ctx, base);
	// b 0x823bf678
	goto loc_823BF678;
loc_823BF63C:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BF648;
	sub_823AC5B8(ctx, base);
	// b 0x823bf678
	goto loc_823BF678;
loc_823BF64C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bf520
	ctx.lr = 0x823BF654;
	sub_823BF520(ctx, base);
	// b 0x823bf678
	goto loc_823BF678;
loc_823BF658:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bf0d0
	ctx.lr = 0x823BF660;
	sub_823BF0D0(ctx, base);
	// b 0x823bf678
	goto loc_823BF678;
loc_823BF664:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BF670;
	sub_823AC5B8(ctx, base);
	// b 0x823bf678
	goto loc_823BF678;
loc_823BF674:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823BF678:
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

__attribute__((alias("__imp__sub_823BF694"))) PPC_WEAK_FUNC(sub_823BF694);
PPC_FUNC_IMPL(__imp__sub_823BF694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF698"))) PPC_WEAK_FUNC(sub_823BF698);
PPC_FUNC_IMPL(__imp__sub_823BF698) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823BF6B8;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// addi r9,r10,-24632
	ctx.r9.s64 = ctx.r10.s64 + -24632;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c10a0
	ctx.lr = 0x823BF6CC;
	sub_823C10A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r11,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r11.u32);
	// bl 0x823585a0
	ctx.lr = 0x823BF6E4;
	sub_823585A0(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x823585a0
	ctx.lr = 0x823BF6F0;
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

__attribute__((alias("__imp__sub_823BF708"))) PPC_WEAK_FUNC(sub_823BF708);
PPC_FUNC_IMPL(__imp__sub_823BF708) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ac5b8
	ctx.lr = 0x823BF71C;
	sub_823AC5B8(ctx, base);
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

__attribute__((alias("__imp__sub_823BF730"))) PPC_WEAK_FUNC(sub_823BF730);
PPC_FUNC_IMPL(__imp__sub_823BF730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bf784
	if (ctx.cr6.eq) goto loc_823BF784;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x823c1170
	ctx.lr = 0x823BF75C;
	sub_823C1170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bf884
	if (ctx.cr6.eq) goto loc_823BF884;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x823bf878
	if (ctx.cr6.eq) goto loc_823BF878;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BF780;
	sub_823AC608(ctx, base);
	// b 0x823bf878
	goto loc_823BF878;
loc_823BF784:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BF78C;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bf804
	if (!ctx.cr6.eq) goto loc_823BF804;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BF7A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bf804
	if (!ctx.cr6.eq) goto loc_823BF804;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823bf884
	if (ctx.cr6.eq) goto loc_823BF884;
	// bl 0x82256ce8
	ctx.lr = 0x823BF7C4;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bf7fc
	if (ctx.cr6.eq) goto loc_823BF7FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BF7E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BF7F8;
	sub_823AC608(ctx, base);
	// b 0x823bf878
	goto loc_823BF878;
loc_823BF7FC:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x823bf880
	goto loc_823BF880;
loc_823BF804:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823BF80C;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bf824
	if (ctx.cr6.eq) goto loc_823BF824;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x823bf848
	goto loc_823BF848;
loc_823BF824:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BF834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bf850
	if (ctx.cr6.eq) goto loc_823BF850;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_823BF848:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ac608
	ctx.lr = 0x823BF850;
	sub_823AC608(ctx, base);
loc_823BF850:
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c12c0
	ctx.lr = 0x823BF864;
	sub_823C12C0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823bf884
	if (!ctx.cr6.eq) goto loc_823BF884;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256cc0
	ctx.lr = 0x823BF878;
	sub_82256CC0(ctx, base);
loc_823BF878:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BF880:
	// bl 0x823ac5b8
	ctx.lr = 0x823BF884;
	sub_823AC5B8(ctx, base);
loc_823BF884:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF89C"))) PPC_WEAK_FUNC(sub_823BF89C);
PPC_FUNC_IMPL(__imp__sub_823BF89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF8A0"))) PPC_WEAK_FUNC(sub_823BF8A0);
PPC_FUNC_IMPL(__imp__sub_823BF8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,696(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-24632
	ctx.r10.s64 = ctx.r11.s64 + -24632;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823bf8e0
	if (ctx.cr6.eq) goto loc_823BF8E0;
	// bl 0x82357128
	ctx.lr = 0x823BF8D8;
	sub_82357128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r11.u32);
loc_823BF8E0:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823c1100
	ctx.lr = 0x823BF8E8;
	sub_823C1100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c13b0
	ctx.lr = 0x823BF8F0;
	sub_823C13B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf908
	if (ctx.cr6.eq) goto loc_823BF908;
	// bl 0x82357128
	ctx.lr = 0x823BF904;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823BF908:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF920"))) PPC_WEAK_FUNC(sub_823BF920);
PPC_FUNC_IMPL(__imp__sub_823BF920) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823BF938;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bf964
	if (ctx.cr6.eq) goto loc_823BF964;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// bne cr6,0x823bf964
	if (!ctx.cr6.eq) goto loc_823BF964;
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
loc_823BF964:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BF978;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823BF990"))) PPC_WEAK_FUNC(sub_823BF990);
PPC_FUNC_IMPL(__imp__sub_823BF990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248770
	ctx.lr = 0x823BF998;
	sub_82248770(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823bfc08
	if (ctx.cr6.eq) goto loc_823BFC08;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// bne cr6,0x823bfc08
	if (!ctx.cr6.eq) goto loc_823BFC08;
	// lwz r11,696(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r9,696(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	// lwz r23,4(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823bfb54
	if (ctx.cr6.eq) goto loc_823BFB54;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// ori r22,r10,65001
	ctx.r22.u64 = ctx.r10.u64 | 65001;
	// addi r26,r11,-31036
	ctx.r26.s64 = ctx.r11.s64 + -31036;
loc_823BF9EC:
	// lwz r11,696(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 696);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8235a518
	ctx.lr = 0x823BFA0C;
	sub_8235A518(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8235a518
	ctx.lr = 0x823BFA18;
	sub_8235A518(ctx, base);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82356e70
	ctx.lr = 0x823BFA24;
	sub_82356E70(ctx, base);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// lwz r11,25(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823bfa48
	if (ctx.cr6.eq) goto loc_823BFA48;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823bfa48
	if (ctx.cr6.eq) goto loc_823BFA48;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823bfbe0
	if (!ctx.cr6.eq) goto loc_823BFBE0;
loc_823BFA48:
	// lwz r11,29(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x82356fe0
	ctx.lr = 0x823BFA5C;
	sub_82356FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82357038
	ctx.lr = 0x823BFA68;
	sub_82357038(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82356eb8
	ctx.lr = 0x823BFA70;
	sub_82356EB8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r6,55(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 55);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,57(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 57);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82257058
	ctx.lr = 0x823BFA94;
	sub_82257058(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bfb60
	if (ctx.cr6.eq) goto loc_823BFB60;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823570e0
	ctx.lr = 0x823BFAA8;
	sub_823570E0(ctx, base);
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// bl 0x823570f0
	ctx.lr = 0x823BFAB0;
	sub_823570F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BFABC;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823bfb9c
	if (ctx.cr6.eq) goto loc_823BFB9C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r6,55(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 55);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,57(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 57);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82257058
	ctx.lr = 0x823BFAE8;
	sub_82257058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bfbd8
	if (ctx.cr6.eq) goto loc_823BFBD8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823bfb1c
	if (ctx.cr6.eq) goto loc_823BFB1C;
loc_823BFAFC:
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,47
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 47, ctx.xer);
	// beq cr6,0x823bfb1c
	if (ctx.cr6.eq) goto loc_823BFB1C;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// beq cr6,0x823bfb1c
	if (ctx.cr6.eq) goto loc_823BFB1C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823bfafc
	if (!ctx.cr0.eq) goto loc_823BFAFC;
loc_823BFB1C:
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8235a760
	ctx.lr = 0x823BFB28;
	sub_8235A760(ctx, base);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82356eb8
	ctx.lr = 0x823BFB34;
	sub_82356EB8(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8235a538
	ctx.lr = 0x823BFB3C;
	sub_8235A538(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8235a538
	ctx.lr = 0x823BFB44;
	sub_8235A538(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,65
	ctx.r27.s64 = ctx.r27.s64 + 65;
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823bf9ec
	if (ctx.cr6.lt) goto loc_823BF9EC;
loc_823BFB54:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_823BFB60:
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BFB74;
	sub_823AC608(ctx, base);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82356eb8
	ctx.lr = 0x823BFB80;
	sub_82356EB8(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8235a538
	ctx.lr = 0x823BFB88;
	sub_8235A538(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8235a538
	ctx.lr = 0x823BFB90;
	sub_8235A538(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_823BFB9C:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BFBB0;
	sub_823AC608(ctx, base);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82356eb8
	ctx.lr = 0x823BFBBC;
	sub_82356EB8(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8235a538
	ctx.lr = 0x823BFBC4;
	sub_8235A538(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8235a538
	ctx.lr = 0x823BFBCC;
	sub_8235A538(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_823BFBD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357128
	ctx.lr = 0x823BFBE0;
	sub_82357128(ctx, base);
loc_823BFBE0:
	// lis r4,2
	ctx.r4.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BFBF4;
	sub_823AC608(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82391548
	ctx.lr = 0x823BFBFC;
	sub_82391548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487c0
	// ERROR 822487C0
	return;
loc_823BFC08:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BFC1C;
	sub_823AC608(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822487c0
	// ERROR 822487C0
	return;
}

__attribute__((alias("__imp__sub_823BFC28"))) PPC_WEAK_FUNC(sub_823BFC28);
PPC_FUNC_IMPL(__imp__sub_823BFC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x823BFC30;
	sub_8224878C(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
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
	ctx.lr = 0x823BFC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bfc78
	if (ctx.cr6.eq) goto loc_823BFC78;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823BFC64;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BFC70;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BFC78:
	// bl 0x823ac6b8
	ctx.lr = 0x823BFC7C;
	sub_823AC6B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8237d2e8
	ctx.lr = 0x823BFC84;
	sub_8237D2E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823bfca8
	if (!ctx.cr6.eq) goto loc_823BFCA8;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BFCA0;
	sub_823AC608(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BFCA8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bfe4c
	if (ctx.cr6.eq) goto loc_823BFE4C;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823585a0
	ctx.lr = 0x823BFCC0;
	sub_823585A0(ctx, base);
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823bfd58
	if (ctx.cr6.eq) goto loc_823BFD58;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bfd58
	if (ctx.cr6.eq) goto loc_823BFD58;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x823BFCF8;
	sub_82256BE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bfd30
	if (ctx.cr6.eq) goto loc_823BFD30;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bgt cr6,0x823bfd30
	if (ctx.cr6.gt) goto loc_823BFD30;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,255
	ctx.r8.s64 = 255;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x823BFD28;
	sub_82256BE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bfd60
	if (!ctx.cr6.eq) goto loc_823BFD60;
loc_823BFD30:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BFD44;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BFD50;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BFD58:
	// li r11,42
	ctx.r11.s64 = 42;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
loc_823BFD60:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bfd94
	if (ctx.cr6.eq) goto loc_823BFD94;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BFD80;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BFD8C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BFD94:
	// lbz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82256340
	ctx.lr = 0x823BFDA0;
	sub_82256340(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x823bfdd0
	if (ctx.cr6.eq) goto loc_823BFDD0;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823BFDBC;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BFDC8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BFDD0:
	// li r11,510
	ctx.r11.s64 = 510;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r31,180
	ctx.r8.s64 = ctx.r31.s64 + 180;
	// lbz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x8234ffa0
	ctx.lr = 0x823BFDF8;
	sub_8234FFA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bfe40
	if (ctx.cr6.eq) goto loc_823BFE40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BFE1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BFE2C;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BFE38;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_823BFE40:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BFE4C;
	sub_823AC5B8(ctx, base);
loc_823BFE4C:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823BFE54"))) PPC_WEAK_FUNC(sub_823BFE54);
PPC_FUNC_IMPL(__imp__sub_823BFE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFE58"))) PPC_WEAK_FUNC(sub_823BFE58);
PPC_FUNC_IMPL(__imp__sub_823BFE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BFE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823bfea4
	if (ctx.cr6.eq) goto loc_823BFEA4;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823BFE9C;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823bff94
	goto loc_823BFF94;
loc_823BFEA4:
	// bl 0x823ac6b8
	ctx.lr = 0x823BFEA8;
	sub_823AC6B8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823bfed4
	if (!ctx.cr6.eq) goto loc_823BFED4;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BFECC;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823bff94
	goto loc_823BFF94;
loc_823BFED4:
	// mulli r11,r11,575
	ctx.r11.s64 = ctx.r11.s64 * 575;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// bl 0x823570e0
	ctx.lr = 0x823BFEE8;
	sub_823570E0(ctx, base);
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x823570f0
	ctx.lr = 0x823BFEF0;
	sub_823570F0(ctx, base);
	// stw r3,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x823BFEFC;
	sub_823570E0(ctx, base);
	// lwz r8,696(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823bff24
	if (!ctx.cr6.eq) goto loc_823BFF24;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BFF1C;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823bff94
	goto loc_823BFF94;
loc_823BFF24:
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// addi r9,r31,152
	ctx.r9.s64 = ctx.r31.s64 + 152;
	// addi r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 + 180;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r7,692(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x8234f020
	ctx.lr = 0x823BFF44;
	sub_8234F020(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823bff88
	if (ctx.cr6.eq) goto loc_823BFF88;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bff88
	if (ctx.cr6.eq) goto loc_823BFF88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823BFF70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823BFF80;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823bff94
	goto loc_823BFF94;
loc_823BFF88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823BFF90;
	sub_823AC668(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
loc_823BFF94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823BFF9C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFFB4"))) PPC_WEAK_FUNC(sub_823BFFB4);
PPC_FUNC_IMPL(__imp__sub_823BFFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFFB8"))) PPC_WEAK_FUNC(sub_823BFFB8);
PPC_FUNC_IMPL(__imp__sub_823BFFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac5c0
	ctx.lr = 0x823BFFD8;
	sub_823AC5C0(ctx, base);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// bgt cr6,0x823c0058
	if (ctx.cr6.gt) goto loc_823C0058;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823c000c
	// bdzf 4*cr6+eq,0x823c001c
	// bdzf 4*cr6+eq,0x823c002c
	// bdzf 4*cr6+eq,0x823c0038
	// bdzf 4*cr6+eq,0x823c0044
	// bne cr6,0x823c0054
	if (!ctx.cr6.eq) goto loc_823C0054;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bfc28
	ctx.lr = 0x823C0008;
	sub_823BFC28(ctx, base);
	// b 0x823c0058
	goto loc_823C0058;
loc_823C000C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823C0018;
	sub_823AC5B8(ctx, base);
	// b 0x823c0058
	goto loc_823C0058;
loc_823C001C:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823C0028;
	sub_823AC5B8(ctx, base);
	// b 0x823c0058
	goto loc_823C0058;
loc_823C002C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bfe58
	ctx.lr = 0x823C0034;
	sub_823BFE58(ctx, base);
	// b 0x823c0058
	goto loc_823C0058;
loc_823C0038:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bf730
	ctx.lr = 0x823C0040;
	sub_823BF730(ctx, base);
	// b 0x823c0058
	goto loc_823C0058;
loc_823C0044:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823C0050;
	sub_823AC5B8(ctx, base);
	// b 0x823c0058
	goto loc_823C0058;
loc_823C0054:
	// li r30,1
	ctx.r30.s64 = 1;
loc_823C0058:
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

__attribute__((alias("__imp__sub_823C0074"))) PPC_WEAK_FUNC(sub_823C0074);
PPC_FUNC_IMPL(__imp__sub_823C0074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C0078"))) PPC_WEAK_FUNC(sub_823C0078);
PPC_FUNC_IMPL(__imp__sub_823C0078) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,11084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823c1370
	ctx.lr = 0x823C0098;
	sub_823C1370(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// addi r9,r10,-24560
	ctx.r9.s64 = ctx.r10.s64 + -24560;
	// li r4,512
	ctx.r4.s64 = 512;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x823585a0
	ctx.lr = 0x823C00B0;
	sub_823585A0(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x823585a0
	ctx.lr = 0x823C00BC;
	sub_823585A0(ctx, base);
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x823585a0
	ctx.lr = 0x823C00C8;
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

__attribute__((alias("__imp__sub_823C00E0"))) PPC_WEAK_FUNC(sub_823C00E0);
PPC_FUNC_IMPL(__imp__sub_823C00E0) {
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C0104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823c012c
	if (ctx.cr6.eq) goto loc_823C012C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823C0120;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823c0130
	goto loc_823C0130;
loc_823C012C:
	// li r4,3
	ctx.r4.s64 = 3;
loc_823C0130:
	// bl 0x823ac5b8
	ctx.lr = 0x823C0134;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823C0148"))) PPC_WEAK_FUNC(sub_823C0148);
PPC_FUNC_IMPL(__imp__sub_823C0148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C0170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c019c
	if (ctx.cr6.eq) goto loc_823C019C;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82256cc0
	ctx.lr = 0x823C0180;
	sub_82256CC0(ctx, base);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823C0194;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823c0220
	goto loc_823C0220;
loc_823C019C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac670
	ctx.lr = 0x823C01A4;
	sub_823AC670(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// beq cr6,0x823c01d0
	if (ctx.cr6.eq) goto loc_823C01D0;
	// bl 0x82256cc0
	ctx.lr = 0x823C01B4;
	sub_82256CC0(ctx, base);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823C01C8;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823c0220
	goto loc_823C0220;
loc_823C01D0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x823c0228
	if (ctx.cr6.eq) goto loc_823C0228;
	// bl 0x82256ce8
	ctx.lr = 0x823C01E0;
	sub_82256CE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c021c
	if (ctx.cr6.eq) goto loc_823C021C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C0204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823C0214;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823c0220
	goto loc_823C0220;
loc_823C021C:
	// li r4,5
	ctx.r4.s64 = 5;
loc_823C0220:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823C0228;
	sub_823AC5B8(ctx, base);
loc_823C0228:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C0240"))) PPC_WEAK_FUNC(sub_823C0240);
PPC_FUNC_IMPL(__imp__sub_823C0240) {
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C0264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823c0284
	if (ctx.cr6.eq) goto loc_823C0284;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823C0280;
	sub_823AC608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823C0284:
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x823ac5b8
	ctx.lr = 0x823C028C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_823C02A0"))) PPC_WEAK_FUNC(sub_823C02A0);
PPC_FUNC_IMPL(__imp__sub_823C02A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-24560
	ctx.r10.s64 = ctx.r11.s64 + -24560;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823c13b0
	ctx.lr = 0x823C02CC;
	sub_823C13B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c02e4
	if (ctx.cr6.eq) goto loc_823C02E4;
	// bl 0x82357128
	ctx.lr = 0x823C02E0;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823C02E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C02FC"))) PPC_WEAK_FUNC(sub_823C02FC);
PPC_FUNC_IMPL(__imp__sub_823C02FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C0300"))) PPC_WEAK_FUNC(sub_823C0300);
PPC_FUNC_IMPL(__imp__sub_823C0300) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823C0318;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c0344
	if (ctx.cr6.eq) goto loc_823C0344;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bne cr6,0x823c0344
	if (!ctx.cr6.eq) goto loc_823C0344;
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
loc_823C0344:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823C0358;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823C0370"))) PPC_WEAK_FUNC(sub_823C0370);
PPC_FUNC_IMPL(__imp__sub_823C0370) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823c03ac
	if (ctx.cr6.eq) goto loc_823C03AC;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bne cr6,0x823c03ac
	if (!ctx.cr6.eq) goto loc_823C03AC;
	// lwz r11,600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 600);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823C03AC:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x823ac608
	ctx.lr = 0x823C03BC;
	sub_823AC608(ctx, base);
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

__attribute__((alias("__imp__sub_823C03D0"))) PPC_WEAK_FUNC(sub_823C03D0);
PPC_FUNC_IMPL(__imp__sub_823C03D0) {
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
	// bl 0x823ac6b8
	ctx.lr = 0x823C03E8;
	sub_823AC6B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c0414
	if (ctx.cr6.eq) goto loc_823C0414;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bne cr6,0x823c0414
	if (!ctx.cr6.eq) goto loc_823C0414;
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
loc_823C0414:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823C0428;
	sub_823AC608(ctx, base);
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
}

__attribute__((alias("__imp__sub_823C0440"))) PPC_WEAK_FUNC(sub_823C0440);
PPC_FUNC_IMPL(__imp__sub_823C0440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x823C0448;
	sub_82248784(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823ac6b8
	ctx.lr = 0x823C0454;
	sub_823AC6B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8237d2e8
	ctx.lr = 0x823C045C;
	sub_8237D2E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823c0480
	if (!ctx.cr6.eq) goto loc_823C0480;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823C0478;
	sub_823AC608(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823C0480:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c06d0
	if (ctx.cr6.eq) goto loc_823C06D0;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823585a0
	ctx.lr = 0x823C0498;
	sub_823585A0(ctx, base);
	// lwz r5,24(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r29,r27,16
	ctx.r29.s64 = ctx.r27.s64 + 16;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823c0508
	if (ctx.cr6.eq) goto loc_823C0508;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c0508
	if (ctx.cr6.eq) goto loc_823C0508;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x823C04D0;
	sub_82256BE8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c053c
	if (ctx.cr6.eq) goto loc_823C053C;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bgt cr6,0x823c053c
	if (ctx.cr6.gt) goto loc_823C053C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r8,255
	ctx.r8.s64 = 255;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82256be8
	ctx.lr = 0x823C0500;
	sub_82256BE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c053c
	if (ctx.cr6.eq) goto loc_823C053C;
loc_823C0508:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823c05ac
	if (ctx.cr6.lt) goto loc_823C05AC;
	// beq cr6,0x823c0564
	if (ctx.cr6.eq) goto loc_823C0564;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823c053c
	if (!ctx.cr6.lt) goto loc_823C053C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,3
	ctx.r31.s64 = 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c053c
	if (ctx.cr6.eq) goto loc_823C053C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c0570
	if (!ctx.cr6.eq) goto loc_823C0570;
loc_823C053C:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823C0550;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823C055C;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823C0564:
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_823C0570:
	// lbz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 12);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82256340
	ctx.lr = 0x823C057C;
	sub_82256340(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x823c05f0
	if (ctx.cr6.eq) goto loc_823C05F0;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823C0598;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823C05A4;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823C05AC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c05c8
	if (ctx.cr6.eq) goto loc_823C05C8;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c0570
	if (!ctx.cr6.eq) goto loc_823C0570;
loc_823C05C8:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823C05DC;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823C05E8;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823C05F0:
	// li r11,510
	ctx.r11.s64 = 510;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x823c0630
	if (ctx.cr6.eq) goto loc_823C0630;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x823c063c
	if (ctx.cr6.eq) goto loc_823C063C;
	// lbz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 12);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r30,88
	ctx.r8.s64 = ctx.r30.s64 + 88;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8234ffa0
	ctx.lr = 0x823C062C;
	sub_8234FFA0(ctx, base);
	// b 0x823c067c
	goto loc_823C067C;
loc_823C0630:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r1,84
	ctx.r29.s64 = ctx.r1.s64 + 84;
	// b 0x823c0644
	goto loc_823C0644;
loc_823C063C:
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823C0644:
	// addi r3,r27,32
	ctx.r3.s64 = ctx.r27.s64 + 32;
	// bl 0x82356608
	ctx.lr = 0x823C064C;
	sub_82356608(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r10,4
	ctx.r10.s64 = 4;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r8,r30,88
	ctx.r8.s64 = ctx.r30.s64 + 88;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// and r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ctx.r10.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82350038
	ctx.lr = 0x823C067C;
	sub_82350038(ctx, base);
loc_823C067C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c06c4
	if (ctx.cr6.eq) goto loc_823C06C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C06A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823ac608
	ctx.lr = 0x823C06B0;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823C06BC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_823C06C4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823C06D0;
	sub_823AC5B8(ctx, base);
loc_823C06D0:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_823C06D8"))) PPC_WEAK_FUNC(sub_823C06D8);
PPC_FUNC_IMPL(__imp__sub_823C06D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C0700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x823c0724
	if (ctx.cr6.eq) goto loc_823C0724;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ac608
	ctx.lr = 0x823C071C;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823c07b4
	goto loc_823C07B4;
loc_823C0724:
	// bl 0x823ac6b8
	ctx.lr = 0x823C0728;
	sub_823AC6B8(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823C073C:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823c073c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C073C;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// addi r8,r31,600
	ctx.r8.s64 = ctx.r31.s64 + 600;
	// lwz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r7,20
	ctx.r7.s64 = 20;
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8234ed40
	ctx.lr = 0x823C0764;
	sub_8234ED40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823c07a8
	if (ctx.cr6.eq) goto loc_823C07A8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c07a8
	if (ctx.cr6.eq) goto loc_823C07A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823C0790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823ac608
	ctx.lr = 0x823C07A0;
	sub_823AC608(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823c07b4
	goto loc_823C07B4;
loc_823C07A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac668
	ctx.lr = 0x823C07B0;
	sub_823AC668(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
loc_823C07B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ac5b8
	ctx.lr = 0x823C07BC;
	sub_823AC5B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

