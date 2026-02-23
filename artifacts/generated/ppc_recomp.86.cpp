#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823890B0"))) PPC_WEAK_FUNC(sub_823890B0);
PPC_FUNC_IMPL(__imp__sub_823890B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x823890B8;
	sub_82248780(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82389194
	goto loc_82389194;
loc_823890D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82389174
	if (!ctx.cr6.eq) goto loc_82389174;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// beq cr6,0x82389100
	if (ctx.cr6.eq) goto loc_82389100;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82389108
	if (ctx.cr6.eq) goto loc_82389108;
	// b 0x82389174
	goto loc_82389174;
loc_82389100:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82389174
	if (ctx.cr6.eq) goto loc_82389174;
loc_82389108:
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823891a0
	if (ctx.cr6.lt) goto loc_823891A0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// bl 0x823898d8
	ctx.lr = 0x82389134;
	sub_823898D8(ctx, base);
	// sth r28,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stb r11,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r11.u8);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// bl 0x82388b38
	ctx.lr = 0x82389164;
	sub_82388B38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82389828
	ctx.lr = 0x82389174;
	sub_82389828(ctx, base);
loc_82389174:
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
	// bne 0x8238918c
	if (!ctx.cr0.eq) goto loc_8238918C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238918C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82389194:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823890d8
	if (!ctx.cr6.eq) goto loc_823890D8;
loc_823891A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_823891AC"))) PPC_WEAK_FUNC(sub_823891AC);
PPC_FUNC_IMPL(__imp__sub_823891AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823891B0"))) PPC_WEAK_FUNC(sub_823891B0);
PPC_FUNC_IMPL(__imp__sub_823891B0) {
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
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
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
	// bne 0x823891ec
	if (!ctx.cr0.eq) goto loc_823891EC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823891EC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82389210
	if (!ctx.cr6.lt) goto loc_82389210;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388ef0
	ctx.lr = 0x82389210;
	sub_82388EF0(ctx, base);
loc_82389210:
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82358508
	ctx.lr = 0x8238922C;
	sub_82358508(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subfic r8,r9,4
	ctx.xer.ca = ctx.r9.u32 <= 4;
	ctx.r8.s64 = 4 - ctx.r9.s64;
	// bne 0x82389260
	if (!ctx.cr0.eq) goto loc_82389260;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82389260:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82389288
	if (ctx.cr6.eq) goto loc_82389288;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823892b4
	goto loc_823892B4;
loc_82389288:
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subfic r9,r9,4
	ctx.xer.ca = ctx.r9.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r9.s64;
	// bne 0x823892a8
	if (!ctx.cr0.eq) goto loc_823892A8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823892A8:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_823892B4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823892D4"))) PPC_WEAK_FUNC(sub_823892D4);
PPC_FUNC_IMPL(__imp__sub_823892D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823892D8"))) PPC_WEAK_FUNC(sub_823892D8);
PPC_FUNC_IMPL(__imp__sub_823892D8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,255
	ctx.r3.s64 = 255;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32250
	ctx.r12.s64 = -2113536000;
	// addi r12,r12,-32624
	ctx.r12.s64 = ctx.r12.s64 + -32624;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// nop 
	// addi r12,r12,-27888
	ctx.r12.s64 = ctx.r12.s64 + -27888;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82389310"))) PPC_WEAK_FUNC(sub_82389310);
PPC_FUNC_IMPL(__imp__sub_82389310) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389318"))) PPC_WEAK_FUNC(sub_82389318);
PPC_FUNC_IMPL(__imp__sub_82389318) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389320"))) PPC_WEAK_FUNC(sub_82389320);
PPC_FUNC_IMPL(__imp__sub_82389320) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389328"))) PPC_WEAK_FUNC(sub_82389328);
PPC_FUNC_IMPL(__imp__sub_82389328) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389330"))) PPC_WEAK_FUNC(sub_82389330);
PPC_FUNC_IMPL(__imp__sub_82389330) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389338"))) PPC_WEAK_FUNC(sub_82389338);
PPC_FUNC_IMPL(__imp__sub_82389338) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389340"))) PPC_WEAK_FUNC(sub_82389340);
PPC_FUNC_IMPL(__imp__sub_82389340) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389348"))) PPC_WEAK_FUNC(sub_82389348);
PPC_FUNC_IMPL(__imp__sub_82389348) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389350"))) PPC_WEAK_FUNC(sub_82389350);
PPC_FUNC_IMPL(__imp__sub_82389350) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389358"))) PPC_WEAK_FUNC(sub_82389358);
PPC_FUNC_IMPL(__imp__sub_82389358) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389360"))) PPC_WEAK_FUNC(sub_82389360);
PPC_FUNC_IMPL(__imp__sub_82389360) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389368"))) PPC_WEAK_FUNC(sub_82389368);
PPC_FUNC_IMPL(__imp__sub_82389368) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389370"))) PPC_WEAK_FUNC(sub_82389370);
PPC_FUNC_IMPL(__imp__sub_82389370) {
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
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r10,32168
	ctx.r4.s64 = ctx.r10.s64 + 32168;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x82358508
	ctx.lr = 0x823893A0;
	sub_82358508(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823893BC"))) PPC_WEAK_FUNC(sub_823893BC);
PPC_FUNC_IMPL(__imp__sub_823893BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823893C0"))) PPC_WEAK_FUNC(sub_823893C0);
PPC_FUNC_IMPL(__imp__sub_823893C0) {
	PPC_FUNC_PROLOGUE();
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x82358508
	sub_82358508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823893C8"))) PPC_WEAK_FUNC(sub_823893C8);
PPC_FUNC_IMPL(__imp__sub_823893C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwimi r4,r5,5,11,26
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 5) & 0x1FFFE0) | (ctx.r4.u64 & 0xFFFFFFFFFFE0001F);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// sth r4,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r4.u16);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823893E0"))) PPC_WEAK_FUNC(sub_823893E0);
PPC_FUNC_IMPL(__imp__sub_823893E0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823893EC"))) PPC_WEAK_FUNC(sub_823893EC);
PPC_FUNC_IMPL(__imp__sub_823893EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823893F0"))) PPC_WEAK_FUNC(sub_823893F0);
PPC_FUNC_IMPL(__imp__sub_823893F0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// rlwinm r3,r11,27,5,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823893FC"))) PPC_WEAK_FUNC(sub_823893FC);
PPC_FUNC_IMPL(__imp__sub_823893FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389400"))) PPC_WEAK_FUNC(sub_82389400);
PPC_FUNC_IMPL(__imp__sub_82389400) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358508
	ctx.lr = 0x8238941C;
	sub_82358508(ctx, base);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x823892d8
	ctx.lr = 0x82389424;
	sub_823892D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389434"))) PPC_WEAK_FUNC(sub_82389434);
PPC_FUNC_IMPL(__imp__sub_82389434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389438"))) PPC_WEAK_FUNC(sub_82389438);
PPC_FUNC_IMPL(__imp__sub_82389438) {
	PPC_FUNC_PROLOGUE();
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389440"))) PPC_WEAK_FUNC(sub_82389440);
PPC_FUNC_IMPL(__imp__sub_82389440) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358508
	ctx.lr = 0x8238945C;
	sub_82358508(ctx, base);
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389470"))) PPC_WEAK_FUNC(sub_82389470);
PPC_FUNC_IMPL(__imp__sub_82389470) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r9,r10,17
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFF;
	// rlwinm r3,r10,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389488"))) PPC_WEAK_FUNC(sub_82389488);
PPC_FUNC_IMPL(__imp__sub_82389488) {
	PPC_FUNC_PROLOGUE();
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r11,-32600
	ctx.r11.s64 = ctx.r11.s64 + -32600;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823894B0"))) PPC_WEAK_FUNC(sub_823894B0);
PPC_FUNC_IMPL(__imp__sub_823894B0) {
	PPC_FUNC_PROLOGUE();
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82358508
	sub_82358508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823894BC"))) PPC_WEAK_FUNC(sub_823894BC);
PPC_FUNC_IMPL(__imp__sub_823894BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823894C0"))) PPC_WEAK_FUNC(sub_823894C0);
PPC_FUNC_IMPL(__imp__sub_823894C0) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823894C8"))) PPC_WEAK_FUNC(sub_823894C8);
PPC_FUNC_IMPL(__imp__sub_823894C8) {
	PPC_FUNC_PROLOGUE();
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r11,-32588
	ctx.r11.s64 = ctx.r11.s64 + -32588;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823894F0"))) PPC_WEAK_FUNC(sub_823894F0);
PPC_FUNC_IMPL(__imp__sub_823894F0) {
	PPC_FUNC_PROLOGUE();
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82358508
	sub_82358508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823894FC"))) PPC_WEAK_FUNC(sub_823894FC);
PPC_FUNC_IMPL(__imp__sub_823894FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389500"))) PPC_WEAK_FUNC(sub_82389500);
PPC_FUNC_IMPL(__imp__sub_82389500) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82358508
	ctx.lr = 0x8238951C;
	sub_82358508(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389530"))) PPC_WEAK_FUNC(sub_82389530);
PPC_FUNC_IMPL(__imp__sub_82389530) {
	PPC_FUNC_PROLOGUE();
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,-32576
	ctx.r11.s64 = ctx.r11.s64 + -32576;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389558"))) PPC_WEAK_FUNC(sub_82389558);
PPC_FUNC_IMPL(__imp__sub_82389558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r11,-32564
	ctx.r11.s64 = ctx.r11.s64 + -32564;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389588"))) PPC_WEAK_FUNC(sub_82389588);
PPC_FUNC_IMPL(__imp__sub_82389588) {
	PPC_FUNC_PROLOGUE();
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,-32576
	ctx.r11.s64 = ctx.r11.s64 + -32576;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823895B0"))) PPC_WEAK_FUNC(sub_823895B0);
PPC_FUNC_IMPL(__imp__sub_823895B0) {
	PPC_FUNC_PROLOGUE();
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,-32576
	ctx.r11.s64 = ctx.r11.s64 + -32576;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823895D8"))) PPC_WEAK_FUNC(sub_823895D8);
PPC_FUNC_IMPL(__imp__sub_823895D8) {
	PPC_FUNC_PROLOGUE();
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,-32576
	ctx.r11.s64 = ctx.r11.s64 + -32576;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389600"))) PPC_WEAK_FUNC(sub_82389600);
PPC_FUNC_IMPL(__imp__sub_82389600) {
	PPC_FUNC_PROLOGUE();
	// li r9,10
	ctx.r9.s64 = 10;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-32564
	ctx.r10.s64 = ctx.r10.s64 + -32564;
	// li r8,12
	ctx.r8.s64 = 12;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r8,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r8.u8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// sth r11,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389634"))) PPC_WEAK_FUNC(sub_82389634);
PPC_FUNC_IMPL(__imp__sub_82389634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389638"))) PPC_WEAK_FUNC(sub_82389638);
PPC_FUNC_IMPL(__imp__sub_82389638) {
	PPC_FUNC_PROLOGUE();
	// li r9,10
	ctx.r9.s64 = 10;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-32552
	ctx.r10.s64 = ctx.r10.s64 + -32552;
	// li r8,20
	ctx.r8.s64 = 20;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r8,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r8.u8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// sth r11,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389674"))) PPC_WEAK_FUNC(sub_82389674);
PPC_FUNC_IMPL(__imp__sub_82389674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389678"))) PPC_WEAK_FUNC(sub_82389678);
PPC_FUNC_IMPL(__imp__sub_82389678) {
	PPC_FUNC_PROLOGUE();
	// li r9,10
	ctx.r9.s64 = 10;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-32540
	ctx.r10.s64 = ctx.r10.s64 + -32540;
	// li r8,16
	ctx.r8.s64 = 16;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r8,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r8.u8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// sth r11,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823896B0"))) PPC_WEAK_FUNC(sub_823896B0);
PPC_FUNC_IMPL(__imp__sub_823896B0) {
	PPC_FUNC_PROLOGUE();
	// li r9,10
	ctx.r9.s64 = 10;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-32552
	ctx.r10.s64 = ctx.r10.s64 + -32552;
	// li r8,20
	ctx.r8.s64 = 20;
	// sth r11,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r11.u16);
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r8,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r8.u8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823896E4"))) PPC_WEAK_FUNC(sub_823896E4);
PPC_FUNC_IMPL(__imp__sub_823896E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823896E8"))) PPC_WEAK_FUNC(sub_823896E8);
PPC_FUNC_IMPL(__imp__sub_823896E8) {
	PPC_FUNC_PROLOGUE();
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82358508
	sub_82358508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823896F4"))) PPC_WEAK_FUNC(sub_823896F4);
PPC_FUNC_IMPL(__imp__sub_823896F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823896F8"))) PPC_WEAK_FUNC(sub_823896F8);
PPC_FUNC_IMPL(__imp__sub_823896F8) {
	PPC_FUNC_PROLOGUE();
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r11,r11,-32564
	ctx.r11.s64 = ctx.r11.s64 + -32564;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389720"))) PPC_WEAK_FUNC(sub_82389720);
PPC_FUNC_IMPL(__imp__sub_82389720) {
	PPC_FUNC_PROLOGUE();
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82358508
	sub_82358508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238972C"))) PPC_WEAK_FUNC(sub_8238972C);
PPC_FUNC_IMPL(__imp__sub_8238972C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389730"))) PPC_WEAK_FUNC(sub_82389730);
PPC_FUNC_IMPL(__imp__sub_82389730) {
	PPC_FUNC_PROLOGUE();
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,-32576
	ctx.r11.s64 = ctx.r11.s64 + -32576;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389758"))) PPC_WEAK_FUNC(sub_82389758);
PPC_FUNC_IMPL(__imp__sub_82389758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r11,-32564
	ctx.r11.s64 = ctx.r11.s64 + -32564;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389788"))) PPC_WEAK_FUNC(sub_82389788);
PPC_FUNC_IMPL(__imp__sub_82389788) {
	PPC_FUNC_PROLOGUE();
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,-32576
	ctx.r11.s64 = ctx.r11.s64 + -32576;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823897B0"))) PPC_WEAK_FUNC(sub_823897B0);
PPC_FUNC_IMPL(__imp__sub_823897B0) {
	PPC_FUNC_PROLOGUE();
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82358508
	sub_82358508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823897BC"))) PPC_WEAK_FUNC(sub_823897BC);
PPC_FUNC_IMPL(__imp__sub_823897BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823897C0"))) PPC_WEAK_FUNC(sub_823897C0);
PPC_FUNC_IMPL(__imp__sub_823897C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r11,-32564
	ctx.r11.s64 = ctx.r11.s64 + -32564;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823897F0"))) PPC_WEAK_FUNC(sub_823897F0);
PPC_FUNC_IMPL(__imp__sub_823897F0) {
	PPC_FUNC_PROLOGUE();
	// sth r4,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823897F8"))) PPC_WEAK_FUNC(sub_823897F8);
PPC_FUNC_IMPL(__imp__sub_823897F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r10,-32564
	ctx.r10.s64 = ctx.r10.s64 + -32564;
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389824"))) PPC_WEAK_FUNC(sub_82389824);
PPC_FUNC_IMPL(__imp__sub_82389824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389828"))) PPC_WEAK_FUNC(sub_82389828);
PPC_FUNC_IMPL(__imp__sub_82389828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-32612
	ctx.r11.s64 = ctx.r11.s64 + -32612;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389838"))) PPC_WEAK_FUNC(sub_82389838);
PPC_FUNC_IMPL(__imp__sub_82389838) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r8,10
	ctx.r8.s64 = 10;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// addi r9,r9,-32540
	ctx.r9.s64 = ctx.r9.s64 + -32540;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// stb r11,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r11.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389874"))) PPC_WEAK_FUNC(sub_82389874);
PPC_FUNC_IMPL(__imp__sub_82389874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389878"))) PPC_WEAK_FUNC(sub_82389878);
PPC_FUNC_IMPL(__imp__sub_82389878) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r4,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238988C"))) PPC_WEAK_FUNC(sub_8238988C);
PPC_FUNC_IMPL(__imp__sub_8238988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389890"))) PPC_WEAK_FUNC(sub_82389890);
PPC_FUNC_IMPL(__imp__sub_82389890) {
	PPC_FUNC_PROLOGUE();
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82358508
	sub_82358508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238989C"))) PPC_WEAK_FUNC(sub_8238989C);
PPC_FUNC_IMPL(__imp__sub_8238989C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823898A0"))) PPC_WEAK_FUNC(sub_823898A0);
PPC_FUNC_IMPL(__imp__sub_823898A0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82389370
	ctx.lr = 0x823898BC;
	sub_82389370(ctx, base);
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

__attribute__((alias("__imp__sub_823898D4"))) PPC_WEAK_FUNC(sub_823898D4);
PPC_FUNC_IMPL(__imp__sub_823898D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823898D8"))) PPC_WEAK_FUNC(sub_823898D8);
PPC_FUNC_IMPL(__imp__sub_823898D8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-32528
	ctx.r9.s64 = ctx.r9.s64 + -32528;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389900"))) PPC_WEAK_FUNC(sub_82389900);
PPC_FUNC_IMPL(__imp__sub_82389900) {
	PPC_FUNC_PROLOGUE();
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82358508
	sub_82358508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238990C"))) PPC_WEAK_FUNC(sub_8238990C);
PPC_FUNC_IMPL(__imp__sub_8238990C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389910"))) PPC_WEAK_FUNC(sub_82389910);
PPC_FUNC_IMPL(__imp__sub_82389910) {
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
	// addi r11,r11,-32612
	ctx.r11.s64 = ctx.r11.s64 + -32612;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8238993c
	if (ctx.cr0.eq) goto loc_8238993C;
	// bl 0x82357128
	ctx.lr = 0x8238993C;
	sub_82357128(ctx, base);
loc_8238993C:
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

__attribute__((alias("__imp__sub_82389954"))) PPC_WEAK_FUNC(sub_82389954);
PPC_FUNC_IMPL(__imp__sub_82389954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389958"))) PPC_WEAK_FUNC(sub_82389958);
PPC_FUNC_IMPL(__imp__sub_82389958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82389960;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-32512
	ctx.r11.s64 = ctx.r11.s64 + -32512;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82389994
	if (ctx.cr6.eq) goto loc_82389994;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r3,236
	ctx.r3.s64 = ctx.r3.s64 + 236;
	// bl 0x823a9018
	ctx.lr = 0x8238998C;
	sub_823A9018(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82389994:
	// addi r30,r31,208
	ctx.r30.s64 = ctx.r31.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8750
	ctx.lr = 0x823899A0;
	sub_823A8750(ctx, base);
	// addi r29,r31,220
	ctx.r29.s64 = ctx.r31.s64 + 220;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8ad8
	ctx.lr = 0x823899AC;
	sub_823A8AD8(ctx, base);
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// bl 0x823ab568
	ctx.lr = 0x823899B4;
	sub_823AB568(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x823ab568
	ctx.lr = 0x823899BC;
	sub_823AB568(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x823a8e40
	ctx.lr = 0x823899C4;
	sub_823A8E40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8710
	ctx.lr = 0x823899CC;
	sub_823A8710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8710
	ctx.lr = 0x823899D4;
	sub_823A8710(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x823700d8
	ctx.lr = 0x823899DC;
	sub_823700D8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x823700d8
	ctx.lr = 0x823899E4;
	sub_823700D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_823899EC"))) PPC_WEAK_FUNC(sub_823899EC);
PPC_FUNC_IMPL(__imp__sub_823899EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823899F0"))) PPC_WEAK_FUNC(sub_823899F0);
PPC_FUNC_IMPL(__imp__sub_823899F0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// bl 0x823a8850
	ctx.lr = 0x82389A14;
	sub_823A8850(ctx, base);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// bl 0x823a8bf0
	ctx.lr = 0x82389A1C;
	sub_823A8BF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389A30"))) PPC_WEAK_FUNC(sub_82389A30);
PPC_FUNC_IMPL(__imp__sub_82389A30) {
	PPC_FUNC_PROLOGUE();
	// stw r4,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389A38"))) PPC_WEAK_FUNC(sub_82389A38);
PPC_FUNC_IMPL(__imp__sub_82389A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389A40"))) PPC_WEAK_FUNC(sub_82389A40);
PPC_FUNC_IMPL(__imp__sub_82389A40) {
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
	// addi r31,r3,328
	ctx.r31.s64 = ctx.r3.s64 + 328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357080
	ctx.lr = 0x82389A5C;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82389a74
	if (ctx.cr0.eq) goto loc_82389A74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a86f8
	ctx.lr = 0x82389A6C;
	sub_823A86F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d130
	ctx.lr = 0x82389A74;
	sub_8237D130(ctx, base);
loc_82389A74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389A88"))) PPC_WEAK_FUNC(sub_82389A88);
PPC_FUNC_IMPL(__imp__sub_82389A88) {
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
	// addi r31,r3,328
	ctx.r31.s64 = ctx.r3.s64 + 328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357080
	ctx.lr = 0x82389AA4;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82389ab4
	if (ctx.cr0.eq) goto loc_82389AB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d170
	ctx.lr = 0x82389AB4;
	sub_8237D170(ctx, base);
loc_82389AB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389AC8"))) PPC_WEAK_FUNC(sub_82389AC8);
PPC_FUNC_IMPL(__imp__sub_82389AC8) {
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
	// addi r31,r3,328
	ctx.r31.s64 = ctx.r3.s64 + 328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357080
	ctx.lr = 0x82389AE4;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82389af4
	if (!ctx.cr0.eq) goto loc_82389AF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d130
	ctx.lr = 0x82389AF4;
	sub_8237D130(ctx, base);
loc_82389AF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389B08"))) PPC_WEAK_FUNC(sub_82389B08);
PPC_FUNC_IMPL(__imp__sub_82389B08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,236
	ctx.r3.s64 = ctx.r3.s64 + 236;
	// b 0x823a9020
	sub_823A9020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82389B10"))) PPC_WEAK_FUNC(sub_82389B10);
PPC_FUNC_IMPL(__imp__sub_82389B10) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r3,236
	ctx.r3.s64 = ctx.r3.s64 + 236;
	// b 0x823aa358
	sub_823AA358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82389B1C"))) PPC_WEAK_FUNC(sub_82389B1C);
PPC_FUNC_IMPL(__imp__sub_82389B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389B20"))) PPC_WEAK_FUNC(sub_82389B20);
PPC_FUNC_IMPL(__imp__sub_82389B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82389b7c
	if (ctx.cr6.eq) goto loc_82389B7C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82248a40
	ctx.lr = 0x82389B6C;
	sub_82248A40(ctx, base);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x82389B7C;
	sub_82248A40(ctx, base);
loc_82389B7C:
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

__attribute__((alias("__imp__sub_82389B98"))) PPC_WEAK_FUNC(sub_82389B98);
PPC_FUNC_IMPL(__imp__sub_82389B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82389958
	ctx.lr = 0x82389BB8;
	sub_82389958(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82389bc8
	if (ctx.cr0.eq) goto loc_82389BC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82357128
	ctx.lr = 0x82389BC8;
	sub_82357128(ctx, base);
loc_82389BC8:
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

__attribute__((alias("__imp__sub_82389BE4"))) PPC_WEAK_FUNC(sub_82389BE4);
PPC_FUNC_IMPL(__imp__sub_82389BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389BE8"))) PPC_WEAK_FUNC(sub_82389BE8);
PPC_FUNC_IMPL(__imp__sub_82389BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82389BF0;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82389C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82389C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x823585a0
	ctx.lr = 0x82389C34;
	sub_823585A0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823585a0
	ctx.lr = 0x82389C40;
	sub_823585A0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// li r4,2048
	ctx.r4.s64 = 2048;
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// bl 0x823a8a48
	ctx.lr = 0x82389C68;
	sub_823A8A48(ctx, base);
	// li r4,8192
	ctx.r4.s64 = 8192;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// bl 0x823a8c10
	ctx.lr = 0x82389C74;
	sub_823A8C10(ctx, base);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa588
	ctx.lr = 0x82389C80;
	sub_823AA588(ctx, base);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82389C98"))) PPC_WEAK_FUNC(sub_82389C98);
PPC_FUNC_IMPL(__imp__sub_82389C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,172
	ctx.r3.s64 = ctx.r3.s64 + 172;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82389b20
	ctx.lr = 0x82389CBC;
	sub_82389B20(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// bl 0x823a8850
	ctx.lr = 0x82389CD4;
	sub_823A8850(ctx, base);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// bl 0x823a8bf0
	ctx.lr = 0x82389CDC;
	sub_823A8BF0(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x823a8ec8
	ctx.lr = 0x82389CE4;
	sub_823A8EC8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389D10"))) PPC_WEAK_FUNC(sub_82389D10);
PPC_FUNC_IMPL(__imp__sub_82389D10) {
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
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82389d68
	if (ctx.cr6.eq) goto loc_82389D68;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82389d44
	if (!ctx.cr6.eq) goto loc_82389D44;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82389d94
	if (!ctx.cr6.eq) goto loc_82389D94;
loc_82389D44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82389d5c
	if (ctx.cr6.eq) goto loc_82389D5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x823a9018
	ctx.lr = 0x82389D5C;
	sub_823A9018(ctx, base);
loc_82389D5C:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// b 0x82389d94
	goto loc_82389D94;
loc_82389D68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x823a9830
	ctx.lr = 0x82389D74;
	sub_823A9830(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// stw r9,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// bl 0x8237d130
	ctx.lr = 0x82389D94;
	sub_8237D130(ctx, base);
loc_82389D94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389DA8"))) PPC_WEAK_FUNC(sub_82389DA8);
PPC_FUNC_IMPL(__imp__sub_82389DA8) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82370360
	ctx.lr = 0x82389DBC;
	sub_82370360(ctx, base);
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

__attribute__((alias("__imp__sub_82389DD0"))) PPC_WEAK_FUNC(sub_82389DD0);
PPC_FUNC_IMPL(__imp__sub_82389DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82389DD8;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823585a0
	ctx.lr = 0x82389DF8;
	sub_823585A0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa660
	ctx.lr = 0x82389E0C;
	sub_823AA660(ctx, base);
	// stw r29,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82389e20
	if (ctx.cr6.eq) goto loc_82389E20;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x8237d130
	ctx.lr = 0x82389E20;
	sub_8237D130(ctx, base);
loc_82389E20:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82389E40"))) PPC_WEAK_FUNC(sub_82389E40);
PPC_FUNC_IMPL(__imp__sub_82389E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x82389E48;
	sub_8224878C(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823585a0
	ctx.lr = 0x82389E68;
	sub_823585A0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aa6f0
	ctx.lr = 0x82389E7C;
	sub_823AA6F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82389eb4
	if (ctx.cr0.eq) goto loc_82389EB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82370360
	ctx.lr = 0x82389E90;
	sub_82370360(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x823a9750
	ctx.lr = 0x82389EA4;
	sub_823A9750(ctx, base);
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// bl 0x8237d130
	ctx.lr = 0x82389EAC;
	sub_8237D130(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r29.u32);
loc_82389EB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_82389EBC"))) PPC_WEAK_FUNC(sub_82389EBC);
PPC_FUNC_IMPL(__imp__sub_82389EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389EC0"))) PPC_WEAK_FUNC(sub_82389EC0);
PPC_FUNC_IMPL(__imp__sub_82389EC0) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82389ef8
	if (ctx.cr6.eq) goto loc_82389EF8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82389ef8
	if (ctx.cr6.eq) goto loc_82389EF8;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82389ef8
	if (!ctx.cr6.eq) goto loc_82389EF8;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r3,236
	ctx.r3.s64 = ctx.r3.s64 + 236;
	// b 0x823a9a70
	sub_823A9A70(ctx, base);
	return;
loc_82389EF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389F00"))) PPC_WEAK_FUNC(sub_82389F00);
PPC_FUNC_IMPL(__imp__sub_82389F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82389f44
	if (!ctx.cr6.lt) goto loc_82389F44;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// b 0x82389f84
	goto loc_82389F84;
loc_82389F44:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x823a8920
	ctx.lr = 0x82389F50;
	sub_823A8920(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82389f80
	if (ctx.cr6.eq) goto loc_82389F80;
	// addi r30,r31,328
	ctx.r30.s64 = ctx.r31.s64 + 328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82357080
	ctx.lr = 0x82389F64;
	sub_82357080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82389f74
	if (!ctx.cr0.eq) goto loc_82389F74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x82389F74;
	sub_8237D130(ctx, base);
loc_82389F74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aaa08
	ctx.lr = 0x82389F7C;
	sub_823AAA08(ctx, base);
	// b 0x82389f84
	goto loc_82389F84;
loc_82389F80:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82389F84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389F9C"))) PPC_WEAK_FUNC(sub_82389F9C);
PPC_FUNC_IMPL(__imp__sub_82389F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389FA0"))) PPC_WEAK_FUNC(sub_82389FA0);
PPC_FUNC_IMPL(__imp__sub_82389FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r10,216(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfc r11,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389FBC"))) PPC_WEAK_FUNC(sub_82389FBC);
PPC_FUNC_IMPL(__imp__sub_82389FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389FC0"))) PPC_WEAK_FUNC(sub_82389FC0);
PPC_FUNC_IMPL(__imp__sub_82389FC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r10,216(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// twllei r9,0
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// divwu r3,r11,r9
	ctx.r3.u32 = ctx.r11.u32 / ctx.r9.u32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389FE0"))) PPC_WEAK_FUNC(sub_82389FE0);
PPC_FUNC_IMPL(__imp__sub_82389FE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r10,232(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8238a000
	if (ctx.cr6.lt) goto loc_8238A000;
	// lwz r9,224(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8238a004
	goto loc_8238A004;
loc_8238A000:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8238A004:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r4,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subfze r3,r10
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A014"))) PPC_WEAK_FUNC(sub_8238A014);
PPC_FUNC_IMPL(__imp__sub_8238A014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238A018"))) PPC_WEAK_FUNC(sub_8238A018);
PPC_FUNC_IMPL(__imp__sub_8238A018) {
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
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a0a0
	if (ctx.cr6.eq) goto loc_8238A0A0;
	// addi r30,r3,328
	ctx.r30.s64 = ctx.r3.s64 + 328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d218
	ctx.lr = 0x8238A048;
	sub_8237D218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
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
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238a0a0
	if (ctx.cr6.gt) goto loc_8238A0A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x8238A074;
	sub_8237D170(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8238a098
	if (!ctx.cr6.eq) goto loc_8238A098;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x823a9018
	ctx.lr = 0x8238A08C;
	sub_823A9018(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// b 0x8238a0a0
	goto loc_8238A0A0;
loc_8238A098:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_8238A0A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A0B8"))) PPC_WEAK_FUNC(sub_8238A0B8);
PPC_FUNC_IMPL(__imp__sub_8238A0B8) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-32512
	ctx.r11.s64 = ctx.r11.s64 + -32512;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82370088
	ctx.lr = 0x8238A0E8;
	sub_82370088(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82370088
	ctx.lr = 0x8238A0F0;
	sub_82370088(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// bl 0x823a86f8
	ctx.lr = 0x8238A10C;
	sub_823A86F8(ctx, base);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// bl 0x823a8ac0
	ctx.lr = 0x8238A114;
	sub_823A8AC0(ctx, base);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x823a9100
	ctx.lr = 0x8238A11C;
	sub_823A9100(ctx, base);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x823a86f8
	ctx.lr = 0x8238A124;
	sub_823A86F8(ctx, base);
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// bl 0x823a86f8
	ctx.lr = 0x8238A12C;
	sub_823A86F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82389be8
	ctx.lr = 0x8238A134;
	sub_82389BE8(ctx, base);
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

__attribute__((alias("__imp__sub_8238A14C"))) PPC_WEAK_FUNC(sub_8238A14C);
PPC_FUNC_IMPL(__imp__sub_8238A14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238A150"))) PPC_WEAK_FUNC(sub_8238A150);
PPC_FUNC_IMPL(__imp__sub_8238A150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238A158;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8238a234
	if (ctx.cr6.eq) goto loc_8238A234;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8238a234
	if (ctx.cr6.eq) goto loc_8238A234;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8238a234
	if (!ctx.cr6.eq) goto loc_8238A234;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// addi r31,r3,220
	ctx.r31.s64 = ctx.r3.s64 + 220;
	// lwz r10,232(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8238a19c
	if (ctx.cr6.lt) goto loc_8238A19C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x8238a1a8
	goto loc_8238A1A8;
loc_8238A19C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8238A1A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a234
	if (ctx.cr6.eq) goto loc_8238A234;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r10,r10,0,27,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// li r5,8
	ctx.r5.s64 = 8;
	// rlwinm r11,r10,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFE0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a8d50
	ctx.lr = 0x8238A1E0;
	sub_823A8D50(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,27,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8238a1f8
	if (!ctx.cr6.lt) goto loc_8238A1F8;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// b 0x8238a238
	goto loc_8238A238;
loc_8238A1F8:
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358508
	ctx.lr = 0x8238A20C;
	sub_82358508(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,27,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// bl 0x823a8d50
	ctx.lr = 0x8238A224;
	sub_823A8D50(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,27,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// b 0x8238a238
	goto loc_8238A238;
loc_8238A234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238A238:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238A240"))) PPC_WEAK_FUNC(sub_8238A240);
PPC_FUNC_IMPL(__imp__sub_8238A240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8238A248;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a354
	if (ctx.cr6.eq) goto loc_8238A354;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r11,r10,0,27,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF001F;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,16,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFE0;
	// sth r28,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r28.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8238a354
	if (ctx.cr6.eq) goto loc_8238A354;
	// addi r30,r3,208
	ctx.r30.s64 = ctx.r3.s64 + 208;
loc_8238A288:
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a8a28
	ctx.lr = 0x8238A298;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358508
	ctx.lr = 0x8238A2A8;
	sub_82358508(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,27,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x8238a2d0
	if (!ctx.cr6.lt) goto loc_8238A2D0;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8238a348
	if (ctx.cr6.lt) goto loc_8238A348;
loc_8238A2D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8a28
	ctx.lr = 0x8238A2DC;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358508
	ctx.lr = 0x8238A2EC;
	sub_82358508(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x823a8a28
	ctx.lr = 0x8238A304;
	sub_823A8A28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82358508
	ctx.lr = 0x8238A310;
	sub_82358508(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8a28
	ctx.lr = 0x8238A31C;
	sub_823A8A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823aa900
	ctx.lr = 0x8238A32C;
	sub_823AA900(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8238a360
	if (ctx.cr0.lt) goto loc_8238A360;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a8850
	ctx.lr = 0x8238A344;
	sub_823A8850(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8238A348:
	// lwz r11,216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x8238a288
	if (ctx.cr6.gt) goto loc_8238A288;
loc_8238A354:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8238A358:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8238A360:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8238a358
	goto loc_8238A358;
}

__attribute__((alias("__imp__sub_8238A368"))) PPC_WEAK_FUNC(sub_8238A368);
PPC_FUNC_IMPL(__imp__sub_8238A368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238A370;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8238a3a4
	if (ctx.cr6.eq) goto loc_8238A3A4;
	// addi r30,r3,236
	ctx.r30.s64 = ctx.r3.s64 + 236;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a93a0
	ctx.lr = 0x8238A398;
	sub_823A93A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823aa358
	ctx.lr = 0x8238A3A4;
	sub_823AA358(ctx, base);
loc_8238A3A4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lfs f31,10412(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10412);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8238a468
	if (ctx.cr6.eq) goto loc_8238A468;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8238a414
	if (ctx.cr6.eq) goto loc_8238A414;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8238a3f0
	if (ctx.cr6.eq) goto loc_8238A3F0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8238a4b8
	if (!ctx.cr6.eq) goto loc_8238A4B8;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238a3e4
	if (!ctx.cr6.eq) goto loc_8238A3E4;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_8238A3E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238a018
	ctx.lr = 0x8238A3EC;
	sub_8238A018(ctx, base);
	// b 0x8238a4b8
	goto loc_8238A4B8;
loc_8238A3F0:
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a404
	if (ctx.cr6.eq) goto loc_8238A404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823aaa08
	ctx.lr = 0x8238A404;
	sub_823AAA08(ctx, base);
loc_8238A404:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x823aa538
	ctx.lr = 0x8238A410;
	sub_823AA538(ctx, base);
	// b 0x8238a3e4
	goto loc_8238A3E4;
loc_8238A414:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwinm r29,r11,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r29,1000
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1000, ctx.xer);
	// bge cr6,0x8238a428
	if (!ctx.cr6.lt) goto loc_8238A428;
	// li r29,1000
	ctx.r29.s64 = 1000;
loc_8238A428:
	// addi r30,r31,340
	ctx.r30.s64 = ctx.r31.s64 + 340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d218
	ctx.lr = 0x8238A434;
	sub_8237D218(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8238a468
	if (ctx.cr6.lt) goto loc_8238A468;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238A45C;
	sub_8237D130(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x823a9750
	ctx.lr = 0x8238A468;
	sub_823A9750(ctx, base);
loc_8238A468:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a4b8
	if (ctx.cr6.eq) goto loc_8238A4B8;
	// addi r30,r31,328
	ctx.r30.s64 = ctx.r31.s64 + 328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d218
	ctx.lr = 0x8238A480;
	sub_8237D218(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8238a4b8
	if (ctx.cr6.lt) goto loc_8238A4B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d170
	ctx.lr = 0x8238A4A8;
	sub_8237D170(ctx, base);
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// bl 0x8237d170
	ctx.lr = 0x8238A4B0;
	sub_8237D170(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_8238A4B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238A4C4"))) PPC_WEAK_FUNC(sub_8238A4C4);
PPC_FUNC_IMPL(__imp__sub_8238A4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238A4C8"))) PPC_WEAK_FUNC(sub_8238A4C8);
PPC_FUNC_IMPL(__imp__sub_8238A4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8238A4D0;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8238a610
	if (ctx.cr6.eq) goto loc_8238A610;
	// addi r27,r3,236
	ctx.r27.s64 = ctx.r3.s64 + 236;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a9018
	ctx.lr = 0x8238A4F4;
	sub_823A9018(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r31,208
	ctx.r29.s64 = ctx.r31.s64 + 208;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x823a8850
	ctx.lr = 0x8238A510;
	sub_823A8850(ctx, base);
	// addi r4,r30,208
	ctx.r4.s64 = ctx.r30.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a87a0
	ctx.lr = 0x8238A51C;
	sub_823A87A0(ctx, base);
	// addi r29,r31,220
	ctx.r29.s64 = ctx.r31.s64 + 220;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8bf0
	ctx.lr = 0x8238A528;
	sub_823A8BF0(ctx, base);
	// addi r4,r30,220
	ctx.r4.s64 = ctx.r30.s64 + 220;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a8b30
	ctx.lr = 0x8238A534;
	sub_823A8B30(ctx, base);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// bl 0x82370360
	ctx.lr = 0x8238A54C;
	sub_82370360(ctx, base);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82370360
	ctx.lr = 0x8238A558;
	sub_82370360(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82358508
	ctx.lr = 0x8238A568;
	sub_82358508(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82358508
	ctx.lr = 0x8238A578;
	sub_82358508(ctx, base);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// addi r4,r30,172
	ctx.r4.s64 = ctx.r30.s64 + 172;
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// bl 0x82389b20
	ctx.lr = 0x8238A5A4;
	sub_82389B20(ctx, base);
	// addi r28,r30,236
	ctx.r28.s64 = ctx.r30.s64 + 236;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823a8f90
	ctx.lr = 0x8238A5B4;
	sub_823A8F90(ctx, base);
	// lwz r11,352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// bl 0x82370228
	ctx.lr = 0x8238A5C4;
	sub_82370228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x823aac80
	ctx.lr = 0x8238A5D4;
	sub_823AAC80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8238a610
	if (ctx.cr0.eq) goto loc_8238A610;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8238a5f4
	goto loc_8238A5F4;
loc_8238A5E4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8238a5fc
	if (ctx.cr6.eq) goto loc_8238A5FC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8238A5F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238a5e4
	if (!ctx.cr6.eq) goto loc_8238A5E4;
loc_8238A5FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a610
	if (ctx.cr6.eq) goto loc_8238A610;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823a9010
	ctx.lr = 0x8238A610;
	sub_823A9010(ctx, base);
loc_8238A610:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238A61C"))) PPC_WEAK_FUNC(sub_8238A61C);
PPC_FUNC_IMPL(__imp__sub_8238A61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238A620"))) PPC_WEAK_FUNC(sub_8238A620);
PPC_FUNC_IMPL(__imp__sub_8238A620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8238A628;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823ab790
	ctx.lr = 0x8238A63C;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,-32496
	ctx.r9.s64 = ctx.r11.s64 + -32496;
	// addi r8,r10,-32508
	ctx.r8.s64 = ctx.r10.s64 + -32508;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8238A670;
	sub_823A86F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// bl 0x8235bf58
	ctx.lr = 0x8238A690;
	sub_8235BF58(ctx, base);
	// bl 0x8235c0d8
	ctx.lr = 0x8238A694;
	sub_8235C0D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8238A69C;
	sub_82355AB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355ac0
	ctx.lr = 0x8238A6A8;
	sub_82355AC0(ctx, base);
	// add r4,r28,r3
	ctx.r4.u64 = ctx.r28.u64 + ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab120
	ctx.lr = 0x8238A6B4;
	sub_823AB120(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8238A6BC;
	sub_823A86F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238A6C4;
	sub_8237D130(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8238A6D0"))) PPC_WEAK_FUNC(sub_8238A6D0);
PPC_FUNC_IMPL(__imp__sub_8238A6D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8238a930
	if (ctx.cr6.gt) {
		// ERROR 8238A930
		return;
	}
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8238a818
	// bdzf 4*cr6+eq,0x8238a6f4
	// bdzf 4*cr6+eq,0x8238a6f4
	// bne cr6,0x8238a6f4
	if (!ctx.cr6.eq) goto loc_8238A6F4;
loc_8238A6F4:
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238a778
	if (ctx.cr6.gt) {
		sub_8238A778(ctx, base);
		return;
	}
	// beq cr6,0x8238a930
	if (ctx.cr6.eq) {
		// ERROR 8238A930
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8238a928
	if (ctx.cr6.gt) {
		// ERROR 8238A928
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-22736
	ctx.r12.s64 = ctx.r12.s64 + -22736;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8238A730"))) PPC_WEAK_FUNC(sub_8238A730);
PPC_FUNC_IMPL(__imp__sub_8238A730) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22692(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22692);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238a930
	if (ctx.cr6.eq) {
		// ERROR 8238A930
		return;
	}
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A778"))) PPC_WEAK_FUNC(sub_8238A778);
PPC_FUNC_IMPL(__imp__sub_8238A778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238a7e0
	if (ctx.cr6.gt) {
		// ERROR 8238A7E0
		return;
	}
	// beq cr6,0x8238a930
	if (ctx.cr6.eq) {
		// ERROR 8238A930
		return;
	}
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8238a928
	if (ctx.cr6.gt) {
		// ERROR 8238A928
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-22604
	ctx.r12.s64 = ctx.r12.s64 + -22604;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8238A7B4"))) PPC_WEAK_FUNC(sub_8238A7B4);
PPC_FUNC_IMPL(__imp__sub_8238A7B4) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8238a928
	if (ctx.cr6.gt) {
		// ERROR 8238A928
		return;
	}
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238a930
	if (ctx.cr6.eq) {
		// ERROR 8238A930
		return;
	}
	// bdz 0x8238a928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238A928;
	// bdz 0x8238a928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238A928;
	// bdz 0x8238a928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238A928;
	// bdz 0x8238a928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238A928;
	// bdz 0x8238a930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238A930;
	// bdz 0x8238a930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238A930;
	// b 0x8238a928
	// ERROR 8238A928
	return;
    loc_8238A928:
        ;
    loc_8238A930:
        ;
}

__attribute__((alias("__imp__sub_8238A818"))) PPC_WEAK_FUNC(sub_8238A818);
PPC_FUNC_IMPL(__imp__sub_8238A818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238a880
	if (ctx.cr6.gt) {
		// ERROR 8238A880
		return;
	}
	// beq cr6,0x8238a928
	if (ctx.cr6.eq) {
		// ERROR 8238A928
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8238a928
	if (ctx.cr6.gt) {
		// ERROR 8238A928
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-22444
	ctx.r12.s64 = ctx.r12.s64 + -22444;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8238A854"))) PPC_WEAK_FUNC(sub_8238A854);
PPC_FUNC_IMPL(__imp__sub_8238A854) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22224(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22224);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238a8e8
	if (ctx.cr6.gt) {
		// ERROR 8238A8E8
		return;
	}
	// beq cr6,0x8238a930
	if (ctx.cr6.eq) {
		// ERROR 8238A930
		return;
	}
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8238a928
	if (ctx.cr6.gt) {
		// ERROR 8238A928
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-22340
	ctx.r12.s64 = ctx.r12.s64 + -22340;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8238A8BC"))) PPC_WEAK_FUNC(sub_8238A8BC);
PPC_FUNC_IMPL(__imp__sub_8238A8BC) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-22244(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22244);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22244(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22244);
	// lwz r17,-22244(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22244);
	// lwz r17,-22244(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22244);
	// lwz r17,-22232(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22232);
	// lwz r17,-22244(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22244);
	// lwz r17,-22244(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -22244);
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8238a928
	if (ctx.cr6.gt) goto loc_8238A928;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238a930
	if (ctx.cr6.eq) goto loc_8238A930;
	// bdz 0x8238a928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238A928;
	// bdz 0x8238a928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238A928;
	// bdz 0x8238a928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238A928;
	// bdz 0x8238a928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238A928;
	// bdz 0x8238a930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238A930;
	// bdnz 0x8238a928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238A928;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8238A928:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_8238A930:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A938"))) PPC_WEAK_FUNC(sub_8238A938);
PPC_FUNC_IMPL(__imp__sub_8238A938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8238A940;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235b1f8
	ctx.lr = 0x8238A950;
	sub_8235B1F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8238A958;
	sub_8235BF58(ctx, base);
	// bl 0x82362380
	ctx.lr = 0x8238A95C;
	sub_82362380(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ab0f8
	ctx.lr = 0x8238A968;
	sub_823AB0F8(ctx, base);
	// addi r3,r29,68
	ctx.r3.s64 = ctx.r29.s64 + 68;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238A974;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// blt cr6,0x8238a9ec
	if (ctx.cr6.lt) goto loc_8238A9EC;
	// bl 0x8235bab0
	ctx.lr = 0x8238A984;
	sub_8235BAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238a9f8
	if (!ctx.cr6.eq) goto loc_8238A9F8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8238A994:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823623e8
	ctx.lr = 0x8238A9A0;
	sub_823623E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238a9ac
	if (ctx.cr6.eq) goto loc_8238A9AC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8238A9AC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 30, ctx.xer);
	// blt cr6,0x8238a994
	if (ctx.cr6.lt) goto loc_8238A994;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235bb70
	ctx.lr = 0x8238A9C0;
	sub_8235BB70(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8238a9f8
	if (ctx.cr6.lt) goto loc_8238A9F8;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a9e8
	if (ctx.cr6.eq) goto loc_8238A9E8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238A9E8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8238A9EC:
	// bl 0x8235bb98
	ctx.lr = 0x8238A9F0;
	sub_8235BB98(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
loc_8238A9F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238AA04"))) PPC_WEAK_FUNC(sub_8238AA04);
PPC_FUNC_IMPL(__imp__sub_8238AA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AA08"))) PPC_WEAK_FUNC(sub_8238AA08);
PPC_FUNC_IMPL(__imp__sub_8238AA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238AA10;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235b1f8
	ctx.lr = 0x8238AA20;
	sub_8235B1F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,10184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823ab0f0
	ctx.lr = 0x8238AA34;
	sub_823AB0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// bl 0x823ab0f8
	ctx.lr = 0x8238AA40;
	sub_823AB0F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238AA4C;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8238aa7c
	if (!ctx.cr6.lt) goto loc_8238AA7C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238AA68;
	sub_823AB100(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238AA7C:
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235b4c8
	ctx.lr = 0x8238AA8C;
	sub_8235B4C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238aab0
	if (!ctx.cr6.eq) goto loc_8238AAB0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238AAB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8238AAB8;
	sub_823A86F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238AAC0;
	sub_8237D130(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238AAD4"))) PPC_WEAK_FUNC(sub_8238AAD4);
PPC_FUNC_IMPL(__imp__sub_8238AAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AAD8"))) PPC_WEAK_FUNC(sub_8238AAD8);
PPC_FUNC_IMPL(__imp__sub_8238AAD8) {
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
	// addi r30,r3,68
	ctx.r30.s64 = ctx.r3.s64 + 68;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8238AAFC;
	sub_823A86F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238AB04;
	sub_8237D130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,10184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10184);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823ab0f0
	ctx.lr = 0x8238AB14;
	sub_823AB0F0(ctx, base);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238AB34"))) PPC_WEAK_FUNC(sub_8238AB34);
PPC_FUNC_IMPL(__imp__sub_8238AB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AB38"))) PPC_WEAK_FUNC(sub_8238AB38);
PPC_FUNC_IMPL(__imp__sub_8238AB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238AB40;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235b1f8
	ctx.lr = 0x8238AB50;
	sub_8235B1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// bl 0x823ab0f8
	ctx.lr = 0x8238AB60;
	sub_823AB0F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238AB6C;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8238ab90
	if (!ctx.cr6.lt) goto loc_8238AB90;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238AB88;
	sub_823AB100(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8238AB90:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238aba8
	if (ctx.cr6.eq) goto loc_8238ABA8;
	// bl 0x8235b478
	ctx.lr = 0x8238ABA4;
	sub_8235B478(ctx, base);
	// b 0x8238abac
	goto loc_8238ABAC;
loc_8238ABA8:
	// bl 0x8235b450
	ctx.lr = 0x8238ABAC;
	sub_8235B450(ctx, base);
loc_8238ABAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238abcc
	if (ctx.cr6.eq) goto loc_8238ABCC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8238ABBC;
	sub_823A86F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238ABC4;
	sub_8237D130(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8238ABCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238ABD8"))) PPC_WEAK_FUNC(sub_8238ABD8);
PPC_FUNC_IMPL(__imp__sub_8238ABD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// b 0x823ab4b8
	sub_823AB4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238ABE4"))) PPC_WEAK_FUNC(sub_8238ABE4);
PPC_FUNC_IMPL(__imp__sub_8238ABE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238ABE8"))) PPC_WEAK_FUNC(sub_8238ABE8);
PPC_FUNC_IMPL(__imp__sub_8238ABE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8238abf0
	sub_8238ABF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238ABF0"))) PPC_WEAK_FUNC(sub_8238ABF0);
PPC_FUNC_IMPL(__imp__sub_8238ABF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r9,r11,-32496
	ctx.r9.s64 = ctx.r11.s64 + -32496;
	// addi r8,r10,-32508
	ctx.r8.s64 = ctx.r10.s64 + -32508;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab568
	ctx.lr = 0x8238AC2C;
	sub_823AB568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x8238AC34;
	sub_823AB4E8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238ac4c
	if (ctx.cr6.eq) goto loc_8238AC4C;
	// bl 0x82357128
	ctx.lr = 0x8238AC48;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8238AC4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238AC64"))) PPC_WEAK_FUNC(sub_8238AC64);
PPC_FUNC_IMPL(__imp__sub_8238AC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AC68"))) PPC_WEAK_FUNC(sub_8238AC68);
PPC_FUNC_IMPL(__imp__sub_8238AC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238AC70;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238aca4
	if (ctx.cr6.eq) goto loc_8238ACA4;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8238AC94;
	sub_823AB100(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238ACA4:
	// bl 0x8235b1f8
	ctx.lr = 0x8238ACA8;
	sub_8235B1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8238ACB0;
	sub_82362380(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82370538
	ctx.lr = 0x8238ACB8;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238ACBC;
	sub_82370538(ctx, base);
	// bl 0x82370800
	ctx.lr = 0x8238ACC0;
	sub_82370800(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x8238acd8
	if (!ctx.cr6.lt) goto loc_8238ACD8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238ACD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238ACE0;
	sub_8235B9C8(ctx, base);
	// bl 0x8235bf58
	ctx.lr = 0x8238ACE4;
	sub_8235BF58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370538
	ctx.lr = 0x8238ACEC;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238ACF0;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8238ACF4;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c6b8
	ctx.lr = 0x8238AD00;
	sub_8235C6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238ad4c
	if (!ctx.cr6.eq) goto loc_8238AD4C;
	// bl 0x82370538
	ctx.lr = 0x8238AD0C;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238AD10;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8238AD14;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c750
	ctx.lr = 0x8238AD20;
	sub_8235C750(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238ad4c
	if (!ctx.cr6.eq) goto loc_8238AD4C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238AD3C;
	sub_823AB100(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238AD4C:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823639c0
	ctx.lr = 0x8238AD6C;
	sub_823639C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238ad98
	if (!ctx.cr6.eq) goto loc_8238AD98;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238AD88;
	sub_823AB100(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238AD98:
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// bl 0x8237d130
	ctx.lr = 0x8238ADA0;
	sub_8237D130(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238ADB0"))) PPC_WEAK_FUNC(sub_8238ADB0);
PPC_FUNC_IMPL(__imp__sub_8238ADB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238ADB8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235b1f8
	ctx.lr = 0x8238ADC4;
	sub_8235B1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8238ADCC;
	sub_82362380(ctx, base);
	// bl 0x8235bf58
	ctx.lr = 0x8238ADD0;
	sub_8235BF58(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238adec
	if (ctx.cr6.eq) goto loc_8238ADEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b5a8
	ctx.lr = 0x8238ADEC;
	sub_8235B5A8(ctx, base);
loc_8238ADEC:
	// bl 0x82370538
	ctx.lr = 0x8238ADF0;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238ADF4;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8238ADF8;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c750
	ctx.lr = 0x8238AE04;
	sub_8235C750(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238ae20
	if (ctx.cr6.eq) goto loc_8238AE20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b8e8
	ctx.lr = 0x8238AE14;
	sub_8235B8E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// b 0x8238ae4c
	goto loc_8238AE4C;
loc_8238AE20:
	// bl 0x82370538
	ctx.lr = 0x8238AE24;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238AE28;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8238AE2C;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c6b8
	ctx.lr = 0x8238AE38;
	sub_8235C6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238ae84
	if (ctx.cr6.eq) goto loc_8238AE84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b580
	ctx.lr = 0x8238AE48;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
loc_8238AE4C:
	// bne cr6,0x8238aea0
	if (!ctx.cr6.eq) goto loc_8238AEA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b998
	ctx.lr = 0x8238AE58;
	sub_8235B998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238ae74
	if (ctx.cr6.eq) goto loc_8238AE74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238AE68;
	sub_8235B9C8(ctx, base);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// b 0x8238ae8c
	goto loc_8238AE8C;
loc_8238AE74:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238AE84:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_8238AE8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238AE98;
	sub_823AB100(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8238AEA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238AEA8"))) PPC_WEAK_FUNC(sub_8238AEA8);
PPC_FUNC_IMPL(__imp__sub_8238AEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8238AEB0;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235b1f8
	ctx.lr = 0x8238AEC0;
	sub_8235B1F8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8235b580
	ctx.lr = 0x8238AEC8;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238b0ac
	if (!ctx.cr6.eq) goto loc_8238B0AC;
	// bl 0x8235bf58
	ctx.lr = 0x8238AED4;
	sub_8235BF58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8238AEDC;
	sub_82362380(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r25,r29,68
	ctx.r25.s64 = ctx.r29.s64 + 68;
	// bl 0x823ab0f8
	ctx.lr = 0x8238AEEC;
	sub_823AB0F8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238AEF8;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8238af14
	if (!ctx.cr6.lt) goto loc_8238AF14;
loc_8238AF00:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8238AF14:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8238AF20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823623e8
	ctx.lr = 0x8238AF2C;
	sub_823623E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238af50
	if (ctx.cr6.eq) goto loc_8238AF50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x8235c6b8
	ctx.lr = 0x8238AF44;
	sub_8235C6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238af50
	if (ctx.cr6.eq) goto loc_8238AF50;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8238AF50:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 30, ctx.xer);
	// blt cr6,0x8238af20
	if (ctx.cr6.lt) goto loc_8238AF20;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8238b064
	if (ctx.cr6.eq) goto loc_8238B064;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x8238b064
	if (ctx.cr6.eq) goto loc_8238B064;
	// bl 0x82370538
	ctx.lr = 0x8238AF70;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238AF74;
	sub_82370538(ctx, base);
	// bl 0x82370800
	ctx.lr = 0x8238AF78;
	sub_82370800(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8238b064
	if (ctx.cr6.eq) goto loc_8238B064;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238afe4
	if (!ctx.cr6.eq) goto loc_8238AFE4;
	// bl 0x8235e950
	ctx.lr = 0x8238AF90;
	sub_8235E950(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82370538
	ctx.lr = 0x8238AF98;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238AF9C;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8238AFA0;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235c750
	ctx.lr = 0x8238AFAC;
	sub_8235C750(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238afd0
	if (ctx.cr6.eq) goto loc_8238AFD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235e970
	ctx.lr = 0x8238AFC0;
	sub_8235E970(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235b640
	ctx.lr = 0x8238AFC8;
	sub_8235B640(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
loc_8238AFD0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8238AFE4:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238b004
	if (ctx.cr6.eq) goto loc_8238B004;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8238B004:
	// lwz r11,3000(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238af00
	if (!ctx.cr6.eq) goto loc_8238AF00;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,253
	ctx.r4.s64 = 253;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235b3a8
	ctx.lr = 0x8238B028;
	sub_8235B3A8(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x8238b0ac
	if (!ctx.cr6.eq) goto loc_8238B0AC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8238B038;
	sub_823A86F8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238B040;
	sub_8237D130(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235b640
	ctx.lr = 0x8238B048;
	sub_8235B640(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
	// stw r10,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8238B064:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235b368
	ctx.lr = 0x8238B06C;
	sub_8235B368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238b0a4
	if (ctx.cr6.eq) goto loc_8238B0A4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238B07C;
	sub_8235B9C8(ctx, base);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238B090;
	sub_823AB100(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8238B0A4:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
loc_8238B0AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8238B0B8"))) PPC_WEAK_FUNC(sub_8238B0B8);
PPC_FUNC_IMPL(__imp__sub_8238B0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8235b1f8
	ctx.lr = 0x8238B0D4;
	sub_8235B1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235b580
	ctx.lr = 0x8238B0DC;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238b1d8
	if (!ctx.cr6.eq) goto loc_8238B1D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b8e8
	ctx.lr = 0x8238B0EC;
	sub_8235B8E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8238b104
	if (ctx.cr6.eq) goto loc_8238B104;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x8238b1d8
	goto loc_8238B1D8;
loc_8238B104:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238B10C;
	sub_8235B9C8(ctx, base);
	// bl 0x82362380
	ctx.lr = 0x8238B110;
	sub_82362380(ctx, base);
	// bl 0x8235bf58
	ctx.lr = 0x8238B114;
	sub_8235BF58(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8238b140
	if (!ctx.cr6.eq) goto loc_8238B140;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238B134;
	sub_823AB100(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x8238b1d8
	goto loc_8238B1D8;
loc_8238B140:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238b1c4
	if (ctx.cr6.eq) goto loc_8238B1C4;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bne cr6,0x8238b1c4
	if (!ctx.cr6.eq) goto loc_8238B1C4;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238b19c
	if (ctx.cr6.eq) goto loc_8238B19C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b368
	ctx.lr = 0x8238B16C;
	sub_8235B368(ctx, base);
loc_8238B16C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238b1b8
	if (ctx.cr6.eq) goto loc_8238B1B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238B17C;
	sub_8235B9C8(ctx, base);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238B190;
	sub_823AB100(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x8238b1d8
	goto loc_8238B1D8;
loc_8238B19C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8238b1b0
	if (!ctx.cr6.eq) goto loc_8238B1B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b328
	ctx.lr = 0x8238B1AC;
	sub_8235B328(ctx, base);
	// b 0x8238b16c
	goto loc_8238B16C;
loc_8238B1B0:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8238B1B8:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x8238b1d8
	goto loc_8238B1D8;
loc_8238B1C4:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238B1D8;
	sub_823AB100(ctx, base);
loc_8238B1D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238B1F0"))) PPC_WEAK_FUNC(sub_8238B1F0);
PPC_FUNC_IMPL(__imp__sub_8238B1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8238B1F8;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235b1f8
	ctx.lr = 0x8238B204;
	sub_8235B1F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8238B20C;
	sub_82362380(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8238B214;
	sub_8235BF58(ctx, base);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238b2cc
	if (ctx.cr6.eq) goto loc_8238B2CC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8238b2cc
	if (!ctx.cr6.eq) goto loc_8238B2CC;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8238b254
	if (!ctx.cr6.eq) goto loc_8238B254;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235b8e8
	ctx.lr = 0x8238B244;
	sub_8235B8E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8238b2e0
	if (ctx.cr6.eq) goto loc_8238B2E0;
	// b 0x8238b26c
	goto loc_8238B26C;
loc_8238B254:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8238b26c
	if (!ctx.cr6.eq) goto loc_8238B26C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235b580
	ctx.lr = 0x8238B264;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238b2e0
	if (!ctx.cr6.eq) goto loc_8238B2E0;
loc_8238B26C:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238b288
	if (ctx.cr6.eq) goto loc_8238B288;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c270
	ctx.lr = 0x8238B288;
	sub_8235C270(ctx, base);
loc_8238B288:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235b998
	ctx.lr = 0x8238B290;
	sub_8235B998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238b2a0
	if (ctx.cr6.eq) goto loc_8238B2A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238B2A0;
	sub_8235B9C8(ctx, base);
loc_8238B2A0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8238b2bc
	if (ctx.cr6.eq) goto loc_8238B2BC;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238b2bc
	if (ctx.cr6.eq) goto loc_8238B2BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82363050
	ctx.lr = 0x8238B2BC;
	sub_82363050(ctx, base);
loc_8238B2BC:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238B2CC:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238B2E0;
	sub_823AB100(ctx, base);
loc_8238B2E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238B2E8"))) PPC_WEAK_FUNC(sub_8238B2E8);
PPC_FUNC_IMPL(__imp__sub_8238B2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238b350
	if (ctx.cr6.eq) goto loc_8238B350;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x8238b350
	if (!ctx.cr6.eq) goto loc_8238B350;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238b330
	if (ctx.cr6.eq) goto loc_8238B330;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// b 0x8238b364
	goto loc_8238B364;
loc_8238B330:
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8238B33C;
	sub_823A86F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238B344;
	sub_8237D130(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x8238b364
	goto loc_8238B364;
loc_8238B350:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238B364;
	sub_823AB100(ctx, base);
loc_8238B364:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238B37C"))) PPC_WEAK_FUNC(sub_8238B37C);
PPC_FUNC_IMPL(__imp__sub_8238B37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B380"))) PPC_WEAK_FUNC(sub_8238B380);
PPC_FUNC_IMPL(__imp__sub_8238B380) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82362380
	ctx.lr = 0x8238B3A8;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238b3cc
	if (!ctx.cr6.eq) goto loc_8238B3CC;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238B3C8;
	sub_823AB100(ctx, base);
	// b 0x8238b43c
	goto loc_8238B43C;
loc_8238B3CC:
	// bl 0x8235bf58
	ctx.lr = 0x8238B3D0;
	sub_8235BF58(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8235c228
	ctx.lr = 0x8238B3D8;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238b43c
	if (ctx.cr6.eq) goto loc_8238B43C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238b43c
	if (ctx.cr6.eq) goto loc_8238B43C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238b43c
	if (!ctx.cr6.eq) goto loc_8238B43C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab0f8
	ctx.lr = 0x8238B400;
	sub_823AB0F8(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238B40C;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// blt cr6,0x8238b43c
	if (ctx.cr6.lt) goto loc_8238B43C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823639c0
	ctx.lr = 0x8238B434;
	sub_823639C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238b444
	if (ctx.cr6.eq) goto loc_8238B444;
loc_8238B43C:
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8238B444:
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

__attribute__((alias("__imp__sub_8238B460"))) PPC_WEAK_FUNC(sub_8238B460);
PPC_FUNC_IMPL(__imp__sub_8238B460) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8235b1f8
	ctx.lr = 0x8238B480;
	sub_8235B1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8238B488;
	sub_82362380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab0f8
	ctx.lr = 0x8238B490;
	sub_823AB0F8(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238B49C;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8238b4c0
	if (!ctx.cr6.lt) goto loc_8238B4C0;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238B4B8;
	sub_823AB100(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x8238b4ec
	goto loc_8238B4EC;
loc_8238B4C0:
	// bl 0x82370538
	ctx.lr = 0x8238B4C4;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238B4C8;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8238B4CC;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b510
	ctx.lr = 0x8238B4DC;
	sub_8235B510(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8238b4f0
	if (!ctx.cr6.eq) goto loc_8238B4F0;
	// li r11,13
	ctx.r11.s64 = 13;
loc_8238B4EC:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8238B4F0:
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

__attribute__((alias("__imp__sub_8238B50C"))) PPC_WEAK_FUNC(sub_8238B50C);
PPC_FUNC_IMPL(__imp__sub_8238B50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B510"))) PPC_WEAK_FUNC(sub_8238B510);
PPC_FUNC_IMPL(__imp__sub_8238B510) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x8235b1f8
	ctx.lr = 0x8238B530;
	sub_8235B1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8238B538;
	sub_82362380(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238b560
	if (!ctx.cr6.eq) goto loc_8238B560;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ab100
	ctx.lr = 0x8238B558;
	sub_823AB100(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x8238b5c4
	goto loc_8238B5C4;
loc_8238B560:
	// bl 0x823ab0f8
	ctx.lr = 0x8238B564;
	sub_823AB0F8(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238B570;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8238b594
	if (!ctx.cr6.lt) goto loc_8238B594;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238B58C;
	sub_823AB100(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x8238b5c4
	goto loc_8238B5C4;
loc_8238B594:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238b5b4
	if (ctx.cr6.eq) goto loc_8238B5B4;
	// bl 0x8235b4a0
	ctx.lr = 0x8238B5A8;
	sub_8235B4A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238b5c8
	if (!ctx.cr6.eq) goto loc_8238B5C8;
	// b 0x8238b5c0
	goto loc_8238B5C0;
loc_8238B5B4:
	// bl 0x8235b4a0
	ctx.lr = 0x8238B5B8;
	sub_8235B4A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238b5c8
	if (ctx.cr6.eq) goto loc_8238B5C8;
loc_8238B5C0:
	// li r11,17
	ctx.r11.s64 = 17;
loc_8238B5C4:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_8238B5C8:
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

__attribute__((alias("__imp__sub_8238B5E4"))) PPC_WEAK_FUNC(sub_8238B5E4);
PPC_FUNC_IMPL(__imp__sub_8238B5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B5E8"))) PPC_WEAK_FUNC(sub_8238B5E8);
PPC_FUNC_IMPL(__imp__sub_8238B5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8238B5F0;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8238B5FC;
	sub_8235BF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238b6a0
	if (ctx.cr6.eq) goto loc_8238B6A0;
	// bl 0x82362380
	ctx.lr = 0x8238B60C;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238b6a0
	if (ctx.cr6.eq) goto loc_8238B6A0;
	// bl 0x82370538
	ctx.lr = 0x8238B618;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238B61C;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8238B620;
	sub_823708C0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235c750
	ctx.lr = 0x8238B638;
	sub_8235C750(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238b654
	if (ctx.cr6.eq) goto loc_8238B654;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8238B654:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c6b8
	ctx.lr = 0x8238B660;
	sub_8235C6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238b67c
	if (ctx.cr6.eq) goto loc_8238B67C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8238B67C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c7e8
	ctx.lr = 0x8238B688;
	sub_8235C7E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238b6a0
	if (ctx.cr6.eq) goto loc_8238B6A0;
	// stw r28,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8238B6A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8238B6AC"))) PPC_WEAK_FUNC(sub_8238B6AC);
PPC_FUNC_IMPL(__imp__sub_8238B6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B6B0"))) PPC_WEAK_FUNC(sub_8238B6B0);
PPC_FUNC_IMPL(__imp__sub_8238B6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,872
	ctx.r31.s64 = ctx.r3.s64 + 872;
	// lwz r3,876(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 876);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x8238b6e4
	if (ctx.cr6.eq) goto loc_8238B6E4;
	// bl 0x82357240
	ctx.lr = 0x8238B6E0;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8238B6E4:
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

__attribute__((alias("__imp__sub_8238B704"))) PPC_WEAK_FUNC(sub_8238B704);
PPC_FUNC_IMPL(__imp__sub_8238B704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B708"))) PPC_WEAK_FUNC(sub_8238B708);
PPC_FUNC_IMPL(__imp__sub_8238B708) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238b734
	if (ctx.cr6.eq) goto loc_8238B734;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// b 0x8238b830
	goto loc_8238B830;
loc_8238B734:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238b828
	if (ctx.cr6.eq) goto loc_8238B828;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8238b828
	if (!ctx.cr6.eq) goto loc_8238B828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238b5e8
	ctx.lr = 0x8238B754;
	sub_8238B5E8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8238b828
	if (ctx.cr6.gt) goto loc_8238B828;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8238b798
	// bdzf 4*cr6+eq,0x8238b7b8
	// bdzf 4*cr6+eq,0x8238b7e8
	// bne cr6,0x8238b7f0
	if (!ctx.cr6.eq) goto loc_8238B7F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8238B798:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8238B7B8:
	// li r11,11
	ctx.r11.s64 = 11;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,11084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823ab0f0
	ctx.lr = 0x8238B7D0;
	sub_823AB0F0(ctx, base);
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
loc_8238B7E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8238b7f4
	goto loc_8238B7F4;
loc_8238B7F0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8238B7F4:
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,11084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11084);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823ab0f0
	ctx.lr = 0x8238B810;
	sub_823AB0F0(ctx, base);
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
loc_8238B828:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
loc_8238B830:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238B83C;
	sub_823AB100(ctx, base);
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

__attribute__((alias("__imp__sub_8238B854"))) PPC_WEAK_FUNC(sub_8238B854);
PPC_FUNC_IMPL(__imp__sub_8238B854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B858"))) PPC_WEAK_FUNC(sub_8238B858);
PPC_FUNC_IMPL(__imp__sub_8238B858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8238B860;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8238B86C;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,872
	ctx.r31.s64 = ctx.r3.s64 + 872;
	// lwz r3,876(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 876);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,880(r28)
	PPC_STORE_U32(ctx.r28.u32 + 880, ctx.r30.u32);
	// beq cr6,0x8238b890
	if (ctx.cr6.eq) goto loc_8238B890;
	// bl 0x82357240
	ctx.lr = 0x8238B88C;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8238B890:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238b8fc
	if (!ctx.cr6.eq) goto loc_8238B8FC;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8238b8ec
	if (ctx.cr6.lt) goto loc_8238B8EC;
	// beq cr6,0x8238b8d4
	if (ctx.cr6.eq) goto loc_8238B8D4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8238b8fc
	if (!ctx.cr6.lt) goto loc_8238B8FC;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c270
	ctx.lr = 0x8238B8CC;
	sub_8235C270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8238B8D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c270
	ctx.lr = 0x8238B8E4;
	sub_8235C270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8238B8EC:
	// li r4,3
	ctx.r4.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c270
	ctx.lr = 0x8238B8FC;
	sub_8235C270(ctx, base);
loc_8238B8FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8238B904"))) PPC_WEAK_FUNC(sub_8238B904);
PPC_FUNC_IMPL(__imp__sub_8238B904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B908"))) PPC_WEAK_FUNC(sub_8238B908);
PPC_FUNC_IMPL(__imp__sub_8238B908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248778
	ctx.lr = 0x8238B910;
	sub_82248778(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8235b1f8
	ctx.lr = 0x8238B920;
	sub_8235B1F8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8238B928;
	sub_82362380(ctx, base);
	// bl 0x8235bf58
	ctx.lr = 0x8238B92C;
	sub_8235BF58(ctx, base);
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x8238b964
	if (ctx.cr6.eq) goto loc_8238B964;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8238B950;
	sub_823AB100(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8238B964:
	// bl 0x823ab0f8
	ctx.lr = 0x8238B968;
	sub_823AB0F8(ctx, base);
	// addi r3,r26,68
	ctx.r3.s64 = ctx.r26.s64 + 68;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238B974;
	sub_8237D218(ctx, base);
	// li r25,18
	ctx.r25.s64 = 18;
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8238b9a0
	if (!ctx.cr6.lt) goto loc_8238B9A0;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238B994;
	sub_823AB100(ctx, base);
	// stw r25,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238b6b0
	ctx.lr = 0x8238B9A0;
	sub_8238B6B0(ctx, base);
loc_8238B9A0:
	// lwz r11,840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238b9fc
	if (ctx.cr6.eq) goto loc_8238B9FC;
	// lwz r8,836(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8238B9C4:
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,132
	ctx.r10.s64 = ctx.r11.s64 + 132;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8238b9e8
	if (!ctx.cr6.eq) goto loc_8238B9E8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8238B9E8:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8238b9f4
	if (!ctx.cr6.eq) goto loc_8238B9F4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8238B9F4:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8238b9c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238B9C4;
loc_8238B9FC:
	// lwz r10,880(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// lwz r11,820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8238bb34
	if (ctx.cr6.lt) goto loc_8238BB34;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ba50
	if (ctx.cr6.eq) goto loc_8238BA50;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8238BA20:
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8235c6b8
	ctx.lr = 0x8238BA30;
	sub_8235C6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238ba3c
	if (ctx.cr6.eq) goto loc_8238BA3C;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_8238BA3C:
	// lwz r11,820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8238ba20
	if (ctx.cr6.lt) goto loc_8238BA20;
loc_8238BA50:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// bge cr6,0x8238ba80
	if (!ctx.cr6.lt) goto loc_8238BA80;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238BA6C;
	sub_823AB100(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8238BA80:
	// lwz r3,876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	// addi r30,r31,872
	ctx.r30.s64 = ctx.r31.s64 + 872;
	// stw r27,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238ba9c
	if (ctx.cr6.eq) goto loc_8238BA9C;
	// bl 0x82357240
	ctx.lr = 0x8238BA98;
	sub_82357240(ctx, base);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
loc_8238BA9C:
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// bl 0x82370538
	ctx.lr = 0x8238BAA8;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238BAAC;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8238BAB0;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c6b8
	ctx.lr = 0x8238BABC;
	sub_8235C6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238bae8
	if (ctx.cr6.eq) goto loc_8238BAE8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235b2e8
	ctx.lr = 0x8238BACC;
	sub_8235B2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238bb08
	if (ctx.cr6.eq) goto loc_8238BB08;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238BADC;
	sub_8235B9C8(ctx, base);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x8238bb24
	goto loc_8238BB24;
loc_8238BAE8:
	// bl 0x82370538
	ctx.lr = 0x8238BAEC;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238BAF0;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8238BAF4;
	sub_823708C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c750
	ctx.lr = 0x8238BB00;
	sub_8235C750(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238bb1c
	if (ctx.cr6.eq) goto loc_8238BB1C;
loc_8238BB08:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
loc_8238BB1C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
loc_8238BB24:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238BB30;
	sub_823AB100(ctx, base);
	// stw r25,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r25.u32);
loc_8238BB34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822487c8
	// ERROR 822487C8
	return;
}

__attribute__((alias("__imp__sub_8238BB40"))) PPC_WEAK_FUNC(sub_8238BB40);
PPC_FUNC_IMPL(__imp__sub_8238BB40) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bgt cr6,0x8238bc44
	if (ctx.cr6.gt) goto loc_8238BC44;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17540
	ctx.r12.s64 = ctx.r12.s64 + -17540;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-17468(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17468);
	// lwz r17,-17460(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17460);
	// lwz r17,-17452(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17452);
	// lwz r17,-17444(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17444);
	// lwz r17,-17432(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17432);
	// lwz r17,-17424(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17424);
	// lwz r17,-17416(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17416);
	// lwz r17,-17408(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17408);
	// lwz r17,-17400(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17400);
	// lwz r17,-17392(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17392);
	// lwz r17,-17384(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17384);
	// lwz r17,-17376(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17376);
	// lwz r17,-17444(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17444);
	// lwz r17,-17368(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17368);
	// lwz r17,-17360(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17360);
	// lwz r17,-17352(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17352);
	// lwz r17,-17444(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17444);
	// lwz r17,-17344(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17344);
	// bl 0x8238ac68
	ctx.lr = 0x8238BBC8;
	sub_8238AC68(ctx, base);
	// b 0x8238bc44
	goto loc_8238BC44;
	// bl 0x8238b908
	ctx.lr = 0x8238BBD0;
	sub_8238B908(ctx, base);
	// b 0x8238bc44
	goto loc_8238BC44;
	// bl 0x8238adb0
	ctx.lr = 0x8238BBD8;
	sub_8238ADB0(ctx, base);
	// b 0x8238bc44
	goto loc_8238BC44;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// b 0x8238bc44
	goto loc_8238BC44;
	// bl 0x8238aea8
	ctx.lr = 0x8238BBEC;
	sub_8238AEA8(ctx, base);
	// b 0x8238bc44
	goto loc_8238BC44;
	// bl 0x8238a938
	ctx.lr = 0x8238BBF4;
	sub_8238A938(ctx, base);
	// b 0x8238bc44
	goto loc_8238BC44;
	// bl 0x8238b0b8
	ctx.lr = 0x8238BBFC;
	sub_8238B0B8(ctx, base);
	// b 0x8238bc44
	goto loc_8238BC44;
	// bl 0x8238b1f0
	ctx.lr = 0x8238BC04;
	sub_8238B1F0(ctx, base);
	// b 0x8238bc44
	goto loc_8238BC44;
	// bl 0x8238b2e8
	ctx.lr = 0x8238BC0C;
	sub_8238B2E8(ctx, base);
	// b 0x8238bc44
	goto loc_8238BC44;
	// bl 0x8238b380
	ctx.lr = 0x8238BC14;
	sub_8238B380(ctx, base);
	// b 0x8238bc44
	goto loc_8238BC44;
	// bl 0x8238aa08
	ctx.lr = 0x8238BC1C;
	sub_8238AA08(ctx, base);
	// b 0x8238bc44
	goto loc_8238BC44;
	// bl 0x8238b460
	ctx.lr = 0x8238BC24;
	sub_8238B460(ctx, base);
	// b 0x8238bc44
	goto loc_8238BC44;
	// bl 0x8238aad8
	ctx.lr = 0x8238BC2C;
	sub_8238AAD8(ctx, base);
	// b 0x8238bc44
	goto loc_8238BC44;
	// bl 0x8238ab38
	ctx.lr = 0x8238BC34;
	sub_8238AB38(ctx, base);
	// b 0x8238bc44
	goto loc_8238BC44;
	// bl 0x8238b510
	ctx.lr = 0x8238BC3C;
	sub_8238B510(ctx, base);
	// b 0x8238bc44
	goto loc_8238BC44;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8238BC44:
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

__attribute__((alias("__imp__sub_8238BC5C"))) PPC_WEAK_FUNC(sub_8238BC5C);
PPC_FUNC_IMPL(__imp__sub_8238BC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238BC60"))) PPC_WEAK_FUNC(sub_8238BC60);
PPC_FUNC_IMPL(__imp__sub_8238BC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8235b1f8
	ctx.lr = 0x8238BC7C;
	sub_8235B1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235b580
	ctx.lr = 0x8238BC84;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238bcbc
	if (!ctx.cr6.eq) goto loc_8238BCBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b998
	ctx.lr = 0x8238BC94;
	sub_8235B998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238bca4
	if (ctx.cr6.eq) goto loc_8238BCA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238BCA4;
	sub_8235B9C8(ctx, base);
loc_8238BCA4:
	// bl 0x8235bf58
	ctx.lr = 0x8238BCA8;
	sub_8235BF58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8235c270
	ctx.lr = 0x8238BCB4;
	sub_8235C270(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_8238BCBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238BCD4"))) PPC_WEAK_FUNC(sub_8238BCD4);
PPC_FUNC_IMPL(__imp__sub_8238BCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238BCD8"))) PPC_WEAK_FUNC(sub_8238BCD8);
PPC_FUNC_IMPL(__imp__sub_8238BCD8) {
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
	// bl 0x82362380
	ctx.lr = 0x8238BCF0;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238bd14
	if (!ctx.cr6.eq) goto loc_8238BD14;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238BD0C;
	sub_823AB100(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8238bd24
	goto loc_8238BD24;
loc_8238BD14:
	// bl 0x82363050
	ctx.lr = 0x8238BD18;
	sub_82363050(ctx, base);
	// bl 0x8235bf58
	ctx.lr = 0x8238BD1C;
	sub_8235BF58(ctx, base);
	// bl 0x8235c218
	ctx.lr = 0x8238BD20;
	sub_8235C218(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
loc_8238BD24:
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238BD3C"))) PPC_WEAK_FUNC(sub_8238BD3C);
PPC_FUNC_IMPL(__imp__sub_8238BD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238BD40"))) PPC_WEAK_FUNC(sub_8238BD40);
PPC_FUNC_IMPL(__imp__sub_8238BD40) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// b 0x823ab4b8
	sub_823AB4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238BD4C"))) PPC_WEAK_FUNC(sub_8238BD4C);
PPC_FUNC_IMPL(__imp__sub_8238BD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238BD50"))) PPC_WEAK_FUNC(sub_8238BD50);
PPC_FUNC_IMPL(__imp__sub_8238BD50) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238BD60"))) PPC_WEAK_FUNC(sub_8238BD60);
PPC_FUNC_IMPL(__imp__sub_8238BD60) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238BD84"))) PPC_WEAK_FUNC(sub_8238BD84);
PPC_FUNC_IMPL(__imp__sub_8238BD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238BD88"))) PPC_WEAK_FUNC(sub_8238BD88);
PPC_FUNC_IMPL(__imp__sub_8238BD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8238BDA4;
	sub_823AB790(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,-32328
	ctx.r9.s64 = ctx.r11.s64 + -32328;
	// addi r8,r10,-32340
	ctx.r8.s64 = ctx.r10.s64 + -32340;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// bl 0x823a86f8
	ctx.lr = 0x8238BDCC;
	sub_823A86F8(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r6,r7,32288
	ctx.r6.s64 = ctx.r7.s64 + 32288;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// bl 0x8235bf58
	ctx.lr = 0x8238BDF0;
	sub_8235BF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8238BDF8;
	sub_82355AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238be10
	if (ctx.cr6.eq) goto loc_8238BE10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235c048
	ctx.lr = 0x8238BE08;
	sub_8235C048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab0f0
	ctx.lr = 0x8238BE10;
	sub_823AB0F0(ctx, base);
loc_8238BE10:
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

__attribute__((alias("__imp__sub_8238BE2C"))) PPC_WEAK_FUNC(sub_8238BE2C);
PPC_FUNC_IMPL(__imp__sub_8238BE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238BE30"))) PPC_WEAK_FUNC(sub_8238BE30);
PPC_FUNC_IMPL(__imp__sub_8238BE30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8238c568
	sub_8238C568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238BE38"))) PPC_WEAK_FUNC(sub_8238BE38);
PPC_FUNC_IMPL(__imp__sub_8238BE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238bef4
	if (ctx.cr6.gt) {
		sub_8238BEF4(ctx, base);
		return;
	}
	// beq cr6,0x8238bf9c
	if (ctx.cr6.eq) {
		// ERROR 8238BF9C
		return;
	}
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8238bf9c
	if (ctx.cr6.gt) {
		// ERROR 8238BF9C
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16780
	ctx.r12.s64 = ctx.r12.s64 + -16780;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8238BE74"))) PPC_WEAK_FUNC(sub_8238BE74);
PPC_FUNC_IMPL(__imp__sub_8238BE74) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-16476(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16476);
	// lwz r17,-16476(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16476);
	// lwz r17,-16476(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16476);
	// lwz r17,-16476(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16476);
	// lwz r17,-16476(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16476);
	// lwz r17,-16484(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16484);
	// lwz r17,-16476(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16476);
	// lwz r17,-16476(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16476);
	// lwz r17,-16736(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16736);
	// lwz r17,-16476(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16476);
	// lwz r17,-16484(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16484);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238beb4
	if (ctx.cr6.eq) goto loc_8238BEB4;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
loc_8238BEB4:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238bfa4
	if (ctx.cr6.eq) {
		// ERROR 8238BFA4
		return;
	}
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8238bee4
	if (ctx.cr6.eq) goto loc_8238BEE4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8238bfa4
	if (!ctx.cr6.eq) {
		// ERROR 8238BFA4
		return;
	}
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8238BEE4:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238BEF4"))) PPC_WEAK_FUNC(sub_8238BEF4);
PPC_FUNC_IMPL(__imp__sub_8238BEF4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238bf5c
	if (ctx.cr6.gt) {
		// ERROR 8238BF5C
		return;
	}
	// beq cr6,0x8238bfa4
	if (ctx.cr6.eq) {
		// ERROR 8238BFA4
		return;
	}
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8238bf9c
	if (ctx.cr6.gt) {
		// ERROR 8238BF9C
		return;
	}
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-16592
	ctx.r12.s64 = ctx.r12.s64 + -16592;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8238BF30"))) PPC_WEAK_FUNC(sub_8238BF30);
PPC_FUNC_IMPL(__imp__sub_8238BF30) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-16496(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16496);
	// lwz r17,-16484(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16484);
	// lwz r17,-16484(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16484);
	// lwz r17,-16484(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16484);
	// lwz r17,-16484(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16484);
	// lwz r17,-16496(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16496);
	// lwz r17,-16496(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16496);
	// lwz r17,-16496(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16496);
	// lwz r17,-16484(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16484);
	// lwz r17,-16496(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16496);
	// lwz r17,-16496(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16496);
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8238bf9c
	if (ctx.cr6.gt) goto loc_8238BF9C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238bfa4
	if (ctx.cr6.eq) goto loc_8238BFA4;
	// bdz 0x8238bf9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238BF9C;
	// bdz 0x8238bf9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238BF9C;
	// bdz 0x8238bf9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238BF9C;
	// bdz 0x8238bf9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238BF9C;
	// bdz 0x8238bfa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238BFA4;
	// bdnz 0x8238bf9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238BF9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8238BF9C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
loc_8238BFA4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238BFAC"))) PPC_WEAK_FUNC(sub_8238BFAC);
PPC_FUNC_IMPL(__imp__sub_8238BFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238BFB0"))) PPC_WEAK_FUNC(sub_8238BFB0);
PPC_FUNC_IMPL(__imp__sub_8238BFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238BFB8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235b1f8
	ctx.lr = 0x8238BFC4;
	sub_8235B1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238bfe8
	if (ctx.cr6.eq) goto loc_8238BFE8;
	// bl 0x8235b580
	ctx.lr = 0x8238BFD4;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238bff4
	if (ctx.cr6.eq) goto loc_8238BFF4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b5a8
	ctx.lr = 0x8238BFE8;
	sub_8235B5A8(ctx, base);
loc_8238BFE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238BFF4:
	// lwz r31,48(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238bfe8
	if (ctx.cr6.eq) goto loc_8238BFE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r29,72
	ctx.r30.s64 = ctx.r29.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238C01C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238c068
	if (ctx.cr6.eq) goto loc_8238C068;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-32360
	ctx.r8.s64 = ctx.r10.s64 + -32360;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8238C05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8238c06c
	if (ctx.cr6.eq) goto loc_8238C06C;
loc_8238C068:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8238C06C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238C074"))) PPC_WEAK_FUNC(sub_8238C074);
PPC_FUNC_IMPL(__imp__sub_8238C074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238C078"))) PPC_WEAK_FUNC(sub_8238C078);
PPC_FUNC_IMPL(__imp__sub_8238C078) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c0f0
	if (ctx.cr6.eq) goto loc_8238C0F0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8238c0f0
	if (!ctx.cr6.eq) goto loc_8238C0F0;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238c0f0
	if (ctx.cr6.eq) goto loc_8238C0F0;
	// bl 0x82362380
	ctx.lr = 0x8238C0B4;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238c0c8
	if (!ctx.cr6.eq) goto loc_8238C0C8;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// b 0x8238c0f8
	goto loc_8238C0F8;
loc_8238C0C8:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x8237d130
	ctx.lr = 0x8238C0D0;
	sub_8237D130(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8238C0F0:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
loc_8238C0F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238C104;
	sub_823AB100(ctx, base);
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

__attribute__((alias("__imp__sub_8238C11C"))) PPC_WEAK_FUNC(sub_8238C11C);
PPC_FUNC_IMPL(__imp__sub_8238C11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238C120"))) PPC_WEAK_FUNC(sub_8238C120);
PPC_FUNC_IMPL(__imp__sub_8238C120) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82362380
	ctx.lr = 0x8238C148;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238c170
	if (!ctx.cr6.eq) goto loc_8238C170;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238C168;
	sub_823AB100(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8238c1e4
	goto loc_8238C1E4;
loc_8238C170:
	// bl 0x8235bf58
	ctx.lr = 0x8238C174;
	sub_8235BF58(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8235c228
	ctx.lr = 0x8238C17C;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238c1e0
	if (ctx.cr6.eq) goto loc_8238C1E0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238c1e0
	if (ctx.cr6.eq) goto loc_8238C1E0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238c1e0
	if (!ctx.cr6.eq) goto loc_8238C1E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab0f8
	ctx.lr = 0x8238C1A4;
	sub_823AB0F8(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238C1B0;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// blt cr6,0x8238c1e0
	if (ctx.cr6.lt) goto loc_8238C1E0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823639c0
	ctx.lr = 0x8238C1D8;
	sub_823639C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238c1e8
	if (ctx.cr6.eq) goto loc_8238C1E8;
loc_8238C1E0:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8238C1E4:
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8238C1E8:
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

__attribute__((alias("__imp__sub_8238C204"))) PPC_WEAK_FUNC(sub_8238C204);
PPC_FUNC_IMPL(__imp__sub_8238C204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238C208"))) PPC_WEAK_FUNC(sub_8238C208);
PPC_FUNC_IMPL(__imp__sub_8238C208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8235bf58
	ctx.lr = 0x8238C224;
	sub_8235BF58(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235c228
	ctx.lr = 0x8238C230;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c258
	if (!ctx.cr6.eq) goto loc_8238C258;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c228
	ctx.lr = 0x8238C244;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c258
	if (!ctx.cr6.eq) goto loc_8238C258;
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8238c2e4
	if (ctx.cr6.eq) goto loc_8238C2E4;
loc_8238C258:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c228
	ctx.lr = 0x8238C264;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c274
	if (!ctx.cr6.eq) goto loc_8238C274;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8238c2f8
	goto loc_8238C2F8;
loc_8238C274:
	// bl 0x8235b1f8
	ctx.lr = 0x8238C278;
	sub_8235B1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235b580
	ctx.lr = 0x8238C280;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c2fc
	if (!ctx.cr6.eq) goto loc_8238C2FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b8e8
	ctx.lr = 0x8238C290;
	sub_8235B8E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238c2f4
	if (ctx.cr6.eq) goto loc_8238C2F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b8e8
	ctx.lr = 0x8238C2A4;
	sub_8235B8E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x8238c2f4
	if (ctx.cr6.eq) goto loc_8238C2F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238C2B8;
	sub_8235B9C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b368
	ctx.lr = 0x8238C2C0;
	sub_8235B368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238c2ec
	if (ctx.cr6.eq) goto loc_8238C2EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238C2D0;
	sub_8235B9C8(ctx, base);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238C2E4;
	sub_823AB100(ctx, base);
loc_8238C2E4:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8238c2f8
	goto loc_8238C2F8;
loc_8238C2EC:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8238c2f8
	goto loc_8238C2F8;
loc_8238C2F4:
	// li r11,5
	ctx.r11.s64 = 5;
loc_8238C2F8:
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_8238C2FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238C314"))) PPC_WEAK_FUNC(sub_8238C314);
PPC_FUNC_IMPL(__imp__sub_8238C314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238C318"))) PPC_WEAK_FUNC(sub_8238C318);
PPC_FUNC_IMPL(__imp__sub_8238C318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8238C320;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,72
	ctx.r29.s64 = ctx.r3.s64 + 72;
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
	ctx.lr = 0x8238C348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c40c
	if (!ctx.cr6.eq) goto loc_8238C40C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,35
	ctx.r10.s64 = 35;
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
	ctx.lr = 0x8238C380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c3f4
	if (!ctx.cr6.eq) goto loc_8238C3F4;
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
	ctx.lr = 0x8238C3A4;
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
	ctx.lr = 0x8238C3C0;
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
	ctx.lr = 0x8238C3D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238C3E4;
	sub_823AB100(ctx, base);
	// li r6,11
	ctx.r6.s64 = 11;
	// stw r6,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238C3F4:
	// bl 0x8235bf58
	ctx.lr = 0x8238C3F8;
	sub_8235BF58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235c270
	ctx.lr = 0x8238C404;
	sub_8235C270(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_8238C40C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238C414"))) PPC_WEAK_FUNC(sub_8238C414);
PPC_FUNC_IMPL(__imp__sub_8238C414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238C418"))) PPC_WEAK_FUNC(sub_8238C418);
PPC_FUNC_IMPL(__imp__sub_8238C418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238C420;
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
	ctx.lr = 0x8238C434;
	sub_82362380(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238C438;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238C43C;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8238C440;
	sub_823708C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bne cr6,0x8238c46c
	if (!ctx.cr6.eq) goto loc_8238C46C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8238C460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238C46C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bctrl 
	ctx.lr = 0x8238C478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238C484"))) PPC_WEAK_FUNC(sub_8238C484);
PPC_FUNC_IMPL(__imp__sub_8238C484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238C488"))) PPC_WEAK_FUNC(sub_8238C488);
PPC_FUNC_IMPL(__imp__sub_8238C488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8238C4A8;
	sub_823570E0(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823570f0
	ctx.lr = 0x8238C4B0;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238c4f4
	if (ctx.cr6.eq) goto loc_8238C4F4;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,35
	ctx.r9.s64 = 35;
	// addi r8,r10,-32352
	ctx.r8.s64 = ctx.r10.s64 + -32352;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// b 0x8238c4f8
	goto loc_8238C4F8;
loc_8238C4F4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8238C4F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8238C500;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8238c510
	if (!ctx.cr6.eq) goto loc_8238C510;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8238c54c
	goto loc_8238C54C;
loc_8238C510:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
loc_8238C54C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238C564"))) PPC_WEAK_FUNC(sub_8238C564);
PPC_FUNC_IMPL(__imp__sub_8238C564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238C568"))) PPC_WEAK_FUNC(sub_8238C568);
PPC_FUNC_IMPL(__imp__sub_8238C568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-32328
	ctx.r8.s64 = ctx.r11.s64 + -32328;
	// addi r7,r10,-32340
	ctx.r7.s64 = ctx.r10.s64 + -32340;
	// addi r6,r9,32288
	ctx.r6.s64 = ctx.r9.s64 + 32288;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823ab568
	ctx.lr = 0x8238C5B0;
	sub_823AB568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x8238C5B8;
	sub_823AB4E8(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8238c5d0
	if (ctx.cr6.eq) goto loc_8238C5D0;
	// bl 0x82357128
	ctx.lr = 0x8238C5CC;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8238C5D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238C5E8"))) PPC_WEAK_FUNC(sub_8238C5E8);
PPC_FUNC_IMPL(__imp__sub_8238C5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8238C5F0;
	sub_82248784(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8238C5FC;
	sub_8235BF58(ctx, base);
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357088
	ctx.lr = 0x8238C610;
	sub_82357088(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,35
	ctx.r9.s64 = 35;
	// addi r8,r10,-32352
	ctx.r8.s64 = ctx.r10.s64 + -32352;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r7,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r7.u8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lbz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// stb r6,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r6.u8);
	// bl 0x82355ab0
	ctx.lr = 0x8238C654;
	sub_82355AB0(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82355ac0
	ctx.lr = 0x8238C660;
	sub_82355AC0(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82355ad0
	ctx.lr = 0x8238C66C;
	sub_82355AD0(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82355ae0
	ctx.lr = 0x8238C678;
	sub_82355AE0(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// lwz r5,200(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// lwz r11,200(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238c6a8
	if (ctx.cr6.eq) goto loc_8238C6A8;
loc_8238C698:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238C6A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c228
	ctx.lr = 0x8238C6B4;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238c698
	if (ctx.cr6.eq) goto loc_8238C698;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x8238C6C8;
	sub_823AB0F8(ctx, base);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,35
	ctx.r5.s64 = 35;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238C6E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238C714"))) PPC_WEAK_FUNC(sub_8238C714);
PPC_FUNC_IMPL(__imp__sub_8238C714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238C718"))) PPC_WEAK_FUNC(sub_8238C718);
PPC_FUNC_IMPL(__imp__sub_8238C718) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8238c7e4
	if (ctx.cr6.gt) goto loc_8238C7E4;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14508
	ctx.r12.s64 = ctx.r12.s64 + -14508;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
	// lwz r17,-14464(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -14464);
	// lwz r17,-14456(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -14456);
	// lwz r17,-14448(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -14448);
	// lwz r17,-14440(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -14440);
	// lwz r17,-14428(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -14428);
	// lwz r17,-14420(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -14420);
	// lwz r17,-14412(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -14412);
	// lwz r17,-14400(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -14400);
	// lwz r17,-14388(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -14388);
	// lwz r17,-14380(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -14380);
	// lwz r17,-14368(r24)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r24.u32 + -14368);
	// bl 0x8238c120
	ctx.lr = 0x8238C784;
	sub_8238C120(ctx, base);
	// b 0x8238c7e4
	goto loc_8238C7E4;
	// bl 0x8238c208
	ctx.lr = 0x8238C78C;
	sub_8238C208(ctx, base);
	// b 0x8238c7e4
	goto loc_8238C7E4;
	// bl 0x8238bc60
	ctx.lr = 0x8238C794;
	sub_8238BC60(ctx, base);
	// b 0x8238c7e4
	goto loc_8238C7E4;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// b 0x8238c7e4
	goto loc_8238C7E4;
	// bl 0x8238c5e8
	ctx.lr = 0x8238C7A8;
	sub_8238C5E8(ctx, base);
	// b 0x8238c7e4
	goto loc_8238C7E4;
	// bl 0x8238c318
	ctx.lr = 0x8238C7B0;
	sub_8238C318(ctx, base);
	// b 0x8238c7e4
	goto loc_8238C7E4;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// b 0x8238c7e4
	goto loc_8238C7E4;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// b 0x8238c7e4
	goto loc_8238C7E4;
	// bl 0x8238bcd8
	ctx.lr = 0x8238C7D0;
	sub_8238BCD8(ctx, base);
	// b 0x8238c7e4
	goto loc_8238C7E4;
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// b 0x8238c7e4
	goto loc_8238C7E4;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8238C7E4:
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

__attribute__((alias("__imp__sub_8238C7FC"))) PPC_WEAK_FUNC(sub_8238C7FC);
PPC_FUNC_IMPL(__imp__sub_8238C7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238C800"))) PPC_WEAK_FUNC(sub_8238C800);
PPC_FUNC_IMPL(__imp__sub_8238C800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8235b1f8
	ctx.lr = 0x8238C81C;
	sub_8235B1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235b580
	ctx.lr = 0x8238C824;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c85c
	if (!ctx.cr6.eq) goto loc_8238C85C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b998
	ctx.lr = 0x8238C834;
	sub_8235B998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238c844
	if (ctx.cr6.eq) goto loc_8238C844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238C844;
	sub_8235B9C8(ctx, base);
loc_8238C844:
	// bl 0x8235bf58
	ctx.lr = 0x8238C848;
	sub_8235BF58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8235c270
	ctx.lr = 0x8238C854;
	sub_8235C270(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
loc_8238C85C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238C874"))) PPC_WEAK_FUNC(sub_8238C874);
PPC_FUNC_IMPL(__imp__sub_8238C874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238C878"))) PPC_WEAK_FUNC(sub_8238C878);
PPC_FUNC_IMPL(__imp__sub_8238C878) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// b 0x823ab4b8
	sub_823AB4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238C884"))) PPC_WEAK_FUNC(sub_8238C884);
PPC_FUNC_IMPL(__imp__sub_8238C884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238C888"))) PPC_WEAK_FUNC(sub_8238C888);
PPC_FUNC_IMPL(__imp__sub_8238C888) {
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
	// addi r9,r11,-32192
	ctx.r9.s64 = ctx.r11.s64 + -32192;
	// li r8,34
	ctx.r8.s64 = 34;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r6,r10,30588
	ctx.r6.s64 = ctx.r10.s64 + 30588;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8238C8D4;
	sub_823585A0(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// addi r3,r5,30596
	ctx.r3.s64 = ctx.r5.s64 + 30596;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823585a0
	ctx.lr = 0x8238C8F0;
	sub_823585A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238C920"))) PPC_WEAK_FUNC(sub_8238C920);
PPC_FUNC_IMPL(__imp__sub_8238C920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// std r30,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r30.u64);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8238C964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8238C978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238C998"))) PPC_WEAK_FUNC(sub_8238C998);
PPC_FUNC_IMPL(__imp__sub_8238C998) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,30596
	ctx.r8.s64 = ctx.r11.s64 + 30596;
	// addi r7,r10,30588
	ctx.r7.s64 = ctx.r10.s64 + 30588;
	// addi r6,r9,31824
	ctx.r6.s64 = ctx.r9.s64 + 31824;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8238c9e4
	if (ctx.cr6.eq) goto loc_8238C9E4;
	// bl 0x82357128
	ctx.lr = 0x8238C9E0;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8238C9E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238C9F8"))) PPC_WEAK_FUNC(sub_8238C9F8);
PPC_FUNC_IMPL(__imp__sub_8238C9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238cb1c
	if (ctx.cr6.gt) goto loc_8238CB1C;
	// beq cr6,0x8238cb64
	if (ctx.cr6.eq) goto loc_8238CB64;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238cacc
	if (ctx.cr6.gt) goto loc_8238CACC;
	// beq cr6,0x8238ca64
	if (ctx.cr6.eq) goto loc_8238CA64;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238ca6c
	if (ctx.cr6.gt) goto loc_8238CA6C;
	// beq cr6,0x8238ca64
	if (ctx.cr6.eq) goto loc_8238CA64;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// ori r9,r11,3
	ctx.r9.u64 = ctx.r11.u64 | 3;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8238caf8
	if (ctx.cr6.eq) goto loc_8238CAF8;
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8238ca64
	if (ctx.cr0.eq) goto loc_8238CA64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
loc_8238CA5C:
	// beq cr6,0x8238ca64
	if (ctx.cr6.eq) goto loc_8238CA64;
loc_8238CA60:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8238CA64:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8238CA6C:
	// addis r11,r4,-4096
	ctx.r11.s64 = ctx.r4.s64 + -268435456;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8238ca64
	if (ctx.cr0.eq) goto loc_8238CA64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8238ca64
	if (ctx.cr6.eq) goto loc_8238CA64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8238ca60
	if (!ctx.cr6.eq) goto loc_8238CA60;
loc_8238CA88:
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238ca9c
	if (ctx.cr6.eq) goto loc_8238CA9C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
loc_8238CA9C:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238ca64
	if (ctx.cr6.eq) goto loc_8238CA64;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8238caf8
	if (ctx.cr6.eq) goto loc_8238CAF8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8238ca64
	if (!ctx.cr6.eq) goto loc_8238CA64;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8238CACC:
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// ori r11,r11,11
	ctx.r11.u64 = ctx.r11.u64 | 11;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238cb08
	if (ctx.cr6.gt) goto loc_8238CB08;
	// beq cr6,0x8238cb64
	if (ctx.cr6.eq) goto loc_8238CB64;
	// subf. r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8238ca64
	if (ctx.cr0.eq) goto loc_8238CA64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8238ca88
	if (ctx.cr6.eq) goto loc_8238CA88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// b 0x8238ca5c
	goto loc_8238CA5C;
loc_8238CAF8:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8238CB08:
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8238ca64
	if (ctx.cr0.eq) goto loc_8238CA64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// b 0x8238ca5c
	goto loc_8238CA5C;
loc_8238CB1C:
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238cb74
	if (ctx.cr6.gt) goto loc_8238CB74;
	// beq cr6,0x8238ca64
	if (ctx.cr6.eq) goto loc_8238CA64;
	// addis r11,r4,-8192
	ctx.r11.s64 = ctx.r4.s64 + -536870912;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8238ca60
	if (ctx.cr6.gt) goto loc_8238CA60;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8238cb64
	// bdzf 4*cr6+eq,0x8238cb64
	// bdzf 4*cr6+eq,0x8238cb64
	// bdzf 4*cr6+eq,0x8238cb64
	// bdzf 4*cr6+eq,0x8238cb64
	// bdzf 4*cr6+eq,0x8238cb64
	// bne cr6,0x8238ca64
	if (!ctx.cr6.eq) goto loc_8238CA64;
loc_8238CB64:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8238CB74:
	// addis r11,r4,-16384
	ctx.r11.s64 = ctx.r4.s64 + -1073741824;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8238ca60
	if (ctx.cr6.gt) goto loc_8238CA60;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238ca64
	if (ctx.cr6.eq) goto loc_8238CA64;
	// bdz 0x8238cb64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238CB64;
	// bdz 0x8238cb64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238CB64;
	// bdz 0x8238cb64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238CB64;
	// bdz 0x8238cb64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238CB64;
	// bdz 0x8238ca64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238CA64;
	// bdz 0x8238ca64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238CA64;
	// b 0x8238cb64
	goto loc_8238CB64;
}

__attribute__((alias("__imp__sub_8238CBAC"))) PPC_WEAK_FUNC(sub_8238CBAC);
PPC_FUNC_IMPL(__imp__sub_8238CBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238CBB0"))) PPC_WEAK_FUNC(sub_8238CBB0);
PPC_FUNC_IMPL(__imp__sub_8238CBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238CBB8;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235b1f8
	ctx.lr = 0x8238CBC4;
	sub_8235B1F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238cbe8
	if (ctx.cr6.eq) goto loc_8238CBE8;
	// bl 0x8235b580
	ctx.lr = 0x8238CBD4;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238cbf4
	if (ctx.cr6.eq) goto loc_8238CBF4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235b5a8
	ctx.lr = 0x8238CBE8;
	sub_8235B5A8(ctx, base);
loc_8238CBE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238CBF4:
	// lwz r31,48(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238cbe8
	if (ctx.cr6.eq) goto loc_8238CBE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r29,84
	ctx.r30.s64 = ctx.r29.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238CC1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238cc68
	if (ctx.cr6.eq) goto loc_8238CC68;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-32360
	ctx.r8.s64 = ctx.r10.s64 + -32360;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8238CC5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8238cc6c
	if (ctx.cr6.eq) goto loc_8238CC6C;
loc_8238CC68:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8238CC6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238CC74"))) PPC_WEAK_FUNC(sub_8238CC74);
PPC_FUNC_IMPL(__imp__sub_8238CC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238CC78"))) PPC_WEAK_FUNC(sub_8238CC78);
PPC_FUNC_IMPL(__imp__sub_8238CC78) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238cd20
	if (ctx.cr6.eq) goto loc_8238CD20;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8238cd20
	if (!ctx.cr6.eq) goto loc_8238CD20;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238cd20
	if (ctx.cr6.eq) goto loc_8238CD20;
	// bl 0x82362380
	ctx.lr = 0x8238CCB4;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238ccc8
	if (!ctx.cr6.eq) goto loc_8238CCC8;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// b 0x8238cd28
	goto loc_8238CD28;
loc_8238CCC8:
	// bl 0x82370538
	ctx.lr = 0x8238CCCC;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238CCD0;
	sub_82370538(ctx, base);
	// bl 0x82370800
	ctx.lr = 0x8238CCD4;
	sub_82370800(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238cce8
	if (!ctx.cr6.eq) goto loc_8238CCE8;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// b 0x8238cd28
	goto loc_8238CD28;
loc_8238CCE8:
	// bl 0x82370538
	ctx.lr = 0x8238CCEC;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238CCF0;
	sub_82370538(ctx, base);
	// bl 0x82370800
	ctx.lr = 0x8238CCF4;
	sub_82370800(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8237d130
	ctx.lr = 0x8238CD00;
	sub_8237D130(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_8238CD20:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
loc_8238CD28:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238CD34;
	sub_823AB100(ctx, base);
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

__attribute__((alias("__imp__sub_8238CD4C"))) PPC_WEAK_FUNC(sub_8238CD4C);
PPC_FUNC_IMPL(__imp__sub_8238CD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238CD50"))) PPC_WEAK_FUNC(sub_8238CD50);
PPC_FUNC_IMPL(__imp__sub_8238CD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8238CD58;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,84
	ctx.r29.s64 = ctx.r3.s64 + 84;
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
	ctx.lr = 0x8238CD80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238ce50
	if (!ctx.cr6.eq) goto loc_8238CE50;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,34
	ctx.r10.s64 = 34;
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
	ctx.lr = 0x8238CDB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238ce30
	if (!ctx.cr6.eq) goto loc_8238CE30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238CDD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8238CDF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,104(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8238CE10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238CE20;
	sub_823AB100(ctx, base);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r5,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8238CE30:
	// bl 0x8235bf58
	ctx.lr = 0x8238CE34;
	sub_8235BF58(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235c270
	ctx.lr = 0x8238CE40;
	sub_8235C270(ctx, base);
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// bl 0x8237d130
	ctx.lr = 0x8238CE48;
	sub_8237D130(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
loc_8238CE50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8238CE58"))) PPC_WEAK_FUNC(sub_8238CE58);
PPC_FUNC_IMPL(__imp__sub_8238CE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238CE60;
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
	// beq cr6,0x8238ce9c
	if (ctx.cr6.eq) goto loc_8238CE9C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8238CE88;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238CE9C:
	// bl 0x82362380
	ctx.lr = 0x8238CEA0;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8238ced4
	if (!ctx.cr6.eq) goto loc_8238CED4;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ab100
	ctx.lr = 0x8238CEC0;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238CED4:
	// bl 0x823ab0f8
	ctx.lr = 0x8238CED8;
	sub_823AB0F8(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238CEE4;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8238cf14
	if (!ctx.cr6.lt) goto loc_8238CF14;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238CF00;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238CF14:
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82370538
	ctx.lr = 0x8238CF1C;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238CF20;
	sub_82370538(ctx, base);
	// bl 0x82370800
	ctx.lr = 0x8238CF24;
	sub_82370800(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8238cf54
	if (ctx.cr6.eq) goto loc_8238CF54;
loc_8238CF2C:
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238CF40;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238CF54:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238cf2c
	if (!ctx.cr6.eq) goto loc_8238CF2C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823627b0
	ctx.lr = 0x8238CF6C;
	sub_823627B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238cf7c
	if (ctx.cr6.eq) goto loc_8238CF7C;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8238CF7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238CF88"))) PPC_WEAK_FUNC(sub_8238CF88);
PPC_FUNC_IMPL(__imp__sub_8238CF88) {
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
	// beq cr6,0x8238cfc0
	if (ctx.cr6.eq) goto loc_8238CFC0;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8238CFB8;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x8238cfcc
	goto loc_8238CFCC;
loc_8238CFC0:
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8237d130
	ctx.lr = 0x8238CFC8;
	sub_8237D130(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
loc_8238CFCC:
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

__attribute__((alias("__imp__sub_8238CFE4"))) PPC_WEAK_FUNC(sub_8238CFE4);
PPC_FUNC_IMPL(__imp__sub_8238CFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238CFE8"))) PPC_WEAK_FUNC(sub_8238CFE8);
PPC_FUNC_IMPL(__imp__sub_8238CFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8238CFF0;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
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
	// beq cr6,0x8238d02c
	if (ctx.cr6.eq) goto loc_8238D02C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8238D018;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238D02C:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82362380
	ctx.lr = 0x8238D034;
	sub_82362380(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8238d068
	if (!ctx.cr6.eq) goto loc_8238D068;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823ab100
	ctx.lr = 0x8238D054;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238D068:
	// addi r28,r31,68
	ctx.r28.s64 = ctx.r31.s64 + 68;
	// bl 0x823ab0f8
	ctx.lr = 0x8238D070;
	sub_823AB0F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238D07C;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8238d0ac
	if (!ctx.cr6.lt) goto loc_8238D0AC;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238D098;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238D0AC:
	// lwz r27,80(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82370538
	ctx.lr = 0x8238D0B4;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238D0B8;
	sub_82370538(ctx, base);
	// bl 0x82370800
	ctx.lr = 0x8238D0BC;
	sub_82370800(ctx, base);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8238d0ec
	if (ctx.cr6.eq) goto loc_8238D0EC;
loc_8238D0C4:
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238D0D8;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238D0EC:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238d0c4
	if (!ctx.cr6.eq) goto loc_8238D0C4;
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d120
	if (ctx.cr6.eq) goto loc_8238D120;
	// addi r5,r30,236
	ctx.r5.s64 = ctx.r30.s64 + 236;
	// lwz r6,1260(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1260);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,232(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// bl 0x823663b0
	ctx.lr = 0x8238D118;
	sub_823663B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d1a4
	if (ctx.cr6.eq) goto loc_8238D1A4;
loc_8238D120:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x8238D12C;
	sub_82370C48(ctx, base);
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d140
	if (ctx.cr6.eq) goto loc_8238D140;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8238D140:
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d150
	if (ctx.cr6.eq) goto loc_8238D150;
	// li r4,2
	ctx.r4.s64 = 2;
loc_8238D150:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371320
	ctx.lr = 0x8238D158;
	sub_82371320(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,432(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// bl 0x82371320
	ctx.lr = 0x8238D164;
	sub_82371320(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823639c0
	ctx.lr = 0x8238D184;
	sub_823639C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d19c
	if (ctx.cr6.eq) goto loc_8238D19C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238D194;
	sub_8237D130(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8238D19C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x8238D1A4;
	sub_82372340(ctx, base);
loc_8238D1A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238D1B0"))) PPC_WEAK_FUNC(sub_8238D1B0);
PPC_FUNC_IMPL(__imp__sub_8238D1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8235bf58
	ctx.lr = 0x8238D1CC;
	sub_8235BF58(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8235c228
	ctx.lr = 0x8238D1D4;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d1e4
	if (ctx.cr6.eq) goto loc_8238D1E4;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x8238d288
	goto loc_8238D288;
loc_8238D1E4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d20c
	if (ctx.cr6.eq) goto loc_8238D20C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238D204;
	sub_823AB100(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x8238d288
	goto loc_8238D288;
loc_8238D20C:
	// bl 0x82362380
	ctx.lr = 0x8238D210;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238d234
	if (!ctx.cr6.eq) goto loc_8238D234;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238D22C;
	sub_823AB100(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x8238d288
	goto loc_8238D288;
loc_8238D234:
	// bl 0x8235b1f8
	ctx.lr = 0x8238D238;
	sub_8235B1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238D240;
	sub_8235B9C8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,228(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// bl 0x8235bad8
	ctx.lr = 0x8238D250;
	sub_8235BAD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b2a8
	ctx.lr = 0x8238D258;
	sub_8235B2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d284
	if (ctx.cr6.eq) goto loc_8238D284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238D268;
	sub_8235B9C8(ctx, base);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238D27C;
	sub_823AB100(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x8238d288
	goto loc_8238D288;
loc_8238D284:
	// li r11,12
	ctx.r11.s64 = 12;
loc_8238D288:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238D2A4"))) PPC_WEAK_FUNC(sub_8238D2A4);
PPC_FUNC_IMPL(__imp__sub_8238D2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238D2A8"))) PPC_WEAK_FUNC(sub_8238D2A8);
PPC_FUNC_IMPL(__imp__sub_8238D2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238D2B0;
	sub_8224878C(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235b1f8
	ctx.lr = 0x8238D2BC;
	sub_8235B1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8238D2C4;
	sub_8235BF58(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d2e0
	if (ctx.cr6.eq) goto loc_8238D2E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b5a8
	ctx.lr = 0x8238D2E0;
	sub_8235B5A8(ctx, base);
loc_8238D2E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b580
	ctx.lr = 0x8238D2E8;
	sub_8235B580(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238d3a0
	if (!ctx.cr6.eq) goto loc_8238D3A0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c270
	ctx.lr = 0x8238D300;
	sub_8235C270(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b998
	ctx.lr = 0x8238D308;
	sub_8235B998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d370
	if (ctx.cr6.eq) goto loc_8238D370;
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238D324;
	sub_823AB100(ctx, base);
	// li r29,17
	ctx.r29.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// bl 0x8235b970
	ctx.lr = 0x8238D334;
	sub_8235B970(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8238d360
	if (!ctx.cr6.eq) goto loc_8238D360;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238D350;
	sub_823AB100(ctx, base);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82381358
	ctx.lr = 0x8238D360;
	sub_82381358(ctx, base);
loc_8238D360:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238D368;
	sub_8235B9C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238D370:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c048
	ctx.lr = 0x8238D378;
	sub_8235C048(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,10412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8235b5a8
	ctx.lr = 0x8238D398;
	sub_8235B5A8(ctx, base);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_8238D3A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238D3A8"))) PPC_WEAK_FUNC(sub_8238D3A8);
PPC_FUNC_IMPL(__imp__sub_8238D3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8238d3e4
	if (ctx.cr6.eq) goto loc_8238D3E4;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8238D3DC;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x8238d3fc
	goto loc_8238D3FC;
loc_8238D3E4:
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8238D3F0;
	sub_823A86F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238D3F8;
	sub_8237D130(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
loc_8238D3FC:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238D418"))) PPC_WEAK_FUNC(sub_8238D418);
PPC_FUNC_IMPL(__imp__sub_8238D418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238D420;
	sub_8224878C(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8238D430;
	sub_82362380(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238d464
	if (!ctx.cr6.eq) goto loc_8238D464;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238D450;
	sub_823AB100(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238D464:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d498
	if (ctx.cr6.eq) goto loc_8238D498;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8238D484;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238D498:
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// bl 0x823ab0f8
	ctx.lr = 0x8238D4A0;
	sub_823AB0F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238D4AC;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8238d4dc
	if (!ctx.cr6.lt) goto loc_8238D4DC;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238D4C8;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238D4DC:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r31,104
	ctx.r5.s64 = ctx.r31.s64 + 104;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82367000
	ctx.lr = 0x8238D4FC;
	sub_82367000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d51c
	if (ctx.cr6.eq) goto loc_8238D51C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8238D50C;
	sub_823A86F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238D514;
	sub_8237D130(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8238D51C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238D528"))) PPC_WEAK_FUNC(sub_8238D528);
PPC_FUNC_IMPL(__imp__sub_8238D528) {
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
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8238d560
	if (!ctx.cr6.eq) goto loc_8238D560;
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238d560
	if (!ctx.cr6.eq) goto loc_8238D560;
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x8238d57c
	goto loc_8238D57C;
loc_8238D560:
	// bl 0x8235bf58
	ctx.lr = 0x8238D564;
	sub_8235BF58(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8235c228
	ctx.lr = 0x8238D56C;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,20
	ctx.r11.s64 = 20;
	// beq cr6,0x8238d57c
	if (ctx.cr6.eq) goto loc_8238D57C;
	// li r11,18
	ctx.r11.s64 = 18;
loc_8238D57C:
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

__attribute__((alias("__imp__sub_8238D594"))) PPC_WEAK_FUNC(sub_8238D594);
PPC_FUNC_IMPL(__imp__sub_8238D594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238D598"))) PPC_WEAK_FUNC(sub_8238D598);
PPC_FUNC_IMPL(__imp__sub_8238D598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8235b1f8
	ctx.lr = 0x8238D5B4;
	sub_8235B1F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235b8e8
	ctx.lr = 0x8238D5BC;
	sub_8235B8E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238d5d0
	if (!ctx.cr6.eq) goto loc_8238D5D0;
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x8238d608
	goto loc_8238D608;
loc_8238D5D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b368
	ctx.lr = 0x8238D5D8;
	sub_8235B368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d604
	if (ctx.cr6.eq) goto loc_8238D604;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235b9c8
	ctx.lr = 0x8238D5E8;
	sub_8235B9C8(ctx, base);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238D5FC;
	sub_823AB100(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x8238d608
	goto loc_8238D608;
loc_8238D604:
	// li r11,19
	ctx.r11.s64 = 19;
loc_8238D608:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238D624"))) PPC_WEAK_FUNC(sub_8238D624);
PPC_FUNC_IMPL(__imp__sub_8238D624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238D628"))) PPC_WEAK_FUNC(sub_8238D628);
PPC_FUNC_IMPL(__imp__sub_8238D628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8238D630;
	sub_82248784(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,84
	ctx.r29.s64 = ctx.r3.s64 + 84;
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
	ctx.lr = 0x8238D658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238d71c
	if (!ctx.cr6.eq) goto loc_8238D71C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,35
	ctx.r10.s64 = 35;
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
	ctx.lr = 0x8238D690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238d704
	if (!ctx.cr6.eq) goto loc_8238D704;
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
	ctx.lr = 0x8238D6B4;
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
	ctx.lr = 0x8238D6D0;
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
	ctx.lr = 0x8238D6E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238D6F4;
	sub_823AB100(ctx, base);
	// li r6,23
	ctx.r6.s64 = 23;
	// stw r6,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238D704:
	// bl 0x8235bf58
	ctx.lr = 0x8238D708;
	sub_8235BF58(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235c270
	ctx.lr = 0x8238D714;
	sub_8235C270(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
loc_8238D71C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238D724"))) PPC_WEAK_FUNC(sub_8238D724);
PPC_FUNC_IMPL(__imp__sub_8238D724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238D728"))) PPC_WEAK_FUNC(sub_8238D728);
PPC_FUNC_IMPL(__imp__sub_8238D728) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8238D748;
	sub_82362380(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238d798
	if (ctx.cr6.eq) goto loc_8238D798;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab0f8
	ctx.lr = 0x8238D75C;
	sub_823AB0F8(ctx, base);
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238D768;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// blt cr6,0x8238d798
	if (ctx.cr6.lt) goto loc_8238D798;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8238d794
	if (!ctx.cr6.eq) goto loc_8238D794;
	// bl 0x823627b0
	ctx.lr = 0x8238D788;
	sub_823627B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d7a0
	if (ctx.cr6.eq) goto loc_8238D7A0;
	// b 0x8238d798
	goto loc_8238D798;
loc_8238D794:
	// bl 0x823628f0
	ctx.lr = 0x8238D798;
	sub_823628F0(ctx, base);
loc_8238D798:
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
loc_8238D7A0:
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

__attribute__((alias("__imp__sub_8238D7BC"))) PPC_WEAK_FUNC(sub_8238D7BC);
PPC_FUNC_IMPL(__imp__sub_8238D7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238D7C0"))) PPC_WEAK_FUNC(sub_8238D7C0);
PPC_FUNC_IMPL(__imp__sub_8238D7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8238d7f0
	if (!ctx.cr6.eq) goto loc_8238D7F0;
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x8238d814
	goto loc_8238D814;
loc_8238D7F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82381358
	ctx.lr = 0x8238D7FC;
	sub_82381358(ctx, base);
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8238D808;
	sub_823A86F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238D810;
	sub_8237D130(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
loc_8238D814:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238D830"))) PPC_WEAK_FUNC(sub_8238D830);
PPC_FUNC_IMPL(__imp__sub_8238D830) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82362380
	ctx.lr = 0x8238D858;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238d87c
	if (!ctx.cr6.eq) goto loc_8238D87C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238D878;
	sub_823AB100(ctx, base);
	// b 0x8238d8dc
	goto loc_8238D8DC;
loc_8238D87C:
	// bl 0x8235bf58
	ctx.lr = 0x8238D880;
	sub_8235BF58(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d8dc
	if (ctx.cr6.eq) goto loc_8238D8DC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238d8dc
	if (!ctx.cr6.eq) goto loc_8238D8DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab0f8
	ctx.lr = 0x8238D8A0;
	sub_823AB0F8(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238D8AC;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// blt cr6,0x8238d8dc
	if (ctx.cr6.lt) goto loc_8238D8DC;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823639c0
	ctx.lr = 0x8238D8D4;
	sub_823639C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d8e4
	if (ctx.cr6.eq) goto loc_8238D8E4;
loc_8238D8DC:
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8238D8E4:
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

__attribute__((alias("__imp__sub_8238D900"))) PPC_WEAK_FUNC(sub_8238D900);
PPC_FUNC_IMPL(__imp__sub_8238D900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238D908;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8238D914;
	sub_8235BF58(ctx, base);
	// bl 0x82362380
	ctx.lr = 0x8238D918;
	sub_82362380(ctx, base);
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238d974
	if (ctx.cr6.eq) goto loc_8238D974;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8238d974
	if (ctx.cr6.eq) goto loc_8238D974;
	// addi r29,r30,56
	ctx.r29.s64 = ctx.r30.s64 + 56;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82381378
	ctx.lr = 0x8238D940;
	sub_82381378(ctx, base);
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238d980
	if (ctx.cr6.gt) goto loc_8238D980;
	// beq cr6,0x8238d990
	if (ctx.cr6.eq) goto loc_8238D990;
	// addis r11,r31,-4096
	ctx.r11.s64 = ctx.r31.s64 + -268435456;
	// addic. r11,r11,-6
	ctx.xer.ca = ctx.r11.u32 > 5;
	ctx.r11.s64 = ctx.r11.s64 + -6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8238d990
	if (ctx.cr0.eq) goto loc_8238D990;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8238d974
	if (!ctx.cr6.eq) goto loc_8238D974;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8238d990
	if (!ctx.cr6.eq) goto loc_8238D990;
loc_8238D974:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238D980:
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r10,r11,7
	ctx.r10.u64 = ctx.r11.u64 | 7;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238d974
	if (!ctx.cr6.eq) goto loc_8238D974;
loc_8238D990:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82381370
	ctx.lr = 0x8238D998;
	sub_82381370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8238d974
	if (ctx.cr6.lt) goto loc_8238D974;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab0e8
	ctx.lr = 0x8238D9AC;
	sub_823AB0E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238D9BC;
	sub_823AB100(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238D9D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238D9DC"))) PPC_WEAK_FUNC(sub_8238D9DC);
PPC_FUNC_IMPL(__imp__sub_8238D9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238D9E0"))) PPC_WEAK_FUNC(sub_8238D9E0);
PPC_FUNC_IMPL(__imp__sub_8238D9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238D9E8;
	sub_8224878C(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82362380
	ctx.lr = 0x8238DA04;
	sub_82362380(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238DA08;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238DA0C;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8238DA10;
	sub_823708C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bne cr6,0x8238da3c
	if (!ctx.cr6.eq) goto loc_8238DA3C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8238DA30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238DA3C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bctrl 
	ctx.lr = 0x8238DA48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238DA54"))) PPC_WEAK_FUNC(sub_8238DA54);
PPC_FUNC_IMPL(__imp__sub_8238DA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238DA58"))) PPC_WEAK_FUNC(sub_8238DA58);
PPC_FUNC_IMPL(__imp__sub_8238DA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8238DA60;
	sub_82248788(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,-32168
	ctx.r9.s64 = ctx.r11.s64 + -32168;
	// addi r8,r10,-32180
	ctx.r8.s64 = ctx.r10.s64 + -32180;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r28,r3,404
	ctx.r28.s64 = ctx.r3.s64 + 404;
	// lwz r3,408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 412, ctx.r31.u32);
	// beq cr6,0x8238daa0
	if (ctx.cr6.eq) goto loc_8238DAA0;
	// bl 0x82357240
	ctx.lr = 0x8238DA9C;
	sub_82357240(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_8238DAA0:
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// addi r29,r30,384
	ctx.r29.s64 = ctx.r30.s64 + 384;
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// lwz r3,388(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r31.u32);
	// beq cr6,0x8238dac4
	if (ctx.cr6.eq) goto loc_8238DAC4;
	// bl 0x82357240
	ctx.lr = 0x8238DAC0;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_8238DAC4:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r28,r30,364
	ctx.r28.s64 = ctx.r30.s64 + 364;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stw r31,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r31.u32);
	// lwz r3,368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238dae8
	if (ctx.cr6.eq) goto loc_8238DAE8;
	// bl 0x82357240
	ctx.lr = 0x8238DAE4;
	sub_82357240(ctx, base);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_8238DAE8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// addi r3,r30,68
	ctx.r3.s64 = ctx.r30.s64 + 68;
	// addi r10,r11,32288
	ctx.r10.s64 = ctx.r11.s64 + 32288;
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// bl 0x823ab568
	ctx.lr = 0x8238DB04;
	sub_823AB568(ctx, base);
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// bl 0x823ab568
	ctx.lr = 0x8238DB0C;
	sub_823AB568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab4e8
	ctx.lr = 0x8238DB14;
	sub_823AB4E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8238DB1C"))) PPC_WEAK_FUNC(sub_8238DB1C);
PPC_FUNC_IMPL(__imp__sub_8238DB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238DB20"))) PPC_WEAK_FUNC(sub_8238DB20);
PPC_FUNC_IMPL(__imp__sub_8238DB20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8238e240
	sub_8238E240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238DB28"))) PPC_WEAK_FUNC(sub_8238DB28);
PPC_FUNC_IMPL(__imp__sub_8238DB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8238DB30;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,372(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8238db68
	if (!ctx.cr6.eq) goto loc_8238DB68;
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238db68
	if (!ctx.cr6.eq) goto loc_8238DB68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238DB68:
	// bl 0x8235bf58
	ctx.lr = 0x8238DB6C;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8238dba4
	if (ctx.cr6.eq) goto loc_8238DBA4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8238DB7C:
	// lwz r11,368(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8235c1e8
	ctx.lr = 0x8238DB8C;
	sub_8235C1E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238db98
	if (ctx.cr6.eq) goto loc_8238DB98;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_8238DB98:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8238db7c
	if (!ctx.cr0.eq) goto loc_8238DB7C;
loc_8238DBA4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238DBB0"))) PPC_WEAK_FUNC(sub_8238DBB0);
PPC_FUNC_IMPL(__imp__sub_8238DBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224877c
	ctx.lr = 0x8238DBB8;
	sub_8224877C(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238dbdc
	if (ctx.cr6.eq) goto loc_8238DBDC;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// b 0x8238de2c
	goto loc_8238DE2C;
loc_8238DBDC:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8235bf58
	ctx.lr = 0x8238DBE4;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8235c5b0
	ctx.lr = 0x8238DBEC;
	sub_8235C5B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r31,68
	ctx.r26.s64 = ctx.r31.s64 + 68;
	// bl 0x823ab0f8
	ctx.lr = 0x8238DBFC;
	sub_823AB0F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238DC08;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// blt cr6,0x8238dc58
	if (ctx.cr6.lt) goto loc_8238DC58;
	// bl 0x82362380
	ctx.lr = 0x8238DC14;
	sub_82362380(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238de24
	if (ctx.cr6.eq) goto loc_8238DE24;
	// lwz r11,200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238dc84
	if (!ctx.cr6.eq) goto loc_8238DC84;
	// lwz r11,208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238dc84
	if (!ctx.cr6.eq) goto loc_8238DC84;
	// bl 0x82370538
	ctx.lr = 0x8238DC3C;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238DC40;
	sub_82370538(ctx, base);
	// bl 0x82370800
	ctx.lr = 0x8238DC44;
	sub_82370800(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x8238dc64
	if (!ctx.cr6.lt) goto loc_8238DC64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82381358
	ctx.lr = 0x8238DC58;
	sub_82381358(ctx, base);
loc_8238DC58:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// b 0x8238de2c
	goto loc_8238DE2C;
loc_8238DC64:
	// bl 0x82370538
	ctx.lr = 0x8238DC68;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238DC6C;
	sub_82370538(ctx, base);
	// bl 0x82370800
	ctx.lr = 0x8238DC70;
	sub_82370800(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8238dc98
	if (!ctx.cr6.lt) goto loc_8238DC98;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8238DC84:
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8238de18
	if (ctx.cr6.lt) goto loc_8238DE18;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8238de40
	if (ctx.cr6.lt) goto loc_8238DE40;
loc_8238DC98:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c948
	ctx.lr = 0x8238DCA4;
	sub_8235C948(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c948
	ctx.lr = 0x8238DCB4;
	sub_8235C948(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c948
	ctx.lr = 0x8238DCC4;
	sub_8235C948(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8237d170
	ctx.lr = 0x8238DCCC;
	sub_8237D170(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8238DCD4;
	sub_823A86F8(ctx, base);
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// bgt cr6,0x8238de18
	if (ctx.cr6.gt) goto loc_8238DE18;
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x8238de18
	if (ctx.cr6.gt) goto loc_8238DE18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82357088
	ctx.lr = 0x8238DCF4;
	sub_82357088(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8238c888
	ctx.lr = 0x8238DD00;
	sub_8238C888(ctx, base);
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// bl 0x82355a88
	ctx.lr = 0x8238DD10;
	sub_82355A88(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4);
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// bl 0x82355a90
	ctx.lr = 0x8238DD24;
	sub_82355A90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x8238DD38;
	sub_82248A40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82355aa0
	ctx.lr = 0x8238DD40;
	sub_82355AA0(ctx, base);
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// lwz r8,24(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// bl 0x82370538
	ctx.lr = 0x8238DD50;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238DD54;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8238DD58;
	sub_823708C0(ctx, base);
	// lwz r7,432(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// lwz r6,200(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8238dda8
	if (ctx.cr6.eq) goto loc_8238DDA8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238DD84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238de24
	if (ctx.cr6.eq) goto loc_8238DE24;
loc_8238DD8C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238DD94;
	sub_8237D130(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8238DDA8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c228
	ctx.lr = 0x8238DDB4;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238dd8c
	if (!ctx.cr6.eq) goto loc_8238DD8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x8238DDC8;
	sub_823AB0F8(ctx, base);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,34
	ctx.r5.s64 = 34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238DDE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
loc_8238DE18:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82381358
	ctx.lr = 0x8238DE24;
	sub_82381358(ctx, base);
loc_8238DE24:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
loc_8238DE2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238DE38;
	sub_823AB100(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8238DE40:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822487cc
	// ERROR 822487CC
	return;
}

__attribute__((alias("__imp__sub_8238DE4C"))) PPC_WEAK_FUNC(sub_8238DE4C);
PPC_FUNC_IMPL(__imp__sub_8238DE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238DE50"))) PPC_WEAK_FUNC(sub_8238DE50);
PPC_FUNC_IMPL(__imp__sub_8238DE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248780
	ctx.lr = 0x8238DE58;
	sub_82248780(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238de94
	if (ctx.cr6.eq) goto loc_8238DE94;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8238DE80;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8238DE94:
	// bl 0x823ab0f8
	ctx.lr = 0x8238DE98;
	sub_823AB0F8(ctx, base);
	// addi r3,r29,68
	ctx.r3.s64 = ctx.r29.s64 + 68;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238DEA4;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8238ded4
	if (!ctx.cr6.lt) goto loc_8238DED4;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238DEC0;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
loc_8238DED4:
	// bl 0x8235bf58
	ctx.lr = 0x8238DED8;
	sub_8235BF58(ctx, base);
	// lwz r26,372(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 372);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8238df54
	if (ctx.cr6.eq) goto loc_8238DF54;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8238DEF0:
	// lwz r11,368(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235ca68
	ctx.lr = 0x8238DF08;
	sub_8235CA68(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8238df44
	if (ctx.cr6.eq) goto loc_8238DF44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235c1e8
	ctx.lr = 0x8238DF1C;
	sub_8235C1E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238df44
	if (ctx.cr6.eq) goto loc_8238DF44;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8238df44
	if (!ctx.cr6.eq) goto loc_8238DF44;
	// addi r11,r31,14
	ctx.r11.s64 = ctx.r31.s64 + 14;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8238df5c
	if (ctx.cr6.eq) goto loc_8238DF5C;
loc_8238DF44:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8238def0
	if (ctx.cr6.lt) goto loc_8238DEF0;
loc_8238DF54:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
loc_8238DF5C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822487d0
	// ERROR 822487D0
	return;
}

__attribute__((alias("__imp__sub_8238DF68"))) PPC_WEAK_FUNC(sub_8238DF68);
PPC_FUNC_IMPL(__imp__sub_8238DF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8238DF70;
	sub_82248784(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82362380
	ctx.lr = 0x8238DF84;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238df90
	if (ctx.cr6.eq) goto loc_8238DF90;
	// bl 0x82363050
	ctx.lr = 0x8238DF90;
	sub_82363050(ctx, base);
loc_8238DF90:
	// bl 0x8235bf58
	ctx.lr = 0x8238DF94;
	sub_8235BF58(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,35
	ctx.r9.s64 = 35;
	// addi r8,r10,-32352
	ctx.r8.s64 = ctx.r10.s64 + -32352;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r7,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r7.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lbz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r6,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r6.u8);
	// bl 0x82357088
	ctx.lr = 0x8238DFDC;
	sub_82357088(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82355ab0
	ctx.lr = 0x8238DFE4;
	sub_82355AB0(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82355ac0
	ctx.lr = 0x8238DFF0;
	sub_82355AC0(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82355ad0
	ctx.lr = 0x8238DFFC;
	sub_82355AD0(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82355ae0
	ctx.lr = 0x8238E008;
	sub_82355AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// lwz r4,200(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8238e038
	if (!ctx.cr6.eq) goto loc_8238E038;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238e038
	if (!ctx.cr6.eq) goto loc_8238E038;
	// li r4,480
	ctx.r4.s64 = 480;
	// addi r3,r29,132
	ctx.r3.s64 = ctx.r29.s64 + 132;
	// bl 0x823585a0
	ctx.lr = 0x8238E038;
	sub_823585A0(ctx, base);
loc_8238E038:
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238e0bc
	if (!ctx.cr6.eq) goto loc_8238E0BC;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238e0bc
	if (!ctx.cr6.eq) goto loc_8238E0BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c228
	ctx.lr = 0x8238E05C;
	sub_8235C228(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238e0bc
	if (ctx.cr6.eq) goto loc_8238E0BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823ab0f8
	ctx.lr = 0x8238E070;
	sub_823AB0F8(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,35
	ctx.r5.s64 = 35;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238E08C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238E0BC:
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238E0CC"))) PPC_WEAK_FUNC(sub_8238E0CC);
PPC_FUNC_IMPL(__imp__sub_8238E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238E0D0"))) PPC_WEAK_FUNC(sub_8238E0D0);
PPC_FUNC_IMPL(__imp__sub_8238E0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r4,15
	ctx.r11.s64 = ctx.r4.s64 + 15;
	// addi r10,r3,15
	ctx.r10.s64 = ctx.r3.s64 + 15;
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8238E104:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8238e104
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238E104;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82248a40
	ctx.lr = 0x8238E120;
	sub_82248A40(ctx, base);
	// ld r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// lwz r8,64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// lwz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8238E168"))) PPC_WEAK_FUNC(sub_8238E168);
PPC_FUNC_IMPL(__imp__sub_8238E168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8238E188;
	sub_823570E0(ctx, base);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x823570f0
	ctx.lr = 0x8238E190;
	sub_823570F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e1a4
	if (ctx.cr6.eq) goto loc_8238E1A4;
	// bl 0x8238c888
	ctx.lr = 0x8238E19C;
	sub_8238C888(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8238e1a8
	goto loc_8238E1A8;
loc_8238E1A4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8238E1A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823570e0
	ctx.lr = 0x8238E1B0;
	sub_823570E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8238e1c0
	if (!ctx.cr6.eq) goto loc_8238E1C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8238e1d0
	goto loc_8238E1D0;
loc_8238E1C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238e0d0
	ctx.lr = 0x8238E1CC;
	sub_8238E0D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8238E1D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E1E8"))) PPC_WEAK_FUNC(sub_8238E1E8);
PPC_FUNC_IMPL(__imp__sub_8238E1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,852
	ctx.r31.s64 = ctx.r3.s64 + 852;
	// lwz r3,856(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 856);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x8238e21c
	if (ctx.cr6.eq) goto loc_8238E21C;
	// bl 0x82357240
	ctx.lr = 0x8238E218;
	sub_82357240(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8238E21C:
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

__attribute__((alias("__imp__sub_8238E23C"))) PPC_WEAK_FUNC(sub_8238E23C);
PPC_FUNC_IMPL(__imp__sub_8238E23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238E240"))) PPC_WEAK_FUNC(sub_8238E240);
PPC_FUNC_IMPL(__imp__sub_8238E240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8238da58
	ctx.lr = 0x8238E260;
	sub_8238DA58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238e278
	if (ctx.cr6.eq) goto loc_8238E278;
	// bl 0x82357128
	ctx.lr = 0x8238E274;
	sub_82357128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8238E278:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E290"))) PPC_WEAK_FUNC(sub_8238E290);
PPC_FUNC_IMPL(__imp__sub_8238E290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8238E298;
	sub_82248784(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8238E2A4;
	sub_8235BF58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,240
	ctx.r4.s64 = 240;
	// addi r3,r28,112
	ctx.r3.s64 = ctx.r28.s64 + 112;
	// bl 0x823585a0
	ctx.lr = 0x8238E2B4;
	sub_823585A0(ctx, base);
	// lwz r3,368(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 368);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r28,364
	ctx.r30.s64 = ctx.r28.s64 + 364;
	// stw r31,372(r28)
	PPC_STORE_U32(ctx.r28.u32 + 372, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e2d4
	if (ctx.cr6.eq) goto loc_8238E2D4;
	// bl 0x82357240
	ctx.lr = 0x8238E2D0;
	sub_82357240(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_8238E2D4:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r29,r28,404
	ctx.r29.s64 = ctx.r28.s64 + 404;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r3,408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,412(r28)
	PPC_STORE_U32(ctx.r28.u32 + 412, ctx.r31.u32);
	// beq cr6,0x8238e2f8
	if (ctx.cr6.eq) goto loc_8238E2F8;
	// bl 0x82357240
	ctx.lr = 0x8238E2F4;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_8238E2F8:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r30,r27,852
	ctx.r30.s64 = ctx.r27.s64 + 852;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stw r31,424(r28)
	PPC_STORE_U32(ctx.r28.u32 + 424, ctx.r31.u32);
	// stw r31,428(r28)
	PPC_STORE_U32(ctx.r28.u32 + 428, ctx.r31.u32);
	// lwz r3,856(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 856);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,860(r27)
	PPC_STORE_U32(ctx.r27.u32 + 860, ctx.r31.u32);
	// beq cr6,0x8238e324
	if (ctx.cr6.eq) goto loc_8238E324;
	// bl 0x82357240
	ctx.lr = 0x8238E320;
	sub_82357240(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_8238E324:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r29,r27,832
	ctx.r29.s64 = ctx.r27.s64 + 832;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r3,836(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,840(r27)
	PPC_STORE_U32(ctx.r27.u32 + 840, ctx.r31.u32);
	// beq cr6,0x8238e348
	if (ctx.cr6.eq) goto loc_8238E348;
	// bl 0x82357240
	ctx.lr = 0x8238E344;
	sub_82357240(ctx, base);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_8238E348:
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238E358"))) PPC_WEAK_FUNC(sub_8238E358);
PPC_FUNC_IMPL(__imp__sub_8238E358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8238E360;
	sub_82248784(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8235bf58
	ctx.lr = 0x8238E36C;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82362380
	ctx.lr = 0x8238E374;
	sub_82362380(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238e39c
	if (!ctx.cr6.eq) goto loc_8238E39C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238E394;
	sub_823AB100(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238E39C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8238E3A0:
	// bl 0x82370538
	ctx.lr = 0x8238E3A4;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238E3A8;
	sub_82370538(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823707c8
	ctx.lr = 0x8238E3B0;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238e438
	if (ctx.cr6.eq) goto loc_8238E438;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c300
	ctx.lr = 0x8238E3C4;
	sub_8235C300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238e438
	if (ctx.cr6.eq) goto loc_8238E438;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c330
	ctx.lr = 0x8238E3D8;
	sub_8235C330(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82370c48
	ctx.lr = 0x8238E3E8;
	sub_82370C48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823710d8
	ctx.lr = 0x8238E3F4;
	sub_823710D8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82363a90
	ctx.lr = 0x8238E418;
	sub_82363A90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238e430
	if (ctx.cr6.eq) goto loc_8238E430;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c2c8
	ctx.lr = 0x8238E430;
	sub_8235C2C8(ctx, base);
loc_8238E430:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82372340
	ctx.lr = 0x8238E438;
	sub_82372340(ctx, base);
loc_8238E438:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 30, ctx.xer);
	// blt cr6,0x8238e3a0
	if (ctx.cr6.lt) goto loc_8238E3A0;
	// lwz r10,372(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 372);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238e478
	if (ctx.cr6.eq) goto loc_8238E478;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r9,368(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8238E464:
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// slw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// or r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 | ctx.r30.u64;
	// bdnz 0x8238e464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238E464;
loc_8238E478:
	// lwz r11,392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238e574
	if (ctx.cr6.eq) goto loc_8238E574;
loc_8238E484:
	// lwz r11,388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 388);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82370538
	ctx.lr = 0x8238E490;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238E494;
	sub_82370538(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823707c8
	ctx.lr = 0x8238E49C;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238e558
	if (ctx.cr6.eq) goto loc_8238E558;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x8238E4B0;
	sub_82370C48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c330
	ctx.lr = 0x8238E4BC;
	sub_8235C330(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823710d8
	ctx.lr = 0x8238E4C8;
	sub_823710D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371320
	ctx.lr = 0x8238E4D4;
	sub_82371320(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82363a90
	ctx.lr = 0x8238E4F8;
	sub_82363A90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238e56c
	if (ctx.cr6.eq) goto loc_8238E56C;
	// lwz r11,392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// addi r31,r29,384
	ctx.r31.s64 = ctx.r29.s64 + 384;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238e53c
	if (ctx.cr6.eq) goto loc_8238E53C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238e53c
	if (ctx.cr6.eq) goto loc_8238E53C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8238e530
	if (ctx.cr0.eq) goto loc_8238E530;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82358520
	ctx.lr = 0x8238E530;
	sub_82358520(ctx, base);
loc_8238E530:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8238E53C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x8238E544;
	sub_82372340(ctx, base);
	// lwz r11,392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238e484
	if (!ctx.cr6.eq) goto loc_8238E484;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238E558:
	// addi r3,r29,384
	ctx.r3.s64 = ctx.r29.s64 + 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82373768
	ctx.lr = 0x8238E564;
	sub_82373768(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238E56C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x8238E574;
	sub_82372340(ctx, base);
loc_8238E574:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238E57C"))) PPC_WEAK_FUNC(sub_8238E57C);
PPC_FUNC_IMPL(__imp__sub_8238E57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238E580"))) PPC_WEAK_FUNC(sub_8238E580);
PPC_FUNC_IMPL(__imp__sub_8238E580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248784
	ctx.lr = 0x8238E588;
	sub_82248784(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8238e808
	if (ctx.cr6.eq) goto loc_8238E808;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8238e808
	if (!ctx.cr6.eq) goto loc_8238E808;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238e5e0
	if (ctx.cr6.eq) goto loc_8238E5E0;
loc_8238E5B8:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238E5CC;
	sub_823AB100(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238E5E0:
	// bl 0x8235e108
	ctx.lr = 0x8238E5E4;
	sub_8235E108(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8238e61c
	if (ctx.cr6.eq) goto loc_8238E61C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8238E608;
	sub_823AB100(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238E61C:
	// addi r27,r31,68
	ctx.r27.s64 = ctx.r31.s64 + 68;
	// bl 0x823ab0f8
	ctx.lr = 0x8238E624;
	sub_823AB0F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238E630;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8238e660
	if (!ctx.cr6.lt) goto loc_8238E660;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238E64C;
	sub_823AB100(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238E660:
	// bl 0x82362380
	ctx.lr = 0x8238E664;
	sub_82362380(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238e67c
	if (!ctx.cr6.eq) goto loc_8238E67C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// b 0x8238e810
	goto loc_8238E810;
loc_8238E67C:
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8238E688;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238e81c
	if (!ctx.cr6.eq) goto loc_8238E81C;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235e2a8
	ctx.lr = 0x8238E69C;
	sub_8235E2A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238e81c
	if (!ctx.cr6.eq) goto loc_8238E81C;
	// bl 0x8235bf58
	ctx.lr = 0x8238E6A8;
	sub_8235BF58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238e290
	ctx.lr = 0x8238E6BC;
	sub_8238E290(ctx, base);
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
	// lwz r9,200(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8238e788
	if (!ctx.cr6.eq) goto loc_8238E788;
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238e788
	if (!ctx.cr6.eq) goto loc_8238E788;
	// li r4,480
	ctx.r4.s64 = 480;
	// addi r3,r29,132
	ctx.r3.s64 = ctx.r29.s64 + 132;
	// bl 0x823585a0
	ctx.lr = 0x8238E6E8;
	sub_823585A0(ctx, base);
loc_8238E6E8:
	// bl 0x82370538
	ctx.lr = 0x8238E6EC;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238E6F0;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8238E6F4;
	sub_823708C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8238e5b8
	if (ctx.cr6.eq) goto loc_8238E5B8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c350
	ctx.lr = 0x8238E70C;
	sub_8235C350(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c330
	ctx.lr = 0x8238E718;
	sub_8235C330(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x8238E72C;
	sub_82370C48(ctx, base);
	// lwz r10,360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x823710d8
	ctx.lr = 0x8238E73C;
	sub_823710D8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823639c0
	ctx.lr = 0x8238E75C;
	sub_823639C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238e774
	if (ctx.cr6.eq) goto loc_8238E774;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238E76C;
	sub_8237D130(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8238E774:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x8238E77C;
	sub_82372340(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238E788:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8238E78C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c1b0
	ctx.lr = 0x8238E7A0;
	sub_8235C1B0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c1b0
	ctx.lr = 0x8238E7B4;
	sub_8235C1B0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 30, ctx.xer);
	// blt cr6,0x8238e78c
	if (ctx.cr6.lt) goto loc_8238E78C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235c5b8
	ctx.lr = 0x8238E7C8;
	sub_8235C5B8(ctx, base);
	// stw r3,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r3.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x8238e6e8
	if (!ctx.cr6.lt) goto loc_8238E6E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82381358
	ctx.lr = 0x8238E7E0;
	sub_82381358(ctx, base);
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238E7F4;
	sub_823AB100(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
loc_8238E808:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
loc_8238E810:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238E81C;
	sub_823AB100(ctx, base);
loc_8238E81C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822487d4
	// ERROR 822487D4
	return;
}

__attribute__((alias("__imp__sub_8238E828"))) PPC_WEAK_FUNC(sub_8238E828);
PPC_FUNC_IMPL(__imp__sub_8238E828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238E830;
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
	// beq cr6,0x8238e86c
	if (ctx.cr6.eq) goto loc_8238E86C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8238E858;
	sub_823AB100(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238E86C:
	// bl 0x8235bf58
	ctx.lr = 0x8238E870;
	sub_8235BF58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// bl 0x823ab0f8
	ctx.lr = 0x8238E880;
	sub_823AB0F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238E88C;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8238e8bc
	if (!ctx.cr6.lt) goto loc_8238E8BC;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238E8A8;
	sub_823AB100(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238E8BC:
	// bl 0x82362380
	ctx.lr = 0x8238E8C0;
	sub_82362380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8238e8e8
	if (!ctx.cr6.eq) goto loc_8238E8E8;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// bl 0x823ab100
	ctx.lr = 0x8238E8DC;
	sub_823AB100(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238E8E8:
	// bl 0x8238e358
	ctx.lr = 0x8238E8EC;
	sub_8238E358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238db28
	ctx.lr = 0x8238E8F4;
	sub_8238DB28(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8238e9cc
	if (ctx.cr6.lt) goto loc_8238E9CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238e1e8
	ctx.lr = 0x8238E908;
	sub_8238E1E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363718
	ctx.lr = 0x8238E910;
	sub_82363718(ctx, base);
	// li r4,240
	ctx.r4.s64 = 240;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823585a0
	ctx.lr = 0x8238E91C;
	sub_823585A0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_8238E924:
	// bl 0x82370538
	ctx.lr = 0x8238E928;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238E92C;
	sub_82370538(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823707c8
	ctx.lr = 0x8238E934;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238e948
	if (ctx.cr6.eq) goto loc_8238E948;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x82224948
	ctx.lr = 0x8238E948;
	sub_82224948(ctx, base);
loc_8238E948:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r30,30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 30, ctx.xer);
	// blt cr6,0x8238e924
	if (ctx.cr6.lt) goto loc_8238E924;
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r30,29
	ctx.r30.s64 = 29;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238e98c
	if (ctx.cr6.eq) goto loc_8238E98C;
	// lwz r9,368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8238E974:
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8238e984
	if (!ctx.cr6.lt) goto loc_8238E984;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8238E984:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8238e974
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238E974;
loc_8238E98C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238E994;
	sub_8237D130(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238E998;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238E99C;
	sub_82370538(ctx, base);
	// bl 0x823708c0
	ctx.lr = 0x8238E9A0;
	sub_823708C0(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8238e9c4
	if (!ctx.cr6.eq) goto loc_8238E9C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238E9C4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8238E9CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238E9D8"))) PPC_WEAK_FUNC(sub_8238E9D8);
PPC_FUNC_IMPL(__imp__sub_8238E9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8224878c
	ctx.lr = 0x8238E9E0;
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
	// beq cr6,0x8238ea04
	if (ctx.cr6.eq) goto loc_8238EA04;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// b 0x8238eac8
	goto loc_8238EAC8;
loc_8238EA04:
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// bl 0x823ab0f8
	ctx.lr = 0x8238EA0C;
	sub_823AB0F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238EA18;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// blt cr6,0x8238eabc
	if (ctx.cr6.lt) goto loc_8238EABC;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238eabc
	if (!ctx.cr6.eq) goto loc_8238EABC;
	// bl 0x82362380
	ctx.lr = 0x8238EA30;
	sub_82362380(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8238ea5c
	if (!ctx.cr6.eq) goto loc_8238EA5C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// bl 0x823ab100
	ctx.lr = 0x8238EA50;
	sub_823AB100(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238EA5C:
	// bl 0x8238e358
	ctx.lr = 0x8238EA60;
	sub_8238E358(ctx, base);
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8238ead8
	if (ctx.cr6.lt) goto loc_8238EAD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823639c0
	ctx.lr = 0x8238EA98;
	sub_823639C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238ead8
	if (ctx.cr6.eq) goto loc_8238EAD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238EAA8;
	sub_8237D130(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
loc_8238EABC:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
loc_8238EAC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ab100
	ctx.lr = 0x8238EAD0;
	sub_823AB100(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8238EAD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822487dc
	// ERROR 822487DC
	return;
}

__attribute__((alias("__imp__sub_8238EAE4"))) PPC_WEAK_FUNC(sub_8238EAE4);
PPC_FUNC_IMPL(__imp__sub_8238EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238EAE8"))) PPC_WEAK_FUNC(sub_8238EAE8);
PPC_FUNC_IMPL(__imp__sub_8238EAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248788
	ctx.lr = 0x8238EAF0;
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
	// beq cr6,0x8238eb14
	if (ctx.cr6.eq) goto loc_8238EB14;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// b 0x8238ec2c
	goto loc_8238EC2C;
loc_8238EB14:
	// bl 0x8235bf58
	ctx.lr = 0x8238EB18;
	sub_8235BF58(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82362380
	ctx.lr = 0x8238EB20;
	sub_82362380(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8238eb4c
	if (!ctx.cr6.eq) goto loc_8238EB4C;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// bl 0x823ab100
	ctx.lr = 0x8238EB40;
	sub_823AB100(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8238EB4C:
	// addi r28,r31,68
	ctx.r28.s64 = ctx.r31.s64 + 68;
	// bl 0x823ab0f8
	ctx.lr = 0x8238EB54;
	sub_823AB0F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238EB60;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// blt cr6,0x8238ec24
	if (ctx.cr6.lt) goto loc_8238EC24;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238ec24
	if (!ctx.cr6.eq) goto loc_8238EC24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238e358
	ctx.lr = 0x8238EB7C;
	sub_8238E358(ctx, base);
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238ec40
	if (ctx.cr6.eq) goto loc_8238EC40;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82370c48
	ctx.lr = 0x8238EB94;
	sub_82370C48(ctx, base);
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238ebac
	if (ctx.cr6.eq) goto loc_8238EBAC;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8238ebbc
	goto loc_8238EBBC;
loc_8238EBAC:
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238ebbc
	if (ctx.cr6.eq) goto loc_8238EBBC;
	// li r4,2
	ctx.r4.s64 = 2;
loc_8238EBBC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82371320
	ctx.lr = 0x8238EBC4;
	sub_82371320(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823639c0
	ctx.lr = 0x8238EBE4;
	sub_823639C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238ec00
	if (!ctx.cr6.eq) goto loc_8238EC00;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82372340
	ctx.lr = 0x8238EBF4;
	sub_82372340(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8238EC00:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238EC08;
	sub_8237D130(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x82372340
	ctx.lr = 0x8238EC18;
	sub_82372340(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
loc_8238EC24:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
loc_8238EC2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238EC38;
	sub_823AB100(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8238EC40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822487d8
	// ERROR 822487D8
	return;
}

__attribute__((alias("__imp__sub_8238EC4C"))) PPC_WEAK_FUNC(sub_8238EC4C);
PPC_FUNC_IMPL(__imp__sub_8238EC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238EC50"))) PPC_WEAK_FUNC(sub_8238EC50);
PPC_FUNC_IMPL(__imp__sub_8238EC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82248774
	ctx.lr = 0x8238EC58;
	sub_82248774(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r23,12(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238ec98
	if (ctx.cr6.eq) goto loc_8238EC98;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x823ab100
	ctx.lr = 0x8238EC84;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_8238EC98:
	// bl 0x82362380
	ctx.lr = 0x8238EC9C;
	sub_82362380(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238ecd0
	if (!ctx.cr6.eq) goto loc_8238ECD0;
loc_8238ECA8:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238ECBC;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_8238ECD0:
	// bl 0x8235bf58
	ctx.lr = 0x8238ECD4;
	sub_8235BF58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r24,r27,68
	ctx.r24.s64 = ctx.r27.s64 + 68;
	// bl 0x823ab0f8
	ctx.lr = 0x8238ECE4;
	sub_823AB0F8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8237d218
	ctx.lr = 0x8238ECF0;
	sub_8237D218(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bge cr6,0x8238ed20
	if (!ctx.cr6.lt) goto loc_8238ED20;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238ED0C;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_8238ED20:
	// lwz r31,80(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// bl 0x82370538
	ctx.lr = 0x8238ED28;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238ED2C;
	sub_82370538(ctx, base);
	// bl 0x82370800
	ctx.lr = 0x8238ED30;
	sub_82370800(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8238ed60
	if (ctx.cr6.eq) goto loc_8238ED60;
loc_8238ED38:
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ab100
	ctx.lr = 0x8238ED4C;
	sub_823AB100(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r11,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_8238ED60:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238ed38
	if (!ctx.cr6.eq) goto loc_8238ED38;
	// lwz r30,56(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r26,432(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 432);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8238edc0
	if (ctx.cr6.eq) goto loc_8238EDC0;
loc_8238ED84:
	// bl 0x82370538
	ctx.lr = 0x8238ED88;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238ED8C;
	sub_82370538(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823707c8
	ctx.lr = 0x8238ED94;
	sub_823707C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238edb4
	if (ctx.cr6.eq) goto loc_8238EDB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82362888
	ctx.lr = 0x8238EDA8;
	sub_82362888(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8238edb4
	if (!ctx.cr6.eq) goto loc_8238EDB4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8238EDB4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8238ed84
	if (ctx.cr6.lt) goto loc_8238ED84;
loc_8238EDC0:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8238eec4
	if (ctx.cr6.lt) goto loc_8238EEC4;
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238eec4
	if (ctx.cr6.eq) goto loc_8238EEC4;
	// lwz r10,840(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 840);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8238eec4
	if (ctx.cr6.lt) goto loc_8238EEC4;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238eca8
	if (ctx.cr6.eq) goto loc_8238ECA8;
	// lwz r9,836(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 836);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8238EDF8:
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r5,r10,132
	ctx.r5.s64 = ctx.r10.s64 + 132;
	// lwz r4,132(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r3,136(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// lwz r5,140(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// lwz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stw r3,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x8238ee3c
	if (!ctx.cr6.eq) goto loc_8238EE3C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8238EE3C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8238edf8
	if (!ctx.cr0.eq) goto loc_8238EDF8;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// blt cr6,0x8238eca8
	if (ctx.cr6.lt) goto loc_8238ECA8;
	// lwz r11,188(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238ee8c
	if (!ctx.cr6.eq) goto loc_8238EE8C;
	// lwz r11,192(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238ee8c
	if (!ctx.cr6.eq) goto loc_8238EE8C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823a86f8
	ctx.lr = 0x8238EE70;
	sub_823A86F8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8237d130
	ctx.lr = 0x8238EE78;
	sub_8237D130(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
loc_8238EE8C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823651a8
	ctx.lr = 0x8238EE94;
	sub_823651A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238ed38
	if (ctx.cr6.eq) goto loc_8238ED38;
	// bl 0x82370538
	ctx.lr = 0x8238EEA0;
	sub_82370538(ctx, base);
	// bl 0x82370538
	ctx.lr = 0x8238EEA4;
	sub_82370538(ctx, base);
	// bl 0x82370800
	ctx.lr = 0x8238EEA8;
	sub_82370800(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x8238eebc
	if (ctx.cr6.lt) goto loc_8238EEBC;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// li r11,11
	ctx.r11.s64 = 11;
	// bge cr6,0x8238eec0
	if (!ctx.cr6.lt) goto loc_8238EEC0;
loc_8238EEBC:
	// li r11,28
	ctx.r11.s64 = 28;
loc_8238EEC0:
	// stw r11,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r11.u32);
loc_8238EEC4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822487c4
	// ERROR 822487C4
	return;
}

